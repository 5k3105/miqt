package main

import (
	"compress/gzip"
	"crypto/sha256"
	"encoding/hex"
	"encoding/json"
	"fmt"
	"io"
	"log"
	"os"
	"os/exec"
	"strings"
)

func filteredAstPath(inputHeader, cacheKey string) string {
	return cacheFileRoot(inputHeader) + "." + cacheKey + ".filtered.json.gz"
}

var clangVersionMemo string

// clangVersionString returns `clang --version` output, memoized (clangBin is constant per run).
func clangVersionString(clangBin string) string {
	if clangVersionMemo == "" {
		out, err := exec.Command(clangBin, "--version").Output()
		if err != nil {
			clangVersionMemo = "unknown:" + clangBin
		} else {
			clangVersionMemo = string(out)
		}
	}
	return clangVersionMemo
}

// astCacheKey hashes the clang version + cflags so the on-disk AST cache auto-invalidates when
// the toolchain or include flags change — instead of silently reusing a parse from a different
// clang/Qt (the trap that cost a full debugging session: a clang-22 AST was reused on every
// clang-18 run). Call ONCE per generate() (before the parallel parse) to avoid a data race on
// the memo and redundant clang --version calls.
func astCacheKey(clangBin string, cflags []string) string {
	h := sha256.Sum256([]byte(clangVersionString(clangBin) + "\x00" + strings.Join(cflags, "\x00")))
	return hex.EncodeToString(h[:6])
}

func dumpStack(stack []*AstNode) string {
	var ret string
	for i := len(stack) - 1; i >= 0; i-- {
		ret += "<" + stack[i].Kind
	}
	return ret
}

func allowExpressions(stack []*AstNode) bool {
	// In a few exceptional cases, we parse the full expression - not because we
	// really need it but because it's easier to filter it out later

	for _, node := range stack {
		if node.Kind == "ParmVarDecl" || node.Kind == "EnumConstantDecl" {
			return true
		}
	}
	return false
}

func parseInner(ctx *ParseCtx, kind string) bool {
	// Return false for all the kinds whose inner nodes we don't care about
	// at all - this is a performance optimization
	switch kind {
	case "FieldDecl", "TranslationUnitDecl", "NamespaceDecl":
		return true
	case "CXXRecordDecl", "EnumDecl", "EnumConstantDecl": // methods, fields, elements etc
		return true
	case "CXXConstructorDecl", "CXXMethodDecl", "CXXConversionDecl":
		// Parameters, return type - skip when it's outside of a class declaration
		return ctx.stack[len(ctx.stack)-1].Kind == "CXXRecordDecl"
	case "CXXDestructorDecl":
		return false
	case "ParmVarDecl": // Parameter defaults
		return true
	case "TypeAliasDecl", "TypedefDecl": // Can extract from Fields
		return false
	case "CompoundStmt", "CXXCtorInitializer": // Bodies
		return false
	case "LinkageSpecDecl", "FunctionDecl", "AccessSpecDecl", "VarDecl",
		"FileScopeAsmDecl", "FriendDecl", "UsingShadowDecl", "UsingDecl",
		"StaticAssertDecl", "ElaboratedType", "FullComment", "ParagraphComment",
		"EmptyDecl", "IndirectFieldDecl":
		return false
	case "ClassTemplateDecl", "TypeAliasTemplateDecl",
		"ClassTemplateSpecializationDecl",
		"ClassTemplatePartialSpecializationDecl", "FunctionTemplateDecl",
		"VarTemplatePartialSpecializationDecl",
		"VarTemplateSpecializationDecl", // e.g. qhashfunctions.h
		"VarTemplateDecl", "BuiltinTemplateDecl":
		return false // TODO template instantiations
	case "ConstantExpr":
		return true // Enum values / constants / etc
	case "ImplicitCastExpr", "IntegerLiteral", "ParenExpr":
		// Things we have observed in a constant expression
		return true
	case "ConstructorUsingShadowDecl":
		// TODO using Base::Base(...)-style constructors
		return false
	}

	if strings.HasSuffix(kind, "Attr") {
		return false
	}

	if allowExpressions(ctx.stack) {
		return true
	}

	log.Printf("clangfilter: unknown inner kind %s%v", kind, dumpStack(ctx.stack))
	return true
}

func keepField(ctx *ParseCtx, kind, field string, val interface{}) bool {
	switch field {
	case "loc":
		switch kind {
		case "TranslationUnitDecl", "NamespaceDecl", "CXXRecordDecl", "EnumDecl",
			"TypeAliasDecl", "TypedefDecl":
			// only needed in parseHeader
			return true
		case "AccessSpecDecl":
			// Signal detection
			return true
		}

		return false

	case "name", "type", "tagUsed", "definitionData", "bases", "access",
		"isImplicit", "explicitlyDeleted", "explicitlyDefaulted",
		"fixedUnderlyingType", "value", "storageClass", "virtual", "pure",
		"file":
		return true
	case "range": // extended version of loc
		return false
	case "isReferenced", "language", "previousDecl", "originalNamespace", "isInline",
		"isUsed", "mangledName", "inline", "constexpr", "parentDeclContextId",
		"completeDefinition", "variadic", "target", "hasBraces", "init", "baseInit",
		"nominatedNamespace", "implicit", "anyInit", "valueCategory", "castKind",
		"scopedEnumTag", "argType", "opcode", "referencedDecl", "hasInClassInitializer",
		"isPostfix", "canOverflow", "ctorType", "elidable", "hadMultipleCandidates",
		"storageDuration", "conversionFunc", "constructionKind", "ownedTagDecl",
		"isBitfield", "delegatingInit", "mutable", "boundToLValueRef",
		"cleanupsHaveSideEffects", "temp", "dtor", "inherited", "isPartOfExplicitCast",
		"adl", "decl", "list", "tls", "nonOdrUseReason", "zeroing":
		return false
	}
	log.Printf("clangfilter: unknown field %v %v%v", field, kind, dumpStack(ctx.stack))
	return true
}

func keepInner(ctx *ParseCtx, parentKind string, child *AstNode) bool {
	// Nodes that we want to add to the inner array of their parent
	switch child.Kind {
	case "NamespaceDecl", "CXXRecordDecl", "EnumDecl", "TypeAliasDecl", "TypedefDecl",
		"ParmVarDecl":
		return true

	case "StaticAssertDecl", "ClassTemplateDecl",
		"ClassTemplateSpecializationDecl",
		"ClassTemplatePartialSpecializationDecl",
		"FunctionTemplateDecl",
		"BuiltinTemplateDecl",                  // Scintilla
		"VarTemplatePartialSpecializationDecl", // e.g. Qt6 qcontainerinfo.h
		"VarTemplateSpecializationDecl",        // e.g. qhashfunctions.h
		"TypeAliasTemplateDecl",                // e.g. qendian.h
		"VarTemplateDecl",                      // e.g. qglobal.h
		// Template stuff probably can't be supported in the binding since
		// we would need to link a concrete instantiation for each type in
		// the CABI
		"FileScopeAsmDecl",
		"FunctionDecl",
		"FriendDecl", // TODO
		"ElaboratedType":
		return false
	case "VarDecl", "FieldDecl", "IndirectFieldDecl":
		// TODO e.g. qmath.h
		// We could probably generate setter/getter for this in the CABI
		return parentKind == "CXXRecordDecl"

	case "CXXConstructorDecl", "CXXMethodDecl", "CXXConversionDecl", "CXXDestructorDecl":
		return parentKind == "CXXRecordDecl"

	case "LinkageSpecDecl":
		// TODO e.g. qfuturewatcher.h
		// Probably can't be supported in the Go binding
		return false

	case "OverrideAttr", "DeprecatedAttr":
		return true
	case "AccessSpecDecl":
		return parentKind == "CXXRecordDecl"
	case "UsingDirectiveDecl", // qtextstream.h
		"UsingDecl",       // qglobal.h
		"UsingShadowDecl": // global.h
		// TODO e.g.
		// Should be treated like a typedef
		return false
	case "FullComment", "ParagraphComment", "EmptyDecl":
		// Safe to skip
		return false
	case "CompoundStmt", "CXXCtorInitializer":
		return false
	case "EnumConstantDecl":
		return true // Enum values
	case "ConstructorUsingShadowDecl":
		// TODO using Base::Base(...)-style constructors
		return false
	}

	if strings.HasSuffix(child.Kind, "Attr") {
		return false
	}

	if allowExpressions(ctx.stack) {
		return true
	}

	log.Printf("clangfilter: unknown child node kind %s%v", child.Kind, dumpStack(ctx.stack))
	return true
}

func filterAst(in io.Reader) (*AstNode, error) {
	// Filter an AST as produced by `clang -x c++ -Xclang -ast-dump=json` to focus
	// on the information needed to generate a wrapper - implementations, source
	// code locations etc are broadly not used in the later stages.
	var pc = ParseCtx{
		dec:              json.NewDecoder(in),
		ShouldParseInner: parseInner,
		ShouldKeepField:  keepField,
		ShouldKeepInner:  keepInner,
	}

	return parseClangAst(&pc)
}

func writeCache(ast *AstNode, inputHeader, cacheKey string) {
	// Write a compressed version of the AST to disk - the AST is generally
	// highly redundant a compresses by a factor of 10-20x - the typical Qt file
	// is 5-10MB and compresses to ~300-600kB
	astPath := filteredAstPath(inputHeader, cacheKey)
	compressedFile, err := os.Create(astPath)
	if err != nil {
		panic("could not create filtered AST cache for " + inputHeader + ": " + err.Error())
	}
	defer compressedFile.Close()

	var gzw = gzip.NewWriter(compressedFile)
	enc := json.NewEncoder(gzw)
	enc.SetIndent("", "  ")
	err = enc.Encode(ast)
	if err != nil {
		panic("could not encode filtered AST cache: " + err.Error())
	}

	err = gzw.Close()
	if err != nil {
		panic("could not complete write to AST cache file: " + err.Error())
	}
}

func readCache(inputHeader, cacheKey string) (*AstNode, error) {
	compressedFile, err := os.Open(filteredAstPath(inputHeader, cacheKey))
	if err != nil {
		return nil, err
	}
	defer compressedFile.Close()

	reader, err := gzip.NewReader(compressedFile)
	if err != nil {
		return nil, fmt.Errorf("could not create gzip reader for filtered AST cache: %w", err)
	}
	defer reader.Close()

	dec := json.NewDecoder(reader)

	var ast *AstNode
	err = dec.Decode(&ast)
	if err != nil {
		return nil, fmt.Errorf("could not decode filtered AST cache: %w", err)
	}
	return ast, nil
}

// Get or create the filtered AST. The cache is keyed by header path AND cacheKey (a hash of the
// clang version + cflags via astCacheKey), so changing clang/Qt automatically misses the stale
// cache and re-parses — no manual `rm -rf cachedir` needed.
func getFilteredAst(inputHeader, clangBin string, cflags []string, cacheKey string) *AstNode {
	ast, err := readCache(inputHeader, cacheKey)
	if err != nil {
		if !os.IsNotExist(err) {
			panic("could not open filtered AST cache for " + inputHeader + ": " + err.Error())
		}

		// If the file does not exist, we need to create it
		// First, we need to create the AST cache
		ast, err = clangExec(clangBin, inputHeader, cflags)
		if err != nil {
			panic("could not create AST cache for " + inputHeader + ": " + err.Error())
		}

		writeCache(ast, inputHeader, cacheKey)
	}

	return ast
}

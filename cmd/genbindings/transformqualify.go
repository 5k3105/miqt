package main

import "strings"

// astTransformQualifyTypes resolves a bare type reference (e.g. "Definition", "IconType",
// "PaintDeviceMetric") to its fully-qualified registered name (e.g. "KSyntaxHighlighting::Definition",
// "QAbstractFileIconProvider::IconType", "QPaintDevice::PaintDeviceMetric").
//
// Why this is needed: some clang versions spell a type reference with its scope-MINIMAL name
// (relative to the enclosing namespace/class), but genbindings keys KnownClassnames/KnownEnums/
// KnownTypedefs on the FULLY-QUALIFIED name. Without this pass, every namespace-sibling / inherited
// / nested type reference misses the registry lookup and is emitted as a raw, undefined C type
// (e.g. `const Definition* def`, `Options options`). The maintainer's bindings avoided it only
// because his clang happened to spell types qualified; this makes genbindings independent of that.
//
// It tries, for a bare name X used in class C, the prefixes: C's own enclosing scopes (C::, then each
// shorter scope down toward global) AND every (recursive) base class's enclosing scopes — first
// registered match wins. Must run AFTER addKnownTypes (PASS 2), so the registries are complete; and
// BEFORE typedef resolution, so e.g. a now-qualified QFlags typedef resolves to int.
func astTransformQualifyTypes(parsed *CppParsedHeader) {
	isKnown := func(name string) bool {
		if _, ok := KnownClassnames[name]; ok {
			return true
		}
		if _, ok := KnownEnums[name]; ok {
			return true
		}
		if _, ok := KnownTypedefs[name]; ok {
			return true
		}
		return false
	}

	// enclosingScopes("A::B::C") => ["A::B::C", "A::B", "A"] (most-specific first)
	enclosingScopes := func(qual string) []string {
		var out []string
		for s := qual; s != ""; {
			out = append(out, s)
			idx := strings.LastIndex(s, "::")
			if idx < 0 {
				break
			}
			s = s[:idx]
		}
		return out
	}

	for ci := range parsed.Classes {
		c := &parsed.Classes[ci]

		// Candidate scope prefixes: this class's own enclosing scopes + each base class's.
		seen := map[string]struct{}{}
		var prefixes []string
		addScopes := func(qual string) {
			for _, s := range enclosingScopes(qual) {
				if _, dup := seen[s]; !dup {
					seen[s] = struct{}{}
					prefixes = append(prefixes, s)
				}
			}
		}
		addScopes(c.ClassName)
		for _, b := range c.AllInheritsClassInfo() {
			addScopes(b.Class.ClassName)
		}

		// qualifyOne resolves a single bare identifier against the scope prefixes.
		qualifyOne := func(t string) string {
			if t == "" || isKnown(t) {
				return t
			}
			for _, pre := range prefixes {
				if cand := pre + "::" + t; isKnown(cand) {
					return cand
				}
			}
			return t
		}
		// qualifyTypeStr also reaches into a single-arg container's inner type (QList<X>,
		// QVector<X>, QSet<X>, QFlags<X>, ...) so e.g. QList<Definition> -> QList<KSyntaxHighlighting::Definition>.
		// Multi-arg containers (QMap/QPair, inner has a comma) are left alone to avoid format risk.
		var qualifyTypeStr func(string) string
		qualifyTypeStr = func(t string) string {
			t = strings.TrimSpace(t)
			if i := strings.IndexByte(t, '<'); i >= 0 && strings.HasSuffix(t, ">") {
				inner := t[i+1 : len(t)-1]
				if strings.ContainsRune(inner, ',') {
					return t // multi-arg container — leave as-is
				}
				return t[:i] + "<" + qualifyTypeStr(inner) + ">"
			}
			if strings.ContainsAny(t, ":*&() ,") { // already-qualified / pointer / decorated — skip
				return t
			}
			return qualifyOne(t)
		}
		qualify := func(p *CppParameter) {
			p.ParameterType = qualifyTypeStr(p.ParameterType)
		}

		requalify := func(methods []CppMethod) {
			for mi := range methods {
				qualify(&methods[mi].ReturnType)
				for pi := range methods[mi].Parameters {
					qualify(&methods[mi].Parameters[pi])
				}
			}
		}
		requalify(c.Methods)
		requalify(c.Ctors)
	}
}

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
// (e.g. `const Definition* def`, `Options options`, `value_type* data`). The maintainer's bindings
// avoided it only because his clang happened to spell types qualified; this makes genbindings
// independent of that.
//
// It tries, for a bare name X used in class C, the prefixes: C's own enclosing scopes (C::, then each
// shorter scope down toward global) AND every (recursive) base class's enclosing scopes — first
// registered match wins. Must run AFTER addKnownTypes (PASS 2), so the registries are complete; and
// BEFORE typedef resolution, so e.g. a now-qualified QFlags typedef resolves to int.
func astTransformQualifyTypes(parsed *CppParsedHeader) {
	for ci := range parsed.Classes {
		qualifyClassTypes(&parsed.Classes[ci])
	}
}

// astTransformQualifyRegistry applies the same qualification to the global class registry
// (KnownClassnames). This is required for INHERITED virtual methods: e.g. QBitmap binds a
// `virtualbase metric(PaintDeviceMetric)` that it inherits from QPaintDevice, and that method
// is pulled at emit time from the REGISTERED copy of the base class (DirectInheritClassInfo ->
// KnownClassnames), not from the per-header parsed.Classes that astTransformQualifyTypes mutates.
// The registry stores classes by value, so we must write the mutated copy back. Idempotent
// (already-qualified names contain "::" and are skipped), so it's safe to run once per PASS-2.
// Must run after all of this package's PASS-1 addKnownTypes calls (registries complete).
func astTransformQualifyRegistry() {
	for name, lr := range KnownClassnames {
		qualifyClassTypes(&lr.Class)
		KnownClassnames[name] = lr
	}
}

// astTransformQualifyTypedefRegistry qualifies bare nested type references in the UNDERLYING
// type of each registered typedef, against the typedef's own enclosing scope. Needed because a
// member typedef's underlying type is often spelled with bare sibling names — e.g.
// QByteArrayView::const_pointer = `const value_type *`, QByteArrayView::value_type = storage_type.
// applyTypedefs resolves a method type by CHAINING through KnownTypedefs underlying types, so if
// those underlying names stay bare the chain breaks at the first hop and a raw `value_type` /
// `const_pointer` is emitted. Qualifying each link (const_pointer -> QByteArrayView::value_type ->
// QByteArrayView::storage_type -> char) lets the whole chain resolve. Must run after PASS-1
// (registry complete) and before PASS-2 astTransformTypedefs.
func astTransformQualifyTypedefRegistry() {
	for alias, lr := range KnownTypedefs {
		prefixes := qualifyEnclosingScopes(alias) // e.g. ["QByteArrayView::value_type", "QByteArrayView"]
		ut := lr.Typedef.UnderlyingType
		ut.ParameterType = qualifyTypeString(ut.ParameterType, prefixes)
		lr.Typedef.UnderlyingType = ut
		KnownTypedefs[alias] = lr
	}
}

func qualifyTypeIsKnown(name string) bool {
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

// qualifyEnclosingScopes("A::B::C") => ["A::B::C", "A::B", "A"] (most-specific first)
func qualifyEnclosingScopes(qual string) []string {
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

// qualifyTypeString rewrites a bare nested/sibling/inherited type name to its fully-qualified
// registered name, trying each scope prefix in order (first match wins). It also reaches into a
// single-arg container's inner type (QList<X>, QVector<X>, QSet<X>, QFlags<X>, ...) so e.g.
// QList<Definition> -> QList<KSyntaxHighlighting::Definition>. Multi-arg containers (QMap/QPair,
// inner has a comma) are left alone to avoid format risk. Idempotent: already-qualified or
// pointer/decorated strings are returned unchanged.
func qualifyTypeString(t string, prefixes []string) string {
	t = strings.TrimSpace(t)
	if i := strings.IndexByte(t, '<'); i >= 0 && strings.HasSuffix(t, ">") {
		inner := t[i+1 : len(t)-1]
		if strings.ContainsRune(inner, ',') {
			return t // multi-arg container — leave as-is
		}
		return t[:i] + "<" + qualifyTypeString(inner, prefixes) + ">"
	}
	if t == "" || strings.ContainsAny(t, ":*&() ,") { // already-qualified / pointer / decorated — skip
		return t
	}
	if qualifyTypeIsKnown(t) {
		return t
	}
	for _, pre := range prefixes {
		if cand := pre + "::" + t; qualifyTypeIsKnown(cand) {
			return cand
		}
	}
	return t
}

// qualifyClassTypes rewrites bare nested/sibling/inherited type names in a single class's
// method/ctor signatures to their fully-qualified registered names. Idempotent.
func qualifyClassTypes(c *CppClass) {
	// Candidate scope prefixes: this class's own enclosing scopes + each base class's.
	seen := map[string]struct{}{}
	var prefixes []string
	addScopes := func(qual string) {
		for _, s := range qualifyEnclosingScopes(qual) {
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

	qualify := func(p *CppParameter) {
		p.ParameterType = qualifyTypeString(p.ParameterType, prefixes)
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

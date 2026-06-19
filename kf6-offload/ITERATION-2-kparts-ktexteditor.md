# Offload iteration 2 — KParts + KTextEditor (editor + terminal)

The **second** offload, run AFTER iteration 1 (KSyntaxHighlighting + KWidgetsAddons) proves the
pipeline. Heavier + iterative — keep it OUT of iteration 1's config so a panic can't lose the
proven output. Hub: **IW-099** (scoping), **IW-101** (qobject_cast, for `TerminalInterface`).

## Why this is iterative (the panic model)

genbindings **panics** on (a) an unknown **inheritance base** (`intermediate.go:646`) and
(b) an unknown **method type** at emit (`emitgo.go:606`). And `AllowClass` is a **default-allow
blocklist** — `AllowType` only drops a method if `AllowClass(type) == false`. So:

- An unbound type a method references but that ISN'T blocklisted → passes `AllowType` → **panics**.
- **Lever:** add that type to the `AllowClass` switch (`config-allowlist.go`) → the method
  auto-drops → the class binds without it.

We only need `KXMLGUIClient` / the parts **as inheritance-base types** (so `Part`/`View` resolve),
NOT their methods. So **blocklist the method-referenced types** rather than recursively bind them.

## Module chain (append to `ProcessLibraries`, AFTER the proven `kf6/*`, in THIS order)

Dependency order so each base registers before its user; all are written per-module, so if a
later one panics the earlier ones (incl. iteration-1's) survive.

```go
	// 1. KCoreAddons — KPluginFactory (loads the Konsole KPart). KPluginFactory : QObject ✓.
	generate("kf6/kcoreaddons",
		[]string{"/usr/include/KF6/KCoreAddons"},
		OnlyHeaders("kpluginfactory.h", "kpluginmetadata.h"),
		clangBin, "--std=c++17 "+pkgConfigCflags("KF6CoreAddons"), outDir,
		ClangMatchSameHeaderDefinitionOnly)

	// 2. KXmlGui — KXMLGUIClient ONLY (the inheritance base PartBase/View need). Standalone
	//    base; its KActionCollection/KXMLGUIFactory/KXMLGUIBuilder/QDom* methods auto-drop via
	//    the AllowClass additions below.
	generate("kf6/kxmlgui",
		[]string{"/usr/include/KF6/KXmlGui"},
		OnlyHeaders("kxmlguiclient.h"),
		clangBin, "--std=c++17 "+pkgConfigCflags("KF6XmlGui"), outDir,
		ClangMatchSameHeaderDefinitionOnly)

	// 3. KParts — PartBase/Part/ReadOnlyPart/ReadWritePart + PartLoader + TerminalInterface.
	generate("kf6/kparts",
		[]string{"/usr/include/KF6/KParts/kparts", "/usr/include/KF6/KParts"},
		OnlyHeaders("partbase.h", "part.h", "readonlypart.h", "readwritepart.h",
			"partloader.h", "kde_terminal_interface.h"),
		clangBin, "--std=c++17 "+pkgConfigCflags("KF6Parts"), outDir,
		ClangMatchSameHeaderDefinitionOnly)

	// 4. KTextEditor — Editor/Document/View/DocumentCursor (the editor embed).
	generate("kf6/ktexteditor",
		[]string{"/usr/include/KF6/KTextEditor/ktexteditor"},
		OnlyHeaders("editor.h", "document.h", "view.h", "documentcursor.h"),
		clangBin, "--std=c++17 "+pkgConfigCflags("KF6TextEditor"), outDir,
		ClangMatchSameHeaderDefinitionOnly)
```

## `AllowClass` blocklist additions (the starting seed)

Add these to the `switch className` in `AllowClass` (`config-allowlist.go`) so the
`KXMLGUIClient` (and parts) methods that reference them auto-drop instead of panicking. These
are KF6/QtXml types we deliberately do **not** project (we only need the owning class as a base):

```go
		// KF6 KXmlGui — referenced by KXMLGUIClient methods we don't need (bind it as a base only)
		"KActionCollection",   // actionCollection()
		"KXMLGUIFactory",      // factory() / setFactory()
		"KXMLGUIBuilder",      // clientBuilder() / setClientBuilder()
		"QDomDocument",        // domDocument() / setDOMDocument() — QtXml, unbound
		"QDomElement",         // action(const QDomElement&) — QtXml, unbound
		// KF6 KCoreAddons — referenced by KPluginFactory we don't need
		"KAboutData",          // KPluginFactory::create<>/metadata paths may surface it
```

`KXMLGUIClient`'s self-referential methods (`childClients() → QList<KXMLGUIClient*>`,
`insertChildClient(KXMLGUIClient*)`) stay — `KXMLGUIClient` is bound, so they're fine. The
remaining string methods (`componentName`, `xmlFile`, `setXMLFile`, …) bind harmlessly.

## The iterate loop (expect a few rounds)

The seed above covers what's visible in `kxmlguiclient.h`. KParts/KTextEditor will surface MORE
unbound types at emit. Each regen that panics with `emitCabiToGo: Encountered an unknown Qt
class` (or the IL log naming a class) → **add that class name to the `AllowClass` switch** → regen
→ repeat until clean. Likely further seeds (confirm by regen, don't pre-add blindly):
`KPluginMetaData` may need binding (it's in the allowlist above) vs blocklisting; KTextEditor
`Range`/`Cursor`/`MovingRange`/`Attribute` may need binding (they're value types we DO want for a
real editor) — decide per type: **bind** if we use it, **blocklist** if we don't.

## Enablers

- **[IW-101](../../src/items-of-work/iw-101.md) qobject_cast** — to actually USE `TerminalInterface`
  (`qobject_cast<TerminalInterface*>(readOnlyPart)`) and downcast `Document`→`View`. Until then the
  bindings exist but the interface cast needs a hand C++ shim.
- **[IW-100](../../src/items-of-work/iw-100.md)** — value-struct default ctor, if KTextEditor
  `Cursor`/`Range` (aggregate value types) hit the #327 gap.

## Smoke test (extend `testapp/` once generated)

Add: `KTextEditor::Editor::instance()` → `createDocument(nil)` → `createView(nil)` shown in a
window; and load the Konsole KPart via `KPluginFactory` + reparent its `widget()`. Build in the
container; fix inferred names against the real gen.

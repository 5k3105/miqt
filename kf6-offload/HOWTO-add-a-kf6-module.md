# HOWTO — add a KF6 (or third-party Qt) module to miqt genbindings

The reusable recipe behind the bind-Kate's-editor-stack campaign (hub **WN-053**). Distilled
so the next module is mechanical. Cross-refs: **IW-098** (KSyntaxHighlighting), **IW-102**
(KWidgetsAddons), **IW-099** (KParts/KTextEditor — the *not-yet-trivial* ones), **WN-056** (size).

## The one edit

Append a `generate(...)` block at the **end of `ProcessLibraries(...)`** in
`cmd/genbindings/config-libraries.go` (before its closing `}`). Anatomy:

```go
generate(
    "kf6/<lib>",                                   // package → import github.com/mappu/miqt/kf6/<lib>
    []string{ "/usr/include/KF6/<Lib>" },          // header dir(s) to scan (or a single .h)
    OnlyHeaders("foo.h", "bar.h"),                 // allowlist — keep TIGHT (WN-056 binary size)
    clangBin,
    "--std=c++17 "+pkgConfigCflags("KF6<Lib>"),    // cflags via pkg-config
    outDir,
    ClangMatchSameHeaderDefinitionOnly,
)
```

Helpers available in `config-libraries.go`: `OnlyHeaders(...)`, `ExceptHeaders(...)`,
`AllowAllHeaders`. The 7-arg `generate` is defined in `main.go`.

## Rules / gotchas (learned the hard way)

1. **Order: AFTER the `"qt6"` block.** KF6 widgets subclass Qt types (`QColor`,
   `QTextCharFormat`, `QSyntaxHighlighter`, `QWidget`, `QAction`). Those must be registered
   first or the refs don't resolve. Append at the end of `ProcessLibraries` = safe.
2. **Namespace `kf6/<lib>`.** A non-`qt6`-prefixed top-level package is fine — precedent:
   `qt-restricted-extras/qscintilla6`. dimension imports `github.com/mappu/miqt/qt6`; the
   `kf6/*` packages import that base.
3. **Verify in katebuild, NOT the host.** `CGO_ENABLED=1 go build ./cmd/genbindings/` (the
   generator itself does `import "C"`). On the host (`CGO_ENABLED=0`, no gcc) you get a FALSE
   `undefined: emitGo` — `emitgo.go` is silently dropped. Ignore it; build in katebuild.
   ```sh
   distrobox enter katebuild -- bash -lc \
     'cd /home/deck/projects/5k3105/miqt-fork && CGO_ENABLED=1 go build -o /tmp/genbindings-kf6 ./cmd/genbindings/'
   ```
4. **genbindings PANICS (no graceful skip) → a bad module aborts the WHOLE regen.** TWO distinct
   panic sites, with DIFFERENT fixes — know which you hit:
   - **`intermediate.go:646` "inherits from unknown class"** — an unbound **inheritance BASE**.
     Fix: **bind the base** (add its header to a module, earlier in dep order) — you can't just
     blocklist a base. (`AllowInheritedParent` omits a few, e.g. `QList<>` bases.)
   - **`emitgo.go:606` "Encountered an unknown Qt class"** — an unbound **method param/return
     type**. Fix: **blocklist the type** (see gotcha 6) or bind it.
   - (Both surface as `panic(err)` at `main.go:228`.)
   So **only batch modules you're confident generate cleanly.** Self-contained libs
   (KSyntaxHighlighting, KWidgetsAddons = QWidget/QAction subclasses, QtWidgets-only) are safe.
   Heavy libs (KParts, KTextEditor) pull transitive KF6 (KCoreAddons for `KPluginFactory`,
   KConfig/KXmlGui…) whose `.pc` hides deps in `Requires.private` — they need a dependency
   scoping pass + the IW-100 (value-struct ctor) / IW-101 (qobject_cast for `Q_DECLARE_INTERFACE`
   like `TerminalInterface`) enablers BEFORE they can join a batch.
5. **Keep allowlists tight** (WN-056). Bind only the classes you use; drop network/util/`*_export.h`.
6. **Binding a class as an inheritance-base STUB** (when you need the type but not its methods —
   e.g. `KXMLGUIClient` so `Part`/`View` resolve): `AllowClass` (`config-allowlist.go`) is a
   **default-allow blocklist**, and `AllowType` only drops a method if `AllowClass(type)==false`.
   So an unbound type a method references but that *isn't* blocklisted → reaches emit → **panics**
   (`emitgo.go:606`). Fix: **add that type name to the `AllowClass` switch** → the method
   auto-drops → the class binds without it. Iterate: each panicking regen names the next class to
   blocklist (or to *bind*, if it's a value type you actually want). Worked example:
   `ITERATION-2-kparts-ktexteditor.md`.
7. **Order risky modules LAST = batching safety.** genbindings writes output **per-module**
   (`os.WriteFile` per header in `main.go`), so if a heavy/exploratory module panics mid-run, every
   module emitted *before* it (incl. the proven `kf6/*`) is already on disk. Put confident modules
   first, exploratory ones last → a panic never loses good output.
8. **Virtual-override support is `AllowVirtualForClass` (`config-allowlist.go`), default-ALLOW.**
   To subclass a class from Go (e.g. override `AbstractHighlighter::applyFormat` for the webview
   path) you need virtual support — it's ON by default, so no action needed for most classes.
   - For an **abstract** class where `AllowVirtualForClass` returns false, genbindings keeps the
     class but **deletes its constructors** (`transformblocklist.go:34`) — i.e. you can't `New…` it.
   - Pitfall: an abstract class with a pure-virtual miqt can't fully cover links with
     `undefined reference to vtable for MiqtVirtual<Class>` (see the `QAccessibleWidget` comment).
     If the offload build hits that, add the class to `AllowVirtualForClass`'s false-list (loses
     subclassing but links).
   - Size (WN-056): virtual trampolines bloat the binary — disabling virtual for **use-only**
     classes (ones you never subclass) is a deliberate shrink lever.

## The regen runs ALL modules in one pass

`./genbindings` regenerates every `generate()` call (qt, qt6, …, all kf6/*) in a single run.
So staging multiple confident module blocks now = one offload regen yields them all. Flags:
`-clang` (default `clang`), `-outdir` (default `../../`), `-extralibs`.

## Where this all lives

- **Generator edits:** `cmd/genbindings/config-libraries.go` (local `miqt-fork`, and the
  offload base `5k3105/miqt @ fix-virtual-callback-uaf` via the runbook).
- **Offload runbook:** [`README.md`](README.md) (this dir) — clone fork → apply blocks →
  podman build → regen → git-push `kf6/*` back → build dimension `-ldflags "-s -w"` → podman
  save → load on the Deck.
- **This recipe:** here. Update it when a new gotcha appears.

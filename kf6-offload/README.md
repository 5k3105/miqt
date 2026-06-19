# KF6 bindings — build runbook (v0.14.0 base, Qt 6.11)

This branch adds Go/miqt bindings for **KSyntaxHighlighting** + **KWidgetsAddons**, on the
**miqt v0.14.0** base — which supports **Qt 6.11** (`#322`). Config already applied:
`cmd/genbindings/config-libraries.go` has the two `kf6/*` `generate()` blocks; the generator
also carries small **graceful-skip** patches so the full upstream (Qt5+Qt6) config runs in a
trimmed Qt6+KF6 Arch env. Hub: IW-098 / IW-102 / WN-053.

Run on a machine with RAM to spare (the regen + cgo link OOM-kill a Steam Deck). Arch base.

```sh
# 1. env image — downloads Clang 18 (~1GB, one-time; the generator needs the Clang-18 AST format,
#    Arch's Clang 22 produces broken nested-enum bindings even on v0.14.0)
podman build -t miqt-kf6 -f kf6-offload/Containerfile .

# 2. regen ALL bindings with Clang 18 (clean Qt 6.11 qt6 + kf6/*); skips Qt5 + uninstalled submodules.
#    NOTE the `rm -rf cachedir`: genbindings caches the clang AST per header path, NOT per clang
#    version (cachedir/ is gitignored, persists across runs/branches). Without clearing it, a
#    previous Clang-22 run's AST is reused and Clang 18 never actually re-parses.
podman run --rm -v "$PWD":/work -w /work miqt-kf6 bash -lc '
  rm -rf cmd/genbindings/cachedir &&
  cd cmd/genbindings &&
  go build -o /tmp/genbindings . &&
  /tmp/genbindings -clang clang18 -outdir ../../
'

# 3. CANARY — should be `int options`, not `Options options`:
grep -n 'options' qt6/gen_qabstractfileiconprovider.h | head

# 4. if clean, commit + push the generated source, then smoke-test the bindings:
git add -A && git commit -m "kf6: generate KSyntaxHighlighting + KWidgetsAddons (v0.14.0/Qt6.11)" && git push
podman run --rm -v "$PWD":/work -w /work/kf6-offload/testapp miqt-kf6 \
  bash -lc 'CGO_ENABLED=1 go build -ldflags "-s -w" -o /tmp/kf6test .'
```

A clean testapp build (KMessageWidget + a SyntaxHighlighter on a QPlainTextEdit) = Qt 6.11
bindings + KF6, both correct. If a `testapp/main.go` name doesn't match the real gen, the
compiler points at it — fix it there (miqt overload suffixes / embedded-base accessors vary).

## Use from dimension
Point dimension's `go.mod` `replace github.com/mappu/miqt => <this checkout>`, import
`github.com/mappu/miqt/kf6/ksyntaxhighlighting` / `.../kf6/kwidgetsaddons`, build with
`-ldflags "-s -w"` (WN-056). This is the v0.14.0/Qt-6.11 base, so the newer WebEngine API is
available too.

## More modules / editor + terminal
- `HOWTO-add-a-kf6-module.md` — the reusable recipe + gotchas.
- `ITERATION-2-kparts-ktexteditor.md` — the KParts/KTextEditor (editor + Konsole terminal) chain.

# KF6 bindings — build runbook (this branch)

This branch (`kf6-bindings`, off `fix-virtual-callback-uaf`) adds Go/miqt bindings for two KF6
libraries via genbindings. **The module config is already applied** in
`cmd/genbindings/config-libraries.go` (two `generate()` blocks at the end of
`ProcessLibraries`): `kf6/ksyntaxhighlighting` + `kf6/kwidgetsaddons`.

Run this **on a machine with RAM to spare** (the regen + cgo link OOM-kill a Steam Deck). All KF6
dev packages must be present (Arch package names: `syntax-highlighting kwidgetsaddons qt6-base`; the included
`Containerfile` provides them).

## 1. Build the env image

```sh
podman build -t miqt-kf6 -f kf6-offload/Containerfile .
```

(Self-checks that the KF6 headers + `pkg-config KF6SyntaxHighlighting` are present.)

## 2. Regenerate ALL bindings (produces the new kf6/* packages)

```sh
podman run --rm -v "$PWD":/work -w /work miqt-kf6 bash -lc '
  cd cmd/genbindings &&
  go build -o /tmp/genbindings . &&
  /tmp/genbindings -clang "$(command -v clang)" -outdir ../../
'
git add -A && git commit -m "kf6: generate KSyntaxHighlighting + KWidgetsAddons bindings"
git push          # the generated kf6/ksyntaxhighlighting/ + kf6/kwidgetsaddons/ come back via git
```

The single regen rewrites every package and writes the new `kf6/ksyntaxhighlighting/` and
`kf6/kwidgetsaddons/`.

## 3. Smoke-test the bindings

```sh
podman run --rm -v "$PWD":/work -w /work/kf6-offload/testapp miqt-kf6 \
  bash -lc 'CGO_ENABLED=1 go build -ldflags "-s -w" -o /tmp/kf6test .'
# run with host X:  podman run --rm --net=host -e DISPLAY -v /tmp/.X11-unix:/tmp/.X11-unix ... /tmp/kf6test
```

`testapp/` constructs a `KMessageWidget` and attaches a `SyntaxHighlighter`
(Repository→"Go"/"Breeze Dark") to a `QPlainTextEdit`. A clean build + a highlighted window =
the bindings are good. If a method/enum/accessor name errors, the compiler points at it — fix
`testapp/main.go` (miqt overload suffixes / embedded-base accessors can differ from the inferred
names).

## 4. Use from your app (e.g. dimension)

Point your app's `go.mod` `replace github.com/mappu/miqt => <this checkout>`, import
`github.com/mappu/miqt/kf6/ksyntaxhighlighting` / `.../kf6/kwidgetsaddons`, and build with
`-ldflags "-s -w"` (binary-size lever — see the 5k3105 hub WN-056).

## Adding more modules / the editor+terminal (iteration 2)

- `HOWTO-add-a-kf6-module.md` — the reusable recipe (the `generate()` anatomy + the gotchas:
  after-`qt6` ordering, the two panic sites, the `AllowClass` blocklist for inheritance-base
  stubs, order-risky-modules-last, virtual-override support).
- `ITERATION-2-kparts-ktexteditor.md` — the KParts/KTextEditor (editor + Konsole terminal)
  dependency chain + the `AllowClass` blocklist seed. Heavier/iterative — run it as a **second**
  regen after this one proves the pipeline.

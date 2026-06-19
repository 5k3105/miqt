// Smoke-test module for the generated KF6 bindings. Build IN THE CONTAINER after the regen.
// This testapp lives inside the miqt repo, so the replace points at the repo root (../..) —
// the same checkout genbindings wrote kf6/ksyntaxhighlighting + kf6/kwidgetsaddons into.
//   CGO_ENABLED=1 go build -ldflags "-s -w" -o /tmp/kf6test .
//   /tmp/kf6test            # needs an X display
module kf6test

go 1.26

require github.com/mappu/miqt v0.14.0

replace github.com/mappu/miqt => ../..

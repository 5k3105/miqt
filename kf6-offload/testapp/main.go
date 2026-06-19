// kf6 binding smoke test — exercises kf6/ksyntaxhighlighting + kf6/kwidgetsaddons.
//
// BUILD + RUN IN THE OFFLOAD CONTAINER, AFTER the regen — these packages do not exist
// until genbindings has produced them (see ../README.md steps 3–4). It will NOT build on
// the Deck (no generated bindings, no gcc/Qt cgo).
//
// The API names below are inferred from the C++ headers + miqt naming conventions. miqt
// can shift overload suffixes (NewFoo / NewFoo2 / NewFoo3) and the embedded-base accessor;
// if the container build errors on a name, fix it HERE — the compiler points right at it.
// This is a scaffold to confirm the bindings LOAD + a theme/grammar HIGHLIGHTS + the addon
// widgets construct, not a guaranteed-correct program.
package main

import (
	"os"

	"github.com/mappu/miqt/kf6/ksyntaxhighlighting"
	"github.com/mappu/miqt/kf6/kwidgetsaddons"
	"github.com/mappu/miqt/qt6"
)

const sample = `package main

import "fmt"

// Fibonacci returns the nth Fibonacci number.
func Fibonacci(n int) int {
	if n < 2 {
		return n
	}
	return Fibonacci(n-1) + Fibonacci(n-2)
}

func main() {
	for i := 0; i < 10; i++ {
		fmt.Println(Fibonacci(i))
	}
}
`

func main() {
	qt6.NewQApplication(os.Args)

	win := qt6.NewQWidget(nil)
	win.SetWindowTitle("KF6 bindings smoke test")
	layout := qt6.NewQVBoxLayout(win)

	// --- KWidgetsAddons: an inline info bar (KMessageWidget) ---
	msg := kwidgetsaddons.NewKMessageWidget(win)
	msg.SetText("KSyntaxHighlighting + KWidgetsAddons bindings loaded OK.")
	msg.SetMessageType(kwidgetsaddons.KMessageWidget__Information)
	layout.AddWidget(msg.QWidget) // embedded base accessor — adjust if miqt names it differently

	// --- KSyntaxHighlighting: highlight Go in a QPlainTextEdit ---
	edit := qt6.NewQPlainTextEdit(win)
	edit.SetPlainText(sample)

	repo := ksyntaxhighlighting.NewRepository()
	def := repo.DefinitionForName("Go")    // KSyntaxHighlighting::Repository::definitionForName
	theme := repo.Theme("Breeze Dark")     // KSyntaxHighlighting::Repository::theme(name)

	// SyntaxHighlighter is the bundled QSyntaxHighlighter subclass; the QTextDocument* ctor
	// attaches it to the edit. No Go-side override, no FormatRange (retires the #327 path).
	hl := ksyntaxhighlighting.NewSyntaxHighlighter2(edit.Document())
	hl.SetDefinition(def)
	hl.SetTheme(theme)
	hl.Rehighlight()

	layout.AddWidget(edit.QWidget)

	win.Resize(760, 560)
	win.Show()
	qt6.QApplication_Exec()
}

package ksyntaxhighlighting

/*

#include "gen_abstracthighlighter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type KSyntaxHighlighting__AbstractHighlighter struct {
	h *C.KSyntaxHighlighting__AbstractHighlighter
}

func (this *KSyntaxHighlighting__AbstractHighlighter) cPointer() *C.KSyntaxHighlighting__AbstractHighlighter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KSyntaxHighlighting__AbstractHighlighter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKSyntaxHighlighting__AbstractHighlighter constructs the type using only CGO pointers.
func newKSyntaxHighlighting__AbstractHighlighter(h *C.KSyntaxHighlighting__AbstractHighlighter) *KSyntaxHighlighting__AbstractHighlighter {
	if h == nil {
		return nil
	}

	return &KSyntaxHighlighting__AbstractHighlighter{h: h}
}

// UnsafeNewKSyntaxHighlighting__AbstractHighlighter constructs the type using only unsafe pointers.
func UnsafeNewKSyntaxHighlighting__AbstractHighlighter(h unsafe.Pointer) *KSyntaxHighlighting__AbstractHighlighter {
	return newKSyntaxHighlighting__AbstractHighlighter((*C.KSyntaxHighlighting__AbstractHighlighter)(h))
}

func (this *KSyntaxHighlighting__AbstractHighlighter) Definition() Definition {
	int /* TODO  */
}

func (this *KSyntaxHighlighting__AbstractHighlighter) SetDefinition(def *Definition) {
	C.KSyntaxHighlighting__AbstractHighlighter_setDefinition(this.h, def)
}

func (this *KSyntaxHighlighting__AbstractHighlighter) Theme() Theme {
	int /* TODO  */
}

func (this *KSyntaxHighlighting__AbstractHighlighter) SetTheme(theme *Theme) {
	C.KSyntaxHighlighting__AbstractHighlighter_setTheme(this.h, theme)
}

// Delete this object from C++ memory.
func (this *KSyntaxHighlighting__AbstractHighlighter) Delete() {
	C.KSyntaxHighlighting__AbstractHighlighter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KSyntaxHighlighting__AbstractHighlighter) GoGC() {
	runtime.SetFinalizer(this, func(this *KSyntaxHighlighting__AbstractHighlighter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

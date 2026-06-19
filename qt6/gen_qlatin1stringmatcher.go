package qt6

/*

#include "gen_qlatin1stringmatcher.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLatin1StringMatcher struct {
	h *C.QLatin1StringMatcher
}

func (this *QLatin1StringMatcher) cPointer() *C.QLatin1StringMatcher {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLatin1StringMatcher) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLatin1StringMatcher constructs the type using only CGO pointers.
func newQLatin1StringMatcher(h *C.QLatin1StringMatcher) *QLatin1StringMatcher {
	if h == nil {
		return nil
	}

	return &QLatin1StringMatcher{h: h}
}

// UnsafeNewQLatin1StringMatcher constructs the type using only unsafe pointers.
func UnsafeNewQLatin1StringMatcher(h unsafe.Pointer) *QLatin1StringMatcher {
	return newQLatin1StringMatcher((*C.QLatin1StringMatcher)(h))
}

// NewQLatin1StringMatcher constructs a new QLatin1StringMatcher object.
func NewQLatin1StringMatcher() *QLatin1StringMatcher {

	return newQLatin1StringMatcher(C.QLatin1StringMatcher_new())
}

func (this *QLatin1StringMatcher) SetCaseSensitivity(cs CaseSensitivity) {
	C.QLatin1StringMatcher_setCaseSensitivity(this.h, (C.int)(cs))
}

func (this *QLatin1StringMatcher) CaseSensitivity() CaseSensitivity {
	return (CaseSensitivity)(C.QLatin1StringMatcher_caseSensitivity(this.h))
}

// Delete this object from C++ memory.
func (this *QLatin1StringMatcher) Delete() {
	C.QLatin1StringMatcher_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLatin1StringMatcher) GoGC() {
	runtime.SetFinalizer(this, func(this *QLatin1StringMatcher) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

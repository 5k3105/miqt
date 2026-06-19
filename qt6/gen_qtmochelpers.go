package qt6

/*

#include "gen_qtmochelpers.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QtMocHelpers__detail__TypeCompletenessForMetaType bool

const (
	QtMocHelpers__detail__TypeMayBeIncomplete QtMocHelpers__detail__TypeCompletenessForMetaType = false
	QtMocHelpers__detail__TypeMustBeComplete  QtMocHelpers__detail__TypeCompletenessForMetaType = true
)

type QtMocHelpers__NoType struct {
	h *C.QtMocHelpers__NoType
}

func (this *QtMocHelpers__NoType) cPointer() *C.QtMocHelpers__NoType {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtMocHelpers__NoType) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQtMocHelpers__NoType constructs the type using only CGO pointers.
func newQtMocHelpers__NoType(h *C.QtMocHelpers__NoType) *QtMocHelpers__NoType {
	if h == nil {
		return nil
	}

	return &QtMocHelpers__NoType{h: h}
}

// UnsafeNewQtMocHelpers__NoType constructs the type using only unsafe pointers.
func UnsafeNewQtMocHelpers__NoType(h unsafe.Pointer) *QtMocHelpers__NoType {
	return newQtMocHelpers__NoType((*C.QtMocHelpers__NoType)(h))
}

// Delete this object from C++ memory.
func (this *QtMocHelpers__NoType) Delete() {
	C.QtMocHelpers__NoType_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtMocHelpers__NoType) GoGC() {
	runtime.SetFinalizer(this, func(this *QtMocHelpers__NoType) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt6

/*

#include "gen_qtyperevision.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTypeRevision struct {
	h *C.QTypeRevision
}

func (this *QTypeRevision) cPointer() *C.QTypeRevision {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTypeRevision) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTypeRevision constructs the type using only CGO pointers.
func newQTypeRevision(h *C.QTypeRevision) *QTypeRevision {
	if h == nil {
		return nil
	}

	return &QTypeRevision{h: h}
}

// UnsafeNewQTypeRevision constructs the type using only unsafe pointers.
func UnsafeNewQTypeRevision(h unsafe.Pointer) *QTypeRevision {
	return newQTypeRevision((*C.QTypeRevision)(h))
}

// NewQTypeRevision constructs a new QTypeRevision object.
func NewQTypeRevision() *QTypeRevision {

	return newQTypeRevision(C.QTypeRevision_new())
}

// NewQTypeRevision2 constructs a new QTypeRevision object.
func NewQTypeRevision2(param1 *QTypeRevision) *QTypeRevision {

	return newQTypeRevision(C.QTypeRevision_new2(param1.cPointer()))
}

func QTypeRevision_Zero() *QTypeRevision {
	_goptr := newQTypeRevision(C.QTypeRevision_zero())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTypeRevision) HasMajorVersion() bool {
	return (bool)(C.QTypeRevision_hasMajorVersion(this.h))
}

func (this *QTypeRevision) MajorVersion() byte {
	return (byte)(C.QTypeRevision_majorVersion(this.h))
}

func (this *QTypeRevision) HasMinorVersion() bool {
	return (bool)(C.QTypeRevision_hasMinorVersion(this.h))
}

func (this *QTypeRevision) MinorVersion() byte {
	return (byte)(C.QTypeRevision_minorVersion(this.h))
}

func (this *QTypeRevision) IsValid() bool {
	return (bool)(C.QTypeRevision_isValid(this.h))
}

// Delete this object from C++ memory.
func (this *QTypeRevision) Delete() {
	C.QTypeRevision_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTypeRevision) GoGC() {
	runtime.SetFinalizer(this, func(this *QTypeRevision) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

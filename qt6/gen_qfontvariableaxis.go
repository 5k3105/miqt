package qt6

/*

#include "gen_qfontvariableaxis.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFontVariableAxis struct {
	h *C.QFontVariableAxis
}

func (this *QFontVariableAxis) cPointer() *C.QFontVariableAxis {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFontVariableAxis) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFontVariableAxis constructs the type using only CGO pointers.
func newQFontVariableAxis(h *C.QFontVariableAxis) *QFontVariableAxis {
	if h == nil {
		return nil
	}

	return &QFontVariableAxis{h: h}
}

// UnsafeNewQFontVariableAxis constructs the type using only unsafe pointers.
func UnsafeNewQFontVariableAxis(h unsafe.Pointer) *QFontVariableAxis {
	return newQFontVariableAxis((*C.QFontVariableAxis)(h))
}

// NewQFontVariableAxis constructs a new QFontVariableAxis object.
func NewQFontVariableAxis() *QFontVariableAxis {

	return newQFontVariableAxis(C.QFontVariableAxis_new())
}

// NewQFontVariableAxis2 constructs a new QFontVariableAxis object.
func NewQFontVariableAxis2(axis *QFontVariableAxis) *QFontVariableAxis {

	return newQFontVariableAxis(C.QFontVariableAxis_new2(axis.cPointer()))
}

func (this *QFontVariableAxis) Swap(other *QFontVariableAxis) {
	C.QFontVariableAxis_swap(this.h, other.cPointer())
}

func (this *QFontVariableAxis) OperatorAssign(axis *QFontVariableAxis) {
	C.QFontVariableAxis_operatorAssign(this.h, axis.cPointer())
}

func (this *QFontVariableAxis) Tag() *QFont__Tag {
	_goptr := newQFont__Tag(C.QFontVariableAxis_tag(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontVariableAxis) SetTag(tag QFont__Tag) {
	C.QFontVariableAxis_setTag(this.h, tag.cPointer())
}

func (this *QFontVariableAxis) Name() string {
	var _ms C.struct_miqt_string = C.QFontVariableAxis_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontVariableAxis) SetName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QFontVariableAxis_setName(this.h, name_ms)
}

func (this *QFontVariableAxis) MinimumValue() float64 {
	return (float64)(C.QFontVariableAxis_minimumValue(this.h))
}

func (this *QFontVariableAxis) SetMinimumValue(minimumValue float64) {
	C.QFontVariableAxis_setMinimumValue(this.h, (C.double)(minimumValue))
}

func (this *QFontVariableAxis) MaximumValue() float64 {
	return (float64)(C.QFontVariableAxis_maximumValue(this.h))
}

func (this *QFontVariableAxis) SetMaximumValue(maximumValue float64) {
	C.QFontVariableAxis_setMaximumValue(this.h, (C.double)(maximumValue))
}

func (this *QFontVariableAxis) DefaultValue() float64 {
	return (float64)(C.QFontVariableAxis_defaultValue(this.h))
}

func (this *QFontVariableAxis) SetDefaultValue(defaultValue float64) {
	C.QFontVariableAxis_setDefaultValue(this.h, (C.double)(defaultValue))
}

// Delete this object from C++ memory.
func (this *QFontVariableAxis) Delete() {
	C.QFontVariableAxis_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFontVariableAxis) GoGC() {
	runtime.SetFinalizer(this, func(this *QFontVariableAxis) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

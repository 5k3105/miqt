package qt6

/*

#include "gen_qpdfoutputintent.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPdfOutputIntent struct {
	h *C.QPdfOutputIntent
}

func (this *QPdfOutputIntent) cPointer() *C.QPdfOutputIntent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPdfOutputIntent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPdfOutputIntent constructs the type using only CGO pointers.
func newQPdfOutputIntent(h *C.QPdfOutputIntent) *QPdfOutputIntent {
	if h == nil {
		return nil
	}

	return &QPdfOutputIntent{h: h}
}

// UnsafeNewQPdfOutputIntent constructs the type using only unsafe pointers.
func UnsafeNewQPdfOutputIntent(h unsafe.Pointer) *QPdfOutputIntent {
	return newQPdfOutputIntent((*C.QPdfOutputIntent)(h))
}

// NewQPdfOutputIntent constructs a new QPdfOutputIntent object.
func NewQPdfOutputIntent() *QPdfOutputIntent {

	return newQPdfOutputIntent(C.QPdfOutputIntent_new())
}

// NewQPdfOutputIntent2 constructs a new QPdfOutputIntent object.
func NewQPdfOutputIntent2(other *QPdfOutputIntent) *QPdfOutputIntent {

	return newQPdfOutputIntent(C.QPdfOutputIntent_new2(other.cPointer()))
}

func (this *QPdfOutputIntent) OperatorAssign(other *QPdfOutputIntent) {
	C.QPdfOutputIntent_operatorAssign(this.h, other.cPointer())
}

func (this *QPdfOutputIntent) Swap(other *QPdfOutputIntent) {
	C.QPdfOutputIntent_swap(this.h, other.cPointer())
}

func (this *QPdfOutputIntent) OutputConditionIdentifier() string {
	var _ms C.struct_miqt_string = C.QPdfOutputIntent_outputConditionIdentifier(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfOutputIntent) SetOutputConditionIdentifier(identifier string) {
	identifier_ms := C.struct_miqt_string{}
	identifier_ms.data = C.CString(identifier)
	identifier_ms.len = C.size_t(len(identifier))
	defer C.free(unsafe.Pointer(identifier_ms.data))
	C.QPdfOutputIntent_setOutputConditionIdentifier(this.h, identifier_ms)
}

func (this *QPdfOutputIntent) OutputCondition() string {
	var _ms C.struct_miqt_string = C.QPdfOutputIntent_outputCondition(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfOutputIntent) SetOutputCondition(condition string) {
	condition_ms := C.struct_miqt_string{}
	condition_ms.data = C.CString(condition)
	condition_ms.len = C.size_t(len(condition))
	defer C.free(unsafe.Pointer(condition_ms.data))
	C.QPdfOutputIntent_setOutputCondition(this.h, condition_ms)
}

func (this *QPdfOutputIntent) RegistryName() *QUrl {
	_goptr := newQUrl(C.QPdfOutputIntent_registryName(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfOutputIntent) SetRegistryName(name *QUrl) {
	C.QPdfOutputIntent_setRegistryName(this.h, name.cPointer())
}

func (this *QPdfOutputIntent) OutputProfile() *QColorSpace {
	_goptr := newQColorSpace(C.QPdfOutputIntent_outputProfile(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfOutputIntent) SetOutputProfile(profile *QColorSpace) {
	C.QPdfOutputIntent_setOutputProfile(this.h, profile.cPointer())
}

// Delete this object from C++ memory.
func (this *QPdfOutputIntent) Delete() {
	C.QPdfOutputIntent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPdfOutputIntent) GoGC() {
	runtime.SetFinalizer(this, func(this *QPdfOutputIntent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt6

/*

#include "gen_qtipccommon.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QNativeIpcKey__Type uint16

const (
	QNativeIpcKey__SystemV       QNativeIpcKey__Type = 81
	QNativeIpcKey__PosixRealtime QNativeIpcKey__Type = 256
	QNativeIpcKey__Windows       QNativeIpcKey__Type = 257
)

type QNativeIpcKey struct {
	h *C.QNativeIpcKey
}

func (this *QNativeIpcKey) cPointer() *C.QNativeIpcKey {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNativeIpcKey) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNativeIpcKey constructs the type using only CGO pointers.
func newQNativeIpcKey(h *C.QNativeIpcKey) *QNativeIpcKey {
	if h == nil {
		return nil
	}

	return &QNativeIpcKey{h: h}
}

// UnsafeNewQNativeIpcKey constructs the type using only unsafe pointers.
func UnsafeNewQNativeIpcKey(h unsafe.Pointer) *QNativeIpcKey {
	return newQNativeIpcKey((*C.QNativeIpcKey)(h))
}

// NewQNativeIpcKey constructs a new QNativeIpcKey object.
func NewQNativeIpcKey() *QNativeIpcKey {

	return newQNativeIpcKey(C.QNativeIpcKey_new())
}

// NewQNativeIpcKey2 constructs a new QNativeIpcKey object.
func NewQNativeIpcKey2(typeVal Type) *QNativeIpcKey {

	return newQNativeIpcKey(C.QNativeIpcKey_new2(typeVal))
}

// NewQNativeIpcKey3 constructs a new QNativeIpcKey object.
func NewQNativeIpcKey3(k string) *QNativeIpcKey {
	k_ms := C.struct_miqt_string{}
	k_ms.data = C.CString(k)
	k_ms.len = C.size_t(len(k))
	defer C.free(unsafe.Pointer(k_ms.data))

	return newQNativeIpcKey(C.QNativeIpcKey_new3(k_ms))
}

// NewQNativeIpcKey4 constructs a new QNativeIpcKey object.
func NewQNativeIpcKey4(other *QNativeIpcKey) *QNativeIpcKey {

	return newQNativeIpcKey(C.QNativeIpcKey_new4(other.cPointer()))
}

// NewQNativeIpcKey5 constructs a new QNativeIpcKey object.
func NewQNativeIpcKey5(k string, typeVal Type) *QNativeIpcKey {
	k_ms := C.struct_miqt_string{}
	k_ms.data = C.CString(k)
	k_ms.len = C.size_t(len(k))
	defer C.free(unsafe.Pointer(k_ms.data))

	return newQNativeIpcKey(C.QNativeIpcKey_new5(k_ms, typeVal))
}

func QNativeIpcKey_LegacyDefaultTypeForOs() Type {
	int /* TODO  */
}

func (this *QNativeIpcKey) OperatorAssign(other *QNativeIpcKey) {
	C.QNativeIpcKey_operatorAssign(this.h, other.cPointer())
}

func (this *QNativeIpcKey) Swap(other *QNativeIpcKey) {
	C.QNativeIpcKey_swap(this.h, other.cPointer())
}

func (this *QNativeIpcKey) IsEmpty() bool {
	return (bool)(C.QNativeIpcKey_isEmpty(this.h))
}

func (this *QNativeIpcKey) IsValid() bool {
	return (bool)(C.QNativeIpcKey_isValid(this.h))
}

func (this *QNativeIpcKey) Type() Type {
	int /* TODO  */
}

func (this *QNativeIpcKey) SetType(typeVal Type) {
	C.QNativeIpcKey_setType(this.h, typeVal)
}

func (this *QNativeIpcKey) NativeKey() string {
	var _ms C.struct_miqt_string = C.QNativeIpcKey_nativeKey(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNativeIpcKey) SetNativeKey(newKey string) {
	newKey_ms := C.struct_miqt_string{}
	newKey_ms.data = C.CString(newKey)
	newKey_ms.len = C.size_t(len(newKey))
	defer C.free(unsafe.Pointer(newKey_ms.data))
	C.QNativeIpcKey_setNativeKey(this.h, newKey_ms)
}

func (this *QNativeIpcKey) ToString() string {
	var _ms C.struct_miqt_string = C.QNativeIpcKey_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNativeIpcKey_FromString(stringVal string) *QNativeIpcKey {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQNativeIpcKey(C.QNativeIpcKey_fromString(stringVal_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QNativeIpcKey) Delete() {
	C.QNativeIpcKey_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNativeIpcKey) GoGC() {
	runtime.SetFinalizer(this, func(this *QNativeIpcKey) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

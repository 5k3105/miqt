package qt6

/*

#include "gen_qsystemsemaphore.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSystemSemaphore__AccessMode int

const (
	QSystemSemaphore__Open   QSystemSemaphore__AccessMode = 0
	QSystemSemaphore__Create QSystemSemaphore__AccessMode = 1
)

type QSystemSemaphore__SystemSemaphoreError int

const (
	QSystemSemaphore__NoError          QSystemSemaphore__SystemSemaphoreError = 0
	QSystemSemaphore__PermissionDenied QSystemSemaphore__SystemSemaphoreError = 1
	QSystemSemaphore__KeyError         QSystemSemaphore__SystemSemaphoreError = 2
	QSystemSemaphore__AlreadyExists    QSystemSemaphore__SystemSemaphoreError = 3
	QSystemSemaphore__NotFound         QSystemSemaphore__SystemSemaphoreError = 4
	QSystemSemaphore__OutOfResources   QSystemSemaphore__SystemSemaphoreError = 5
	QSystemSemaphore__UnknownError     QSystemSemaphore__SystemSemaphoreError = 6
)

type QSystemSemaphore struct {
	h *C.QSystemSemaphore
}

func (this *QSystemSemaphore) cPointer() *C.QSystemSemaphore {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSystemSemaphore) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSystemSemaphore constructs the type using only CGO pointers.
func newQSystemSemaphore(h *C.QSystemSemaphore) *QSystemSemaphore {
	if h == nil {
		return nil
	}

	return &QSystemSemaphore{h: h}
}

// UnsafeNewQSystemSemaphore constructs the type using only unsafe pointers.
func UnsafeNewQSystemSemaphore(h unsafe.Pointer) *QSystemSemaphore {
	return newQSystemSemaphore((*C.QSystemSemaphore)(h))
}

// NewQSystemSemaphore constructs a new QSystemSemaphore object.
func NewQSystemSemaphore(key *QNativeIpcKey) *QSystemSemaphore {

	return newQSystemSemaphore(C.QSystemSemaphore_new(key.cPointer()))
}

// NewQSystemSemaphore2 constructs a new QSystemSemaphore object.
func NewQSystemSemaphore2(key string) *QSystemSemaphore {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))

	return newQSystemSemaphore(C.QSystemSemaphore_new2(key_ms))
}

// NewQSystemSemaphore3 constructs a new QSystemSemaphore object.
func NewQSystemSemaphore3(key *QNativeIpcKey, initialValue int) *QSystemSemaphore {

	return newQSystemSemaphore(C.QSystemSemaphore_new3(key.cPointer(), (C.int)(initialValue)))
}

// NewQSystemSemaphore4 constructs a new QSystemSemaphore object.
func NewQSystemSemaphore4(key *QNativeIpcKey, initialValue int, param3 AccessMode) *QSystemSemaphore {

	return newQSystemSemaphore(C.QSystemSemaphore_new4(key.cPointer(), (C.int)(initialValue), param3))
}

// NewQSystemSemaphore5 constructs a new QSystemSemaphore object.
func NewQSystemSemaphore5(key string, initialValue int) *QSystemSemaphore {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))

	return newQSystemSemaphore(C.QSystemSemaphore_new5(key_ms, (C.int)(initialValue)))
}

// NewQSystemSemaphore6 constructs a new QSystemSemaphore object.
func NewQSystemSemaphore6(key string, initialValue int, mode AccessMode) *QSystemSemaphore {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))

	return newQSystemSemaphore(C.QSystemSemaphore_new6(key_ms, (C.int)(initialValue), mode))
}

func QSystemSemaphore_Tr(sourceText string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _ms C.struct_miqt_string = C.QSystemSemaphore_tr(sourceText_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSystemSemaphore) SetNativeKey(key *QNativeIpcKey) {
	C.QSystemSemaphore_setNativeKey(this.h, key.cPointer())
}

func (this *QSystemSemaphore) SetNativeKeyWithKey(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSystemSemaphore_setNativeKeyWithKey(this.h, key_ms)
}

func (this *QSystemSemaphore) NativeIpcKey() *QNativeIpcKey {
	_goptr := newQNativeIpcKey(C.QSystemSemaphore_nativeIpcKey(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSystemSemaphore) SetKey(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSystemSemaphore_setKey(this.h, key_ms)
}

func (this *QSystemSemaphore) Key() string {
	var _ms C.struct_miqt_string = C.QSystemSemaphore_key(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSystemSemaphore) Acquire() bool {
	return (bool)(C.QSystemSemaphore_acquire(this.h))
}

func (this *QSystemSemaphore) Release() bool {
	return (bool)(C.QSystemSemaphore_release(this.h))
}

func (this *QSystemSemaphore) Error() SystemSemaphoreError {
	int /* TODO  */
}

func (this *QSystemSemaphore) ErrorString() string {
	var _ms C.struct_miqt_string = C.QSystemSemaphore_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSystemSemaphore_IsKeyTypeSupported(typeVal QNativeIpcKey__Type) bool {
	return (bool)(C.QSystemSemaphore_isKeyTypeSupported((C.uint16_t)(typeVal)))
}

func QSystemSemaphore_PlatformSafeKey(key string) *QNativeIpcKey {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQNativeIpcKey(C.QSystemSemaphore_platformSafeKey(key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSystemSemaphore_LegacyNativeKey(key string) *QNativeIpcKey {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQNativeIpcKey(C.QSystemSemaphore_legacyNativeKey(key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSystemSemaphore_Tr2(sourceText string, disambiguation string) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QSystemSemaphore_tr2(sourceText_Cstring, disambiguation_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSystemSemaphore_Tr3(sourceText string, disambiguation string, n int) string {
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QSystemSemaphore_tr3(sourceText_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSystemSemaphore) SetNativeKey2(key *QNativeIpcKey, initialValue int) {
	C.QSystemSemaphore_setNativeKey2(this.h, key.cPointer(), (C.int)(initialValue))
}

func (this *QSystemSemaphore) SetNativeKey3(key *QNativeIpcKey, initialValue int, param3 AccessMode) {
	C.QSystemSemaphore_setNativeKey3(this.h, key.cPointer(), (C.int)(initialValue), param3)
}

func (this *QSystemSemaphore) SetNativeKey4(key string, initialValue int) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSystemSemaphore_setNativeKey4(this.h, key_ms, (C.int)(initialValue))
}

func (this *QSystemSemaphore) SetNativeKey5(key string, initialValue int, mode AccessMode) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSystemSemaphore_setNativeKey5(this.h, key_ms, (C.int)(initialValue), mode)
}

func (this *QSystemSemaphore) SetNativeKey6(key string, initialValue int, mode AccessMode, typeVal QNativeIpcKey__Type) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSystemSemaphore_setNativeKey6(this.h, key_ms, (C.int)(initialValue), mode, (C.uint16_t)(typeVal))
}

func (this *QSystemSemaphore) SetKey2(key string, initialValue int) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSystemSemaphore_setKey2(this.h, key_ms, (C.int)(initialValue))
}

func (this *QSystemSemaphore) SetKey3(key string, initialValue int, mode AccessMode) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSystemSemaphore_setKey3(this.h, key_ms, (C.int)(initialValue), mode)
}

func (this *QSystemSemaphore) ReleaseWithInt(n int) bool {
	return (bool)(C.QSystemSemaphore_releaseWithInt(this.h, (C.int)(n)))
}

func QSystemSemaphore_PlatformSafeKey2(key string, typeVal QNativeIpcKey__Type) *QNativeIpcKey {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQNativeIpcKey(C.QSystemSemaphore_platformSafeKey2(key_ms, (C.uint16_t)(typeVal)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSystemSemaphore_LegacyNativeKey2(key string, typeVal QNativeIpcKey__Type) *QNativeIpcKey {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQNativeIpcKey(C.QSystemSemaphore_legacyNativeKey2(key_ms, (C.uint16_t)(typeVal)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QSystemSemaphore) Delete() {
	C.QSystemSemaphore_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSystemSemaphore) GoGC() {
	runtime.SetFinalizer(this, func(this *QSystemSemaphore) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

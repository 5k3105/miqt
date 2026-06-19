package qml

/*

#include "gen_qqml.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QQmlModuleImportSpecialVersions int

const (
	QQmlModuleImportSpecialVersions__QQmlModuleImportModuleAny QQmlModuleImportSpecialVersions = -1
	QQmlModuleImportSpecialVersions__QQmlModuleImportLatest    QQmlModuleImportSpecialVersions = -1
	QQmlModuleImportSpecialVersions__QQmlModuleImportAuto      QQmlModuleImportSpecialVersions = -2
)

type QQmlTypeNotAvailable struct {
	h *C.QQmlTypeNotAvailable
	*qt6.QObject
}

func (this *QQmlTypeNotAvailable) cPointer() *C.QQmlTypeNotAvailable {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlTypeNotAvailable) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlTypeNotAvailable constructs the type using only CGO pointers.
func newQQmlTypeNotAvailable(h *C.QQmlTypeNotAvailable) *QQmlTypeNotAvailable {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QQmlTypeNotAvailable_virtbase(h, &outptr_QObject)

	return &QQmlTypeNotAvailable{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQQmlTypeNotAvailable constructs the type using only unsafe pointers.
func UnsafeNewQQmlTypeNotAvailable(h unsafe.Pointer) *QQmlTypeNotAvailable {
	return newQQmlTypeNotAvailable((*C.QQmlTypeNotAvailable)(h))
}

func (this *QQmlTypeNotAvailable) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QQmlTypeNotAvailable_metaObject(this.h)))
}

func (this *QQmlTypeNotAvailable) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QQmlTypeNotAvailable_metacast(this.h, param1_Cstring))
}

func QQmlTypeNotAvailable_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QQmlTypeNotAvailable_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QQmlTypeNotAvailable_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlTypeNotAvailable_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QQmlTypeNotAvailable_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlTypeNotAvailable_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QQmlTypeNotAvailable) Delete() {
	C.QQmlTypeNotAvailable_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlTypeNotAvailable) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlTypeNotAvailable) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

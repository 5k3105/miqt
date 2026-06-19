package network

/*

#include "gen_qabstractnetworkcache.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QNetworkCacheMetaData struct {
	h *C.QNetworkCacheMetaData
}

func (this *QNetworkCacheMetaData) cPointer() *C.QNetworkCacheMetaData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkCacheMetaData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkCacheMetaData constructs the type using only CGO pointers.
func newQNetworkCacheMetaData(h *C.QNetworkCacheMetaData) *QNetworkCacheMetaData {
	if h == nil {
		return nil
	}

	return &QNetworkCacheMetaData{h: h}
}

// UnsafeNewQNetworkCacheMetaData constructs the type using only unsafe pointers.
func UnsafeNewQNetworkCacheMetaData(h unsafe.Pointer) *QNetworkCacheMetaData {
	return newQNetworkCacheMetaData((*C.QNetworkCacheMetaData)(h))
}

// NewQNetworkCacheMetaData constructs a new QNetworkCacheMetaData object.
func NewQNetworkCacheMetaData() *QNetworkCacheMetaData {

	return newQNetworkCacheMetaData(C.QNetworkCacheMetaData_new())
}

// NewQNetworkCacheMetaData2 constructs a new QNetworkCacheMetaData object.
func NewQNetworkCacheMetaData2(other *QNetworkCacheMetaData) *QNetworkCacheMetaData {

	return newQNetworkCacheMetaData(C.QNetworkCacheMetaData_new2(other.cPointer()))
}

func (this *QNetworkCacheMetaData) OperatorAssign(other *QNetworkCacheMetaData) {
	C.QNetworkCacheMetaData_operatorAssign(this.h, other.cPointer())
}

func (this *QNetworkCacheMetaData) Swap(other *QNetworkCacheMetaData) {
	C.QNetworkCacheMetaData_swap(this.h, other.cPointer())
}

func (this *QNetworkCacheMetaData) OperatorEqual(other *QNetworkCacheMetaData) bool {
	return (bool)(C.QNetworkCacheMetaData_operatorEqual(this.h, other.cPointer()))
}

func (this *QNetworkCacheMetaData) OperatorNotEqual(other *QNetworkCacheMetaData) bool {
	return (bool)(C.QNetworkCacheMetaData_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QNetworkCacheMetaData) IsValid() bool {
	return (bool)(C.QNetworkCacheMetaData_isValid(this.h))
}

func (this *QNetworkCacheMetaData) Url() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QNetworkCacheMetaData_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkCacheMetaData) SetUrl(url *qt6.QUrl) {
	C.QNetworkCacheMetaData_setUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QNetworkCacheMetaData) RawHeaders() RawHeaderList {
	int /* TODO  */
}

func (this *QNetworkCacheMetaData) SetRawHeaders(headers *RawHeaderList) {
	C.QNetworkCacheMetaData_setRawHeaders(this.h, headers)
}

func (this *QNetworkCacheMetaData) Headers() *QHttpHeaders {
	_goptr := newQHttpHeaders(C.QNetworkCacheMetaData_headers(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkCacheMetaData) SetHeaders(headers *QHttpHeaders) {
	C.QNetworkCacheMetaData_setHeaders(this.h, headers.cPointer())
}

func (this *QNetworkCacheMetaData) LastModified() *qt6.QDateTime {
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QNetworkCacheMetaData_lastModified(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkCacheMetaData) SetLastModified(dateTime *qt6.QDateTime) {
	C.QNetworkCacheMetaData_setLastModified(this.h, (*C.QDateTime)(dateTime.UnsafePointer()))
}

func (this *QNetworkCacheMetaData) ExpirationDate() *qt6.QDateTime {
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(C.QNetworkCacheMetaData_expirationDate(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkCacheMetaData) SetExpirationDate(dateTime *qt6.QDateTime) {
	C.QNetworkCacheMetaData_setExpirationDate(this.h, (*C.QDateTime)(dateTime.UnsafePointer()))
}

func (this *QNetworkCacheMetaData) SaveToDisk() bool {
	return (bool)(C.QNetworkCacheMetaData_saveToDisk(this.h))
}

func (this *QNetworkCacheMetaData) SetSaveToDisk(allow bool) {
	C.QNetworkCacheMetaData_setSaveToDisk(this.h, (C.bool)(allow))
}

func (this *QNetworkCacheMetaData) Attributes() AttributesMap {
	int /* TODO  */
}

func (this *QNetworkCacheMetaData) SetAttributes(attributes *AttributesMap) {
	C.QNetworkCacheMetaData_setAttributes(this.h, attributes)
}

// Delete this object from C++ memory.
func (this *QNetworkCacheMetaData) Delete() {
	C.QNetworkCacheMetaData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkCacheMetaData) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkCacheMetaData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAbstractNetworkCache struct {
	h *C.QAbstractNetworkCache
	*qt6.QObject
}

func (this *QAbstractNetworkCache) cPointer() *C.QAbstractNetworkCache {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractNetworkCache) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractNetworkCache constructs the type using only CGO pointers.
func newQAbstractNetworkCache(h *C.QAbstractNetworkCache) *QAbstractNetworkCache {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAbstractNetworkCache_virtbase(h, &outptr_QObject)

	return &QAbstractNetworkCache{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAbstractNetworkCache constructs the type using only unsafe pointers.
func UnsafeNewQAbstractNetworkCache(h unsafe.Pointer) *QAbstractNetworkCache {
	return newQAbstractNetworkCache((*C.QAbstractNetworkCache)(h))
}

func (this *QAbstractNetworkCache) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractNetworkCache_metaObject(this.h)))
}

func (this *QAbstractNetworkCache) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractNetworkCache_metacast(this.h, param1_Cstring))
}

func QAbstractNetworkCache_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractNetworkCache_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractNetworkCache) MetaData(url *qt6.QUrl) *QNetworkCacheMetaData {
	_goptr := newQNetworkCacheMetaData(C.QAbstractNetworkCache_metaData(this.h, (*C.QUrl)(url.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractNetworkCache) UpdateMetaData(metaData *QNetworkCacheMetaData) {
	C.QAbstractNetworkCache_updateMetaData(this.h, metaData.cPointer())
}

func (this *QAbstractNetworkCache) Data(url *qt6.QUrl) *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QAbstractNetworkCache_data(this.h, (*C.QUrl)(url.UnsafePointer()))))
}

func (this *QAbstractNetworkCache) Remove(url *qt6.QUrl) bool {
	return (bool)(C.QAbstractNetworkCache_remove(this.h, (*C.QUrl)(url.UnsafePointer())))
}

func (this *QAbstractNetworkCache) CacheSize() int64 {
	return (int64)(C.QAbstractNetworkCache_cacheSize(this.h))
}

func (this *QAbstractNetworkCache) Prepare(metaData *QNetworkCacheMetaData) *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QAbstractNetworkCache_prepare(this.h, metaData.cPointer())))
}

func (this *QAbstractNetworkCache) Insert(device *qt6.QIODevice) {
	C.QAbstractNetworkCache_insert(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QAbstractNetworkCache) Clear() {
	C.QAbstractNetworkCache_clear(this.h)
}

func QAbstractNetworkCache_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractNetworkCache_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractNetworkCache_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractNetworkCache_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAbstractNetworkCache) Delete() {
	C.QAbstractNetworkCache_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractNetworkCache) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractNetworkCache) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

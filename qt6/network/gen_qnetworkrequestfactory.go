package network

/*

#include "gen_qnetworkrequestfactory.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QNetworkRequestFactory struct {
	h *C.QNetworkRequestFactory
}

func (this *QNetworkRequestFactory) cPointer() *C.QNetworkRequestFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkRequestFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkRequestFactory constructs the type using only CGO pointers.
func newQNetworkRequestFactory(h *C.QNetworkRequestFactory) *QNetworkRequestFactory {
	if h == nil {
		return nil
	}

	return &QNetworkRequestFactory{h: h}
}

// UnsafeNewQNetworkRequestFactory constructs the type using only unsafe pointers.
func UnsafeNewQNetworkRequestFactory(h unsafe.Pointer) *QNetworkRequestFactory {
	return newQNetworkRequestFactory((*C.QNetworkRequestFactory)(h))
}

// NewQNetworkRequestFactory constructs a new QNetworkRequestFactory object.
func NewQNetworkRequestFactory() *QNetworkRequestFactory {

	return newQNetworkRequestFactory(C.QNetworkRequestFactory_new())
}

// NewQNetworkRequestFactory2 constructs a new QNetworkRequestFactory object.
func NewQNetworkRequestFactory2(baseUrl *qt6.QUrl) *QNetworkRequestFactory {

	return newQNetworkRequestFactory(C.QNetworkRequestFactory_new2((*C.QUrl)(baseUrl.UnsafePointer())))
}

// NewQNetworkRequestFactory3 constructs a new QNetworkRequestFactory object.
func NewQNetworkRequestFactory3(other *QNetworkRequestFactory) *QNetworkRequestFactory {

	return newQNetworkRequestFactory(C.QNetworkRequestFactory_new3(other.cPointer()))
}

func (this *QNetworkRequestFactory) OperatorAssign(other *QNetworkRequestFactory) {
	C.QNetworkRequestFactory_operatorAssign(this.h, other.cPointer())
}

func (this *QNetworkRequestFactory) Swap(other *QNetworkRequestFactory) {
	C.QNetworkRequestFactory_swap(this.h, other.cPointer())
}

func (this *QNetworkRequestFactory) BaseUrl() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QNetworkRequestFactory_baseUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequestFactory) SetBaseUrl(url *qt6.QUrl) {
	C.QNetworkRequestFactory_setBaseUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QNetworkRequestFactory) SslConfiguration() *QSslConfiguration {
	_goptr := newQSslConfiguration(C.QNetworkRequestFactory_sslConfiguration(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequestFactory) SetSslConfiguration(configuration *QSslConfiguration) {
	C.QNetworkRequestFactory_setSslConfiguration(this.h, configuration.cPointer())
}

func (this *QNetworkRequestFactory) CreateRequest() *QNetworkRequest {
	_goptr := newQNetworkRequest(C.QNetworkRequestFactory_createRequest(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequestFactory) CreateRequestWithQuery(query *qt6.QUrlQuery) *QNetworkRequest {
	_goptr := newQNetworkRequest(C.QNetworkRequestFactory_createRequestWithQuery(this.h, (*C.QUrlQuery)(query.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequestFactory) CreateRequestWithPath(path string) *QNetworkRequest {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	_goptr := newQNetworkRequest(C.QNetworkRequestFactory_createRequestWithPath(this.h, path_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequestFactory) CreateRequest2(path string, query *qt6.QUrlQuery) *QNetworkRequest {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	_goptr := newQNetworkRequest(C.QNetworkRequestFactory_createRequest2(this.h, path_ms, (*C.QUrlQuery)(query.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequestFactory) SetCommonHeaders(headers *QHttpHeaders) {
	C.QNetworkRequestFactory_setCommonHeaders(this.h, headers.cPointer())
}

func (this *QNetworkRequestFactory) CommonHeaders() *QHttpHeaders {
	_goptr := newQHttpHeaders(C.QNetworkRequestFactory_commonHeaders(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequestFactory) ClearCommonHeaders() {
	C.QNetworkRequestFactory_clearCommonHeaders(this.h)
}

func (this *QNetworkRequestFactory) BearerToken() []byte {
	var _bytearray C.struct_miqt_string = C.QNetworkRequestFactory_bearerToken(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QNetworkRequestFactory) SetBearerToken(token []byte) {
	token_alias := C.struct_miqt_string{}
	if len(token) > 0 {
		token_alias.data = (*C.char)(unsafe.Pointer(&token[0]))
	} else {
		token_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	token_alias.len = C.size_t(len(token))
	C.QNetworkRequestFactory_setBearerToken(this.h, token_alias)
}

func (this *QNetworkRequestFactory) ClearBearerToken() {
	C.QNetworkRequestFactory_clearBearerToken(this.h)
}

func (this *QNetworkRequestFactory) UserName() string {
	var _ms C.struct_miqt_string = C.QNetworkRequestFactory_userName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkRequestFactory) SetUserName(userName string) {
	userName_ms := C.struct_miqt_string{}
	userName_ms.data = C.CString(userName)
	userName_ms.len = C.size_t(len(userName))
	defer C.free(unsafe.Pointer(userName_ms.data))
	C.QNetworkRequestFactory_setUserName(this.h, userName_ms)
}

func (this *QNetworkRequestFactory) ClearUserName() {
	C.QNetworkRequestFactory_clearUserName(this.h)
}

func (this *QNetworkRequestFactory) Password() string {
	var _ms C.struct_miqt_string = C.QNetworkRequestFactory_password(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkRequestFactory) SetPassword(password string) {
	password_ms := C.struct_miqt_string{}
	password_ms.data = C.CString(password)
	password_ms.len = C.size_t(len(password))
	defer C.free(unsafe.Pointer(password_ms.data))
	C.QNetworkRequestFactory_setPassword(this.h, password_ms)
}

func (this *QNetworkRequestFactory) ClearPassword() {
	C.QNetworkRequestFactory_clearPassword(this.h)
}

func (this *QNetworkRequestFactory) QueryParameters() *qt6.QUrlQuery {
	_goptr := qt6.UnsafeNewQUrlQuery(unsafe.Pointer(C.QNetworkRequestFactory_queryParameters(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequestFactory) SetQueryParameters(query *qt6.QUrlQuery) {
	C.QNetworkRequestFactory_setQueryParameters(this.h, (*C.QUrlQuery)(query.UnsafePointer()))
}

func (this *QNetworkRequestFactory) ClearQueryParameters() {
	C.QNetworkRequestFactory_clearQueryParameters(this.h)
}

func (this *QNetworkRequestFactory) SetPriority(priority QNetworkRequest__Priority) {
	C.QNetworkRequestFactory_setPriority(this.h, (C.int)(priority))
}

func (this *QNetworkRequestFactory) Priority() QNetworkRequest__Priority {
	return (QNetworkRequest__Priority)(C.QNetworkRequestFactory_priority(this.h))
}

func (this *QNetworkRequestFactory) Attribute(attribute QNetworkRequest__Attribute) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QNetworkRequestFactory_attribute(this.h, (C.int)(attribute))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequestFactory) Attribute2(attribute QNetworkRequest__Attribute, defaultValue *qt6.QVariant) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QNetworkRequestFactory_attribute2(this.h, (C.int)(attribute), (*C.QVariant)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkRequestFactory) SetAttribute(attribute QNetworkRequest__Attribute, value *qt6.QVariant) {
	C.QNetworkRequestFactory_setAttribute(this.h, (C.int)(attribute), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QNetworkRequestFactory) ClearAttribute(attribute QNetworkRequest__Attribute) {
	C.QNetworkRequestFactory_clearAttribute(this.h, (C.int)(attribute))
}

func (this *QNetworkRequestFactory) ClearAttributes() {
	C.QNetworkRequestFactory_clearAttributes(this.h)
}

// Delete this object from C++ memory.
func (this *QNetworkRequestFactory) Delete() {
	C.QNetworkRequestFactory_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkRequestFactory) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkRequestFactory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

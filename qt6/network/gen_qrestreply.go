package network

/*

#include "gen_qrestreply.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRestReply struct {
	h *C.QRestReply
}

func (this *QRestReply) cPointer() *C.QRestReply {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRestReply) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRestReply constructs the type using only CGO pointers.
func newQRestReply(h *C.QRestReply) *QRestReply {
	if h == nil {
		return nil
	}

	return &QRestReply{h: h}
}

// UnsafeNewQRestReply constructs the type using only unsafe pointers.
func UnsafeNewQRestReply(h unsafe.Pointer) *QRestReply {
	return newQRestReply((*C.QRestReply)(h))
}

// NewQRestReply constructs a new QRestReply object.
func NewQRestReply(reply *QNetworkReply) *QRestReply {

	return newQRestReply(C.QRestReply_new(reply.cPointer()))
}

func (this *QRestReply) Swap(other *QRestReply) {
	C.QRestReply_swap(this.h, other.cPointer())
}

func (this *QRestReply) NetworkReply() *QNetworkReply {
	return newQNetworkReply(C.QRestReply_networkReply(this.h))
}

func (this *QRestReply) ReadBody() []byte {
	var _bytearray C.struct_miqt_string = C.QRestReply_readBody(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QRestReply) ReadText() string {
	var _ms C.struct_miqt_string = C.QRestReply_readText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRestReply) IsSuccess() bool {
	return (bool)(C.QRestReply_isSuccess(this.h))
}

func (this *QRestReply) HttpStatus() int {
	return (int)(C.QRestReply_httpStatus(this.h))
}

func (this *QRestReply) IsHttpStatusSuccess() bool {
	return (bool)(C.QRestReply_isHttpStatusSuccess(this.h))
}

func (this *QRestReply) HasError() bool {
	return (bool)(C.QRestReply_hasError(this.h))
}

func (this *QRestReply) Error() QNetworkReply__NetworkError {
	return (QNetworkReply__NetworkError)(C.QRestReply_error(this.h))
}

func (this *QRestReply) ErrorString() string {
	var _ms C.struct_miqt_string = C.QRestReply_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QRestReply) Delete() {
	C.QRestReply_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRestReply) GoGC() {
	runtime.SetFinalizer(this, func(this *QRestReply) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

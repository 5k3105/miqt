package network

/*

#include "gen_qformdatabuilder.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QFormDataBuilder__Option int

const (
	QFormDataBuilder__Default                          QFormDataBuilder__Option = 0
	QFormDataBuilder__OmitRfc8187EncodedFilename       QFormDataBuilder__Option = 1
	QFormDataBuilder__UseRfc7578PercentEncodedFilename QFormDataBuilder__Option = 2
	QFormDataBuilder__PreferLatin1EncodedFilename      QFormDataBuilder__Option = 4
	QFormDataBuilder__StrictRfc7578                    QFormDataBuilder__Option = 3
)

type QFormDataPartBuilder struct {
	h *C.QFormDataPartBuilder
}

func (this *QFormDataPartBuilder) cPointer() *C.QFormDataPartBuilder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFormDataPartBuilder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFormDataPartBuilder constructs the type using only CGO pointers.
func newQFormDataPartBuilder(h *C.QFormDataPartBuilder) *QFormDataPartBuilder {
	if h == nil {
		return nil
	}

	return &QFormDataPartBuilder{h: h}
}

// UnsafeNewQFormDataPartBuilder constructs the type using only unsafe pointers.
func UnsafeNewQFormDataPartBuilder(h unsafe.Pointer) *QFormDataPartBuilder {
	return newQFormDataPartBuilder((*C.QFormDataPartBuilder)(h))
}

// NewQFormDataPartBuilder constructs a new QFormDataPartBuilder object.
func NewQFormDataPartBuilder() *QFormDataPartBuilder {

	return newQFormDataPartBuilder(C.QFormDataPartBuilder_new())
}

// NewQFormDataPartBuilder2 constructs a new QFormDataPartBuilder object.
func NewQFormDataPartBuilder2(param1 *QFormDataPartBuilder) *QFormDataPartBuilder {

	return newQFormDataPartBuilder(C.QFormDataPartBuilder_new2(param1.cPointer()))
}

func (this *QFormDataPartBuilder) Swap(other *QFormDataPartBuilder) {
	C.QFormDataPartBuilder_swap(this.h, other.cPointer())
}

func (this *QFormDataPartBuilder) SetBody(data qt6.QByteArrayView) *QFormDataPartBuilder {
	_goptr := newQFormDataPartBuilder(C.QFormDataPartBuilder_setBody(this.h, (*C.QByteArrayView)(data.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormDataPartBuilder) SetBodyDevice(body *qt6.QIODevice) *QFormDataPartBuilder {
	_goptr := newQFormDataPartBuilder(C.QFormDataPartBuilder_setBodyDevice(this.h, (*C.QIODevice)(body.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormDataPartBuilder) SetHeaders(headers *QHttpHeaders) *QFormDataPartBuilder {
	_goptr := newQFormDataPartBuilder(C.QFormDataPartBuilder_setHeaders(this.h, headers.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormDataPartBuilder) SetBody2(data qt6.QByteArrayView, fileName qt6.QAnyStringView) *QFormDataPartBuilder {
	_goptr := newQFormDataPartBuilder(C.QFormDataPartBuilder_setBody2(this.h, (*C.QByteArrayView)(data.UnsafePointer()), (*C.QAnyStringView)(fileName.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormDataPartBuilder) SetBody3(data qt6.QByteArrayView, fileName qt6.QAnyStringView, mimeType qt6.QAnyStringView) *QFormDataPartBuilder {
	_goptr := newQFormDataPartBuilder(C.QFormDataPartBuilder_setBody3(this.h, (*C.QByteArrayView)(data.UnsafePointer()), (*C.QAnyStringView)(fileName.UnsafePointer()), (*C.QAnyStringView)(mimeType.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormDataPartBuilder) SetBodyDevice2(body *qt6.QIODevice, fileName qt6.QAnyStringView) *QFormDataPartBuilder {
	_goptr := newQFormDataPartBuilder(C.QFormDataPartBuilder_setBodyDevice2(this.h, (*C.QIODevice)(body.UnsafePointer()), (*C.QAnyStringView)(fileName.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormDataPartBuilder) SetBodyDevice3(body *qt6.QIODevice, fileName qt6.QAnyStringView, mimeType qt6.QAnyStringView) *QFormDataPartBuilder {
	_goptr := newQFormDataPartBuilder(C.QFormDataPartBuilder_setBodyDevice3(this.h, (*C.QIODevice)(body.UnsafePointer()), (*C.QAnyStringView)(fileName.UnsafePointer()), (*C.QAnyStringView)(mimeType.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QFormDataPartBuilder) Delete() {
	C.QFormDataPartBuilder_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFormDataPartBuilder) GoGC() {
	runtime.SetFinalizer(this, func(this *QFormDataPartBuilder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QFormDataBuilder struct {
	h *C.QFormDataBuilder
}

func (this *QFormDataBuilder) cPointer() *C.QFormDataBuilder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFormDataBuilder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFormDataBuilder constructs the type using only CGO pointers.
func newQFormDataBuilder(h *C.QFormDataBuilder) *QFormDataBuilder {
	if h == nil {
		return nil
	}

	return &QFormDataBuilder{h: h}
}

// UnsafeNewQFormDataBuilder constructs the type using only unsafe pointers.
func UnsafeNewQFormDataBuilder(h unsafe.Pointer) *QFormDataBuilder {
	return newQFormDataBuilder((*C.QFormDataBuilder)(h))
}

// NewQFormDataBuilder constructs a new QFormDataBuilder object.
func NewQFormDataBuilder() *QFormDataBuilder {

	return newQFormDataBuilder(C.QFormDataBuilder_new())
}

func (this *QFormDataBuilder) Swap(other *QFormDataBuilder) {
	C.QFormDataBuilder_swap(this.h, other.cPointer())
}

func (this *QFormDataBuilder) Part(name qt6.QAnyStringView) *QFormDataPartBuilder {
	_goptr := newQFormDataPartBuilder(C.QFormDataBuilder_part(this.h, (*C.QAnyStringView)(name.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QFormDataBuilder) Delete() {
	C.QFormDataBuilder_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFormDataBuilder) GoGC() {
	runtime.SetFinalizer(this, func(this *QFormDataBuilder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

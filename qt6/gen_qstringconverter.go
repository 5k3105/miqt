package qt6

/*

#include "gen_qstringconverter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStringEncoder struct {
	h *C.QStringEncoder
	*QStringConverter
}

func (this *QStringEncoder) cPointer() *C.QStringEncoder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStringEncoder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStringEncoder constructs the type using only CGO pointers.
func newQStringEncoder(h *C.QStringEncoder) *QStringEncoder {
	if h == nil {
		return nil
	}
	var outptr_QStringConverter *C.QStringConverter = nil
	C.QStringEncoder_virtbase(h, &outptr_QStringConverter)

	return &QStringEncoder{h: h,
		QStringConverter: newQStringConverter(outptr_QStringConverter)}
}

// UnsafeNewQStringEncoder constructs the type using only unsafe pointers.
func UnsafeNewQStringEncoder(h unsafe.Pointer) *QStringEncoder {
	return newQStringEncoder((*C.QStringEncoder)(h))
}

// NewQStringEncoder constructs a new QStringEncoder object.
func NewQStringEncoder() *QStringEncoder {

	return newQStringEncoder(C.QStringEncoder_new())
}

// NewQStringEncoder2 constructs a new QStringEncoder object.
func NewQStringEncoder2(encoding Encoding) *QStringEncoder {

	return newQStringEncoder(C.QStringEncoder_new2(encoding))
}

// NewQStringEncoder3 constructs a new QStringEncoder object.
func NewQStringEncoder3(name QAnyStringView) *QStringEncoder {

	return newQStringEncoder(C.QStringEncoder_new3(name.cPointer()))
}

// NewQStringEncoder4 constructs a new QStringEncoder object.
func NewQStringEncoder4(encoding Encoding, flags Flags) *QStringEncoder {

	return newQStringEncoder(C.QStringEncoder_new4(encoding, flags))
}

// NewQStringEncoder5 constructs a new QStringEncoder object.
func NewQStringEncoder5(name QAnyStringView, flags Flags) *QStringEncoder {

	return newQStringEncoder(C.QStringEncoder_new5(name.cPointer(), flags))
}

func (this *QStringEncoder) RequiredSpace(inputLength int64) int64 {
	return (int64)(C.QStringEncoder_requiredSpace(this.h, (C.ptrdiff_t)(inputLength)))
}

func (this *QStringEncoder) Finalize(out string, maxlen int64) FinalizeResult {
	out_Cstring := C.CString(out)
	defer C.free(unsafe.Pointer(out_Cstring))
	int /* TODO  */
}

func (this *QStringEncoder) Finalize2() FinalizeResult {
	int /* TODO  */
}

// Delete this object from C++ memory.
func (this *QStringEncoder) Delete() {
	C.QStringEncoder_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStringEncoder) GoGC() {
	runtime.SetFinalizer(this, func(this *QStringEncoder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStringDecoder struct {
	h *C.QStringDecoder
	*QStringConverter
}

func (this *QStringDecoder) cPointer() *C.QStringDecoder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStringDecoder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStringDecoder constructs the type using only CGO pointers.
func newQStringDecoder(h *C.QStringDecoder) *QStringDecoder {
	if h == nil {
		return nil
	}
	var outptr_QStringConverter *C.QStringConverter = nil
	C.QStringDecoder_virtbase(h, &outptr_QStringConverter)

	return &QStringDecoder{h: h,
		QStringConverter: newQStringConverter(outptr_QStringConverter)}
}

// UnsafeNewQStringDecoder constructs the type using only unsafe pointers.
func UnsafeNewQStringDecoder(h unsafe.Pointer) *QStringDecoder {
	return newQStringDecoder((*C.QStringDecoder)(h))
}

// NewQStringDecoder constructs a new QStringDecoder object.
func NewQStringDecoder(encoding Encoding) *QStringDecoder {

	return newQStringDecoder(C.QStringDecoder_new(encoding))
}

// NewQStringDecoder2 constructs a new QStringDecoder object.
func NewQStringDecoder2() *QStringDecoder {

	return newQStringDecoder(C.QStringDecoder_new2())
}

// NewQStringDecoder3 constructs a new QStringDecoder object.
func NewQStringDecoder3(name QAnyStringView) *QStringDecoder {

	return newQStringDecoder(C.QStringDecoder_new3(name.cPointer()))
}

// NewQStringDecoder4 constructs a new QStringDecoder object.
func NewQStringDecoder4(encoding Encoding, flags Flags) *QStringDecoder {

	return newQStringDecoder(C.QStringDecoder_new4(encoding, flags))
}

// NewQStringDecoder5 constructs a new QStringDecoder object.
func NewQStringDecoder5(name QAnyStringView, f Flags) *QStringDecoder {

	return newQStringDecoder(C.QStringDecoder_new5(name.cPointer(), f))
}

func (this *QStringDecoder) RequiredSpace(inputLength int64) int64 {
	return (int64)(C.QStringDecoder_requiredSpace(this.h, (C.ptrdiff_t)(inputLength)))
}

func (this *QStringDecoder) AppendToBuffer(out *QChar, ba QByteArrayView) *QChar {
	return newQChar(C.QStringDecoder_appendToBuffer(this.h, out.cPointer(), ba.cPointer()))
}

func (this *QStringDecoder) Finalize(out *QChar, maxlen int64) FinalizeResultQChar {
	int /* TODO  */
}

func (this *QStringDecoder) Finalize3() FinalizeResult {
	int /* TODO  */
}

func QStringDecoder_DecoderForHtml(data QByteArrayView) *QStringDecoder {
	_goptr := newQStringDecoder(C.QStringDecoder_decoderForHtml(data.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QStringDecoder) Delete() {
	C.QStringDecoder_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStringDecoder) GoGC() {
	runtime.SetFinalizer(this, func(this *QStringDecoder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt6

/*

#include "gen_qjsonparseerror.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QJsonParseError__ParseError int

const (
	QJsonParseError__NoError               QJsonParseError__ParseError = 0
	QJsonParseError__UnterminatedObject    QJsonParseError__ParseError = 1
	QJsonParseError__MissingNameSeparator  QJsonParseError__ParseError = 2
	QJsonParseError__UnterminatedArray     QJsonParseError__ParseError = 3
	QJsonParseError__MissingValueSeparator QJsonParseError__ParseError = 4
	QJsonParseError__IllegalValue          QJsonParseError__ParseError = 5
	QJsonParseError__TerminationByNumber   QJsonParseError__ParseError = 6
	QJsonParseError__IllegalNumber         QJsonParseError__ParseError = 7
	QJsonParseError__IllegalEscapeSequence QJsonParseError__ParseError = 8
	QJsonParseError__IllegalUTF8String     QJsonParseError__ParseError = 9
	QJsonParseError__UnterminatedString    QJsonParseError__ParseError = 10
	QJsonParseError__MissingObject         QJsonParseError__ParseError = 11
	QJsonParseError__DeepNesting           QJsonParseError__ParseError = 12
	QJsonParseError__DocumentTooLarge      QJsonParseError__ParseError = 13
	QJsonParseError__GarbageAtEnd          QJsonParseError__ParseError = 14
)

type QJsonParseError struct {
	h *C.QJsonParseError
}

func (this *QJsonParseError) cPointer() *C.QJsonParseError {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJsonParseError) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJsonParseError constructs the type using only CGO pointers.
func newQJsonParseError(h *C.QJsonParseError) *QJsonParseError {
	if h == nil {
		return nil
	}

	return &QJsonParseError{h: h}
}

// UnsafeNewQJsonParseError constructs the type using only unsafe pointers.
func UnsafeNewQJsonParseError(h unsafe.Pointer) *QJsonParseError {
	return newQJsonParseError((*C.QJsonParseError)(h))
}

func (this *QJsonParseError) ErrorString() string {
	var _ms C.struct_miqt_string = C.QJsonParseError_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonParseError) Error() ParseError {
	int /* TODO  */
}

func (this *QJsonParseError) SetError(error ParseError) {
	C.QJsonParseError_setError(this.h, error)
}

// Delete this object from C++ memory.
func (this *QJsonParseError) Delete() {
	C.QJsonParseError_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonParseError) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonParseError) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

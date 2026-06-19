package qt6

/*

#include "gen_qanystringview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAnyStringView struct {
	h *C.QAnyStringView
}

func (this *QAnyStringView) cPointer() *C.QAnyStringView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAnyStringView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAnyStringView constructs the type using only CGO pointers.
func newQAnyStringView(h *C.QAnyStringView) *QAnyStringView {
	if h == nil {
		return nil
	}

	return &QAnyStringView{h: h}
}

// UnsafeNewQAnyStringView constructs the type using only unsafe pointers.
func UnsafeNewQAnyStringView(h unsafe.Pointer) *QAnyStringView {
	return newQAnyStringView((*C.QAnyStringView)(h))
}

// NewQAnyStringView constructs a new QAnyStringView object.
func NewQAnyStringView() *QAnyStringView {

	return newQAnyStringView(C.QAnyStringView_new())
}

// NewQAnyStringView2 constructs a new QAnyStringView object.
func NewQAnyStringView2(str []byte) *QAnyStringView {
	str_alias := C.struct_miqt_string{}
	if len(str) > 0 {
		str_alias.data = (*C.char)(unsafe.Pointer(&str[0]))
	} else {
		str_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	str_alias.len = C.size_t(len(str))

	return newQAnyStringView(C.QAnyStringView_new2(str_alias))
}

// NewQAnyStringView3 constructs a new QAnyStringView object.
func NewQAnyStringView3(str string) *QAnyStringView {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))

	return newQAnyStringView(C.QAnyStringView_new3(str_ms))
}

// NewQAnyStringView4 constructs a new QAnyStringView object.
func NewQAnyStringView4(param1 *QAnyStringView) *QAnyStringView {

	return newQAnyStringView(C.QAnyStringView_new4(param1.cPointer()))
}

func (this *QAnyStringView) Mid(pos int64) *QAnyStringView {
	_goptr := newQAnyStringView(C.QAnyStringView_mid(this.h, (C.ptrdiff_t)(pos)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAnyStringView) Left(n int64) *QAnyStringView {
	_goptr := newQAnyStringView(C.QAnyStringView_left(this.h, (C.ptrdiff_t)(n)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAnyStringView) Right(n int64) *QAnyStringView {
	_goptr := newQAnyStringView(C.QAnyStringView_right(this.h, (C.ptrdiff_t)(n)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAnyStringView) Sliced(pos int64) *QAnyStringView {
	_goptr := newQAnyStringView(C.QAnyStringView_sliced(this.h, (C.ptrdiff_t)(pos)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAnyStringView) Sliced2(pos int64, n int64) *QAnyStringView {
	_goptr := newQAnyStringView(C.QAnyStringView_sliced2(this.h, (C.ptrdiff_t)(pos), (C.ptrdiff_t)(n)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAnyStringView) First(n int64) *QAnyStringView {
	_goptr := newQAnyStringView(C.QAnyStringView_first(this.h, (C.ptrdiff_t)(n)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAnyStringView) Last(n int64) *QAnyStringView {
	_goptr := newQAnyStringView(C.QAnyStringView_last(this.h, (C.ptrdiff_t)(n)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAnyStringView) Chopped(n int64) *QAnyStringView {
	_goptr := newQAnyStringView(C.QAnyStringView_chopped(this.h, (C.ptrdiff_t)(n)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAnyStringView) Slice(pos int64) *QAnyStringView {
	return newQAnyStringView(C.QAnyStringView_slice(this.h, (C.ptrdiff_t)(pos)))
}

func (this *QAnyStringView) Slice2(pos int64, n int64) *QAnyStringView {
	return newQAnyStringView(C.QAnyStringView_slice2(this.h, (C.ptrdiff_t)(pos), (C.ptrdiff_t)(n)))
}

func (this *QAnyStringView) Truncate(n int64) {
	C.QAnyStringView_truncate(this.h, (C.ptrdiff_t)(n))
}

func (this *QAnyStringView) Chop(n int64) {
	C.QAnyStringView_chop(this.h, (C.ptrdiff_t)(n))
}

func (this *QAnyStringView) ToString() string {
	var _ms C.struct_miqt_string = C.QAnyStringView_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAnyStringView) Size() int64 {
	return (int64)(C.QAnyStringView_size(this.h))
}

func (this *QAnyStringView) Data() unsafe.Pointer {
	return (unsafe.Pointer)(C.QAnyStringView_data(this.h))
}

func QAnyStringView_Compare(lhs QAnyStringView, rhs QAnyStringView) int {
	return (int)(C.QAnyStringView_compare(lhs.cPointer(), rhs.cPointer()))
}

func QAnyStringView_Equal(lhs QAnyStringView, rhs QAnyStringView) bool {
	return (bool)(C.QAnyStringView_equal(lhs.cPointer(), rhs.cPointer()))
}

func (this *QAnyStringView) Front() *QChar {
	_goptr := newQChar(C.QAnyStringView_front(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAnyStringView) Back() *QChar {
	_goptr := newQChar(C.QAnyStringView_back(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAnyStringView) Empty() bool {
	return (bool)(C.QAnyStringView_empty(this.h))
}

func (this *QAnyStringView) SizeBytes() int64 {
	return (int64)(C.QAnyStringView_sizeBytes(this.h))
}

func (this *QAnyStringView) MaxSize() int64 {
	return (int64)(C.QAnyStringView_maxSize(this.h))
}

func (this *QAnyStringView) IsNull() bool {
	return (bool)(C.QAnyStringView_isNull(this.h))
}

func (this *QAnyStringView) IsEmpty() bool {
	return (bool)(C.QAnyStringView_isEmpty(this.h))
}

func (this *QAnyStringView) Length() int64 {
	return (int64)(C.QAnyStringView_length(this.h))
}

func (this *QAnyStringView) OperatorAssign(param1 *QAnyStringView) {
	C.QAnyStringView_operatorAssign(this.h, param1.cPointer())
}

func (this *QAnyStringView) Mid2(pos int64, n int64) *QAnyStringView {
	_goptr := newQAnyStringView(C.QAnyStringView_mid2(this.h, (C.ptrdiff_t)(pos), (C.ptrdiff_t)(n)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QAnyStringView_Compare2(lhs QAnyStringView, rhs QAnyStringView, cs CaseSensitivity) int {
	return (int)(C.QAnyStringView_compare2(lhs.cPointer(), rhs.cPointer(), (C.int)(cs)))
}

// Delete this object from C++ memory.
func (this *QAnyStringView) Delete() {
	C.QAnyStringView_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAnyStringView) GoGC() {
	runtime.SetFinalizer(this, func(this *QAnyStringView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

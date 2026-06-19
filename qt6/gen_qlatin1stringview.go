package qt6

/*

#include "gen_qlatin1stringview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLatin1String struct {
	h *C.QLatin1String
}

func (this *QLatin1String) cPointer() *C.QLatin1String {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLatin1String) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLatin1String constructs the type using only CGO pointers.
func newQLatin1String(h *C.QLatin1String) *QLatin1String {
	if h == nil {
		return nil
	}

	return &QLatin1String{h: h}
}

// UnsafeNewQLatin1String constructs the type using only unsafe pointers.
func UnsafeNewQLatin1String(h unsafe.Pointer) *QLatin1String {
	return newQLatin1String((*C.QLatin1String)(h))
}

// NewQLatin1String constructs a new QLatin1String object.
func NewQLatin1String() *QLatin1String {

	return newQLatin1String(C.QLatin1String_new())
}

// NewQLatin1String2 constructs a new QLatin1String object.
func NewQLatin1String2(s string) *QLatin1String {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))

	return newQLatin1String(C.QLatin1String_new2(s_Cstring))
}

// NewQLatin1String3 constructs a new QLatin1String object.
func NewQLatin1String3(f string, l string) *QLatin1String {
	f_Cstring := C.CString(f)
	defer C.free(unsafe.Pointer(f_Cstring))
	l_Cstring := C.CString(l)
	defer C.free(unsafe.Pointer(l_Cstring))

	return newQLatin1String(C.QLatin1String_new3(f_Cstring, l_Cstring))
}

// NewQLatin1String4 constructs a new QLatin1String object.
func NewQLatin1String4(s string, sz int64) *QLatin1String {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))

	return newQLatin1String(C.QLatin1String_new4(s_Cstring, (C.ptrdiff_t)(sz)))
}

// NewQLatin1String5 constructs a new QLatin1String object.
func NewQLatin1String5(s []byte) *QLatin1String {
	s_alias := C.struct_miqt_string{}
	if len(s) > 0 {
		s_alias.data = (*C.char)(unsafe.Pointer(&s[0]))
	} else {
		s_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	s_alias.len = C.size_t(len(s))

	return newQLatin1String(C.QLatin1String_new5(s_alias))
}

// NewQLatin1String6 constructs a new QLatin1String object.
func NewQLatin1String6(s QByteArrayView) *QLatin1String {

	return newQLatin1String(C.QLatin1String_new6(s.cPointer()))
}

func (this *QLatin1String) ToString() string {
	var _ms C.struct_miqt_string = C.QLatin1String_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLatin1String) ToUtf8() []byte {
	var _bytearray C.struct_miqt_string = C.QLatin1String_toUtf8(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QLatin1String) Latin1() string {
	_ret := C.QLatin1String_latin1(this.h)
	return C.GoString(_ret)
}

func (this *QLatin1String) Size() int64 {
	return (int64)(C.QLatin1String_size(this.h))
}

func (this *QLatin1String) Data() string {
	_ret := C.QLatin1String_data(this.h)
	return C.GoString(_ret)
}

func (this *QLatin1String) ConstData() string {
	_ret := C.QLatin1String_constData(this.h)
	return C.GoString(_ret)
}

func (this *QLatin1String) ConstBegin() string {
	_ret := C.QLatin1String_constBegin(this.h)
	return C.GoString(_ret)
}

func (this *QLatin1String) ConstEnd() string {
	_ret := C.QLatin1String_constEnd(this.h)
	return C.GoString(_ret)
}

func (this *QLatin1String) First() *QLatin1Char {
	_goptr := newQLatin1Char(C.QLatin1String_first(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLatin1String) Last() *QLatin1Char {
	_goptr := newQLatin1Char(C.QLatin1String_last(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLatin1String) Length() int64 {
	return (int64)(C.QLatin1String_length(this.h))
}

func (this *QLatin1String) IsNull() bool {
	return (bool)(C.QLatin1String_isNull(this.h))
}

func (this *QLatin1String) IsEmpty() bool {
	return (bool)(C.QLatin1String_isEmpty(this.h))
}

func (this *QLatin1String) Empty() bool {
	return (bool)(C.QLatin1String_empty(this.h))
}

func (this *QLatin1String) At(i int64) *QLatin1Char {
	_goptr := newQLatin1Char(C.QLatin1String_at(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLatin1String) OperatorSubscript(i int64) *QLatin1Char {
	_goptr := newQLatin1Char(C.QLatin1String_operatorSubscript(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLatin1String) Front() *QLatin1Char {
	_goptr := newQLatin1Char(C.QLatin1String_front(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLatin1String) Back() *QLatin1Char {
	_goptr := newQLatin1Char(C.QLatin1String_back(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLatin1String) CompareWithQChar(c QChar) int {
	return (int)(C.QLatin1String_compareWithQChar(this.h, c.cPointer()))
}

func (this *QLatin1String) Compare3(c QChar, cs CaseSensitivity) int {
	return (int)(C.QLatin1String_compare3(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QLatin1String) StartsWithWithQChar(c QChar) bool {
	return (bool)(C.QLatin1String_startsWithWithQChar(this.h, c.cPointer()))
}

func (this *QLatin1String) StartsWith2(c QChar, cs CaseSensitivity) bool {
	return (bool)(C.QLatin1String_startsWith2(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QLatin1String) EndsWithWithQChar(c QChar) bool {
	return (bool)(C.QLatin1String_endsWithWithQChar(this.h, c.cPointer()))
}

func (this *QLatin1String) EndsWith2(c QChar, cs CaseSensitivity) bool {
	return (bool)(C.QLatin1String_endsWith2(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QLatin1String) IndexOfWithQChar(c QChar) int64 {
	return (int64)(C.QLatin1String_indexOfWithQChar(this.h, c.cPointer()))
}

func (this *QLatin1String) IndexOf2(c QChar, from int64, cs CaseSensitivity) int64 {
	return (int64)(C.QLatin1String_indexOf2(this.h, c.cPointer(), (C.ptrdiff_t)(from), (C.int)(cs)))
}

func (this *QLatin1String) ContainsWithQChar(c QChar) bool {
	return (bool)(C.QLatin1String_containsWithQChar(this.h, c.cPointer()))
}

func (this *QLatin1String) LastIndexOfWithQChar(c QChar) int64 {
	return (int64)(C.QLatin1String_lastIndexOfWithQChar(this.h, c.cPointer()))
}

func (this *QLatin1String) LastIndexOf4(c QChar, cs CaseSensitivity) int64 {
	return (int64)(C.QLatin1String_lastIndexOf4(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QLatin1String) LastIndexOf5(c QChar, from int64) int64 {
	return (int64)(C.QLatin1String_lastIndexOf5(this.h, c.cPointer(), (C.ptrdiff_t)(from)))
}

func (this *QLatin1String) LastIndexOf6(c QChar, from int64, cs CaseSensitivity) int64 {
	return (int64)(C.QLatin1String_lastIndexOf6(this.h, c.cPointer(), (C.ptrdiff_t)(from), (C.int)(cs)))
}

func (this *QLatin1String) CountWithCh(ch QChar) int64 {
	return (int64)(C.QLatin1String_countWithCh(this.h, ch.cPointer()))
}

func (this *QLatin1String) ToShort() int16 {
	return (int16)(C.QLatin1String_toShort(this.h))
}

func (this *QLatin1String) ToUShort() uint16 {
	return (uint16)(C.QLatin1String_toUShort(this.h))
}

func (this *QLatin1String) ToInt() int {
	return (int)(C.QLatin1String_toInt(this.h))
}

func (this *QLatin1String) ToUInt() uint {
	return (uint)(C.QLatin1String_toUInt(this.h))
}

func (this *QLatin1String) ToLong() int64 {
	return (int64)(C.QLatin1String_toLong(this.h))
}

func (this *QLatin1String) ToULong() uint64 {
	return (uint64)(C.QLatin1String_toULong(this.h))
}

func (this *QLatin1String) ToLongLong() int64 {
	return (int64)(C.QLatin1String_toLongLong(this.h))
}

func (this *QLatin1String) ToULongLong() uint64 {
	return (uint64)(C.QLatin1String_toULongLong(this.h))
}

func (this *QLatin1String) ToFloat() float32 {
	return (float32)(C.QLatin1String_toFloat(this.h))
}

func (this *QLatin1String) ToDouble() float64 {
	return (float64)(C.QLatin1String_toDouble(this.h))
}

func (this *QLatin1String) Begin() const_iterator {
	int /* TODO  */
}

func (this *QLatin1String) Cbegin() const_iterator {
	int /* TODO  */
}

func (this *QLatin1String) End() const_iterator {
	int /* TODO  */
}

func (this *QLatin1String) Cend() const_iterator {
	int /* TODO  */
}

func (this *QLatin1String) Rbegin() const_reverse_iterator {
	int /* TODO  */
}

func (this *QLatin1String) Crbegin() const_reverse_iterator {
	int /* TODO  */
}

func (this *QLatin1String) Rend() const_reverse_iterator {
	int /* TODO  */
}

func (this *QLatin1String) Crend() const_reverse_iterator {
	int /* TODO  */
}

func (this *QLatin1String) MaxSize() int64 {
	return (int64)(C.QLatin1String_maxSize(this.h))
}

func QLatin1String_MaxSize2() int64 {
	return (int64)(C.QLatin1String_maxSize2())
}

func (this *QLatin1String) Chop(n int64) {
	C.QLatin1String_chop(this.h, (C.ptrdiff_t)(n))
}

func (this *QLatin1String) Truncate(n int64) {
	C.QLatin1String_truncate(this.h, (C.ptrdiff_t)(n))
}

func (this *QLatin1String) IndexOf7(c QChar, from int64) int64 {
	return (int64)(C.QLatin1String_indexOf7(this.h, c.cPointer(), (C.ptrdiff_t)(from)))
}

func (this *QLatin1String) Contains4(c QChar, cs CaseSensitivity) bool {
	return (bool)(C.QLatin1String_contains4(this.h, c.cPointer(), (C.int)(cs)))
}

func (this *QLatin1String) Count4(ch QChar, cs CaseSensitivity) int64 {
	return (int64)(C.QLatin1String_count4(this.h, ch.cPointer(), (C.int)(cs)))
}

func (this *QLatin1String) ToShortWithOk(ok *bool) int16 {
	return (int16)(C.QLatin1String_toShortWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLatin1String) ToShort2(ok *bool, base int) int16 {
	return (int16)(C.QLatin1String_toShort2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QLatin1String) ToUShortWithOk(ok *bool) uint16 {
	return (uint16)(C.QLatin1String_toUShortWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLatin1String) ToUShort2(ok *bool, base int) uint16 {
	return (uint16)(C.QLatin1String_toUShort2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QLatin1String) ToIntWithOk(ok *bool) int {
	return (int)(C.QLatin1String_toIntWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLatin1String) ToInt2(ok *bool, base int) int {
	return (int)(C.QLatin1String_toInt2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QLatin1String) ToUIntWithOk(ok *bool) uint {
	return (uint)(C.QLatin1String_toUIntWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLatin1String) ToUInt2(ok *bool, base int) uint {
	return (uint)(C.QLatin1String_toUInt2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QLatin1String) ToLongWithOk(ok *bool) int64 {
	return (int64)(C.QLatin1String_toLongWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLatin1String) ToLong2(ok *bool, base int) int64 {
	return (int64)(C.QLatin1String_toLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QLatin1String) ToULongWithOk(ok *bool) uint64 {
	return (uint64)(C.QLatin1String_toULongWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLatin1String) ToULong2(ok *bool, base int) uint64 {
	return (uint64)(C.QLatin1String_toULong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QLatin1String) ToLongLongWithOk(ok *bool) int64 {
	return (int64)(C.QLatin1String_toLongLongWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLatin1String) ToLongLong2(ok *bool, base int) int64 {
	return (int64)(C.QLatin1String_toLongLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QLatin1String) ToULongLongWithOk(ok *bool) uint64 {
	return (uint64)(C.QLatin1String_toULongLongWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLatin1String) ToULongLong2(ok *bool, base int) uint64 {
	return (uint64)(C.QLatin1String_toULongLong2(this.h, (*C.bool)(unsafe.Pointer(ok)), (C.int)(base)))
}

func (this *QLatin1String) ToFloatWithOk(ok *bool) float32 {
	return (float32)(C.QLatin1String_toFloatWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLatin1String) ToDoubleWithOk(ok *bool) float64 {
	return (float64)(C.QLatin1String_toDoubleWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

// Delete this object from C++ memory.
func (this *QLatin1String) Delete() {
	C.QLatin1String_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLatin1String) GoGC() {
	runtime.SetFinalizer(this, func(this *QLatin1String) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

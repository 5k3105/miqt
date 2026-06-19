package cbor

/*

#include "gen_qcborarray.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QCborArray struct {
	h *C.QCborArray
}

func (this *QCborArray) cPointer() *C.QCborArray {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCborArray) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCborArray constructs the type using only CGO pointers.
func newQCborArray(h *C.QCborArray) *QCborArray {
	if h == nil {
		return nil
	}

	return &QCborArray{h: h}
}

// UnsafeNewQCborArray constructs the type using only unsafe pointers.
func UnsafeNewQCborArray(h unsafe.Pointer) *QCborArray {
	return newQCborArray((*C.QCborArray)(h))
}

// NewQCborArray constructs a new QCborArray object.
func NewQCborArray() *QCborArray {

	return newQCborArray(C.QCborArray_new())
}

// NewQCborArray2 constructs a new QCborArray object.
func NewQCborArray2(other *QCborArray) *QCborArray {

	return newQCborArray(C.QCborArray_new2(other.cPointer()))
}

func (this *QCborArray) OperatorAssign(other *QCborArray) {
	C.QCborArray_operatorAssign(this.h, other.cPointer())
}

func (this *QCborArray) Swap(other *QCborArray) {
	C.QCborArray_swap(this.h, other.cPointer())
}

func (this *QCborArray) ToCborValue() *QCborValue {
	_goptr := newQCborValue(C.QCborArray_toCborValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Size() int64 {
	return (int64)(C.QCborArray_size(this.h))
}

func (this *QCborArray) IsEmpty() bool {
	return (bool)(C.QCborArray_isEmpty(this.h))
}

func (this *QCborArray) Clear() {
	C.QCborArray_clear(this.h)
}

func (this *QCborArray) At(i int64) *QCborValue {
	_goptr := newQCborValue(C.QCborArray_at(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) First() *QCborValue {
	_goptr := newQCborValue(C.QCborArray_first(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Last() *QCborValue {
	_goptr := newQCborValue(C.QCborArray_last(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) OperatorSubscript(i int64) *QCborValue {
	_goptr := newQCborValue(C.QCborArray_operatorSubscript(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) First2() *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborArray_first2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Last2() *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborArray_last2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) OperatorSubscriptWithQsizetype(i int64) *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborArray_operatorSubscriptWithQsizetype(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Insert(i int64, value *QCborValue) {
	C.QCborArray_insert(this.h, (C.ptrdiff_t)(i), value.cPointer())
}

func (this *QCborArray) Prepend(value *QCborValue) {
	C.QCborArray_prepend(this.h, value.cPointer())
}

func (this *QCborArray) Append(value *QCborValue) {
	C.QCborArray_append(this.h, value.cPointer())
}

func (this *QCborArray) Extract(it ConstIterator) *QCborValue {
	_goptr := newQCborValue(C.QCborArray_extract(this.h, it))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) ExtractWithIt(it Iterator) *QCborValue {
	_goptr := newQCborValue(C.QCborArray_extractWithIt(this.h, it))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) RemoveAt(i int64) {
	C.QCborArray_removeAt(this.h, (C.ptrdiff_t)(i))
}

func (this *QCborArray) TakeAt(i int64) *QCborValue {
	_goptr := newQCborValue(C.QCborArray_takeAt(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) RemoveFirst() {
	C.QCborArray_removeFirst(this.h)
}

func (this *QCborArray) RemoveLast() {
	C.QCborArray_removeLast(this.h)
}

func (this *QCborArray) TakeFirst() *QCborValue {
	_goptr := newQCborValue(C.QCborArray_takeFirst(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) TakeLast() *QCborValue {
	_goptr := newQCborValue(C.QCborArray_takeLast(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) Contains(value *QCborValue) bool {
	return (bool)(C.QCborArray_contains(this.h, value.cPointer()))
}

func (this *QCborArray) Compare(other *QCborArray) int {
	return (int)(C.QCborArray_compare(this.h, other.cPointer()))
}

func (this *QCborArray) Begin() iterator {
	int /* TODO  */
}

func (this *QCborArray) ConstBegin() const_iterator {
	int /* TODO  */
}

func (this *QCborArray) Begin2() const_iterator {
	int /* TODO  */
}

func (this *QCborArray) Cbegin() const_iterator {
	int /* TODO  */
}

func (this *QCborArray) End() iterator {
	int /* TODO  */
}

func (this *QCborArray) ConstEnd() const_iterator {
	int /* TODO  */
}

func (this *QCborArray) End2() const_iterator {
	int /* TODO  */
}

func (this *QCborArray) Cend() const_iterator {
	int /* TODO  */
}

func (this *QCborArray) Insert2(before iterator, value *QCborValue) iterator {
	int /* TODO  */
}

func (this *QCborArray) Insert3(before const_iterator, value *QCborValue) iterator {
	int /* TODO  */
}

func (this *QCborArray) Erase(it iterator) iterator {
	int /* TODO  */
}

func (this *QCborArray) EraseWithIt(it const_iterator) iterator {
	int /* TODO  */
}

func (this *QCborArray) PushBack(t *QCborValue) {
	C.QCborArray_pushBack(this.h, t.cPointer())
}

func (this *QCborArray) PushFront(t *QCborValue) {
	C.QCborArray_pushFront(this.h, t.cPointer())
}

func (this *QCborArray) PopFront() {
	C.QCborArray_popFront(this.h)
}

func (this *QCborArray) PopBack() {
	C.QCborArray_popBack(this.h)
}

func (this *QCborArray) Empty() bool {
	return (bool)(C.QCborArray_empty(this.h))
}

func (this *QCborArray) OperatorPlus(v *QCborValue) *QCborArray {
	_goptr := newQCborArray(C.QCborArray_operatorPlus(this.h, v.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) OperatorPlusAssign(v *QCborValue) *QCborArray {
	return newQCborArray(C.QCborArray_operatorPlusAssign(this.h, v.cPointer()))
}

func (this *QCborArray) OperatorShiftLeft(v *QCborValue) *QCborArray {
	return newQCborArray(C.QCborArray_operatorShiftLeft(this.h, v.cPointer()))
}

func QCborArray_FromStringList(list []string) *QCborArray {
	list_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_i_ms := C.struct_miqt_string{}
		list_i_ms.data = C.CString(list[i])
		list_i_ms.len = C.size_t(len(list[i]))
		defer C.free(unsafe.Pointer(list_i_ms.data))
		list_CArray[i] = list_i_ms
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	_goptr := newQCborArray(C.QCborArray_fromStringList(list_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborArray_FromVariantList(list []qt6.QVariant) *QCborArray {
	list_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = (*C.QVariant)(list[i].UnsafePointer())
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	_goptr := newQCborArray(C.QCborArray_fromVariantList(list_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCborArray_FromJsonArray(array *qt6.QJsonArray) *QCborArray {
	_goptr := newQCborArray(C.QCborArray_fromJsonArray((*C.QJsonArray)(array.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray) ToVariantList() []qt6.QVariant {
	var _ma C.struct_miqt_array = C.QCborArray_toVariantList(this.h)
	_ret := make([]qt6.QVariant, int(_ma.len))
	_outCast := (*[0xffff]*C.QVariant)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCborArray) ToJsonArray() *qt6.QJsonArray {
	_goptr := qt6.UnsafeNewQJsonArray(unsafe.Pointer(C.QCborArray_toJsonArray(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QCborArray) Delete() {
	C.QCborArray_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborArray) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborArray) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCborArray__Iterator struct {
	h *C.QCborArray__Iterator
}

func (this *QCborArray__Iterator) cPointer() *C.QCborArray__Iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCborArray__Iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCborArray__Iterator constructs the type using only CGO pointers.
func newQCborArray__Iterator(h *C.QCborArray__Iterator) *QCborArray__Iterator {
	if h == nil {
		return nil
	}

	return &QCborArray__Iterator{h: h}
}

// UnsafeNewQCborArray__Iterator constructs the type using only unsafe pointers.
func UnsafeNewQCborArray__Iterator(h unsafe.Pointer) *QCborArray__Iterator {
	return newQCborArray__Iterator((*C.QCborArray__Iterator)(h))
}

// NewQCborArray__Iterator constructs a new QCborArray::Iterator object.
func NewQCborArray__Iterator() *QCborArray__Iterator {

	return newQCborArray__Iterator(C.QCborArray__Iterator_new())
}

// NewQCborArray__Iterator2 constructs a new QCborArray::Iterator object.
func NewQCborArray__Iterator2(param1 *Iterator) *QCborArray__Iterator {

	return newQCborArray__Iterator(C.QCborArray__Iterator_new2(param1))
}

func (this *QCborArray__Iterator) OperatorAssign(other *Iterator) {
	C.QCborArray__Iterator_operatorAssign(this.h, other)
}

func (this *QCborArray__Iterator) OperatorMultiply() *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborArray__Iterator_operatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__Iterator) OperatorMinusGreater() *QCborValueRef {
	return newQCborValueRef(C.QCborArray__Iterator_operatorMinusGreater(this.h))
}

func (this *QCborArray__Iterator) OperatorMinusGreater2() *QCborValueConstRef {
	return newQCborValueConstRef(C.QCborArray__Iterator_operatorMinusGreater2(this.h))
}

func (this *QCborArray__Iterator) OperatorSubscript(j int64) *QCborValueRef {
	_goptr := newQCborValueRef(C.QCborArray__Iterator_operatorSubscript(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__Iterator) OperatorPlusPlus() *Iterator {
	int /* TODO  */
}

func (this *QCborArray__Iterator) OperatorPlusPlusWithInt(param1 int) Iterator {
	int /* TODO  */
}

func (this *QCborArray__Iterator) OperatorMinusMinus() *Iterator {
	int /* TODO  */
}

func (this *QCborArray__Iterator) OperatorMinusMinusWithInt(param1 int) Iterator {
	int /* TODO  */
}

func (this *QCborArray__Iterator) OperatorPlusAssign(j int64) *Iterator {
	int /* TODO  */
}

func (this *QCborArray__Iterator) OperatorMinusAssign(j int64) *Iterator {
	int /* TODO  */
}

func (this *QCborArray__Iterator) OperatorPlus(j int64) Iterator {
	int /* TODO  */
}

func (this *QCborArray__Iterator) OperatorMinus(j int64) Iterator {
	int /* TODO  */
}

func (this *QCborArray__Iterator) OperatorMinusWithIterator(j Iterator) int64 {
	return (int64)(C.QCborArray__Iterator_operatorMinusWithIterator(this.h, j))
}

// Delete this object from C++ memory.
func (this *QCborArray__Iterator) Delete() {
	C.QCborArray__Iterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborArray__Iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborArray__Iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCborArray__ConstIterator struct {
	h *C.QCborArray__ConstIterator
}

func (this *QCborArray__ConstIterator) cPointer() *C.QCborArray__ConstIterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCborArray__ConstIterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCborArray__ConstIterator constructs the type using only CGO pointers.
func newQCborArray__ConstIterator(h *C.QCborArray__ConstIterator) *QCborArray__ConstIterator {
	if h == nil {
		return nil
	}

	return &QCborArray__ConstIterator{h: h}
}

// UnsafeNewQCborArray__ConstIterator constructs the type using only unsafe pointers.
func UnsafeNewQCborArray__ConstIterator(h unsafe.Pointer) *QCborArray__ConstIterator {
	return newQCborArray__ConstIterator((*C.QCborArray__ConstIterator)(h))
}

// NewQCborArray__ConstIterator constructs a new QCborArray::ConstIterator object.
func NewQCborArray__ConstIterator() *QCborArray__ConstIterator {

	return newQCborArray__ConstIterator(C.QCborArray__ConstIterator_new())
}

// NewQCborArray__ConstIterator2 constructs a new QCborArray::ConstIterator object.
func NewQCborArray__ConstIterator2(param1 *ConstIterator) *QCborArray__ConstIterator {

	return newQCborArray__ConstIterator(C.QCborArray__ConstIterator_new2(param1))
}

func (this *QCborArray__ConstIterator) OperatorAssign(other *ConstIterator) {
	C.QCborArray__ConstIterator_operatorAssign(this.h, other)
}

func (this *QCborArray__ConstIterator) OperatorMultiply() *QCborValueConstRef {
	_goptr := newQCborValueConstRef(C.QCborArray__ConstIterator_operatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__ConstIterator) OperatorMinusGreater() *QCborValueConstRef {
	return newQCborValueConstRef(C.QCborArray__ConstIterator_operatorMinusGreater(this.h))
}

func (this *QCborArray__ConstIterator) OperatorSubscript(j int64) *QCborValueConstRef {
	_goptr := newQCborValueConstRef(C.QCborArray__ConstIterator_operatorSubscript(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCborArray__ConstIterator) OperatorPlusPlus() *ConstIterator {
	int /* TODO  */
}

func (this *QCborArray__ConstIterator) OperatorPlusPlusWithInt(param1 int) ConstIterator {
	int /* TODO  */
}

func (this *QCborArray__ConstIterator) OperatorMinusMinus() *ConstIterator {
	int /* TODO  */
}

func (this *QCborArray__ConstIterator) OperatorMinusMinusWithInt(param1 int) ConstIterator {
	int /* TODO  */
}

func (this *QCborArray__ConstIterator) OperatorPlusAssign(j int64) *ConstIterator {
	int /* TODO  */
}

func (this *QCborArray__ConstIterator) OperatorMinusAssign(j int64) *ConstIterator {
	int /* TODO  */
}

func (this *QCborArray__ConstIterator) OperatorPlus(j int64) ConstIterator {
	int /* TODO  */
}

func (this *QCborArray__ConstIterator) OperatorMinus(j int64) ConstIterator {
	int /* TODO  */
}

func (this *QCborArray__ConstIterator) OperatorMinusWithConstIterator(j ConstIterator) int64 {
	return (int64)(C.QCborArray__ConstIterator_operatorMinusWithConstIterator(this.h, j))
}

// Delete this object from C++ memory.
func (this *QCborArray__ConstIterator) Delete() {
	C.QCborArray__ConstIterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCborArray__ConstIterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QCborArray__ConstIterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

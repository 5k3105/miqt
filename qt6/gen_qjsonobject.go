package qt6

/*

#include "gen_qjsonobject.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QJsonObject struct {
	h *C.QJsonObject
}

func (this *QJsonObject) cPointer() *C.QJsonObject {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJsonObject) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJsonObject constructs the type using only CGO pointers.
func newQJsonObject(h *C.QJsonObject) *QJsonObject {
	if h == nil {
		return nil
	}

	return &QJsonObject{h: h}
}

// UnsafeNewQJsonObject constructs the type using only unsafe pointers.
func UnsafeNewQJsonObject(h unsafe.Pointer) *QJsonObject {
	return newQJsonObject((*C.QJsonObject)(h))
}

// NewQJsonObject constructs a new QJsonObject object.
func NewQJsonObject() *QJsonObject {

	return newQJsonObject(C.QJsonObject_new())
}

// NewQJsonObject2 constructs a new QJsonObject object.
func NewQJsonObject2(other *QJsonObject) *QJsonObject {

	return newQJsonObject(C.QJsonObject_new2(other.cPointer()))
}

func (this *QJsonObject) OperatorAssign(other *QJsonObject) {
	C.QJsonObject_operatorAssign(this.h, other.cPointer())
}

func (this *QJsonObject) Swap(other *QJsonObject) {
	C.QJsonObject_swap(this.h, other.cPointer())
}

func QJsonObject_FromVariantMap(mapVal map[string]QVariant) *QJsonObject {
	mapVal_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Keys_CArray))
	mapVal_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Values_CArray))
	mapVal_ctr := 0
	for mapVal_k, mapVal_v := range mapVal {
		mapVal_k_ms := C.struct_miqt_string{}
		mapVal_k_ms.data = C.CString(mapVal_k)
		mapVal_k_ms.len = C.size_t(len(mapVal_k))
		defer C.free(unsafe.Pointer(mapVal_k_ms.data))
		mapVal_Keys_CArray[mapVal_ctr] = mapVal_k_ms
		mapVal_Values_CArray[mapVal_ctr] = mapVal_v.cPointer()
		mapVal_ctr++
	}
	mapVal_mm := C.struct_miqt_map{
		len:    C.size_t(len(mapVal)),
		keys:   unsafe.Pointer(mapVal_Keys_CArray),
		values: unsafe.Pointer(mapVal_Values_CArray),
	}
	_goptr := newQJsonObject(C.QJsonObject_fromVariantMap(mapVal_mm))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) ToVariantMap() map[string]QVariant {
	var _mm C.struct_miqt_map = C.QJsonObject_toVariantMap(this.h)
	_ret := make(map[string]QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _mapkey_ms C.struct_miqt_string = _Keys[i]
		_mapkey_ret := C.GoStringN(_mapkey_ms.data, C.int(int64(_mapkey_ms.len)))
		C.free(unsafe.Pointer(_mapkey_ms.data))
		_entry_Key := _mapkey_ret
		_mapval_goptr := newQVariant(_Values[i])
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func QJsonObject_FromVariantHash(mapVal map[string]QVariant) *QJsonObject {
	mapVal_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Keys_CArray))
	mapVal_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Values_CArray))
	mapVal_ctr := 0
	for mapVal_k, mapVal_v := range mapVal {
		mapVal_k_ms := C.struct_miqt_string{}
		mapVal_k_ms.data = C.CString(mapVal_k)
		mapVal_k_ms.len = C.size_t(len(mapVal_k))
		defer C.free(unsafe.Pointer(mapVal_k_ms.data))
		mapVal_Keys_CArray[mapVal_ctr] = mapVal_k_ms
		mapVal_Values_CArray[mapVal_ctr] = mapVal_v.cPointer()
		mapVal_ctr++
	}
	mapVal_mm := C.struct_miqt_map{
		len:    C.size_t(len(mapVal)),
		keys:   unsafe.Pointer(mapVal_Keys_CArray),
		values: unsafe.Pointer(mapVal_Values_CArray),
	}
	_goptr := newQJsonObject(C.QJsonObject_fromVariantHash(mapVal_mm))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) ToVariantHash() map[string]QVariant {
	var _mm C.struct_miqt_map = C.QJsonObject_toVariantHash(this.h)
	_ret := make(map[string]QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _hashkey_ms C.struct_miqt_string = _Keys[i]
		_hashkey_ret := C.GoStringN(_hashkey_ms.data, C.int(int64(_hashkey_ms.len)))
		C.free(unsafe.Pointer(_hashkey_ms.data))
		_entry_Key := _hashkey_ret
		_hashval_goptr := newQVariant(_Values[i])
		_hashval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_hashval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QJsonObject) Keys() []string {
	var _ma C.struct_miqt_array = C.QJsonObject_keys(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QJsonObject) Size() int64 {
	return (int64)(C.QJsonObject_size(this.h))
}

func (this *QJsonObject) Count() int64 {
	return (int64)(C.QJsonObject_count(this.h))
}

func (this *QJsonObject) Length() int64 {
	return (int64)(C.QJsonObject_length(this.h))
}

func (this *QJsonObject) IsEmpty() bool {
	return (bool)(C.QJsonObject_isEmpty(this.h))
}

func (this *QJsonObject) Value(key string) *QJsonValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQJsonValue(C.QJsonObject_value(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) OperatorSubscript(key string) *QJsonValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQJsonValue(C.QJsonObject_operatorSubscript(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) OperatorSubscriptWithKey(key string) *QJsonValueRef {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQJsonValueRef(C.QJsonObject_operatorSubscriptWithKey(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) Remove(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QJsonObject_remove(this.h, key_ms)
}

func (this *QJsonObject) Take(key string) *QJsonValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQJsonValue(C.QJsonObject_take(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject) Contains(key string) bool {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return (bool)(C.QJsonObject_contains(this.h, key_ms))
}

func (this *QJsonObject) Begin() iterator {
	int /* TODO  */
}

func (this *QJsonObject) Begin2() const_iterator {
	int /* TODO  */
}

func (this *QJsonObject) ConstBegin() const_iterator {
	int /* TODO  */
}

func (this *QJsonObject) End() iterator {
	int /* TODO  */
}

func (this *QJsonObject) End2() const_iterator {
	int /* TODO  */
}

func (this *QJsonObject) ConstEnd() const_iterator {
	int /* TODO  */
}

func (this *QJsonObject) KeyValueBegin() key_value_iterator {
	int /* TODO  */
}

func (this *QJsonObject) KeyValueEnd() key_value_iterator {
	int /* TODO  */
}

func (this *QJsonObject) KeyValueBegin2() const_key_value_iterator {
	int /* TODO  */
}

func (this *QJsonObject) ConstKeyValueBegin() const_key_value_iterator {
	int /* TODO  */
}

func (this *QJsonObject) KeyValueEnd2() const_key_value_iterator {
	int /* TODO  */
}

func (this *QJsonObject) ConstKeyValueEnd() const_key_value_iterator {
	int /* TODO  */
}

func (this *QJsonObject) Erase(it iterator) iterator {
	int /* TODO  */
}

func (this *QJsonObject) Find(key string) iterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	int /* TODO  */
}

func (this *QJsonObject) FindWithKey(key string) const_iterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	int /* TODO  */
}

func (this *QJsonObject) ConstFind(key string) const_iterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	int /* TODO  */
}

func (this *QJsonObject) Insert(key string, value *QJsonValue) iterator {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	int /* TODO  */
}

func (this *QJsonObject) Empty() bool {
	return (bool)(C.QJsonObject_empty(this.h))
}

// Delete this object from C++ memory.
func (this *QJsonObject) Delete() {
	C.QJsonObject_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonObject) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonObject) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QJsonObject__iterator struct {
	h *C.QJsonObject__iterator
}

func (this *QJsonObject__iterator) cPointer() *C.QJsonObject__iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJsonObject__iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJsonObject__iterator constructs the type using only CGO pointers.
func newQJsonObject__iterator(h *C.QJsonObject__iterator) *QJsonObject__iterator {
	if h == nil {
		return nil
	}

	return &QJsonObject__iterator{h: h}
}

// UnsafeNewQJsonObject__iterator constructs the type using only unsafe pointers.
func UnsafeNewQJsonObject__iterator(h unsafe.Pointer) *QJsonObject__iterator {
	return newQJsonObject__iterator((*C.QJsonObject__iterator)(h))
}

// NewQJsonObject__iterator constructs a new QJsonObject::iterator object.
func NewQJsonObject__iterator() *QJsonObject__iterator {

	return newQJsonObject__iterator(C.QJsonObject__iterator_new())
}

// NewQJsonObject__iterator2 constructs a new QJsonObject::iterator object.
func NewQJsonObject__iterator2(obj *QJsonObject, index int64) *QJsonObject__iterator {

	return newQJsonObject__iterator(C.QJsonObject__iterator_new2(obj.cPointer(), (C.ptrdiff_t)(index)))
}

// NewQJsonObject__iterator3 constructs a new QJsonObject::iterator object.
func NewQJsonObject__iterator3(other *iterator) *QJsonObject__iterator {

	return newQJsonObject__iterator(C.QJsonObject__iterator_new3(other))
}

func (this *QJsonObject__iterator) OperatorAssign(other *iterator) {
	C.QJsonObject__iterator_operatorAssign(this.h, other)
}

func (this *QJsonObject__iterator) Key() string {
	var _ms C.struct_miqt_string = C.QJsonObject__iterator_key(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonObject__iterator) KeyView() *QAnyStringView {
	_goptr := newQAnyStringView(C.QJsonObject__iterator_keyView(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) Value() *QJsonValueRef {
	_goptr := newQJsonValueRef(C.QJsonObject__iterator_value(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorMultiply() *QJsonValueRef {
	_goptr := newQJsonValueRef(C.QJsonObject__iterator_operatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorMinusGreater() *QJsonValueConstRef {
	return newQJsonValueConstRef(C.QJsonObject__iterator_operatorMinusGreater(this.h))
}

func (this *QJsonObject__iterator) OperatorMinusGreater2() *QJsonValueRef {
	return newQJsonValueRef(C.QJsonObject__iterator_operatorMinusGreater2(this.h))
}

func (this *QJsonObject__iterator) OperatorSubscript(j int64) *QJsonValueRef {
	_goptr := newQJsonValueRef(C.QJsonObject__iterator_operatorSubscript(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__iterator) OperatorPlusPlus() *iterator {
	int /* TODO  */
}

func (this *QJsonObject__iterator) OperatorPlusPlusWithInt(param1 int) iterator {
	int /* TODO  */
}

func (this *QJsonObject__iterator) OperatorMinusMinus() *iterator {
	int /* TODO  */
}

func (this *QJsonObject__iterator) OperatorMinusMinusWithInt(param1 int) iterator {
	int /* TODO  */
}

func (this *QJsonObject__iterator) OperatorPlus(j int64) iterator {
	int /* TODO  */
}

func (this *QJsonObject__iterator) OperatorMinus(j int64) iterator {
	int /* TODO  */
}

func (this *QJsonObject__iterator) OperatorPlusAssign(j int64) *iterator {
	int /* TODO  */
}

func (this *QJsonObject__iterator) OperatorMinusAssign(j int64) *iterator {
	int /* TODO  */
}

func (this *QJsonObject__iterator) OperatorMinusWithIterator(j iterator) int64 {
	return (int64)(C.QJsonObject__iterator_operatorMinusWithIterator(this.h, j))
}

// Delete this object from C++ memory.
func (this *QJsonObject__iterator) Delete() {
	C.QJsonObject__iterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonObject__iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonObject__iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QJsonObject__const_iterator struct {
	h *C.QJsonObject__const_iterator
}

func (this *QJsonObject__const_iterator) cPointer() *C.QJsonObject__const_iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJsonObject__const_iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJsonObject__const_iterator constructs the type using only CGO pointers.
func newQJsonObject__const_iterator(h *C.QJsonObject__const_iterator) *QJsonObject__const_iterator {
	if h == nil {
		return nil
	}

	return &QJsonObject__const_iterator{h: h}
}

// UnsafeNewQJsonObject__const_iterator constructs the type using only unsafe pointers.
func UnsafeNewQJsonObject__const_iterator(h unsafe.Pointer) *QJsonObject__const_iterator {
	return newQJsonObject__const_iterator((*C.QJsonObject__const_iterator)(h))
}

// NewQJsonObject__const_iterator constructs a new QJsonObject::const_iterator object.
func NewQJsonObject__const_iterator() *QJsonObject__const_iterator {

	return newQJsonObject__const_iterator(C.QJsonObject__const_iterator_new())
}

// NewQJsonObject__const_iterator2 constructs a new QJsonObject::const_iterator object.
func NewQJsonObject__const_iterator2(obj *QJsonObject, index int64) *QJsonObject__const_iterator {

	return newQJsonObject__const_iterator(C.QJsonObject__const_iterator_new2(obj.cPointer(), (C.ptrdiff_t)(index)))
}

// NewQJsonObject__const_iterator3 constructs a new QJsonObject::const_iterator object.
func NewQJsonObject__const_iterator3(other *iterator) *QJsonObject__const_iterator {

	return newQJsonObject__const_iterator(C.QJsonObject__const_iterator_new3(other))
}

// NewQJsonObject__const_iterator4 constructs a new QJsonObject::const_iterator object.
func NewQJsonObject__const_iterator4(other *const_iterator) *QJsonObject__const_iterator {

	return newQJsonObject__const_iterator(C.QJsonObject__const_iterator_new4(other))
}

func (this *QJsonObject__const_iterator) OperatorAssign(other *const_iterator) {
	C.QJsonObject__const_iterator_operatorAssign(this.h, other)
}

func (this *QJsonObject__const_iterator) Key() string {
	var _ms C.struct_miqt_string = C.QJsonObject__const_iterator_key(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonObject__const_iterator) KeyView() *QAnyStringView {
	_goptr := newQAnyStringView(C.QJsonObject__const_iterator_keyView(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) Value() *QJsonValueConstRef {
	_goptr := newQJsonValueConstRef(C.QJsonObject__const_iterator_value(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorMultiply() *QJsonValueConstRef {
	_goptr := newQJsonValueConstRef(C.QJsonObject__const_iterator_operatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorMinusGreater() *QJsonValueConstRef {
	return newQJsonValueConstRef(C.QJsonObject__const_iterator_operatorMinusGreater(this.h))
}

func (this *QJsonObject__const_iterator) OperatorSubscript(j int64) *QJsonValueConstRef {
	_goptr := newQJsonValueConstRef(C.QJsonObject__const_iterator_operatorSubscript(this.h, (C.ptrdiff_t)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonObject__const_iterator) OperatorPlusPlus() *const_iterator {
	int /* TODO  */
}

func (this *QJsonObject__const_iterator) OperatorPlusPlusWithInt(param1 int) const_iterator {
	int /* TODO  */
}

func (this *QJsonObject__const_iterator) OperatorMinusMinus() *const_iterator {
	int /* TODO  */
}

func (this *QJsonObject__const_iterator) OperatorMinusMinusWithInt(param1 int) const_iterator {
	int /* TODO  */
}

func (this *QJsonObject__const_iterator) OperatorPlus(j int64) const_iterator {
	int /* TODO  */
}

func (this *QJsonObject__const_iterator) OperatorMinus(j int64) const_iterator {
	int /* TODO  */
}

func (this *QJsonObject__const_iterator) OperatorPlusAssign(j int64) *const_iterator {
	int /* TODO  */
}

func (this *QJsonObject__const_iterator) OperatorMinusAssign(j int64) *const_iterator {
	int /* TODO  */
}

func (this *QJsonObject__const_iterator) OperatorMinusWithConstIterator(j const_iterator) int64 {
	return (int64)(C.QJsonObject__const_iterator_operatorMinusWithConstIterator(this.h, j))
}

// Delete this object from C++ memory.
func (this *QJsonObject__const_iterator) Delete() {
	C.QJsonObject__const_iterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonObject__const_iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonObject__const_iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

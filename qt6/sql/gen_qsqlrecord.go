package sql

/*

#include "gen_qsqlrecord.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QSqlRecord struct {
	h *C.QSqlRecord
}

func (this *QSqlRecord) cPointer() *C.QSqlRecord {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSqlRecord) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSqlRecord constructs the type using only CGO pointers.
func newQSqlRecord(h *C.QSqlRecord) *QSqlRecord {
	if h == nil {
		return nil
	}

	return &QSqlRecord{h: h}
}

// UnsafeNewQSqlRecord constructs the type using only unsafe pointers.
func UnsafeNewQSqlRecord(h unsafe.Pointer) *QSqlRecord {
	return newQSqlRecord((*C.QSqlRecord)(h))
}

// NewQSqlRecord constructs a new QSqlRecord object.
func NewQSqlRecord() *QSqlRecord {

	return newQSqlRecord(C.QSqlRecord_new())
}

// NewQSqlRecord2 constructs a new QSqlRecord object.
func NewQSqlRecord2(other *QSqlRecord) *QSqlRecord {

	return newQSqlRecord(C.QSqlRecord_new2(other.cPointer()))
}

func (this *QSqlRecord) OperatorAssign(other *QSqlRecord) {
	C.QSqlRecord_operatorAssign(this.h, other.cPointer())
}

func (this *QSqlRecord) Swap(other *QSqlRecord) {
	C.QSqlRecord_swap(this.h, other.cPointer())
}

func (this *QSqlRecord) OperatorEqual(other *QSqlRecord) bool {
	return (bool)(C.QSqlRecord_operatorEqual(this.h, other.cPointer()))
}

func (this *QSqlRecord) OperatorNotEqual(other *QSqlRecord) bool {
	return (bool)(C.QSqlRecord_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QSqlRecord) Value(i int) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSqlRecord_value(this.h, (C.int)(i))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlRecord) ValueWithName(name qt6.QAnyStringView) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QSqlRecord_valueWithName(this.h, (*C.QAnyStringView)(name.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlRecord) SetValue(i int, val *qt6.QVariant) {
	C.QSqlRecord_setValue(this.h, (C.int)(i), (*C.QVariant)(val.UnsafePointer()))
}

func (this *QSqlRecord) SetValue2(name qt6.QAnyStringView, val *qt6.QVariant) {
	C.QSqlRecord_setValue2(this.h, (*C.QAnyStringView)(name.UnsafePointer()), (*C.QVariant)(val.UnsafePointer()))
}

func (this *QSqlRecord) SetNull(i int) {
	C.QSqlRecord_setNull(this.h, (C.int)(i))
}

func (this *QSqlRecord) SetNullWithName(name qt6.QAnyStringView) {
	C.QSqlRecord_setNullWithName(this.h, (*C.QAnyStringView)(name.UnsafePointer()))
}

func (this *QSqlRecord) IsNull(i int) bool {
	return (bool)(C.QSqlRecord_isNull(this.h, (C.int)(i)))
}

func (this *QSqlRecord) IsNullWithName(name qt6.QAnyStringView) bool {
	return (bool)(C.QSqlRecord_isNullWithName(this.h, (*C.QAnyStringView)(name.UnsafePointer())))
}

func (this *QSqlRecord) IndexOf(name qt6.QAnyStringView) int {
	return (int)(C.QSqlRecord_indexOf(this.h, (*C.QAnyStringView)(name.UnsafePointer())))
}

func (this *QSqlRecord) FieldName(i int) string {
	var _ms C.struct_miqt_string = C.QSqlRecord_fieldName(this.h, (C.int)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlRecord) Field(i int) *QSqlField {
	_goptr := newQSqlField(C.QSqlRecord_field(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlRecord) FieldWithName(name qt6.QAnyStringView) *QSqlField {
	_goptr := newQSqlField(C.QSqlRecord_fieldWithName(this.h, (*C.QAnyStringView)(name.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlRecord) IsGenerated(i int) bool {
	return (bool)(C.QSqlRecord_isGenerated(this.h, (C.int)(i)))
}

func (this *QSqlRecord) IsGeneratedWithName(name qt6.QAnyStringView) bool {
	return (bool)(C.QSqlRecord_isGeneratedWithName(this.h, (*C.QAnyStringView)(name.UnsafePointer())))
}

func (this *QSqlRecord) SetGenerated(name qt6.QAnyStringView, generated bool) {
	C.QSqlRecord_setGenerated(this.h, (*C.QAnyStringView)(name.UnsafePointer()), (C.bool)(generated))
}

func (this *QSqlRecord) SetGenerated2(i int, generated bool) {
	C.QSqlRecord_setGenerated2(this.h, (C.int)(i), (C.bool)(generated))
}

func (this *QSqlRecord) Append(field *QSqlField) {
	C.QSqlRecord_append(this.h, field.cPointer())
}

func (this *QSqlRecord) Replace(pos int, field *QSqlField) {
	C.QSqlRecord_replace(this.h, (C.int)(pos), field.cPointer())
}

func (this *QSqlRecord) Insert(pos int, field *QSqlField) {
	C.QSqlRecord_insert(this.h, (C.int)(pos), field.cPointer())
}

func (this *QSqlRecord) Remove(pos int) {
	C.QSqlRecord_remove(this.h, (C.int)(pos))
}

func (this *QSqlRecord) IsEmpty() bool {
	return (bool)(C.QSqlRecord_isEmpty(this.h))
}

func (this *QSqlRecord) Contains(name qt6.QAnyStringView) bool {
	return (bool)(C.QSqlRecord_contains(this.h, (*C.QAnyStringView)(name.UnsafePointer())))
}

func (this *QSqlRecord) Clear() {
	C.QSqlRecord_clear(this.h)
}

func (this *QSqlRecord) ClearValues() {
	C.QSqlRecord_clearValues(this.h)
}

func (this *QSqlRecord) Count() int {
	return (int)(C.QSqlRecord_count(this.h))
}

func (this *QSqlRecord) KeyValues(keyFields *QSqlRecord) *QSqlRecord {
	_goptr := newQSqlRecord(C.QSqlRecord_keyValues(this.h, keyFields.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QSqlRecord) Delete() {
	C.QSqlRecord_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSqlRecord) GoGC() {
	runtime.SetFinalizer(this, func(this *QSqlRecord) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt6

/*

#include "gen_qrangemodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QRangeModel__AutoConnectPolicy int

const (
	QRangeModel__None   QRangeModel__AutoConnectPolicy = 0
	QRangeModel__Full   QRangeModel__AutoConnectPolicy = 1
	QRangeModel__OnRead QRangeModel__AutoConnectPolicy = 2
)

type QRangeModel__RowCategory int

const (
	QRangeModel__Default       QRangeModel__RowCategory = 0
	QRangeModel__MultiRoleItem QRangeModel__RowCategory = 1
)

type QRangeModel struct {
	h *C.QRangeModel
	*QAbstractItemModel
}

func (this *QRangeModel) cPointer() *C.QRangeModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRangeModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRangeModel constructs the type using only CGO pointers.
func newQRangeModel(h *C.QRangeModel) *QRangeModel {
	if h == nil {
		return nil
	}
	var outptr_QAbstractItemModel *C.QAbstractItemModel = nil
	C.QRangeModel_virtbase(h, &outptr_QAbstractItemModel)

	return &QRangeModel{h: h,
		QAbstractItemModel: newQAbstractItemModel(outptr_QAbstractItemModel)}
}

// UnsafeNewQRangeModel constructs the type using only unsafe pointers.
func UnsafeNewQRangeModel(h unsafe.Pointer) *QRangeModel {
	return newQRangeModel((*C.QRangeModel)(h))
}

func (this *QRangeModel) MetaObject() *QMetaObject {
	return newQMetaObject(C.QRangeModel_metaObject(this.h))
}

func (this *QRangeModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRangeModel_metacast(this.h, param1_Cstring))
}

func QRangeModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRangeModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRangeModel) Index(row int, column int) *QModelIndex {
	_goptr := newQModelIndex(C.QRangeModel_index(this.h, (C.int)(row), (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRangeModel) Parent(child *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QRangeModel_parent(this.h, child.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRangeModel) Sibling(row int, column int, index *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QRangeModel_sibling(this.h, (C.int)(row), (C.int)(column), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRangeModel) RowCount() int {
	return (int)(C.QRangeModel_rowCount(this.h))
}

func (this *QRangeModel) ColumnCount() int {
	return (int)(C.QRangeModel_columnCount(this.h))
}

func (this *QRangeModel) Flags(index *QModelIndex) ItemFlag {
	return (ItemFlag)(C.QRangeModel_flags(this.h, index.cPointer()))
}

func (this *QRangeModel) HeaderData(section int, orientation Orientation, role int) *QVariant {
	_goptr := newQVariant(C.QRangeModel_headerData(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRangeModel) SetHeaderData(section int, orientation Orientation, data *QVariant, role int) bool {
	return (bool)(C.QRangeModel_setHeaderData(this.h, (C.int)(section), (C.int)(orientation), data.cPointer(), (C.int)(role)))
}

func (this *QRangeModel) Data(index *QModelIndex, role int) *QVariant {
	_goptr := newQVariant(C.QRangeModel_data(this.h, index.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRangeModel) SetData(index *QModelIndex, data *QVariant, role int) bool {
	return (bool)(C.QRangeModel_setData(this.h, index.cPointer(), data.cPointer(), (C.int)(role)))
}

func (this *QRangeModel) ItemData(index *QModelIndex) map[int]QVariant {
	var _mm C.struct_miqt_map = C.QRangeModel_itemData(this.h, index.cPointer())
	_ret := make(map[int]QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		_mapval_goptr := newQVariant(_Values[i])
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QRangeModel) SetItemData(index *QModelIndex, data map[int]QVariant) bool {
	data_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(data))))
	defer C.free(unsafe.Pointer(data_Keys_CArray))
	data_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(data))))
	defer C.free(unsafe.Pointer(data_Values_CArray))
	data_ctr := 0
	for data_k, data_v := range data {
		data_Keys_CArray[data_ctr] = (C.int)(data_k)
		data_Values_CArray[data_ctr] = data_v.cPointer()
		data_ctr++
	}
	data_mm := C.struct_miqt_map{
		len:    C.size_t(len(data)),
		keys:   unsafe.Pointer(data_Keys_CArray),
		values: unsafe.Pointer(data_Values_CArray),
	}
	return (bool)(C.QRangeModel_setItemData(this.h, index.cPointer(), data_mm))
}

func (this *QRangeModel) ClearItemData(index *QModelIndex) bool {
	return (bool)(C.QRangeModel_clearItemData(this.h, index.cPointer()))
}

func (this *QRangeModel) InsertColumns(column int, count int) bool {
	return (bool)(C.QRangeModel_insertColumns(this.h, (C.int)(column), (C.int)(count)))
}

func (this *QRangeModel) RemoveColumns(column int, count int) bool {
	return (bool)(C.QRangeModel_removeColumns(this.h, (C.int)(column), (C.int)(count)))
}

func (this *QRangeModel) MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destParent *QModelIndex, destColumn int) bool {
	return (bool)(C.QRangeModel_moveColumns(this.h, sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destParent.cPointer(), (C.int)(destColumn)))
}

func (this *QRangeModel) InsertRows(row int, count int) bool {
	return (bool)(C.QRangeModel_insertRows(this.h, (C.int)(row), (C.int)(count)))
}

func (this *QRangeModel) RemoveRows(row int, count int) bool {
	return (bool)(C.QRangeModel_removeRows(this.h, (C.int)(row), (C.int)(count)))
}

func (this *QRangeModel) MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destParent *QModelIndex, destRow int) bool {
	return (bool)(C.QRangeModel_moveRows(this.h, sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destParent.cPointer(), (C.int)(destRow)))
}

func (this *QRangeModel) RoleNames() map[int][]byte {
	var _mm C.struct_miqt_map = C.QRangeModel_roleNames(this.h)
	_ret := make(map[int][]byte, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		var _hashval_bytearray C.struct_miqt_string = _Values[i]
		_hashval_ret := C.GoBytes(unsafe.Pointer(_hashval_bytearray.data), C.int(int64(_hashval_bytearray.len)))
		C.free(unsafe.Pointer(_hashval_bytearray.data))
		_entry_Value := _hashval_ret
		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QRangeModel) SetRoleNames(names map[int][]byte) {
	names_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(names))))
	defer C.free(unsafe.Pointer(names_Keys_CArray))
	names_Values_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(names))))
	defer C.free(unsafe.Pointer(names_Values_CArray))
	names_ctr := 0
	for names_k, names_v := range names {
		names_Keys_CArray[names_ctr] = (C.int)(names_k)
		names_v_alias := C.struct_miqt_string{}
		if len(names_v) > 0 {
			names_v_alias.data = (*C.char)(unsafe.Pointer(&names_v[0]))
		} else {
			names_v_alias.data = (*C.char)(unsafe.Pointer(nil))
		}
		names_v_alias.len = C.size_t(len(names_v))
		names_Values_CArray[names_ctr] = names_v_alias
		names_ctr++
	}
	names_mm := C.struct_miqt_map{
		len:    C.size_t(len(names)),
		keys:   unsafe.Pointer(names_Keys_CArray),
		values: unsafe.Pointer(names_Values_CArray),
	}
	C.QRangeModel_setRoleNames(this.h, names_mm)
}

func (this *QRangeModel) ResetRoleNames() {
	C.QRangeModel_resetRoleNames(this.h)
}

func (this *QRangeModel) CanFetchMore(parent *QModelIndex) bool {
	return (bool)(C.QRangeModel_canFetchMore(this.h, parent.cPointer()))
}

func (this *QRangeModel) FetchMore(parent *QModelIndex) {
	C.QRangeModel_fetchMore(this.h, parent.cPointer())
}

func (this *QRangeModel) HasChildren() bool {
	return (bool)(C.QRangeModel_hasChildren(this.h))
}

func (this *QRangeModel) Buddy(index *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QRangeModel_buddy(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRangeModel) CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QRangeModel_canDropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QRangeModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QRangeModel_dropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QRangeModel) MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	return newQMimeData(C.QRangeModel_mimeData(this.h, indexes_ma))
}

func (this *QRangeModel) MimeTypes() []string {
	var _ma C.struct_miqt_array = C.QRangeModel_mimeTypes(this.h)
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

func (this *QRangeModel) Match(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {
	var _ma C.struct_miqt_array = C.QRangeModel_match(this.h, start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QRangeModel) MultiData(index *QModelIndex, roleDataSpan QModelRoleDataSpan) {
	C.QRangeModel_multiData(this.h, index.cPointer(), roleDataSpan.cPointer())
}

func (this *QRangeModel) Sort(column int, order SortOrder) {
	C.QRangeModel_sort(this.h, (C.int)(column), (C.int)(order))
}

func (this *QRangeModel) Span(index *QModelIndex) *QSize {
	_goptr := newQSize(C.QRangeModel_span(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRangeModel) SupportedDragActions() DropAction {
	return (DropAction)(C.QRangeModel_supportedDragActions(this.h))
}

func (this *QRangeModel) SupportedDropActions() DropAction {
	return (DropAction)(C.QRangeModel_supportedDropActions(this.h))
}

func (this *QRangeModel) AutoConnectPolicy() AutoConnectPolicy {
	int /* TODO  */
}

func (this *QRangeModel) SetAutoConnectPolicy(policy AutoConnectPolicy) {
	C.QRangeModel_setAutoConnectPolicy(this.h, policy)
}

func (this *QRangeModel) RoleNamesChanged() {
	C.QRangeModel_roleNamesChanged(this.h)
}
func (this *QRangeModel) OnRoleNamesChanged(slot func()) {
	C.QRangeModel_connect_roleNamesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRangeModel_roleNamesChanged
func miqt_exec_callback_QRangeModel_roleNamesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QRangeModel) AutoConnectPolicyChanged(policy AutoConnectPolicy) {
	C.QRangeModel_autoConnectPolicyChanged(this.h, policy)
}
func (this *QRangeModel) OnAutoConnectPolicyChanged(slot func(policy AutoConnectPolicy)) {
	C.QRangeModel_connect_autoConnectPolicyChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRangeModel_autoConnectPolicyChanged
func miqt_exec_callback_QRangeModel_autoConnectPolicyChanged(cb C.intptr_t, policy C.AutoConnectPolicy) {
	gofunc, ok := cgo.Handle(cb).Value().(func(policy AutoConnectPolicy))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	int /* TODO  */

	gofunc(slotval1)
}

func QRangeModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRangeModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRangeModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRangeModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRangeModel) Index2(row int, column int, parent *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QRangeModel_index2(this.h, (C.int)(row), (C.int)(column), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRangeModel) RowCountWithParent(parent *QModelIndex) int {
	return (int)(C.QRangeModel_rowCountWithParent(this.h, parent.cPointer()))
}

func (this *QRangeModel) ColumnCountWithParent(parent *QModelIndex) int {
	return (int)(C.QRangeModel_columnCountWithParent(this.h, parent.cPointer()))
}

func (this *QRangeModel) InsertColumns2(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QRangeModel_insertColumns2(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QRangeModel) RemoveColumns2(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QRangeModel_removeColumns2(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QRangeModel) InsertRows2(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QRangeModel_insertRows2(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QRangeModel) RemoveRows2(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QRangeModel_removeRows2(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QRangeModel) HasChildrenWithParent(parent *QModelIndex) bool {
	return (bool)(C.QRangeModel_hasChildrenWithParent(this.h, parent.cPointer()))
}

// Delete this object from C++ memory.
func (this *QRangeModel) Delete() {
	C.QRangeModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRangeModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QRangeModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

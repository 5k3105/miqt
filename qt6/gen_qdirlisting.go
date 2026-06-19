package qt6

/*

#include "gen_qdirlisting.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDirListing__IteratorFlag int

const (
	QDirListing__Default               QDirListing__IteratorFlag = 0
	QDirListing__ExcludeFiles          QDirListing__IteratorFlag = 4
	QDirListing__ExcludeDirs           QDirListing__IteratorFlag = 8
	QDirListing__ExcludeSpecial        QDirListing__IteratorFlag = 16
	QDirListing__ExcludeOther          QDirListing__IteratorFlag = 16
	QDirListing__ResolveSymlinks       QDirListing__IteratorFlag = 32
	QDirListing__FilesOnly             QDirListing__IteratorFlag = 24
	QDirListing__DirsOnly              QDirListing__IteratorFlag = 20
	QDirListing__IncludeHidden         QDirListing__IteratorFlag = 64
	QDirListing__IncludeDotAndDotDot   QDirListing__IteratorFlag = 128
	QDirListing__CaseSensitive         QDirListing__IteratorFlag = 256
	QDirListing__Recursive             QDirListing__IteratorFlag = 1024
	QDirListing__FollowDirSymlinks     QDirListing__IteratorFlag = 2048
	QDirListing__IncludeBrokenSymlinks QDirListing__IteratorFlag = 4096
	QDirListing__NoNameFiltersForDirs  QDirListing__IteratorFlag = 262144
)

type QDirListing struct {
	h *C.QDirListing
}

func (this *QDirListing) cPointer() *C.QDirListing {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDirListing) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDirListing constructs the type using only CGO pointers.
func newQDirListing(h *C.QDirListing) *QDirListing {
	if h == nil {
		return nil
	}

	return &QDirListing{h: h}
}

// UnsafeNewQDirListing constructs the type using only unsafe pointers.
func UnsafeNewQDirListing(h unsafe.Pointer) *QDirListing {
	return newQDirListing((*C.QDirListing)(h))
}

// NewQDirListing constructs a new QDirListing object.
func NewQDirListing(path string) *QDirListing {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))

	return newQDirListing(C.QDirListing_new(path_ms))
}

// NewQDirListing2 constructs a new QDirListing object.
func NewQDirListing2(path string, nameFilters []string) *QDirListing {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	nameFilters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := C.struct_miqt_string{}
		nameFilters_i_ms.data = C.CString(nameFilters[i])
		nameFilters_i_ms.len = C.size_t(len(nameFilters[i]))
		defer C.free(unsafe.Pointer(nameFilters_i_ms.data))
		nameFilters_CArray[i] = nameFilters_i_ms
	}
	nameFilters_ma := C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}

	return newQDirListing(C.QDirListing_new2(path_ms, nameFilters_ma))
}

// NewQDirListing3 constructs a new QDirListing object.
func NewQDirListing3(path string, flags IteratorFlags) *QDirListing {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))

	return newQDirListing(C.QDirListing_new3(path_ms, flags))
}

// NewQDirListing4 constructs a new QDirListing object.
func NewQDirListing4(path string, nameFilters []string, flags IteratorFlags) *QDirListing {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	nameFilters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := C.struct_miqt_string{}
		nameFilters_i_ms.data = C.CString(nameFilters[i])
		nameFilters_i_ms.len = C.size_t(len(nameFilters[i]))
		defer C.free(unsafe.Pointer(nameFilters_i_ms.data))
		nameFilters_CArray[i] = nameFilters_i_ms
	}
	nameFilters_ma := C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}

	return newQDirListing(C.QDirListing_new4(path_ms, nameFilters_ma, flags))
}

func (this *QDirListing) Swap(other *QDirListing) {
	C.QDirListing_swap(this.h, other.cPointer())
}

func (this *QDirListing) IteratorPath() string {
	var _ms C.struct_miqt_string = C.QDirListing_iteratorPath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirListing) IteratorFlags() IteratorFlags {
	int /* TODO  */
}

func (this *QDirListing) NameFilters() []string {
	var _ma C.struct_miqt_array = C.QDirListing_nameFilters(this.h)
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

func (this *QDirListing) Begin() const_iterator {
	int /* TODO  */
}

func (this *QDirListing) Cbegin() const_iterator {
	int /* TODO  */
}

func (this *QDirListing) End() sentinel {
	int /* TODO  */
}

func (this *QDirListing) Cend() sentinel {
	int /* TODO  */
}

func (this *QDirListing) ConstBegin() const_iterator {
	int /* TODO  */
}

func (this *QDirListing) ConstEnd() sentinel {
	int /* TODO  */
}

// Delete this object from C++ memory.
func (this *QDirListing) Delete() {
	C.QDirListing_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDirListing) GoGC() {
	runtime.SetFinalizer(this, func(this *QDirListing) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDirListing__DirEntry struct {
	h *C.QDirListing__DirEntry
}

func (this *QDirListing__DirEntry) cPointer() *C.QDirListing__DirEntry {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDirListing__DirEntry) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDirListing__DirEntry constructs the type using only CGO pointers.
func newQDirListing__DirEntry(h *C.QDirListing__DirEntry) *QDirListing__DirEntry {
	if h == nil {
		return nil
	}

	return &QDirListing__DirEntry{h: h}
}

// UnsafeNewQDirListing__DirEntry constructs the type using only unsafe pointers.
func UnsafeNewQDirListing__DirEntry(h unsafe.Pointer) *QDirListing__DirEntry {
	return newQDirListing__DirEntry((*C.QDirListing__DirEntry)(h))
}

// NewQDirListing__DirEntry constructs a new QDirListing::DirEntry object.
func NewQDirListing__DirEntry(param1 *DirEntry) *QDirListing__DirEntry {

	return newQDirListing__DirEntry(C.QDirListing__DirEntry_new(param1))
}

// NewQDirListing__DirEntry2 constructs a new QDirListing::DirEntry object.
func NewQDirListing__DirEntry2() *QDirListing__DirEntry {

	return newQDirListing__DirEntry(C.QDirListing__DirEntry_new2())
}

func (this *QDirListing__DirEntry) FileName() string {
	var _ms C.struct_miqt_string = C.QDirListing__DirEntry_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirListing__DirEntry) BaseName() string {
	var _ms C.struct_miqt_string = C.QDirListing__DirEntry_baseName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirListing__DirEntry) CompleteBaseName() string {
	var _ms C.struct_miqt_string = C.QDirListing__DirEntry_completeBaseName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirListing__DirEntry) Suffix() string {
	var _ms C.struct_miqt_string = C.QDirListing__DirEntry_suffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirListing__DirEntry) BundleName() string {
	var _ms C.struct_miqt_string = C.QDirListing__DirEntry_bundleName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirListing__DirEntry) CompleteSuffix() string {
	var _ms C.struct_miqt_string = C.QDirListing__DirEntry_completeSuffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirListing__DirEntry) FilePath() string {
	var _ms C.struct_miqt_string = C.QDirListing__DirEntry_filePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirListing__DirEntry) IsDir() bool {
	return (bool)(C.QDirListing__DirEntry_isDir(this.h))
}

func (this *QDirListing__DirEntry) IsFile() bool {
	return (bool)(C.QDirListing__DirEntry_isFile(this.h))
}

func (this *QDirListing__DirEntry) IsSymLink() bool {
	return (bool)(C.QDirListing__DirEntry_isSymLink(this.h))
}

func (this *QDirListing__DirEntry) Exists() bool {
	return (bool)(C.QDirListing__DirEntry_exists(this.h))
}

func (this *QDirListing__DirEntry) IsHidden() bool {
	return (bool)(C.QDirListing__DirEntry_isHidden(this.h))
}

func (this *QDirListing__DirEntry) IsReadable() bool {
	return (bool)(C.QDirListing__DirEntry_isReadable(this.h))
}

func (this *QDirListing__DirEntry) IsWritable() bool {
	return (bool)(C.QDirListing__DirEntry_isWritable(this.h))
}

func (this *QDirListing__DirEntry) IsExecutable() bool {
	return (bool)(C.QDirListing__DirEntry_isExecutable(this.h))
}

func (this *QDirListing__DirEntry) FileInfo() *QFileInfo {
	_goptr := newQFileInfo(C.QDirListing__DirEntry_fileInfo(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirListing__DirEntry) CanonicalFilePath() string {
	var _ms C.struct_miqt_string = C.QDirListing__DirEntry_canonicalFilePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirListing__DirEntry) AbsoluteFilePath() string {
	var _ms C.struct_miqt_string = C.QDirListing__DirEntry_absoluteFilePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirListing__DirEntry) AbsolutePath() string {
	var _ms C.struct_miqt_string = C.QDirListing__DirEntry_absolutePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirListing__DirEntry) Size() int64 {
	return (int64)(C.QDirListing__DirEntry_size(this.h))
}

func (this *QDirListing__DirEntry) BirthTime(tz *QTimeZone) *QDateTime {
	_goptr := newQDateTime(C.QDirListing__DirEntry_birthTime(this.h, tz.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirListing__DirEntry) MetadataChangeTime(tz *QTimeZone) *QDateTime {
	_goptr := newQDateTime(C.QDirListing__DirEntry_metadataChangeTime(this.h, tz.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirListing__DirEntry) LastModified(tz *QTimeZone) *QDateTime {
	_goptr := newQDateTime(C.QDirListing__DirEntry_lastModified(this.h, tz.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirListing__DirEntry) LastRead(tz *QTimeZone) *QDateTime {
	_goptr := newQDateTime(C.QDirListing__DirEntry_lastRead(this.h, tz.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirListing__DirEntry) FileTime(typeVal QFileDevice__FileTime, tz *QTimeZone) *QDateTime {
	_goptr := newQDateTime(C.QDirListing__DirEntry_fileTime(this.h, (C.int)(typeVal), tz.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirListing__DirEntry) OperatorAssign(param1 *DirEntry) {
	C.QDirListing__DirEntry_operatorAssign(this.h, param1)
}

// Delete this object from C++ memory.
func (this *QDirListing__DirEntry) Delete() {
	C.QDirListing__DirEntry_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDirListing__DirEntry) GoGC() {
	runtime.SetFinalizer(this, func(this *QDirListing__DirEntry) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDirListing__sentinel struct {
	h *C.QDirListing__sentinel
}

func (this *QDirListing__sentinel) cPointer() *C.QDirListing__sentinel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDirListing__sentinel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDirListing__sentinel constructs the type using only CGO pointers.
func newQDirListing__sentinel(h *C.QDirListing__sentinel) *QDirListing__sentinel {
	if h == nil {
		return nil
	}

	return &QDirListing__sentinel{h: h}
}

// UnsafeNewQDirListing__sentinel constructs the type using only unsafe pointers.
func UnsafeNewQDirListing__sentinel(h unsafe.Pointer) *QDirListing__sentinel {
	return newQDirListing__sentinel((*C.QDirListing__sentinel)(h))
}

// NewQDirListing__sentinel constructs a new QDirListing::sentinel object.
func NewQDirListing__sentinel() *QDirListing__sentinel {

	return newQDirListing__sentinel(C.QDirListing__sentinel_new())
}

// NewQDirListing__sentinel2 constructs a new QDirListing::sentinel object.
func NewQDirListing__sentinel2(param1 *sentinel) *QDirListing__sentinel {

	return newQDirListing__sentinel(C.QDirListing__sentinel_new2(param1))
}

// Delete this object from C++ memory.
func (this *QDirListing__sentinel) Delete() {
	C.QDirListing__sentinel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDirListing__sentinel) GoGC() {
	runtime.SetFinalizer(this, func(this *QDirListing__sentinel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDirListing__const_iterator struct {
	h *C.QDirListing__const_iterator
}

func (this *QDirListing__const_iterator) cPointer() *C.QDirListing__const_iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDirListing__const_iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDirListing__const_iterator constructs the type using only CGO pointers.
func newQDirListing__const_iterator(h *C.QDirListing__const_iterator) *QDirListing__const_iterator {
	if h == nil {
		return nil
	}

	return &QDirListing__const_iterator{h: h}
}

// UnsafeNewQDirListing__const_iterator constructs the type using only unsafe pointers.
func UnsafeNewQDirListing__const_iterator(h unsafe.Pointer) *QDirListing__const_iterator {
	return newQDirListing__const_iterator((*C.QDirListing__const_iterator)(h))
}

// NewQDirListing__const_iterator constructs a new QDirListing::const_iterator object.
func NewQDirListing__const_iterator() *QDirListing__const_iterator {

	return newQDirListing__const_iterator(C.QDirListing__const_iterator_new())
}

func (this *QDirListing__const_iterator) OperatorMultiply() reference {
	int /* TODO  */
}

func (this *QDirListing__const_iterator) OperatorMinusGreater() pointer {
	int /* TODO  */
}

func (this *QDirListing__const_iterator) OperatorPlusPlus() *const_iterator {
	int /* TODO  */
}

func (this *QDirListing__const_iterator) OperatorPlusPlusWithInt(param1 int) {
	C.QDirListing__const_iterator_operatorPlusPlusWithInt(this.h, (C.int)(param1))
}

// Delete this object from C++ memory.
func (this *QDirListing__const_iterator) Delete() {
	C.QDirListing__const_iterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDirListing__const_iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QDirListing__const_iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

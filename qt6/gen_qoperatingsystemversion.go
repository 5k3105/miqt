package qt6

/*

#include "gen_qoperatingsystemversion.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QOperatingSystemVersionBase__OSType int

const (
	QOperatingSystemVersionBase__Unknown  QOperatingSystemVersionBase__OSType = 0
	QOperatingSystemVersionBase__Windows  QOperatingSystemVersionBase__OSType = 1
	QOperatingSystemVersionBase__MacOS    QOperatingSystemVersionBase__OSType = 2
	QOperatingSystemVersionBase__IOS      QOperatingSystemVersionBase__OSType = 3
	QOperatingSystemVersionBase__TvOS     QOperatingSystemVersionBase__OSType = 4
	QOperatingSystemVersionBase__WatchOS  QOperatingSystemVersionBase__OSType = 5
	QOperatingSystemVersionBase__Android  QOperatingSystemVersionBase__OSType = 6
	QOperatingSystemVersionBase__VisionOS QOperatingSystemVersionBase__OSType = 7
)

type QOperatingSystemVersion__OSType int

const (
	QOperatingSystemVersion__Unknown  QOperatingSystemVersion__OSType = 0
	QOperatingSystemVersion__Windows  QOperatingSystemVersion__OSType = 1
	QOperatingSystemVersion__MacOS    QOperatingSystemVersion__OSType = 2
	QOperatingSystemVersion__IOS      QOperatingSystemVersion__OSType = 3
	QOperatingSystemVersion__TvOS     QOperatingSystemVersion__OSType = 4
	QOperatingSystemVersion__WatchOS  QOperatingSystemVersion__OSType = 5
	QOperatingSystemVersion__Android  QOperatingSystemVersion__OSType = 6
	QOperatingSystemVersion__VisionOS QOperatingSystemVersion__OSType = 7
)

type QOperatingSystemVersionBase struct {
	h *C.QOperatingSystemVersionBase
}

func (this *QOperatingSystemVersionBase) cPointer() *C.QOperatingSystemVersionBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QOperatingSystemVersionBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQOperatingSystemVersionBase constructs the type using only CGO pointers.
func newQOperatingSystemVersionBase(h *C.QOperatingSystemVersionBase) *QOperatingSystemVersionBase {
	if h == nil {
		return nil
	}

	return &QOperatingSystemVersionBase{h: h}
}

// UnsafeNewQOperatingSystemVersionBase constructs the type using only unsafe pointers.
func UnsafeNewQOperatingSystemVersionBase(h unsafe.Pointer) *QOperatingSystemVersionBase {
	return newQOperatingSystemVersionBase((*C.QOperatingSystemVersionBase)(h))
}

// NewQOperatingSystemVersionBase constructs a new QOperatingSystemVersionBase object.
func NewQOperatingSystemVersionBase(osType OSType, vmajor int) *QOperatingSystemVersionBase {

	return newQOperatingSystemVersionBase(C.QOperatingSystemVersionBase_new(osType, (C.int)(vmajor)))
}

// NewQOperatingSystemVersionBase2 constructs a new QOperatingSystemVersionBase object.
func NewQOperatingSystemVersionBase2(param1 *QOperatingSystemVersionBase) *QOperatingSystemVersionBase {

	return newQOperatingSystemVersionBase(C.QOperatingSystemVersionBase_new2(param1.cPointer()))
}

// NewQOperatingSystemVersionBase3 constructs a new QOperatingSystemVersionBase object.
func NewQOperatingSystemVersionBase3(osType OSType, vmajor int, vminor int) *QOperatingSystemVersionBase {

	return newQOperatingSystemVersionBase(C.QOperatingSystemVersionBase_new3(osType, (C.int)(vmajor), (C.int)(vminor)))
}

// NewQOperatingSystemVersionBase4 constructs a new QOperatingSystemVersionBase object.
func NewQOperatingSystemVersionBase4(osType OSType, vmajor int, vminor int, vmicro int) *QOperatingSystemVersionBase {

	return newQOperatingSystemVersionBase(C.QOperatingSystemVersionBase_new4(osType, (C.int)(vmajor), (C.int)(vminor), (C.int)(vmicro)))
}

func QOperatingSystemVersionBase_Current() *QOperatingSystemVersionBase {
	_goptr := newQOperatingSystemVersionBase(C.QOperatingSystemVersionBase_current())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QOperatingSystemVersionBase_Name(osversion QOperatingSystemVersionBase) string {
	var _ms C.struct_miqt_string = C.QOperatingSystemVersionBase_name(osversion.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QOperatingSystemVersionBase_CurrentType() OSType {
	int /* TODO  */
}

func (this *QOperatingSystemVersionBase) Version() *QVersionNumber {
	_goptr := newQVersionNumber(C.QOperatingSystemVersionBase_version(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QOperatingSystemVersionBase) MajorVersion() int {
	return (int)(C.QOperatingSystemVersionBase_majorVersion(this.h))
}

func (this *QOperatingSystemVersionBase) MinorVersion() int {
	return (int)(C.QOperatingSystemVersionBase_minorVersion(this.h))
}

func (this *QOperatingSystemVersionBase) MicroVersion() int {
	return (int)(C.QOperatingSystemVersionBase_microVersion(this.h))
}

func (this *QOperatingSystemVersionBase) SegmentCount() int {
	return (int)(C.QOperatingSystemVersionBase_segmentCount(this.h))
}

func (this *QOperatingSystemVersionBase) Type() OSType {
	int /* TODO  */
}

func (this *QOperatingSystemVersionBase) Name2() string {
	var _ms C.struct_miqt_string = C.QOperatingSystemVersionBase_name2(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QOperatingSystemVersionBase) Delete() {
	C.QOperatingSystemVersionBase_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QOperatingSystemVersionBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QOperatingSystemVersionBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QOperatingSystemVersionUnexported struct {
	h *C.QOperatingSystemVersionUnexported
	*QOperatingSystemVersionBase
}

func (this *QOperatingSystemVersionUnexported) cPointer() *C.QOperatingSystemVersionUnexported {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QOperatingSystemVersionUnexported) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQOperatingSystemVersionUnexported constructs the type using only CGO pointers.
func newQOperatingSystemVersionUnexported(h *C.QOperatingSystemVersionUnexported) *QOperatingSystemVersionUnexported {
	if h == nil {
		return nil
	}
	var outptr_QOperatingSystemVersionBase *C.QOperatingSystemVersionBase = nil
	C.QOperatingSystemVersionUnexported_virtbase(h, &outptr_QOperatingSystemVersionBase)

	return &QOperatingSystemVersionUnexported{h: h,
		QOperatingSystemVersionBase: newQOperatingSystemVersionBase(outptr_QOperatingSystemVersionBase)}
}

// UnsafeNewQOperatingSystemVersionUnexported constructs the type using only unsafe pointers.
func UnsafeNewQOperatingSystemVersionUnexported(h unsafe.Pointer) *QOperatingSystemVersionUnexported {
	return newQOperatingSystemVersionUnexported((*C.QOperatingSystemVersionUnexported)(h))
}

// NewQOperatingSystemVersionUnexported constructs a new QOperatingSystemVersionUnexported object.
func NewQOperatingSystemVersionUnexported(other QOperatingSystemVersionBase) *QOperatingSystemVersionUnexported {

	return newQOperatingSystemVersionUnexported(C.QOperatingSystemVersionUnexported_new(other.cPointer()))
}

// NewQOperatingSystemVersionUnexported2 constructs a new QOperatingSystemVersionUnexported object.
func NewQOperatingSystemVersionUnexported2() *QOperatingSystemVersionUnexported {

	return newQOperatingSystemVersionUnexported(C.QOperatingSystemVersionUnexported_new2())
}

// NewQOperatingSystemVersionUnexported3 constructs a new QOperatingSystemVersionUnexported object.
func NewQOperatingSystemVersionUnexported3(param1 *QOperatingSystemVersionUnexported) *QOperatingSystemVersionUnexported {

	return newQOperatingSystemVersionUnexported(C.QOperatingSystemVersionUnexported_new3(param1.cPointer()))
}

// NewQOperatingSystemVersionUnexported4 constructs a new QOperatingSystemVersionUnexported object.
func NewQOperatingSystemVersionUnexported4(param1 OSType, param2 int, param3 int, param4 int) *QOperatingSystemVersionUnexported {

	return newQOperatingSystemVersionUnexported(C.QOperatingSystemVersionUnexported_new4(param1, (C.int)(param2), (C.int)(param3), (C.int)(param4)))
}

// Delete this object from C++ memory.
func (this *QOperatingSystemVersionUnexported) Delete() {
	C.QOperatingSystemVersionUnexported_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QOperatingSystemVersionUnexported) GoGC() {
	runtime.SetFinalizer(this, func(this *QOperatingSystemVersionUnexported) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QOperatingSystemVersion struct {
	h *C.QOperatingSystemVersion
	*QOperatingSystemVersionUnexported
}

func (this *QOperatingSystemVersion) cPointer() *C.QOperatingSystemVersion {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QOperatingSystemVersion) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQOperatingSystemVersion constructs the type using only CGO pointers.
func newQOperatingSystemVersion(h *C.QOperatingSystemVersion) *QOperatingSystemVersion {
	if h == nil {
		return nil
	}
	var outptr_QOperatingSystemVersionUnexported *C.QOperatingSystemVersionUnexported = nil
	C.QOperatingSystemVersion_virtbase(h, &outptr_QOperatingSystemVersionUnexported)

	return &QOperatingSystemVersion{h: h,
		QOperatingSystemVersionUnexported: newQOperatingSystemVersionUnexported(outptr_QOperatingSystemVersionUnexported)}
}

// UnsafeNewQOperatingSystemVersion constructs the type using only unsafe pointers.
func UnsafeNewQOperatingSystemVersion(h unsafe.Pointer) *QOperatingSystemVersion {
	return newQOperatingSystemVersion((*C.QOperatingSystemVersion)(h))
}

// NewQOperatingSystemVersion constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion(osversion *QOperatingSystemVersionBase) *QOperatingSystemVersion {

	return newQOperatingSystemVersion(C.QOperatingSystemVersion_new(osversion.cPointer()))
}

// NewQOperatingSystemVersion2 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion2(osType OSType, vmajor int) *QOperatingSystemVersion {

	return newQOperatingSystemVersion(C.QOperatingSystemVersion_new2(osType, (C.int)(vmajor)))
}

// NewQOperatingSystemVersion3 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion3(param1 *QOperatingSystemVersion) *QOperatingSystemVersion {

	return newQOperatingSystemVersion(C.QOperatingSystemVersion_new3(param1.cPointer()))
}

// NewQOperatingSystemVersion4 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion4(osType OSType, vmajor int, vminor int) *QOperatingSystemVersion {

	return newQOperatingSystemVersion(C.QOperatingSystemVersion_new4(osType, (C.int)(vmajor), (C.int)(vminor)))
}

// NewQOperatingSystemVersion5 constructs a new QOperatingSystemVersion object.
func NewQOperatingSystemVersion5(osType OSType, vmajor int, vminor int, vmicro int) *QOperatingSystemVersion {

	return newQOperatingSystemVersion(C.QOperatingSystemVersion_new5(osType, (C.int)(vmajor), (C.int)(vminor), (C.int)(vmicro)))
}

func QOperatingSystemVersion_Current() *QOperatingSystemVersion {
	_goptr := newQOperatingSystemVersion(C.QOperatingSystemVersion_current())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QOperatingSystemVersion_CurrentType() OSType {
	int /* TODO  */
}

func (this *QOperatingSystemVersion) Type() OSType {
	int /* TODO  */
}

// Delete this object from C++ memory.
func (this *QOperatingSystemVersion) Delete() {
	C.QOperatingSystemVersion_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QOperatingSystemVersion) GoGC() {
	runtime.SetFinalizer(this, func(this *QOperatingSystemVersion) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt6

/*

#include "gen_qcompare.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QtPrivate__Ordering CompareUnderlyingType

const (
	QtPrivate__Equal      QtPrivate__Ordering = 0
	QtPrivate__Equivalent QtPrivate__Ordering = 0
	QtPrivate__Less       QtPrivate__Ordering = -1
	QtPrivate__Greater    QtPrivate__Ordering = 1
)

type QtPrivate__Uncomparable CompareUnderlyingType

const (
	QtPrivate__Uncomparable__Unordered QtPrivate__Uncomparable = 2
)

type QtPrivate__LegacyUncomparable CompareUnderlyingType

const (
	QtPrivate__LegacyUncomparable__Unordered QtPrivate__LegacyUncomparable = -127
)

type partial_ordering struct {
	h *C.partial_ordering
}

func (this *partial_ordering) cPointer() *C.partial_ordering {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *partial_ordering) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newpartial_ordering constructs the type using only CGO pointers.
func newpartial_ordering(h *C.partial_ordering) *partial_ordering {
	if h == nil {
		return nil
	}

	return &partial_ordering{h: h}
}

// UnsafeNewpartial_ordering constructs the type using only unsafe pointers.
func UnsafeNewpartial_ordering(h unsafe.Pointer) *partial_ordering {
	return newpartial_ordering((*C.partial_ordering)(h))
}

// Newpartial_ordering constructs a new Qt::partial_ordering object.
func Newpartial_ordering(param1 *partial_ordering) *partial_ordering {

	return newpartial_ordering(C.partial_ordering_new(param1))
}

// Delete this object from C++ memory.
func (this *partial_ordering) Delete() {
	C.partial_ordering_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *partial_ordering) GoGC() {
	runtime.SetFinalizer(this, func(this *partial_ordering) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type weak_ordering struct {
	h *C.weak_ordering
}

func (this *weak_ordering) cPointer() *C.weak_ordering {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *weak_ordering) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newweak_ordering constructs the type using only CGO pointers.
func newweak_ordering(h *C.weak_ordering) *weak_ordering {
	if h == nil {
		return nil
	}

	return &weak_ordering{h: h}
}

// UnsafeNewweak_ordering constructs the type using only unsafe pointers.
func UnsafeNewweak_ordering(h unsafe.Pointer) *weak_ordering {
	return newweak_ordering((*C.weak_ordering)(h))
}

// Newweak_ordering constructs a new Qt::weak_ordering object.
func Newweak_ordering(param1 *weak_ordering) *weak_ordering {

	return newweak_ordering(C.weak_ordering_new(param1))
}

func (this *weak_ordering) ToPartialOrdering() partial_ordering {
	int /* TODO  */
}

// Delete this object from C++ memory.
func (this *weak_ordering) Delete() {
	C.weak_ordering_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *weak_ordering) GoGC() {
	runtime.SetFinalizer(this, func(this *weak_ordering) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type strong_ordering struct {
	h *C.strong_ordering
}

func (this *strong_ordering) cPointer() *C.strong_ordering {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *strong_ordering) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newstrong_ordering constructs the type using only CGO pointers.
func newstrong_ordering(h *C.strong_ordering) *strong_ordering {
	if h == nil {
		return nil
	}

	return &strong_ordering{h: h}
}

// UnsafeNewstrong_ordering constructs the type using only unsafe pointers.
func UnsafeNewstrong_ordering(h unsafe.Pointer) *strong_ordering {
	return newstrong_ordering((*C.strong_ordering)(h))
}

// Newstrong_ordering constructs a new Qt::strong_ordering object.
func Newstrong_ordering(param1 *strong_ordering) *strong_ordering {

	return newstrong_ordering(C.strong_ordering_new(param1))
}

func (this *strong_ordering) ToPartialOrdering() partial_ordering {
	int /* TODO  */
}

func (this *strong_ordering) ToWeakOrdering() weak_ordering {
	int /* TODO  */
}

// Delete this object from C++ memory.
func (this *strong_ordering) Delete() {
	C.strong_ordering_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *strong_ordering) GoGC() {
	runtime.SetFinalizer(this, func(this *strong_ordering) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPartialOrdering struct {
	h *C.QPartialOrdering
}

func (this *QPartialOrdering) cPointer() *C.QPartialOrdering {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPartialOrdering) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPartialOrdering constructs the type using only CGO pointers.
func newQPartialOrdering(h *C.QPartialOrdering) *QPartialOrdering {
	if h == nil {
		return nil
	}

	return &QPartialOrdering{h: h}
}

// UnsafeNewQPartialOrdering constructs the type using only unsafe pointers.
func UnsafeNewQPartialOrdering(h unsafe.Pointer) *QPartialOrdering {
	return newQPartialOrdering((*C.QPartialOrdering)(h))
}

// NewQPartialOrdering constructs a new QPartialOrdering object.
func NewQPartialOrdering(order partial_ordering) *QPartialOrdering {

	return newQPartialOrdering(C.QPartialOrdering_new(order.cPointer()))
}

// NewQPartialOrdering2 constructs a new QPartialOrdering object.
func NewQPartialOrdering2(stdorder weak_ordering) *QPartialOrdering {

	return newQPartialOrdering(C.QPartialOrdering_new2(stdorder.cPointer()))
}

// NewQPartialOrdering3 constructs a new QPartialOrdering object.
func NewQPartialOrdering3(stdorder strong_ordering) *QPartialOrdering {

	return newQPartialOrdering(C.QPartialOrdering_new3(stdorder.cPointer()))
}

// NewQPartialOrdering4 constructs a new QPartialOrdering object.
func NewQPartialOrdering4(param1 *QPartialOrdering) *QPartialOrdering {

	return newQPartialOrdering(C.QPartialOrdering_new4(param1.cPointer()))
}

func (this *QPartialOrdering) ToPartialOrdering() *partial_ordering {
	_goptr := newpartial_ordering(C.QPartialOrdering_ToPartialOrdering(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QPartialOrdering) Delete() {
	C.QPartialOrdering_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPartialOrdering) GoGC() {
	runtime.SetFinalizer(this, func(this *QPartialOrdering) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

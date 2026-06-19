package qt6

/*

#include "gen_qpermissions.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLocationPermission__Accuracy byte

const (
	QLocationPermission__Approximate QLocationPermission__Accuracy = 0
	QLocationPermission__Precise     QLocationPermission__Accuracy = 1
)

type QLocationPermission__Availability byte

const (
	QLocationPermission__WhenInUse QLocationPermission__Availability = 0
	QLocationPermission__Always    QLocationPermission__Availability = 1
)

type QCalendarPermission__AccessMode byte

const (
	QCalendarPermission__ReadOnly  QCalendarPermission__AccessMode = 0
	QCalendarPermission__ReadWrite QCalendarPermission__AccessMode = 1
)

type QContactsPermission__AccessMode byte

const (
	QContactsPermission__ReadOnly  QContactsPermission__AccessMode = 0
	QContactsPermission__ReadWrite QContactsPermission__AccessMode = 1
)

type QBluetoothPermission__CommunicationMode byte

const (
	QBluetoothPermission__Access    QBluetoothPermission__CommunicationMode = 1
	QBluetoothPermission__Advertise QBluetoothPermission__CommunicationMode = 2
	QBluetoothPermission__Default   QBluetoothPermission__CommunicationMode = 3
)

type QPermission struct {
	h *C.QPermission
}

func (this *QPermission) cPointer() *C.QPermission {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPermission) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPermission constructs the type using only CGO pointers.
func newQPermission(h *C.QPermission) *QPermission {
	if h == nil {
		return nil
	}

	return &QPermission{h: h}
}

// UnsafeNewQPermission constructs the type using only unsafe pointers.
func UnsafeNewQPermission(h unsafe.Pointer) *QPermission {
	return newQPermission((*C.QPermission)(h))
}

// NewQPermission constructs a new QPermission object.
func NewQPermission() *QPermission {

	return newQPermission(C.QPermission_new())
}

// NewQPermission2 constructs a new QPermission object.
func NewQPermission2(param1 *QPermission) *QPermission {

	return newQPermission(C.QPermission_new2(param1.cPointer()))
}

func (this *QPermission) Status() PermissionStatus {
	return (PermissionStatus)(C.QPermission_status(this.h))
}

func (this *QPermission) Type() *QMetaType {
	_goptr := newQMetaType(C.QPermission_type(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPermission) OperatorAssign(param1 *QPermission) {
	C.QPermission_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QPermission) Delete() {
	C.QPermission_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPermission) GoGC() {
	runtime.SetFinalizer(this, func(this *QPermission) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QLocationPermission struct {
	h *C.QLocationPermission
}

func (this *QLocationPermission) cPointer() *C.QLocationPermission {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLocationPermission) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLocationPermission constructs the type using only CGO pointers.
func newQLocationPermission(h *C.QLocationPermission) *QLocationPermission {
	if h == nil {
		return nil
	}

	return &QLocationPermission{h: h}
}

// UnsafeNewQLocationPermission constructs the type using only unsafe pointers.
func UnsafeNewQLocationPermission(h unsafe.Pointer) *QLocationPermission {
	return newQLocationPermission((*C.QLocationPermission)(h))
}

// NewQLocationPermission constructs a new QLocationPermission object.
func NewQLocationPermission() *QLocationPermission {

	return newQLocationPermission(C.QLocationPermission_new())
}

// NewQLocationPermission2 constructs a new QLocationPermission object.
func NewQLocationPermission2(other *QLocationPermission) *QLocationPermission {

	return newQLocationPermission(C.QLocationPermission_new2(other.cPointer()))
}

func (this *QLocationPermission) SetAccuracy(accuracy Accuracy) {
	C.QLocationPermission_setAccuracy(this.h, accuracy)
}

func (this *QLocationPermission) Accuracy() Accuracy {
	int /* TODO  */
}

func (this *QLocationPermission) SetAvailability(availability Availability) {
	C.QLocationPermission_setAvailability(this.h, availability)
}

func (this *QLocationPermission) Availability() Availability {
	int /* TODO  */
}

func (this *QLocationPermission) OperatorAssign(other *QLocationPermission) {
	C.QLocationPermission_operatorAssign(this.h, other.cPointer())
}
func (this *QLocationPermission) OnOperatorAssign(slot func(other *QLocationPermission)) {
	C.QLocationPermission_connect_operatorAssign(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocationPermission_operatorAssign
func miqt_exec_callback_QLocationPermission_operatorAssign(cb C.intptr_t, other *C.QLocationPermission) {
	gofunc, ok := cgo.Handle(cb).Value().(func(other *QLocationPermission))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQLocationPermission(other)

	gofunc(slotval1)
}

func (this *QLocationPermission) Swap(other *QLocationPermission) {
	C.QLocationPermission_swap(this.h, other.cPointer())
}
func (this *QLocationPermission) OnSwap(slot func(other *QLocationPermission)) {
	C.QLocationPermission_connect_swap(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocationPermission_swap
func miqt_exec_callback_QLocationPermission_swap(cb C.intptr_t, other *C.QLocationPermission) {
	gofunc, ok := cgo.Handle(cb).Value().(func(other *QLocationPermission))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQLocationPermission(other)

	gofunc(slotval1)
}

// Delete this object from C++ memory.
func (this *QLocationPermission) Delete() {
	C.QLocationPermission_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLocationPermission) GoGC() {
	runtime.SetFinalizer(this, func(this *QLocationPermission) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCalendarPermission struct {
	h *C.QCalendarPermission
}

func (this *QCalendarPermission) cPointer() *C.QCalendarPermission {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCalendarPermission) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCalendarPermission constructs the type using only CGO pointers.
func newQCalendarPermission(h *C.QCalendarPermission) *QCalendarPermission {
	if h == nil {
		return nil
	}

	return &QCalendarPermission{h: h}
}

// UnsafeNewQCalendarPermission constructs the type using only unsafe pointers.
func UnsafeNewQCalendarPermission(h unsafe.Pointer) *QCalendarPermission {
	return newQCalendarPermission((*C.QCalendarPermission)(h))
}

// NewQCalendarPermission constructs a new QCalendarPermission object.
func NewQCalendarPermission() *QCalendarPermission {

	return newQCalendarPermission(C.QCalendarPermission_new())
}

// NewQCalendarPermission2 constructs a new QCalendarPermission object.
func NewQCalendarPermission2(other *QCalendarPermission) *QCalendarPermission {

	return newQCalendarPermission(C.QCalendarPermission_new2(other.cPointer()))
}

func (this *QCalendarPermission) SetAccessMode(mode AccessMode) {
	C.QCalendarPermission_setAccessMode(this.h, mode)
}

func (this *QCalendarPermission) AccessMode() AccessMode {
	int /* TODO  */
}

func (this *QCalendarPermission) OperatorAssign(other *QCalendarPermission) {
	C.QCalendarPermission_operatorAssign(this.h, other.cPointer())
}
func (this *QCalendarPermission) OnOperatorAssign(slot func(other *QCalendarPermission)) {
	C.QCalendarPermission_connect_operatorAssign(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarPermission_operatorAssign
func miqt_exec_callback_QCalendarPermission_operatorAssign(cb C.intptr_t, other *C.QCalendarPermission) {
	gofunc, ok := cgo.Handle(cb).Value().(func(other *QCalendarPermission))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCalendarPermission(other)

	gofunc(slotval1)
}

func (this *QCalendarPermission) Swap(other *QCalendarPermission) {
	C.QCalendarPermission_swap(this.h, other.cPointer())
}
func (this *QCalendarPermission) OnSwap(slot func(other *QCalendarPermission)) {
	C.QCalendarPermission_connect_swap(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCalendarPermission_swap
func miqt_exec_callback_QCalendarPermission_swap(cb C.intptr_t, other *C.QCalendarPermission) {
	gofunc, ok := cgo.Handle(cb).Value().(func(other *QCalendarPermission))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCalendarPermission(other)

	gofunc(slotval1)
}

// Delete this object from C++ memory.
func (this *QCalendarPermission) Delete() {
	C.QCalendarPermission_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCalendarPermission) GoGC() {
	runtime.SetFinalizer(this, func(this *QCalendarPermission) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QContactsPermission struct {
	h *C.QContactsPermission
}

func (this *QContactsPermission) cPointer() *C.QContactsPermission {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QContactsPermission) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQContactsPermission constructs the type using only CGO pointers.
func newQContactsPermission(h *C.QContactsPermission) *QContactsPermission {
	if h == nil {
		return nil
	}

	return &QContactsPermission{h: h}
}

// UnsafeNewQContactsPermission constructs the type using only unsafe pointers.
func UnsafeNewQContactsPermission(h unsafe.Pointer) *QContactsPermission {
	return newQContactsPermission((*C.QContactsPermission)(h))
}

// NewQContactsPermission constructs a new QContactsPermission object.
func NewQContactsPermission() *QContactsPermission {

	return newQContactsPermission(C.QContactsPermission_new())
}

// NewQContactsPermission2 constructs a new QContactsPermission object.
func NewQContactsPermission2(other *QContactsPermission) *QContactsPermission {

	return newQContactsPermission(C.QContactsPermission_new2(other.cPointer()))
}

func (this *QContactsPermission) SetAccessMode(mode AccessMode) {
	C.QContactsPermission_setAccessMode(this.h, mode)
}

func (this *QContactsPermission) AccessMode() AccessMode {
	int /* TODO  */
}

func (this *QContactsPermission) OperatorAssign(other *QContactsPermission) {
	C.QContactsPermission_operatorAssign(this.h, other.cPointer())
}
func (this *QContactsPermission) OnOperatorAssign(slot func(other *QContactsPermission)) {
	C.QContactsPermission_connect_operatorAssign(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QContactsPermission_operatorAssign
func miqt_exec_callback_QContactsPermission_operatorAssign(cb C.intptr_t, other *C.QContactsPermission) {
	gofunc, ok := cgo.Handle(cb).Value().(func(other *QContactsPermission))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContactsPermission(other)

	gofunc(slotval1)
}

func (this *QContactsPermission) Swap(other *QContactsPermission) {
	C.QContactsPermission_swap(this.h, other.cPointer())
}
func (this *QContactsPermission) OnSwap(slot func(other *QContactsPermission)) {
	C.QContactsPermission_connect_swap(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QContactsPermission_swap
func miqt_exec_callback_QContactsPermission_swap(cb C.intptr_t, other *C.QContactsPermission) {
	gofunc, ok := cgo.Handle(cb).Value().(func(other *QContactsPermission))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContactsPermission(other)

	gofunc(slotval1)
}

// Delete this object from C++ memory.
func (this *QContactsPermission) Delete() {
	C.QContactsPermission_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QContactsPermission) GoGC() {
	runtime.SetFinalizer(this, func(this *QContactsPermission) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QBluetoothPermission struct {
	h *C.QBluetoothPermission
}

func (this *QBluetoothPermission) cPointer() *C.QBluetoothPermission {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBluetoothPermission) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBluetoothPermission constructs the type using only CGO pointers.
func newQBluetoothPermission(h *C.QBluetoothPermission) *QBluetoothPermission {
	if h == nil {
		return nil
	}

	return &QBluetoothPermission{h: h}
}

// UnsafeNewQBluetoothPermission constructs the type using only unsafe pointers.
func UnsafeNewQBluetoothPermission(h unsafe.Pointer) *QBluetoothPermission {
	return newQBluetoothPermission((*C.QBluetoothPermission)(h))
}

// NewQBluetoothPermission constructs a new QBluetoothPermission object.
func NewQBluetoothPermission() *QBluetoothPermission {

	return newQBluetoothPermission(C.QBluetoothPermission_new())
}

// NewQBluetoothPermission2 constructs a new QBluetoothPermission object.
func NewQBluetoothPermission2(other *QBluetoothPermission) *QBluetoothPermission {

	return newQBluetoothPermission(C.QBluetoothPermission_new2(other.cPointer()))
}

func (this *QBluetoothPermission) SetCommunicationModes(modes CommunicationModes) {
	C.QBluetoothPermission_setCommunicationModes(this.h, modes)
}

func (this *QBluetoothPermission) CommunicationModes() CommunicationModes {
	int /* TODO  */
}

func (this *QBluetoothPermission) OperatorAssign(other *QBluetoothPermission) {
	C.QBluetoothPermission_operatorAssign(this.h, other.cPointer())
}
func (this *QBluetoothPermission) OnOperatorAssign(slot func(other *QBluetoothPermission)) {
	C.QBluetoothPermission_connect_operatorAssign(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBluetoothPermission_operatorAssign
func miqt_exec_callback_QBluetoothPermission_operatorAssign(cb C.intptr_t, other *C.QBluetoothPermission) {
	gofunc, ok := cgo.Handle(cb).Value().(func(other *QBluetoothPermission))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQBluetoothPermission(other)

	gofunc(slotval1)
}

func (this *QBluetoothPermission) Swap(other *QBluetoothPermission) {
	C.QBluetoothPermission_swap(this.h, other.cPointer())
}
func (this *QBluetoothPermission) OnSwap(slot func(other *QBluetoothPermission)) {
	C.QBluetoothPermission_connect_swap(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBluetoothPermission_swap
func miqt_exec_callback_QBluetoothPermission_swap(cb C.intptr_t, other *C.QBluetoothPermission) {
	gofunc, ok := cgo.Handle(cb).Value().(func(other *QBluetoothPermission))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQBluetoothPermission(other)

	gofunc(slotval1)
}

// Delete this object from C++ memory.
func (this *QBluetoothPermission) Delete() {
	C.QBluetoothPermission_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBluetoothPermission) GoGC() {
	runtime.SetFinalizer(this, func(this *QBluetoothPermission) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCameraPermission struct {
	h *C.QCameraPermission
}

func (this *QCameraPermission) cPointer() *C.QCameraPermission {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraPermission) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraPermission constructs the type using only CGO pointers.
func newQCameraPermission(h *C.QCameraPermission) *QCameraPermission {
	if h == nil {
		return nil
	}

	return &QCameraPermission{h: h}
}

// UnsafeNewQCameraPermission constructs the type using only unsafe pointers.
func UnsafeNewQCameraPermission(h unsafe.Pointer) *QCameraPermission {
	return newQCameraPermission((*C.QCameraPermission)(h))
}

// NewQCameraPermission constructs a new QCameraPermission object.
func NewQCameraPermission() *QCameraPermission {

	return newQCameraPermission(C.QCameraPermission_new())
}

// NewQCameraPermission2 constructs a new QCameraPermission object.
func NewQCameraPermission2(other *QCameraPermission) *QCameraPermission {

	return newQCameraPermission(C.QCameraPermission_new2(other.cPointer()))
}

func (this *QCameraPermission) OperatorAssign(other *QCameraPermission) {
	C.QCameraPermission_operatorAssign(this.h, other.cPointer())
}
func (this *QCameraPermission) OnOperatorAssign(slot func(other *QCameraPermission)) {
	C.QCameraPermission_connect_operatorAssign(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraPermission_operatorAssign
func miqt_exec_callback_QCameraPermission_operatorAssign(cb C.intptr_t, other *C.QCameraPermission) {
	gofunc, ok := cgo.Handle(cb).Value().(func(other *QCameraPermission))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCameraPermission(other)

	gofunc(slotval1)
}

func (this *QCameraPermission) Swap(other *QCameraPermission) {
	C.QCameraPermission_swap(this.h, other.cPointer())
}
func (this *QCameraPermission) OnSwap(slot func(other *QCameraPermission)) {
	C.QCameraPermission_connect_swap(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraPermission_swap
func miqt_exec_callback_QCameraPermission_swap(cb C.intptr_t, other *C.QCameraPermission) {
	gofunc, ok := cgo.Handle(cb).Value().(func(other *QCameraPermission))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCameraPermission(other)

	gofunc(slotval1)
}

// Delete this object from C++ memory.
func (this *QCameraPermission) Delete() {
	C.QCameraPermission_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraPermission) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraPermission) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMicrophonePermission struct {
	h *C.QMicrophonePermission
}

func (this *QMicrophonePermission) cPointer() *C.QMicrophonePermission {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMicrophonePermission) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMicrophonePermission constructs the type using only CGO pointers.
func newQMicrophonePermission(h *C.QMicrophonePermission) *QMicrophonePermission {
	if h == nil {
		return nil
	}

	return &QMicrophonePermission{h: h}
}

// UnsafeNewQMicrophonePermission constructs the type using only unsafe pointers.
func UnsafeNewQMicrophonePermission(h unsafe.Pointer) *QMicrophonePermission {
	return newQMicrophonePermission((*C.QMicrophonePermission)(h))
}

// NewQMicrophonePermission constructs a new QMicrophonePermission object.
func NewQMicrophonePermission() *QMicrophonePermission {

	return newQMicrophonePermission(C.QMicrophonePermission_new())
}

// NewQMicrophonePermission2 constructs a new QMicrophonePermission object.
func NewQMicrophonePermission2(other *QMicrophonePermission) *QMicrophonePermission {

	return newQMicrophonePermission(C.QMicrophonePermission_new2(other.cPointer()))
}

func (this *QMicrophonePermission) OperatorAssign(other *QMicrophonePermission) {
	C.QMicrophonePermission_operatorAssign(this.h, other.cPointer())
}
func (this *QMicrophonePermission) OnOperatorAssign(slot func(other *QMicrophonePermission)) {
	C.QMicrophonePermission_connect_operatorAssign(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMicrophonePermission_operatorAssign
func miqt_exec_callback_QMicrophonePermission_operatorAssign(cb C.intptr_t, other *C.QMicrophonePermission) {
	gofunc, ok := cgo.Handle(cb).Value().(func(other *QMicrophonePermission))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMicrophonePermission(other)

	gofunc(slotval1)
}

func (this *QMicrophonePermission) Swap(other *QMicrophonePermission) {
	C.QMicrophonePermission_swap(this.h, other.cPointer())
}
func (this *QMicrophonePermission) OnSwap(slot func(other *QMicrophonePermission)) {
	C.QMicrophonePermission_connect_swap(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMicrophonePermission_swap
func miqt_exec_callback_QMicrophonePermission_swap(cb C.intptr_t, other *C.QMicrophonePermission) {
	gofunc, ok := cgo.Handle(cb).Value().(func(other *QMicrophonePermission))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMicrophonePermission(other)

	gofunc(slotval1)
}

// Delete this object from C++ memory.
func (this *QMicrophonePermission) Delete() {
	C.QMicrophonePermission_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMicrophonePermission) GoGC() {
	runtime.SetFinalizer(this, func(this *QMicrophonePermission) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt6

/*

#include "gen_qabstracteventdispatcher.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractEventDispatcher struct {
	h *C.QAbstractEventDispatcher
	*QObject
}

func (this *QAbstractEventDispatcher) cPointer() *C.QAbstractEventDispatcher {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractEventDispatcher) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractEventDispatcher constructs the type using only CGO pointers.
func newQAbstractEventDispatcher(h *C.QAbstractEventDispatcher) *QAbstractEventDispatcher {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAbstractEventDispatcher_virtbase(h, &outptr_QObject)

	return &QAbstractEventDispatcher{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQAbstractEventDispatcher constructs the type using only unsafe pointers.
func UnsafeNewQAbstractEventDispatcher(h unsafe.Pointer) *QAbstractEventDispatcher {
	return newQAbstractEventDispatcher((*C.QAbstractEventDispatcher)(h))
}

func (this *QAbstractEventDispatcher) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAbstractEventDispatcher_metaObject(this.h))
}

func (this *QAbstractEventDispatcher) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractEventDispatcher_metacast(this.h, param1_Cstring))
}

func QAbstractEventDispatcher_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_Instance() *QAbstractEventDispatcher {
	return newQAbstractEventDispatcher(C.QAbstractEventDispatcher_instance())
}

func (this *QAbstractEventDispatcher) ProcessEvents(flags ProcessEventsFlag) bool {
	return (bool)(C.QAbstractEventDispatcher_processEvents(this.h, (C.int)(flags)))
}

func (this *QAbstractEventDispatcher) RegisterSocketNotifier(notifier *QSocketNotifier) {
	C.QAbstractEventDispatcher_registerSocketNotifier(this.h, notifier.cPointer())
}

func (this *QAbstractEventDispatcher) UnregisterSocketNotifier(notifier *QSocketNotifier) {
	C.QAbstractEventDispatcher_unregisterSocketNotifier(this.h, notifier.cPointer())
}

func (this *QAbstractEventDispatcher) RegisterTimer(interval Duration, timerType TimerType, object *QObject) TimerId {
	return (TimerId)(C.QAbstractEventDispatcher_registerTimer(this.h, interval, (C.int)(timerType), object.cPointer()))
}

func (this *QAbstractEventDispatcher) RegisterTimer2(interval int64, timerType TimerType, object *QObject) int {
	return (int)(C.QAbstractEventDispatcher_registerTimer2(this.h, (C.longlong)(interval), (C.int)(timerType), object.cPointer()))
}

func (this *QAbstractEventDispatcher) RegisterTimer3(timerId int, interval int64, timerType TimerType, object *QObject) {
	C.QAbstractEventDispatcher_registerTimer3(this.h, (C.int)(timerId), (C.longlong)(interval), (C.int)(timerType), object.cPointer())
}

func (this *QAbstractEventDispatcher) UnregisterTimer(timerId int) bool {
	return (bool)(C.QAbstractEventDispatcher_unregisterTimer(this.h, (C.int)(timerId)))
}

func (this *QAbstractEventDispatcher) UnregisterTimers(object *QObject) bool {
	return (bool)(C.QAbstractEventDispatcher_unregisterTimers(this.h, object.cPointer()))
}

func (this *QAbstractEventDispatcher) RegisteredTimers(object *QObject) []TimerInfo {
	var _ma C.struct_miqt_array = C.QAbstractEventDispatcher_registeredTimers(this.h, object.cPointer())
	_ret := make([]TimerInfo, int(_ma.len))
	_outCast := (*[0xffff]C.TimerInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		int /* TODO  */
	}
	return _ret
}

func (this *QAbstractEventDispatcher) RemainingTime(timerId int) int {
	return (int)(C.QAbstractEventDispatcher_remainingTime(this.h, (C.int)(timerId)))
}

func (this *QAbstractEventDispatcher) RegisterTimer4(timerId TimerId, interval Duration, timerType TimerType, object *QObject) {
	C.QAbstractEventDispatcher_registerTimer4(this.h, (C.int)(timerId), interval, (C.int)(timerType), object.cPointer())
}

func (this *QAbstractEventDispatcher) UnregisterTimerWithTimerId(timerId TimerId) bool {
	return (bool)(C.QAbstractEventDispatcher_unregisterTimerWithTimerId(this.h, (C.int)(timerId)))
}

func (this *QAbstractEventDispatcher) TimersForObject(object *QObject) []TimerInfoV2 {
	var _ma C.struct_miqt_array = C.QAbstractEventDispatcher_timersForObject(this.h, object.cPointer())
	_ret := make([]TimerInfoV2, int(_ma.len))
	_outCast := (*[0xffff]C.TimerInfoV2)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		int /* TODO  */
	}
	return _ret
}

func (this *QAbstractEventDispatcher) RemainingTimeWithTimerId(timerId TimerId) Duration {
	int /* TODO  */
}

func (this *QAbstractEventDispatcher) WakeUp() {
	C.QAbstractEventDispatcher_wakeUp(this.h)
}

func (this *QAbstractEventDispatcher) Interrupt() {
	C.QAbstractEventDispatcher_interrupt(this.h)
}

func (this *QAbstractEventDispatcher) StartingUp() {
	C.QAbstractEventDispatcher_startingUp(this.h)
}

func (this *QAbstractEventDispatcher) ClosingDown() {
	C.QAbstractEventDispatcher_closingDown(this.h)
}

func (this *QAbstractEventDispatcher) InstallNativeEventFilter(filterObj *QAbstractNativeEventFilter) {
	C.QAbstractEventDispatcher_installNativeEventFilter(this.h, filterObj.cPointer())
}

func (this *QAbstractEventDispatcher) RemoveNativeEventFilter(filterObj *QAbstractNativeEventFilter) {
	C.QAbstractEventDispatcher_removeNativeEventFilter(this.h, filterObj.cPointer())
}

func (this *QAbstractEventDispatcher) FilterNativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))
	return (bool)(C.QAbstractEventDispatcher_filterNativeEvent(this.h, eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))
}

func (this *QAbstractEventDispatcher) AboutToBlock() {
	C.QAbstractEventDispatcher_aboutToBlock(this.h)
}
func (this *QAbstractEventDispatcher) OnAboutToBlock(slot func()) {
	C.QAbstractEventDispatcher_connect_aboutToBlock(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_aboutToBlock
func miqt_exec_callback_QAbstractEventDispatcher_aboutToBlock(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractEventDispatcher) Awake() {
	C.QAbstractEventDispatcher_awake(this.h)
}
func (this *QAbstractEventDispatcher) OnAwake(slot func()) {
	C.QAbstractEventDispatcher_connect_awake(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractEventDispatcher_awake
func miqt_exec_callback_QAbstractEventDispatcher_awake(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QAbstractEventDispatcher_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcher_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcher_InstanceWithThread(thread *QThread) *QAbstractEventDispatcher {
	return newQAbstractEventDispatcher(C.QAbstractEventDispatcher_instanceWithThread(thread.cPointer()))
}

// Delete this object from C++ memory.
func (this *QAbstractEventDispatcher) Delete() {
	C.QAbstractEventDispatcher_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractEventDispatcher) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractEventDispatcher) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAbstractEventDispatcherV2 struct {
	h *C.QAbstractEventDispatcherV2
	*QAbstractEventDispatcher
}

func (this *QAbstractEventDispatcherV2) cPointer() *C.QAbstractEventDispatcherV2 {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractEventDispatcherV2) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractEventDispatcherV2 constructs the type using only CGO pointers.
func newQAbstractEventDispatcherV2(h *C.QAbstractEventDispatcherV2) *QAbstractEventDispatcherV2 {
	if h == nil {
		return nil
	}
	var outptr_QAbstractEventDispatcher *C.QAbstractEventDispatcher = nil
	C.QAbstractEventDispatcherV2_virtbase(h, &outptr_QAbstractEventDispatcher)

	return &QAbstractEventDispatcherV2{h: h,
		QAbstractEventDispatcher: newQAbstractEventDispatcher(outptr_QAbstractEventDispatcher)}
}

// UnsafeNewQAbstractEventDispatcherV2 constructs the type using only unsafe pointers.
func UnsafeNewQAbstractEventDispatcherV2(h unsafe.Pointer) *QAbstractEventDispatcherV2 {
	return newQAbstractEventDispatcherV2((*C.QAbstractEventDispatcherV2)(h))
}

// NewQAbstractEventDispatcherV2 constructs a new QAbstractEventDispatcherV2 object.
func NewQAbstractEventDispatcherV2() *QAbstractEventDispatcherV2 {

	return newQAbstractEventDispatcherV2(C.QAbstractEventDispatcherV2_new())
}

// NewQAbstractEventDispatcherV22 constructs a new QAbstractEventDispatcherV2 object.
func NewQAbstractEventDispatcherV22(parent *QObject) *QAbstractEventDispatcherV2 {

	return newQAbstractEventDispatcherV2(C.QAbstractEventDispatcherV2_new2(parent.cPointer()))
}

func (this *QAbstractEventDispatcherV2) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAbstractEventDispatcherV2_metaObject(this.h))
}

func (this *QAbstractEventDispatcherV2) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractEventDispatcherV2_metacast(this.h, param1_Cstring))
}

func QAbstractEventDispatcherV2_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcherV2_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractEventDispatcherV2) RegisterTimer(timerId TimerId, interval Duration, timerType TimerType, object *QObject) {
	C.QAbstractEventDispatcherV2_registerTimer(this.h, (C.int)(timerId), interval, (C.int)(timerType), object.cPointer())
}

func (this *QAbstractEventDispatcherV2) UnregisterTimer(timerId TimerId) bool {
	return (bool)(C.QAbstractEventDispatcherV2_unregisterTimer(this.h, (C.int)(timerId)))
}

func (this *QAbstractEventDispatcherV2) TimersForObject(object *QObject) []TimerInfoV2 {
	var _ma C.struct_miqt_array = C.QAbstractEventDispatcherV2_timersForObject(this.h, object.cPointer())
	_ret := make([]TimerInfoV2, int(_ma.len))
	_outCast := (*[0xffff]C.TimerInfoV2)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		int /* TODO  */
	}
	return _ret
}

func (this *QAbstractEventDispatcherV2) RemainingTime(timerId TimerId) Duration {
	int /* TODO  */
}

func (this *QAbstractEventDispatcherV2) ProcessEventsWithDeadline(flags ProcessEventsFlag, deadline QDeadlineTimer) bool {
	return (bool)(C.QAbstractEventDispatcherV2_processEventsWithDeadline(this.h, (C.int)(flags), deadline.cPointer()))
}

func QAbstractEventDispatcherV2_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcherV2_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractEventDispatcherV2_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractEventDispatcherV2_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAbstractEventDispatcherV2) Delete() {
	C.QAbstractEventDispatcherV2_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractEventDispatcherV2) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractEventDispatcherV2) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAbstractEventDispatcher__TimerInfo struct {
	h *C.QAbstractEventDispatcher__TimerInfo
}

func (this *QAbstractEventDispatcher__TimerInfo) cPointer() *C.QAbstractEventDispatcher__TimerInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractEventDispatcher__TimerInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractEventDispatcher__TimerInfo constructs the type using only CGO pointers.
func newQAbstractEventDispatcher__TimerInfo(h *C.QAbstractEventDispatcher__TimerInfo) *QAbstractEventDispatcher__TimerInfo {
	if h == nil {
		return nil
	}

	return &QAbstractEventDispatcher__TimerInfo{h: h}
}

// UnsafeNewQAbstractEventDispatcher__TimerInfo constructs the type using only unsafe pointers.
func UnsafeNewQAbstractEventDispatcher__TimerInfo(h unsafe.Pointer) *QAbstractEventDispatcher__TimerInfo {
	return newQAbstractEventDispatcher__TimerInfo((*C.QAbstractEventDispatcher__TimerInfo)(h))
}

// NewQAbstractEventDispatcher__TimerInfo constructs a new QAbstractEventDispatcher::TimerInfo object.
func NewQAbstractEventDispatcher__TimerInfo() *QAbstractEventDispatcher__TimerInfo {

	return newQAbstractEventDispatcher__TimerInfo(C.QAbstractEventDispatcher__TimerInfo_new())
}

// NewQAbstractEventDispatcher__TimerInfo2 constructs a new QAbstractEventDispatcher::TimerInfo object.
func NewQAbstractEventDispatcher__TimerInfo2(id int, i int, t TimerType) *QAbstractEventDispatcher__TimerInfo {

	return newQAbstractEventDispatcher__TimerInfo(C.QAbstractEventDispatcher__TimerInfo_new2((C.int)(id), (C.int)(i), (C.int)(t)))
}

// NewQAbstractEventDispatcher__TimerInfo3 constructs a new QAbstractEventDispatcher::TimerInfo object.
func NewQAbstractEventDispatcher__TimerInfo3(param1 *TimerInfo) *QAbstractEventDispatcher__TimerInfo {

	return newQAbstractEventDispatcher__TimerInfo(C.QAbstractEventDispatcher__TimerInfo_new3(param1))
}

func (this *QAbstractEventDispatcher__TimerInfo) TimerId() int {
	return (int)(C.QAbstractEventDispatcher__TimerInfo_timerId(this.h))
}

func (this *QAbstractEventDispatcher__TimerInfo) SetTimerId(timerId int) {
	C.QAbstractEventDispatcher__TimerInfo_setTimerId(this.h, (C.int)(timerId))
}

func (this *QAbstractEventDispatcher__TimerInfo) Interval() int {
	return (int)(C.QAbstractEventDispatcher__TimerInfo_interval(this.h))
}

func (this *QAbstractEventDispatcher__TimerInfo) SetInterval(interval int) {
	C.QAbstractEventDispatcher__TimerInfo_setInterval(this.h, (C.int)(interval))
}

func (this *QAbstractEventDispatcher__TimerInfo) TimerType() TimerType {
	return (TimerType)(C.QAbstractEventDispatcher__TimerInfo_timerType(this.h))
}

func (this *QAbstractEventDispatcher__TimerInfo) SetTimerType(timerType TimerType) {
	C.QAbstractEventDispatcher__TimerInfo_setTimerType(this.h, (C.int)(timerType))
}

// Delete this object from C++ memory.
func (this *QAbstractEventDispatcher__TimerInfo) Delete() {
	C.QAbstractEventDispatcher__TimerInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractEventDispatcher__TimerInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractEventDispatcher__TimerInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAbstractEventDispatcher__TimerInfoV2 struct {
	h *C.QAbstractEventDispatcher__TimerInfoV2
}

func (this *QAbstractEventDispatcher__TimerInfoV2) cPointer() *C.QAbstractEventDispatcher__TimerInfoV2 {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractEventDispatcher__TimerInfoV2) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractEventDispatcher__TimerInfoV2 constructs the type using only CGO pointers.
func newQAbstractEventDispatcher__TimerInfoV2(h *C.QAbstractEventDispatcher__TimerInfoV2) *QAbstractEventDispatcher__TimerInfoV2 {
	if h == nil {
		return nil
	}

	return &QAbstractEventDispatcher__TimerInfoV2{h: h}
}

// UnsafeNewQAbstractEventDispatcher__TimerInfoV2 constructs the type using only unsafe pointers.
func UnsafeNewQAbstractEventDispatcher__TimerInfoV2(h unsafe.Pointer) *QAbstractEventDispatcher__TimerInfoV2 {
	return newQAbstractEventDispatcher__TimerInfoV2((*C.QAbstractEventDispatcher__TimerInfoV2)(h))
}

// NewQAbstractEventDispatcher__TimerInfoV2 constructs a new QAbstractEventDispatcher::TimerInfoV2 object.
func NewQAbstractEventDispatcher__TimerInfoV2(param1 *TimerInfoV2) *QAbstractEventDispatcher__TimerInfoV2 {

	return newQAbstractEventDispatcher__TimerInfoV2(C.QAbstractEventDispatcher__TimerInfoV2_new(param1))
}

// NewQAbstractEventDispatcher__TimerInfoV22 constructs a new QAbstractEventDispatcher::TimerInfoV2 object.
func NewQAbstractEventDispatcher__TimerInfoV22() *QAbstractEventDispatcher__TimerInfoV2 {

	return newQAbstractEventDispatcher__TimerInfoV2(C.QAbstractEventDispatcher__TimerInfoV2_new2())
}

func (this *QAbstractEventDispatcher__TimerInfoV2) Interval() Duration {
	int /* TODO  */
}

func (this *QAbstractEventDispatcher__TimerInfoV2) SetInterval(interval Duration) {
	C.QAbstractEventDispatcher__TimerInfoV2_setInterval(this.h, interval)
}

func (this *QAbstractEventDispatcher__TimerInfoV2) TimerId() TimerId {
	return (TimerId)(C.QAbstractEventDispatcher__TimerInfoV2_timerId(this.h))
}

func (this *QAbstractEventDispatcher__TimerInfoV2) SetTimerId(timerId TimerId) {
	C.QAbstractEventDispatcher__TimerInfoV2_setTimerId(this.h, (C.int)(timerId))
}

func (this *QAbstractEventDispatcher__TimerInfoV2) TimerType() TimerType {
	return (TimerType)(C.QAbstractEventDispatcher__TimerInfoV2_timerType(this.h))
}

func (this *QAbstractEventDispatcher__TimerInfoV2) SetTimerType(timerType TimerType) {
	C.QAbstractEventDispatcher__TimerInfoV2_setTimerType(this.h, (C.int)(timerType))
}

func (this *QAbstractEventDispatcher__TimerInfoV2) OperatorAssign(param1 *TimerInfoV2) {
	C.QAbstractEventDispatcher__TimerInfoV2_operatorAssign(this.h, param1)
}

// Delete this object from C++ memory.
func (this *QAbstractEventDispatcher__TimerInfoV2) Delete() {
	C.QAbstractEventDispatcher__TimerInfoV2_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractEventDispatcher__TimerInfoV2) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractEventDispatcher__TimerInfoV2) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

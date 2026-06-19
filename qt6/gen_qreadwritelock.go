package qt6

/*

#include "gen_qreadwritelock.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QReadWriteLock__RecursionMode int

const (
	QReadWriteLock__NonRecursive QReadWriteLock__RecursionMode = 0
	QReadWriteLock__Recursive    QReadWriteLock__RecursionMode = 1
)

type QBasicReadWriteLock struct {
	h *C.QBasicReadWriteLock
}

func (this *QBasicReadWriteLock) cPointer() *C.QBasicReadWriteLock {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBasicReadWriteLock) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBasicReadWriteLock constructs the type using only CGO pointers.
func newQBasicReadWriteLock(h *C.QBasicReadWriteLock) *QBasicReadWriteLock {
	if h == nil {
		return nil
	}

	return &QBasicReadWriteLock{h: h}
}

// UnsafeNewQBasicReadWriteLock constructs the type using only unsafe pointers.
func UnsafeNewQBasicReadWriteLock(h unsafe.Pointer) *QBasicReadWriteLock {
	return newQBasicReadWriteLock((*C.QBasicReadWriteLock)(h))
}

// NewQBasicReadWriteLock constructs a new QBasicReadWriteLock object.
func NewQBasicReadWriteLock() *QBasicReadWriteLock {

	return newQBasicReadWriteLock(C.QBasicReadWriteLock_new())
}

func (this *QBasicReadWriteLock) LockForRead() {
	C.QBasicReadWriteLock_lockForRead(this.h)
}

func (this *QBasicReadWriteLock) TryLockForRead() bool {
	return (bool)(C.QBasicReadWriteLock_tryLockForRead(this.h))
}

func (this *QBasicReadWriteLock) TryLockForReadWithTimeout(timeout QDeadlineTimer) bool {
	return (bool)(C.QBasicReadWriteLock_tryLockForReadWithTimeout(this.h, timeout.cPointer()))
}

func (this *QBasicReadWriteLock) LockForWrite() {
	C.QBasicReadWriteLock_lockForWrite(this.h)
}

func (this *QBasicReadWriteLock) TryLockForWrite() bool {
	return (bool)(C.QBasicReadWriteLock_tryLockForWrite(this.h))
}

func (this *QBasicReadWriteLock) TryLockForWriteWithTimeout(timeout QDeadlineTimer) bool {
	return (bool)(C.QBasicReadWriteLock_tryLockForWriteWithTimeout(this.h, timeout.cPointer()))
}

func (this *QBasicReadWriteLock) Unlock() {
	C.QBasicReadWriteLock_unlock(this.h)
}

func (this *QBasicReadWriteLock) Lock() {
	C.QBasicReadWriteLock_lock(this.h)
}

func (this *QBasicReadWriteLock) LockShared() {
	C.QBasicReadWriteLock_lockShared(this.h)
}

func (this *QBasicReadWriteLock) TryLock() bool {
	return (bool)(C.QBasicReadWriteLock_tryLock(this.h))
}

func (this *QBasicReadWriteLock) TryLockShared() bool {
	return (bool)(C.QBasicReadWriteLock_tryLockShared(this.h))
}

func (this *QBasicReadWriteLock) UnlockShared() {
	C.QBasicReadWriteLock_unlockShared(this.h)
}

// Delete this object from C++ memory.
func (this *QBasicReadWriteLock) Delete() {
	C.QBasicReadWriteLock_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBasicReadWriteLock) GoGC() {
	runtime.SetFinalizer(this, func(this *QBasicReadWriteLock) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QReadWriteLock struct {
	h *C.QReadWriteLock
	*QBasicReadWriteLock
}

func (this *QReadWriteLock) cPointer() *C.QReadWriteLock {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QReadWriteLock) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQReadWriteLock constructs the type using only CGO pointers.
func newQReadWriteLock(h *C.QReadWriteLock) *QReadWriteLock {
	if h == nil {
		return nil
	}
	var outptr_QBasicReadWriteLock *C.QBasicReadWriteLock = nil
	C.QReadWriteLock_virtbase(h, &outptr_QBasicReadWriteLock)

	return &QReadWriteLock{h: h,
		QBasicReadWriteLock: newQBasicReadWriteLock(outptr_QBasicReadWriteLock)}
}

// UnsafeNewQReadWriteLock constructs the type using only unsafe pointers.
func UnsafeNewQReadWriteLock(h unsafe.Pointer) *QReadWriteLock {
	return newQReadWriteLock((*C.QReadWriteLock)(h))
}

// NewQReadWriteLock constructs a new QReadWriteLock object.
func NewQReadWriteLock() *QReadWriteLock {

	return newQReadWriteLock(C.QReadWriteLock_new())
}

// NewQReadWriteLock2 constructs a new QReadWriteLock object.
func NewQReadWriteLock2(recursionMode RecursionMode) *QReadWriteLock {

	return newQReadWriteLock(C.QReadWriteLock_new2(recursionMode))
}

func (this *QReadWriteLock) TryLockForRead(timeout int) bool {
	return (bool)(C.QReadWriteLock_tryLockForRead(this.h, (C.int)(timeout)))
}

func (this *QReadWriteLock) TryLockForWrite(timeout int) bool {
	return (bool)(C.QReadWriteLock_tryLockForWrite(this.h, (C.int)(timeout)))
}

// Delete this object from C++ memory.
func (this *QReadWriteLock) Delete() {
	C.QReadWriteLock_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QReadWriteLock) GoGC() {
	runtime.SetFinalizer(this, func(this *QReadWriteLock) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QReadLocker struct {
	h *C.QReadLocker
}

func (this *QReadLocker) cPointer() *C.QReadLocker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QReadLocker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQReadLocker constructs the type using only CGO pointers.
func newQReadLocker(h *C.QReadLocker) *QReadLocker {
	if h == nil {
		return nil
	}

	return &QReadLocker{h: h}
}

// UnsafeNewQReadLocker constructs the type using only unsafe pointers.
func UnsafeNewQReadLocker(h unsafe.Pointer) *QReadLocker {
	return newQReadLocker((*C.QReadLocker)(h))
}

// NewQReadLocker constructs a new QReadLocker object.
func NewQReadLocker(readWriteLock *QReadWriteLock) *QReadLocker {

	return newQReadLocker(C.QReadLocker_new(readWriteLock.cPointer()))
}

func (this *QReadLocker) Unlock() {
	C.QReadLocker_unlock(this.h)
}

func (this *QReadLocker) Relock() {
	C.QReadLocker_relock(this.h)
}

func (this *QReadLocker) ReadWriteLock() *QReadWriteLock {
	return newQReadWriteLock(C.QReadLocker_readWriteLock(this.h))
}

// Delete this object from C++ memory.
func (this *QReadLocker) Delete() {
	C.QReadLocker_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QReadLocker) GoGC() {
	runtime.SetFinalizer(this, func(this *QReadLocker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWriteLocker struct {
	h *C.QWriteLocker
}

func (this *QWriteLocker) cPointer() *C.QWriteLocker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWriteLocker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWriteLocker constructs the type using only CGO pointers.
func newQWriteLocker(h *C.QWriteLocker) *QWriteLocker {
	if h == nil {
		return nil
	}

	return &QWriteLocker{h: h}
}

// UnsafeNewQWriteLocker constructs the type using only unsafe pointers.
func UnsafeNewQWriteLocker(h unsafe.Pointer) *QWriteLocker {
	return newQWriteLocker((*C.QWriteLocker)(h))
}

// NewQWriteLocker constructs a new QWriteLocker object.
func NewQWriteLocker(readWriteLock *QReadWriteLock) *QWriteLocker {

	return newQWriteLocker(C.QWriteLocker_new(readWriteLock.cPointer()))
}

func (this *QWriteLocker) Unlock() {
	C.QWriteLocker_unlock(this.h)
}

func (this *QWriteLocker) Relock() {
	C.QWriteLocker_relock(this.h)
}

func (this *QWriteLocker) ReadWriteLock() *QReadWriteLock {
	return newQReadWriteLock(C.QWriteLocker_readWriteLock(this.h))
}

// Delete this object from C++ memory.
func (this *QWriteLocker) Delete() {
	C.QWriteLocker_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWriteLocker) GoGC() {
	runtime.SetFinalizer(this, func(this *QWriteLocker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package multimedia

/*

#include "gen_qplaybackoptions.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPlaybackOptions__PlaybackIntent int

const (
	QPlaybackOptions__Playback            QPlaybackOptions__PlaybackIntent = 0
	QPlaybackOptions__LowLatencyStreaming QPlaybackOptions__PlaybackIntent = 1
)

type QPlaybackOptions struct {
	h *C.QPlaybackOptions
}

func (this *QPlaybackOptions) cPointer() *C.QPlaybackOptions {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPlaybackOptions) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPlaybackOptions constructs the type using only CGO pointers.
func newQPlaybackOptions(h *C.QPlaybackOptions) *QPlaybackOptions {
	if h == nil {
		return nil
	}

	return &QPlaybackOptions{h: h}
}

// UnsafeNewQPlaybackOptions constructs the type using only unsafe pointers.
func UnsafeNewQPlaybackOptions(h unsafe.Pointer) *QPlaybackOptions {
	return newQPlaybackOptions((*C.QPlaybackOptions)(h))
}

// NewQPlaybackOptions constructs a new QPlaybackOptions object.
func NewQPlaybackOptions() *QPlaybackOptions {

	return newQPlaybackOptions(C.QPlaybackOptions_new())
}

// NewQPlaybackOptions2 constructs a new QPlaybackOptions object.
func NewQPlaybackOptions2(param1 *QPlaybackOptions) *QPlaybackOptions {

	return newQPlaybackOptions(C.QPlaybackOptions_new2(param1.cPointer()))
}

func (this *QPlaybackOptions) OperatorAssign(param1 *QPlaybackOptions) {
	C.QPlaybackOptions_operatorAssign(this.h, param1.cPointer())
}

func (this *QPlaybackOptions) Swap(other *QPlaybackOptions) {
	C.QPlaybackOptions_swap(this.h, other.cPointer())
}

func (this *QPlaybackOptions) ResetNetworkTimeout() {
	C.QPlaybackOptions_resetNetworkTimeout(this.h)
}

func (this *QPlaybackOptions) PlaybackIntent() PlaybackIntent {
	int /* TODO  */
}

func (this *QPlaybackOptions) SetPlaybackIntent(intent PlaybackIntent) {
	C.QPlaybackOptions_setPlaybackIntent(this.h, intent)
}

func (this *QPlaybackOptions) ResetPlaybackIntent() {
	C.QPlaybackOptions_resetPlaybackIntent(this.h)
}

func (this *QPlaybackOptions) ProbeSize() int64 {
	return (int64)(C.QPlaybackOptions_probeSize(this.h))
}

func (this *QPlaybackOptions) SetProbeSize(probeSizeBytes int64) {
	C.QPlaybackOptions_setProbeSize(this.h, (C.ptrdiff_t)(probeSizeBytes))
}

func (this *QPlaybackOptions) ResetProbeSize() {
	C.QPlaybackOptions_resetProbeSize(this.h)
}

// Delete this object from C++ memory.
func (this *QPlaybackOptions) Delete() {
	C.QPlaybackOptions_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPlaybackOptions) GoGC() {
	runtime.SetFinalizer(this, func(this *QPlaybackOptions) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

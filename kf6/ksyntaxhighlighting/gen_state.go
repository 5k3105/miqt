package ksyntaxhighlighting

/*

#include "gen_state.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type KSyntaxHighlighting__State struct {
	h *C.KSyntaxHighlighting__State
}

func (this *KSyntaxHighlighting__State) cPointer() *C.KSyntaxHighlighting__State {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *KSyntaxHighlighting__State) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKSyntaxHighlighting__State constructs the type using only CGO pointers.
func newKSyntaxHighlighting__State(h *C.KSyntaxHighlighting__State) *KSyntaxHighlighting__State {
	if h == nil {
		return nil
	}

	return &KSyntaxHighlighting__State{h: h}
}

// UnsafeNewKSyntaxHighlighting__State constructs the type using only unsafe pointers.
func UnsafeNewKSyntaxHighlighting__State(h unsafe.Pointer) *KSyntaxHighlighting__State {
	return newKSyntaxHighlighting__State((*C.KSyntaxHighlighting__State)(h))
}

// NewKSyntaxHighlighting__State constructs a new KSyntaxHighlighting::State object.
func NewKSyntaxHighlighting__State() *KSyntaxHighlighting__State {

	return newKSyntaxHighlighting__State(C.KSyntaxHighlighting__State_new())
}

// NewKSyntaxHighlighting__State2 constructs a new KSyntaxHighlighting::State object.
func NewKSyntaxHighlighting__State2(other *State) *KSyntaxHighlighting__State {

	return newKSyntaxHighlighting__State(C.KSyntaxHighlighting__State_new2(other))
}

func (this *KSyntaxHighlighting__State) OperatorAssign(rhs *State) {
	C.KSyntaxHighlighting__State_operatorAssign(this.h, rhs)
}

func (this *KSyntaxHighlighting__State) OperatorEqual(other *State) bool {
	return (bool)(C.KSyntaxHighlighting__State_operatorEqual(this.h, other))
}

func (this *KSyntaxHighlighting__State) OperatorNotEqual(other *State) bool {
	return (bool)(C.KSyntaxHighlighting__State_operatorNotEqual(this.h, other))
}

func (this *KSyntaxHighlighting__State) IndentationBasedFoldingEnabled() bool {
	return (bool)(C.KSyntaxHighlighting__State_indentationBasedFoldingEnabled(this.h))
}

// Delete this object from C++ memory.
func (this *KSyntaxHighlighting__State) Delete() {
	C.KSyntaxHighlighting__State_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *KSyntaxHighlighting__State) GoGC() {
	runtime.SetFinalizer(this, func(this *KSyntaxHighlighting__State) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

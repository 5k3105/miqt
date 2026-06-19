package multimedia

/*

#include "gen_qabstractvideobuffer.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

		type QAbstractVideoBuffer struct {
			h *C.QAbstractVideoBuffer
		
		}
		
		func (this *QAbstractVideoBuffer) cPointer() *C.QAbstractVideoBuffer {
			if this == nil {
				return nil
			}
			return this.h
		}
		
		func (this *QAbstractVideoBuffer) UnsafePointer() unsafe.Pointer {
			if this == nil {
				return nil
			}
			return unsafe.Pointer(this.h)
		}
		
		
			// newQAbstractVideoBuffer constructs the type using only CGO pointers.
			func newQAbstractVideoBuffer(h *C.QAbstractVideoBuffer) *QAbstractVideoBuffer {
				if h == nil {
					return nil
				}
		
				return &QAbstractVideoBuffer{h: h}
			}

			// UnsafeNewQAbstractVideoBuffer constructs the type using only unsafe pointers.
			func UnsafeNewQAbstractVideoBuffer(h unsafe.Pointer) *QAbstractVideoBuffer {
				return newQAbstractVideoBuffer( (*C.QAbstractVideoBuffer)(h) )
			}

		
			func (this *QAbstractVideoBuffer) Map(mode QVideoFrame__MapMode) MapData {
				int /* TODO  */}
			
			func (this *QAbstractVideoBuffer) Unmap()  {
				 C.QAbstractVideoBuffer_unmap(this.h)
}
			
			func (this *QAbstractVideoBuffer) Format() *QVideoFrameFormat {
				_goptr := newQVideoFrameFormat(C.QAbstractVideoBuffer_format(this.h))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			// Delete this object from C++ memory.
			func (this *QAbstractVideoBuffer) Delete() {
				C.QAbstractVideoBuffer_delete(this.h)
			}

			// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
			// from C++ memory once it is unreachable from Go memory.
			func (this *QAbstractVideoBuffer) GoGC() {
				runtime.SetFinalizer(this, func(this *QAbstractVideoBuffer) {
					this.Delete()
					runtime.KeepAlive(this.h)
				})
			}
			
		type QAbstractVideoBuffer__MapData struct {
			h *C.QAbstractVideoBuffer__MapData
		
		}
		
		func (this *QAbstractVideoBuffer__MapData) cPointer() *C.QAbstractVideoBuffer__MapData {
			if this == nil {
				return nil
			}
			return this.h
		}
		
		func (this *QAbstractVideoBuffer__MapData) UnsafePointer() unsafe.Pointer {
			if this == nil {
				return nil
			}
			return unsafe.Pointer(this.h)
		}
		
		
			// newQAbstractVideoBuffer__MapData constructs the type using only CGO pointers.
			func newQAbstractVideoBuffer__MapData(h *C.QAbstractVideoBuffer__MapData) *QAbstractVideoBuffer__MapData {
				if h == nil {
					return nil
				}
		
				return &QAbstractVideoBuffer__MapData{h: h}
			}

			// UnsafeNewQAbstractVideoBuffer__MapData constructs the type using only unsafe pointers.
			func UnsafeNewQAbstractVideoBuffer__MapData(h unsafe.Pointer) *QAbstractVideoBuffer__MapData {
				return newQAbstractVideoBuffer__MapData( (*C.QAbstractVideoBuffer__MapData)(h) )
			}

		
			func (this *QAbstractVideoBuffer__MapData) PlaneCount() int {
				return (int)(C.QAbstractVideoBuffer__MapData_planeCount(this.h))
}
			
			func (this *QAbstractVideoBuffer__MapData) SetPlaneCount(planeCount int)  {
				 C.QAbstractVideoBuffer__MapData_setPlaneCount(this.h, (C.int)(planeCount))
}
			
			func (this *QAbstractVideoBuffer__MapData) BytesPerLine() int[4] {
				int /* TODO  */}
			
			func (this *QAbstractVideoBuffer__MapData) SetBytesPerLine(bytesPerLine int[4])  {
				 C.QAbstractVideoBuffer__MapData_setBytesPerLine(this.h, bytesPerLine)
}
			
			func (this *QAbstractVideoBuffer__MapData) Data() *uchar [4] {
				int /* TODO  */}
			
			func (this *QAbstractVideoBuffer__MapData) SetData(data *uchar [4])  {
				 C.QAbstractVideoBuffer__MapData_setData(this.h, data)
}
			
			func (this *QAbstractVideoBuffer__MapData) DataSize() int[4] {
				int /* TODO  */}
			
			func (this *QAbstractVideoBuffer__MapData) SetDataSize(dataSize int[4])  {
				 C.QAbstractVideoBuffer__MapData_setDataSize(this.h, dataSize)
}
			
			// Delete this object from C++ memory.
			func (this *QAbstractVideoBuffer__MapData) Delete() {
				C.QAbstractVideoBuffer__MapData_delete(this.h)
			}

			// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
			// from C++ memory once it is unreachable from Go memory.
			func (this *QAbstractVideoBuffer__MapData) GoGC() {
				runtime.SetFinalizer(this, func(this *QAbstractVideoBuffer__MapData) {
					this.Delete()
					runtime.KeepAlive(this.h)
				})
			}
			
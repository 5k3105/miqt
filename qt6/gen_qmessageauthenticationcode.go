package qt6

/*

#include "gen_qmessageauthenticationcode.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

		type QMessageAuthenticationCode struct {
			h *C.QMessageAuthenticationCode
		
		}
		
		func (this *QMessageAuthenticationCode) cPointer() *C.QMessageAuthenticationCode {
			if this == nil {
				return nil
			}
			return this.h
		}
		
		func (this *QMessageAuthenticationCode) UnsafePointer() unsafe.Pointer {
			if this == nil {
				return nil
			}
			return unsafe.Pointer(this.h)
		}
		
		
			// newQMessageAuthenticationCode constructs the type using only CGO pointers.
			func newQMessageAuthenticationCode(h *C.QMessageAuthenticationCode) *QMessageAuthenticationCode {
				if h == nil {
					return nil
				}
		
				return &QMessageAuthenticationCode{h: h}
			}

			// UnsafeNewQMessageAuthenticationCode constructs the type using only unsafe pointers.
			func UnsafeNewQMessageAuthenticationCode(h unsafe.Pointer) *QMessageAuthenticationCode {
				return newQMessageAuthenticationCode( (*C.QMessageAuthenticationCode)(h) )
			}

		
			// NewQMessageAuthenticationCode constructs a new QMessageAuthenticationCode object.
			func NewQMessageAuthenticationCode(method QCryptographicHash__Algorithm) *QMessageAuthenticationCode {
				
				return newQMessageAuthenticationCode(C.QMessageAuthenticationCode_new((C.int)(method)))
			}

			
			// NewQMessageAuthenticationCode2 constructs a new QMessageAuthenticationCode object.
			func NewQMessageAuthenticationCode2(method QCryptographicHash__Algorithm, key QByteArrayView) *QMessageAuthenticationCode {
				
				return newQMessageAuthenticationCode(C.QMessageAuthenticationCode_new2((C.int)(method), key.cPointer()))
			}

			
			func (this *QMessageAuthenticationCode) Swap(other *QMessageAuthenticationCode)  {
				 C.QMessageAuthenticationCode_swap(this.h, other.cPointer())
}
			
			func (this *QMessageAuthenticationCode) Reset()  {
				 C.QMessageAuthenticationCode_reset(this.h)
}
			
			func (this *QMessageAuthenticationCode) SetKey(key QByteArrayView)  {
				 C.QMessageAuthenticationCode_setKey(this.h, key.cPointer())
}
			
			func (this *QMessageAuthenticationCode) AddData(data string, length int64)  {
				data_Cstring := C.CString(data)
defer C.free(unsafe.Pointer(data_Cstring))
 C.QMessageAuthenticationCode_addData(this.h, data_Cstring, (C.ptrdiff_t)(length))
}
			
			func (this *QMessageAuthenticationCode) AddDataWithData(data QByteArrayView)  {
				 C.QMessageAuthenticationCode_addDataWithData(this.h, data.cPointer())
}
			
			func (this *QMessageAuthenticationCode) AddDataWithDevice(device *QIODevice) bool {
				return (bool)(C.QMessageAuthenticationCode_addDataWithDevice(this.h, device.cPointer()))
}
			
			func (this *QMessageAuthenticationCode) ResultView() *QByteArrayView {
				_goptr := newQByteArrayView(C.QMessageAuthenticationCode_resultView(this.h))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QMessageAuthenticationCode) Result() []byte {
				var _bytearray C.struct_miqt_string =  C.QMessageAuthenticationCode_result(this.h)
_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
C.free(unsafe.Pointer(_bytearray.data))
return _ret}
			
			func QMessageAuthenticationCode_Hash(message QByteArrayView, key QByteArrayView, method QCryptographicHash__Algorithm) []byte {
				var _bytearray C.struct_miqt_string =  C.QMessageAuthenticationCode_hash(message.cPointer(), key.cPointer(), (C.int)(method))
_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
C.free(unsafe.Pointer(_bytearray.data))
return _ret}
			
			func QMessageAuthenticationCode_HashInto(buffer QSpan<char>, message QByteArrayView, key QByteArrayView, method QCryptographicHash__Algorithm) *QByteArrayView {
				_goptr := newQByteArrayView(C.QMessageAuthenticationCode_hashInto(buffer, message.cPointer(), key.cPointer(), (C.int)(method)))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func QMessageAuthenticationCode_HashInto2(buffer QSpan<uchar>, message QByteArrayView, key QByteArrayView, method QCryptographicHash__Algorithm) *QByteArrayView {
				_goptr := newQByteArrayView(C.QMessageAuthenticationCode_hashInto2(buffer, message.cPointer(), key.cPointer(), (C.int)(method)))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func QMessageAuthenticationCode_HashInto3(buffer QSpan<std__byte>, message QByteArrayView, key QByteArrayView, method QCryptographicHash__Algorithm) *QByteArrayView {
				_goptr := newQByteArrayView(C.QMessageAuthenticationCode_hashInto3(buffer, message.cPointer(), key.cPointer(), (C.int)(method)))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func QMessageAuthenticationCode_HashInto4(buffer QSpan<char>, messageParts QSpan<const QByteArrayView>, key QByteArrayView, method QCryptographicHash__Algorithm) *QByteArrayView {
				_goptr := newQByteArrayView(C.QMessageAuthenticationCode_hashInto4(buffer, messageParts, key.cPointer(), (C.int)(method)))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func QMessageAuthenticationCode_HashInto5(buffer QSpan<uchar>, messageParts QSpan<const QByteArrayView>, key QByteArrayView, method QCryptographicHash__Algorithm) *QByteArrayView {
				_goptr := newQByteArrayView(C.QMessageAuthenticationCode_hashInto5(buffer, messageParts, key.cPointer(), (C.int)(method)))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func QMessageAuthenticationCode_HashInto6(buffer QSpan<std__byte>, message QSpan<const QByteArrayView>, key QByteArrayView, method QCryptographicHash__Algorithm) *QByteArrayView {
				_goptr := newQByteArrayView(C.QMessageAuthenticationCode_hashInto6(buffer, message, key.cPointer(), (C.int)(method)))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			// Delete this object from C++ memory.
			func (this *QMessageAuthenticationCode) Delete() {
				C.QMessageAuthenticationCode_delete(this.h)
			}

			// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
			// from C++ memory once it is unreachable from Go memory.
			func (this *QMessageAuthenticationCode) GoGC() {
				runtime.SetFinalizer(this, func(this *QMessageAuthenticationCode) {
					this.Delete()
					runtime.KeepAlive(this.h)
				})
			}
			
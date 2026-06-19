package qt6

/*

#include "gen_qquaternion.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

		type QQuaternion struct {
			h *C.QQuaternion
		
		}
		
		func (this *QQuaternion) cPointer() *C.QQuaternion {
			if this == nil {
				return nil
			}
			return this.h
		}
		
		func (this *QQuaternion) UnsafePointer() unsafe.Pointer {
			if this == nil {
				return nil
			}
			return unsafe.Pointer(this.h)
		}
		
		
			// newQQuaternion constructs the type using only CGO pointers.
			func newQQuaternion(h *C.QQuaternion) *QQuaternion {
				if h == nil {
					return nil
				}
		
				return &QQuaternion{h: h}
			}

			// UnsafeNewQQuaternion constructs the type using only unsafe pointers.
			func UnsafeNewQQuaternion(h unsafe.Pointer) *QQuaternion {
				return newQQuaternion( (*C.QQuaternion)(h) )
			}

		
			// NewQQuaternion constructs a new QQuaternion object.
			func NewQQuaternion() *QQuaternion {
				
				return newQQuaternion(C.QQuaternion_new())
			}

			
			// NewQQuaternion2 constructs a new QQuaternion object.
			func NewQQuaternion2(param1 Initialization) *QQuaternion {
				
				return newQQuaternion(C.QQuaternion_new2((C.int)(param1)))
			}

			
			// NewQQuaternion3 constructs a new QQuaternion object.
			func NewQQuaternion3(scalar float32, xpos float32, ypos float32, zpos float32) *QQuaternion {
				
				return newQQuaternion(C.QQuaternion_new3((C.float)(scalar), (C.float)(xpos), (C.float)(ypos), (C.float)(zpos)))
			}

			
			// NewQQuaternion4 constructs a new QQuaternion object.
			func NewQQuaternion4(scalar float32, vector *QVector3D) *QQuaternion {
				
				return newQQuaternion(C.QQuaternion_new4((C.float)(scalar), vector.cPointer()))
			}

			
			// NewQQuaternion5 constructs a new QQuaternion object.
			func NewQQuaternion5(vector *QVector4D) *QQuaternion {
				
				return newQQuaternion(C.QQuaternion_new5(vector.cPointer()))
			}

			
			// NewQQuaternion6 constructs a new QQuaternion object.
			func NewQQuaternion6(param1 *QQuaternion) *QQuaternion {
				
				return newQQuaternion(C.QQuaternion_new6(param1.cPointer()))
			}

			
			func (this *QQuaternion) IsNull() bool {
				return (bool)(C.QQuaternion_isNull(this.h))
}
			
			func (this *QQuaternion) IsIdentity() bool {
				return (bool)(C.QQuaternion_isIdentity(this.h))
}
			
			func (this *QQuaternion) Vector() *QVector3D {
				_goptr := newQVector3D(C.QQuaternion_vector(this.h))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QQuaternion) SetVector(vector *QVector3D)  {
				 C.QQuaternion_setVector(this.h, vector.cPointer())
}
			
			func (this *QQuaternion) SetVector2(x float32, y float32, z float32)  {
				 C.QQuaternion_setVector2(this.h, (C.float)(x), (C.float)(y), (C.float)(z))
}
			
			func (this *QQuaternion) X() float32 {
				return (float32)(C.QQuaternion_x(this.h))
}
			
			func (this *QQuaternion) Y() float32 {
				return (float32)(C.QQuaternion_y(this.h))
}
			
			func (this *QQuaternion) Z() float32 {
				return (float32)(C.QQuaternion_z(this.h))
}
			
			func (this *QQuaternion) Scalar() float32 {
				return (float32)(C.QQuaternion_scalar(this.h))
}
			
			func (this *QQuaternion) SetX(x float32)  {
				 C.QQuaternion_setX(this.h, (C.float)(x))
}
			
			func (this *QQuaternion) SetY(y float32)  {
				 C.QQuaternion_setY(this.h, (C.float)(y))
}
			
			func (this *QQuaternion) SetZ(z float32)  {
				 C.QQuaternion_setZ(this.h, (C.float)(z))
}
			
			func (this *QQuaternion) SetScalar(scalar float32)  {
				 C.QQuaternion_setScalar(this.h, (C.float)(scalar))
}
			
			func QQuaternion_DotProduct(q1 *QQuaternion, q2 *QQuaternion) float32 {
				return (float32)(C.QQuaternion_dotProduct(q1.cPointer(), q2.cPointer()))
}
			
			func (this *QQuaternion) Length() float32 {
				return (float32)(C.QQuaternion_length(this.h))
}
			
			func (this *QQuaternion) LengthSquared() float32 {
				return (float32)(C.QQuaternion_lengthSquared(this.h))
}
			
			func (this *QQuaternion) Normalized() *QQuaternion {
				_goptr := newQQuaternion(C.QQuaternion_normalized(this.h))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QQuaternion) Normalize()  {
				 C.QQuaternion_normalize(this.h)
}
			
			func (this *QQuaternion) Inverted() *QQuaternion {
				_goptr := newQQuaternion(C.QQuaternion_inverted(this.h))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QQuaternion) Conjugated() *QQuaternion {
				_goptr := newQQuaternion(C.QQuaternion_conjugated(this.h))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QQuaternion) RotatedVector(vector *QVector3D) *QVector3D {
				_goptr := newQVector3D(C.QQuaternion_rotatedVector(this.h, vector.cPointer()))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QQuaternion) OperatorPlusAssign(quaternion *QQuaternion) *QQuaternion {
				return newQQuaternion(C.QQuaternion_operatorPlusAssign(this.h, quaternion.cPointer()))
}
			
			func (this *QQuaternion) OperatorMinusAssign(quaternion *QQuaternion) *QQuaternion {
				return newQQuaternion(C.QQuaternion_operatorMinusAssign(this.h, quaternion.cPointer()))
}
			
			func (this *QQuaternion) OperatorMultiplyAssign(factor float32) *QQuaternion {
				return newQQuaternion(C.QQuaternion_operatorMultiplyAssign(this.h, (C.float)(factor)))
}
			
			func (this *QQuaternion) OperatorMultiplyAssignWithQuaternion(quaternion *QQuaternion) *QQuaternion {
				return newQQuaternion(C.QQuaternion_operatorMultiplyAssignWithQuaternion(this.h, quaternion.cPointer()))
}
			
			func (this *QQuaternion) OperatorDivideAssign(divisor float32) *QQuaternion {
				return newQQuaternion(C.QQuaternion_operatorDivideAssign(this.h, (C.float)(divisor)))
}
			
			func (this *QQuaternion) ToVector4D() *QVector4D {
				_goptr := newQVector4D(C.QQuaternion_toVector4D(this.h))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QQuaternion) ToQVariant() *QVariant {
				_goptr := newQVariant(C.QQuaternion_ToQVariant(this.h))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QQuaternion) GetAxisAndAngle(axis *QVector3D, angle *float32)  {
				 C.QQuaternion_getAxisAndAngle(this.h, axis.cPointer(), (*C.float)(unsafe.Pointer(angle)))
}
			
			func QQuaternion_FromAxisAndAngle(axis *QVector3D, angle float32) *QQuaternion {
				_goptr := newQQuaternion(C.QQuaternion_fromAxisAndAngle(axis.cPointer(), (C.float)(angle)))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QQuaternion) GetAxisAndAngle2(x *float32, y *float32, z *float32, angle *float32)  {
				 C.QQuaternion_getAxisAndAngle2(this.h, (*C.float)(unsafe.Pointer(x)), (*C.float)(unsafe.Pointer(y)), (*C.float)(unsafe.Pointer(z)), (*C.float)(unsafe.Pointer(angle)))
}
			
			func QQuaternion_FromAxisAndAngle2(x float32, y float32, z float32, angle float32) *QQuaternion {
				_goptr := newQQuaternion(C.QQuaternion_fromAxisAndAngle2((C.float)(x), (C.float)(y), (C.float)(z), (C.float)(angle)))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QQuaternion) ToEulerAngles() *QVector3D {
				_goptr := newQVector3D(C.QQuaternion_toEulerAngles(this.h))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QQuaternion) EulerAngles() EulerAngles<float> {
				int /* TODO  */}
			
			func QQuaternion_FromEulerAngles(angles EulerAngles<float>) *QQuaternion {
				_goptr := newQQuaternion(C.QQuaternion_fromEulerAngles(angles))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QQuaternion) GetEulerAngles(pitch *float32, yaw *float32, roll *float32)  {
				 C.QQuaternion_getEulerAngles(this.h, (*C.float)(unsafe.Pointer(pitch)), (*C.float)(unsafe.Pointer(yaw)), (*C.float)(unsafe.Pointer(roll)))
}
			
			func QQuaternion_FromEulerAngles2(pitch float32, yaw float32, roll float32) *QQuaternion {
				_goptr := newQQuaternion(C.QQuaternion_fromEulerAngles2((C.float)(pitch), (C.float)(yaw), (C.float)(roll)))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QQuaternion) ToAxes() Axes {
				int /* TODO  */}
			
			func QQuaternion_FromAxes(axes Axes) *QQuaternion {
				_goptr := newQQuaternion(C.QQuaternion_fromAxes(axes))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QQuaternion) GetAxes(xAxis *QVector3D, yAxis *QVector3D, zAxis *QVector3D)  {
				 C.QQuaternion_getAxes(this.h, xAxis.cPointer(), yAxis.cPointer(), zAxis.cPointer())
}
			
			func QQuaternion_FromAxes2(xAxis *QVector3D, yAxis *QVector3D, zAxis *QVector3D) *QQuaternion {
				_goptr := newQQuaternion(C.QQuaternion_fromAxes2(xAxis.cPointer(), yAxis.cPointer(), zAxis.cPointer()))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func QQuaternion_FromDirection(direction *QVector3D, up *QVector3D) *QQuaternion {
				_goptr := newQQuaternion(C.QQuaternion_fromDirection(direction.cPointer(), up.cPointer()))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func QQuaternion_RotationTo(from *QVector3D, to *QVector3D) *QQuaternion {
				_goptr := newQQuaternion(C.QQuaternion_rotationTo(from.cPointer(), to.cPointer()))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func QQuaternion_Slerp(q1 *QQuaternion, q2 *QQuaternion, t float32) *QQuaternion {
				_goptr := newQQuaternion(C.QQuaternion_slerp(q1.cPointer(), q2.cPointer(), (C.float)(t)))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func QQuaternion_Nlerp(q1 *QQuaternion, q2 *QQuaternion, t float32) *QQuaternion {
				_goptr := newQQuaternion(C.QQuaternion_nlerp(q1.cPointer(), q2.cPointer(), (C.float)(t)))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			func (this *QQuaternion) OperatorAssign(param1 *QQuaternion)  {
				 C.QQuaternion_operatorAssign(this.h, param1.cPointer())
}
			
			// Delete this object from C++ memory.
			func (this *QQuaternion) Delete() {
				C.QQuaternion_delete(this.h)
			}

			// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
			// from C++ memory once it is unreachable from Go memory.
			func (this *QQuaternion) GoGC() {
				runtime.SetFinalizer(this, func(this *QQuaternion) {
					this.Delete()
					runtime.KeepAlive(this.h)
				})
			}
			
		type QQuaternion__Axis struct {
			h *C.QQuaternion__Axis
		
		}
		
		func (this *QQuaternion__Axis) cPointer() *C.QQuaternion__Axis {
			if this == nil {
				return nil
			}
			return this.h
		}
		
		func (this *QQuaternion__Axis) UnsafePointer() unsafe.Pointer {
			if this == nil {
				return nil
			}
			return unsafe.Pointer(this.h)
		}
		
		
			// newQQuaternion__Axis constructs the type using only CGO pointers.
			func newQQuaternion__Axis(h *C.QQuaternion__Axis) *QQuaternion__Axis {
				if h == nil {
					return nil
				}
		
				return &QQuaternion__Axis{h: h}
			}

			// UnsafeNewQQuaternion__Axis constructs the type using only unsafe pointers.
			func UnsafeNewQQuaternion__Axis(h unsafe.Pointer) *QQuaternion__Axis {
				return newQQuaternion__Axis( (*C.QQuaternion__Axis)(h) )
			}

		
			func (this *QQuaternion__Axis) X() float32 {
				return (float32)(C.QQuaternion__Axis_x(this.h))
}
			
			func (this *QQuaternion__Axis) SetX(x float32)  {
				 C.QQuaternion__Axis_setX(this.h, (C.float)(x))
}
			
			func (this *QQuaternion__Axis) Y() float32 {
				return (float32)(C.QQuaternion__Axis_y(this.h))
}
			
			func (this *QQuaternion__Axis) SetY(y float32)  {
				 C.QQuaternion__Axis_setY(this.h, (C.float)(y))
}
			
			func (this *QQuaternion__Axis) Z() float32 {
				return (float32)(C.QQuaternion__Axis_z(this.h))
}
			
			func (this *QQuaternion__Axis) SetZ(z float32)  {
				 C.QQuaternion__Axis_setZ(this.h, (C.float)(z))
}
			
			func QQuaternion__Axis_FromVector3D(v QVector3D) Axis {
				int /* TODO  */}
			
			func (this *QQuaternion__Axis) ToVector3D() *QVector3D {
				_goptr := newQVector3D(C.QQuaternion__Axis_toVector3D(this.h))
_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
return _goptr
}
			
			// Delete this object from C++ memory.
			func (this *QQuaternion__Axis) Delete() {
				C.QQuaternion__Axis_delete(this.h)
			}

			// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
			// from C++ memory once it is unreachable from Go memory.
			func (this *QQuaternion__Axis) GoGC() {
				runtime.SetFinalizer(this, func(this *QQuaternion__Axis) {
					this.Delete()
					runtime.KeepAlive(this.h)
				})
			}
			
		type QQuaternion__Axes struct {
			h *C.QQuaternion__Axes
		
		}
		
		func (this *QQuaternion__Axes) cPointer() *C.QQuaternion__Axes {
			if this == nil {
				return nil
			}
			return this.h
		}
		
		func (this *QQuaternion__Axes) UnsafePointer() unsafe.Pointer {
			if this == nil {
				return nil
			}
			return unsafe.Pointer(this.h)
		}
		
		
			// newQQuaternion__Axes constructs the type using only CGO pointers.
			func newQQuaternion__Axes(h *C.QQuaternion__Axes) *QQuaternion__Axes {
				if h == nil {
					return nil
				}
		
				return &QQuaternion__Axes{h: h}
			}

			// UnsafeNewQQuaternion__Axes constructs the type using only unsafe pointers.
			func UnsafeNewQQuaternion__Axes(h unsafe.Pointer) *QQuaternion__Axes {
				return newQQuaternion__Axes( (*C.QQuaternion__Axes)(h) )
			}

		
			func (this *QQuaternion__Axes) X() Axis {
				int /* TODO  */}
			
			func (this *QQuaternion__Axes) SetX(x Axis)  {
				 C.QQuaternion__Axes_setX(this.h, x)
}
			
			func (this *QQuaternion__Axes) Y() Axis {
				int /* TODO  */}
			
			func (this *QQuaternion__Axes) SetY(y Axis)  {
				 C.QQuaternion__Axes_setY(this.h, y)
}
			
			func (this *QQuaternion__Axes) Z() Axis {
				int /* TODO  */}
			
			func (this *QQuaternion__Axes) SetZ(z Axis)  {
				 C.QQuaternion__Axes_setZ(this.h, z)
}
			
			// Delete this object from C++ memory.
			func (this *QQuaternion__Axes) Delete() {
				C.QQuaternion__Axes_delete(this.h)
			}

			// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
			// from C++ memory once it is unreachable from Go memory.
			func (this *QQuaternion__Axes) GoGC() {
				runtime.SetFinalizer(this, func(this *QQuaternion__Axes) {
					this.Delete()
					runtime.KeepAlive(this.h)
				})
			}
			
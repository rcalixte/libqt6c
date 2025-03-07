#include "libqvariant.hpp"
#include "libqvectornd.hpp"
#include "libqquaternion.hpp"
#include "libqquaternion.h"

/// https://doc.qt.io/qt-6/qquaternion.html

/// q_quaternion_new constructs a new QQuaternion object.
///
/// ``` QQuaternion* other ```
QQuaternion* q_quaternion_new(void* other) {
    return QQuaternion_new((QQuaternion*)other);
}

/// q_quaternion_new2 constructs a new QQuaternion object and invalidates the source QQuaternion object.
///
/// ``` QQuaternion* other ```
QQuaternion* q_quaternion_new2(void* other) {
    return QQuaternion_new2((QQuaternion*)other);
}

/// q_quaternion_new3 constructs a new QQuaternion object.
///
///
QQuaternion* q_quaternion_new3() {
    return QQuaternion_new3();
}

/// q_quaternion_new4 constructs a new QQuaternion object.
///
/// ``` enum Qt__Initialization param1 ```
QQuaternion* q_quaternion_new4(int64_t param1) {
    return QQuaternion_new4(param1);
}

/// q_quaternion_new5 constructs a new QQuaternion object.
///
/// ``` float scalar, float xpos, float ypos, float zpos ```
QQuaternion* q_quaternion_new5(float scalar, float xpos, float ypos, float zpos) {
    return QQuaternion_new5(scalar, xpos, ypos, zpos);
}

/// q_quaternion_new6 constructs a new QQuaternion object.
///
/// ``` float scalar, QVector3D* vector ```
QQuaternion* q_quaternion_new6(float scalar, void* vector) {
    return QQuaternion_new6(scalar, (QVector3D*)vector);
}

/// q_quaternion_new7 constructs a new QQuaternion object.
///
/// ``` QVector4D* vector ```
QQuaternion* q_quaternion_new7(void* vector) {
    return QQuaternion_new7((QVector4D*)vector);
}

/// q_quaternion_new8 constructs a new QQuaternion object.
///
/// ``` QQuaternion* param1 ```
QQuaternion* q_quaternion_new8(void* param1) {
    return QQuaternion_new8((QQuaternion*)param1);
}

/// q_quaternion_copy_assign shallow copies `other` into `self`.
///
/// ``` QQuaternion* self, QQuaternion* other ```
void q_quaternion_copy_assign(void* self, void* other) {
    QQuaternion_CopyAssign((QQuaternion*)self, (QQuaternion*)other);
}

/// q_quaternion_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QQuaternion* self, QQuaternion* other ```
void q_quaternion_move_assign(void* self, void* other) {
    QQuaternion_MoveAssign((QQuaternion*)self, (QQuaternion*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#isNull)
///
/// ``` QQuaternion* self ```
bool q_quaternion_is_null(void* self) {
    return QQuaternion_IsNull((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#isIdentity)
///
/// ``` QQuaternion* self ```
bool q_quaternion_is_identity(void* self) {
    return QQuaternion_IsIdentity((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#vector)
///
/// ``` QQuaternion* self ```
QVector3D* q_quaternion_vector(void* self) {
    return QQuaternion_Vector((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setVector)
///
/// ``` QQuaternion* self, QVector3D* vector ```
void q_quaternion_set_vector(void* self, void* vector) {
    QQuaternion_SetVector((QQuaternion*)self, (QVector3D*)vector);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setVector)
///
/// ``` QQuaternion* self, float x, float y, float z ```
void q_quaternion_set_vector2(void* self, float x, float y, float z) {
    QQuaternion_SetVector2((QQuaternion*)self, x, y, z);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#x)
///
/// ``` QQuaternion* self ```
float q_quaternion_x(void* self) {
    return QQuaternion_X((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#y)
///
/// ``` QQuaternion* self ```
float q_quaternion_y(void* self) {
    return QQuaternion_Y((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#z)
///
/// ``` QQuaternion* self ```
float q_quaternion_z(void* self) {
    return QQuaternion_Z((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#scalar)
///
/// ``` QQuaternion* self ```
float q_quaternion_scalar(void* self) {
    return QQuaternion_Scalar((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setX)
///
/// ``` QQuaternion* self, float x ```
void q_quaternion_set_x(void* self, float x) {
    QQuaternion_SetX((QQuaternion*)self, x);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setY)
///
/// ``` QQuaternion* self, float y ```
void q_quaternion_set_y(void* self, float y) {
    QQuaternion_SetY((QQuaternion*)self, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setZ)
///
/// ``` QQuaternion* self, float z ```
void q_quaternion_set_z(void* self, float z) {
    QQuaternion_SetZ((QQuaternion*)self, z);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setScalar)
///
/// ``` QQuaternion* self, float scalar ```
void q_quaternion_set_scalar(void* self, float scalar) {
    QQuaternion_SetScalar((QQuaternion*)self, scalar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#dotProduct)
///
/// ``` QQuaternion* q1, QQuaternion* q2 ```
float q_quaternion_dot_product(void* q1, void* q2) {
    return QQuaternion_DotProduct((QQuaternion*)q1, (QQuaternion*)q2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#length)
///
/// ``` QQuaternion* self ```
float q_quaternion_length(void* self) {
    return QQuaternion_Length((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#lengthSquared)
///
/// ``` QQuaternion* self ```
float q_quaternion_length_squared(void* self) {
    return QQuaternion_LengthSquared((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#normalized)
///
/// ``` QQuaternion* self ```
QQuaternion* q_quaternion_normalized(void* self) {
    return QQuaternion_Normalized((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#normalize)
///
/// ``` QQuaternion* self ```
void q_quaternion_normalize(void* self) {
    QQuaternion_Normalize((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#inverted)
///
/// ``` QQuaternion* self ```
QQuaternion* q_quaternion_inverted(void* self) {
    return QQuaternion_Inverted((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#conjugated)
///
/// ``` QQuaternion* self ```
QQuaternion* q_quaternion_conjugated(void* self) {
    return QQuaternion_Conjugated((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#rotatedVector)
///
/// ``` QQuaternion* self, QVector3D* vector ```
QVector3D* q_quaternion_rotated_vector(void* self, void* vector) {
    return QQuaternion_RotatedVector((QQuaternion*)self, (QVector3D*)vector);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator+=)
///
/// ``` QQuaternion* self, QQuaternion* quaternion ```
QQuaternion* q_quaternion_operator_plus_assign(void* self, void* quaternion) {
    return QQuaternion_OperatorPlusAssign((QQuaternion*)self, (QQuaternion*)quaternion);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator-=)
///
/// ``` QQuaternion* self, QQuaternion* quaternion ```
QQuaternion* q_quaternion_operator_minus_assign(void* self, void* quaternion) {
    return QQuaternion_OperatorMinusAssign((QQuaternion*)self, (QQuaternion*)quaternion);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator*=)
///
/// ``` QQuaternion* self, float factor ```
QQuaternion* q_quaternion_operator_multiply_assign(void* self, float factor) {
    return QQuaternion_OperatorMultiplyAssign((QQuaternion*)self, factor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator*=)
///
/// ``` QQuaternion* self, QQuaternion* quaternion ```
QQuaternion* q_quaternion_operator_multiply_assign_with_quaternion(void* self, void* quaternion) {
    return QQuaternion_OperatorMultiplyAssignWithQuaternion((QQuaternion*)self, (QQuaternion*)quaternion);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator/=)
///
/// ``` QQuaternion* self, float divisor ```
QQuaternion* q_quaternion_operator_divide_assign(void* self, float divisor) {
    return QQuaternion_OperatorDivideAssign((QQuaternion*)self, divisor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#toVector4D)
///
/// ``` QQuaternion* self ```
QVector4D* q_quaternion_to_vector4_d(void* self) {
    return QQuaternion_ToVector4D((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator QVariant)
///
/// ``` QQuaternion* self ```
QVariant* q_quaternion_to_q_variant(void* self) {
    return QQuaternion_ToQVariant((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#getAxisAndAngle)
///
/// ``` QQuaternion* self, QVector3D* axis, float* angle ```
void q_quaternion_get_axis_and_angle(void* self, void* axis, float* angle) {
    QQuaternion_GetAxisAndAngle((QQuaternion*)self, (QVector3D*)axis, angle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromAxisAndAngle)
///
/// ``` QVector3D* axis, float angle ```
QQuaternion* q_quaternion_from_axis_and_angle(void* axis, float angle) {
    return QQuaternion_FromAxisAndAngle((QVector3D*)axis, angle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#getAxisAndAngle)
///
/// ``` QQuaternion* self, float* x, float* y, float* z, float* angle ```
void q_quaternion_get_axis_and_angle2(void* self, float* x, float* y, float* z, float* angle) {
    QQuaternion_GetAxisAndAngle2((QQuaternion*)self, x, y, z, angle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromAxisAndAngle)
///
/// ``` float x, float y, float z, float angle ```
QQuaternion* q_quaternion_from_axis_and_angle2(float x, float y, float z, float angle) {
    return QQuaternion_FromAxisAndAngle2(x, y, z, angle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#toEulerAngles)
///
/// ``` QQuaternion* self ```
QVector3D* q_quaternion_to_euler_angles(void* self) {
    return QQuaternion_ToEulerAngles((QQuaternion*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromEulerAngles)
///
/// ``` QVector3D* eulerAngles ```
QQuaternion* q_quaternion_from_euler_angles(void* eulerAngles) {
    return QQuaternion_FromEulerAngles((QVector3D*)eulerAngles);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#getEulerAngles)
///
/// ``` QQuaternion* self, float* pitch, float* yaw, float* roll ```
void q_quaternion_get_euler_angles(void* self, float* pitch, float* yaw, float* roll) {
    QQuaternion_GetEulerAngles((QQuaternion*)self, pitch, yaw, roll);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromEulerAngles)
///
/// ``` float pitch, float yaw, float roll ```
QQuaternion* q_quaternion_from_euler_angles2(float pitch, float yaw, float roll) {
    return QQuaternion_FromEulerAngles2(pitch, yaw, roll);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#getAxes)
///
/// ``` QQuaternion* self, QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis ```
void q_quaternion_get_axes(void* self, void* xAxis, void* yAxis, void* zAxis) {
    QQuaternion_GetAxes((QQuaternion*)self, (QVector3D*)xAxis, (QVector3D*)yAxis, (QVector3D*)zAxis);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromAxes)
///
/// ``` QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis ```
QQuaternion* q_quaternion_from_axes(void* xAxis, void* yAxis, void* zAxis) {
    return QQuaternion_FromAxes((QVector3D*)xAxis, (QVector3D*)yAxis, (QVector3D*)zAxis);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromDirection)
///
/// ``` QVector3D* direction, QVector3D* up ```
QQuaternion* q_quaternion_from_direction(void* direction, void* up) {
    return QQuaternion_FromDirection((QVector3D*)direction, (QVector3D*)up);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#rotationTo)
///
/// ``` QVector3D* from, QVector3D* to ```
QQuaternion* q_quaternion_rotation_to(void* from, void* to) {
    return QQuaternion_RotationTo((QVector3D*)from, (QVector3D*)to);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#slerp)
///
/// ``` QQuaternion* q1, QQuaternion* q2, float t ```
QQuaternion* q_quaternion_slerp(void* q1, void* q2, float t) {
    return QQuaternion_Slerp((QQuaternion*)q1, (QQuaternion*)q2, t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#nlerp)
///
/// ``` QQuaternion* q1, QQuaternion* q2, float t ```
QQuaternion* q_quaternion_nlerp(void* q1, void* q2, float t) {
    return QQuaternion_Nlerp((QQuaternion*)q1, (QQuaternion*)q2, t);
}

/// Delete this object from C++ memory.
///
/// ``` QQuaternion* self ```
void q_quaternion_delete(void* self) {
    QQuaternion_Delete((QQuaternion*)(self));
}
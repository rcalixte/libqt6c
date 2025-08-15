#pragma once
#ifndef SRCQT6C_LIBQQUATERNION_H
#define SRCQT6C_LIBQQUATERNION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qquaternion.html

/// q_quaternion_new constructs a new QQuaternion object.
///
/// @param other QQuaternion*
QQuaternion* q_quaternion_new(void* other);

/// q_quaternion_new2 constructs a new QQuaternion object and invalidates the source QQuaternion object.
///
/// @param other QQuaternion*
QQuaternion* q_quaternion_new2(void* other);

/// q_quaternion_new3 constructs a new QQuaternion object.
///
QQuaternion* q_quaternion_new3();

/// q_quaternion_new4 constructs a new QQuaternion object.
///
/// @param param1 enum Qt__Initialization
QQuaternion* q_quaternion_new4(int64_t param1);

/// q_quaternion_new5 constructs a new QQuaternion object.
///
/// @param scalar float
/// @param xpos float
/// @param ypos float
/// @param zpos float
QQuaternion* q_quaternion_new5(float scalar, float xpos, float ypos, float zpos);

/// q_quaternion_new6 constructs a new QQuaternion object.
///
/// @param scalar float
/// @param vector QVector3D*
QQuaternion* q_quaternion_new6(float scalar, void* vector);

/// q_quaternion_new7 constructs a new QQuaternion object.
///
/// @param vector QVector4D*
QQuaternion* q_quaternion_new7(void* vector);

/// q_quaternion_new8 constructs a new QQuaternion object.
///
/// @param param1 QQuaternion*
QQuaternion* q_quaternion_new8(void* param1);

/// q_quaternion_copy_assign shallow copies `other` into `self`.
///
/// @param self QQuaternion*
/// @param other QQuaternion*
void q_quaternion_copy_assign(void* self, void* other);

/// q_quaternion_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QQuaternion*
/// @param other QQuaternion*
void q_quaternion_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#isNull)
///
/// @param self QQuaternion*
bool q_quaternion_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#isIdentity)
///
/// @param self QQuaternion*
bool q_quaternion_is_identity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#vector)
///
/// @param self QQuaternion*
QVector3D* q_quaternion_vector(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setVector)
///
/// @param self QQuaternion*
/// @param vector QVector3D*
void q_quaternion_set_vector(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setVector)
///
/// @param self QQuaternion*
/// @param x float
/// @param y float
/// @param z float
void q_quaternion_set_vector2(void* self, float x, float y, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#x)
///
/// @param self QQuaternion*
float q_quaternion_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#y)
///
/// @param self QQuaternion*
float q_quaternion_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#z)
///
/// @param self QQuaternion*
float q_quaternion_z(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#scalar)
///
/// @param self QQuaternion*
float q_quaternion_scalar(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setX)
///
/// @param self QQuaternion*
/// @param x float
void q_quaternion_set_x(void* self, float x);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setY)
///
/// @param self QQuaternion*
/// @param y float
void q_quaternion_set_y(void* self, float y);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setZ)
///
/// @param self QQuaternion*
/// @param z float
void q_quaternion_set_z(void* self, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setScalar)
///
/// @param self QQuaternion*
/// @param scalar float
void q_quaternion_set_scalar(void* self, float scalar);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#dotProduct)
///
/// @param q1 QQuaternion*
/// @param q2 QQuaternion*
float q_quaternion_dot_product(void* q1, void* q2);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#length)
///
/// @param self QQuaternion*
float q_quaternion_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#lengthSquared)
///
/// @param self QQuaternion*
float q_quaternion_length_squared(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#normalized)
///
/// @param self QQuaternion*
QQuaternion* q_quaternion_normalized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#normalize)
///
/// @param self QQuaternion*
void q_quaternion_normalize(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#inverted)
///
/// @param self QQuaternion*
QQuaternion* q_quaternion_inverted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#conjugated)
///
/// @param self QQuaternion*
QQuaternion* q_quaternion_conjugated(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#rotatedVector)
///
/// @param self QQuaternion*
/// @param vector QVector3D*
QVector3D* q_quaternion_rotated_vector(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator-2b-eq)
///
/// @param self QQuaternion*
/// @param quaternion QQuaternion*
QQuaternion* q_quaternion_operator_plus_assign(void* self, void* quaternion);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator--eq)
///
/// @param self QQuaternion*
/// @param quaternion QQuaternion*
QQuaternion* q_quaternion_operator_minus_assign(void* self, void* quaternion);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator-2a-eq)
///
/// @param self QQuaternion*
/// @param factor float
QQuaternion* q_quaternion_operator_multiply_assign(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator-2a-eq)
///
/// @param self QQuaternion*
/// @param quaternion QQuaternion*
QQuaternion* q_quaternion_operator_multiply_assign2(void* self, void* quaternion);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator-2f-eq)
///
/// @param self QQuaternion*
/// @param divisor float
QQuaternion* q_quaternion_operator_divide_assign(void* self, float divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#toVector4D)
///
/// @param self QQuaternion*
QVector4D* q_quaternion_to_vector4_d(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator)
///
/// @param self QQuaternion*
QVariant* q_quaternion_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#getAxisAndAngle)
///
/// @param self QQuaternion*
/// @param axis QVector3D*
/// @param angle float*
void q_quaternion_get_axis_and_angle(void* self, void* axis, float* angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromAxisAndAngle)
///
/// @param axis QVector3D*
/// @param angle float
QQuaternion* q_quaternion_from_axis_and_angle(void* axis, float angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#getAxisAndAngle)
///
/// @param self QQuaternion*
/// @param x float*
/// @param y float*
/// @param z float*
/// @param angle float*
void q_quaternion_get_axis_and_angle2(void* self, float* x, float* y, float* z, float* angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromAxisAndAngle)
///
/// @param x float
/// @param y float
/// @param z float
/// @param angle float
QQuaternion* q_quaternion_from_axis_and_angle2(float x, float y, float z, float angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#toEulerAngles)
///
/// @param self QQuaternion*
QVector3D* q_quaternion_to_euler_angles(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromEulerAngles)
///
/// @param eulerAngles QVector3D*
QQuaternion* q_quaternion_from_euler_angles(void* eulerAngles);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#getEulerAngles)
///
/// @param self QQuaternion*
/// @param pitch float*
/// @param yaw float*
/// @param roll float*
void q_quaternion_get_euler_angles(void* self, float* pitch, float* yaw, float* roll);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromEulerAngles)
///
/// @param pitch float
/// @param yaw float
/// @param roll float
QQuaternion* q_quaternion_from_euler_angles2(float pitch, float yaw, float roll);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#getAxes)
///
/// @param self QQuaternion*
/// @param xAxis QVector3D*
/// @param yAxis QVector3D*
/// @param zAxis QVector3D*
void q_quaternion_get_axes(void* self, void* xAxis, void* yAxis, void* zAxis);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromAxes)
///
/// @param xAxis QVector3D*
/// @param yAxis QVector3D*
/// @param zAxis QVector3D*
QQuaternion* q_quaternion_from_axes(void* xAxis, void* yAxis, void* zAxis);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromDirection)
///
/// @param direction QVector3D*
/// @param up QVector3D*
QQuaternion* q_quaternion_from_direction(void* direction, void* up);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#rotationTo)
///
/// @param from QVector3D*
/// @param to QVector3D*
QQuaternion* q_quaternion_rotation_to(void* from, void* to);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#slerp)
///
/// @param q1 QQuaternion*
/// @param q2 QQuaternion*
/// @param t float
QQuaternion* q_quaternion_slerp(void* q1, void* q2, float t);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#nlerp)
///
/// @param q1 QQuaternion*
/// @param q2 QQuaternion*
/// @param t float
QQuaternion* q_quaternion_nlerp(void* q1, void* q2, float t);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#dtor.QQuaternion)
///
/// Delete this object from C++ memory.
///
/// @param self QQuaternion*
void q_quaternion_delete(void* self);

#endif

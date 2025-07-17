#pragma once
#ifndef SRCQT6C_LIBQQUATERNION_H
#define SRCQT6C_LIBQQUATERNION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qquaternion.html

/// q_quaternion_new constructs a new QQuaternion object.
///
/// ``` QQuaternion* other ```
QQuaternion* q_quaternion_new(void* other);

/// q_quaternion_new2 constructs a new QQuaternion object and invalidates the source QQuaternion object.
///
/// ``` QQuaternion* other ```
QQuaternion* q_quaternion_new2(void* other);

/// q_quaternion_new3 constructs a new QQuaternion object.
///
///
QQuaternion* q_quaternion_new3();

/// q_quaternion_new4 constructs a new QQuaternion object.
///
/// ``` enum Qt__Initialization param1 ```
QQuaternion* q_quaternion_new4(int64_t param1);

/// q_quaternion_new5 constructs a new QQuaternion object.
///
/// ``` float scalar, float xpos, float ypos, float zpos ```
QQuaternion* q_quaternion_new5(float scalar, float xpos, float ypos, float zpos);

/// q_quaternion_new6 constructs a new QQuaternion object.
///
/// ``` float scalar, QVector3D* vector ```
QQuaternion* q_quaternion_new6(float scalar, void* vector);

/// q_quaternion_new7 constructs a new QQuaternion object.
///
/// ``` QVector4D* vector ```
QQuaternion* q_quaternion_new7(void* vector);

/// q_quaternion_new8 constructs a new QQuaternion object.
///
/// ``` QQuaternion* param1 ```
QQuaternion* q_quaternion_new8(void* param1);

/// q_quaternion_copy_assign shallow copies `other` into `self`.
///
/// ``` QQuaternion* self, QQuaternion* other ```
void q_quaternion_copy_assign(void* self, void* other);

/// q_quaternion_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QQuaternion* self, QQuaternion* other ```
void q_quaternion_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#isNull)
///
/// ``` QQuaternion* self ```
bool q_quaternion_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#isIdentity)
///
/// ``` QQuaternion* self ```
bool q_quaternion_is_identity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#vector)
///
/// ``` QQuaternion* self ```
QVector3D* q_quaternion_vector(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setVector)
///
/// ``` QQuaternion* self, QVector3D* vector ```
void q_quaternion_set_vector(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setVector)
///
/// ``` QQuaternion* self, float x, float y, float z ```
void q_quaternion_set_vector2(void* self, float x, float y, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#x)
///
/// ``` QQuaternion* self ```
float q_quaternion_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#y)
///
/// ``` QQuaternion* self ```
float q_quaternion_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#z)
///
/// ``` QQuaternion* self ```
float q_quaternion_z(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#scalar)
///
/// ``` QQuaternion* self ```
float q_quaternion_scalar(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setX)
///
/// ``` QQuaternion* self, float x ```
void q_quaternion_set_x(void* self, float x);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setY)
///
/// ``` QQuaternion* self, float y ```
void q_quaternion_set_y(void* self, float y);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setZ)
///
/// ``` QQuaternion* self, float z ```
void q_quaternion_set_z(void* self, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#setScalar)
///
/// ``` QQuaternion* self, float scalar ```
void q_quaternion_set_scalar(void* self, float scalar);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#dotProduct)
///
/// ``` QQuaternion* q1, QQuaternion* q2 ```
float q_quaternion_dot_product(void* q1, void* q2);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#length)
///
/// ``` QQuaternion* self ```
float q_quaternion_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#lengthSquared)
///
/// ``` QQuaternion* self ```
float q_quaternion_length_squared(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#normalized)
///
/// ``` QQuaternion* self ```
QQuaternion* q_quaternion_normalized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#normalize)
///
/// ``` QQuaternion* self ```
void q_quaternion_normalize(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#inverted)
///
/// ``` QQuaternion* self ```
QQuaternion* q_quaternion_inverted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#conjugated)
///
/// ``` QQuaternion* self ```
QQuaternion* q_quaternion_conjugated(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#rotatedVector)
///
/// ``` QQuaternion* self, QVector3D* vector ```
QVector3D* q_quaternion_rotated_vector(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator-2b-eq)
///
/// ``` QQuaternion* self, QQuaternion* quaternion ```
QQuaternion* q_quaternion_operator_plus_assign(void* self, void* quaternion);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator--eq)
///
/// ``` QQuaternion* self, QQuaternion* quaternion ```
QQuaternion* q_quaternion_operator_minus_assign(void* self, void* quaternion);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator-2a-eq)
///
/// ``` QQuaternion* self, float factor ```
QQuaternion* q_quaternion_operator_multiply_assign(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator-2a-eq)
///
/// ``` QQuaternion* self, QQuaternion* quaternion ```
QQuaternion* q_quaternion_operator_multiply_assign2(void* self, void* quaternion);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator-2f-eq)
///
/// ``` QQuaternion* self, float divisor ```
QQuaternion* q_quaternion_operator_divide_assign(void* self, float divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#toVector4D)
///
/// ``` QQuaternion* self ```
QVector4D* q_quaternion_to_vector4_d(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#operator)
///
/// ``` QQuaternion* self ```
QVariant* q_quaternion_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#getAxisAndAngle)
///
/// ``` QQuaternion* self, QVector3D* axis, float* angle ```
void q_quaternion_get_axis_and_angle(void* self, void* axis, float* angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromAxisAndAngle)
///
/// ``` QVector3D* axis, float angle ```
QQuaternion* q_quaternion_from_axis_and_angle(void* axis, float angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#getAxisAndAngle)
///
/// ``` QQuaternion* self, float* x, float* y, float* z, float* angle ```
void q_quaternion_get_axis_and_angle2(void* self, float* x, float* y, float* z, float* angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromAxisAndAngle)
///
/// ``` float x, float y, float z, float angle ```
QQuaternion* q_quaternion_from_axis_and_angle2(float x, float y, float z, float angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#toEulerAngles)
///
/// ``` QQuaternion* self ```
QVector3D* q_quaternion_to_euler_angles(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromEulerAngles)
///
/// ``` QVector3D* eulerAngles ```
QQuaternion* q_quaternion_from_euler_angles(void* eulerAngles);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#getEulerAngles)
///
/// ``` QQuaternion* self, float* pitch, float* yaw, float* roll ```
void q_quaternion_get_euler_angles(void* self, float* pitch, float* yaw, float* roll);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromEulerAngles)
///
/// ``` float pitch, float yaw, float roll ```
QQuaternion* q_quaternion_from_euler_angles2(float pitch, float yaw, float roll);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#getAxes)
///
/// ``` QQuaternion* self, QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis ```
void q_quaternion_get_axes(void* self, void* xAxis, void* yAxis, void* zAxis);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromAxes)
///
/// ``` QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis ```
QQuaternion* q_quaternion_from_axes(void* xAxis, void* yAxis, void* zAxis);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#fromDirection)
///
/// ``` QVector3D* direction, QVector3D* up ```
QQuaternion* q_quaternion_from_direction(void* direction, void* up);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#rotationTo)
///
/// ``` QVector3D* from, QVector3D* to ```
QQuaternion* q_quaternion_rotation_to(void* from, void* to);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#slerp)
///
/// ``` QQuaternion* q1, QQuaternion* q2, float t ```
QQuaternion* q_quaternion_slerp(void* q1, void* q2, float t);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#nlerp)
///
/// ``` QQuaternion* q1, QQuaternion* q2, float t ```
QQuaternion* q_quaternion_nlerp(void* q1, void* q2, float t);

/// [Qt documentation](https://doc.qt.io/qt-6/qquaternion.html#dtor.QQuaternion)
///
/// Delete this object from C++ memory.
///
/// ``` QQuaternion* self ```
void q_quaternion_delete(void* self);

#endif

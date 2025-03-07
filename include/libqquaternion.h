#pragma once
#ifndef SRCQT6C_LIBQQUATERNION_H
#define SRCQT6C_LIBQQUATERNION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqvariant.h"
#include "libqvectornd.h"

QQuaternion* q_quaternion_new(void* other);
QQuaternion* q_quaternion_new2(void* other);
QQuaternion* q_quaternion_new3();
QQuaternion* q_quaternion_new4(int64_t param1);
QQuaternion* q_quaternion_new5(float scalar, float xpos, float ypos, float zpos);
QQuaternion* q_quaternion_new6(float scalar, void* vector);
QQuaternion* q_quaternion_new7(void* vector);
QQuaternion* q_quaternion_new8(void* param1);
void q_quaternion_copy_assign(void* self, void* other);
void q_quaternion_move_assign(void* self, void* other);
bool q_quaternion_is_null(void* self);
bool q_quaternion_is_identity(void* self);
QVector3D* q_quaternion_vector(void* self);
void q_quaternion_set_vector(void* self, void* vector);
void q_quaternion_set_vector2(void* self, float x, float y, float z);
float q_quaternion_x(void* self);
float q_quaternion_y(void* self);
float q_quaternion_z(void* self);
float q_quaternion_scalar(void* self);
void q_quaternion_set_x(void* self, float x);
void q_quaternion_set_y(void* self, float y);
void q_quaternion_set_z(void* self, float z);
void q_quaternion_set_scalar(void* self, float scalar);
float q_quaternion_dot_product(void* q1, void* q2);
float q_quaternion_length(void* self);
float q_quaternion_length_squared(void* self);
QQuaternion* q_quaternion_normalized(void* self);
void q_quaternion_normalize(void* self);
QQuaternion* q_quaternion_inverted(void* self);
QQuaternion* q_quaternion_conjugated(void* self);
QVector3D* q_quaternion_rotated_vector(void* self, void* vector);
QQuaternion* q_quaternion_operator_plus_assign(void* self, void* quaternion);
QQuaternion* q_quaternion_operator_minus_assign(void* self, void* quaternion);
QQuaternion* q_quaternion_operator_multiply_assign(void* self, float factor);
QQuaternion* q_quaternion_operator_multiply_assign_with_quaternion(void* self, void* quaternion);
QQuaternion* q_quaternion_operator_divide_assign(void* self, float divisor);
QVector4D* q_quaternion_to_vector4_d(void* self);
QVariant* q_quaternion_to_q_variant(void* self);
void q_quaternion_get_axis_and_angle(void* self, void* axis, float* angle);
QQuaternion* q_quaternion_from_axis_and_angle(void* axis, float angle);
void q_quaternion_get_axis_and_angle2(void* self, float* x, float* y, float* z, float* angle);
QQuaternion* q_quaternion_from_axis_and_angle2(float x, float y, float z, float angle);
QVector3D* q_quaternion_to_euler_angles(void* self);
QQuaternion* q_quaternion_from_euler_angles(void* eulerAngles);
void q_quaternion_get_euler_angles(void* self, float* pitch, float* yaw, float* roll);
QQuaternion* q_quaternion_from_euler_angles2(float pitch, float yaw, float roll);
void q_quaternion_get_axes(void* self, void* xAxis, void* yAxis, void* zAxis);
QQuaternion* q_quaternion_from_axes(void* xAxis, void* yAxis, void* zAxis);
QQuaternion* q_quaternion_from_direction(void* direction, void* up);
QQuaternion* q_quaternion_rotation_to(void* from, void* to);
QQuaternion* q_quaternion_slerp(void* q1, void* q2, float t);
QQuaternion* q_quaternion_nlerp(void* q1, void* q2, float t);
void q_quaternion_delete(void* self);

#endif

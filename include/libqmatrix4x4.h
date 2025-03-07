#pragma once
#ifndef SRCQT6C_LIBQMATRIX4X4_H
#define SRCQT6C_LIBQMATRIX4X4_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqpoint.h"
#include "libqquaternion.h"
#include "libqrect.h"
#include "libqtransform.h"
#include "libqvariant.h"
#include "libqvectornd.h"

QMatrix4x4* q_matrix4x4_new(void* other);
QMatrix4x4* q_matrix4x4_new2(void* other);
QMatrix4x4* q_matrix4x4_new3();
QMatrix4x4* q_matrix4x4_new4(int64_t param1);
QMatrix4x4* q_matrix4x4_new5(float* values);
QMatrix4x4* q_matrix4x4_new6(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);
QMatrix4x4* q_matrix4x4_new7(float* values, int cols, int rows);
QMatrix4x4* q_matrix4x4_new8(void* transform);
QMatrix4x4* q_matrix4x4_new9(void* param1);
void q_matrix4x4_copy_assign(void* self, void* other);
void q_matrix4x4_move_assign(void* self, void* other);
QVector4D* q_matrix4x4_column(void* self, int index);
void q_matrix4x4_set_column(void* self, int index, void* value);
QVector4D* q_matrix4x4_row(void* self, int index);
void q_matrix4x4_set_row(void* self, int index, void* value);
bool q_matrix4x4_is_affine(void* self);
bool q_matrix4x4_is_identity(void* self);
void q_matrix4x4_set_to_identity(void* self);
void q_matrix4x4_fill(void* self, float value);
double q_matrix4x4_determinant(void* self);
QMatrix4x4* q_matrix4x4_inverted(void* self);
QMatrix4x4* q_matrix4x4_transposed(void* self);
QMatrix4x4* q_matrix4x4_operator_plus_assign(void* self, void* other);
QMatrix4x4* q_matrix4x4_operator_minus_assign(void* self, void* other);
QMatrix4x4* q_matrix4x4_operator_multiply_assign(void* self, void* other);
QMatrix4x4* q_matrix4x4_operator_multiply_assign_with_factor(void* self, float factor);
QMatrix4x4* q_matrix4x4_operator_divide_assign(void* self, float divisor);
bool q_matrix4x4_operator_equal(void* self, void* other);
bool q_matrix4x4_operator_not_equal(void* self, void* other);
void q_matrix4x4_scale(void* self, void* vector);
void q_matrix4x4_translate(void* self, void* vector);
void q_matrix4x4_rotate(void* self, float angle, void* vector);
void q_matrix4x4_scale2(void* self, float x, float y);
void q_matrix4x4_scale3(void* self, float x, float y, float z);
void q_matrix4x4_scale_with_factor(void* self, float factor);
void q_matrix4x4_translate2(void* self, float x, float y);
void q_matrix4x4_translate3(void* self, float x, float y, float z);
void q_matrix4x4_rotate2(void* self, float angle, float x, float y);
void q_matrix4x4_rotate_with_quaternion(void* self, void* quaternion);
void q_matrix4x4_ortho(void* self, void* rect);
void q_matrix4x4_ortho_with_rect(void* self, void* rect);
void q_matrix4x4_ortho2(void* self, float left, float right, float bottom, float top, float nearPlane, float farPlane);
void q_matrix4x4_frustum(void* self, float left, float right, float bottom, float top, float nearPlane, float farPlane);
void q_matrix4x4_perspective(void* self, float verticalAngle, float aspectRatio, float nearPlane, float farPlane);
void q_matrix4x4_look_at(void* self, void* eye, void* center, void* up);
void q_matrix4x4_viewport(void* self, void* rect);
void q_matrix4x4_viewport2(void* self, float left, float bottom, float width, float height);
void q_matrix4x4_flip_coordinates(void* self);
void q_matrix4x4_copy_data_to(void* self, float* values);
QTransform* q_matrix4x4_to_transform(void* self);
QTransform* q_matrix4x4_to_transform_with_distance_to_plane(void* self, float distanceToPlane);
QPoint* q_matrix4x4_map(void* self, void* point);
QPointF* q_matrix4x4_map_with_point(void* self, void* point);
QVector3D* q_matrix4x4_map2(void* self, void* point);
QVector3D* q_matrix4x4_map_vector(void* self, void* vector);
QVector4D* q_matrix4x4_map3(void* self, void* point);
QRect* q_matrix4x4_map_rect(void* self, void* rect);
QRectF* q_matrix4x4_map_rect_with_rect(void* self, void* rect);
float* q_matrix4x4_data(void* self);
float* q_matrix4x4_data2(void* self);
float* q_matrix4x4_const_data(void* self);
void q_matrix4x4_optimize(void* self);
QVariant* q_matrix4x4_to_q_variant(void* self);
void q_matrix4x4_projected_rotate(void* self, float angle, float x, float y, float z);
int64_t q_matrix4x4_flags(void* self);
QMatrix4x4* q_matrix4x4_inverted1(void* self, bool* invertible);
void q_matrix4x4_rotate4(void* self, float angle, float x, float y, float z);
void q_matrix4x4_viewport5(void* self, float left, float bottom, float width, float height, float nearPlane);
void q_matrix4x4_viewport6(void* self, float left, float bottom, float width, float height, float nearPlane, float farPlane);
void q_matrix4x4_delete(void* self);

/// https://doc.qt.io/qt-6/qmatrix4x4.html#types

typedef enum {
    QMATRIX4X4_FLAG_IDENTITY = 0,
    QMATRIX4X4_FLAG_TRANSLATION = 1,
    QMATRIX4X4_FLAG_SCALE = 2,
    QMATRIX4X4_FLAG_ROTATION2D = 4,
    QMATRIX4X4_FLAG_ROTATION = 8,
    QMATRIX4X4_FLAG_PERSPECTIVE = 16,
    QMATRIX4X4_FLAG_GENERAL = 31
} QMatrix4x4__Flag;

#endif

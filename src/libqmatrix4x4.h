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

/// https://doc.qt.io/qt-6/qmatrix4x4.html

/// q_matrix4x4_new constructs a new QMatrix4x4 object.
///
/// ``` QMatrix4x4* other ```
QMatrix4x4* q_matrix4x4_new(void* other);

/// q_matrix4x4_new2 constructs a new QMatrix4x4 object and invalidates the source QMatrix4x4 object.
///
/// ``` QMatrix4x4* other ```
QMatrix4x4* q_matrix4x4_new2(void* other);

/// q_matrix4x4_new3 constructs a new QMatrix4x4 object.
///
///
QMatrix4x4* q_matrix4x4_new3();

/// q_matrix4x4_new4 constructs a new QMatrix4x4 object.
///
/// ``` enum Qt__Initialization param1 ```
QMatrix4x4* q_matrix4x4_new4(int64_t param1);

/// q_matrix4x4_new5 constructs a new QMatrix4x4 object.
///
/// ``` float* values ```
QMatrix4x4* q_matrix4x4_new5(float* values);

/// q_matrix4x4_new6 constructs a new QMatrix4x4 object.
///
/// ``` float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44 ```
QMatrix4x4* q_matrix4x4_new6(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);

/// q_matrix4x4_new7 constructs a new QMatrix4x4 object.
///
/// ``` float* values, int cols, int rows ```
QMatrix4x4* q_matrix4x4_new7(float* values, int cols, int rows);

/// q_matrix4x4_new8 constructs a new QMatrix4x4 object.
///
/// ``` QTransform* transform ```
QMatrix4x4* q_matrix4x4_new8(void* transform);

/// q_matrix4x4_new9 constructs a new QMatrix4x4 object.
///
/// ``` QMatrix4x4* param1 ```
QMatrix4x4* q_matrix4x4_new9(void* param1);

/// q_matrix4x4_copy_assign shallow copies `other` into `self`.
///
/// ``` QMatrix4x4* self, QMatrix4x4* other ```
void q_matrix4x4_copy_assign(void* self, void* other);

/// q_matrix4x4_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMatrix4x4* self, QMatrix4x4* other ```
void q_matrix4x4_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#column)
///
/// ``` QMatrix4x4* self, int index ```
QVector4D* q_matrix4x4_column(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#setColumn)
///
/// ``` QMatrix4x4* self, int index, QVector4D* value ```
void q_matrix4x4_set_column(void* self, int index, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#row)
///
/// ``` QMatrix4x4* self, int index ```
QVector4D* q_matrix4x4_row(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#setRow)
///
/// ``` QMatrix4x4* self, int index, QVector4D* value ```
void q_matrix4x4_set_row(void* self, int index, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#isAffine)
///
/// ``` QMatrix4x4* self ```
bool q_matrix4x4_is_affine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#isIdentity)
///
/// ``` QMatrix4x4* self ```
bool q_matrix4x4_is_identity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#setToIdentity)
///
/// ``` QMatrix4x4* self ```
void q_matrix4x4_set_to_identity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#fill)
///
/// ``` QMatrix4x4* self, float value ```
void q_matrix4x4_fill(void* self, float value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#determinant)
///
/// ``` QMatrix4x4* self ```
double q_matrix4x4_determinant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#inverted)
///
/// ``` QMatrix4x4* self ```
QMatrix4x4* q_matrix4x4_inverted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#transposed)
///
/// ``` QMatrix4x4* self ```
QMatrix4x4* q_matrix4x4_transposed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator+=)
///
/// ``` QMatrix4x4* self, QMatrix4x4* other ```
QMatrix4x4* q_matrix4x4_operator_plus_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-=)
///
/// ``` QMatrix4x4* self, QMatrix4x4* other ```
QMatrix4x4* q_matrix4x4_operator_minus_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator*=)
///
/// ``` QMatrix4x4* self, QMatrix4x4* other ```
QMatrix4x4* q_matrix4x4_operator_multiply_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator*=)
///
/// ``` QMatrix4x4* self, float factor ```
QMatrix4x4* q_matrix4x4_operator_multiply_assign_with_factor(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator/=)
///
/// ``` QMatrix4x4* self, float divisor ```
QMatrix4x4* q_matrix4x4_operator_divide_assign(void* self, float divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator==)
///
/// ``` QMatrix4x4* self, QMatrix4x4* other ```
bool q_matrix4x4_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator!=)
///
/// ``` QMatrix4x4* self, QMatrix4x4* other ```
bool q_matrix4x4_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
///
/// ``` QMatrix4x4* self, QVector3D* vector ```
void q_matrix4x4_scale(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
///
/// ``` QMatrix4x4* self, QVector3D* vector ```
void q_matrix4x4_translate(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
///
/// ``` QMatrix4x4* self, float angle, QVector3D* vector ```
void q_matrix4x4_rotate(void* self, float angle, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
///
/// ``` QMatrix4x4* self, float x, float y ```
void q_matrix4x4_scale2(void* self, float x, float y);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
///
/// ``` QMatrix4x4* self, float x, float y, float z ```
void q_matrix4x4_scale3(void* self, float x, float y, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
///
/// ``` QMatrix4x4* self, float factor ```
void q_matrix4x4_scale_with_factor(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
///
/// ``` QMatrix4x4* self, float x, float y ```
void q_matrix4x4_translate2(void* self, float x, float y);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
///
/// ``` QMatrix4x4* self, float x, float y, float z ```
void q_matrix4x4_translate3(void* self, float x, float y, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
///
/// ``` QMatrix4x4* self, float angle, float x, float y ```
void q_matrix4x4_rotate2(void* self, float angle, float x, float y);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
///
/// ``` QMatrix4x4* self, QQuaternion* quaternion ```
void q_matrix4x4_rotate_with_quaternion(void* self, void* quaternion);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
///
/// ``` QMatrix4x4* self, QRect* rect ```
void q_matrix4x4_ortho(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
///
/// ``` QMatrix4x4* self, QRectF* rect ```
void q_matrix4x4_ortho_with_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
///
/// ``` QMatrix4x4* self, float left, float right, float bottom, float top, float nearPlane, float farPlane ```
void q_matrix4x4_ortho2(void* self, float left, float right, float bottom, float top, float nearPlane, float farPlane);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#frustum)
///
/// ``` QMatrix4x4* self, float left, float right, float bottom, float top, float nearPlane, float farPlane ```
void q_matrix4x4_frustum(void* self, float left, float right, float bottom, float top, float nearPlane, float farPlane);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#perspective)
///
/// ``` QMatrix4x4* self, float verticalAngle, float aspectRatio, float nearPlane, float farPlane ```
void q_matrix4x4_perspective(void* self, float verticalAngle, float aspectRatio, float nearPlane, float farPlane);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#lookAt)
///
/// ``` QMatrix4x4* self, QVector3D* eye, QVector3D* center, QVector3D* up ```
void q_matrix4x4_look_at(void* self, void* eye, void* center, void* up);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
///
/// ``` QMatrix4x4* self, QRectF* rect ```
void q_matrix4x4_viewport(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
///
/// ``` QMatrix4x4* self, float left, float bottom, float width, float height ```
void q_matrix4x4_viewport2(void* self, float left, float bottom, float width, float height);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#flipCoordinates)
///
/// ``` QMatrix4x4* self ```
void q_matrix4x4_flip_coordinates(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#copyDataTo)
///
/// ``` QMatrix4x4* self, float* values ```
void q_matrix4x4_copy_data_to(void* self, float* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#toTransform)
///
/// ``` QMatrix4x4* self ```
QTransform* q_matrix4x4_to_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#toTransform)
///
/// ``` QMatrix4x4* self, float distanceToPlane ```
QTransform* q_matrix4x4_to_transform_with_distance_to_plane(void* self, float distanceToPlane);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
///
/// ``` QMatrix4x4* self, QPoint* point ```
QPoint* q_matrix4x4_map(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
///
/// ``` QMatrix4x4* self, QPointF* point ```
QPointF* q_matrix4x4_map_with_point(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
///
/// ``` QMatrix4x4* self, QVector3D* point ```
QVector3D* q_matrix4x4_map2(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#mapVector)
///
/// ``` QMatrix4x4* self, QVector3D* vector ```
QVector3D* q_matrix4x4_map_vector(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
///
/// ``` QMatrix4x4* self, QVector4D* point ```
QVector4D* q_matrix4x4_map3(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#mapRect)
///
/// ``` QMatrix4x4* self, QRect* rect ```
QRect* q_matrix4x4_map_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#mapRect)
///
/// ``` QMatrix4x4* self, QRectF* rect ```
QRectF* q_matrix4x4_map_rect_with_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#data)
///
/// ``` QMatrix4x4* self ```
float* q_matrix4x4_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#data)
///
/// ``` QMatrix4x4* self ```
const float* q_matrix4x4_data2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#constData)
///
/// ``` QMatrix4x4* self ```
const float* q_matrix4x4_const_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#optimize)
///
/// ``` QMatrix4x4* self ```
void q_matrix4x4_optimize(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#operator QVariant)
///
/// ``` QMatrix4x4* self ```
QVariant* q_matrix4x4_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#projectedRotate)
///
/// ``` QMatrix4x4* self, float angle, float x, float y, float z ```
void q_matrix4x4_projected_rotate(void* self, float angle, float x, float y, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#flags)
///
/// ``` QMatrix4x4* self ```
int64_t q_matrix4x4_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#inverted)
///
/// ``` QMatrix4x4* self, bool* invertible ```
QMatrix4x4* q_matrix4x4_inverted1(void* self, bool* invertible);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
///
/// ``` QMatrix4x4* self, float angle, float x, float y, float z ```
void q_matrix4x4_rotate4(void* self, float angle, float x, float y, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
///
/// ``` QMatrix4x4* self, float left, float bottom, float width, float height, float nearPlane ```
void q_matrix4x4_viewport5(void* self, float left, float bottom, float width, float height, float nearPlane);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
///
/// ``` QMatrix4x4* self, float left, float bottom, float width, float height, float nearPlane, float farPlane ```
void q_matrix4x4_viewport6(void* self, float left, float bottom, float width, float height, float nearPlane, float farPlane);

/// [Qt documentation](https://doc.qt.io/qt-6/qmatrix4x4.html#dtor.QMatrix4x4)
///
/// Delete this object from C++ memory.
///
/// ``` QMatrix4x4* self ```
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

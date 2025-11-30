#pragma once
#ifndef SRC_QT6C_LIBQMATRIX4X4_H
#define SRC_QT6C_LIBQMATRIX4X4_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qmatrix4x4.html

/// q_matrix4x4_new constructs a new QMatrix4x4 object.
///
/// @param other QMatrix4x4*
QMatrix4x4* q_matrix4x4_new(void* other);

/// q_matrix4x4_new2 constructs a new QMatrix4x4 object and invalidates the source QMatrix4x4 object.
///
/// @param other QMatrix4x4*
QMatrix4x4* q_matrix4x4_new2(void* other);

/// q_matrix4x4_new3 constructs a new QMatrix4x4 object.
///
QMatrix4x4* q_matrix4x4_new3();

/// q_matrix4x4_new4 constructs a new QMatrix4x4 object.
///
/// @param param1 enum Qt__Initialization
QMatrix4x4* q_matrix4x4_new4(int32_t param1);

/// q_matrix4x4_new5 constructs a new QMatrix4x4 object.
///
/// @param values float*
QMatrix4x4* q_matrix4x4_new5(float* values);

/// q_matrix4x4_new6 constructs a new QMatrix4x4 object.
///
/// @param m11 float
/// @param m12 float
/// @param m13 float
/// @param m14 float
/// @param m21 float
/// @param m22 float
/// @param m23 float
/// @param m24 float
/// @param m31 float
/// @param m32 float
/// @param m33 float
/// @param m34 float
/// @param m41 float
/// @param m42 float
/// @param m43 float
/// @param m44 float
QMatrix4x4* q_matrix4x4_new6(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);

/// q_matrix4x4_new7 constructs a new QMatrix4x4 object.
///
/// @param values float*
/// @param cols int
/// @param rows int
QMatrix4x4* q_matrix4x4_new7(float* values, int cols, int rows);

/// q_matrix4x4_new8 constructs a new QMatrix4x4 object.
///
/// @param transform QTransform*
QMatrix4x4* q_matrix4x4_new8(void* transform);

/// q_matrix4x4_new9 constructs a new QMatrix4x4 object.
///
/// @param param1 QMatrix4x4*
QMatrix4x4* q_matrix4x4_new9(void* param1);

/// q_matrix4x4_copy_assign shallow copies `other` into `self`.
///
/// @param self QMatrix4x4*
/// @param other QMatrix4x4*
void q_matrix4x4_copy_assign(void* self, void* other);

/// q_matrix4x4_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMatrix4x4*
/// @param other QMatrix4x4*
void q_matrix4x4_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-28-29)
///
/// @param self QMatrix4x4*
/// @param row int
/// @param column int
const float* q_matrix4x4_operator_call(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-28-29)
///
/// @param self QMatrix4x4*
/// @param row int
/// @param column int
float* q_matrix4x4_operator_call2(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#column)
///
/// @param self QMatrix4x4*
/// @param index int
QVector4D* q_matrix4x4_column(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#setColumn)
///
/// @param self QMatrix4x4*
/// @param index int
/// @param value QVector4D*
void q_matrix4x4_set_column(void* self, int index, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#row)
///
/// @param self QMatrix4x4*
/// @param index int
QVector4D* q_matrix4x4_row(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#setRow)
///
/// @param self QMatrix4x4*
/// @param index int
/// @param value QVector4D*
void q_matrix4x4_set_row(void* self, int index, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#isAffine)
///
/// @param self QMatrix4x4*
bool q_matrix4x4_is_affine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#isIdentity)
///
/// @param self QMatrix4x4*
bool q_matrix4x4_is_identity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#setToIdentity)
///
/// @param self QMatrix4x4*
void q_matrix4x4_set_to_identity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#fill)
///
/// @param self QMatrix4x4*
/// @param value float
void q_matrix4x4_fill(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#determinant)
///
/// @param self QMatrix4x4*
double q_matrix4x4_determinant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#inverted)
///
/// @param self QMatrix4x4*
QMatrix4x4* q_matrix4x4_inverted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#transposed)
///
/// @param self QMatrix4x4*
QMatrix4x4* q_matrix4x4_transposed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2b-eq)
///
/// @param self QMatrix4x4*
/// @param other QMatrix4x4*
QMatrix4x4* q_matrix4x4_operator_plus_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator--eq)
///
/// @param self QMatrix4x4*
/// @param other QMatrix4x4*
QMatrix4x4* q_matrix4x4_operator_minus_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2a-eq)
///
/// @param self QMatrix4x4*
/// @param other QMatrix4x4*
QMatrix4x4* q_matrix4x4_operator_multiply_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2a-eq)
///
/// @param self QMatrix4x4*
/// @param factor float
QMatrix4x4* q_matrix4x4_operator_multiply_assign2(void* self, float factor);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-2f-eq)
///
/// @param self QMatrix4x4*
/// @param divisor float
QMatrix4x4* q_matrix4x4_operator_divide_assign(void* self, float divisor);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-eq-eq)
///
/// @param self QMatrix4x4*
/// @param other QMatrix4x4*
bool q_matrix4x4_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator-not-eq)
///
/// @param self QMatrix4x4*
/// @param other QMatrix4x4*
bool q_matrix4x4_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
///
/// @param self QMatrix4x4*
/// @param vector QVector3D*
void q_matrix4x4_scale(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
///
/// @param self QMatrix4x4*
/// @param vector QVector3D*
void q_matrix4x4_translate(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
///
/// @param self QMatrix4x4*
/// @param angle float
/// @param vector QVector3D*
void q_matrix4x4_rotate(void* self, float angle, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
///
/// @param self QMatrix4x4*
/// @param x float
/// @param y float
void q_matrix4x4_scale2(void* self, float x, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
///
/// @param self QMatrix4x4*
/// @param x float
/// @param y float
/// @param z float
void q_matrix4x4_scale3(void* self, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#scale)
///
/// @param self QMatrix4x4*
/// @param factor float
void q_matrix4x4_scale4(void* self, float factor);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
///
/// @param self QMatrix4x4*
/// @param x float
/// @param y float
void q_matrix4x4_translate2(void* self, float x, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#translate)
///
/// @param self QMatrix4x4*
/// @param x float
/// @param y float
/// @param z float
void q_matrix4x4_translate3(void* self, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
///
/// @param self QMatrix4x4*
/// @param angle float
/// @param x float
/// @param y float
void q_matrix4x4_rotate2(void* self, float angle, float x, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
///
/// @param self QMatrix4x4*
/// @param quaternion QQuaternion*
void q_matrix4x4_rotate3(void* self, void* quaternion);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
///
/// @param self QMatrix4x4*
/// @param rect QRect*
void q_matrix4x4_ortho(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
///
/// @param self QMatrix4x4*
/// @param rect QRectF*
void q_matrix4x4_ortho2(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#ortho)
///
/// @param self QMatrix4x4*
/// @param left float
/// @param right float
/// @param bottom float
/// @param top float
/// @param nearPlane float
/// @param farPlane float
void q_matrix4x4_ortho3(void* self, float left, float right, float bottom, float top, float nearPlane, float farPlane);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#frustum)
///
/// @param self QMatrix4x4*
/// @param left float
/// @param right float
/// @param bottom float
/// @param top float
/// @param nearPlane float
/// @param farPlane float
void q_matrix4x4_frustum(void* self, float left, float right, float bottom, float top, float nearPlane, float farPlane);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#perspective)
///
/// @param self QMatrix4x4*
/// @param verticalAngle float
/// @param aspectRatio float
/// @param nearPlane float
/// @param farPlane float
void q_matrix4x4_perspective(void* self, float verticalAngle, float aspectRatio, float nearPlane, float farPlane);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#lookAt)
///
/// @param self QMatrix4x4*
/// @param eye QVector3D*
/// @param center QVector3D*
/// @param up QVector3D*
void q_matrix4x4_look_at(void* self, void* eye, void* center, void* up);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
///
/// @param self QMatrix4x4*
/// @param rect QRectF*
void q_matrix4x4_viewport(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
///
/// @param self QMatrix4x4*
/// @param left float
/// @param bottom float
/// @param width float
/// @param height float
void q_matrix4x4_viewport2(void* self, float left, float bottom, float width, float height);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#flipCoordinates)
///
/// @param self QMatrix4x4*
void q_matrix4x4_flip_coordinates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#copyDataTo)
///
/// @param self QMatrix4x4*
/// @param values float*
void q_matrix4x4_copy_data_to(void* self, float* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#toTransform)
///
/// @param self QMatrix4x4*
QTransform* q_matrix4x4_to_transform(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#toTransform)
///
/// @param self QMatrix4x4*
/// @param distanceToPlane float
QTransform* q_matrix4x4_to_transform2(void* self, float distanceToPlane);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
///
/// @param self QMatrix4x4*
/// @param point QPoint*
QPoint* q_matrix4x4_map(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
///
/// @param self QMatrix4x4*
/// @param point QPointF*
QPointF* q_matrix4x4_map2(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
///
/// @param self QMatrix4x4*
/// @param point QVector3D*
QVector3D* q_matrix4x4_map3(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#mapVector)
///
/// @param self QMatrix4x4*
/// @param vector QVector3D*
QVector3D* q_matrix4x4_map_vector(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#map)
///
/// @param self QMatrix4x4*
/// @param point QVector4D*
QVector4D* q_matrix4x4_map4(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#mapRect)
///
/// @param self QMatrix4x4*
/// @param rect QRect*
QRect* q_matrix4x4_map_rect(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#mapRect)
///
/// @param self QMatrix4x4*
/// @param rect QRectF*
QRectF* q_matrix4x4_map_rect2(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#data)
///
/// @param self QMatrix4x4*
float* q_matrix4x4_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#data)
///
/// @param self QMatrix4x4*
const float* q_matrix4x4_data2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#constData)
///
/// @param self QMatrix4x4*
const float* q_matrix4x4_const_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#optimize)
///
/// @param self QMatrix4x4*
void q_matrix4x4_optimize(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#operator)
///
/// @param self QMatrix4x4*
QVariant* q_matrix4x4_to_q_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#projectedRotate)
///
/// @param self QMatrix4x4*
/// @param angle float
/// @param x float
/// @param y float
/// @param z float
/// @param distanceToPlane float
void q_matrix4x4_projected_rotate(void* self, float angle, float x, float y, float z, float distanceToPlane);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#projectedRotate)
///
/// @param self QMatrix4x4*
/// @param angle float
/// @param x float
/// @param y float
/// @param z float
void q_matrix4x4_projected_rotate2(void* self, float angle, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#flags)
///
/// @param self QMatrix4x4*
///
/// @return flag of enum QMatrix4x4__Flag
int32_t q_matrix4x4_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#inverted)
///
/// @param self QMatrix4x4*
/// @param invertible bool*
QMatrix4x4* q_matrix4x4_inverted1(void* self, bool* invertible);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#rotate)
///
/// @param self QMatrix4x4*
/// @param angle float
/// @param x float
/// @param y float
/// @param z float
void q_matrix4x4_rotate4(void* self, float angle, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
///
/// @param self QMatrix4x4*
/// @param left float
/// @param bottom float
/// @param width float
/// @param height float
/// @param nearPlane float
void q_matrix4x4_viewport5(void* self, float left, float bottom, float width, float height, float nearPlane);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#viewport)
///
/// @param self QMatrix4x4*
/// @param left float
/// @param bottom float
/// @param width float
/// @param height float
/// @param nearPlane float
/// @param farPlane float
void q_matrix4x4_viewport6(void* self, float left, float bottom, float width, float height, float nearPlane, float farPlane);

/// [Upstream resources](https://doc.qt.io/qt-6/qmatrix4x4.html#dtor.QMatrix4x4)
///
/// Delete this object from C++ memory.
///
/// @param self QMatrix4x4*
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

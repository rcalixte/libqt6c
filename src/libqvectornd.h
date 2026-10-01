#pragma once
#ifndef LIBQVECTORND_H
#define LIBQVECTORND_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html)

/// q_vector2d_new constructs a new QVector2D object.
///
/// @param other QVector2D*
///
QVector2D* q_vector2d_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html)

/// q_vector2d_new2 constructs a new QVector2D object and invalidates the source QVector2D object.
///
/// @param other QVector2D*
///
QVector2D* q_vector2d_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html)

/// q_vector2d_new3 constructs a new QVector2D object.
///
QVector2D* q_vector2d_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html)

/// q_vector2d_new4 constructs a new QVector2D object.
///
/// @param param1 enum Qt__Initialization
///
QVector2D* q_vector2d_new4(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html)

/// q_vector2d_new5 constructs a new QVector2D object.
///
/// @param xpos float
/// @param ypos float
///
QVector2D* q_vector2d_new5(float xpos, float ypos);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html)

/// q_vector2d_new6 constructs a new QVector2D object.
///
/// @param point QPoint*
///
QVector2D* q_vector2d_new6(void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html)

/// q_vector2d_new7 constructs a new QVector2D object.
///
/// @param point QPointF*
///
QVector2D* q_vector2d_new7(void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html)

/// q_vector2d_new8 constructs a new QVector2D object.
///
/// @param vector QVector3D*
///
QVector2D* q_vector2d_new8(void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html)

/// q_vector2d_new9 constructs a new QVector2D object.
///
/// @param vector QVector4D*
///
QVector2D* q_vector2d_new9(void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html)

/// q_vector2d_new10 constructs a new QVector2D object.
///
/// @param param1 QVector2D*
///
QVector2D* q_vector2d_new10(const void* param1);

/// q_vector2d_copy_assign shallow copies `other` into `self`.
///
/// @param self QVector2D*
/// @param other QVector2D*
///
void q_vector2d_copy_assign(void* self, void* other);

/// q_vector2d_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QVector2D*
/// @param other QVector2D*
///
void q_vector2d_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#isNull)
///
/// @param self const QVector2D*
///
bool q_vector2d_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#x)
///
/// @param self const QVector2D*
///
float q_vector2d_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#y)
///
/// @param self const QVector2D*
///
float q_vector2d_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#setX)
///
/// @param self QVector2D*
/// @param x float
///
void q_vector2d_set_x(void* self, float x);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#setY)
///
/// @param self QVector2D*
/// @param y float
///
void q_vector2d_set_y(void* self, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-5b-5d)
///
/// @param self QVector2D*
/// @param i int
///
float* q_vector2d_operator_subscript(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-5b-5d)
///
/// @param self const QVector2D*
/// @param i int
///
float q_vector2d_operator_subscript2(const void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#length)
///
/// @param self const QVector2D*
///
float q_vector2d_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#lengthSquared)
///
/// @param self const QVector2D*
///
float q_vector2d_length_squared(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#normalized)
///
/// @param self const QVector2D*
///
QVector2D* q_vector2d_normalized(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#normalize)
///
/// @param self QVector2D*
///
void q_vector2d_normalize(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#distanceToPoint)
///
/// @param self const QVector2D*
/// @param point QVector2D*
///
float q_vector2d_distance_to_point(const void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#distanceToLine)
///
/// @param self const QVector2D*
/// @param point QVector2D*
/// @param direction QVector2D*
///
float q_vector2d_distance_to_line(const void* self, void* point, void* direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2b-eq)
///
/// @param self QVector2D*
/// @param vector QVector2D*
///
QVector2D* q_vector2d_operator_plus_assign(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator--eq)
///
/// @param self QVector2D*
/// @param vector QVector2D*
///
QVector2D* q_vector2d_operator_minus_assign(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2a-eq)
///
/// @param self QVector2D*
/// @param factor float
///
QVector2D* q_vector2d_operator_multiply_assign(void* self, float factor);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2a-eq)
///
/// @param self QVector2D*
/// @param vector QVector2D*
///
QVector2D* q_vector2d_operator_multiply_assign2(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2f-eq)
///
/// @param self QVector2D*
/// @param divisor float
///
QVector2D* q_vector2d_operator_divide_assign(void* self, float divisor);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-2f-eq)
///
/// @param self QVector2D*
/// @param vector QVector2D*
///
QVector2D* q_vector2d_operator_divide_assign2(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#dotProduct)
///
/// @param v1 QVector2D*
/// @param v2 QVector2D*
///
float q_vector2d_dot_product(void* v1, void* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toVector3D)
///
/// @param self const QVector2D*
///
QVector3D* q_vector2d_to_vector3_d(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toVector4D)
///
/// @param self const QVector2D*
///
QVector4D* q_vector2d_to_vector4_d(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toPoint)
///
/// @param self const QVector2D*
///
QPoint* q_vector2d_to_point(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toPointF)
///
/// @param self const QVector2D*
///
QPointF* q_vector2d_to_point_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator-QVariant)
///
/// @param self const QVector2D*
///
QVariant* q_vector2d_to_q_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#dtor.QVector2D)
///
/// Delete this object from C++ memory.
///
/// @param self QVector2D*
///
void q_vector2d_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html)

/// q_vector3d_new constructs a new QVector3D object.
///
/// @param other QVector3D*
///
QVector3D* q_vector3d_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html)

/// q_vector3d_new2 constructs a new QVector3D object and invalidates the source QVector3D object.
///
/// @param other QVector3D*
///
QVector3D* q_vector3d_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html)

/// q_vector3d_new3 constructs a new QVector3D object.
///
QVector3D* q_vector3d_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html)

/// q_vector3d_new4 constructs a new QVector3D object.
///
/// @param param1 enum Qt__Initialization
///
QVector3D* q_vector3d_new4(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html)

/// q_vector3d_new5 constructs a new QVector3D object.
///
/// @param xpos float
/// @param ypos float
/// @param zpos float
///
QVector3D* q_vector3d_new5(float xpos, float ypos, float zpos);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html)

/// q_vector3d_new6 constructs a new QVector3D object.
///
/// @param point QPoint*
///
QVector3D* q_vector3d_new6(void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html)

/// q_vector3d_new7 constructs a new QVector3D object.
///
/// @param point QPointF*
///
QVector3D* q_vector3d_new7(void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html)

/// q_vector3d_new8 constructs a new QVector3D object.
///
/// @param vector QVector2D*
///
QVector3D* q_vector3d_new8(void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html)

/// q_vector3d_new9 constructs a new QVector3D object.
///
/// @param vector QVector2D*
/// @param zpos float
///
QVector3D* q_vector3d_new9(void* vector, float zpos);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html)

/// q_vector3d_new10 constructs a new QVector3D object.
///
/// @param vector QVector4D*
///
QVector3D* q_vector3d_new10(void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html)

/// q_vector3d_new11 constructs a new QVector3D object.
///
/// @param param1 QVector3D*
///
QVector3D* q_vector3d_new11(const void* param1);

/// q_vector3d_copy_assign shallow copies `other` into `self`.
///
/// @param self QVector3D*
/// @param other QVector3D*
///
void q_vector3d_copy_assign(void* self, void* other);

/// q_vector3d_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QVector3D*
/// @param other QVector3D*
///
void q_vector3d_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#isNull)
///
/// @param self const QVector3D*
///
bool q_vector3d_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#x)
///
/// @param self const QVector3D*
///
float q_vector3d_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#y)
///
/// @param self const QVector3D*
///
float q_vector3d_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#z)
///
/// @param self const QVector3D*
///
float q_vector3d_z(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#setX)
///
/// @param self QVector3D*
/// @param x float
///
void q_vector3d_set_x(void* self, float x);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#setY)
///
/// @param self QVector3D*
/// @param y float
///
void q_vector3d_set_y(void* self, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#setZ)
///
/// @param self QVector3D*
/// @param z float
///
void q_vector3d_set_z(void* self, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-5b-5d)
///
/// @param self QVector3D*
/// @param i int
///
float* q_vector3d_operator_subscript(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-5b-5d)
///
/// @param self const QVector3D*
/// @param i int
///
float q_vector3d_operator_subscript2(const void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#length)
///
/// @param self const QVector3D*
///
float q_vector3d_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#lengthSquared)
///
/// @param self const QVector3D*
///
float q_vector3d_length_squared(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normalized)
///
/// @param self const QVector3D*
///
QVector3D* q_vector3d_normalized(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normalize)
///
/// @param self QVector3D*
///
void q_vector3d_normalize(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2b-eq)
///
/// @param self QVector3D*
/// @param vector QVector3D*
///
QVector3D* q_vector3d_operator_plus_assign(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator--eq)
///
/// @param self QVector3D*
/// @param vector QVector3D*
///
QVector3D* q_vector3d_operator_minus_assign(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2a-eq)
///
/// @param self QVector3D*
/// @param factor float
///
QVector3D* q_vector3d_operator_multiply_assign(void* self, float factor);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2a-eq)
///
/// @param self QVector3D*
/// @param vector QVector3D*
///
QVector3D* q_vector3d_operator_multiply_assign2(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2f-eq)
///
/// @param self QVector3D*
/// @param divisor float
///
QVector3D* q_vector3d_operator_divide_assign(void* self, float divisor);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-2f-eq)
///
/// @param self QVector3D*
/// @param vector QVector3D*
///
QVector3D* q_vector3d_operator_divide_assign2(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#dotProduct)
///
/// @param v1 QVector3D*
/// @param v2 QVector3D*
///
float q_vector3d_dot_product(void* v1, void* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#crossProduct)
///
/// @param v1 QVector3D*
/// @param v2 QVector3D*
///
QVector3D* q_vector3d_cross_product(void* v1, void* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normal)
///
/// @param v1 QVector3D*
/// @param v2 QVector3D*
///
QVector3D* q_vector3d_normal(void* v1, void* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normal)
///
/// @param v1 QVector3D*
/// @param v2 QVector3D*
/// @param v3 QVector3D*
///
QVector3D* q_vector3d_normal2(void* v1, void* v2, void* v3);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#project)
///
/// @param self const QVector3D*
/// @param modelView QMatrix4x4*
/// @param projection QMatrix4x4*
/// @param viewport QRect*
///
QVector3D* q_vector3d_project(const void* self, const void* modelView, const void* projection, const void* viewport);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#unproject)
///
/// @param self const QVector3D*
/// @param modelView QMatrix4x4*
/// @param projection QMatrix4x4*
/// @param viewport QRect*
///
QVector3D* q_vector3d_unproject(const void* self, const void* modelView, const void* projection, const void* viewport);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToPoint)
///
/// @param self const QVector3D*
/// @param point QVector3D*
///
float q_vector3d_distance_to_point(const void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToPlane)
///
/// @param self const QVector3D*
/// @param plane QVector3D*
/// @param normal QVector3D*
///
float q_vector3d_distance_to_plane(const void* self, void* plane, void* normal);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToPlane)
///
/// @param self const QVector3D*
/// @param plane1 QVector3D*
/// @param plane2 QVector3D*
/// @param plane3 QVector3D*
///
float q_vector3d_distance_to_plane2(const void* self, void* plane1, void* plane2, void* plane3);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToLine)
///
/// @param self const QVector3D*
/// @param point QVector3D*
/// @param direction QVector3D*
///
float q_vector3d_distance_to_line(const void* self, void* point, void* direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toVector2D)
///
/// @param self const QVector3D*
///
QVector2D* q_vector3d_to_vector2_d(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toVector4D)
///
/// @param self const QVector3D*
///
QVector4D* q_vector3d_to_vector4_d(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toPoint)
///
/// @param self const QVector3D*
///
QPoint* q_vector3d_to_point(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toPointF)
///
/// @param self const QVector3D*
///
QPointF* q_vector3d_to_point_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator-QVariant)
///
/// @param self const QVector3D*
///
QVariant* q_vector3d_to_q_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#dtor.QVector3D)
///
/// Delete this object from C++ memory.
///
/// @param self QVector3D*
///
void q_vector3d_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)

/// q_vector4d_new constructs a new QVector4D object.
///
/// @param other QVector4D*
///
QVector4D* q_vector4d_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)

/// q_vector4d_new2 constructs a new QVector4D object and invalidates the source QVector4D object.
///
/// @param other QVector4D*
///
QVector4D* q_vector4d_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)

/// q_vector4d_new3 constructs a new QVector4D object.
///
QVector4D* q_vector4d_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)

/// q_vector4d_new4 constructs a new QVector4D object.
///
/// @param param1 enum Qt__Initialization
///
QVector4D* q_vector4d_new4(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)

/// q_vector4d_new5 constructs a new QVector4D object.
///
/// @param xpos float
/// @param ypos float
/// @param zpos float
/// @param wpos float
///
QVector4D* q_vector4d_new5(float xpos, float ypos, float zpos, float wpos);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)

/// q_vector4d_new6 constructs a new QVector4D object.
///
/// @param point QPoint*
///
QVector4D* q_vector4d_new6(void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)

/// q_vector4d_new7 constructs a new QVector4D object.
///
/// @param point QPointF*
///
QVector4D* q_vector4d_new7(void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)

/// q_vector4d_new8 constructs a new QVector4D object.
///
/// @param vector QVector2D*
///
QVector4D* q_vector4d_new8(void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)

/// q_vector4d_new9 constructs a new QVector4D object.
///
/// @param vector QVector2D*
/// @param zpos float
/// @param wpos float
///
QVector4D* q_vector4d_new9(void* vector, float zpos, float wpos);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)

/// q_vector4d_new10 constructs a new QVector4D object.
///
/// @param vector QVector3D*
///
QVector4D* q_vector4d_new10(void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)

/// q_vector4d_new11 constructs a new QVector4D object.
///
/// @param vector QVector3D*
/// @param wpos float
///
QVector4D* q_vector4d_new11(void* vector, float wpos);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html)

/// q_vector4d_new12 constructs a new QVector4D object.
///
/// @param param1 QVector4D*
///
QVector4D* q_vector4d_new12(const void* param1);

/// q_vector4d_copy_assign shallow copies `other` into `self`.
///
/// @param self QVector4D*
/// @param other QVector4D*
///
void q_vector4d_copy_assign(void* self, void* other);

/// q_vector4d_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QVector4D*
/// @param other QVector4D*
///
void q_vector4d_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#isNull)
///
/// @param self const QVector4D*
///
bool q_vector4d_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#x)
///
/// @param self const QVector4D*
///
float q_vector4d_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#y)
///
/// @param self const QVector4D*
///
float q_vector4d_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#z)
///
/// @param self const QVector4D*
///
float q_vector4d_z(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#w)
///
/// @param self const QVector4D*
///
float q_vector4d_w(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setX)
///
/// @param self QVector4D*
/// @param x float
///
void q_vector4d_set_x(void* self, float x);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setY)
///
/// @param self QVector4D*
/// @param y float
///
void q_vector4d_set_y(void* self, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setZ)
///
/// @param self QVector4D*
/// @param z float
///
void q_vector4d_set_z(void* self, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#setW)
///
/// @param self QVector4D*
/// @param w float
///
void q_vector4d_set_w(void* self, float w);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-5b-5d)
///
/// @param self QVector4D*
/// @param i int
///
float* q_vector4d_operator_subscript(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-5b-5d)
///
/// @param self const QVector4D*
/// @param i int
///
float q_vector4d_operator_subscript2(const void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#length)
///
/// @param self const QVector4D*
///
float q_vector4d_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#lengthSquared)
///
/// @param self const QVector4D*
///
float q_vector4d_length_squared(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#normalized)
///
/// @param self const QVector4D*
///
QVector4D* q_vector4d_normalized(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#normalize)
///
/// @param self QVector4D*
///
void q_vector4d_normalize(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2b-eq)
///
/// @param self QVector4D*
/// @param vector QVector4D*
///
QVector4D* q_vector4d_operator_plus_assign(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator--eq)
///
/// @param self QVector4D*
/// @param vector QVector4D*
///
QVector4D* q_vector4d_operator_minus_assign(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2a-eq)
///
/// @param self QVector4D*
/// @param factor float
///
QVector4D* q_vector4d_operator_multiply_assign(void* self, float factor);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2a-eq)
///
/// @param self QVector4D*
/// @param vector QVector4D*
///
QVector4D* q_vector4d_operator_multiply_assign2(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2f-eq)
///
/// @param self QVector4D*
/// @param divisor float
///
QVector4D* q_vector4d_operator_divide_assign(void* self, float divisor);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-2f-eq)
///
/// @param self QVector4D*
/// @param vector QVector4D*
///
QVector4D* q_vector4d_operator_divide_assign2(void* self, void* vector);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#dotProduct)
///
/// @param v1 QVector4D*
/// @param v2 QVector4D*
///
float q_vector4d_dot_product(void* v1, void* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector2D)
///
/// @param self const QVector4D*
///
QVector2D* q_vector4d_to_vector2_d(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector2DAffine)
///
/// @param self const QVector4D*
///
QVector2D* q_vector4d_to_vector2_d_affine(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector3D)
///
/// @param self const QVector4D*
///
QVector3D* q_vector4d_to_vector3_d(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector3DAffine)
///
/// @param self const QVector4D*
///
QVector3D* q_vector4d_to_vector3_d_affine(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toPoint)
///
/// @param self const QVector4D*
///
QPoint* q_vector4d_to_point(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toPointF)
///
/// @param self const QVector4D*
///
QPointF* q_vector4d_to_point_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator-QVariant)
///
/// @param self const QVector4D*
///
QVariant* q_vector4d_to_q_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#dtor.QVector4D)
///
/// Delete this object from C++ memory.
///
/// @param self QVector4D*
///
void q_vector4d_delete(void* self);

#endif

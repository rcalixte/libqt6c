#pragma once
#ifndef SRC_QT6C_LIBQVECTORND_H
#define SRC_QT6C_LIBQVECTORND_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html)

/// q_vector2d_new constructs a new QVector2D object.
///
/// @param other QVector2D*
///
QVector2D* q_vector2d_new(void* other);

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
QVector2D* q_vector2d_new10(void* param1);

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
/// @param self QVector2D*
///
bool q_vector2d_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#x)
///
/// @param self QVector2D*
///
float q_vector2d_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#y)
///
/// @param self QVector2D*
///
float q_vector2d_y(void* self);

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
/// @param self QVector2D*
/// @param i int
///
float q_vector2d_operator_subscript2(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#length)
///
/// @param self QVector2D*
///
float q_vector2d_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#lengthSquared)
///
/// @param self QVector2D*
///
float q_vector2d_length_squared(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#normalized)
///
/// @param self QVector2D*
///
QVector2D* q_vector2d_normalized(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#normalize)
///
/// @param self QVector2D*
///
void q_vector2d_normalize(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#distanceToPoint)
///
/// @param self QVector2D*
/// @param point QVector2D*
///
float q_vector2d_distance_to_point(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#distanceToLine)
///
/// @param self QVector2D*
/// @param point QVector2D*
/// @param direction QVector2D*
///
float q_vector2d_distance_to_line(void* self, void* point, void* direction);

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
/// @param self QVector2D*
///
QVector3D* q_vector2d_to_vector3_d(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toVector4D)
///
/// @param self QVector2D*
///
QVector4D* q_vector2d_to_vector4_d(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toPoint)
///
/// @param self QVector2D*
///
QPoint* q_vector2d_to_point(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#toPointF)
///
/// @param self QVector2D*
///
QPointF* q_vector2d_to_point_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector2d.html#operator)
///
/// @param self QVector2D*
///
QVariant* q_vector2d_to_q_variant(void* self);

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
QVector3D* q_vector3d_new(void* other);

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
QVector3D* q_vector3d_new11(void* param1);

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
/// @param self QVector3D*
///
bool q_vector3d_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#x)
///
/// @param self QVector3D*
///
float q_vector3d_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#y)
///
/// @param self QVector3D*
///
float q_vector3d_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#z)
///
/// @param self QVector3D*
///
float q_vector3d_z(void* self);

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
/// @param self QVector3D*
/// @param i int
///
float q_vector3d_operator_subscript2(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#length)
///
/// @param self QVector3D*
///
float q_vector3d_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#lengthSquared)
///
/// @param self QVector3D*
///
float q_vector3d_length_squared(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#normalized)
///
/// @param self QVector3D*
///
QVector3D* q_vector3d_normalized(void* self);

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
/// @param self QVector3D*
/// @param modelView QMatrix4x4*
/// @param projection QMatrix4x4*
/// @param viewport QRect*
///
QVector3D* q_vector3d_project(void* self, void* modelView, void* projection, void* viewport);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#unproject)
///
/// @param self QVector3D*
/// @param modelView QMatrix4x4*
/// @param projection QMatrix4x4*
/// @param viewport QRect*
///
QVector3D* q_vector3d_unproject(void* self, void* modelView, void* projection, void* viewport);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToPoint)
///
/// @param self QVector3D*
/// @param point QVector3D*
///
float q_vector3d_distance_to_point(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToPlane)
///
/// @param self QVector3D*
/// @param plane QVector3D*
/// @param normal QVector3D*
///
float q_vector3d_distance_to_plane(void* self, void* plane, void* normal);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToPlane)
///
/// @param self QVector3D*
/// @param plane1 QVector3D*
/// @param plane2 QVector3D*
/// @param plane3 QVector3D*
///
float q_vector3d_distance_to_plane2(void* self, void* plane1, void* plane2, void* plane3);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#distanceToLine)
///
/// @param self QVector3D*
/// @param point QVector3D*
/// @param direction QVector3D*
///
float q_vector3d_distance_to_line(void* self, void* point, void* direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toVector2D)
///
/// @param self QVector3D*
///
QVector2D* q_vector3d_to_vector2_d(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toVector4D)
///
/// @param self QVector3D*
///
QVector4D* q_vector3d_to_vector4_d(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toPoint)
///
/// @param self QVector3D*
///
QPoint* q_vector3d_to_point(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#toPointF)
///
/// @param self QVector3D*
///
QPointF* q_vector3d_to_point_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector3d.html#operator)
///
/// @param self QVector3D*
///
QVariant* q_vector3d_to_q_variant(void* self);

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
QVector4D* q_vector4d_new(void* other);

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
QVector4D* q_vector4d_new12(void* param1);

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
/// @param self QVector4D*
///
bool q_vector4d_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#x)
///
/// @param self QVector4D*
///
float q_vector4d_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#y)
///
/// @param self QVector4D*
///
float q_vector4d_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#z)
///
/// @param self QVector4D*
///
float q_vector4d_z(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#w)
///
/// @param self QVector4D*
///
float q_vector4d_w(void* self);

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
/// @param self QVector4D*
/// @param i int
///
float q_vector4d_operator_subscript2(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#length)
///
/// @param self QVector4D*
///
float q_vector4d_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#lengthSquared)
///
/// @param self QVector4D*
///
float q_vector4d_length_squared(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#normalized)
///
/// @param self QVector4D*
///
QVector4D* q_vector4d_normalized(void* self);

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
/// @param self QVector4D*
///
QVector2D* q_vector4d_to_vector2_d(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector2DAffine)
///
/// @param self QVector4D*
///
QVector2D* q_vector4d_to_vector2_d_affine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector3D)
///
/// @param self QVector4D*
///
QVector3D* q_vector4d_to_vector3_d(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toVector3DAffine)
///
/// @param self QVector4D*
///
QVector3D* q_vector4d_to_vector3_d_affine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toPoint)
///
/// @param self QVector4D*
///
QPoint* q_vector4d_to_point(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#toPointF)
///
/// @param self QVector4D*
///
QPointF* q_vector4d_to_point_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#operator)
///
/// @param self QVector4D*
///
QVariant* q_vector4d_to_q_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvector4d.html#dtor.QVector4D)
///
/// Delete this object from C++ memory.
///
/// @param self QVector4D*
///
void q_vector4d_delete(void* self);

#endif

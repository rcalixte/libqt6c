#pragma once
#ifndef SRCQT6C_LIBQVECTORND_H
#define SRCQT6C_LIBQVECTORND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qvector2d.html

/// q_vector2d_new constructs a new QVector2D object.
///
/// ``` QVector2D* other ```
QVector2D* q_vector2d_new(void* other);

/// q_vector2d_new2 constructs a new QVector2D object and invalidates the source QVector2D object.
///
/// ``` QVector2D* other ```
QVector2D* q_vector2d_new2(void* other);

/// q_vector2d_new3 constructs a new QVector2D object.
///
///
QVector2D* q_vector2d_new3();

/// q_vector2d_new4 constructs a new QVector2D object.
///
/// ``` enum Qt__Initialization param1 ```
QVector2D* q_vector2d_new4(int64_t param1);

/// q_vector2d_new5 constructs a new QVector2D object.
///
/// ``` float xpos, float ypos ```
QVector2D* q_vector2d_new5(float xpos, float ypos);

/// q_vector2d_new6 constructs a new QVector2D object.
///
/// ``` QPoint* point ```
QVector2D* q_vector2d_new6(void* point);

/// q_vector2d_new7 constructs a new QVector2D object.
///
/// ``` QPointF* point ```
QVector2D* q_vector2d_new7(void* point);

/// q_vector2d_new8 constructs a new QVector2D object.
///
/// ``` QVector3D* vector ```
QVector2D* q_vector2d_new8(void* vector);

/// q_vector2d_new9 constructs a new QVector2D object.
///
/// ``` QVector4D* vector ```
QVector2D* q_vector2d_new9(void* vector);

/// q_vector2d_new10 constructs a new QVector2D object.
///
/// ``` QVector2D* param1 ```
QVector2D* q_vector2d_new10(void* param1);

/// q_vector2d_copy_assign shallow copies `other` into `self`.
///
/// ``` QVector2D* self, QVector2D* other ```
void q_vector2d_copy_assign(void* self, void* other);

/// q_vector2d_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QVector2D* self, QVector2D* other ```
void q_vector2d_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#isNull)
///
/// ``` QVector2D* self ```
bool q_vector2d_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#x)
///
/// ``` QVector2D* self ```
float q_vector2d_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#y)
///
/// ``` QVector2D* self ```
float q_vector2d_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#setX)
///
/// ``` QVector2D* self, float x ```
void q_vector2d_set_x(void* self, float x);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#setY)
///
/// ``` QVector2D* self, float y ```
void q_vector2d_set_y(void* self, float y);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator[])
///
/// ``` QVector2D* self, int i ```
float q_vector2d_operator_subscript(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#length)
///
/// ``` QVector2D* self ```
float q_vector2d_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#lengthSquared)
///
/// ``` QVector2D* self ```
float q_vector2d_length_squared(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#normalized)
///
/// ``` QVector2D* self ```
QVector2D* q_vector2d_normalized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#normalize)
///
/// ``` QVector2D* self ```
void q_vector2d_normalize(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#distanceToPoint)
///
/// ``` QVector2D* self, QVector2D* point ```
float q_vector2d_distance_to_point(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#distanceToLine)
///
/// ``` QVector2D* self, QVector2D* point, QVector2D* direction ```
float q_vector2d_distance_to_line(void* self, void* point, void* direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator+=)
///
/// ``` QVector2D* self, QVector2D* vector ```
QVector2D* q_vector2d_operator_plus_assign(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator-=)
///
/// ``` QVector2D* self, QVector2D* vector ```
QVector2D* q_vector2d_operator_minus_assign(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator*=)
///
/// ``` QVector2D* self, float factor ```
QVector2D* q_vector2d_operator_multiply_assign(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator*=)
///
/// ``` QVector2D* self, QVector2D* vector ```
QVector2D* q_vector2d_operator_multiply_assign_with_vector(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator/=)
///
/// ``` QVector2D* self, float divisor ```
QVector2D* q_vector2d_operator_divide_assign(void* self, float divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator/=)
///
/// ``` QVector2D* self, QVector2D* vector ```
QVector2D* q_vector2d_operator_divide_assign_with_vector(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#dotProduct)
///
/// ``` QVector2D* v1, QVector2D* v2 ```
float q_vector2d_dot_product(void* v1, void* v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#toVector3D)
///
/// ``` QVector2D* self ```
QVector3D* q_vector2d_to_vector3_d(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#toVector4D)
///
/// ``` QVector2D* self ```
QVector4D* q_vector2d_to_vector4_d(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#toPoint)
///
/// ``` QVector2D* self ```
QPoint* q_vector2d_to_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#toPointF)
///
/// ``` QVector2D* self ```
QPointF* q_vector2d_to_point_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#operator QVariant)
///
/// ``` QVector2D* self ```
QVariant* q_vector2d_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector2d.html#dtor.QVector2D)
///
/// Delete this object from C++ memory.
///
/// ``` QVector2D* self ```
void q_vector2d_delete(void* self);

/// https://doc.qt.io/qt-6/qvector3d.html

/// q_vector3d_new constructs a new QVector3D object.
///
/// ``` QVector3D* other ```
QVector3D* q_vector3d_new(void* other);

/// q_vector3d_new2 constructs a new QVector3D object and invalidates the source QVector3D object.
///
/// ``` QVector3D* other ```
QVector3D* q_vector3d_new2(void* other);

/// q_vector3d_new3 constructs a new QVector3D object.
///
///
QVector3D* q_vector3d_new3();

/// q_vector3d_new4 constructs a new QVector3D object.
///
/// ``` enum Qt__Initialization param1 ```
QVector3D* q_vector3d_new4(int64_t param1);

/// q_vector3d_new5 constructs a new QVector3D object.
///
/// ``` float xpos, float ypos, float zpos ```
QVector3D* q_vector3d_new5(float xpos, float ypos, float zpos);

/// q_vector3d_new6 constructs a new QVector3D object.
///
/// ``` QPoint* point ```
QVector3D* q_vector3d_new6(void* point);

/// q_vector3d_new7 constructs a new QVector3D object.
///
/// ``` QPointF* point ```
QVector3D* q_vector3d_new7(void* point);

/// q_vector3d_new8 constructs a new QVector3D object.
///
/// ``` QVector2D* vector ```
QVector3D* q_vector3d_new8(void* vector);

/// q_vector3d_new9 constructs a new QVector3D object.
///
/// ``` QVector2D* vector, float zpos ```
QVector3D* q_vector3d_new9(void* vector, float zpos);

/// q_vector3d_new10 constructs a new QVector3D object.
///
/// ``` QVector4D* vector ```
QVector3D* q_vector3d_new10(void* vector);

/// q_vector3d_new11 constructs a new QVector3D object.
///
/// ``` QVector3D* param1 ```
QVector3D* q_vector3d_new11(void* param1);

/// q_vector3d_copy_assign shallow copies `other` into `self`.
///
/// ``` QVector3D* self, QVector3D* other ```
void q_vector3d_copy_assign(void* self, void* other);

/// q_vector3d_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QVector3D* self, QVector3D* other ```
void q_vector3d_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#isNull)
///
/// ``` QVector3D* self ```
bool q_vector3d_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#x)
///
/// ``` QVector3D* self ```
float q_vector3d_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#y)
///
/// ``` QVector3D* self ```
float q_vector3d_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#z)
///
/// ``` QVector3D* self ```
float q_vector3d_z(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#setX)
///
/// ``` QVector3D* self, float x ```
void q_vector3d_set_x(void* self, float x);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#setY)
///
/// ``` QVector3D* self, float y ```
void q_vector3d_set_y(void* self, float y);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#setZ)
///
/// ``` QVector3D* self, float z ```
void q_vector3d_set_z(void* self, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator[])
///
/// ``` QVector3D* self, int i ```
float q_vector3d_operator_subscript(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#length)
///
/// ``` QVector3D* self ```
float q_vector3d_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#lengthSquared)
///
/// ``` QVector3D* self ```
float q_vector3d_length_squared(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#normalized)
///
/// ``` QVector3D* self ```
QVector3D* q_vector3d_normalized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#normalize)
///
/// ``` QVector3D* self ```
void q_vector3d_normalize(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator+=)
///
/// ``` QVector3D* self, QVector3D* vector ```
QVector3D* q_vector3d_operator_plus_assign(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator-=)
///
/// ``` QVector3D* self, QVector3D* vector ```
QVector3D* q_vector3d_operator_minus_assign(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator*=)
///
/// ``` QVector3D* self, float factor ```
QVector3D* q_vector3d_operator_multiply_assign(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator*=)
///
/// ``` QVector3D* self, QVector3D* vector ```
QVector3D* q_vector3d_operator_multiply_assign_with_vector(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator/=)
///
/// ``` QVector3D* self, float divisor ```
QVector3D* q_vector3d_operator_divide_assign(void* self, float divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator/=)
///
/// ``` QVector3D* self, QVector3D* vector ```
QVector3D* q_vector3d_operator_divide_assign_with_vector(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#dotProduct)
///
/// ``` QVector3D* v1, QVector3D* v2 ```
float q_vector3d_dot_product(void* v1, void* v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#crossProduct)
///
/// ``` QVector3D* v1, QVector3D* v2 ```
QVector3D* q_vector3d_cross_product(void* v1, void* v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#normal)
///
/// ``` QVector3D* v1, QVector3D* v2 ```
QVector3D* q_vector3d_normal(void* v1, void* v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#normal)
///
/// ``` QVector3D* v1, QVector3D* v2, QVector3D* v3 ```
QVector3D* q_vector3d_normal2(void* v1, void* v2, void* v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#project)
///
/// ``` QVector3D* self, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport ```
QVector3D* q_vector3d_project(void* self, void* modelView, void* projection, void* viewport);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#unproject)
///
/// ``` QVector3D* self, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport ```
QVector3D* q_vector3d_unproject(void* self, void* modelView, void* projection, void* viewport);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#distanceToPoint)
///
/// ``` QVector3D* self, QVector3D* point ```
float q_vector3d_distance_to_point(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#distanceToPlane)
///
/// ``` QVector3D* self, QVector3D* plane, QVector3D* normal ```
float q_vector3d_distance_to_plane(void* self, void* plane, void* normal);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#distanceToPlane)
///
/// ``` QVector3D* self, QVector3D* plane1, QVector3D* plane2, QVector3D* plane3 ```
float q_vector3d_distance_to_plane2(void* self, void* plane1, void* plane2, void* plane3);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#distanceToLine)
///
/// ``` QVector3D* self, QVector3D* point, QVector3D* direction ```
float q_vector3d_distance_to_line(void* self, void* point, void* direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#toVector2D)
///
/// ``` QVector3D* self ```
QVector2D* q_vector3d_to_vector2_d(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#toVector4D)
///
/// ``` QVector3D* self ```
QVector4D* q_vector3d_to_vector4_d(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#toPoint)
///
/// ``` QVector3D* self ```
QPoint* q_vector3d_to_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#toPointF)
///
/// ``` QVector3D* self ```
QPointF* q_vector3d_to_point_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#operator QVariant)
///
/// ``` QVector3D* self ```
QVariant* q_vector3d_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector3d.html#dtor.QVector3D)
///
/// Delete this object from C++ memory.
///
/// ``` QVector3D* self ```
void q_vector3d_delete(void* self);

/// https://doc.qt.io/qt-6/qvector4d.html

/// q_vector4d_new constructs a new QVector4D object.
///
/// ``` QVector4D* other ```
QVector4D* q_vector4d_new(void* other);

/// q_vector4d_new2 constructs a new QVector4D object and invalidates the source QVector4D object.
///
/// ``` QVector4D* other ```
QVector4D* q_vector4d_new2(void* other);

/// q_vector4d_new3 constructs a new QVector4D object.
///
///
QVector4D* q_vector4d_new3();

/// q_vector4d_new4 constructs a new QVector4D object.
///
/// ``` enum Qt__Initialization param1 ```
QVector4D* q_vector4d_new4(int64_t param1);

/// q_vector4d_new5 constructs a new QVector4D object.
///
/// ``` float xpos, float ypos, float zpos, float wpos ```
QVector4D* q_vector4d_new5(float xpos, float ypos, float zpos, float wpos);

/// q_vector4d_new6 constructs a new QVector4D object.
///
/// ``` QPoint* point ```
QVector4D* q_vector4d_new6(void* point);

/// q_vector4d_new7 constructs a new QVector4D object.
///
/// ``` QPointF* point ```
QVector4D* q_vector4d_new7(void* point);

/// q_vector4d_new8 constructs a new QVector4D object.
///
/// ``` QVector2D* vector ```
QVector4D* q_vector4d_new8(void* vector);

/// q_vector4d_new9 constructs a new QVector4D object.
///
/// ``` QVector2D* vector, float zpos, float wpos ```
QVector4D* q_vector4d_new9(void* vector, float zpos, float wpos);

/// q_vector4d_new10 constructs a new QVector4D object.
///
/// ``` QVector3D* vector ```
QVector4D* q_vector4d_new10(void* vector);

/// q_vector4d_new11 constructs a new QVector4D object.
///
/// ``` QVector3D* vector, float wpos ```
QVector4D* q_vector4d_new11(void* vector, float wpos);

/// q_vector4d_new12 constructs a new QVector4D object.
///
/// ``` QVector4D* param1 ```
QVector4D* q_vector4d_new12(void* param1);

/// q_vector4d_copy_assign shallow copies `other` into `self`.
///
/// ``` QVector4D* self, QVector4D* other ```
void q_vector4d_copy_assign(void* self, void* other);

/// q_vector4d_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QVector4D* self, QVector4D* other ```
void q_vector4d_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#isNull)
///
/// ``` QVector4D* self ```
bool q_vector4d_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#x)
///
/// ``` QVector4D* self ```
float q_vector4d_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#y)
///
/// ``` QVector4D* self ```
float q_vector4d_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#z)
///
/// ``` QVector4D* self ```
float q_vector4d_z(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#w)
///
/// ``` QVector4D* self ```
float q_vector4d_w(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#setX)
///
/// ``` QVector4D* self, float x ```
void q_vector4d_set_x(void* self, float x);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#setY)
///
/// ``` QVector4D* self, float y ```
void q_vector4d_set_y(void* self, float y);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#setZ)
///
/// ``` QVector4D* self, float z ```
void q_vector4d_set_z(void* self, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#setW)
///
/// ``` QVector4D* self, float w ```
void q_vector4d_set_w(void* self, float w);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator[])
///
/// ``` QVector4D* self, int i ```
float q_vector4d_operator_subscript(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#length)
///
/// ``` QVector4D* self ```
float q_vector4d_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#lengthSquared)
///
/// ``` QVector4D* self ```
float q_vector4d_length_squared(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#normalized)
///
/// ``` QVector4D* self ```
QVector4D* q_vector4d_normalized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#normalize)
///
/// ``` QVector4D* self ```
void q_vector4d_normalize(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator+=)
///
/// ``` QVector4D* self, QVector4D* vector ```
QVector4D* q_vector4d_operator_plus_assign(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator-=)
///
/// ``` QVector4D* self, QVector4D* vector ```
QVector4D* q_vector4d_operator_minus_assign(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator*=)
///
/// ``` QVector4D* self, float factor ```
QVector4D* q_vector4d_operator_multiply_assign(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator*=)
///
/// ``` QVector4D* self, QVector4D* vector ```
QVector4D* q_vector4d_operator_multiply_assign_with_vector(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator/=)
///
/// ``` QVector4D* self, float divisor ```
QVector4D* q_vector4d_operator_divide_assign(void* self, float divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator/=)
///
/// ``` QVector4D* self, QVector4D* vector ```
QVector4D* q_vector4d_operator_divide_assign_with_vector(void* self, void* vector);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#dotProduct)
///
/// ``` QVector4D* v1, QVector4D* v2 ```
float q_vector4d_dot_product(void* v1, void* v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#toVector2D)
///
/// ``` QVector4D* self ```
QVector2D* q_vector4d_to_vector2_d(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#toVector2DAffine)
///
/// ``` QVector4D* self ```
QVector2D* q_vector4d_to_vector2_d_affine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#toVector3D)
///
/// ``` QVector4D* self ```
QVector3D* q_vector4d_to_vector3_d(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#toVector3DAffine)
///
/// ``` QVector4D* self ```
QVector3D* q_vector4d_to_vector3_d_affine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#toPoint)
///
/// ``` QVector4D* self ```
QPoint* q_vector4d_to_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#toPointF)
///
/// ``` QVector4D* self ```
QPointF* q_vector4d_to_point_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#operator QVariant)
///
/// ``` QVector4D* self ```
QVariant* q_vector4d_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvector4d.html#dtor.QVector4D)
///
/// Delete this object from C++ memory.
///
/// ``` QVector4D* self ```
void q_vector4d_delete(void* self);

#endif

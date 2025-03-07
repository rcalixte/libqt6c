#pragma once
#ifndef SRCQT6C_LIBQVECTORND_H
#define SRCQT6C_LIBQVECTORND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqmatrix4x4.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqvariant.h"

QVector2D* q_vector2d_new(void* other);
QVector2D* q_vector2d_new2(void* other);
QVector2D* q_vector2d_new3();
QVector2D* q_vector2d_new4(int64_t param1);
QVector2D* q_vector2d_new5(float xpos, float ypos);
QVector2D* q_vector2d_new6(void* point);
QVector2D* q_vector2d_new7(void* point);
QVector2D* q_vector2d_new8(void* vector);
QVector2D* q_vector2d_new9(void* vector);
QVector2D* q_vector2d_new10(void* param1);
void q_vector2d_copy_assign(void* self, void* other);
void q_vector2d_move_assign(void* self, void* other);
bool q_vector2d_is_null(void* self);
float q_vector2d_x(void* self);
float q_vector2d_y(void* self);
void q_vector2d_set_x(void* self, float x);
void q_vector2d_set_y(void* self, float y);
float q_vector2d_operator_subscript(void* self, int i);
float q_vector2d_length(void* self);
float q_vector2d_length_squared(void* self);
QVector2D* q_vector2d_normalized(void* self);
void q_vector2d_normalize(void* self);
float q_vector2d_distance_to_point(void* self, void* point);
float q_vector2d_distance_to_line(void* self, void* point, void* direction);
QVector2D* q_vector2d_operator_plus_assign(void* self, void* vector);
QVector2D* q_vector2d_operator_minus_assign(void* self, void* vector);
QVector2D* q_vector2d_operator_multiply_assign(void* self, float factor);
QVector2D* q_vector2d_operator_multiply_assign_with_vector(void* self, void* vector);
QVector2D* q_vector2d_operator_divide_assign(void* self, float divisor);
QVector2D* q_vector2d_operator_divide_assign_with_vector(void* self, void* vector);
float q_vector2d_dot_product(void* v1, void* v2);
QVector3D* q_vector2d_to_vector3_d(void* self);
QVector4D* q_vector2d_to_vector4_d(void* self);
QPoint* q_vector2d_to_point(void* self);
QPointF* q_vector2d_to_point_f(void* self);
QVariant* q_vector2d_to_q_variant(void* self);
void q_vector2d_delete(void* self);

QVector3D* q_vector3d_new(void* other);
QVector3D* q_vector3d_new2(void* other);
QVector3D* q_vector3d_new3();
QVector3D* q_vector3d_new4(int64_t param1);
QVector3D* q_vector3d_new5(float xpos, float ypos, float zpos);
QVector3D* q_vector3d_new6(void* point);
QVector3D* q_vector3d_new7(void* point);
QVector3D* q_vector3d_new8(void* vector);
QVector3D* q_vector3d_new9(void* vector, float zpos);
QVector3D* q_vector3d_new10(void* vector);
QVector3D* q_vector3d_new11(void* param1);
void q_vector3d_copy_assign(void* self, void* other);
void q_vector3d_move_assign(void* self, void* other);
bool q_vector3d_is_null(void* self);
float q_vector3d_x(void* self);
float q_vector3d_y(void* self);
float q_vector3d_z(void* self);
void q_vector3d_set_x(void* self, float x);
void q_vector3d_set_y(void* self, float y);
void q_vector3d_set_z(void* self, float z);
float q_vector3d_operator_subscript(void* self, int i);
float q_vector3d_length(void* self);
float q_vector3d_length_squared(void* self);
QVector3D* q_vector3d_normalized(void* self);
void q_vector3d_normalize(void* self);
QVector3D* q_vector3d_operator_plus_assign(void* self, void* vector);
QVector3D* q_vector3d_operator_minus_assign(void* self, void* vector);
QVector3D* q_vector3d_operator_multiply_assign(void* self, float factor);
QVector3D* q_vector3d_operator_multiply_assign_with_vector(void* self, void* vector);
QVector3D* q_vector3d_operator_divide_assign(void* self, float divisor);
QVector3D* q_vector3d_operator_divide_assign_with_vector(void* self, void* vector);
float q_vector3d_dot_product(void* v1, void* v2);
QVector3D* q_vector3d_cross_product(void* v1, void* v2);
QVector3D* q_vector3d_normal(void* v1, void* v2);
QVector3D* q_vector3d_normal2(void* v1, void* v2, void* v3);
QVector3D* q_vector3d_project(void* self, void* modelView, void* projection, void* viewport);
QVector3D* q_vector3d_unproject(void* self, void* modelView, void* projection, void* viewport);
float q_vector3d_distance_to_point(void* self, void* point);
float q_vector3d_distance_to_plane(void* self, void* plane, void* normal);
float q_vector3d_distance_to_plane2(void* self, void* plane1, void* plane2, void* plane3);
float q_vector3d_distance_to_line(void* self, void* point, void* direction);
QVector2D* q_vector3d_to_vector2_d(void* self);
QVector4D* q_vector3d_to_vector4_d(void* self);
QPoint* q_vector3d_to_point(void* self);
QPointF* q_vector3d_to_point_f(void* self);
QVariant* q_vector3d_to_q_variant(void* self);
void q_vector3d_delete(void* self);

QVector4D* q_vector4d_new(void* other);
QVector4D* q_vector4d_new2(void* other);
QVector4D* q_vector4d_new3();
QVector4D* q_vector4d_new4(int64_t param1);
QVector4D* q_vector4d_new5(float xpos, float ypos, float zpos, float wpos);
QVector4D* q_vector4d_new6(void* point);
QVector4D* q_vector4d_new7(void* point);
QVector4D* q_vector4d_new8(void* vector);
QVector4D* q_vector4d_new9(void* vector, float zpos, float wpos);
QVector4D* q_vector4d_new10(void* vector);
QVector4D* q_vector4d_new11(void* vector, float wpos);
QVector4D* q_vector4d_new12(void* param1);
void q_vector4d_copy_assign(void* self, void* other);
void q_vector4d_move_assign(void* self, void* other);
bool q_vector4d_is_null(void* self);
float q_vector4d_x(void* self);
float q_vector4d_y(void* self);
float q_vector4d_z(void* self);
float q_vector4d_w(void* self);
void q_vector4d_set_x(void* self, float x);
void q_vector4d_set_y(void* self, float y);
void q_vector4d_set_z(void* self, float z);
void q_vector4d_set_w(void* self, float w);
float q_vector4d_operator_subscript(void* self, int i);
float q_vector4d_length(void* self);
float q_vector4d_length_squared(void* self);
QVector4D* q_vector4d_normalized(void* self);
void q_vector4d_normalize(void* self);
QVector4D* q_vector4d_operator_plus_assign(void* self, void* vector);
QVector4D* q_vector4d_operator_minus_assign(void* self, void* vector);
QVector4D* q_vector4d_operator_multiply_assign(void* self, float factor);
QVector4D* q_vector4d_operator_multiply_assign_with_vector(void* self, void* vector);
QVector4D* q_vector4d_operator_divide_assign(void* self, float divisor);
QVector4D* q_vector4d_operator_divide_assign_with_vector(void* self, void* vector);
float q_vector4d_dot_product(void* v1, void* v2);
QVector2D* q_vector4d_to_vector2_d(void* self);
QVector2D* q_vector4d_to_vector2_d_affine(void* self);
QVector3D* q_vector4d_to_vector3_d(void* self);
QVector3D* q_vector4d_to_vector3_d_affine(void* self);
QPoint* q_vector4d_to_point(void* self);
QPointF* q_vector4d_to_point_f(void* self);
QVariant* q_vector4d_to_q_variant(void* self);
void q_vector4d_delete(void* self);

#endif

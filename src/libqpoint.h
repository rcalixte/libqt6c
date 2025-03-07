#pragma once
#ifndef SRCQT6C_LIBQPOINT_H
#define SRCQT6C_LIBQPOINT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QPoint* q_point_new(void* other);
QPoint* q_point_new2(void* other);
QPoint* q_point_new3();
QPoint* q_point_new4(int xpos, int ypos);
QPoint* q_point_new5(void* param1);
void q_point_copy_assign(void* self, void* other);
void q_point_move_assign(void* self, void* other);
bool q_point_is_null(void* self);
int32_t q_point_x(void* self);
int32_t q_point_y(void* self);
void q_point_set_x(void* self, int x);
void q_point_set_y(void* self, int y);
int32_t q_point_manhattan_length(void* self);
QPoint* q_point_transposed(void* self);
QPoint* q_point_operator_plus_assign(void* self, void* p);
QPoint* q_point_operator_minus_assign(void* self, void* p);
QPoint* q_point_operator_multiply_assign(void* self, float factor);
QPoint* q_point_operator_multiply_assign_with_factor(void* self, double factor);
QPoint* q_point_operator_multiply_assign2(void* self, int factor);
QPoint* q_point_operator_divide_assign(void* self, double divisor);
int32_t q_point_dot_product(void* p1, void* p2);
QPointF* q_point_to_point_f(void* self);
void q_point_delete(void* self);

QPointF* q_pointf_new(void* other);
QPointF* q_pointf_new2(void* other);
QPointF* q_pointf_new3();
QPointF* q_pointf_new4(void* p);
QPointF* q_pointf_new5(double xpos, double ypos);
QPointF* q_pointf_new6(void* param1);
void q_pointf_copy_assign(void* self, void* other);
void q_pointf_move_assign(void* self, void* other);
double q_pointf_manhattan_length(void* self);
bool q_pointf_is_null(void* self);
double q_pointf_x(void* self);
double q_pointf_y(void* self);
void q_pointf_set_x(void* self, double x);
void q_pointf_set_y(void* self, double y);
QPointF* q_pointf_transposed(void* self);
QPointF* q_pointf_operator_plus_assign(void* self, void* p);
QPointF* q_pointf_operator_minus_assign(void* self, void* p);
QPointF* q_pointf_operator_multiply_assign(void* self, double c);
QPointF* q_pointf_operator_divide_assign(void* self, double c);
double q_pointf_dot_product(void* p1, void* p2);
QPoint* q_pointf_to_point(void* self);
void q_pointf_delete(void* self);

#endif

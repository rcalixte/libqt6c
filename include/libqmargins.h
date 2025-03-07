#pragma once
#ifndef SRCQT6C_LIBQMARGINS_H
#define SRCQT6C_LIBQMARGINS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QMargins* q_margins_new(void* other);
QMargins* q_margins_new2(void* other);
QMargins* q_margins_new3();
QMargins* q_margins_new4(int left, int top, int right, int bottom);
QMargins* q_margins_new5(void* param1);
void q_margins_copy_assign(void* self, void* other);
void q_margins_move_assign(void* self, void* other);
bool q_margins_is_null(void* self);
int32_t q_margins_left(void* self);
int32_t q_margins_top(void* self);
int32_t q_margins_right(void* self);
int32_t q_margins_bottom(void* self);
void q_margins_set_left(void* self, int left);
void q_margins_set_top(void* self, int top);
void q_margins_set_right(void* self, int right);
void q_margins_set_bottom(void* self, int bottom);
QMargins* q_margins_operator_plus_assign(void* self, void* margins);
QMargins* q_margins_operator_minus_assign(void* self, void* margins);
QMargins* q_margins_operator_plus_assign_with_int(void* self, int param1);
QMargins* q_margins_operator_minus_assign_with_int(void* self, int param1);
QMargins* q_margins_operator_multiply_assign(void* self, int param1);
QMargins* q_margins_operator_divide_assign(void* self, int param1);
QMargins* q_margins_operator_multiply_assign_with_double(void* self, double param1);
QMargins* q_margins_operator_divide_assign_with_double(void* self, double param1);
QMarginsF* q_margins_to_margins_f(void* self);
void q_margins_delete(void* self);

QMarginsF* q_marginsf_new(void* other);
QMarginsF* q_marginsf_new2(void* other);
QMarginsF* q_marginsf_new3();
QMarginsF* q_marginsf_new4(double left, double top, double right, double bottom);
QMarginsF* q_marginsf_new5(void* margins);
QMarginsF* q_marginsf_new6(void* param1);
void q_marginsf_copy_assign(void* self, void* other);
void q_marginsf_move_assign(void* self, void* other);
bool q_marginsf_is_null(void* self);
double q_marginsf_left(void* self);
double q_marginsf_top(void* self);
double q_marginsf_right(void* self);
double q_marginsf_bottom(void* self);
void q_marginsf_set_left(void* self, double aleft);
void q_marginsf_set_top(void* self, double atop);
void q_marginsf_set_right(void* self, double aright);
void q_marginsf_set_bottom(void* self, double abottom);
QMarginsF* q_marginsf_operator_plus_assign(void* self, void* margins);
QMarginsF* q_marginsf_operator_minus_assign(void* self, void* margins);
QMarginsF* q_marginsf_operator_plus_assign_with_addend(void* self, double addend);
QMarginsF* q_marginsf_operator_minus_assign_with_subtrahend(void* self, double subtrahend);
QMarginsF* q_marginsf_operator_multiply_assign(void* self, double factor);
QMarginsF* q_marginsf_operator_divide_assign(void* self, double divisor);
QMargins* q_marginsf_to_margins(void* self);
void q_marginsf_delete(void* self);

#endif

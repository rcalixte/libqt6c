#pragma once
#ifndef SRCQT6C_LIBQSIZE_H
#define SRCQT6C_LIBQSIZE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqmargins.h"

QSize* q_size_new(void* other);
QSize* q_size_new2(void* other);
QSize* q_size_new3();
QSize* q_size_new4(int w, int h);
QSize* q_size_new5(void* param1);
void q_size_copy_assign(void* self, void* other);
void q_size_move_assign(void* self, void* other);
bool q_size_is_null(void* self);
bool q_size_is_empty(void* self);
bool q_size_is_valid(void* self);
int32_t q_size_width(void* self);
int32_t q_size_height(void* self);
void q_size_set_width(void* self, int w);
void q_size_set_height(void* self, int h);
void q_size_transpose(void* self);
QSize* q_size_transposed(void* self);
void q_size_scale(void* self, int w, int h, int64_t mode);
void q_size_scale2(void* self, void* s, int64_t mode);
QSize* q_size_scaled(void* self, int w, int h, int64_t mode);
QSize* q_size_scaled2(void* self, void* s, int64_t mode);
QSize* q_size_expanded_to(void* self, void* param1);
QSize* q_size_bounded_to(void* self, void* param1);
QSize* q_size_grown_by(void* self, void* m);
QSize* q_size_shrunk_by(void* self, void* m);
QSize* q_size_operator_plus_assign(void* self, void* param1);
QSize* q_size_operator_minus_assign(void* self, void* param1);
QSize* q_size_operator_multiply_assign(void* self, double c);
QSize* q_size_operator_divide_assign(void* self, double c);
QSizeF* q_size_to_size_f(void* self);
void q_size_delete(void* self);

QSizeF* q_sizef_new(void* other);
QSizeF* q_sizef_new2(void* other);
QSizeF* q_sizef_new3();
QSizeF* q_sizef_new4(void* sz);
QSizeF* q_sizef_new5(double w, double h);
QSizeF* q_sizef_new6(void* param1);
void q_sizef_copy_assign(void* self, void* other);
void q_sizef_move_assign(void* self, void* other);
bool q_sizef_is_null(void* self);
bool q_sizef_is_empty(void* self);
bool q_sizef_is_valid(void* self);
double q_sizef_width(void* self);
double q_sizef_height(void* self);
void q_sizef_set_width(void* self, double w);
void q_sizef_set_height(void* self, double h);
void q_sizef_transpose(void* self);
QSizeF* q_sizef_transposed(void* self);
void q_sizef_scale(void* self, double w, double h, int64_t mode);
void q_sizef_scale2(void* self, void* s, int64_t mode);
QSizeF* q_sizef_scaled(void* self, double w, double h, int64_t mode);
QSizeF* q_sizef_scaled2(void* self, void* s, int64_t mode);
QSizeF* q_sizef_expanded_to(void* self, void* param1);
QSizeF* q_sizef_bounded_to(void* self, void* param1);
QSizeF* q_sizef_grown_by(void* self, void* m);
QSizeF* q_sizef_shrunk_by(void* self, void* m);
QSizeF* q_sizef_operator_plus_assign(void* self, void* param1);
QSizeF* q_sizef_operator_minus_assign(void* self, void* param1);
QSizeF* q_sizef_operator_multiply_assign(void* self, double c);
QSizeF* q_sizef_operator_divide_assign(void* self, double c);
QSize* q_sizef_to_size(void* self);
void q_sizef_delete(void* self);

#endif

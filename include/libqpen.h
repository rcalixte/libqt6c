#pragma once
#ifndef SRCQT6C_LIBQPEN_H
#define SRCQT6C_LIBQPEN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbrush.h"
#include "libqcolor.h"
#include "libqvariant.h"

QPen* q_pen_new();
QPen* q_pen_new2(int64_t param1);
QPen* q_pen_new3(void* color);
QPen* q_pen_new4(void* brush, double width);
QPen* q_pen_new5(void* pen);
QPen* q_pen_new6(void* brush, double width, int64_t s);
QPen* q_pen_new7(void* brush, double width, int64_t s, int64_t c);
QPen* q_pen_new8(void* brush, double width, int64_t s, int64_t c, int64_t j);
void q_pen_operator_assign(void* self, void* pen);
void q_pen_swap(void* self, void* other);
int64_t q_pen_style(void* self);
void q_pen_set_style(void* self, int64_t style);
libqt_list /* of double */ q_pen_dash_pattern(void* self);
void q_pen_set_dash_pattern(void* self, double* pattern[]);
double q_pen_dash_offset(void* self);
void q_pen_set_dash_offset(void* self, double doffset);
double q_pen_miter_limit(void* self);
void q_pen_set_miter_limit(void* self, double limit);
double q_pen_width_f(void* self);
void q_pen_set_width_f(void* self, double width);
int32_t q_pen_width(void* self);
void q_pen_set_width(void* self, int width);
QColor* q_pen_color(void* self);
void q_pen_set_color(void* self, void* color);
QBrush* q_pen_brush(void* self);
void q_pen_set_brush(void* self, void* brush);
bool q_pen_is_solid(void* self);
int64_t q_pen_cap_style(void* self);
void q_pen_set_cap_style(void* self, int64_t pcs);
int64_t q_pen_join_style(void* self);
void q_pen_set_join_style(void* self, int64_t pcs);
bool q_pen_is_cosmetic(void* self);
void q_pen_set_cosmetic(void* self, bool cosmetic);
bool q_pen_operator_equal(void* self, void* p);
bool q_pen_operator_not_equal(void* self, void* p);
QVariant* q_pen_to_q_variant(void* self);
bool q_pen_is_detached(void* self);
void q_pen_delete(void* self);

#endif

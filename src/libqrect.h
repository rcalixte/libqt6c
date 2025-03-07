#pragma once
#ifndef SRCQT6C_LIBQRECT_H
#define SRCQT6C_LIBQRECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqmargins.h"
#include "libqpoint.h"
#include "libqsize.h"

QRect* q_rect_new(void* other);
QRect* q_rect_new2(void* other);
QRect* q_rect_new3();
QRect* q_rect_new4(void* topleft, void* bottomright);
QRect* q_rect_new5(void* topleft, void* size);
QRect* q_rect_new6(int left, int top, int width, int height);
QRect* q_rect_new7(void* param1);
void q_rect_copy_assign(void* self, void* other);
void q_rect_move_assign(void* self, void* other);
bool q_rect_is_null(void* self);
bool q_rect_is_empty(void* self);
bool q_rect_is_valid(void* self);
int32_t q_rect_left(void* self);
int32_t q_rect_top(void* self);
int32_t q_rect_right(void* self);
int32_t q_rect_bottom(void* self);
QRect* q_rect_normalized(void* self);
int32_t q_rect_x(void* self);
int32_t q_rect_y(void* self);
void q_rect_set_left(void* self, int pos);
void q_rect_set_top(void* self, int pos);
void q_rect_set_right(void* self, int pos);
void q_rect_set_bottom(void* self, int pos);
void q_rect_set_x(void* self, int x);
void q_rect_set_y(void* self, int y);
void q_rect_set_top_left(void* self, void* p);
void q_rect_set_bottom_right(void* self, void* p);
void q_rect_set_top_right(void* self, void* p);
void q_rect_set_bottom_left(void* self, void* p);
QPoint* q_rect_top_left(void* self);
QPoint* q_rect_bottom_right(void* self);
QPoint* q_rect_top_right(void* self);
QPoint* q_rect_bottom_left(void* self);
QPoint* q_rect_center(void* self);
void q_rect_move_left(void* self, int pos);
void q_rect_move_top(void* self, int pos);
void q_rect_move_right(void* self, int pos);
void q_rect_move_bottom(void* self, int pos);
void q_rect_move_top_left(void* self, void* p);
void q_rect_move_bottom_right(void* self, void* p);
void q_rect_move_top_right(void* self, void* p);
void q_rect_move_bottom_left(void* self, void* p);
void q_rect_move_center(void* self, void* p);
void q_rect_translate(void* self, int dx, int dy);
void q_rect_translate_with_q_point(void* self, void* p);
QRect* q_rect_translated(void* self, int dx, int dy);
QRect* q_rect_translated_with_q_point(void* self, void* p);
QRect* q_rect_transposed(void* self);
void q_rect_move_to(void* self, int x, int t);
void q_rect_move_to_with_q_point(void* self, void* p);
void q_rect_set_rect(void* self, int x, int y, int w, int h);
void q_rect_get_rect(void* self, int* x, int* y, int* w, int* h);
void q_rect_set_coords(void* self, int x1, int y1, int x2, int y2);
void q_rect_get_coords(void* self, int* x1, int* y1, int* x2, int* y2);
void q_rect_adjust(void* self, int x1, int y1, int x2, int y2);
QRect* q_rect_adjusted(void* self, int x1, int y1, int x2, int y2);
QSize* q_rect_size(void* self);
int32_t q_rect_width(void* self);
int32_t q_rect_height(void* self);
void q_rect_set_width(void* self, int w);
void q_rect_set_height(void* self, int h);
void q_rect_set_size(void* self, void* s);
QRect* q_rect_operator_bitwise_or(void* self, void* r);
QRect* q_rect_operator_bitwise_and(void* self, void* r);
void q_rect_operator_bitwise_or_assign(void* self, void* r);
void q_rect_operator_bitwise_and_assign(void* self, void* r);
bool q_rect_contains(void* self, void* r);
bool q_rect_contains_with_q_point(void* self, void* p);
bool q_rect_contains2(void* self, int x, int y);
bool q_rect_contains3(void* self, int x, int y, bool proper);
QRect* q_rect_united(void* self, void* other);
QRect* q_rect_intersected(void* self, void* other);
bool q_rect_intersects(void* self, void* r);
QRect* q_rect_margins_added(void* self, void* margins);
QRect* q_rect_margins_removed(void* self, void* margins);
QRect* q_rect_operator_plus_assign(void* self, void* margins);
QRect* q_rect_operator_minus_assign(void* self, void* margins);
QRect* q_rect_span(void* p1, void* p2);
QRectF* q_rect_to_rect_f(void* self);
bool q_rect_contains22(void* self, void* r, bool proper);
bool q_rect_contains23(void* self, void* p, bool proper);
void q_rect_delete(void* self);

QRectF* q_rectf_new(void* other);
QRectF* q_rectf_new2(void* other);
QRectF* q_rectf_new3();
QRectF* q_rectf_new4(void* topleft, void* size);
QRectF* q_rectf_new5(void* topleft, void* bottomRight);
QRectF* q_rectf_new6(double left, double top, double width, double height);
QRectF* q_rectf_new7(void* rect);
QRectF* q_rectf_new8(void* param1);
void q_rectf_copy_assign(void* self, void* other);
void q_rectf_move_assign(void* self, void* other);
bool q_rectf_is_null(void* self);
bool q_rectf_is_empty(void* self);
bool q_rectf_is_valid(void* self);
QRectF* q_rectf_normalized(void* self);
double q_rectf_left(void* self);
double q_rectf_top(void* self);
double q_rectf_right(void* self);
double q_rectf_bottom(void* self);
double q_rectf_x(void* self);
double q_rectf_y(void* self);
void q_rectf_set_left(void* self, double pos);
void q_rectf_set_top(void* self, double pos);
void q_rectf_set_right(void* self, double pos);
void q_rectf_set_bottom(void* self, double pos);
void q_rectf_set_x(void* self, double pos);
void q_rectf_set_y(void* self, double pos);
QPointF* q_rectf_top_left(void* self);
QPointF* q_rectf_bottom_right(void* self);
QPointF* q_rectf_top_right(void* self);
QPointF* q_rectf_bottom_left(void* self);
QPointF* q_rectf_center(void* self);
void q_rectf_set_top_left(void* self, void* p);
void q_rectf_set_bottom_right(void* self, void* p);
void q_rectf_set_top_right(void* self, void* p);
void q_rectf_set_bottom_left(void* self, void* p);
void q_rectf_move_left(void* self, double pos);
void q_rectf_move_top(void* self, double pos);
void q_rectf_move_right(void* self, double pos);
void q_rectf_move_bottom(void* self, double pos);
void q_rectf_move_top_left(void* self, void* p);
void q_rectf_move_bottom_right(void* self, void* p);
void q_rectf_move_top_right(void* self, void* p);
void q_rectf_move_bottom_left(void* self, void* p);
void q_rectf_move_center(void* self, void* p);
void q_rectf_translate(void* self, double dx, double dy);
void q_rectf_translate_with_q_point_f(void* self, void* p);
QRectF* q_rectf_translated(void* self, double dx, double dy);
QRectF* q_rectf_translated_with_q_point_f(void* self, void* p);
QRectF* q_rectf_transposed(void* self);
void q_rectf_move_to(void* self, double x, double y);
void q_rectf_move_to_with_q_point_f(void* self, void* p);
void q_rectf_set_rect(void* self, double x, double y, double w, double h);
void q_rectf_get_rect(void* self, double* x, double* y, double* w, double* h);
void q_rectf_set_coords(void* self, double x1, double y1, double x2, double y2);
void q_rectf_get_coords(void* self, double* x1, double* y1, double* x2, double* y2);
void q_rectf_adjust(void* self, double x1, double y1, double x2, double y2);
QRectF* q_rectf_adjusted(void* self, double x1, double y1, double x2, double y2);
QSizeF* q_rectf_size(void* self);
double q_rectf_width(void* self);
double q_rectf_height(void* self);
void q_rectf_set_width(void* self, double w);
void q_rectf_set_height(void* self, double h);
void q_rectf_set_size(void* self, void* s);
QRectF* q_rectf_operator_bitwise_or(void* self, void* r);
QRectF* q_rectf_operator_bitwise_and(void* self, void* r);
void q_rectf_operator_bitwise_or_assign(void* self, void* r);
void q_rectf_operator_bitwise_and_assign(void* self, void* r);
bool q_rectf_contains(void* self, void* r);
bool q_rectf_contains_with_q_point_f(void* self, void* p);
bool q_rectf_contains2(void* self, double x, double y);
QRectF* q_rectf_united(void* self, void* other);
QRectF* q_rectf_intersected(void* self, void* other);
bool q_rectf_intersects(void* self, void* r);
QRectF* q_rectf_margins_added(void* self, void* margins);
QRectF* q_rectf_margins_removed(void* self, void* margins);
QRectF* q_rectf_operator_plus_assign(void* self, void* margins);
QRectF* q_rectf_operator_minus_assign(void* self, void* margins);
QRect* q_rectf_to_rect(void* self);
QRect* q_rectf_to_aligned_rect(void* self);
void q_rectf_delete(void* self);

#endif

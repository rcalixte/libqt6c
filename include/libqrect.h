#pragma once
#ifndef LIBQRECT_H
#define LIBQRECT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html)

/// q_rect_new constructs a new QRect object.
///
/// @param other QRect*
///
QRect* q_rect_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html)

/// q_rect_new2 constructs a new QRect object and invalidates the source QRect object.
///
/// @param other QRect*
///
QRect* q_rect_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html)

/// q_rect_new3 constructs a new QRect object.
///
QRect* q_rect_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html)

/// q_rect_new4 constructs a new QRect object.
///
/// @param topleft QPoint*
/// @param bottomright QPoint*
///
QRect* q_rect_new4(const void* topleft, const void* bottomright);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html)

/// q_rect_new5 constructs a new QRect object.
///
/// @param topleft QPoint*
/// @param size QSize*
///
QRect* q_rect_new5(const void* topleft, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html)

/// q_rect_new6 constructs a new QRect object.
///
/// @param left int
/// @param top int
/// @param width int
/// @param height int
///
QRect* q_rect_new6(int left, int top, int width, int height);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html)

/// q_rect_new7 constructs a new QRect object.
///
/// @param param1 QRect*
///
QRect* q_rect_new7(const void* param1);

/// q_rect_copy_assign shallow copies `other` into `self`.
///
/// @param self QRect*
/// @param other QRect*
///
void q_rect_copy_assign(void* self, void* other);

/// q_rect_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QRect*
/// @param other QRect*
///
void q_rect_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#isNull)
///
/// @param self const QRect*
///
bool q_rect_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#isEmpty)
///
/// @param self const QRect*
///
bool q_rect_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#isValid)
///
/// @param self const QRect*
///
bool q_rect_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#left)
///
/// @param self const QRect*
///
int32_t q_rect_left(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#top)
///
/// @param self const QRect*
///
int32_t q_rect_top(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#right)
///
/// @param self const QRect*
///
int32_t q_rect_right(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#bottom)
///
/// @param self const QRect*
///
int32_t q_rect_bottom(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#normalized)
///
/// @param self const QRect*
///
QRect* q_rect_normalized(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#x)
///
/// @param self const QRect*
///
int32_t q_rect_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#y)
///
/// @param self const QRect*
///
int32_t q_rect_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setLeft)
///
/// @param self QRect*
/// @param pos int
///
void q_rect_set_left(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setTop)
///
/// @param self QRect*
/// @param pos int
///
void q_rect_set_top(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setRight)
///
/// @param self QRect*
/// @param pos int
///
void q_rect_set_right(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setBottom)
///
/// @param self QRect*
/// @param pos int
///
void q_rect_set_bottom(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setX)
///
/// @param self QRect*
/// @param x int
///
void q_rect_set_x(void* self, int x);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setY)
///
/// @param self QRect*
/// @param y int
///
void q_rect_set_y(void* self, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setTopLeft)
///
/// @param self QRect*
/// @param p QPoint*
///
void q_rect_set_top_left(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setBottomRight)
///
/// @param self QRect*
/// @param p QPoint*
///
void q_rect_set_bottom_right(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setTopRight)
///
/// @param self QRect*
/// @param p QPoint*
///
void q_rect_set_top_right(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setBottomLeft)
///
/// @param self QRect*
/// @param p QPoint*
///
void q_rect_set_bottom_left(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#topLeft)
///
/// @param self const QRect*
///
QPoint* q_rect_top_left(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#bottomRight)
///
/// @param self const QRect*
///
QPoint* q_rect_bottom_right(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#topRight)
///
/// @param self const QRect*
///
QPoint* q_rect_top_right(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#bottomLeft)
///
/// @param self const QRect*
///
QPoint* q_rect_bottom_left(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#center)
///
/// @param self const QRect*
///
QPoint* q_rect_center(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveLeft)
///
/// @param self QRect*
/// @param pos int
///
void q_rect_move_left(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTop)
///
/// @param self QRect*
/// @param pos int
///
void q_rect_move_top(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveRight)
///
/// @param self QRect*
/// @param pos int
///
void q_rect_move_right(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveBottom)
///
/// @param self QRect*
/// @param pos int
///
void q_rect_move_bottom(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTopLeft)
///
/// @param self QRect*
/// @param p QPoint*
///
void q_rect_move_top_left(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveBottomRight)
///
/// @param self QRect*
/// @param p QPoint*
///
void q_rect_move_bottom_right(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTopRight)
///
/// @param self QRect*
/// @param p QPoint*
///
void q_rect_move_top_right(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveBottomLeft)
///
/// @param self QRect*
/// @param p QPoint*
///
void q_rect_move_bottom_left(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveCenter)
///
/// @param self QRect*
/// @param p QPoint*
///
void q_rect_move_center(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#translate)
///
/// @param self QRect*
/// @param dx int
/// @param dy int
///
void q_rect_translate(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#translate)
///
/// @param self QRect*
/// @param p QPoint*
///
void q_rect_translate2(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#translated)
///
/// @param self const QRect*
/// @param dx int
/// @param dy int
///
QRect* q_rect_translated(const void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#translated)
///
/// @param self const QRect*
/// @param p QPoint*
///
QRect* q_rect_translated2(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#transposed)
///
/// @param self const QRect*
///
QRect* q_rect_transposed(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTo)
///
/// @param self QRect*
/// @param x int
/// @param t int
///
void q_rect_move_to(void* self, int x, int t);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#moveTo)
///
/// @param self QRect*
/// @param p QPoint*
///
void q_rect_move_to2(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setRect)
///
/// @param self QRect*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_rect_set_rect(void* self, int x, int y, int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#getRect)
///
/// @param self const QRect*
/// @param x int*
/// @param y int*
/// @param w int*
/// @param h int*
///
void q_rect_get_rect(const void* self, int* x, int* y, int* w, int* h);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setCoords)
///
/// @param self QRect*
/// @param x1 int
/// @param y1 int
/// @param x2 int
/// @param y2 int
///
void q_rect_set_coords(void* self, int x1, int y1, int x2, int y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#getCoords)
///
/// @param self const QRect*
/// @param x1 int*
/// @param y1 int*
/// @param x2 int*
/// @param y2 int*
///
void q_rect_get_coords(const void* self, int* x1, int* y1, int* x2, int* y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#adjust)
///
/// @param self QRect*
/// @param x1 int
/// @param y1 int
/// @param x2 int
/// @param y2 int
///
void q_rect_adjust(void* self, int x1, int y1, int x2, int y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#adjusted)
///
/// @param self const QRect*
/// @param x1 int
/// @param y1 int
/// @param x2 int
/// @param y2 int
///
QRect* q_rect_adjusted(const void* self, int x1, int y1, int x2, int y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#size)
///
/// @param self const QRect*
///
QSize* q_rect_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#width)
///
/// @param self const QRect*
///
int32_t q_rect_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#height)
///
/// @param self const QRect*
///
int32_t q_rect_height(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setWidth)
///
/// @param self QRect*
/// @param w int
///
void q_rect_set_width(void* self, int w);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setHeight)
///
/// @param self QRect*
/// @param h int
///
void q_rect_set_height(void* self, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#setSize)
///
/// @param self QRect*
/// @param s QSize*
///
void q_rect_set_size(void* self, const void* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-7c)
///
/// @param self const QRect*
/// @param r QRect*
///
QRect* q_rect_operator_bitwise_or(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-and)
///
/// @param self const QRect*
/// @param r QRect*
///
QRect* q_rect_operator_bitwise_and(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-7c-eq)
///
/// @param self QRect*
/// @param r QRect*
///
void q_rect_operator_bitwise_or_assign(void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-and-eq)
///
/// @param self QRect*
/// @param r QRect*
///
void q_rect_operator_bitwise_and_assign(void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
///
/// @param self const QRect*
/// @param r QRect*
///
bool q_rect_contains(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
///
/// @param self const QRect*
/// @param p QPoint*
///
bool q_rect_contains2(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
///
/// @param self const QRect*
/// @param x int
/// @param y int
///
bool q_rect_contains3(const void* self, int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
///
/// @param self const QRect*
/// @param x int
/// @param y int
/// @param proper bool
///
bool q_rect_contains4(const void* self, int x, int y, bool proper);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#united)
///
/// @param self const QRect*
/// @param other QRect*
///
QRect* q_rect_united(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#intersected)
///
/// @param self const QRect*
/// @param other QRect*
///
QRect* q_rect_intersected(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#intersects)
///
/// @param self const QRect*
/// @param r QRect*
///
bool q_rect_intersects(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#marginsAdded)
///
/// @param self const QRect*
/// @param margins QMargins*
///
QRect* q_rect_margins_added(const void* self, const void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#marginsRemoved)
///
/// @param self const QRect*
/// @param margins QMargins*
///
QRect* q_rect_margins_removed(const void* self, const void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-2b-eq)
///
/// @param self QRect*
/// @param margins QMargins*
///
QRect* q_rect_operator_plus_assign(void* self, const void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator--eq)
///
/// @param self QRect*
/// @param margins QMargins*
///
QRect* q_rect_operator_minus_assign(void* self, const void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#span)
///
/// @param p1 QPoint*
/// @param p2 QPoint*
///
QRect* q_rect_span(const void* p1, const void* p2);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#toRectF)
///
/// @param self const QRect*
///
QRectF* q_rect_to_rect_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#operator-eq)
///
/// @param self QRect*
/// @param param1 QRect*
///
void q_rect_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
///
/// @param self const QRect*
/// @param r QRect*
/// @param proper bool
///
bool q_rect_contains22(const void* self, const void* r, bool proper);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#contains)
///
/// @param self const QRect*
/// @param p QPoint*
/// @param proper bool
///
bool q_rect_contains23(const void* self, const void* p, bool proper);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#dtor.QRect)
///
/// Delete this object from C++ memory.
///
/// @param self QRect*
///
void q_rect_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qrect.html#qHash)
///
/// @param r QRect*
/// @param seed size_t
///
size_t q_qrect_q_hash(const void* r, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html)

/// q_rectf_new constructs a new QRectF object.
///
/// @param other QRectF*
///
QRectF* q_rectf_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html)

/// q_rectf_new2 constructs a new QRectF object and invalidates the source QRectF object.
///
/// @param other QRectF*
///
QRectF* q_rectf_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html)

/// q_rectf_new3 constructs a new QRectF object.
///
QRectF* q_rectf_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html)

/// q_rectf_new4 constructs a new QRectF object.
///
/// @param topleft QPointF*
/// @param size QSizeF*
///
QRectF* q_rectf_new4(const void* topleft, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html)

/// q_rectf_new5 constructs a new QRectF object.
///
/// @param topleft QPointF*
/// @param bottomRight QPointF*
///
QRectF* q_rectf_new5(const void* topleft, const void* bottomRight);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html)

/// q_rectf_new6 constructs a new QRectF object.
///
/// @param left double
/// @param top double
/// @param width double
/// @param height double
///
QRectF* q_rectf_new6(double left, double top, double width, double height);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html)

/// q_rectf_new7 constructs a new QRectF object.
///
/// @param rect QRect*
///
QRectF* q_rectf_new7(const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html)

/// q_rectf_new8 constructs a new QRectF object.
///
/// @param param1 QRectF*
///
QRectF* q_rectf_new8(const void* param1);

/// q_rectf_copy_assign shallow copies `other` into `self`.
///
/// @param self QRectF*
/// @param other QRectF*
///
void q_rectf_copy_assign(void* self, void* other);

/// q_rectf_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QRectF*
/// @param other QRectF*
///
void q_rectf_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#isNull)
///
/// @param self const QRectF*
///
bool q_rectf_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#isEmpty)
///
/// @param self const QRectF*
///
bool q_rectf_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#isValid)
///
/// @param self const QRectF*
///
bool q_rectf_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#normalized)
///
/// @param self const QRectF*
///
QRectF* q_rectf_normalized(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#left)
///
/// @param self const QRectF*
///
double q_rectf_left(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#top)
///
/// @param self const QRectF*
///
double q_rectf_top(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#right)
///
/// @param self const QRectF*
///
double q_rectf_right(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#bottom)
///
/// @param self const QRectF*
///
double q_rectf_bottom(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#x)
///
/// @param self const QRectF*
///
double q_rectf_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#y)
///
/// @param self const QRectF*
///
double q_rectf_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setLeft)
///
/// @param self QRectF*
/// @param pos double
///
void q_rectf_set_left(void* self, double pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setTop)
///
/// @param self QRectF*
/// @param pos double
///
void q_rectf_set_top(void* self, double pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setRight)
///
/// @param self QRectF*
/// @param pos double
///
void q_rectf_set_right(void* self, double pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setBottom)
///
/// @param self QRectF*
/// @param pos double
///
void q_rectf_set_bottom(void* self, double pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setX)
///
/// @param self QRectF*
/// @param pos double
///
void q_rectf_set_x(void* self, double pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setY)
///
/// @param self QRectF*
/// @param pos double
///
void q_rectf_set_y(void* self, double pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#topLeft)
///
/// @param self const QRectF*
///
QPointF* q_rectf_top_left(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#bottomRight)
///
/// @param self const QRectF*
///
QPointF* q_rectf_bottom_right(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#topRight)
///
/// @param self const QRectF*
///
QPointF* q_rectf_top_right(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#bottomLeft)
///
/// @param self const QRectF*
///
QPointF* q_rectf_bottom_left(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#center)
///
/// @param self const QRectF*
///
QPointF* q_rectf_center(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setTopLeft)
///
/// @param self QRectF*
/// @param p QPointF*
///
void q_rectf_set_top_left(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setBottomRight)
///
/// @param self QRectF*
/// @param p QPointF*
///
void q_rectf_set_bottom_right(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setTopRight)
///
/// @param self QRectF*
/// @param p QPointF*
///
void q_rectf_set_top_right(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setBottomLeft)
///
/// @param self QRectF*
/// @param p QPointF*
///
void q_rectf_set_bottom_left(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveLeft)
///
/// @param self QRectF*
/// @param pos double
///
void q_rectf_move_left(void* self, double pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTop)
///
/// @param self QRectF*
/// @param pos double
///
void q_rectf_move_top(void* self, double pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveRight)
///
/// @param self QRectF*
/// @param pos double
///
void q_rectf_move_right(void* self, double pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveBottom)
///
/// @param self QRectF*
/// @param pos double
///
void q_rectf_move_bottom(void* self, double pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTopLeft)
///
/// @param self QRectF*
/// @param p QPointF*
///
void q_rectf_move_top_left(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveBottomRight)
///
/// @param self QRectF*
/// @param p QPointF*
///
void q_rectf_move_bottom_right(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTopRight)
///
/// @param self QRectF*
/// @param p QPointF*
///
void q_rectf_move_top_right(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveBottomLeft)
///
/// @param self QRectF*
/// @param p QPointF*
///
void q_rectf_move_bottom_left(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveCenter)
///
/// @param self QRectF*
/// @param p QPointF*
///
void q_rectf_move_center(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#translate)
///
/// @param self QRectF*
/// @param dx double
/// @param dy double
///
void q_rectf_translate(void* self, double dx, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#translate)
///
/// @param self QRectF*
/// @param p QPointF*
///
void q_rectf_translate2(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#translated)
///
/// @param self const QRectF*
/// @param dx double
/// @param dy double
///
QRectF* q_rectf_translated(const void* self, double dx, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#translated)
///
/// @param self const QRectF*
/// @param p QPointF*
///
QRectF* q_rectf_translated2(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#transposed)
///
/// @param self const QRectF*
///
QRectF* q_rectf_transposed(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTo)
///
/// @param self QRectF*
/// @param x double
/// @param y double
///
void q_rectf_move_to(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#moveTo)
///
/// @param self QRectF*
/// @param p QPointF*
///
void q_rectf_move_to2(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setRect)
///
/// @param self QRectF*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_rectf_set_rect(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#getRect)
///
/// @param self const QRectF*
/// @param x double*
/// @param y double*
/// @param w double*
/// @param h double*
///
void q_rectf_get_rect(const void* self, double* x, double* y, double* w, double* h);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setCoords)
///
/// @param self QRectF*
/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
///
void q_rectf_set_coords(void* self, double x1, double y1, double x2, double y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#getCoords)
///
/// @param self const QRectF*
/// @param x1 double*
/// @param y1 double*
/// @param x2 double*
/// @param y2 double*
///
void q_rectf_get_coords(const void* self, double* x1, double* y1, double* x2, double* y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#adjust)
///
/// @param self QRectF*
/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
///
void q_rectf_adjust(void* self, double x1, double y1, double x2, double y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#adjusted)
///
/// @param self const QRectF*
/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
///
QRectF* q_rectf_adjusted(const void* self, double x1, double y1, double x2, double y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#size)
///
/// @param self const QRectF*
///
QSizeF* q_rectf_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#width)
///
/// @param self const QRectF*
///
double q_rectf_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#height)
///
/// @param self const QRectF*
///
double q_rectf_height(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setWidth)
///
/// @param self QRectF*
/// @param w double
///
void q_rectf_set_width(void* self, double w);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setHeight)
///
/// @param self QRectF*
/// @param h double
///
void q_rectf_set_height(void* self, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#setSize)
///
/// @param self QRectF*
/// @param s QSizeF*
///
void q_rectf_set_size(void* self, const void* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-7c)
///
/// @param self const QRectF*
/// @param r QRectF*
///
QRectF* q_rectf_operator_bitwise_or(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-and)
///
/// @param self const QRectF*
/// @param r QRectF*
///
QRectF* q_rectf_operator_bitwise_and(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-7c-eq)
///
/// @param self QRectF*
/// @param r QRectF*
///
void q_rectf_operator_bitwise_or_assign(void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-and-eq)
///
/// @param self QRectF*
/// @param r QRectF*
///
void q_rectf_operator_bitwise_and_assign(void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#contains)
///
/// @param self const QRectF*
/// @param r QRectF*
///
bool q_rectf_contains(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#contains)
///
/// @param self const QRectF*
/// @param p QPointF*
///
bool q_rectf_contains2(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#contains)
///
/// @param self const QRectF*
/// @param x double
/// @param y double
///
bool q_rectf_contains3(const void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#united)
///
/// @param self const QRectF*
/// @param other QRectF*
///
QRectF* q_rectf_united(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#intersected)
///
/// @param self const QRectF*
/// @param other QRectF*
///
QRectF* q_rectf_intersected(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#intersects)
///
/// @param self const QRectF*
/// @param r QRectF*
///
bool q_rectf_intersects(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#marginsAdded)
///
/// @param self const QRectF*
/// @param margins QMarginsF*
///
QRectF* q_rectf_margins_added(const void* self, const void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#marginsRemoved)
///
/// @param self const QRectF*
/// @param margins QMarginsF*
///
QRectF* q_rectf_margins_removed(const void* self, const void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-2b-eq)
///
/// @param self QRectF*
/// @param margins QMarginsF*
///
QRectF* q_rectf_operator_plus_assign(void* self, const void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator--eq)
///
/// @param self QRectF*
/// @param margins QMarginsF*
///
QRectF* q_rectf_operator_minus_assign(void* self, const void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#toRect)
///
/// @param self const QRectF*
///
QRect* q_rectf_to_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#toAlignedRect)
///
/// @param self const QRectF*
///
QRect* q_rectf_to_aligned_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#operator-eq)
///
/// @param self QRectF*
/// @param param1 QRectF*
///
void q_rectf_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qrectf.html#dtor.QRectF)
///
/// Delete this object from C++ memory.
///
/// @param self QRectF*
///
void q_rectf_delete(void* self);

#endif

#pragma once
#ifndef LIBQPEN_H
#define LIBQPEN_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html)

/// q_pen_new constructs a new QPen object.
///
QPen* q_pen_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html)

/// q_pen_new2 constructs a new QPen object.
///
/// @param param1 enum Qt__PenStyle
///
QPen* q_pen_new2(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html)

/// q_pen_new3 constructs a new QPen object.
///
/// @param color QColor*
///
QPen* q_pen_new3(const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html)

/// q_pen_new4 constructs a new QPen object.
///
/// @param brush QBrush*
/// @param width double
///
QPen* q_pen_new4(const void* brush, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html)

/// q_pen_new5 constructs a new QPen object.
///
/// @param pen QPen*
///
QPen* q_pen_new5(const void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html)

/// q_pen_new6 constructs a new QPen object.
///
/// @param brush QBrush*
/// @param width double
/// @param s enum Qt__PenStyle
///
QPen* q_pen_new6(const void* brush, double width, int32_t s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html)

/// q_pen_new7 constructs a new QPen object.
///
/// @param brush QBrush*
/// @param width double
/// @param s enum Qt__PenStyle
/// @param c enum Qt__PenCapStyle
///
QPen* q_pen_new7(const void* brush, double width, int32_t s, int32_t c);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html)

/// q_pen_new8 constructs a new QPen object.
///
/// @param brush QBrush*
/// @param width double
/// @param s enum Qt__PenStyle
/// @param c enum Qt__PenCapStyle
/// @param j enum Qt__PenJoinStyle
///
QPen* q_pen_new8(const void* brush, double width, int32_t s, int32_t c, int32_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator-eq)
///
/// @param self QPen*
/// @param pen QPen*
///
void q_pen_operator_assign(void* self, const void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#swap)
///
/// @param self QPen*
/// @param other QPen*
///
void q_pen_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#style)
///
/// @param self const QPen*
///
/// @return enum Qt__PenStyle
///
int32_t q_pen_style(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setStyle)
///
/// @param self QPen*
/// @param style enum Qt__PenStyle
///
void q_pen_set_style(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#dashPattern)
///
/// @param self const QPen*
///
/// @return libqt_list of double
///
libqt_list q_pen_dash_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setDashPattern)
///
/// @param self QPen*
/// @param pattern libqt_list of double
///
void q_pen_set_dash_pattern(void* self, libqt_list pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#dashOffset)
///
/// @param self const QPen*
///
double q_pen_dash_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setDashOffset)
///
/// @param self QPen*
/// @param doffset double
///
void q_pen_set_dash_offset(void* self, double doffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#miterLimit)
///
/// @param self const QPen*
///
double q_pen_miter_limit(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setMiterLimit)
///
/// @param self QPen*
/// @param limit double
///
void q_pen_set_miter_limit(void* self, double limit);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#widthF)
///
/// @param self const QPen*
///
double q_pen_width_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setWidthF)
///
/// @param self QPen*
/// @param width double
///
void q_pen_set_width_f(void* self, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#width)
///
/// @param self const QPen*
///
int32_t q_pen_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setWidth)
///
/// @param self QPen*
/// @param width int
///
void q_pen_set_width(void* self, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#color)
///
/// @param self const QPen*
///
QColor* q_pen_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setColor)
///
/// @param self QPen*
/// @param color QColor*
///
void q_pen_set_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#brush)
///
/// @param self const QPen*
///
QBrush* q_pen_brush(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setBrush)
///
/// @param self QPen*
/// @param brush QBrush*
///
void q_pen_set_brush(void* self, const void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#isSolid)
///
/// @param self const QPen*
///
bool q_pen_is_solid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#capStyle)
///
/// @param self const QPen*
///
/// @return enum Qt__PenCapStyle
///
int32_t q_pen_cap_style(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setCapStyle)
///
/// @param self QPen*
/// @param pcs enum Qt__PenCapStyle
///
void q_pen_set_cap_style(void* self, int32_t pcs);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#joinStyle)
///
/// @param self const QPen*
///
/// @return enum Qt__PenJoinStyle
///
int32_t q_pen_join_style(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setJoinStyle)
///
/// @param self QPen*
/// @param pcs enum Qt__PenJoinStyle
///
void q_pen_set_join_style(void* self, int32_t pcs);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#isCosmetic)
///
/// @param self const QPen*
///
bool q_pen_is_cosmetic(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#setCosmetic)
///
/// @param self QPen*
/// @param cosmetic bool
///
void q_pen_set_cosmetic(void* self, bool cosmetic);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator-eq-eq)
///
/// @param self const QPen*
/// @param p QPen*
///
bool q_pen_operator_equal(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator-not-eq)
///
/// @param self const QPen*
/// @param p QPen*
///
bool q_pen_operator_not_equal(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#operator-QVariant)
///
/// @param self const QPen*
///
QVariant* q_pen_to_q_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#isDetached)
///
/// @param self QPen*
///
bool q_pen_is_detached(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpen.html#dtor.QPen)
///
/// Delete this object from C++ memory.
///
/// @param self QPen*
///
void q_pen_delete(void* self);

#endif

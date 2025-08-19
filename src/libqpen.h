#pragma once
#ifndef SRCQT6C_LIBQPEN_H
#define SRCQT6C_LIBQPEN_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpen.html

/// q_pen_new constructs a new QPen object.
///
QPen* q_pen_new();

/// q_pen_new2 constructs a new QPen object.
///
/// @param param1 enum Qt__PenStyle
QPen* q_pen_new2(int32_t param1);

/// q_pen_new3 constructs a new QPen object.
///
/// @param color QColor*
QPen* q_pen_new3(void* color);

/// q_pen_new4 constructs a new QPen object.
///
/// @param brush QBrush*
/// @param width double
QPen* q_pen_new4(void* brush, double width);

/// q_pen_new5 constructs a new QPen object.
///
/// @param pen QPen*
QPen* q_pen_new5(void* pen);

/// q_pen_new6 constructs a new QPen object.
///
/// @param brush QBrush*
/// @param width double
/// @param s enum Qt__PenStyle
QPen* q_pen_new6(void* brush, double width, int32_t s);

/// q_pen_new7 constructs a new QPen object.
///
/// @param brush QBrush*
/// @param width double
/// @param s enum Qt__PenStyle
/// @param c enum Qt__PenCapStyle
QPen* q_pen_new7(void* brush, double width, int32_t s, int32_t c);

/// q_pen_new8 constructs a new QPen object.
///
/// @param brush QBrush*
/// @param width double
/// @param s enum Qt__PenStyle
/// @param c enum Qt__PenCapStyle
/// @param j enum Qt__PenJoinStyle
QPen* q_pen_new8(void* brush, double width, int32_t s, int32_t c, int32_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#operator-eq)
///
/// @param self QPen*
/// @param pen QPen*
void q_pen_operator_assign(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#swap)
///
/// @param self QPen*
/// @param other QPen*
void q_pen_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#style)
///
/// @param self QPen*
///
/// @return enum Qt__PenStyle
int32_t q_pen_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setStyle)
///
/// @param self QPen*
/// @param style enum Qt__PenStyle
void q_pen_set_style(void* self, int32_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#dashPattern)
///
/// @param self QPen*
libqt_list /* of double */ q_pen_dash_pattern(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setDashPattern)
///
/// @param self QPen*
/// @param pattern libqt_list /* of double */
void q_pen_set_dash_pattern(void* self, libqt_list pattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#dashOffset)
///
/// @param self QPen*
double q_pen_dash_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setDashOffset)
///
/// @param self QPen*
/// @param doffset double
void q_pen_set_dash_offset(void* self, double doffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#miterLimit)
///
/// @param self QPen*
double q_pen_miter_limit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setMiterLimit)
///
/// @param self QPen*
/// @param limit double
void q_pen_set_miter_limit(void* self, double limit);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#widthF)
///
/// @param self QPen*
double q_pen_width_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setWidthF)
///
/// @param self QPen*
/// @param width double
void q_pen_set_width_f(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#width)
///
/// @param self QPen*
int32_t q_pen_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setWidth)
///
/// @param self QPen*
/// @param width int
void q_pen_set_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#color)
///
/// @param self QPen*
QColor* q_pen_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setColor)
///
/// @param self QPen*
/// @param color QColor*
void q_pen_set_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#brush)
///
/// @param self QPen*
QBrush* q_pen_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setBrush)
///
/// @param self QPen*
/// @param brush QBrush*
void q_pen_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#isSolid)
///
/// @param self QPen*
bool q_pen_is_solid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#capStyle)
///
/// @param self QPen*
///
/// @return enum Qt__PenCapStyle
int32_t q_pen_cap_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setCapStyle)
///
/// @param self QPen*
/// @param pcs enum Qt__PenCapStyle
void q_pen_set_cap_style(void* self, int32_t pcs);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#joinStyle)
///
/// @param self QPen*
///
/// @return enum Qt__PenJoinStyle
int32_t q_pen_join_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setJoinStyle)
///
/// @param self QPen*
/// @param pcs enum Qt__PenJoinStyle
void q_pen_set_join_style(void* self, int32_t pcs);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#isCosmetic)
///
/// @param self QPen*
bool q_pen_is_cosmetic(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setCosmetic)
///
/// @param self QPen*
/// @param cosmetic bool
void q_pen_set_cosmetic(void* self, bool cosmetic);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#operator-eq-eq)
///
/// @param self QPen*
/// @param p QPen*
bool q_pen_operator_equal(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#operator-not-eq)
///
/// @param self QPen*
/// @param p QPen*
bool q_pen_operator_not_equal(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#operator)
///
/// @param self QPen*
QVariant* q_pen_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#isDetached)
///
/// @param self QPen*
bool q_pen_is_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#dtor.QPen)
///
/// Delete this object from C++ memory.
///
/// @param self QPen*
void q_pen_delete(void* self);

#endif

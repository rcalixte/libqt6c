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

/// https://doc.qt.io/qt-6/qpen.html

/// q_pen_new constructs a new QPen object.
///
///
QPen* q_pen_new();

/// q_pen_new2 constructs a new QPen object.
///
/// ``` enum Qt__PenStyle param1 ```
QPen* q_pen_new2(int64_t param1);

/// q_pen_new3 constructs a new QPen object.
///
/// ``` QColor* color ```
QPen* q_pen_new3(void* color);

/// q_pen_new4 constructs a new QPen object.
///
/// ``` QBrush* brush, double width ```
QPen* q_pen_new4(void* brush, double width);

/// q_pen_new5 constructs a new QPen object.
///
/// ``` QPen* pen ```
QPen* q_pen_new5(void* pen);

/// q_pen_new6 constructs a new QPen object.
///
/// ``` QBrush* brush, double width, enum Qt__PenStyle s ```
QPen* q_pen_new6(void* brush, double width, int64_t s);

/// q_pen_new7 constructs a new QPen object.
///
/// ``` QBrush* brush, double width, enum Qt__PenStyle s, enum Qt__PenCapStyle c ```
QPen* q_pen_new7(void* brush, double width, int64_t s, int64_t c);

/// q_pen_new8 constructs a new QPen object.
///
/// ``` QBrush* brush, double width, enum Qt__PenStyle s, enum Qt__PenCapStyle c, enum Qt__PenJoinStyle j ```
QPen* q_pen_new8(void* brush, double width, int64_t s, int64_t c, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#operator=)
///
/// ``` QPen* self, QPen* pen ```
void q_pen_operator_assign(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#swap)
///
/// ``` QPen* self, QPen* other ```
void q_pen_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#style)
///
/// ``` QPen* self ```
int64_t q_pen_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setStyle)
///
/// ``` QPen* self, enum Qt__PenStyle style ```
void q_pen_set_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#dashPattern)
///
/// ``` QPen* self ```
libqt_list /* of double */ q_pen_dash_pattern(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setDashPattern)
///
/// ``` QPen* self, libqt_list /* of double */ pattern ```
void q_pen_set_dash_pattern(void* self, libqt_list pattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#dashOffset)
///
/// ``` QPen* self ```
double q_pen_dash_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setDashOffset)
///
/// ``` QPen* self, double doffset ```
void q_pen_set_dash_offset(void* self, double doffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#miterLimit)
///
/// ``` QPen* self ```
double q_pen_miter_limit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setMiterLimit)
///
/// ``` QPen* self, double limit ```
void q_pen_set_miter_limit(void* self, double limit);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#widthF)
///
/// ``` QPen* self ```
double q_pen_width_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setWidthF)
///
/// ``` QPen* self, double width ```
void q_pen_set_width_f(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#width)
///
/// ``` QPen* self ```
int32_t q_pen_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setWidth)
///
/// ``` QPen* self, int width ```
void q_pen_set_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#color)
///
/// ``` QPen* self ```
QColor* q_pen_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setColor)
///
/// ``` QPen* self, QColor* color ```
void q_pen_set_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#brush)
///
/// ``` QPen* self ```
QBrush* q_pen_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setBrush)
///
/// ``` QPen* self, QBrush* brush ```
void q_pen_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#isSolid)
///
/// ``` QPen* self ```
bool q_pen_is_solid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#capStyle)
///
/// ``` QPen* self ```
int64_t q_pen_cap_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setCapStyle)
///
/// ``` QPen* self, enum Qt__PenCapStyle pcs ```
void q_pen_set_cap_style(void* self, int64_t pcs);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#joinStyle)
///
/// ``` QPen* self ```
int64_t q_pen_join_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setJoinStyle)
///
/// ``` QPen* self, enum Qt__PenJoinStyle pcs ```
void q_pen_set_join_style(void* self, int64_t pcs);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#isCosmetic)
///
/// ``` QPen* self ```
bool q_pen_is_cosmetic(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#setCosmetic)
///
/// ``` QPen* self, bool cosmetic ```
void q_pen_set_cosmetic(void* self, bool cosmetic);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#operator==)
///
/// ``` QPen* self, QPen* p ```
bool q_pen_operator_equal(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#operator!=)
///
/// ``` QPen* self, QPen* p ```
bool q_pen_operator_not_equal(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#operator QVariant)
///
/// ``` QPen* self ```
QVariant* q_pen_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#isDetached)
///
/// ``` QPen* self ```
bool q_pen_is_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpen.html#dtor.QPen)
///
/// Delete this object from C++ memory.
///
/// ``` QPen* self ```
void q_pen_delete(void* self);

#endif

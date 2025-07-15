#pragma once
#ifndef SRCQT6C_LIBQREGION_H
#define SRCQT6C_LIBQREGION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qregion.html

/// q_region_new constructs a new QRegion object.
///
///
QRegion* q_region_new();

/// q_region_new2 constructs a new QRegion object.
///
/// ``` int x, int y, int w, int h ```
QRegion* q_region_new2(int x, int y, int w, int h);

/// q_region_new3 constructs a new QRegion object.
///
/// ``` QRect* r ```
QRegion* q_region_new3(void* r);

/// q_region_new4 constructs a new QRegion object.
///
/// ``` QRegion* region ```
QRegion* q_region_new4(void* region);

/// q_region_new5 constructs a new QRegion object.
///
/// ``` QBitmap* bitmap ```
QRegion* q_region_new5(void* bitmap);

/// q_region_new6 constructs a new QRegion object.
///
/// ``` int x, int y, int w, int h, enum QRegion__RegionType t ```
QRegion* q_region_new6(int x, int y, int w, int h, int64_t t);

/// q_region_new7 constructs a new QRegion object.
///
/// ``` QRect* r, enum QRegion__RegionType t ```
QRegion* q_region_new7(void* r, int64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator=)
///
/// ``` QRegion* self, QRegion* param1 ```
void q_region_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#swap)
///
/// ``` QRegion* self, QRegion* other ```
void q_region_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#isEmpty)
///
/// ``` QRegion* self ```
bool q_region_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#isNull)
///
/// ``` QRegion* self ```
bool q_region_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#begin)
///
/// ``` QRegion* self ```
const QRect* q_region_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#cbegin)
///
/// ``` QRegion* self ```
const QRect* q_region_cbegin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#end)
///
/// ``` QRegion* self ```
const QRect* q_region_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#cend)
///
/// ``` QRegion* self ```
const QRect* q_region_cend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#contains)
///
/// ``` QRegion* self, QPoint* p ```
bool q_region_contains(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#contains)
///
/// ``` QRegion* self, QRect* r ```
bool q_region_contains2(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#translate)
///
/// ``` QRegion* self, int dx, int dy ```
void q_region_translate(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#translate)
///
/// ``` QRegion* self, QPoint* p ```
void q_region_translate2(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#translated)
///
/// ``` QRegion* self, int dx, int dy ```
QRegion* q_region_translated(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#translated)
///
/// ``` QRegion* self, QPoint* p ```
QRegion* q_region_translated2(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#united)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_united(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#united)
///
/// ``` QRegion* self, QRect* r ```
QRegion* q_region_united2(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#intersected)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_intersected(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#intersected)
///
/// ``` QRegion* self, QRect* r ```
QRegion* q_region_intersected2(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#subtracted)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_subtracted(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#xored)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_xored(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#intersects)
///
/// ``` QRegion* self, QRegion* r ```
bool q_region_intersects(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#intersects)
///
/// ``` QRegion* self, QRect* r ```
bool q_region_intersects2(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#boundingRect)
///
/// ``` QRegion* self ```
QRect* q_region_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#setRects)
///
/// ``` QRegion* self, QRect* rect, int num ```
void q_region_set_rects(void* self, void* rect, int num);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#setRects)
///
/// ``` QRegion* self, libqt_list /* of QRect* */ r ```
void q_region_set_rects2(void* self, libqt_list r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#rects)
///
/// ``` QRegion* self ```
libqt_list /* of QRect* */ q_region_rects(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#rectCount)
///
/// ``` QRegion* self ```
int32_t q_region_rect_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator|)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_operator_bitwise_or(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator+)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_operator_plus(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator+)
///
/// ``` QRegion* self, QRect* r ```
QRegion* q_region_operator_plus2(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator&)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_operator_bitwise_and(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator&)
///
/// ``` QRegion* self, QRect* r ```
QRegion* q_region_operator_bitwise_and2(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator-)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_operator_minus(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator^)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_operator_bitwise_not(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator|=)
///
/// ``` QRegion* self, QRegion* r ```
void q_region_operator_bitwise_or_assign(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator+=)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_operator_plus_assign(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator+=)
///
/// ``` QRegion* self, QRect* r ```
QRegion* q_region_operator_plus_assign2(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator&=)
///
/// ``` QRegion* self, QRegion* r ```
void q_region_operator_bitwise_and_assign(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator&=)
///
/// ``` QRegion* self, QRect* r ```
void q_region_operator_bitwise_and_assign2(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator-=)
///
/// ``` QRegion* self, QRegion* r ```
QRegion* q_region_operator_minus_assign(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator^=)
///
/// ``` QRegion* self, QRegion* r ```
void q_region_operator_bitwise_not_assign(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator==)
///
/// ``` QRegion* self, QRegion* r ```
bool q_region_operator_equal(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator!=)
///
/// ``` QRegion* self, QRegion* r ```
bool q_region_operator_not_equal(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#operator QVariant)
///
/// ``` QRegion* self ```
QVariant* q_region_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qregion.html#dtor.QRegion)
///
/// Delete this object from C++ memory.
///
/// ``` QRegion* self ```
void q_region_delete(void* self);

/// https://doc.qt.io/qt-6/qregion.html#types

typedef enum {
    QREGION_REGIONTYPE_RECTANGLE = 0,
    QREGION_REGIONTYPE_ELLIPSE = 1
} QRegion__RegionType;

#endif

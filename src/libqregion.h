#pragma once
#ifndef SRC_QT6C_LIBQREGION_H
#define SRC_QT6C_LIBQREGION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html)

/// q_region_new constructs a new QRegion object.
///
QRegion* q_region_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html)

/// q_region_new2 constructs a new QRegion object.
///
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
QRegion* q_region_new2(int x, int y, int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html)

/// q_region_new3 constructs a new QRegion object.
///
/// @param r QRect*
///
QRegion* q_region_new3(void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html)

/// q_region_new4 constructs a new QRegion object.
///
/// @param region QRegion*
///
QRegion* q_region_new4(void* region);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html)

/// q_region_new5 constructs a new QRegion object.
///
/// @param bitmap QBitmap*
///
QRegion* q_region_new5(void* bitmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html)

/// q_region_new6 constructs a new QRegion object.
///
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param t enum QRegion__RegionType
///
QRegion* q_region_new6(int x, int y, int w, int h, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html)

/// q_region_new7 constructs a new QRegion object.
///
/// @param r QRect*
/// @param t enum QRegion__RegionType
///
QRegion* q_region_new7(void* r, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-eq)
///
/// @param self QRegion*
/// @param param1 QRegion*
///
void q_region_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#swap)
///
/// @param self QRegion*
/// @param other QRegion*
///
void q_region_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#isEmpty)
///
/// @param self QRegion*
///
bool q_region_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#isNull)
///
/// @param self QRegion*
///
bool q_region_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#begin)
///
/// @param self QRegion*
///
const QRect* q_region_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#cbegin)
///
/// @param self QRegion*
///
const QRect* q_region_cbegin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#end)
///
/// @param self QRegion*
///
const QRect* q_region_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#cend)
///
/// @param self QRegion*
///
const QRect* q_region_cend(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#contains)
///
/// @param self QRegion*
/// @param p QPoint*
///
bool q_region_contains(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#contains)
///
/// @param self QRegion*
/// @param r QRect*
///
bool q_region_contains2(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#translate)
///
/// @param self QRegion*
/// @param dx int
/// @param dy int
///
void q_region_translate(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#translate)
///
/// @param self QRegion*
/// @param p QPoint*
///
void q_region_translate2(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#translated)
///
/// @param self QRegion*
/// @param dx int
/// @param dy int
///
QRegion* q_region_translated(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#translated)
///
/// @param self QRegion*
/// @param p QPoint*
///
QRegion* q_region_translated2(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#united)
///
/// @param self QRegion*
/// @param r QRegion*
///
QRegion* q_region_united(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#united)
///
/// @param self QRegion*
/// @param r QRect*
///
QRegion* q_region_united2(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#intersected)
///
/// @param self QRegion*
/// @param r QRegion*
///
QRegion* q_region_intersected(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#intersected)
///
/// @param self QRegion*
/// @param r QRect*
///
QRegion* q_region_intersected2(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#subtracted)
///
/// @param self QRegion*
/// @param r QRegion*
///
QRegion* q_region_subtracted(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#xored)
///
/// @param self QRegion*
/// @param r QRegion*
///
QRegion* q_region_xored(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#intersects)
///
/// @param self QRegion*
/// @param r QRegion*
///
bool q_region_intersects(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#intersects)
///
/// @param self QRegion*
/// @param r QRect*
///
bool q_region_intersects2(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#boundingRect)
///
/// @param self QRegion*
///
QRect* q_region_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#setRects)
///
/// @param self QRegion*
/// @param rect QRect*
/// @param num int
///
void q_region_set_rects(void* self, void* rect, int num);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#setRects)
///
/// @param self QRegion*
/// @param r libqt_list of QRect*
///
void q_region_set_rects2(void* self, libqt_list /* of QRect* */ r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#rects)
///
/// @param self QRegion*
///
/// @return libqt_list of QRect*
///
libqt_list q_region_rects(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#rectCount)
///
/// @param self QRegion*
///
int32_t q_region_rect_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-7c)
///
/// @param self QRegion*
/// @param r QRegion*
///
QRegion* q_region_operator_bitwise_or(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-2b)
///
/// @param self QRegion*
/// @param r QRegion*
///
QRegion* q_region_operator_plus(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-2b)
///
/// @param self QRegion*
/// @param r QRect*
///
QRegion* q_region_operator_plus2(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-and)
///
/// @param self QRegion*
/// @param r QRegion*
///
QRegion* q_region_operator_bitwise_and(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-and)
///
/// @param self QRegion*
/// @param r QRect*
///
QRegion* q_region_operator_bitwise_and2(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-)
///
/// @param self QRegion*
/// @param r QRegion*
///
QRegion* q_region_operator_minus(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-5e)
///
/// @param self QRegion*
/// @param r QRegion*
///
QRegion* q_region_operator_bitwise_not(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-7c-eq)
///
/// @param self QRegion*
/// @param r QRegion*
///
void q_region_operator_bitwise_or_assign(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-2b-eq)
///
/// @param self QRegion*
/// @param r QRegion*
///
QRegion* q_region_operator_plus_assign(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-2b-eq)
///
/// @param self QRegion*
/// @param r QRect*
///
QRegion* q_region_operator_plus_assign2(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-and-eq)
///
/// @param self QRegion*
/// @param r QRegion*
///
void q_region_operator_bitwise_and_assign(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-and-eq)
///
/// @param self QRegion*
/// @param r QRect*
///
void q_region_operator_bitwise_and_assign2(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator--eq)
///
/// @param self QRegion*
/// @param r QRegion*
///
QRegion* q_region_operator_minus_assign(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-5e-eq)
///
/// @param self QRegion*
/// @param r QRegion*
///
void q_region_operator_bitwise_not_assign(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-eq-eq)
///
/// @param self QRegion*
/// @param r QRegion*
///
bool q_region_operator_equal(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator-not-eq)
///
/// @param self QRegion*
/// @param r QRegion*
///
bool q_region_operator_not_equal(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#operator)
///
/// @param self QRegion*
///
QVariant* q_region_to_q_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#dtor.QRegion)
///
/// Delete this object from C++ memory.
///
/// @param self QRegion*
///
void q_region_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregion.html#public-types)

typedef enum {
    QREGION_REGIONTYPE_RECTANGLE = 0,
    QREGION_REGIONTYPE_ELLIPSE = 1
} QRegion__RegionType;

#endif

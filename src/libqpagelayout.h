#pragma once
#ifndef SRCQT6C_LIBQPAGELAYOUT_H
#define SRCQT6C_LIBQPAGELAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpagelayout.html

/// q_pagelayout_new constructs a new QPageLayout object.
///
QPageLayout* q_pagelayout_new();

/// q_pagelayout_new2 constructs a new QPageLayout object.
///
/// @param pageSize QPageSize*
/// @param orientation enum QPageLayout__Orientation
/// @param margins QMarginsF*
QPageLayout* q_pagelayout_new2(void* pageSize, int64_t orientation, void* margins);

/// q_pagelayout_new3 constructs a new QPageLayout object.
///
/// @param other QPageLayout*
QPageLayout* q_pagelayout_new3(void* other);

/// q_pagelayout_new4 constructs a new QPageLayout object.
///
/// @param pageSize QPageSize*
/// @param orientation enum QPageLayout__Orientation
/// @param margins QMarginsF*
/// @param units enum QPageLayout__Unit
QPageLayout* q_pagelayout_new4(void* pageSize, int64_t orientation, void* margins, int64_t units);

/// q_pagelayout_new5 constructs a new QPageLayout object.
///
/// @param pageSize QPageSize*
/// @param orientation enum QPageLayout__Orientation
/// @param margins QMarginsF*
/// @param units enum QPageLayout__Unit
/// @param minMargins QMarginsF*
QPageLayout* q_pagelayout_new5(void* pageSize, int64_t orientation, void* margins, int64_t units, void* minMargins);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#operator-eq)
///
/// @param self QPageLayout*
/// @param other QPageLayout*
void q_pagelayout_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#swap)
///
/// @param self QPageLayout*
/// @param other QPageLayout*
void q_pagelayout_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#isEquivalentTo)
///
/// @param self QPageLayout*
/// @param other QPageLayout*
bool q_pagelayout_is_equivalent_to(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#isValid)
///
/// @param self QPageLayout*
bool q_pagelayout_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setMode)
///
/// @param self QPageLayout*
/// @param mode enum QPageLayout__Mode
void q_pagelayout_set_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#mode)
///
/// @param self QPageLayout*
///
/// @return enum QPageLayout__Mode
int64_t q_pagelayout_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setPageSize)
///
/// @param self QPageLayout*
/// @param pageSize QPageSize*
void q_pagelayout_set_page_size(void* self, void* pageSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#pageSize)
///
/// @param self QPageLayout*
QPageSize* q_pagelayout_page_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setOrientation)
///
/// @param self QPageLayout*
/// @param orientation enum QPageLayout__Orientation
void q_pagelayout_set_orientation(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#orientation)
///
/// @param self QPageLayout*
///
/// @return enum QPageLayout__Orientation
int64_t q_pagelayout_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setUnits)
///
/// @param self QPageLayout*
/// @param units enum QPageLayout__Unit
void q_pagelayout_set_units(void* self, int64_t units);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#units)
///
/// @param self QPageLayout*
///
/// @return enum QPageLayout__Unit
int64_t q_pagelayout_units(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setMargins)
///
/// @param self QPageLayout*
/// @param margins QMarginsF*
bool q_pagelayout_set_margins(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setLeftMargin)
///
/// @param self QPageLayout*
/// @param leftMargin double
bool q_pagelayout_set_left_margin(void* self, double leftMargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setRightMargin)
///
/// @param self QPageLayout*
/// @param rightMargin double
bool q_pagelayout_set_right_margin(void* self, double rightMargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setTopMargin)
///
/// @param self QPageLayout*
/// @param topMargin double
bool q_pagelayout_set_top_margin(void* self, double topMargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setBottomMargin)
///
/// @param self QPageLayout*
/// @param bottomMargin double
bool q_pagelayout_set_bottom_margin(void* self, double bottomMargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#margins)
///
/// @param self QPageLayout*
QMarginsF* q_pagelayout_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#margins)
///
/// @param self QPageLayout*
/// @param units enum QPageLayout__Unit
QMarginsF* q_pagelayout_margins2(void* self, int64_t units);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#marginsPoints)
///
/// @param self QPageLayout*
QMargins* q_pagelayout_margins_points(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#marginsPixels)
///
/// @param self QPageLayout*
/// @param resolution int
QMargins* q_pagelayout_margins_pixels(void* self, int resolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setMinimumMargins)
///
/// @param self QPageLayout*
/// @param minMargins QMarginsF*
void q_pagelayout_set_minimum_margins(void* self, void* minMargins);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#minimumMargins)
///
/// @param self QPageLayout*
QMarginsF* q_pagelayout_minimum_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#maximumMargins)
///
/// @param self QPageLayout*
QMarginsF* q_pagelayout_maximum_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRect)
///
/// @param self QPageLayout*
QRectF* q_pagelayout_full_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRect)
///
/// @param self QPageLayout*
/// @param units enum QPageLayout__Unit
QRectF* q_pagelayout_full_rect2(void* self, int64_t units);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRectPoints)
///
/// @param self QPageLayout*
QRect* q_pagelayout_full_rect_points(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRectPixels)
///
/// @param self QPageLayout*
/// @param resolution int
QRect* q_pagelayout_full_rect_pixels(void* self, int resolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRect)
///
/// @param self QPageLayout*
QRectF* q_pagelayout_paint_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRect)
///
/// @param self QPageLayout*
/// @param units enum QPageLayout__Unit
QRectF* q_pagelayout_paint_rect2(void* self, int64_t units);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRectPoints)
///
/// @param self QPageLayout*
QRect* q_pagelayout_paint_rect_points(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRectPixels)
///
/// @param self QPageLayout*
/// @param resolution int
QRect* q_pagelayout_paint_rect_pixels(void* self, int resolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setPageSize)
///
/// @param self QPageLayout*
/// @param pageSize QPageSize*
/// @param minMargins QMarginsF*
void q_pagelayout_set_page_size2(void* self, void* pageSize, void* minMargins);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setMargins)
///
/// @param self QPageLayout*
/// @param margins QMarginsF*
/// @param outOfBoundsPolicy enum QPageLayout__OutOfBoundsPolicy
bool q_pagelayout_set_margins2(void* self, void* margins, int64_t outOfBoundsPolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setLeftMargin)
///
/// @param self QPageLayout*
/// @param leftMargin double
/// @param outOfBoundsPolicy enum QPageLayout__OutOfBoundsPolicy
bool q_pagelayout_set_left_margin2(void* self, double leftMargin, int64_t outOfBoundsPolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setRightMargin)
///
/// @param self QPageLayout*
/// @param rightMargin double
/// @param outOfBoundsPolicy enum QPageLayout__OutOfBoundsPolicy
bool q_pagelayout_set_right_margin2(void* self, double rightMargin, int64_t outOfBoundsPolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setTopMargin)
///
/// @param self QPageLayout*
/// @param topMargin double
/// @param outOfBoundsPolicy enum QPageLayout__OutOfBoundsPolicy
bool q_pagelayout_set_top_margin2(void* self, double topMargin, int64_t outOfBoundsPolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setBottomMargin)
///
/// @param self QPageLayout*
/// @param bottomMargin double
/// @param outOfBoundsPolicy enum QPageLayout__OutOfBoundsPolicy
bool q_pagelayout_set_bottom_margin2(void* self, double bottomMargin, int64_t outOfBoundsPolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#dtor.QPageLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QPageLayout*
void q_pagelayout_delete(void* self);

/// https://doc.qt.io/qt-6/qpagelayout.html#types

typedef enum {
    QPAGELAYOUT_UNIT_MILLIMETER = 0,
    QPAGELAYOUT_UNIT_POINT = 1,
    QPAGELAYOUT_UNIT_INCH = 2,
    QPAGELAYOUT_UNIT_PICA = 3,
    QPAGELAYOUT_UNIT_DIDOT = 4,
    QPAGELAYOUT_UNIT_CICERO = 5
} QPageLayout__Unit;

typedef enum {
    QPAGELAYOUT_ORIENTATION_PORTRAIT = 0,
    QPAGELAYOUT_ORIENTATION_LANDSCAPE = 1
} QPageLayout__Orientation;

typedef enum {
    QPAGELAYOUT_MODE_STANDARDMODE = 0,
    QPAGELAYOUT_MODE_FULLPAGEMODE = 1
} QPageLayout__Mode;

typedef enum {
    QPAGELAYOUT_OUTOFBOUNDSPOLICY_REJECT = 0,
    QPAGELAYOUT_OUTOFBOUNDSPOLICY_CLAMP = 1
} QPageLayout__OutOfBoundsPolicy;

#endif

#pragma once
#ifndef SRCQT6C_LIBQPAGELAYOUT_H
#define SRCQT6C_LIBQPAGELAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqmargins.h"
#include "libqpagesize.h"
#include "libqrect.h"

/// https://doc.qt.io/qt-6/qpagelayout.html

/// q_pagelayout_new constructs a new QPageLayout object.
///
///
QPageLayout* q_pagelayout_new();

/// q_pagelayout_new2 constructs a new QPageLayout object.
///
/// ``` QPageSize* pageSize, enum QPageLayout__Orientation orientation, QMarginsF* margins ```
QPageLayout* q_pagelayout_new2(void* pageSize, int64_t orientation, void* margins);

/// q_pagelayout_new3 constructs a new QPageLayout object.
///
/// ``` QPageLayout* other ```
QPageLayout* q_pagelayout_new3(void* other);

/// q_pagelayout_new4 constructs a new QPageLayout object.
///
/// ``` QPageSize* pageSize, enum QPageLayout__Orientation orientation, QMarginsF* margins, enum QPageLayout__Unit units ```
QPageLayout* q_pagelayout_new4(void* pageSize, int64_t orientation, void* margins, int64_t units);

/// q_pagelayout_new5 constructs a new QPageLayout object.
///
/// ``` QPageSize* pageSize, enum QPageLayout__Orientation orientation, QMarginsF* margins, enum QPageLayout__Unit units, QMarginsF* minMargins ```
QPageLayout* q_pagelayout_new5(void* pageSize, int64_t orientation, void* margins, int64_t units, void* minMargins);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#operator=)
///
/// ``` QPageLayout* self, QPageLayout* other ```
void q_pagelayout_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#swap)
///
/// ``` QPageLayout* self, QPageLayout* other ```
void q_pagelayout_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#isEquivalentTo)
///
/// ``` QPageLayout* self, QPageLayout* other ```
bool q_pagelayout_is_equivalent_to(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#isValid)
///
/// ``` QPageLayout* self ```
bool q_pagelayout_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setMode)
///
/// ``` QPageLayout* self, enum QPageLayout__Mode mode ```
void q_pagelayout_set_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#mode)
///
/// ``` QPageLayout* self ```
int64_t q_pagelayout_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setPageSize)
///
/// ``` QPageLayout* self, QPageSize* pageSize ```
void q_pagelayout_set_page_size(void* self, void* pageSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#pageSize)
///
/// ``` QPageLayout* self ```
QPageSize* q_pagelayout_page_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setOrientation)
///
/// ``` QPageLayout* self, enum QPageLayout__Orientation orientation ```
void q_pagelayout_set_orientation(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#orientation)
///
/// ``` QPageLayout* self ```
int64_t q_pagelayout_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setUnits)
///
/// ``` QPageLayout* self, enum QPageLayout__Unit units ```
void q_pagelayout_set_units(void* self, int64_t units);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#units)
///
/// ``` QPageLayout* self ```
int64_t q_pagelayout_units(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setMargins)
///
/// ``` QPageLayout* self, QMarginsF* margins ```
bool q_pagelayout_set_margins(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setLeftMargin)
///
/// ``` QPageLayout* self, double leftMargin ```
bool q_pagelayout_set_left_margin(void* self, double leftMargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setRightMargin)
///
/// ``` QPageLayout* self, double rightMargin ```
bool q_pagelayout_set_right_margin(void* self, double rightMargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setTopMargin)
///
/// ``` QPageLayout* self, double topMargin ```
bool q_pagelayout_set_top_margin(void* self, double topMargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setBottomMargin)
///
/// ``` QPageLayout* self, double bottomMargin ```
bool q_pagelayout_set_bottom_margin(void* self, double bottomMargin);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#margins)
///
/// ``` QPageLayout* self ```
QMarginsF* q_pagelayout_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#margins)
///
/// ``` QPageLayout* self, enum QPageLayout__Unit units ```
QMarginsF* q_pagelayout_margins_with_units(void* self, int64_t units);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#marginsPoints)
///
/// ``` QPageLayout* self ```
QMargins* q_pagelayout_margins_points(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#marginsPixels)
///
/// ``` QPageLayout* self, int resolution ```
QMargins* q_pagelayout_margins_pixels(void* self, int resolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setMinimumMargins)
///
/// ``` QPageLayout* self, QMarginsF* minMargins ```
void q_pagelayout_set_minimum_margins(void* self, void* minMargins);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#minimumMargins)
///
/// ``` QPageLayout* self ```
QMarginsF* q_pagelayout_minimum_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#maximumMargins)
///
/// ``` QPageLayout* self ```
QMarginsF* q_pagelayout_maximum_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRect)
///
/// ``` QPageLayout* self ```
QRectF* q_pagelayout_full_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRect)
///
/// ``` QPageLayout* self, enum QPageLayout__Unit units ```
QRectF* q_pagelayout_full_rect_with_units(void* self, int64_t units);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRectPoints)
///
/// ``` QPageLayout* self ```
QRect* q_pagelayout_full_rect_points(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRectPixels)
///
/// ``` QPageLayout* self, int resolution ```
QRect* q_pagelayout_full_rect_pixels(void* self, int resolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRect)
///
/// ``` QPageLayout* self ```
QRectF* q_pagelayout_paint_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRect)
///
/// ``` QPageLayout* self, enum QPageLayout__Unit units ```
QRectF* q_pagelayout_paint_rect_with_units(void* self, int64_t units);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRectPoints)
///
/// ``` QPageLayout* self ```
QRect* q_pagelayout_paint_rect_points(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRectPixels)
///
/// ``` QPageLayout* self, int resolution ```
QRect* q_pagelayout_paint_rect_pixels(void* self, int resolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setPageSize)
///
/// ``` QPageLayout* self, QPageSize* pageSize, QMarginsF* minMargins ```
void q_pagelayout_set_page_size2(void* self, void* pageSize, void* minMargins);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#dtor.QPageLayout)
///
/// Delete this object from C++ memory.
///
/// ``` QPageLayout* self ```
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

#endif

#include "libqmargins.hpp"
#include "libqpagesize.hpp"
#include "libqrect.hpp"
#include "libqpagelayout.hpp"
#include "libqpagelayout.h"

/// https://doc.qt.io/qt-6/qpagelayout.html

/// q_pagelayout_new constructs a new QPageLayout object.
///
///
QPageLayout* q_pagelayout_new() {
    return QPageLayout_new();
}

/// q_pagelayout_new2 constructs a new QPageLayout object.
///
/// ``` QPageSize* pageSize, enum QPageLayout__Orientation orientation, QMarginsF* margins ```
QPageLayout* q_pagelayout_new2(void* pageSize, int64_t orientation, void* margins) {
    return QPageLayout_new2((QPageSize*)pageSize, orientation, (QMarginsF*)margins);
}

/// q_pagelayout_new3 constructs a new QPageLayout object.
///
/// ``` QPageLayout* other ```
QPageLayout* q_pagelayout_new3(void* other) {
    return QPageLayout_new3((QPageLayout*)other);
}

/// q_pagelayout_new4 constructs a new QPageLayout object.
///
/// ``` QPageSize* pageSize, enum QPageLayout__Orientation orientation, QMarginsF* margins, enum QPageLayout__Unit units ```
QPageLayout* q_pagelayout_new4(void* pageSize, int64_t orientation, void* margins, int64_t units) {
    return QPageLayout_new4((QPageSize*)pageSize, orientation, (QMarginsF*)margins, units);
}

/// q_pagelayout_new5 constructs a new QPageLayout object.
///
/// ``` QPageSize* pageSize, enum QPageLayout__Orientation orientation, QMarginsF* margins, enum QPageLayout__Unit units, QMarginsF* minMargins ```
QPageLayout* q_pagelayout_new5(void* pageSize, int64_t orientation, void* margins, int64_t units, void* minMargins) {
    return QPageLayout_new5((QPageSize*)pageSize, orientation, (QMarginsF*)margins, units, (QMarginsF*)minMargins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#operator=)
///
/// ``` QPageLayout* self, QPageLayout* other ```
void q_pagelayout_operator_assign(void* self, void* other) {
    QPageLayout_OperatorAssign((QPageLayout*)self, (QPageLayout*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#swap)
///
/// ``` QPageLayout* self, QPageLayout* other ```
void q_pagelayout_swap(void* self, void* other) {
    QPageLayout_Swap((QPageLayout*)self, (QPageLayout*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#isEquivalentTo)
///
/// ``` QPageLayout* self, QPageLayout* other ```
bool q_pagelayout_is_equivalent_to(void* self, void* other) {
    return QPageLayout_IsEquivalentTo((QPageLayout*)self, (QPageLayout*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#isValid)
///
/// ``` QPageLayout* self ```
bool q_pagelayout_is_valid(void* self) {
    return QPageLayout_IsValid((QPageLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setMode)
///
/// ``` QPageLayout* self, enum QPageLayout__Mode mode ```
void q_pagelayout_set_mode(void* self, int64_t mode) {
    QPageLayout_SetMode((QPageLayout*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#mode)
///
/// ``` QPageLayout* self ```
int64_t q_pagelayout_mode(void* self) {
    return QPageLayout_Mode((QPageLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setPageSize)
///
/// ``` QPageLayout* self, QPageSize* pageSize ```
void q_pagelayout_set_page_size(void* self, void* pageSize) {
    QPageLayout_SetPageSize((QPageLayout*)self, (QPageSize*)pageSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#pageSize)
///
/// ``` QPageLayout* self ```
QPageSize* q_pagelayout_page_size(void* self) {
    return QPageLayout_PageSize((QPageLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setOrientation)
///
/// ``` QPageLayout* self, enum QPageLayout__Orientation orientation ```
void q_pagelayout_set_orientation(void* self, int64_t orientation) {
    QPageLayout_SetOrientation((QPageLayout*)self, orientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#orientation)
///
/// ``` QPageLayout* self ```
int64_t q_pagelayout_orientation(void* self) {
    return QPageLayout_Orientation((QPageLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setUnits)
///
/// ``` QPageLayout* self, enum QPageLayout__Unit units ```
void q_pagelayout_set_units(void* self, int64_t units) {
    QPageLayout_SetUnits((QPageLayout*)self, units);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#units)
///
/// ``` QPageLayout* self ```
int64_t q_pagelayout_units(void* self) {
    return QPageLayout_Units((QPageLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setMargins)
///
/// ``` QPageLayout* self, QMarginsF* margins ```
bool q_pagelayout_set_margins(void* self, void* margins) {
    return QPageLayout_SetMargins((QPageLayout*)self, (QMarginsF*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setLeftMargin)
///
/// ``` QPageLayout* self, double leftMargin ```
bool q_pagelayout_set_left_margin(void* self, double leftMargin) {
    return QPageLayout_SetLeftMargin((QPageLayout*)self, leftMargin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setRightMargin)
///
/// ``` QPageLayout* self, double rightMargin ```
bool q_pagelayout_set_right_margin(void* self, double rightMargin) {
    return QPageLayout_SetRightMargin((QPageLayout*)self, rightMargin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setTopMargin)
///
/// ``` QPageLayout* self, double topMargin ```
bool q_pagelayout_set_top_margin(void* self, double topMargin) {
    return QPageLayout_SetTopMargin((QPageLayout*)self, topMargin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setBottomMargin)
///
/// ``` QPageLayout* self, double bottomMargin ```
bool q_pagelayout_set_bottom_margin(void* self, double bottomMargin) {
    return QPageLayout_SetBottomMargin((QPageLayout*)self, bottomMargin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#margins)
///
/// ``` QPageLayout* self ```
QMarginsF* q_pagelayout_margins(void* self) {
    return QPageLayout_Margins((QPageLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#margins)
///
/// ``` QPageLayout* self, enum QPageLayout__Unit units ```
QMarginsF* q_pagelayout_margins_with_units(void* self, int64_t units) {
    return QPageLayout_MarginsWithUnits((QPageLayout*)self, units);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#marginsPoints)
///
/// ``` QPageLayout* self ```
QMargins* q_pagelayout_margins_points(void* self) {
    return QPageLayout_MarginsPoints((QPageLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#marginsPixels)
///
/// ``` QPageLayout* self, int resolution ```
QMargins* q_pagelayout_margins_pixels(void* self, int resolution) {
    return QPageLayout_MarginsPixels((QPageLayout*)self, resolution);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setMinimumMargins)
///
/// ``` QPageLayout* self, QMarginsF* minMargins ```
void q_pagelayout_set_minimum_margins(void* self, void* minMargins) {
    QPageLayout_SetMinimumMargins((QPageLayout*)self, (QMarginsF*)minMargins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#minimumMargins)
///
/// ``` QPageLayout* self ```
QMarginsF* q_pagelayout_minimum_margins(void* self) {
    return QPageLayout_MinimumMargins((QPageLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#maximumMargins)
///
/// ``` QPageLayout* self ```
QMarginsF* q_pagelayout_maximum_margins(void* self) {
    return QPageLayout_MaximumMargins((QPageLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRect)
///
/// ``` QPageLayout* self ```
QRectF* q_pagelayout_full_rect(void* self) {
    return QPageLayout_FullRect((QPageLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRect)
///
/// ``` QPageLayout* self, enum QPageLayout__Unit units ```
QRectF* q_pagelayout_full_rect_with_units(void* self, int64_t units) {
    return QPageLayout_FullRectWithUnits((QPageLayout*)self, units);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRectPoints)
///
/// ``` QPageLayout* self ```
QRect* q_pagelayout_full_rect_points(void* self) {
    return QPageLayout_FullRectPoints((QPageLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#fullRectPixels)
///
/// ``` QPageLayout* self, int resolution ```
QRect* q_pagelayout_full_rect_pixels(void* self, int resolution) {
    return QPageLayout_FullRectPixels((QPageLayout*)self, resolution);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRect)
///
/// ``` QPageLayout* self ```
QRectF* q_pagelayout_paint_rect(void* self) {
    return QPageLayout_PaintRect((QPageLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRect)
///
/// ``` QPageLayout* self, enum QPageLayout__Unit units ```
QRectF* q_pagelayout_paint_rect_with_units(void* self, int64_t units) {
    return QPageLayout_PaintRectWithUnits((QPageLayout*)self, units);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRectPoints)
///
/// ``` QPageLayout* self ```
QRect* q_pagelayout_paint_rect_points(void* self) {
    return QPageLayout_PaintRectPoints((QPageLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#paintRectPixels)
///
/// ``` QPageLayout* self, int resolution ```
QRect* q_pagelayout_paint_rect_pixels(void* self, int resolution) {
    return QPageLayout_PaintRectPixels((QPageLayout*)self, resolution);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagelayout.html#setPageSize)
///
/// ``` QPageLayout* self, QPageSize* pageSize, QMarginsF* minMargins ```
void q_pagelayout_set_page_size2(void* self, void* pageSize, void* minMargins) {
    QPageLayout_SetPageSize2((QPageLayout*)self, (QPageSize*)pageSize, (QMarginsF*)minMargins);
}

/// Delete this object from C++ memory.
///
/// ``` QPageLayout* self ```
void q_pagelayout_delete(void* self) {
    QPageLayout_Delete((QPageLayout*)(self));
}
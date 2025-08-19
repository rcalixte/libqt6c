#include "libqmargins.hpp"
#include "libqpagesize.hpp"
#include "libqrect.hpp"
#include "libqpagelayout.hpp"
#include "libqpagelayout.h"

QPageLayout* q_pagelayout_new() {
    return QPageLayout_new();
}

QPageLayout* q_pagelayout_new2(void* pageSize, int32_t orientation, void* margins) {
    return QPageLayout_new2((QPageSize*)pageSize, orientation, (QMarginsF*)margins);
}

QPageLayout* q_pagelayout_new3(void* other) {
    return QPageLayout_new3((QPageLayout*)other);
}

QPageLayout* q_pagelayout_new4(void* pageSize, int32_t orientation, void* margins, int32_t units) {
    return QPageLayout_new4((QPageSize*)pageSize, orientation, (QMarginsF*)margins, units);
}

QPageLayout* q_pagelayout_new5(void* pageSize, int32_t orientation, void* margins, int32_t units, void* minMargins) {
    return QPageLayout_new5((QPageSize*)pageSize, orientation, (QMarginsF*)margins, units, (QMarginsF*)minMargins);
}

void q_pagelayout_operator_assign(void* self, void* other) {
    QPageLayout_OperatorAssign((QPageLayout*)self, (QPageLayout*)other);
}

void q_pagelayout_swap(void* self, void* other) {
    QPageLayout_Swap((QPageLayout*)self, (QPageLayout*)other);
}

bool q_pagelayout_is_equivalent_to(void* self, void* other) {
    return QPageLayout_IsEquivalentTo((QPageLayout*)self, (QPageLayout*)other);
}

bool q_pagelayout_is_valid(void* self) {
    return QPageLayout_IsValid((QPageLayout*)self);
}

void q_pagelayout_set_mode(void* self, int32_t mode) {
    QPageLayout_SetMode((QPageLayout*)self, mode);
}

int32_t q_pagelayout_mode(void* self) {
    return QPageLayout_Mode((QPageLayout*)self);
}

void q_pagelayout_set_page_size(void* self, void* pageSize) {
    QPageLayout_SetPageSize((QPageLayout*)self, (QPageSize*)pageSize);
}

QPageSize* q_pagelayout_page_size(void* self) {
    return QPageLayout_PageSize((QPageLayout*)self);
}

void q_pagelayout_set_orientation(void* self, int32_t orientation) {
    QPageLayout_SetOrientation((QPageLayout*)self, orientation);
}

int32_t q_pagelayout_orientation(void* self) {
    return QPageLayout_Orientation((QPageLayout*)self);
}

void q_pagelayout_set_units(void* self, int32_t units) {
    QPageLayout_SetUnits((QPageLayout*)self, units);
}

int32_t q_pagelayout_units(void* self) {
    return QPageLayout_Units((QPageLayout*)self);
}

bool q_pagelayout_set_margins(void* self, void* margins) {
    return QPageLayout_SetMargins((QPageLayout*)self, (QMarginsF*)margins);
}

bool q_pagelayout_set_left_margin(void* self, double leftMargin) {
    return QPageLayout_SetLeftMargin((QPageLayout*)self, leftMargin);
}

bool q_pagelayout_set_right_margin(void* self, double rightMargin) {
    return QPageLayout_SetRightMargin((QPageLayout*)self, rightMargin);
}

bool q_pagelayout_set_top_margin(void* self, double topMargin) {
    return QPageLayout_SetTopMargin((QPageLayout*)self, topMargin);
}

bool q_pagelayout_set_bottom_margin(void* self, double bottomMargin) {
    return QPageLayout_SetBottomMargin((QPageLayout*)self, bottomMargin);
}

QMarginsF* q_pagelayout_margins(void* self) {
    return QPageLayout_Margins((QPageLayout*)self);
}

QMarginsF* q_pagelayout_margins2(void* self, int32_t units) {
    return QPageLayout_Margins2((QPageLayout*)self, units);
}

QMargins* q_pagelayout_margins_points(void* self) {
    return QPageLayout_MarginsPoints((QPageLayout*)self);
}

QMargins* q_pagelayout_margins_pixels(void* self, int resolution) {
    return QPageLayout_MarginsPixels((QPageLayout*)self, resolution);
}

void q_pagelayout_set_minimum_margins(void* self, void* minMargins) {
    QPageLayout_SetMinimumMargins((QPageLayout*)self, (QMarginsF*)minMargins);
}

QMarginsF* q_pagelayout_minimum_margins(void* self) {
    return QPageLayout_MinimumMargins((QPageLayout*)self);
}

QMarginsF* q_pagelayout_maximum_margins(void* self) {
    return QPageLayout_MaximumMargins((QPageLayout*)self);
}

QRectF* q_pagelayout_full_rect(void* self) {
    return QPageLayout_FullRect((QPageLayout*)self);
}

QRectF* q_pagelayout_full_rect2(void* self, int32_t units) {
    return QPageLayout_FullRect2((QPageLayout*)self, units);
}

QRect* q_pagelayout_full_rect_points(void* self) {
    return QPageLayout_FullRectPoints((QPageLayout*)self);
}

QRect* q_pagelayout_full_rect_pixels(void* self, int resolution) {
    return QPageLayout_FullRectPixels((QPageLayout*)self, resolution);
}

QRectF* q_pagelayout_paint_rect(void* self) {
    return QPageLayout_PaintRect((QPageLayout*)self);
}

QRectF* q_pagelayout_paint_rect2(void* self, int32_t units) {
    return QPageLayout_PaintRect2((QPageLayout*)self, units);
}

QRect* q_pagelayout_paint_rect_points(void* self) {
    return QPageLayout_PaintRectPoints((QPageLayout*)self);
}

QRect* q_pagelayout_paint_rect_pixels(void* self, int resolution) {
    return QPageLayout_PaintRectPixels((QPageLayout*)self, resolution);
}

void q_pagelayout_set_page_size2(void* self, void* pageSize, void* minMargins) {
    QPageLayout_SetPageSize2((QPageLayout*)self, (QPageSize*)pageSize, (QMarginsF*)minMargins);
}

bool q_pagelayout_set_margins2(void* self, void* margins, int32_t outOfBoundsPolicy) {
    return QPageLayout_SetMargins2((QPageLayout*)self, (QMarginsF*)margins, outOfBoundsPolicy);
}

bool q_pagelayout_set_left_margin2(void* self, double leftMargin, int32_t outOfBoundsPolicy) {
    return QPageLayout_SetLeftMargin2((QPageLayout*)self, leftMargin, outOfBoundsPolicy);
}

bool q_pagelayout_set_right_margin2(void* self, double rightMargin, int32_t outOfBoundsPolicy) {
    return QPageLayout_SetRightMargin2((QPageLayout*)self, rightMargin, outOfBoundsPolicy);
}

bool q_pagelayout_set_top_margin2(void* self, double topMargin, int32_t outOfBoundsPolicy) {
    return QPageLayout_SetTopMargin2((QPageLayout*)self, topMargin, outOfBoundsPolicy);
}

bool q_pagelayout_set_bottom_margin2(void* self, double bottomMargin, int32_t outOfBoundsPolicy) {
    return QPageLayout_SetBottomMargin2((QPageLayout*)self, bottomMargin, outOfBoundsPolicy);
}

void q_pagelayout_delete(void* self) {
    QPageLayout_Delete((QPageLayout*)(self));
}

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

QPageLayout* q_pagelayout_new();
QPageLayout* q_pagelayout_new2(void* pageSize, int64_t orientation, void* margins);
QPageLayout* q_pagelayout_new3(void* other);
QPageLayout* q_pagelayout_new4(void* pageSize, int64_t orientation, void* margins, int64_t units);
QPageLayout* q_pagelayout_new5(void* pageSize, int64_t orientation, void* margins, int64_t units, void* minMargins);
void q_pagelayout_operator_assign(void* self, void* other);
void q_pagelayout_swap(void* self, void* other);
bool q_pagelayout_is_equivalent_to(void* self, void* other);
bool q_pagelayout_is_valid(void* self);
void q_pagelayout_set_mode(void* self, int64_t mode);
int64_t q_pagelayout_mode(void* self);
void q_pagelayout_set_page_size(void* self, void* pageSize);
QPageSize* q_pagelayout_page_size(void* self);
void q_pagelayout_set_orientation(void* self, int64_t orientation);
int64_t q_pagelayout_orientation(void* self);
void q_pagelayout_set_units(void* self, int64_t units);
int64_t q_pagelayout_units(void* self);
bool q_pagelayout_set_margins(void* self, void* margins);
bool q_pagelayout_set_left_margin(void* self, double leftMargin);
bool q_pagelayout_set_right_margin(void* self, double rightMargin);
bool q_pagelayout_set_top_margin(void* self, double topMargin);
bool q_pagelayout_set_bottom_margin(void* self, double bottomMargin);
QMarginsF* q_pagelayout_margins(void* self);
QMarginsF* q_pagelayout_margins_with_units(void* self, int64_t units);
QMargins* q_pagelayout_margins_points(void* self);
QMargins* q_pagelayout_margins_pixels(void* self, int resolution);
void q_pagelayout_set_minimum_margins(void* self, void* minMargins);
QMarginsF* q_pagelayout_minimum_margins(void* self);
QMarginsF* q_pagelayout_maximum_margins(void* self);
QRectF* q_pagelayout_full_rect(void* self);
QRectF* q_pagelayout_full_rect_with_units(void* self, int64_t units);
QRect* q_pagelayout_full_rect_points(void* self);
QRect* q_pagelayout_full_rect_pixels(void* self, int resolution);
QRectF* q_pagelayout_paint_rect(void* self);
QRectF* q_pagelayout_paint_rect_with_units(void* self, int64_t units);
QRect* q_pagelayout_paint_rect_points(void* self);
QRect* q_pagelayout_paint_rect_pixels(void* self, int resolution);
void q_pagelayout_set_page_size2(void* self, void* pageSize, void* minMargins);
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

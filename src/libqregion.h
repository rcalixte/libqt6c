#pragma once
#ifndef SRCQT6C_LIBQREGION_H
#define SRCQT6C_LIBQREGION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbitmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqvariant.h"

QRegion* q_region_new();
QRegion* q_region_new2(int x, int y, int w, int h);
QRegion* q_region_new3(void* r);
QRegion* q_region_new4(void* region);
QRegion* q_region_new5(void* bitmap);
QRegion* q_region_new6(int x, int y, int w, int h, int64_t t);
QRegion* q_region_new7(void* r, int64_t t);
void q_region_operator_assign(void* self, void* param1);
void q_region_swap(void* self, void* other);
bool q_region_is_empty(void* self);
bool q_region_is_null(void* self);
QRect* q_region_begin(void* self);
QRect* q_region_cbegin(void* self);
QRect* q_region_end(void* self);
QRect* q_region_cend(void* self);
bool q_region_contains(void* self, void* p);
bool q_region_contains_with_q_rect(void* self, void* r);
void q_region_translate(void* self, int dx, int dy);
void q_region_translate_with_q_point(void* self, void* p);
QRegion* q_region_translated(void* self, int dx, int dy);
QRegion* q_region_translated_with_q_point(void* self, void* p);
QRegion* q_region_united(void* self, void* r);
QRegion* q_region_united_with_q_rect(void* self, void* r);
QRegion* q_region_intersected(void* self, void* r);
QRegion* q_region_intersected_with_q_rect(void* self, void* r);
QRegion* q_region_subtracted(void* self, void* r);
QRegion* q_region_xored(void* self, void* r);
bool q_region_intersects(void* self, void* r);
bool q_region_intersects_with_q_rect(void* self, void* r);
QRect* q_region_bounding_rect(void* self);
void q_region_set_rects(void* self, void* rect, int num);
int32_t q_region_rect_count(void* self);
QRegion* q_region_operator_bitwise_or(void* self, void* r);
QRegion* q_region_operator_plus(void* self, void* r);
QRegion* q_region_operator_plus_with_q_rect(void* self, void* r);
QRegion* q_region_operator_bitwise_and(void* self, void* r);
QRegion* q_region_operator_bitwise_and_with_q_rect(void* self, void* r);
QRegion* q_region_operator_minus(void* self, void* r);
QRegion* q_region_operator_bitwise_not(void* self, void* r);
void q_region_operator_bitwise_or_assign(void* self, void* r);
QRegion* q_region_operator_plus_assign(void* self, void* r);
QRegion* q_region_operator_plus_assign_with_q_rect(void* self, void* r);
void q_region_operator_bitwise_and_assign(void* self, void* r);
void q_region_operator_bitwise_and_assign_with_q_rect(void* self, void* r);
QRegion* q_region_operator_minus_assign(void* self, void* r);
void q_region_operator_bitwise_not_assign(void* self, void* r);
bool q_region_operator_equal(void* self, void* r);
bool q_region_operator_not_equal(void* self, void* r);
QVariant* q_region_to_q_variant(void* self);
void q_region_delete(void* self);

/// https://doc.qt.io/qt-6/qregion.html#types

typedef enum {
    QREGION_REGIONTYPE_RECTANGLE = 0,
    QREGION_REGIONTYPE_ELLIPSE = 1
} QRegion__RegionType;

#endif

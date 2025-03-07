#pragma once
#ifndef SRCQT6C_LIBQPAINTERPATH_H
#define SRCQT6C_LIBQPAINTERPATH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqfont.h"
#include "libqpen.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include <string.h>

QPainterPath* q_painterpath_new();
QPainterPath* q_painterpath_new2(void* startPoint);
QPainterPath* q_painterpath_new3(void* other);
void q_painterpath_operator_assign(void* self, void* other);
void q_painterpath_swap(void* self, void* other);
void q_painterpath_clear(void* self);
void q_painterpath_reserve(void* self, int size);
int32_t q_painterpath_capacity(void* self);
void q_painterpath_close_subpath(void* self);
void q_painterpath_move_to(void* self, void* p);
void q_painterpath_move_to2(void* self, double x, double y);
void q_painterpath_line_to(void* self, void* p);
void q_painterpath_line_to2(void* self, double x, double y);
void q_painterpath_arc_move_to(void* self, void* rect, double angle);
void q_painterpath_arc_move_to2(void* self, double x, double y, double w, double h, double angle);
void q_painterpath_arc_to(void* self, void* rect, double startAngle, double arcLength);
void q_painterpath_arc_to2(void* self, double x, double y, double w, double h, double startAngle, double arcLength);
void q_painterpath_cubic_to(void* self, void* ctrlPt1, void* ctrlPt2, void* endPt);
void q_painterpath_cubic_to2(void* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty);
void q_painterpath_quad_to(void* self, void* ctrlPt, void* endPt);
void q_painterpath_quad_to2(void* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty);
QPointF* q_painterpath_current_position(void* self);
void q_painterpath_add_rect(void* self, void* rect);
void q_painterpath_add_rect2(void* self, double x, double y, double w, double h);
void q_painterpath_add_ellipse(void* self, void* rect);
void q_painterpath_add_ellipse2(void* self, double x, double y, double w, double h);
void q_painterpath_add_ellipse3(void* self, void* center, double rx, double ry);
void q_painterpath_add_text(void* self, void* point, void* f, const char* text);
void q_painterpath_add_text2(void* self, double x, double y, void* f, const char* text);
void q_painterpath_add_path(void* self, void* path);
void q_painterpath_add_region(void* self, void* region);
void q_painterpath_add_rounded_rect(void* self, void* rect, double xRadius, double yRadius);
void q_painterpath_add_rounded_rect2(void* self, double x, double y, double w, double h, double xRadius, double yRadius);
void q_painterpath_connect_path(void* self, void* path);
bool q_painterpath_contains(void* self, void* pt);
bool q_painterpath_contains_with_rect(void* self, void* rect);
bool q_painterpath_intersects(void* self, void* rect);
void q_painterpath_translate(void* self, double dx, double dy);
void q_painterpath_translate_with_offset(void* self, void* offset);
QPainterPath* q_painterpath_translated(void* self, double dx, double dy);
QPainterPath* q_painterpath_translated_with_offset(void* self, void* offset);
QRectF* q_painterpath_bounding_rect(void* self);
QRectF* q_painterpath_control_point_rect(void* self);
int64_t q_painterpath_fill_rule(void* self);
void q_painterpath_set_fill_rule(void* self, int64_t fillRule);
bool q_painterpath_is_empty(void* self);
QPainterPath* q_painterpath_to_reversed(void* self);
int32_t q_painterpath_element_count(void* self);
QPainterPath__Element* q_painterpath_element_at(void* self, int i);
void q_painterpath_set_element_position_at(void* self, int i, double x, double y);
double q_painterpath_length(void* self);
double q_painterpath_percent_at_length(void* self, double t);
QPointF* q_painterpath_point_at_percent(void* self, double t);
double q_painterpath_angle_at_percent(void* self, double t);
double q_painterpath_slope_at_percent(void* self, double t);
bool q_painterpath_intersects_with_q_painter_path(void* self, void* p);
bool q_painterpath_contains_with_q_painter_path(void* self, void* p);
QPainterPath* q_painterpath_united(void* self, void* r);
QPainterPath* q_painterpath_intersected(void* self, void* r);
QPainterPath* q_painterpath_subtracted(void* self, void* r);
QPainterPath* q_painterpath_simplified(void* self);
bool q_painterpath_operator_equal(void* self, void* other);
bool q_painterpath_operator_not_equal(void* self, void* other);
QPainterPath* q_painterpath_operator_bitwise_and(void* self, void* other);
QPainterPath* q_painterpath_operator_bitwise_or(void* self, void* other);
QPainterPath* q_painterpath_operator_plus(void* self, void* other);
QPainterPath* q_painterpath_operator_minus(void* self, void* other);
void q_painterpath_operator_bitwise_and_assign(void* self, void* other);
void q_painterpath_operator_bitwise_or_assign(void* self, void* other);
QPainterPath* q_painterpath_operator_plus_assign(void* self, void* other);
QPainterPath* q_painterpath_operator_minus_assign(void* self, void* other);
void q_painterpath_add_rounded_rect4(void* self, void* rect, double xRadius, double yRadius, int64_t mode);
void q_painterpath_add_rounded_rect7(void* self, double x, double y, double w, double h, double xRadius, double yRadius, int64_t mode);
void q_painterpath_delete(void* self);

QPainterPathStroker* q_painterpathstroker_new();
QPainterPathStroker* q_painterpathstroker_new2(void* pen);
void q_painterpathstroker_set_width(void* self, double width);
double q_painterpathstroker_width(void* self);
void q_painterpathstroker_set_cap_style(void* self, int64_t style);
int64_t q_painterpathstroker_cap_style(void* self);
void q_painterpathstroker_set_join_style(void* self, int64_t style);
int64_t q_painterpathstroker_join_style(void* self);
void q_painterpathstroker_set_miter_limit(void* self, double length);
double q_painterpathstroker_miter_limit(void* self);
void q_painterpathstroker_set_curve_threshold(void* self, double threshold);
double q_painterpathstroker_curve_threshold(void* self);
void q_painterpathstroker_set_dash_pattern(void* self, int64_t dashPattern);
void q_painterpathstroker_set_dash_pattern_with_dash_pattern(void* self, double* dashPattern[]);
libqt_list /* of double */ q_painterpathstroker_dash_pattern(void* self);
void q_painterpathstroker_set_dash_offset(void* self, double offset);
double q_painterpathstroker_dash_offset(void* self);
QPainterPath* q_painterpathstroker_create_stroke(void* self, void* path);
void q_painterpathstroker_delete(void* self);

bool q_painterpath__element_is_move_to(void* self);
bool q_painterpath__element_is_line_to(void* self);
bool q_painterpath__element_is_curve_to(void* self);
QPointF* q_painterpath__element_to_q_point_f(void* self);
bool q_painterpath__element_operator_equal(void* self, void* e);
bool q_painterpath__element_operator_not_equal(void* self, void* e);
void q_painterpath__element_delete(void* self);

/// https://doc.qt.io/qt-6/qpainterpath.html#types

typedef enum {
    QPAINTERPATH_ELEMENTTYPE_MOVETOELEMENT = 0,
    QPAINTERPATH_ELEMENTTYPE_LINETOELEMENT = 1,
    QPAINTERPATH_ELEMENTTYPE_CURVETOELEMENT = 2,
    QPAINTERPATH_ELEMENTTYPE_CURVETODATAELEMENT = 3
} QPainterPath__ElementType;

#endif

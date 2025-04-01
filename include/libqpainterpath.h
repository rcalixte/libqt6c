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

/// https://doc.qt.io/qt-6/qpainterpath.html

/// q_painterpath_new constructs a new QPainterPath object.
///
///
QPainterPath* q_painterpath_new();

/// q_painterpath_new2 constructs a new QPainterPath object.
///
/// ``` QPointF* startPoint ```
QPainterPath* q_painterpath_new2(void* startPoint);

/// q_painterpath_new3 constructs a new QPainterPath object.
///
/// ``` QPainterPath* other ```
QPainterPath* q_painterpath_new3(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator=)
///
/// ``` QPainterPath* self, QPainterPath* other ```
void q_painterpath_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#swap)
///
/// ``` QPainterPath* self, QPainterPath* other ```
void q_painterpath_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#clear)
///
/// ``` QPainterPath* self ```
void q_painterpath_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#reserve)
///
/// ``` QPainterPath* self, int size ```
void q_painterpath_reserve(void* self, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#capacity)
///
/// ``` QPainterPath* self ```
int32_t q_painterpath_capacity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#closeSubpath)
///
/// ``` QPainterPath* self ```
void q_painterpath_close_subpath(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#moveTo)
///
/// ``` QPainterPath* self, QPointF* p ```
void q_painterpath_move_to(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#moveTo)
///
/// ``` QPainterPath* self, double x, double y ```
void q_painterpath_move_to2(void* self, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#lineTo)
///
/// ``` QPainterPath* self, QPointF* p ```
void q_painterpath_line_to(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#lineTo)
///
/// ``` QPainterPath* self, double x, double y ```
void q_painterpath_line_to2(void* self, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#arcMoveTo)
///
/// ``` QPainterPath* self, QRectF* rect, double angle ```
void q_painterpath_arc_move_to(void* self, void* rect, double angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#arcMoveTo)
///
/// ``` QPainterPath* self, double x, double y, double w, double h, double angle ```
void q_painterpath_arc_move_to2(void* self, double x, double y, double w, double h, double angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#arcTo)
///
/// ``` QPainterPath* self, QRectF* rect, double startAngle, double arcLength ```
void q_painterpath_arc_to(void* self, void* rect, double startAngle, double arcLength);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#arcTo)
///
/// ``` QPainterPath* self, double x, double y, double w, double h, double startAngle, double arcLength ```
void q_painterpath_arc_to2(void* self, double x, double y, double w, double h, double startAngle, double arcLength);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#cubicTo)
///
/// ``` QPainterPath* self, QPointF* ctrlPt1, QPointF* ctrlPt2, QPointF* endPt ```
void q_painterpath_cubic_to(void* self, void* ctrlPt1, void* ctrlPt2, void* endPt);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#cubicTo)
///
/// ``` QPainterPath* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty ```
void q_painterpath_cubic_to2(void* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#quadTo)
///
/// ``` QPainterPath* self, QPointF* ctrlPt, QPointF* endPt ```
void q_painterpath_quad_to(void* self, void* ctrlPt, void* endPt);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#quadTo)
///
/// ``` QPainterPath* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty ```
void q_painterpath_quad_to2(void* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#currentPosition)
///
/// ``` QPainterPath* self ```
QPointF* q_painterpath_current_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRect)
///
/// ``` QPainterPath* self, QRectF* rect ```
void q_painterpath_add_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRect)
///
/// ``` QPainterPath* self, double x, double y, double w, double h ```
void q_painterpath_add_rect2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
///
/// ``` QPainterPath* self, QRectF* rect ```
void q_painterpath_add_ellipse(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
///
/// ``` QPainterPath* self, double x, double y, double w, double h ```
void q_painterpath_add_ellipse2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
///
/// ``` QPainterPath* self, QPointF* center, double rx, double ry ```
void q_painterpath_add_ellipse3(void* self, void* center, double rx, double ry);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addText)
///
/// ``` QPainterPath* self, QPointF* point, QFont* f, const char* text ```
void q_painterpath_add_text(void* self, void* point, void* f, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addText)
///
/// ``` QPainterPath* self, double x, double y, QFont* f, const char* text ```
void q_painterpath_add_text2(void* self, double x, double y, void* f, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addPath)
///
/// ``` QPainterPath* self, QPainterPath* path ```
void q_painterpath_add_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRegion)
///
/// ``` QPainterPath* self, QRegion* region ```
void q_painterpath_add_region(void* self, void* region);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// ``` QPainterPath* self, QRectF* rect, double xRadius, double yRadius ```
void q_painterpath_add_rounded_rect(void* self, void* rect, double xRadius, double yRadius);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// ``` QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius ```
void q_painterpath_add_rounded_rect2(void* self, double x, double y, double w, double h, double xRadius, double yRadius);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#connectPath)
///
/// ``` QPainterPath* self, QPainterPath* path ```
void q_painterpath_connect_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#contains)
///
/// ``` QPainterPath* self, QPointF* pt ```
bool q_painterpath_contains(void* self, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#contains)
///
/// ``` QPainterPath* self, QRectF* rect ```
bool q_painterpath_contains_with_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#intersects)
///
/// ``` QPainterPath* self, QRectF* rect ```
bool q_painterpath_intersects(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#translate)
///
/// ``` QPainterPath* self, double dx, double dy ```
void q_painterpath_translate(void* self, double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#translate)
///
/// ``` QPainterPath* self, QPointF* offset ```
void q_painterpath_translate_with_offset(void* self, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#translated)
///
/// ``` QPainterPath* self, double dx, double dy ```
QPainterPath* q_painterpath_translated(void* self, double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#translated)
///
/// ``` QPainterPath* self, QPointF* offset ```
QPainterPath* q_painterpath_translated_with_offset(void* self, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#boundingRect)
///
/// ``` QPainterPath* self ```
QRectF* q_painterpath_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#controlPointRect)
///
/// ``` QPainterPath* self ```
QRectF* q_painterpath_control_point_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#fillRule)
///
/// ``` QPainterPath* self ```
int64_t q_painterpath_fill_rule(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#setFillRule)
///
/// ``` QPainterPath* self, enum Qt__FillRule fillRule ```
void q_painterpath_set_fill_rule(void* self, int64_t fillRule);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#isEmpty)
///
/// ``` QPainterPath* self ```
bool q_painterpath_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#toReversed)
///
/// ``` QPainterPath* self ```
QPainterPath* q_painterpath_to_reversed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#elementCount)
///
/// ``` QPainterPath* self ```
int32_t q_painterpath_element_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#elementAt)
///
/// ``` QPainterPath* self, int i ```
QPainterPath__Element* q_painterpath_element_at(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#setElementPositionAt)
///
/// ``` QPainterPath* self, int i, double x, double y ```
void q_painterpath_set_element_position_at(void* self, int i, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#length)
///
/// ``` QPainterPath* self ```
double q_painterpath_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#percentAtLength)
///
/// ``` QPainterPath* self, double t ```
double q_painterpath_percent_at_length(void* self, double t);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#pointAtPercent)
///
/// ``` QPainterPath* self, double t ```
QPointF* q_painterpath_point_at_percent(void* self, double t);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#angleAtPercent)
///
/// ``` QPainterPath* self, double t ```
double q_painterpath_angle_at_percent(void* self, double t);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#slopeAtPercent)
///
/// ``` QPainterPath* self, double t ```
double q_painterpath_slope_at_percent(void* self, double t);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#intersects)
///
/// ``` QPainterPath* self, QPainterPath* p ```
bool q_painterpath_intersects_with_q_painter_path(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#contains)
///
/// ``` QPainterPath* self, QPainterPath* p ```
bool q_painterpath_contains_with_q_painter_path(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#united)
///
/// ``` QPainterPath* self, QPainterPath* r ```
QPainterPath* q_painterpath_united(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#intersected)
///
/// ``` QPainterPath* self, QPainterPath* r ```
QPainterPath* q_painterpath_intersected(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#subtracted)
///
/// ``` QPainterPath* self, QPainterPath* r ```
QPainterPath* q_painterpath_subtracted(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#simplified)
///
/// ``` QPainterPath* self ```
QPainterPath* q_painterpath_simplified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator==)
///
/// ``` QPainterPath* self, QPainterPath* other ```
bool q_painterpath_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator!=)
///
/// ``` QPainterPath* self, QPainterPath* other ```
bool q_painterpath_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator&)
///
/// ``` QPainterPath* self, QPainterPath* other ```
QPainterPath* q_painterpath_operator_bitwise_and(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator|)
///
/// ``` QPainterPath* self, QPainterPath* other ```
QPainterPath* q_painterpath_operator_bitwise_or(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator+)
///
/// ``` QPainterPath* self, QPainterPath* other ```
QPainterPath* q_painterpath_operator_plus(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator-)
///
/// ``` QPainterPath* self, QPainterPath* other ```
QPainterPath* q_painterpath_operator_minus(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator&=)
///
/// ``` QPainterPath* self, QPainterPath* other ```
void q_painterpath_operator_bitwise_and_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator|=)
///
/// ``` QPainterPath* self, QPainterPath* other ```
void q_painterpath_operator_bitwise_or_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator+=)
///
/// ``` QPainterPath* self, QPainterPath* other ```
QPainterPath* q_painterpath_operator_plus_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator-=)
///
/// ``` QPainterPath* self, QPainterPath* other ```
QPainterPath* q_painterpath_operator_minus_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// ``` QPainterPath* self, QRectF* rect, double xRadius, double yRadius, enum Qt__SizeMode mode ```
void q_painterpath_add_rounded_rect4(void* self, void* rect, double xRadius, double yRadius, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// ``` QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius, enum Qt__SizeMode mode ```
void q_painterpath_add_rounded_rect7(void* self, double x, double y, double w, double h, double xRadius, double yRadius, int64_t mode);

/// Delete this object from C++ memory.
///
/// ``` QPainterPath* self ```
void q_painterpath_delete(void* self);

/// https://doc.qt.io/qt-6/qpainterpathstroker.html

/// q_painterpathstroker_new constructs a new QPainterPathStroker object.
///
///
QPainterPathStroker* q_painterpathstroker_new();

/// q_painterpathstroker_new2 constructs a new QPainterPathStroker object.
///
/// ``` QPen* pen ```
QPainterPathStroker* q_painterpathstroker_new2(void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setWidth)
///
/// ``` QPainterPathStroker* self, double width ```
void q_painterpathstroker_set_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#width)
///
/// ``` QPainterPathStroker* self ```
double q_painterpathstroker_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setCapStyle)
///
/// ``` QPainterPathStroker* self, enum Qt__PenCapStyle style ```
void q_painterpathstroker_set_cap_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#capStyle)
///
/// ``` QPainterPathStroker* self ```
int64_t q_painterpathstroker_cap_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setJoinStyle)
///
/// ``` QPainterPathStroker* self, enum Qt__PenJoinStyle style ```
void q_painterpathstroker_set_join_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#joinStyle)
///
/// ``` QPainterPathStroker* self ```
int64_t q_painterpathstroker_join_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setMiterLimit)
///
/// ``` QPainterPathStroker* self, double length ```
void q_painterpathstroker_set_miter_limit(void* self, double length);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#miterLimit)
///
/// ``` QPainterPathStroker* self ```
double q_painterpathstroker_miter_limit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setCurveThreshold)
///
/// ``` QPainterPathStroker* self, double threshold ```
void q_painterpathstroker_set_curve_threshold(void* self, double threshold);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#curveThreshold)
///
/// ``` QPainterPathStroker* self ```
double q_painterpathstroker_curve_threshold(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashPattern)
///
/// ``` QPainterPathStroker* self, enum Qt__PenStyle dashPattern ```
void q_painterpathstroker_set_dash_pattern(void* self, int64_t dashPattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashPattern)
///
/// ``` QPainterPathStroker* self, double* dashPattern[] ```
void q_painterpathstroker_set_dash_pattern_with_dash_pattern(void* self, double* dashPattern[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#dashPattern)
///
/// ``` QPainterPathStroker* self ```
libqt_list /* of double */ q_painterpathstroker_dash_pattern(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashOffset)
///
/// ``` QPainterPathStroker* self, double offset ```
void q_painterpathstroker_set_dash_offset(void* self, double offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#dashOffset)
///
/// ``` QPainterPathStroker* self ```
double q_painterpathstroker_dash_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#createStroke)
///
/// ``` QPainterPathStroker* self, QPainterPath* path ```
QPainterPath* q_painterpathstroker_create_stroke(void* self, void* path);

/// Delete this object from C++ memory.
///
/// ``` QPainterPathStroker* self ```
void q_painterpathstroker_delete(void* self);

/// https://doc.qt.io/qt-6/qpainterpath-element.html

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath__element.html#isMoveTo)
///
/// ``` QPainterPath__Element* self ```
bool q_painterpath__element_is_move_to(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath__element.html#isLineTo)
///
/// ``` QPainterPath__Element* self ```
bool q_painterpath__element_is_line_to(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath__element.html#isCurveTo)
///
/// ``` QPainterPath__Element* self ```
bool q_painterpath__element_is_curve_to(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath__element.html#operator QPointF)
///
/// ``` QPainterPath__Element* self ```
QPointF* q_painterpath__element_to_q_point_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath__element.html#operator==)
///
/// ``` QPainterPath__Element* self, QPainterPath__Element* e ```
bool q_painterpath__element_operator_equal(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath__element.html#operator!=)
///
/// ``` QPainterPath__Element* self, QPainterPath__Element* e ```
bool q_painterpath__element_operator_not_equal(void* self, void* e);

/// Delete this object from C++ memory.
///
/// ``` QPainterPath__Element* self ```
void q_painterpath__element_delete(void* self);

/// https://doc.qt.io/qt-6/qpainterpath.html#types

typedef enum {
    QPAINTERPATH_ELEMENTTYPE_MOVETOELEMENT = 0,
    QPAINTERPATH_ELEMENTTYPE_LINETOELEMENT = 1,
    QPAINTERPATH_ELEMENTTYPE_CURVETOELEMENT = 2,
    QPAINTERPATH_ELEMENTTYPE_CURVETODATAELEMENT = 3
} QPainterPath__ElementType;

#endif

#pragma once
#ifndef SRC_QT6C_LIBQPAINTERPATH_H
#define SRC_QT6C_LIBQPAINTERPATH_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpainterpath.html

/// q_painterpath_new constructs a new QPainterPath object.
///
QPainterPath* q_painterpath_new();

/// q_painterpath_new2 constructs a new QPainterPath object.
///
/// @param startPoint QPointF*
QPainterPath* q_painterpath_new2(void* startPoint);

/// q_painterpath_new3 constructs a new QPainterPath object.
///
/// @param other QPainterPath*
QPainterPath* q_painterpath_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-eq)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
void q_painterpath_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#swap)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
void q_painterpath_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#clear)
///
/// @param self QPainterPath*
void q_painterpath_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#reserve)
///
/// @param self QPainterPath*
/// @param size int
void q_painterpath_reserve(void* self, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#capacity)
///
/// @param self QPainterPath*
int32_t q_painterpath_capacity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#closeSubpath)
///
/// @param self QPainterPath*
void q_painterpath_close_subpath(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#moveTo)
///
/// @param self QPainterPath*
/// @param p QPointF*
void q_painterpath_move_to(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#moveTo)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
void q_painterpath_move_to2(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#lineTo)
///
/// @param self QPainterPath*
/// @param p QPointF*
void q_painterpath_line_to(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#lineTo)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
void q_painterpath_line_to2(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#arcMoveTo)
///
/// @param self QPainterPath*
/// @param rect QRectF*
/// @param angle double
void q_painterpath_arc_move_to(void* self, void* rect, double angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#arcMoveTo)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param angle double
void q_painterpath_arc_move_to2(void* self, double x, double y, double w, double h, double angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#arcTo)
///
/// @param self QPainterPath*
/// @param rect QRectF*
/// @param startAngle double
/// @param arcLength double
void q_painterpath_arc_to(void* self, void* rect, double startAngle, double arcLength);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#arcTo)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param startAngle double
/// @param arcLength double
void q_painterpath_arc_to2(void* self, double x, double y, double w, double h, double startAngle, double arcLength);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#cubicTo)
///
/// @param self QPainterPath*
/// @param ctrlPt1 QPointF*
/// @param ctrlPt2 QPointF*
/// @param endPt QPointF*
void q_painterpath_cubic_to(void* self, void* ctrlPt1, void* ctrlPt2, void* endPt);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#cubicTo)
///
/// @param self QPainterPath*
/// @param ctrlPt1x double
/// @param ctrlPt1y double
/// @param ctrlPt2x double
/// @param ctrlPt2y double
/// @param endPtx double
/// @param endPty double
void q_painterpath_cubic_to2(void* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#quadTo)
///
/// @param self QPainterPath*
/// @param ctrlPt QPointF*
/// @param endPt QPointF*
void q_painterpath_quad_to(void* self, void* ctrlPt, void* endPt);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#quadTo)
///
/// @param self QPainterPath*
/// @param ctrlPtx double
/// @param ctrlPty double
/// @param endPtx double
/// @param endPty double
void q_painterpath_quad_to2(void* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#currentPosition)
///
/// @param self QPainterPath*
QPointF* q_painterpath_current_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRect)
///
/// @param self QPainterPath*
/// @param rect QRectF*
void q_painterpath_add_rect(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRect)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
void q_painterpath_add_rect2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
///
/// @param self QPainterPath*
/// @param rect QRectF*
void q_painterpath_add_ellipse(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
void q_painterpath_add_ellipse2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
///
/// @param self QPainterPath*
/// @param center QPointF*
/// @param rx double
/// @param ry double
void q_painterpath_add_ellipse3(void* self, void* center, double rx, double ry);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addText)
///
/// @param self QPainterPath*
/// @param point QPointF*
/// @param f QFont*
/// @param text const char*
void q_painterpath_add_text(void* self, void* point, void* f, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addText)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
/// @param f QFont*
/// @param text const char*
void q_painterpath_add_text2(void* self, double x, double y, void* f, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addPath)
///
/// @param self QPainterPath*
/// @param path QPainterPath*
void q_painterpath_add_path(void* self, void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRegion)
///
/// @param self QPainterPath*
/// @param region QRegion*
void q_painterpath_add_region(void* self, void* region);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// @param self QPainterPath*
/// @param rect QRectF*
/// @param xRadius double
/// @param yRadius double
void q_painterpath_add_rounded_rect(void* self, void* rect, double xRadius, double yRadius);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xRadius double
/// @param yRadius double
void q_painterpath_add_rounded_rect2(void* self, double x, double y, double w, double h, double xRadius, double yRadius);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#connectPath)
///
/// @param self QPainterPath*
/// @param path QPainterPath*
void q_painterpath_connect_path(void* self, void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#contains)
///
/// @param self QPainterPath*
/// @param pt QPointF*
bool q_painterpath_contains(void* self, void* pt);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#contains)
///
/// @param self QPainterPath*
/// @param rect QRectF*
bool q_painterpath_contains2(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#intersects)
///
/// @param self QPainterPath*
/// @param rect QRectF*
bool q_painterpath_intersects(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#translate)
///
/// @param self QPainterPath*
/// @param dx double
/// @param dy double
void q_painterpath_translate(void* self, double dx, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#translate)
///
/// @param self QPainterPath*
/// @param offset QPointF*
void q_painterpath_translate2(void* self, void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#translated)
///
/// @param self QPainterPath*
/// @param dx double
/// @param dy double
QPainterPath* q_painterpath_translated(void* self, double dx, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#translated)
///
/// @param self QPainterPath*
/// @param offset QPointF*
QPainterPath* q_painterpath_translated2(void* self, void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#boundingRect)
///
/// @param self QPainterPath*
QRectF* q_painterpath_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#controlPointRect)
///
/// @param self QPainterPath*
QRectF* q_painterpath_control_point_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#fillRule)
///
/// @param self QPainterPath*
///
/// @return enum Qt__FillRule
int32_t q_painterpath_fill_rule(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#setFillRule)
///
/// @param self QPainterPath*
/// @param fillRule enum Qt__FillRule
void q_painterpath_set_fill_rule(void* self, int32_t fillRule);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#isEmpty)
///
/// @param self QPainterPath*
bool q_painterpath_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#toReversed)
///
/// @param self QPainterPath*
QPainterPath* q_painterpath_to_reversed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#elementCount)
///
/// @param self QPainterPath*
int32_t q_painterpath_element_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#elementAt)
///
/// @param self QPainterPath*
/// @param i int
QPainterPath__Element* q_painterpath_element_at(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#setElementPositionAt)
///
/// @param self QPainterPath*
/// @param i int
/// @param x double
/// @param y double
void q_painterpath_set_element_position_at(void* self, int i, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#length)
///
/// @param self QPainterPath*
double q_painterpath_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#percentAtLength)
///
/// @param self QPainterPath*
/// @param t double
double q_painterpath_percent_at_length(void* self, double t);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#pointAtPercent)
///
/// @param self QPainterPath*
/// @param t double
QPointF* q_painterpath_point_at_percent(void* self, double t);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#angleAtPercent)
///
/// @param self QPainterPath*
/// @param t double
double q_painterpath_angle_at_percent(void* self, double t);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#slopeAtPercent)
///
/// @param self QPainterPath*
/// @param t double
double q_painterpath_slope_at_percent(void* self, double t);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#intersects)
///
/// @param self QPainterPath*
/// @param p QPainterPath*
bool q_painterpath_intersects2(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#contains)
///
/// @param self QPainterPath*
/// @param p QPainterPath*
bool q_painterpath_contains3(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#united)
///
/// @param self QPainterPath*
/// @param r QPainterPath*
QPainterPath* q_painterpath_united(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#intersected)
///
/// @param self QPainterPath*
/// @param r QPainterPath*
QPainterPath* q_painterpath_intersected(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#subtracted)
///
/// @param self QPainterPath*
/// @param r QPainterPath*
QPainterPath* q_painterpath_subtracted(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#simplified)
///
/// @param self QPainterPath*
QPainterPath* q_painterpath_simplified(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-eq-eq)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
bool q_painterpath_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-not-eq)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
bool q_painterpath_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-and)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
QPainterPath* q_painterpath_operator_bitwise_and(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-7c)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
QPainterPath* q_painterpath_operator_bitwise_or(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-2b)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
QPainterPath* q_painterpath_operator_plus(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
QPainterPath* q_painterpath_operator_minus(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-and-eq)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
void q_painterpath_operator_bitwise_and_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-7c-eq)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
void q_painterpath_operator_bitwise_or_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-2b-eq)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
QPainterPath* q_painterpath_operator_plus_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator--eq)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
QPainterPath* q_painterpath_operator_minus_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// @param self QPainterPath*
/// @param rect QRectF*
/// @param xRadius double
/// @param yRadius double
/// @param mode enum Qt__SizeMode
void q_painterpath_add_rounded_rect4(void* self, void* rect, double xRadius, double yRadius, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xRadius double
/// @param yRadius double
/// @param mode enum Qt__SizeMode
void q_painterpath_add_rounded_rect7(void* self, double x, double y, double w, double h, double xRadius, double yRadius, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#dtor.QPainterPath)
///
/// Delete this object from C++ memory.
///
/// @param self QPainterPath*
void q_painterpath_delete(void* self);

/// https://doc.qt.io/qt-6/qpainterpathstroker.html

/// q_painterpathstroker_new constructs a new QPainterPathStroker object.
///
QPainterPathStroker* q_painterpathstroker_new();

/// q_painterpathstroker_new2 constructs a new QPainterPathStroker object.
///
/// @param pen QPen*
QPainterPathStroker* q_painterpathstroker_new2(void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setWidth)
///
/// @param self QPainterPathStroker*
/// @param width double
void q_painterpathstroker_set_width(void* self, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#width)
///
/// @param self QPainterPathStroker*
double q_painterpathstroker_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setCapStyle)
///
/// @param self QPainterPathStroker*
/// @param style enum Qt__PenCapStyle
void q_painterpathstroker_set_cap_style(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#capStyle)
///
/// @param self QPainterPathStroker*
///
/// @return enum Qt__PenCapStyle
int32_t q_painterpathstroker_cap_style(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setJoinStyle)
///
/// @param self QPainterPathStroker*
/// @param style enum Qt__PenJoinStyle
void q_painterpathstroker_set_join_style(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#joinStyle)
///
/// @param self QPainterPathStroker*
///
/// @return enum Qt__PenJoinStyle
int32_t q_painterpathstroker_join_style(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setMiterLimit)
///
/// @param self QPainterPathStroker*
/// @param length double
void q_painterpathstroker_set_miter_limit(void* self, double length);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#miterLimit)
///
/// @param self QPainterPathStroker*
double q_painterpathstroker_miter_limit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setCurveThreshold)
///
/// @param self QPainterPathStroker*
/// @param threshold double
void q_painterpathstroker_set_curve_threshold(void* self, double threshold);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#curveThreshold)
///
/// @param self QPainterPathStroker*
double q_painterpathstroker_curve_threshold(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashPattern)
///
/// @param self QPainterPathStroker*
/// @param dashPattern enum Qt__PenStyle
void q_painterpathstroker_set_dash_pattern(void* self, int32_t dashPattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashPattern)
///
/// @param self QPainterPathStroker*
/// @param dashPattern libqt_list /* of double */
void q_painterpathstroker_set_dash_pattern2(void* self, libqt_list dashPattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#dashPattern)
///
/// @param self QPainterPathStroker*
libqt_list /* of double */ q_painterpathstroker_dash_pattern(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashOffset)
///
/// @param self QPainterPathStroker*
/// @param offset double
void q_painterpathstroker_set_dash_offset(void* self, double offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#dashOffset)
///
/// @param self QPainterPathStroker*
double q_painterpathstroker_dash_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#createStroke)
///
/// @param self QPainterPathStroker*
/// @param path QPainterPath*
QPainterPath* q_painterpathstroker_create_stroke(void* self, void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#dtor.QPainterPathStroker)
///
/// Delete this object from C++ memory.
///
/// @param self QPainterPathStroker*
void q_painterpathstroker_delete(void* self);

/// https://doc.qt.io/qt-6/qpainterpath-element.html

/// q_painterpath__element_new constructs a new QPainterPath::Element object.
///
QPainterPath__Element* q_painterpath__element_new();

/// q_painterpath__element_new2 constructs a new QPainterPath::Element object.
///
/// @param param1 QPainterPath__Element*
QPainterPath__Element* q_painterpath__element_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#x-var)
///
/// @param self QPainterPath__Element*
double q_painterpath__element_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#x-var)
///
/// @param self QPainterPath__Element*
/// @param x double
void q_painterpath__element_set_x(void* self, double x);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#y-var)
///
/// @param self QPainterPath__Element*
double q_painterpath__element_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#y-var)
///
/// @param self QPainterPath__Element*
/// @param y double
void q_painterpath__element_set_y(void* self, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#type-var)
///
/// @param self QPainterPath__Element*
///
/// @return enum QPainterPath__ElementType
int32_t q_painterpath__element_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#type-var)
///
/// @param self QPainterPath__Element*
/// @param type enum QPainterPath__ElementType
void q_painterpath__element_set_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#isMoveTo)
///
/// @param self QPainterPath__Element*
bool q_painterpath__element_is_move_to(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#isLineTo)
///
/// @param self QPainterPath__Element*
bool q_painterpath__element_is_line_to(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#isCurveTo)
///
/// @param self QPainterPath__Element*
bool q_painterpath__element_is_curve_to(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#operator)
///
/// @param self QPainterPath__Element*
QPointF* q_painterpath__element_to_q_point_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#operator-eq-eq)
///
/// @param self QPainterPath__Element*
/// @param e QPainterPath__Element*
bool q_painterpath__element_operator_equal(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#operator-not-eq)
///
/// @param self QPainterPath__Element*
/// @param e QPainterPath__Element*
bool q_painterpath__element_operator_not_equal(void* self, void* e);

/// Delete this object from C++ memory.
///
/// @param self QPainterPath__Element*
void q_painterpath__element_delete(void* self);

/// https://doc.qt.io/qt-6/qpainterpath.html#types

typedef enum {
    QPAINTERPATH_ELEMENTTYPE_MOVETOELEMENT = 0,
    QPAINTERPATH_ELEMENTTYPE_LINETOELEMENT = 1,
    QPAINTERPATH_ELEMENTTYPE_CURVETOELEMENT = 2,
    QPAINTERPATH_ELEMENTTYPE_CURVETODATAELEMENT = 3
} QPainterPath__ElementType;

#endif

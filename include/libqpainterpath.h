#pragma once
#ifndef LIBQPAINTERPATH_H
#define LIBQPAINTERPATH_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html)

/// q_painterpath_new constructs a new QPainterPath object.
///
QPainterPath* q_painterpath_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html)

/// q_painterpath_new2 constructs a new QPainterPath object.
///
/// @param startPoint QPointF*
///
QPainterPath* q_painterpath_new2(const void* startPoint);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html)

/// q_painterpath_new3 constructs a new QPainterPath object.
///
/// @param other QPainterPath*
///
QPainterPath* q_painterpath_new3(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-eq)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
///
void q_painterpath_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#swap)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
///
void q_painterpath_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#clear)
///
/// @param self QPainterPath*
///
void q_painterpath_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#reserve)
///
/// @param self QPainterPath*
/// @param size int
///
void q_painterpath_reserve(void* self, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#capacity)
///
/// @param self const QPainterPath*
///
int32_t q_painterpath_capacity(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#closeSubpath)
///
/// @param self QPainterPath*
///
void q_painterpath_close_subpath(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#moveTo)
///
/// @param self QPainterPath*
/// @param p QPointF*
///
void q_painterpath_move_to(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#moveTo)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
///
void q_painterpath_move_to2(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#lineTo)
///
/// @param self QPainterPath*
/// @param p QPointF*
///
void q_painterpath_line_to(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#lineTo)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
///
void q_painterpath_line_to2(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#arcMoveTo)
///
/// @param self QPainterPath*
/// @param rect QRectF*
/// @param angle double
///
void q_painterpath_arc_move_to(void* self, const void* rect, double angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#arcMoveTo)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param angle double
///
void q_painterpath_arc_move_to2(void* self, double x, double y, double w, double h, double angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#arcTo)
///
/// @param self QPainterPath*
/// @param rect QRectF*
/// @param startAngle double
/// @param arcLength double
///
void q_painterpath_arc_to(void* self, const void* rect, double startAngle, double arcLength);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#arcTo)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param startAngle double
/// @param arcLength double
///
void q_painterpath_arc_to2(void* self, double x, double y, double w, double h, double startAngle, double arcLength);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#cubicTo)
///
/// @param self QPainterPath*
/// @param ctrlPt1 QPointF*
/// @param ctrlPt2 QPointF*
/// @param endPt QPointF*
///
void q_painterpath_cubic_to(void* self, const void* ctrlPt1, const void* ctrlPt2, const void* endPt);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#cubicTo)
///
/// @param self QPainterPath*
/// @param ctrlPt1x double
/// @param ctrlPt1y double
/// @param ctrlPt2x double
/// @param ctrlPt2y double
/// @param endPtx double
/// @param endPty double
///
void q_painterpath_cubic_to2(void* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#quadTo)
///
/// @param self QPainterPath*
/// @param ctrlPt QPointF*
/// @param endPt QPointF*
///
void q_painterpath_quad_to(void* self, const void* ctrlPt, const void* endPt);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#quadTo)
///
/// @param self QPainterPath*
/// @param ctrlPtx double
/// @param ctrlPty double
/// @param endPtx double
/// @param endPty double
///
void q_painterpath_quad_to2(void* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#currentPosition)
///
/// @param self const QPainterPath*
///
QPointF* q_painterpath_current_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRect)
///
/// @param self QPainterPath*
/// @param rect QRectF*
///
void q_painterpath_add_rect(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRect)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_painterpath_add_rect2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
///
/// @param self QPainterPath*
/// @param rect QRectF*
///
void q_painterpath_add_ellipse(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_painterpath_add_ellipse2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
///
/// @param self QPainterPath*
/// @param center QPointF*
/// @param rx double
/// @param ry double
///
void q_painterpath_add_ellipse3(void* self, const void* center, double rx, double ry);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addPolygon)
///
/// @param self QPainterPath*
/// @param polygon QPolygonF*
///
void q_painterpath_add_polygon(void* self, const void* polygon);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addText)
///
/// @param self QPainterPath*
/// @param point QPointF*
/// @param f QFont*
/// @param text const char*
///
void q_painterpath_add_text(void* self, const void* point, const void* f, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addText)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
/// @param f QFont*
/// @param text const char*
///
void q_painterpath_add_text2(void* self, double x, double y, const void* f, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addPath)
///
/// @param self QPainterPath*
/// @param path QPainterPath*
///
void q_painterpath_add_path(void* self, const void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRegion)
///
/// @param self QPainterPath*
/// @param region QRegion*
///
void q_painterpath_add_region(void* self, const void* region);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// @param self QPainterPath*
/// @param rect QRectF*
/// @param xRadius double
/// @param yRadius double
///
void q_painterpath_add_rounded_rect(void* self, const void* rect, double xRadius, double yRadius);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// @param self QPainterPath*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xRadius double
/// @param yRadius double
///
void q_painterpath_add_rounded_rect2(void* self, double x, double y, double w, double h, double xRadius, double yRadius);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#connectPath)
///
/// @param self QPainterPath*
/// @param path QPainterPath*
///
void q_painterpath_connect_path(void* self, const void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#contains)
///
/// @param self const QPainterPath*
/// @param pt QPointF*
///
bool q_painterpath_contains(const void* self, const void* pt);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#contains)
///
/// @param self const QPainterPath*
/// @param rect QRectF*
///
bool q_painterpath_contains2(const void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#intersects)
///
/// @param self const QPainterPath*
/// @param rect QRectF*
///
bool q_painterpath_intersects(const void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#translate)
///
/// @param self QPainterPath*
/// @param dx double
/// @param dy double
///
void q_painterpath_translate(void* self, double dx, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#translate)
///
/// @param self QPainterPath*
/// @param offset QPointF*
///
void q_painterpath_translate2(void* self, const void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#translated)
///
/// @param self const QPainterPath*
/// @param dx double
/// @param dy double
///
QPainterPath* q_painterpath_translated(const void* self, double dx, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#translated)
///
/// @param self const QPainterPath*
/// @param offset QPointF*
///
QPainterPath* q_painterpath_translated2(const void* self, const void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#boundingRect)
///
/// @param self const QPainterPath*
///
QRectF* q_painterpath_bounding_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#controlPointRect)
///
/// @param self const QPainterPath*
///
QRectF* q_painterpath_control_point_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#fillRule)
///
/// @param self const QPainterPath*
///
/// @return enum Qt__FillRule
///
int32_t q_painterpath_fill_rule(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#setFillRule)
///
/// @param self QPainterPath*
/// @param fillRule enum Qt__FillRule
///
void q_painterpath_set_fill_rule(void* self, int32_t fillRule);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#isEmpty)
///
/// @param self const QPainterPath*
///
bool q_painterpath_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#toReversed)
///
/// @param self const QPainterPath*
///
QPainterPath* q_painterpath_to_reversed(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#toSubpathPolygons)
///
/// @param self const QPainterPath*
///
/// @return libqt_list of QPolygonF*
///
libqt_list q_painterpath_to_subpath_polygons(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#toFillPolygons)
///
/// @param self const QPainterPath*
///
/// @return libqt_list of QPolygonF*
///
libqt_list q_painterpath_to_fill_polygons(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#toFillPolygon)
///
/// @param self const QPainterPath*
///
QPolygonF* q_painterpath_to_fill_polygon(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#elementCount)
///
/// @param self const QPainterPath*
///
int32_t q_painterpath_element_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#elementAt)
///
/// @param self const QPainterPath*
/// @param i int
///
QPainterPath__Element* q_painterpath_element_at(const void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#setElementPositionAt)
///
/// @param self QPainterPath*
/// @param i int
/// @param x double
/// @param y double
///
void q_painterpath_set_element_position_at(void* self, int i, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#length)
///
/// @param self const QPainterPath*
///
double q_painterpath_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#percentAtLength)
///
/// @param self const QPainterPath*
/// @param t double
///
double q_painterpath_percent_at_length(const void* self, double t);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#pointAtPercent)
///
/// @param self const QPainterPath*
/// @param t double
///
QPointF* q_painterpath_point_at_percent(const void* self, double t);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#angleAtPercent)
///
/// @param self const QPainterPath*
/// @param t double
///
double q_painterpath_angle_at_percent(const void* self, double t);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#slopeAtPercent)
///
/// @param self const QPainterPath*
/// @param t double
///
double q_painterpath_slope_at_percent(const void* self, double t);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#intersects)
///
/// @param self const QPainterPath*
/// @param p QPainterPath*
///
bool q_painterpath_intersects2(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#contains)
///
/// @param self const QPainterPath*
/// @param p QPainterPath*
///
bool q_painterpath_contains3(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#united)
///
/// @param self const QPainterPath*
/// @param r QPainterPath*
///
QPainterPath* q_painterpath_united(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#intersected)
///
/// @param self const QPainterPath*
/// @param r QPainterPath*
///
QPainterPath* q_painterpath_intersected(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#subtracted)
///
/// @param self const QPainterPath*
/// @param r QPainterPath*
///
QPainterPath* q_painterpath_subtracted(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#simplified)
///
/// @param self const QPainterPath*
///
QPainterPath* q_painterpath_simplified(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-eq-eq)
///
/// @param self const QPainterPath*
/// @param other QPainterPath*
///
bool q_painterpath_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-not-eq)
///
/// @param self const QPainterPath*
/// @param other QPainterPath*
///
bool q_painterpath_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-and)
///
/// @param self const QPainterPath*
/// @param other QPainterPath*
///
QPainterPath* q_painterpath_operator_bitwise_and(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-7c)
///
/// @param self const QPainterPath*
/// @param other QPainterPath*
///
QPainterPath* q_painterpath_operator_bitwise_or(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-2b)
///
/// @param self const QPainterPath*
/// @param other QPainterPath*
///
QPainterPath* q_painterpath_operator_plus(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-)
///
/// @param self const QPainterPath*
/// @param other QPainterPath*
///
QPainterPath* q_painterpath_operator_minus(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-and-eq)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
///
void q_painterpath_operator_bitwise_and_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-7c-eq)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
///
void q_painterpath_operator_bitwise_or_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator-2b-eq)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
///
QPainterPath* q_painterpath_operator_plus_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#operator--eq)
///
/// @param self QPainterPath*
/// @param other QPainterPath*
///
QPainterPath* q_painterpath_operator_minus_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// @param self QPainterPath*
/// @param rect QRectF*
/// @param xRadius double
/// @param yRadius double
/// @param mode enum Qt__SizeMode
///
void q_painterpath_add_rounded_rect4(void* self, const void* rect, double xRadius, double yRadius, int32_t mode);

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
///
void q_painterpath_add_rounded_rect7(void* self, double x, double y, double w, double h, double xRadius, double yRadius, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#toSubpathPolygons)
///
/// @param self const QPainterPath*
/// @param matrix QTransform*
///
/// @return libqt_list of QPolygonF*
///
libqt_list q_painterpath_to_subpath_polygons1(const void* self, const void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#toFillPolygons)
///
/// @param self const QPainterPath*
/// @param matrix QTransform*
///
/// @return libqt_list of QPolygonF*
///
libqt_list q_painterpath_to_fill_polygons1(const void* self, const void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#toFillPolygon)
///
/// @param self const QPainterPath*
/// @param matrix QTransform*
///
QPolygonF* q_painterpath_to_fill_polygon1(const void* self, const void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#dtor.QPainterPath)
///
/// Delete this object from C++ memory.
///
/// @param self QPainterPath*
///
void q_painterpath_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html)

/// q_painterpathstroker_new constructs a new QPainterPathStroker object.
///
QPainterPathStroker* q_painterpathstroker_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html)

/// q_painterpathstroker_new2 constructs a new QPainterPathStroker object.
///
/// @param pen QPen*
///
QPainterPathStroker* q_painterpathstroker_new2(const void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setWidth)
///
/// @param self QPainterPathStroker*
/// @param width double
///
void q_painterpathstroker_set_width(void* self, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#width)
///
/// @param self const QPainterPathStroker*
///
double q_painterpathstroker_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setCapStyle)
///
/// @param self QPainterPathStroker*
/// @param style enum Qt__PenCapStyle
///
void q_painterpathstroker_set_cap_style(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#capStyle)
///
/// @param self const QPainterPathStroker*
///
/// @return enum Qt__PenCapStyle
///
int32_t q_painterpathstroker_cap_style(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setJoinStyle)
///
/// @param self QPainterPathStroker*
/// @param style enum Qt__PenJoinStyle
///
void q_painterpathstroker_set_join_style(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#joinStyle)
///
/// @param self const QPainterPathStroker*
///
/// @return enum Qt__PenJoinStyle
///
int32_t q_painterpathstroker_join_style(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setMiterLimit)
///
/// @param self QPainterPathStroker*
/// @param length double
///
void q_painterpathstroker_set_miter_limit(void* self, double length);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#miterLimit)
///
/// @param self const QPainterPathStroker*
///
double q_painterpathstroker_miter_limit(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setCurveThreshold)
///
/// @param self QPainterPathStroker*
/// @param threshold double
///
void q_painterpathstroker_set_curve_threshold(void* self, double threshold);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#curveThreshold)
///
/// @param self const QPainterPathStroker*
///
double q_painterpathstroker_curve_threshold(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashPattern)
///
/// @param self QPainterPathStroker*
/// @param dashPattern enum Qt__PenStyle
///
void q_painterpathstroker_set_dash_pattern(void* self, int32_t dashPattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashPattern)
///
/// @param self QPainterPathStroker*
/// @param dashPattern libqt_list of double
///
void q_painterpathstroker_set_dash_pattern2(void* self, libqt_list dashPattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#dashPattern)
///
/// @param self const QPainterPathStroker*
///
/// @return libqt_list of double
///
libqt_list q_painterpathstroker_dash_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashOffset)
///
/// @param self QPainterPathStroker*
/// @param offset double
///
void q_painterpathstroker_set_dash_offset(void* self, double offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#dashOffset)
///
/// @param self const QPainterPathStroker*
///
double q_painterpathstroker_dash_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#createStroke)
///
/// @param self const QPainterPathStroker*
/// @param path QPainterPath*
///
QPainterPath* q_painterpathstroker_create_stroke(const void* self, const void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpathstroker.html#dtor.QPainterPathStroker)
///
/// Delete this object from C++ memory.
///
/// @param self QPainterPathStroker*
///
void q_painterpathstroker_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html)

/// q_painterpath__element_new constructs a new QPainterPath::Element object.
///
QPainterPath__Element* q_painterpath__element_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html)

/// q_painterpath__element_new2 constructs a new QPainterPath::Element object.
///
/// @param param1 QPainterPath__Element*
///
QPainterPath__Element* q_painterpath__element_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#x-var)
///
/// @param self const QPainterPath__Element*
///
double q_painterpath__element_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#x-var)
///
/// @param self QPainterPath__Element*
/// @param x double
///
void q_painterpath__element_set_x(void* self, double x);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#y-var)
///
/// @param self const QPainterPath__Element*
///
double q_painterpath__element_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#y-var)
///
/// @param self QPainterPath__Element*
/// @param y double
///
void q_painterpath__element_set_y(void* self, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#type-var)
///
/// @param self const QPainterPath__Element*
///
/// @return enum QPainterPath__ElementType
///
int32_t q_painterpath__element_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#type-var)
///
/// @param self QPainterPath__Element*
/// @param type enum QPainterPath__ElementType
///
void q_painterpath__element_set_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#isMoveTo)
///
/// @param self const QPainterPath__Element*
///
bool q_painterpath__element_is_move_to(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#isLineTo)
///
/// @param self const QPainterPath__Element*
///
bool q_painterpath__element_is_line_to(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#isCurveTo)
///
/// @param self const QPainterPath__Element*
///
bool q_painterpath__element_is_curve_to(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#operator-QPointF)
///
/// @param self const QPainterPath__Element*
///
QPointF* q_painterpath__element_to_q_point_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#operator-eq-eq)
///
/// @param self const QPainterPath__Element*
/// @param e QPainterPath__Element*
///
bool q_painterpath__element_operator_equal(const void* self, const void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath-element.html#operator-not-eq)
///
/// @param self const QPainterPath__Element*
/// @param e QPainterPath__Element*
///
bool q_painterpath__element_operator_not_equal(const void* self, const void* e);

/// Delete this object from C++ memory.
///
/// @param self QPainterPath__Element*
///
void q_painterpath__element_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainterpath.html#public-types)

typedef enum {
    QPAINTERPATH_ELEMENTTYPE_MOVETOELEMENT = 0,
    QPAINTERPATH_ELEMENTTYPE_LINETOELEMENT = 1,
    QPAINTERPATH_ELEMENTTYPE_CURVETOELEMENT = 2,
    QPAINTERPATH_ELEMENTTYPE_CURVETODATAELEMENT = 3
} QPainterPath__ElementType;

#endif

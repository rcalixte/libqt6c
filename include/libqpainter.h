#pragma once
#ifndef SRC_QT6C_LIBQPAINTER_H
#define SRC_QT6C_LIBQPAINTER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html)

/// q_painter_new constructs a new QPainter object.
///
QPainter* q_painter_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html)

/// q_painter_new2 constructs a new QPainter object.
///
/// @param param1 QPaintDevice*
///
QPainter* q_painter_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#device)
///
/// @param self QPainter*
///
QPaintDevice* q_painter_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#begin)
///
/// @param self QPainter*
/// @param param1 QPaintDevice*
///
bool q_painter_begin(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#end)
///
/// @param self QPainter*
///
bool q_painter_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#isActive)
///
/// @param self QPainter*
///
bool q_painter_is_active(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setCompositionMode)
///
/// @param self QPainter*
/// @param mode enum QPainter__CompositionMode
///
void q_painter_set_composition_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#compositionMode)
///
/// @param self QPainter*
///
/// @return enum QPainter__CompositionMode
///
int32_t q_painter_composition_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#font)
///
/// @param self QPainter*
///
const QFont* q_painter_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setFont)
///
/// @param self QPainter*
/// @param f QFont*
///
void q_painter_set_font(void* self, void* f);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fontMetrics)
///
/// @param self QPainter*
///
QFontMetrics* q_painter_font_metrics(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fontInfo)
///
/// @param self QPainter*
///
QFontInfo* q_painter_font_info(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setPen)
///
/// @param self QPainter*
/// @param color QColor*
///
void q_painter_set_pen(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setPen)
///
/// @param self QPainter*
/// @param pen QPen*
///
void q_painter_set_pen2(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setPen)
///
/// @param self QPainter*
/// @param style enum Qt__PenStyle
///
void q_painter_set_pen3(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#pen)
///
/// @param self QPainter*
///
const QPen* q_painter_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrush)
///
/// @param self QPainter*
/// @param brush QBrush*
///
void q_painter_set_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrush)
///
/// @param self QPainter*
/// @param style enum Qt__BrushStyle
///
void q_painter_set_brush2(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#brush)
///
/// @param self QPainter*
///
const QBrush* q_painter_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBackgroundMode)
///
/// @param self QPainter*
/// @param mode enum Qt__BGMode
///
void q_painter_set_background_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#backgroundMode)
///
/// @param self QPainter*
///
/// @return enum Qt__BGMode
///
int32_t q_painter_background_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#brushOrigin)
///
/// @param self QPainter*
///
QPoint* q_painter_brush_origin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
///
/// @param self QPainter*
/// @param x int
/// @param y int
///
void q_painter_set_brush_origin(void* self, int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
///
/// @param self QPainter*
/// @param brushOrigin QPoint*
///
void q_painter_set_brush_origin2(void* self, void* brushOrigin);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
///
/// @param self QPainter*
/// @param brushOrigin QPointF*
///
void q_painter_set_brush_origin3(void* self, void* brushOrigin);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setBackground)
///
/// @param self QPainter*
/// @param bg QBrush*
///
void q_painter_set_background(void* self, void* bg);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#background)
///
/// @param self QPainter*
///
const QBrush* q_painter_background(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#opacity)
///
/// @param self QPainter*
///
double q_painter_opacity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setOpacity)
///
/// @param self QPainter*
/// @param opacity double
///
void q_painter_set_opacity(void* self, double opacity);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipRegion)
///
/// @param self QPainter*
///
QRegion* q_painter_clip_region(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipPath)
///
/// @param self QPainter*
///
QPainterPath* q_painter_clip_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// @param self QPainter*
/// @param param1 QRectF*
///
void q_painter_set_clip_rect(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// @param self QPainter*
/// @param param1 QRect*
///
void q_painter_set_clip_rect2(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_painter_set_clip_rect3(void* self, int x, int y, int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
///
/// @param self QPainter*
/// @param param1 QRegion*
///
void q_painter_set_clip_region(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
///
/// @param self QPainter*
/// @param path QPainterPath*
///
void q_painter_set_clip_path(void* self, void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipping)
///
/// @param self QPainter*
/// @param enable bool
///
void q_painter_set_clipping(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#hasClipping)
///
/// @param self QPainter*
///
bool q_painter_has_clipping(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#clipBoundingRect)
///
/// @param self QPainter*
///
QRectF* q_painter_clip_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#save)
///
/// @param self QPainter*
///
void q_painter_save(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#restore)
///
/// @param self QPainter*
///
void q_painter_restore(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setTransform)
///
/// @param self QPainter*
/// @param transform QTransform*
///
void q_painter_set_transform(void* self, void* transform);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#transform)
///
/// @param self QPainter*
///
const QTransform* q_painter_transform(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#deviceTransform)
///
/// @param self QPainter*
///
const QTransform* q_painter_device_transform(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#resetTransform)
///
/// @param self QPainter*
///
void q_painter_reset_transform(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
///
/// @param self QPainter*
/// @param matrix QTransform*
///
void q_painter_set_world_transform(void* self, void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#worldTransform)
///
/// @param self QPainter*
///
const QTransform* q_painter_world_transform(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#combinedTransform)
///
/// @param self QPainter*
///
QTransform* q_painter_combined_transform(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWorldMatrixEnabled)
///
/// @param self QPainter*
/// @param enabled bool
///
void q_painter_set_world_matrix_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#worldMatrixEnabled)
///
/// @param self QPainter*
///
bool q_painter_world_matrix_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#scale)
///
/// @param self QPainter*
/// @param sx double
/// @param sy double
///
void q_painter_scale(void* self, double sx, double sy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#shear)
///
/// @param self QPainter*
/// @param sh double
/// @param sv double
///
void q_painter_shear(void* self, double sh, double sv);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#rotate)
///
/// @param self QPainter*
/// @param a double
///
void q_painter_rotate(void* self, double a);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#translate)
///
/// @param self QPainter*
/// @param offset QPointF*
///
void q_painter_translate(void* self, void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#translate)
///
/// @param self QPainter*
/// @param offset QPoint*
///
void q_painter_translate2(void* self, void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#translate)
///
/// @param self QPainter*
/// @param dx double
/// @param dy double
///
void q_painter_translate3(void* self, double dx, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#window)
///
/// @param self QPainter*
///
QRect* q_painter_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWindow)
///
/// @param self QPainter*
/// @param window QRect*
///
void q_painter_set_window(void* self, void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWindow)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_painter_set_window2(void* self, int x, int y, int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#viewport)
///
/// @param self QPainter*
///
QRect* q_painter_viewport(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setViewport)
///
/// @param self QPainter*
/// @param viewport QRect*
///
void q_painter_set_viewport(void* self, void* viewport);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setViewport)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_painter_set_viewport2(void* self, int x, int y, int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setViewTransformEnabled)
///
/// @param self QPainter*
/// @param enable bool
///
void q_painter_set_view_transform_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#viewTransformEnabled)
///
/// @param self QPainter*
///
bool q_painter_view_transform_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#strokePath)
///
/// @param self QPainter*
/// @param path QPainterPath*
/// @param pen QPen*
///
void q_painter_stroke_path(void* self, void* path, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillPath)
///
/// @param self QPainter*
/// @param path QPainterPath*
/// @param brush QBrush*
///
void q_painter_fill_path(void* self, void* path, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPath)
///
/// @param self QPainter*
/// @param path QPainterPath*
///
void q_painter_draw_path(void* self, void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
///
/// @param self QPainter*
/// @param pt QPointF*
///
void q_painter_draw_point(void* self, void* pt);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
///
/// @param self QPainter*
/// @param p QPoint*
///
void q_painter_draw_point2(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
///
/// @param self QPainter*
/// @param x int
/// @param y int
///
void q_painter_draw_point3(void* self, int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
///
/// @param self QPainter*
/// @param points QPointF*
/// @param pointCount int
///
void q_painter_draw_points(void* self, void* points, int pointCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
///
/// @param self QPainter*
/// @param points QPoint*
/// @param pointCount int
///
void q_painter_draw_points3(void* self, void* points, int pointCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// @param self QPainter*
/// @param line QLineF*
///
void q_painter_draw_line(void* self, void* line);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// @param self QPainter*
/// @param line QLine*
///
void q_painter_draw_line2(void* self, void* line);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// @param self QPainter*
/// @param x1 int
/// @param y1 int
/// @param x2 int
/// @param y2 int
///
void q_painter_draw_line3(void* self, int x1, int y1, int x2, int y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// @param self QPainter*
/// @param p1 QPoint*
/// @param p2 QPoint*
///
void q_painter_draw_line4(void* self, void* p1, void* p2);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// @param self QPainter*
/// @param p1 QPointF*
/// @param p2 QPointF*
///
void q_painter_draw_line5(void* self, void* p1, void* p2);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QPainter*
/// @param lines QLineF*
/// @param lineCount int
///
void q_painter_draw_lines(void* self, void* lines, int lineCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QPainter*
/// @param lines libqt_list of QLineF*
///
void q_painter_draw_lines2(void* self, libqt_list /* of QLineF* */ lines);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QPainter*
/// @param pointPairs QPointF*
/// @param lineCount int
///
void q_painter_draw_lines3(void* self, void* pointPairs, int lineCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QPainter*
/// @param pointPairs libqt_list of QPointF*
///
void q_painter_draw_lines4(void* self, libqt_list /* of QPointF* */ pointPairs);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QPainter*
/// @param lines QLine*
/// @param lineCount int
///
void q_painter_draw_lines5(void* self, void* lines, int lineCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QPainter*
/// @param lines libqt_list of QLine*
///
void q_painter_draw_lines6(void* self, libqt_list /* of QLine* */ lines);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QPainter*
/// @param pointPairs QPoint*
/// @param lineCount int
///
void q_painter_draw_lines7(void* self, void* pointPairs, int lineCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QPainter*
/// @param pointPairs libqt_list of QPoint*
///
void q_painter_draw_lines8(void* self, libqt_list /* of QPoint* */ pointPairs);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRect)
///
/// @param self QPainter*
/// @param rect QRectF*
///
void q_painter_draw_rect(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRect)
///
/// @param self QPainter*
/// @param x1 int
/// @param y1 int
/// @param w int
/// @param h int
///
void q_painter_draw_rect2(void* self, int x1, int y1, int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRect)
///
/// @param self QPainter*
/// @param rect QRect*
///
void q_painter_draw_rect3(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// @param self QPainter*
/// @param rects QRectF*
/// @param rectCount int
///
void q_painter_draw_rects(void* self, void* rects, int rectCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// @param self QPainter*
/// @param rectangles libqt_list of QRectF*
///
void q_painter_draw_rects2(void* self, libqt_list /* of QRectF* */ rectangles);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// @param self QPainter*
/// @param rects QRect*
/// @param rectCount int
///
void q_painter_draw_rects3(void* self, void* rects, int rectCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// @param self QPainter*
/// @param rectangles libqt_list of QRect*
///
void q_painter_draw_rects4(void* self, libqt_list /* of QRect* */ rectangles);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// @param self QPainter*
/// @param r QRectF*
///
void q_painter_draw_ellipse(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// @param self QPainter*
/// @param r QRect*
///
void q_painter_draw_ellipse2(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_painter_draw_ellipse3(void* self, int x, int y, int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// @param self QPainter*
/// @param center QPointF*
/// @param rx double
/// @param ry double
///
void q_painter_draw_ellipse4(void* self, void* center, double rx, double ry);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// @param self QPainter*
/// @param center QPoint*
/// @param rx int
/// @param ry int
///
void q_painter_draw_ellipse5(void* self, void* center, int rx, int ry);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
///
/// @param self QPainter*
/// @param points QPointF*
/// @param pointCount int
///
void q_painter_draw_polyline(void* self, void* points, int pointCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
///
/// @param self QPainter*
/// @param points QPoint*
/// @param pointCount int
///
void q_painter_draw_polyline3(void* self, void* points, int pointCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// @param self QPainter*
/// @param points QPointF*
/// @param pointCount int
///
void q_painter_draw_polygon(void* self, void* points, int pointCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// @param self QPainter*
/// @param points QPoint*
/// @param pointCount int
///
void q_painter_draw_polygon3(void* self, void* points, int pointCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
///
/// @param self QPainter*
/// @param points QPointF*
/// @param pointCount int
///
void q_painter_draw_convex_polygon(void* self, void* points, int pointCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
///
/// @param self QPainter*
/// @param points QPoint*
/// @param pointCount int
///
void q_painter_draw_convex_polygon3(void* self, void* points, int pointCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawArc)
///
/// @param self QPainter*
/// @param rect QRectF*
/// @param a int
/// @param alen int
///
void q_painter_draw_arc(void* self, void* rect, int a, int alen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawArc)
///
/// @param self QPainter*
/// @param param1 QRect*
/// @param a int
/// @param alen int
///
void q_painter_draw_arc2(void* self, void* param1, int a, int alen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawArc)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param a int
/// @param alen int
///
void q_painter_draw_arc3(void* self, int x, int y, int w, int h, int a, int alen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPie)
///
/// @param self QPainter*
/// @param rect QRectF*
/// @param a int
/// @param alen int
///
void q_painter_draw_pie(void* self, void* rect, int a, int alen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPie)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param a int
/// @param alen int
///
void q_painter_draw_pie2(void* self, int x, int y, int w, int h, int a, int alen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPie)
///
/// @param self QPainter*
/// @param param1 QRect*
/// @param a int
/// @param alen int
///
void q_painter_draw_pie3(void* self, void* param1, int a, int alen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawChord)
///
/// @param self QPainter*
/// @param rect QRectF*
/// @param a int
/// @param alen int
///
void q_painter_draw_chord(void* self, void* rect, int a, int alen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawChord)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param a int
/// @param alen int
///
void q_painter_draw_chord2(void* self, int x, int y, int w, int h, int a, int alen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawChord)
///
/// @param self QPainter*
/// @param param1 QRect*
/// @param a int
/// @param alen int
///
void q_painter_draw_chord3(void* self, void* param1, int a, int alen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// @param self QPainter*
/// @param rect QRectF*
/// @param xRadius double
/// @param yRadius double
///
void q_painter_draw_rounded_rect(void* self, void* rect, double xRadius, double yRadius);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param xRadius double
/// @param yRadius double
///
void q_painter_draw_rounded_rect2(void* self, int x, int y, int w, int h, double xRadius, double yRadius);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// @param self QPainter*
/// @param rect QRect*
/// @param xRadius double
/// @param yRadius double
///
void q_painter_draw_rounded_rect3(void* self, void* rect, double xRadius, double yRadius);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// @param self QPainter*
/// @param rect QRectF*
/// @param pm QPixmap*
///
void q_painter_draw_tiled_pixmap(void* self, void* rect, void* pm);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param param5 QPixmap*
///
void q_painter_draw_tiled_pixmap2(void* self, int x, int y, int w, int h, void* param5);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// @param self QPainter*
/// @param param1 QRect*
/// @param param2 QPixmap*
///
void q_painter_draw_tiled_pixmap3(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
///
/// @param self QPainter*
/// @param p QPointF*
/// @param picture QPicture*
///
void q_painter_draw_picture(void* self, void* p, void* picture);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param picture QPicture*
///
void q_painter_draw_picture2(void* self, int x, int y, void* picture);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
///
/// @param self QPainter*
/// @param p QPoint*
/// @param picture QPicture*
///
void q_painter_draw_picture3(void* self, void* p, void* picture);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QPainter*
/// @param targetRect QRectF*
/// @param pixmap QPixmap*
/// @param sourceRect QRectF*
///
void q_painter_draw_pixmap(void* self, void* targetRect, void* pixmap, void* sourceRect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QPainter*
/// @param targetRect QRect*
/// @param pixmap QPixmap*
/// @param sourceRect QRect*
///
void q_painter_draw_pixmap2(void* self, void* targetRect, void* pixmap, void* sourceRect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param pm QPixmap*
/// @param sx int
/// @param sy int
/// @param sw int
/// @param sh int
///
void q_painter_draw_pixmap3(void* self, int x, int y, int w, int h, void* pm, int sx, int sy, int sw, int sh);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param pm QPixmap*
/// @param sx int
/// @param sy int
/// @param sw int
/// @param sh int
///
void q_painter_draw_pixmap4(void* self, int x, int y, void* pm, int sx, int sy, int sw, int sh);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QPainter*
/// @param p QPointF*
/// @param pm QPixmap*
/// @param sr QRectF*
///
void q_painter_draw_pixmap5(void* self, void* p, void* pm, void* sr);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QPainter*
/// @param p QPoint*
/// @param pm QPixmap*
/// @param sr QRect*
///
void q_painter_draw_pixmap6(void* self, void* p, void* pm, void* sr);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QPainter*
/// @param p QPointF*
/// @param pm QPixmap*
///
void q_painter_draw_pixmap7(void* self, void* p, void* pm);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QPainter*
/// @param p QPoint*
/// @param pm QPixmap*
///
void q_painter_draw_pixmap8(void* self, void* p, void* pm);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param pm QPixmap*
///
void q_painter_draw_pixmap9(void* self, int x, int y, void* pm);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QPainter*
/// @param r QRect*
/// @param pm QPixmap*
///
void q_painter_draw_pixmap10(void* self, void* r, void* pm);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param pm QPixmap*
///
void q_painter_draw_pixmap11(void* self, int x, int y, int w, int h, void* pm);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
///
/// @param self QPainter*
/// @param fragments QPainter__PixmapFragment*
/// @param fragmentCount int
/// @param pixmap QPixmap*
///
void q_painter_draw_pixmap_fragments(void* self, void* fragments, int fragmentCount, void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param targetRect QRectF*
/// @param image QImage*
/// @param sourceRect QRectF*
///
void q_painter_draw_image(void* self, void* targetRect, void* image, void* sourceRect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param targetRect QRect*
/// @param image QImage*
/// @param sourceRect QRect*
///
void q_painter_draw_image2(void* self, void* targetRect, void* image, void* sourceRect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param p QPointF*
/// @param image QImage*
/// @param sr QRectF*
///
void q_painter_draw_image3(void* self, void* p, void* image, void* sr);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param p QPoint*
/// @param image QImage*
/// @param sr QRect*
///
void q_painter_draw_image4(void* self, void* p, void* image, void* sr);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param r QRectF*
/// @param image QImage*
///
void q_painter_draw_image5(void* self, void* r, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param r QRect*
/// @param image QImage*
///
void q_painter_draw_image6(void* self, void* r, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param p QPointF*
/// @param image QImage*
///
void q_painter_draw_image7(void* self, void* p, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param p QPoint*
/// @param image QImage*
///
void q_painter_draw_image8(void* self, void* p, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param image QImage*
///
void q_painter_draw_image9(void* self, int x, int y, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setLayoutDirection)
///
/// @param self QPainter*
/// @param direction enum Qt__LayoutDirection
///
void q_painter_set_layout_direction(void* self, int32_t direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#layoutDirection)
///
/// @param self QPainter*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_painter_layout_direction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawGlyphRun)
///
/// @param self QPainter*
/// @param position QPointF*
/// @param glyphRun QGlyphRun*
///
void q_painter_draw_glyph_run(void* self, void* position, void* glyphRun);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
///
/// @param self QPainter*
/// @param topLeftPosition QPointF*
/// @param staticText QStaticText*
///
void q_painter_draw_static_text(void* self, void* topLeftPosition, void* staticText);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
///
/// @param self QPainter*
/// @param topLeftPosition QPoint*
/// @param staticText QStaticText*
///
void q_painter_draw_static_text2(void* self, void* topLeftPosition, void* staticText);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
///
/// @param self QPainter*
/// @param left int
/// @param top int
/// @param staticText QStaticText*
///
void q_painter_draw_static_text3(void* self, int left, int top, void* staticText);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QPainter*
/// @param p QPointF*
/// @param s const char*
///
void q_painter_draw_text(void* self, void* p, const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QPainter*
/// @param p QPoint*
/// @param s const char*
///
void q_painter_draw_text2(void* self, void* p, const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param s const char*
///
void q_painter_draw_text3(void* self, int x, int y, const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QPainter*
/// @param p QPointF*
/// @param str const char*
/// @param tf int
/// @param justificationPadding int
///
void q_painter_draw_text4(void* self, void* p, const char* str, int tf, int justificationPadding);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QPainter*
/// @param r QRectF*
/// @param flags int
/// @param text const char*
///
void q_painter_draw_text5(void* self, void* r, int flags, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QPainter*
/// @param r QRect*
/// @param flags int
/// @param text const char*
///
void q_painter_draw_text6(void* self, void* r, int flags, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param flags int
/// @param text const char*
///
void q_painter_draw_text7(void* self, int x, int y, int w, int h, int flags, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QPainter*
/// @param r QRectF*
/// @param text const char*
///
void q_painter_draw_text8(void* self, void* r, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// @param self QPainter*
/// @param rect QRectF*
/// @param flags int
/// @param text const char*
///
QRectF* q_painter_bounding_rect(void* self, void* rect, int flags, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// @param self QPainter*
/// @param rect QRect*
/// @param flags int
/// @param text const char*
///
QRect* q_painter_bounding_rect2(void* self, void* rect, int flags, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param flags int
/// @param text const char*
///
QRect* q_painter_bounding_rect3(void* self, int x, int y, int w, int h, int flags, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// @param self QPainter*
/// @param rect QRectF*
/// @param text const char*
///
QRectF* q_painter_bounding_rect4(void* self, void* rect, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
///
/// @param self QPainter*
/// @param p QPointF*
/// @param ti QTextItem*
///
void q_painter_draw_text_item(void* self, void* p, void* ti);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param ti QTextItem*
///
void q_painter_draw_text_item2(void* self, int x, int y, void* ti);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
///
/// @param self QPainter*
/// @param p QPoint*
/// @param ti QTextItem*
///
void q_painter_draw_text_item3(void* self, void* p, void* ti);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param param1 QRectF*
/// @param param2 QBrush*
///
void q_painter_fill_rect(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param param5 QBrush*
///
void q_painter_fill_rect2(void* self, int x, int y, int w, int h, void* param5);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param param1 QRect*
/// @param param2 QBrush*
///
void q_painter_fill_rect3(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param param1 QRectF*
/// @param color QColor*
///
void q_painter_fill_rect4(void* self, void* param1, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param color QColor*
///
void q_painter_fill_rect5(void* self, int x, int y, int w, int h, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param param1 QRect*
/// @param color QColor*
///
void q_painter_fill_rect6(void* self, void* param1, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param c enum Qt__GlobalColor
///
void q_painter_fill_rect7(void* self, int x, int y, int w, int h, int32_t c);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param r QRect*
/// @param c enum Qt__GlobalColor
///
void q_painter_fill_rect8(void* self, void* r, int32_t c);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param r QRectF*
/// @param c enum Qt__GlobalColor
///
void q_painter_fill_rect9(void* self, void* r, int32_t c);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param style enum Qt__BrushStyle
///
void q_painter_fill_rect10(void* self, int x, int y, int w, int h, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param r QRect*
/// @param style enum Qt__BrushStyle
///
void q_painter_fill_rect11(void* self, void* r, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param r QRectF*
/// @param style enum Qt__BrushStyle
///
void q_painter_fill_rect12(void* self, void* r, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param preset enum QGradient__Preset
///
void q_painter_fill_rect13(void* self, int x, int y, int w, int h, int32_t preset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param r QRect*
/// @param preset enum QGradient__Preset
///
void q_painter_fill_rect14(void* self, void* r, int32_t preset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QPainter*
/// @param r QRectF*
/// @param preset enum QGradient__Preset
///
void q_painter_fill_rect15(void* self, void* r, int32_t preset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
///
/// @param self QPainter*
/// @param param1 QRectF*
///
void q_painter_erase_rect(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_painter_erase_rect2(void* self, int x, int y, int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
///
/// @param self QPainter*
/// @param param1 QRect*
///
void q_painter_erase_rect3(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
///
/// @param self QPainter*
/// @param hint enum QPainter__RenderHint
///
void q_painter_set_render_hint(void* self, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
///
/// @param self QPainter*
/// @param hints flag of enum QPainter__RenderHint
///
void q_painter_set_render_hints(void* self, int32_t hints);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#renderHints)
///
/// @param self QPainter*
///
/// @return flag of enum QPainter__RenderHint
///
int32_t q_painter_render_hints(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#testRenderHint)
///
/// @param self QPainter*
/// @param hint enum QPainter__RenderHint
///
bool q_painter_test_render_hint(void* self, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#paintEngine)
///
/// @param self QPainter*
///
QPaintEngine* q_painter_paint_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#beginNativePainting)
///
/// @param self QPainter*
///
void q_painter_begin_native_painting(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#endNativePainting)
///
/// @param self QPainter*
///
void q_painter_end_native_painting(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// @param self QPainter*
/// @param param1 QRectF*
/// @param op enum Qt__ClipOperation
///
void q_painter_set_clip_rect22(void* self, void* param1, int32_t op);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// @param self QPainter*
/// @param param1 QRect*
/// @param op enum Qt__ClipOperation
///
void q_painter_set_clip_rect23(void* self, void* param1, int32_t op);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param op enum Qt__ClipOperation
///
void q_painter_set_clip_rect5(void* self, int x, int y, int w, int h, int32_t op);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
///
/// @param self QPainter*
/// @param param1 QRegion*
/// @param op enum Qt__ClipOperation
///
void q_painter_set_clip_region2(void* self, void* param1, int32_t op);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
///
/// @param self QPainter*
/// @param path QPainterPath*
/// @param op enum Qt__ClipOperation
///
void q_painter_set_clip_path2(void* self, void* path, int32_t op);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setTransform)
///
/// @param self QPainter*
/// @param transform QTransform*
/// @param combine bool
///
void q_painter_set_transform2(void* self, void* transform, bool combine);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
///
/// @param self QPainter*
/// @param matrix QTransform*
/// @param combine bool
///
void q_painter_set_world_transform2(void* self, void* matrix, bool combine);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// @param self QPainter*
/// @param points QPointF*
/// @param pointCount int
/// @param fillRule enum Qt__FillRule
///
void q_painter_draw_polygon32(void* self, void* points, int pointCount, int32_t fillRule);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// @param self QPainter*
/// @param points QPoint*
/// @param pointCount int
/// @param fillRule enum Qt__FillRule
///
void q_painter_draw_polygon33(void* self, void* points, int pointCount, int32_t fillRule);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// @param self QPainter*
/// @param rect QRectF*
/// @param xRadius double
/// @param yRadius double
/// @param mode enum Qt__SizeMode
///
void q_painter_draw_rounded_rect4(void* self, void* rect, double xRadius, double yRadius, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param xRadius double
/// @param yRadius double
/// @param mode enum Qt__SizeMode
///
void q_painter_draw_rounded_rect7(void* self, int x, int y, int w, int h, double xRadius, double yRadius, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// @param self QPainter*
/// @param rect QRect*
/// @param xRadius double
/// @param yRadius double
/// @param mode enum Qt__SizeMode
///
void q_painter_draw_rounded_rect42(void* self, void* rect, double xRadius, double yRadius, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// @param self QPainter*
/// @param rect QRectF*
/// @param pm QPixmap*
/// @param offset QPointF*
///
void q_painter_draw_tiled_pixmap32(void* self, void* rect, void* pm, void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param param5 QPixmap*
/// @param sx int
///
void q_painter_draw_tiled_pixmap6(void* self, int x, int y, int w, int h, void* param5, int sx);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param param5 QPixmap*
/// @param sx int
/// @param sy int
///
void q_painter_draw_tiled_pixmap7(void* self, int x, int y, int w, int h, void* param5, int sx, int sy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// @param self QPainter*
/// @param param1 QRect*
/// @param param2 QPixmap*
/// @param param3 QPoint*
///
void q_painter_draw_tiled_pixmap33(void* self, void* param1, void* param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
///
/// @param self QPainter*
/// @param fragments QPainter__PixmapFragment*
/// @param fragmentCount int
/// @param pixmap QPixmap*
/// @param hints flag of enum QPainter__PixmapFragmentHint
///
void q_painter_draw_pixmap_fragments4(void* self, void* fragments, int fragmentCount, void* pixmap, int32_t hints);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param targetRect QRectF*
/// @param image QImage*
/// @param sourceRect QRectF*
/// @param flags flag of enum Qt__ImageConversionFlag
///
void q_painter_draw_image42(void* self, void* targetRect, void* image, void* sourceRect, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param targetRect QRect*
/// @param image QImage*
/// @param sourceRect QRect*
/// @param flags flag of enum Qt__ImageConversionFlag
///
void q_painter_draw_image43(void* self, void* targetRect, void* image, void* sourceRect, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param p QPointF*
/// @param image QImage*
/// @param sr QRectF*
/// @param flags flag of enum Qt__ImageConversionFlag
///
void q_painter_draw_image44(void* self, void* p, void* image, void* sr, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param p QPoint*
/// @param image QImage*
/// @param sr QRect*
/// @param flags flag of enum Qt__ImageConversionFlag
///
void q_painter_draw_image45(void* self, void* p, void* image, void* sr, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param image QImage*
/// @param sx int
///
void q_painter_draw_image46(void* self, int x, int y, void* image, int sx);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param image QImage*
/// @param sx int
/// @param sy int
///
void q_painter_draw_image52(void* self, int x, int y, void* image, int sx, int sy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param image QImage*
/// @param sx int
/// @param sy int
/// @param sw int
///
void q_painter_draw_image62(void* self, int x, int y, void* image, int sx, int sy, int sw);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param image QImage*
/// @param sx int
/// @param sy int
/// @param sw int
/// @param sh int
///
void q_painter_draw_image72(void* self, int x, int y, void* image, int sx, int sy, int sw, int sh);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param image QImage*
/// @param sx int
/// @param sy int
/// @param sw int
/// @param sh int
/// @param flags flag of enum Qt__ImageConversionFlag
///
void q_painter_draw_image82(void* self, int x, int y, void* image, int sx, int sy, int sw, int sh, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QPainter*
/// @param r QRectF*
/// @param flags int
/// @param text const char*
/// @param br QRectF*
///
void q_painter_draw_text42(void* self, void* r, int flags, const char* text, void* br);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QPainter*
/// @param r QRect*
/// @param flags int
/// @param text const char*
/// @param br QRect*
///
void q_painter_draw_text43(void* self, void* r, int flags, const char* text, void* br);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param flags int
/// @param text const char*
/// @param br QRect*
///
void q_painter_draw_text72(void* self, int x, int y, int w, int h, int flags, const char* text, void* br);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QPainter*
/// @param r QRectF*
/// @param text const char*
/// @param o QTextOption*
///
void q_painter_draw_text32(void* self, void* r, const char* text, void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// @param self QPainter*
/// @param rect QRectF*
/// @param text const char*
/// @param o QTextOption*
///
QRectF* q_painter_bounding_rect32(void* self, void* rect, const char* text, void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
///
/// @param self QPainter*
/// @param hint enum QPainter__RenderHint
/// @param on bool
///
void q_painter_set_render_hint2(void* self, int32_t hint, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
///
/// @param self QPainter*
/// @param hints flag of enum QPainter__RenderHint
/// @param on bool
///
void q_painter_set_render_hints2(void* self, int32_t hints, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#dtor.QPainter)
///
/// Delete this object from C++ memory.
///
/// @param self QPainter*
///
void q_painter_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html)

/// q_painter__pixmapfragment_new constructs a new QPainter::PixmapFragment object.
///
QPainter__PixmapFragment* q_painter__pixmapfragment_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html)

/// q_painter__pixmapfragment_new2 constructs a new QPainter::PixmapFragment object.
///
/// @param param1 QPainter__PixmapFragment*
///
QPainter__PixmapFragment* q_painter__pixmapfragment_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#x-var)
///
/// @param self QPainter__PixmapFragment*
///
double q_painter__pixmapfragment_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#x-var)
///
/// @param self QPainter__PixmapFragment*
/// @param x double
///
void q_painter__pixmapfragment_set_x(void* self, double x);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#y-var)
///
/// @param self QPainter__PixmapFragment*
///
double q_painter__pixmapfragment_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#y-var)
///
/// @param self QPainter__PixmapFragment*
/// @param y double
///
void q_painter__pixmapfragment_set_y(void* self, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#sourceLeft-var)
///
/// @param self QPainter__PixmapFragment*
///
double q_painter__pixmapfragment_source_left(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#sourceLeft-var)
///
/// @param self QPainter__PixmapFragment*
/// @param sourceLeft double
///
void q_painter__pixmapfragment_set_source_left(void* self, double sourceLeft);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#sourceTop-var)
///
/// @param self QPainter__PixmapFragment*
///
double q_painter__pixmapfragment_source_top(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#sourceTop-var)
///
/// @param self QPainter__PixmapFragment*
/// @param sourceTop double
///
void q_painter__pixmapfragment_set_source_top(void* self, double sourceTop);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#width-var)
///
/// @param self QPainter__PixmapFragment*
///
double q_painter__pixmapfragment_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#width-var)
///
/// @param self QPainter__PixmapFragment*
/// @param width double
///
void q_painter__pixmapfragment_set_width(void* self, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#height-var)
///
/// @param self QPainter__PixmapFragment*
///
double q_painter__pixmapfragment_height(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#height-var)
///
/// @param self QPainter__PixmapFragment*
/// @param height double
///
void q_painter__pixmapfragment_set_height(void* self, double height);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#scaleX-var)
///
/// @param self QPainter__PixmapFragment*
///
double q_painter__pixmapfragment_scale_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#scaleX-var)
///
/// @param self QPainter__PixmapFragment*
/// @param scaleX double
///
void q_painter__pixmapfragment_set_scale_x(void* self, double scaleX);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#scaleY-var)
///
/// @param self QPainter__PixmapFragment*
///
double q_painter__pixmapfragment_scale_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#scaleY-var)
///
/// @param self QPainter__PixmapFragment*
/// @param scaleY double
///
void q_painter__pixmapfragment_set_scale_y(void* self, double scaleY);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#rotation-var)
///
/// @param self QPainter__PixmapFragment*
///
double q_painter__pixmapfragment_rotation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#rotation-var)
///
/// @param self QPainter__PixmapFragment*
/// @param rotation double
///
void q_painter__pixmapfragment_set_rotation(void* self, double rotation);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#opacity-var)
///
/// @param self QPainter__PixmapFragment*
///
double q_painter__pixmapfragment_opacity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#opacity-var)
///
/// @param self QPainter__PixmapFragment*
/// @param opacity double
///
void q_painter__pixmapfragment_set_opacity(void* self, double opacity);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
///
/// @param pos QPointF*
/// @param sourceRect QRectF*
///
QPainter__PixmapFragment* q_painter__pixmapfragment_create(void* pos, void* sourceRect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
///
/// @param pos QPointF*
/// @param sourceRect QRectF*
/// @param scaleX double
///
QPainter__PixmapFragment* q_painter__pixmapfragment_create3(void* pos, void* sourceRect, double scaleX);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
///
/// @param pos QPointF*
/// @param sourceRect QRectF*
/// @param scaleX double
/// @param scaleY double
///
QPainter__PixmapFragment* q_painter__pixmapfragment_create4(void* pos, void* sourceRect, double scaleX, double scaleY);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
///
/// @param pos QPointF*
/// @param sourceRect QRectF*
/// @param scaleX double
/// @param scaleY double
/// @param rotation double
///
QPainter__PixmapFragment* q_painter__pixmapfragment_create5(void* pos, void* sourceRect, double scaleX, double scaleY, double rotation);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter-pixmapfragment.html#create)
///
/// @param pos QPointF*
/// @param sourceRect QRectF*
/// @param scaleX double
/// @param scaleY double
/// @param rotation double
/// @param opacity double
///
QPainter__PixmapFragment* q_painter__pixmapfragment_create6(void* pos, void* sourceRect, double scaleX, double scaleY, double rotation, double opacity);

/// Delete this object from C++ memory.
///
/// @param self QPainter__PixmapFragment*
///
void q_painter__pixmapfragment_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#public-types)

typedef enum {
    QPAINTER_RENDERHINT_ANTIALIASING = 1,
    QPAINTER_RENDERHINT_TEXTANTIALIASING = 2,
    QPAINTER_RENDERHINT_SMOOTHPIXMAPTRANSFORM = 4,
    QPAINTER_RENDERHINT_VERTICALSUBPIXELPOSITIONING = 8,
    QPAINTER_RENDERHINT_LOSSLESSIMAGERENDERING = 64,
    QPAINTER_RENDERHINT_NONCOSMETICBRUSHPATTERNS = 128
} QPainter__RenderHint;

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#public-types)

typedef enum {
    QPAINTER_PIXMAPFRAGMENTHINT_OPAQUEHINT = 1
} QPainter__PixmapFragmentHint;

/// [Upstream resources](https://doc.qt.io/qt-6/qpainter.html#public-types)

typedef enum {
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_SOURCEOVER = 0,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_DESTINATIONOVER = 1,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_CLEAR = 2,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_SOURCE = 3,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_DESTINATION = 4,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_SOURCEIN = 5,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_DESTINATIONIN = 6,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_SOURCEOUT = 7,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_DESTINATIONOUT = 8,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_SOURCEATOP = 9,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_DESTINATIONATOP = 10,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_XOR = 11,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_PLUS = 12,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_MULTIPLY = 13,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_SCREEN = 14,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_OVERLAY = 15,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_DARKEN = 16,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_LIGHTEN = 17,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_COLORDODGE = 18,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_COLORBURN = 19,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_HARDLIGHT = 20,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_SOFTLIGHT = 21,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_DIFFERENCE = 22,
    QPAINTER_COMPOSITIONMODE_COMPOSITIONMODE_EXCLUSION = 23,
    QPAINTER_COMPOSITIONMODE_RASTEROP_SOURCEORDESTINATION = 24,
    QPAINTER_COMPOSITIONMODE_RASTEROP_SOURCEANDDESTINATION = 25,
    QPAINTER_COMPOSITIONMODE_RASTEROP_SOURCEXORDESTINATION = 26,
    QPAINTER_COMPOSITIONMODE_RASTEROP_NOTSOURCEANDNOTDESTINATION = 27,
    QPAINTER_COMPOSITIONMODE_RASTEROP_NOTSOURCEORNOTDESTINATION = 28,
    QPAINTER_COMPOSITIONMODE_RASTEROP_NOTSOURCEXORDESTINATION = 29,
    QPAINTER_COMPOSITIONMODE_RASTEROP_NOTSOURCE = 30,
    QPAINTER_COMPOSITIONMODE_RASTEROP_NOTSOURCEANDDESTINATION = 31,
    QPAINTER_COMPOSITIONMODE_RASTEROP_SOURCEANDNOTDESTINATION = 32,
    QPAINTER_COMPOSITIONMODE_RASTEROP_NOTSOURCEORDESTINATION = 33,
    QPAINTER_COMPOSITIONMODE_RASTEROP_SOURCEORNOTDESTINATION = 34,
    QPAINTER_COMPOSITIONMODE_RASTEROP_CLEARDESTINATION = 35,
    QPAINTER_COMPOSITIONMODE_RASTEROP_SETDESTINATION = 36,
    QPAINTER_COMPOSITIONMODE_RASTEROP_NOTDESTINATION = 37
} QPainter__CompositionMode;

#endif

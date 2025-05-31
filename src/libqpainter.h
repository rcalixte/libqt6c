#pragma once
#ifndef SRCQT6C_LIBQPAINTER_H
#define SRCQT6C_LIBQPAINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbrush.h"
#include "libqcolor.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqglyphrun.h"
#include "libqimage.h"
#include "libqline.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainterpath.h"
#include "libqpen.h"
#include "libqpicture.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqstatictext.h"
#include <string.h>
#include "libqtextoption.h"
#include "libqtransform.h"

/// https://doc.qt.io/qt-6/qpainter.html

/// q_painter_new constructs a new QPainter object.
///
///
QPainter* q_painter_new();

/// q_painter_new2 constructs a new QPainter object.
///
/// ``` QPaintDevice* param1 ```
QPainter* q_painter_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#device)
///
/// ``` QPainter* self ```
QPaintDevice* q_painter_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#begin)
///
/// ``` QPainter* self, QPaintDevice* param1 ```
bool q_painter_begin(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#end)
///
/// ``` QPainter* self ```
bool q_painter_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#isActive)
///
/// ``` QPainter* self ```
bool q_painter_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setCompositionMode)
///
/// ``` QPainter* self, enum QPainter__CompositionMode mode ```
void q_painter_set_composition_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#compositionMode)
///
/// ``` QPainter* self ```
int64_t q_painter_composition_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#font)
///
/// ``` QPainter* self ```
const QFont* q_painter_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setFont)
///
/// ``` QPainter* self, QFont* f ```
void q_painter_set_font(void* self, void* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fontMetrics)
///
/// ``` QPainter* self ```
QFontMetrics* q_painter_font_metrics(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fontInfo)
///
/// ``` QPainter* self ```
QFontInfo* q_painter_font_info(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
///
/// ``` QPainter* self, QColor* color ```
void q_painter_set_pen(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
///
/// ``` QPainter* self, QPen* pen ```
void q_painter_set_pen_with_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
///
/// ``` QPainter* self, enum Qt__PenStyle style ```
void q_painter_set_pen_with_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#pen)
///
/// ``` QPainter* self ```
const QPen* q_painter_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrush)
///
/// ``` QPainter* self, QBrush* brush ```
void q_painter_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrush)
///
/// ``` QPainter* self, enum Qt__BrushStyle style ```
void q_painter_set_brush_with_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#brush)
///
/// ``` QPainter* self ```
const QBrush* q_painter_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBackgroundMode)
///
/// ``` QPainter* self, enum Qt__BGMode mode ```
void q_painter_set_background_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#backgroundMode)
///
/// ``` QPainter* self ```
int64_t q_painter_background_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#brushOrigin)
///
/// ``` QPainter* self ```
QPoint* q_painter_brush_origin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
///
/// ``` QPainter* self, int x, int y ```
void q_painter_set_brush_origin(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
///
/// ``` QPainter* self, QPoint* brushOrigin ```
void q_painter_set_brush_origin_with_brush_origin(void* self, void* brushOrigin);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
///
/// ``` QPainter* self, QPointF* brushOrigin ```
void q_painter_set_brush_origin2(void* self, void* brushOrigin);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBackground)
///
/// ``` QPainter* self, QBrush* bg ```
void q_painter_set_background(void* self, void* bg);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#background)
///
/// ``` QPainter* self ```
const QBrush* q_painter_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#opacity)
///
/// ``` QPainter* self ```
double q_painter_opacity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setOpacity)
///
/// ``` QPainter* self, double opacity ```
void q_painter_set_opacity(void* self, double opacity);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipRegion)
///
/// ``` QPainter* self ```
QRegion* q_painter_clip_region(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipPath)
///
/// ``` QPainter* self ```
QPainterPath* q_painter_clip_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// ``` QPainter* self, QRectF* param1 ```
void q_painter_set_clip_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// ``` QPainter* self, QRect* param1 ```
void q_painter_set_clip_rect_with_q_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// ``` QPainter* self, int x, int y, int w, int h ```
void q_painter_set_clip_rect2(void* self, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
///
/// ``` QPainter* self, QRegion* param1 ```
void q_painter_set_clip_region(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
///
/// ``` QPainter* self, QPainterPath* path ```
void q_painter_set_clip_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipping)
///
/// ``` QPainter* self, bool enable ```
void q_painter_set_clipping(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#hasClipping)
///
/// ``` QPainter* self ```
bool q_painter_has_clipping(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipBoundingRect)
///
/// ``` QPainter* self ```
QRectF* q_painter_clip_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#save)
///
/// ``` QPainter* self ```
void q_painter_save(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#restore)
///
/// ``` QPainter* self ```
void q_painter_restore(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setTransform)
///
/// ``` QPainter* self, QTransform* transform ```
void q_painter_set_transform(void* self, void* transform);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#transform)
///
/// ``` QPainter* self ```
const QTransform* q_painter_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#deviceTransform)
///
/// ``` QPainter* self ```
const QTransform* q_painter_device_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#resetTransform)
///
/// ``` QPainter* self ```
void q_painter_reset_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
///
/// ``` QPainter* self, QTransform* matrix ```
void q_painter_set_world_transform(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#worldTransform)
///
/// ``` QPainter* self ```
const QTransform* q_painter_world_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#combinedTransform)
///
/// ``` QPainter* self ```
QTransform* q_painter_combined_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldMatrixEnabled)
///
/// ``` QPainter* self, bool enabled ```
void q_painter_set_world_matrix_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#worldMatrixEnabled)
///
/// ``` QPainter* self ```
bool q_painter_world_matrix_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#scale)
///
/// ``` QPainter* self, double sx, double sy ```
void q_painter_scale(void* self, double sx, double sy);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#shear)
///
/// ``` QPainter* self, double sh, double sv ```
void q_painter_shear(void* self, double sh, double sv);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#rotate)
///
/// ``` QPainter* self, double a ```
void q_painter_rotate(void* self, double a);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
///
/// ``` QPainter* self, QPointF* offset ```
void q_painter_translate(void* self, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
///
/// ``` QPainter* self, QPoint* offset ```
void q_painter_translate_with_offset(void* self, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
///
/// ``` QPainter* self, double dx, double dy ```
void q_painter_translate2(void* self, double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#window)
///
/// ``` QPainter* self ```
QRect* q_painter_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWindow)
///
/// ``` QPainter* self, QRect* window ```
void q_painter_set_window(void* self, void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWindow)
///
/// ``` QPainter* self, int x, int y, int w, int h ```
void q_painter_set_window2(void* self, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#viewport)
///
/// ``` QPainter* self ```
QRect* q_painter_viewport(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewport)
///
/// ``` QPainter* self, QRect* viewport ```
void q_painter_set_viewport(void* self, void* viewport);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewport)
///
/// ``` QPainter* self, int x, int y, int w, int h ```
void q_painter_set_viewport2(void* self, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewTransformEnabled)
///
/// ``` QPainter* self, bool enable ```
void q_painter_set_view_transform_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#viewTransformEnabled)
///
/// ``` QPainter* self ```
bool q_painter_view_transform_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#strokePath)
///
/// ``` QPainter* self, QPainterPath* path, QPen* pen ```
void q_painter_stroke_path(void* self, void* path, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillPath)
///
/// ``` QPainter* self, QPainterPath* path, QBrush* brush ```
void q_painter_fill_path(void* self, void* path, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPath)
///
/// ``` QPainter* self, QPainterPath* path ```
void q_painter_draw_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
///
/// ``` QPainter* self, QPointF* pt ```
void q_painter_draw_point(void* self, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
///
/// ``` QPainter* self, QPoint* p ```
void q_painter_draw_point_with_q_point(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
///
/// ``` QPainter* self, int x, int y ```
void q_painter_draw_point2(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
///
/// ``` QPainter* self, QPointF* points, int pointCount ```
void q_painter_draw_points(void* self, void* points, int pointCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
///
/// ``` QPainter* self, QPoint* points, int pointCount ```
void q_painter_draw_points2(void* self, void* points, int pointCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// ``` QPainter* self, QLineF* line ```
void q_painter_draw_line(void* self, void* line);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// ``` QPainter* self, QLine* line ```
void q_painter_draw_line_with_line(void* self, void* line);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// ``` QPainter* self, int x1, int y1, int x2, int y2 ```
void q_painter_draw_line2(void* self, int x1, int y1, int x2, int y2);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// ``` QPainter* self, QPoint* p1, QPoint* p2 ```
void q_painter_draw_line3(void* self, void* p1, void* p2);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// ``` QPainter* self, QPointF* p1, QPointF* p2 ```
void q_painter_draw_line4(void* self, void* p1, void* p2);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QPainter* self, QLineF* lines, int lineCount ```
void q_painter_draw_lines(void* self, void* lines, int lineCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QPainter* self, libqt_list /* of QLineF* */ lines ```
void q_painter_draw_lines_with_lines(void* self, libqt_list lines);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QPainter* self, QPointF* pointPairs, int lineCount ```
void q_painter_draw_lines2(void* self, void* pointPairs, int lineCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QPainter* self, libqt_list /* of QPointF* */ pointPairs ```
void q_painter_draw_lines_with_point_pairs(void* self, libqt_list pointPairs);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QPainter* self, QLine* lines, int lineCount ```
void q_painter_draw_lines3(void* self, void* lines, int lineCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QPainter* self, libqt_list /* of QLine* */ lines ```
void q_painter_draw_lines4(void* self, libqt_list lines);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QPainter* self, QPoint* pointPairs, int lineCount ```
void q_painter_draw_lines5(void* self, void* pointPairs, int lineCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QPainter* self, libqt_list /* of QPoint* */ pointPairs ```
void q_painter_draw_lines6(void* self, libqt_list pointPairs);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
///
/// ``` QPainter* self, QRectF* rect ```
void q_painter_draw_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
///
/// ``` QPainter* self, int x1, int y1, int w, int h ```
void q_painter_draw_rect2(void* self, int x1, int y1, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
///
/// ``` QPainter* self, QRect* rect ```
void q_painter_draw_rect_with_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// ``` QPainter* self, QRectF* rects, int rectCount ```
void q_painter_draw_rects(void* self, void* rects, int rectCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// ``` QPainter* self, libqt_list /* of QRectF* */ rectangles ```
void q_painter_draw_rects_with_rectangles(void* self, libqt_list rectangles);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// ``` QPainter* self, QRect* rects, int rectCount ```
void q_painter_draw_rects2(void* self, void* rects, int rectCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// ``` QPainter* self, libqt_list /* of QRect* */ rectangles ```
void q_painter_draw_rects3(void* self, libqt_list rectangles);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// ``` QPainter* self, QRectF* r ```
void q_painter_draw_ellipse(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// ``` QPainter* self, QRect* r ```
void q_painter_draw_ellipse_with_q_rect(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// ``` QPainter* self, int x, int y, int w, int h ```
void q_painter_draw_ellipse2(void* self, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// ``` QPainter* self, QPointF* center, double rx, double ry ```
void q_painter_draw_ellipse3(void* self, void* center, double rx, double ry);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// ``` QPainter* self, QPoint* center, int rx, int ry ```
void q_painter_draw_ellipse4(void* self, void* center, int rx, int ry);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
///
/// ``` QPainter* self, QPointF* points, int pointCount ```
void q_painter_draw_polyline(void* self, void* points, int pointCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
///
/// ``` QPainter* self, QPoint* points, int pointCount ```
void q_painter_draw_polyline2(void* self, void* points, int pointCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// ``` QPainter* self, QPointF* points, int pointCount ```
void q_painter_draw_polygon(void* self, void* points, int pointCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// ``` QPainter* self, QPoint* points, int pointCount ```
void q_painter_draw_polygon2(void* self, void* points, int pointCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
///
/// ``` QPainter* self, QPointF* points, int pointCount ```
void q_painter_draw_convex_polygon(void* self, void* points, int pointCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
///
/// ``` QPainter* self, QPoint* points, int pointCount ```
void q_painter_draw_convex_polygon2(void* self, void* points, int pointCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
///
/// ``` QPainter* self, QRectF* rect, int a, int alen ```
void q_painter_draw_arc(void* self, void* rect, int a, int alen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
///
/// ``` QPainter* self, QRect* param1, int a, int alen ```
void q_painter_draw_arc2(void* self, void* param1, int a, int alen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
///
/// ``` QPainter* self, int x, int y, int w, int h, int a, int alen ```
void q_painter_draw_arc3(void* self, int x, int y, int w, int h, int a, int alen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
///
/// ``` QPainter* self, QRectF* rect, int a, int alen ```
void q_painter_draw_pie(void* self, void* rect, int a, int alen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
///
/// ``` QPainter* self, int x, int y, int w, int h, int a, int alen ```
void q_painter_draw_pie2(void* self, int x, int y, int w, int h, int a, int alen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
///
/// ``` QPainter* self, QRect* param1, int a, int alen ```
void q_painter_draw_pie3(void* self, void* param1, int a, int alen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
///
/// ``` QPainter* self, QRectF* rect, int a, int alen ```
void q_painter_draw_chord(void* self, void* rect, int a, int alen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
///
/// ``` QPainter* self, int x, int y, int w, int h, int a, int alen ```
void q_painter_draw_chord2(void* self, int x, int y, int w, int h, int a, int alen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
///
/// ``` QPainter* self, QRect* param1, int a, int alen ```
void q_painter_draw_chord3(void* self, void* param1, int a, int alen);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// ``` QPainter* self, QRectF* rect, double xRadius, double yRadius ```
void q_painter_draw_rounded_rect(void* self, void* rect, double xRadius, double yRadius);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// ``` QPainter* self, int x, int y, int w, int h, double xRadius, double yRadius ```
void q_painter_draw_rounded_rect2(void* self, int x, int y, int w, int h, double xRadius, double yRadius);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// ``` QPainter* self, QRect* rect, double xRadius, double yRadius ```
void q_painter_draw_rounded_rect3(void* self, void* rect, double xRadius, double yRadius);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// ``` QPainter* self, QRectF* rect, QPixmap* pm ```
void q_painter_draw_tiled_pixmap(void* self, void* rect, void* pm);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// ``` QPainter* self, int x, int y, int w, int h, QPixmap* param5 ```
void q_painter_draw_tiled_pixmap2(void* self, int x, int y, int w, int h, void* param5);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// ``` QPainter* self, QRect* param1, QPixmap* param2 ```
void q_painter_draw_tiled_pixmap3(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
///
/// ``` QPainter* self, QPointF* p, QPicture* picture ```
void q_painter_draw_picture(void* self, void* p, void* picture);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
///
/// ``` QPainter* self, int x, int y, QPicture* picture ```
void q_painter_draw_picture2(void* self, int x, int y, void* picture);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
///
/// ``` QPainter* self, QPoint* p, QPicture* picture ```
void q_painter_draw_picture3(void* self, void* p, void* picture);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QPainter* self, QRectF* targetRect, QPixmap* pixmap, QRectF* sourceRect ```
void q_painter_draw_pixmap(void* self, void* targetRect, void* pixmap, void* sourceRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QPainter* self, QRect* targetRect, QPixmap* pixmap, QRect* sourceRect ```
void q_painter_draw_pixmap2(void* self, void* targetRect, void* pixmap, void* sourceRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QPainter* self, int x, int y, int w, int h, QPixmap* pm, int sx, int sy, int sw, int sh ```
void q_painter_draw_pixmap3(void* self, int x, int y, int w, int h, void* pm, int sx, int sy, int sw, int sh);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QPainter* self, int x, int y, QPixmap* pm, int sx, int sy, int sw, int sh ```
void q_painter_draw_pixmap4(void* self, int x, int y, void* pm, int sx, int sy, int sw, int sh);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QPainter* self, QPointF* p, QPixmap* pm, QRectF* sr ```
void q_painter_draw_pixmap5(void* self, void* p, void* pm, void* sr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QPainter* self, QPoint* p, QPixmap* pm, QRect* sr ```
void q_painter_draw_pixmap6(void* self, void* p, void* pm, void* sr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QPainter* self, QPointF* p, QPixmap* pm ```
void q_painter_draw_pixmap7(void* self, void* p, void* pm);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QPainter* self, QPoint* p, QPixmap* pm ```
void q_painter_draw_pixmap8(void* self, void* p, void* pm);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QPainter* self, int x, int y, QPixmap* pm ```
void q_painter_draw_pixmap9(void* self, int x, int y, void* pm);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QPainter* self, QRect* r, QPixmap* pm ```
void q_painter_draw_pixmap10(void* self, void* r, void* pm);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QPainter* self, int x, int y, int w, int h, QPixmap* pm ```
void q_painter_draw_pixmap11(void* self, int x, int y, int w, int h, void* pm);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
///
/// ``` QPainter* self, QPainter__PixmapFragment* fragments, int fragmentCount, QPixmap* pixmap ```
void q_painter_draw_pixmap_fragments(void* self, void* fragments, int fragmentCount, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, QRectF* targetRect, QImage* image, QRectF* sourceRect ```
void q_painter_draw_image(void* self, void* targetRect, void* image, void* sourceRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, QRect* targetRect, QImage* image, QRect* sourceRect ```
void q_painter_draw_image2(void* self, void* targetRect, void* image, void* sourceRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, QPointF* p, QImage* image, QRectF* sr ```
void q_painter_draw_image3(void* self, void* p, void* image, void* sr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, QPoint* p, QImage* image, QRect* sr ```
void q_painter_draw_image4(void* self, void* p, void* image, void* sr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, QRectF* r, QImage* image ```
void q_painter_draw_image5(void* self, void* r, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, QRect* r, QImage* image ```
void q_painter_draw_image6(void* self, void* r, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, QPointF* p, QImage* image ```
void q_painter_draw_image7(void* self, void* p, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, QPoint* p, QImage* image ```
void q_painter_draw_image8(void* self, void* p, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, int x, int y, QImage* image ```
void q_painter_draw_image9(void* self, int x, int y, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setLayoutDirection)
///
/// ``` QPainter* self, enum Qt__LayoutDirection direction ```
void q_painter_set_layout_direction(void* self, int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#layoutDirection)
///
/// ``` QPainter* self ```
int64_t q_painter_layout_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawGlyphRun)
///
/// ``` QPainter* self, QPointF* position, QGlyphRun* glyphRun ```
void q_painter_draw_glyph_run(void* self, void* position, void* glyphRun);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
///
/// ``` QPainter* self, QPointF* topLeftPosition, QStaticText* staticText ```
void q_painter_draw_static_text(void* self, void* topLeftPosition, void* staticText);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
///
/// ``` QPainter* self, QPoint* topLeftPosition, QStaticText* staticText ```
void q_painter_draw_static_text2(void* self, void* topLeftPosition, void* staticText);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
///
/// ``` QPainter* self, int left, int top, QStaticText* staticText ```
void q_painter_draw_static_text3(void* self, int left, int top, void* staticText);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QPainter* self, QPointF* p, const char* s ```
void q_painter_draw_text(void* self, void* p, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QPainter* self, QPoint* p, const char* s ```
void q_painter_draw_text2(void* self, void* p, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QPainter* self, int x, int y, const char* s ```
void q_painter_draw_text3(void* self, int x, int y, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QPainter* self, QPointF* p, const char* str, int tf, int justificationPadding ```
void q_painter_draw_text4(void* self, void* p, const char* str, int tf, int justificationPadding);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QPainter* self, QRectF* r, int flags, const char* text ```
void q_painter_draw_text5(void* self, void* r, int flags, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QPainter* self, QRect* r, int flags, const char* text ```
void q_painter_draw_text6(void* self, void* r, int flags, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QPainter* self, int x, int y, int w, int h, int flags, const char* text ```
void q_painter_draw_text7(void* self, int x, int y, int w, int h, int flags, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QPainter* self, QRectF* r, const char* text ```
void q_painter_draw_text8(void* self, void* r, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// ``` QPainter* self, QRectF* rect, int flags, const char* text ```
QRectF* q_painter_bounding_rect(void* self, void* rect, int flags, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// ``` QPainter* self, QRect* rect, int flags, const char* text ```
QRect* q_painter_bounding_rect2(void* self, void* rect, int flags, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// ``` QPainter* self, int x, int y, int w, int h, int flags, const char* text ```
QRect* q_painter_bounding_rect3(void* self, int x, int y, int w, int h, int flags, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// ``` QPainter* self, QRectF* rect, const char* text ```
QRectF* q_painter_bounding_rect4(void* self, void* rect, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
///
/// ``` QPainter* self, QPointF* p, QTextItem* ti ```
void q_painter_draw_text_item(void* self, void* p, void* ti);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
///
/// ``` QPainter* self, int x, int y, QTextItem* ti ```
void q_painter_draw_text_item2(void* self, int x, int y, void* ti);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
///
/// ``` QPainter* self, QPoint* p, QTextItem* ti ```
void q_painter_draw_text_item3(void* self, void* p, void* ti);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, QRectF* param1, QBrush* param2 ```
void q_painter_fill_rect(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, int x, int y, int w, int h, QBrush* param5 ```
void q_painter_fill_rect2(void* self, int x, int y, int w, int h, void* param5);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, QRect* param1, QBrush* param2 ```
void q_painter_fill_rect3(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, QRectF* param1, QColor* color ```
void q_painter_fill_rect4(void* self, void* param1, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, int x, int y, int w, int h, QColor* color ```
void q_painter_fill_rect5(void* self, int x, int y, int w, int h, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, QRect* param1, QColor* color ```
void q_painter_fill_rect6(void* self, void* param1, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, int x, int y, int w, int h, enum Qt__GlobalColor c ```
void q_painter_fill_rect7(void* self, int x, int y, int w, int h, int64_t c);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, QRect* r, enum Qt__GlobalColor c ```
void q_painter_fill_rect8(void* self, void* r, int64_t c);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, QRectF* r, enum Qt__GlobalColor c ```
void q_painter_fill_rect9(void* self, void* r, int64_t c);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, int x, int y, int w, int h, enum Qt__BrushStyle style ```
void q_painter_fill_rect10(void* self, int x, int y, int w, int h, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, QRect* r, enum Qt__BrushStyle style ```
void q_painter_fill_rect11(void* self, void* r, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, QRectF* r, enum Qt__BrushStyle style ```
void q_painter_fill_rect12(void* self, void* r, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, int x, int y, int w, int h, enum QGradient__Preset preset ```
void q_painter_fill_rect13(void* self, int x, int y, int w, int h, int64_t preset);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, QRect* r, enum QGradient__Preset preset ```
void q_painter_fill_rect14(void* self, void* r, int64_t preset);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QPainter* self, QRectF* r, enum QGradient__Preset preset ```
void q_painter_fill_rect15(void* self, void* r, int64_t preset);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
///
/// ``` QPainter* self, QRectF* param1 ```
void q_painter_erase_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
///
/// ``` QPainter* self, int x, int y, int w, int h ```
void q_painter_erase_rect2(void* self, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
///
/// ``` QPainter* self, QRect* param1 ```
void q_painter_erase_rect_with_q_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
///
/// ``` QPainter* self, enum QPainter__RenderHint hint ```
void q_painter_set_render_hint(void* self, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
///
/// ``` QPainter* self, int hints ```
void q_painter_set_render_hints(void* self, int64_t hints);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#renderHints)
///
/// ``` QPainter* self ```
int64_t q_painter_render_hints(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#testRenderHint)
///
/// ``` QPainter* self, enum QPainter__RenderHint hint ```
bool q_painter_test_render_hint(void* self, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#paintEngine)
///
/// ``` QPainter* self ```
QPaintEngine* q_painter_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#beginNativePainting)
///
/// ``` QPainter* self ```
void q_painter_begin_native_painting(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#endNativePainting)
///
/// ``` QPainter* self ```
void q_painter_end_native_painting(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// ``` QPainter* self, QRectF* param1, enum Qt__ClipOperation op ```
void q_painter_set_clip_rect22(void* self, void* param1, int64_t op);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// ``` QPainter* self, QRect* param1, enum Qt__ClipOperation op ```
void q_painter_set_clip_rect23(void* self, void* param1, int64_t op);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// ``` QPainter* self, int x, int y, int w, int h, enum Qt__ClipOperation op ```
void q_painter_set_clip_rect5(void* self, int x, int y, int w, int h, int64_t op);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
///
/// ``` QPainter* self, QRegion* param1, enum Qt__ClipOperation op ```
void q_painter_set_clip_region2(void* self, void* param1, int64_t op);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
///
/// ``` QPainter* self, QPainterPath* path, enum Qt__ClipOperation op ```
void q_painter_set_clip_path2(void* self, void* path, int64_t op);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setTransform)
///
/// ``` QPainter* self, QTransform* transform, bool combine ```
void q_painter_set_transform2(void* self, void* transform, bool combine);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
///
/// ``` QPainter* self, QTransform* matrix, bool combine ```
void q_painter_set_world_transform2(void* self, void* matrix, bool combine);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// ``` QPainter* self, QPointF* points, int pointCount, enum Qt__FillRule fillRule ```
void q_painter_draw_polygon32(void* self, void* points, int pointCount, int64_t fillRule);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// ``` QPainter* self, QPoint* points, int pointCount, enum Qt__FillRule fillRule ```
void q_painter_draw_polygon33(void* self, void* points, int pointCount, int64_t fillRule);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// ``` QPainter* self, QRectF* rect, double xRadius, double yRadius, enum Qt__SizeMode mode ```
void q_painter_draw_rounded_rect4(void* self, void* rect, double xRadius, double yRadius, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// ``` QPainter* self, int x, int y, int w, int h, double xRadius, double yRadius, enum Qt__SizeMode mode ```
void q_painter_draw_rounded_rect7(void* self, int x, int y, int w, int h, double xRadius, double yRadius, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// ``` QPainter* self, QRect* rect, double xRadius, double yRadius, enum Qt__SizeMode mode ```
void q_painter_draw_rounded_rect42(void* self, void* rect, double xRadius, double yRadius, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// ``` QPainter* self, QRectF* rect, QPixmap* pm, QPointF* offset ```
void q_painter_draw_tiled_pixmap32(void* self, void* rect, void* pm, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// ``` QPainter* self, int x, int y, int w, int h, QPixmap* param5, int sx ```
void q_painter_draw_tiled_pixmap6(void* self, int x, int y, int w, int h, void* param5, int sx);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// ``` QPainter* self, int x, int y, int w, int h, QPixmap* param5, int sx, int sy ```
void q_painter_draw_tiled_pixmap7(void* self, int x, int y, int w, int h, void* param5, int sx, int sy);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// ``` QPainter* self, QRect* param1, QPixmap* param2, QPoint* param3 ```
void q_painter_draw_tiled_pixmap33(void* self, void* param1, void* param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
///
/// ``` QPainter* self, QPainter__PixmapFragment* fragments, int fragmentCount, QPixmap* pixmap, int hints ```
void q_painter_draw_pixmap_fragments4(void* self, void* fragments, int fragmentCount, void* pixmap, int64_t hints);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, QRectF* targetRect, QImage* image, QRectF* sourceRect, int flags ```
void q_painter_draw_image42(void* self, void* targetRect, void* image, void* sourceRect, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, QRect* targetRect, QImage* image, QRect* sourceRect, int flags ```
void q_painter_draw_image43(void* self, void* targetRect, void* image, void* sourceRect, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, QPointF* p, QImage* image, QRectF* sr, int flags ```
void q_painter_draw_image44(void* self, void* p, void* image, void* sr, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, QPoint* p, QImage* image, QRect* sr, int flags ```
void q_painter_draw_image45(void* self, void* p, void* image, void* sr, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, int x, int y, QImage* image, int sx ```
void q_painter_draw_image46(void* self, int x, int y, void* image, int sx);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, int x, int y, QImage* image, int sx, int sy ```
void q_painter_draw_image52(void* self, int x, int y, void* image, int sx, int sy);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw ```
void q_painter_draw_image62(void* self, int x, int y, void* image, int sx, int sy, int sw);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw, int sh ```
void q_painter_draw_image72(void* self, int x, int y, void* image, int sx, int sy, int sw, int sh);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw, int sh, int flags ```
void q_painter_draw_image82(void* self, int x, int y, void* image, int sx, int sy, int sw, int sh, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QPainter* self, QRectF* r, int flags, const char* text, QRectF* br ```
void q_painter_draw_text42(void* self, void* r, int flags, const char* text, void* br);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QPainter* self, QRect* r, int flags, const char* text, QRect* br ```
void q_painter_draw_text43(void* self, void* r, int flags, const char* text, void* br);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QPainter* self, int x, int y, int w, int h, int flags, const char* text, QRect* br ```
void q_painter_draw_text72(void* self, int x, int y, int w, int h, int flags, const char* text, void* br);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QPainter* self, QRectF* r, const char* text, QTextOption* o ```
void q_painter_draw_text32(void* self, void* r, const char* text, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// ``` QPainter* self, QRectF* rect, const char* text, QTextOption* o ```
QRectF* q_painter_bounding_rect32(void* self, void* rect, const char* text, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
///
/// ``` QPainter* self, enum QPainter__RenderHint hint, bool on ```
void q_painter_set_render_hint2(void* self, int64_t hint, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
///
/// ``` QPainter* self, int hints, bool on ```
void q_painter_set_render_hints2(void* self, int64_t hints, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#dtor.QPainter)
///
/// Delete this object from C++ memory.
///
/// ``` QPainter* self ```
void q_painter_delete(void* self);

/// https://doc.qt.io/qt-6/qpainter-pixmapfragment.html

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
///
/// ``` QPointF* pos, QRectF* sourceRect ```
QPainter__PixmapFragment* q_painter__pixmapfragment_create(void* pos, void* sourceRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
///
/// ``` QPointF* pos, QRectF* sourceRect, double scaleX ```
QPainter__PixmapFragment* q_painter__pixmapfragment_create3(void* pos, void* sourceRect, double scaleX);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
///
/// ``` QPointF* pos, QRectF* sourceRect, double scaleX, double scaleY ```
QPainter__PixmapFragment* q_painter__pixmapfragment_create4(void* pos, void* sourceRect, double scaleX, double scaleY);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
///
/// ``` QPointF* pos, QRectF* sourceRect, double scaleX, double scaleY, double rotation ```
QPainter__PixmapFragment* q_painter__pixmapfragment_create5(void* pos, void* sourceRect, double scaleX, double scaleY, double rotation);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter__pixmapfragment.html#create)
///
/// ``` QPointF* pos, QRectF* sourceRect, double scaleX, double scaleY, double rotation, double opacity ```
QPainter__PixmapFragment* q_painter__pixmapfragment_create6(void* pos, void* sourceRect, double scaleX, double scaleY, double rotation, double opacity);

/// [Qt documentation](https://doc.qt.io/qt-6/qpainter::pixmapfragment.html#dtor.QPainter::PixmapFragment)
///
/// Delete this object from C++ memory.
///
/// ``` QPainter__PixmapFragment* self ```
void q_painter__pixmapfragment_delete(void* self);

/// https://doc.qt.io/qt-6/qpainter.html#types

typedef enum {
    QPAINTER_RENDERHINT_ANTIALIASING = 1,
    QPAINTER_RENDERHINT_TEXTANTIALIASING = 2,
    QPAINTER_RENDERHINT_SMOOTHPIXMAPTRANSFORM = 4,
    QPAINTER_RENDERHINT_VERTICALSUBPIXELPOSITIONING = 8,
    QPAINTER_RENDERHINT_LOSSLESSIMAGERENDERING = 64,
    QPAINTER_RENDERHINT_NONCOSMETICBRUSHPATTERNS = 128
} QPainter__RenderHint;

typedef enum {
    QPAINTER_PIXMAPFRAGMENTHINT_OPAQUEHINT = 1
} QPainter__PixmapFragmentHint;

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

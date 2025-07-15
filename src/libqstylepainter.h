#pragma once
#ifndef SRCQT6C_LIBQSTYLEPAINTER_H
#define SRCQT6C_LIBQSTYLEPAINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstylepainter.html

/// q_stylepainter_new constructs a new QStylePainter object.
///
/// ``` QWidget* w ```
QStylePainter* q_stylepainter_new(void* w);

/// q_stylepainter_new2 constructs a new QStylePainter object.
///
///
QStylePainter* q_stylepainter_new2();

/// q_stylepainter_new3 constructs a new QStylePainter object.
///
/// ``` QPaintDevice* pd, QWidget* w ```
QStylePainter* q_stylepainter_new3(void* pd, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#begin)
///
/// ``` QStylePainter* self, QWidget* w ```
bool q_stylepainter_begin(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#begin)
///
/// ``` QStylePainter* self, QPaintDevice* pd, QWidget* w ```
bool q_stylepainter_begin2(void* self, void* pd, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawPrimitive)
///
/// ``` QStylePainter* self, enum QStyle__PrimitiveElement pe, QStyleOption* opt ```
void q_stylepainter_draw_primitive(void* self, int64_t pe, void* opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawControl)
///
/// ``` QStylePainter* self, enum QStyle__ControlElement ce, QStyleOption* opt ```
void q_stylepainter_draw_control(void* self, int64_t ce, void* opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawComplexControl)
///
/// ``` QStylePainter* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt ```
void q_stylepainter_draw_complex_control(void* self, int64_t cc, void* opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawItemText)
///
/// ``` QStylePainter* self, QRect* r, int flags, QPalette* pal, bool enabled, const char* text ```
void q_stylepainter_draw_item_text(void* self, void* r, int flags, void* pal, bool enabled, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawItemPixmap)
///
/// ``` QStylePainter* self, QRect* r, int flags, QPixmap* pixmap ```
void q_stylepainter_draw_item_pixmap(void* self, void* r, int flags, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#style)
///
/// ``` QStylePainter* self ```
QStyle* q_stylepainter_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawItemText)
///
/// ``` QStylePainter* self, QRect* r, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole ```
void q_stylepainter_draw_item_text6(void* self, void* r, int flags, void* pal, bool enabled, const char* text, int64_t textRole);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#device)
///
/// ``` QStylePainter* self ```
QPaintDevice* q_stylepainter_device(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#end)
///
/// ``` QStylePainter* self ```
bool q_stylepainter_end(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#isActive)
///
/// ``` QStylePainter* self ```
bool q_stylepainter_is_active(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setCompositionMode)
///
/// ``` QStylePainter* self, enum QPainter__CompositionMode mode ```
void q_stylepainter_set_composition_mode(void* self, int64_t mode);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#compositionMode)
///
/// ``` QStylePainter* self ```
int64_t q_stylepainter_composition_mode(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#font)
///
/// ``` QStylePainter* self ```
const QFont* q_stylepainter_font(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setFont)
///
/// ``` QStylePainter* self, QFont* f ```
void q_stylepainter_set_font(void* self, void* f);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fontMetrics)
///
/// ``` QStylePainter* self ```
QFontMetrics* q_stylepainter_font_metrics(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fontInfo)
///
/// ``` QStylePainter* self ```
QFontInfo* q_stylepainter_font_info(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
///
/// ``` QStylePainter* self, QColor* color ```
void q_stylepainter_set_pen(void* self, void* color);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
///
/// ``` QStylePainter* self, QPen* pen ```
void q_stylepainter_set_pen2(void* self, void* pen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
///
/// ``` QStylePainter* self, enum Qt__PenStyle style ```
void q_stylepainter_set_pen3(void* self, int64_t style);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#pen)
///
/// ``` QStylePainter* self ```
const QPen* q_stylepainter_pen(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrush)
///
/// ``` QStylePainter* self, QBrush* brush ```
void q_stylepainter_set_brush(void* self, void* brush);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrush)
///
/// ``` QStylePainter* self, enum Qt__BrushStyle style ```
void q_stylepainter_set_brush2(void* self, int64_t style);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#brush)
///
/// ``` QStylePainter* self ```
const QBrush* q_stylepainter_brush(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBackgroundMode)
///
/// ``` QStylePainter* self, enum Qt__BGMode mode ```
void q_stylepainter_set_background_mode(void* self, int64_t mode);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#backgroundMode)
///
/// ``` QStylePainter* self ```
int64_t q_stylepainter_background_mode(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#brushOrigin)
///
/// ``` QStylePainter* self ```
QPoint* q_stylepainter_brush_origin(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
///
/// ``` QStylePainter* self, int x, int y ```
void q_stylepainter_set_brush_origin(void* self, int x, int y);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
///
/// ``` QStylePainter* self, QPoint* brushOrigin ```
void q_stylepainter_set_brush_origin2(void* self, void* brushOrigin);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
///
/// ``` QStylePainter* self, QPointF* brushOrigin ```
void q_stylepainter_set_brush_origin3(void* self, void* brushOrigin);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBackground)
///
/// ``` QStylePainter* self, QBrush* bg ```
void q_stylepainter_set_background(void* self, void* bg);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#background)
///
/// ``` QStylePainter* self ```
const QBrush* q_stylepainter_background(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#opacity)
///
/// ``` QStylePainter* self ```
double q_stylepainter_opacity(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setOpacity)
///
/// ``` QStylePainter* self, double opacity ```
void q_stylepainter_set_opacity(void* self, double opacity);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipRegion)
///
/// ``` QStylePainter* self ```
QRegion* q_stylepainter_clip_region(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipPath)
///
/// ``` QStylePainter* self ```
QPainterPath* q_stylepainter_clip_path(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// ``` QStylePainter* self, QRectF* param1 ```
void q_stylepainter_set_clip_rect(void* self, void* param1);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// ``` QStylePainter* self, QRect* param1 ```
void q_stylepainter_set_clip_rect2(void* self, void* param1);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// ``` QStylePainter* self, int x, int y, int w, int h ```
void q_stylepainter_set_clip_rect3(void* self, int x, int y, int w, int h);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
///
/// ``` QStylePainter* self, QRegion* param1 ```
void q_stylepainter_set_clip_region(void* self, void* param1);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
///
/// ``` QStylePainter* self, QPainterPath* path ```
void q_stylepainter_set_clip_path(void* self, void* path);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipping)
///
/// ``` QStylePainter* self, bool enable ```
void q_stylepainter_set_clipping(void* self, bool enable);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#hasClipping)
///
/// ``` QStylePainter* self ```
bool q_stylepainter_has_clipping(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipBoundingRect)
///
/// ``` QStylePainter* self ```
QRectF* q_stylepainter_clip_bounding_rect(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#save)
///
/// ``` QStylePainter* self ```
void q_stylepainter_save(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#restore)
///
/// ``` QStylePainter* self ```
void q_stylepainter_restore(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setTransform)
///
/// ``` QStylePainter* self, QTransform* transform ```
void q_stylepainter_set_transform(void* self, void* transform);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#transform)
///
/// ``` QStylePainter* self ```
const QTransform* q_stylepainter_transform(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#deviceTransform)
///
/// ``` QStylePainter* self ```
const QTransform* q_stylepainter_device_transform(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#resetTransform)
///
/// ``` QStylePainter* self ```
void q_stylepainter_reset_transform(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
///
/// ``` QStylePainter* self, QTransform* matrix ```
void q_stylepainter_set_world_transform(void* self, void* matrix);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#worldTransform)
///
/// ``` QStylePainter* self ```
const QTransform* q_stylepainter_world_transform(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#combinedTransform)
///
/// ``` QStylePainter* self ```
QTransform* q_stylepainter_combined_transform(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldMatrixEnabled)
///
/// ``` QStylePainter* self, bool enabled ```
void q_stylepainter_set_world_matrix_enabled(void* self, bool enabled);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#worldMatrixEnabled)
///
/// ``` QStylePainter* self ```
bool q_stylepainter_world_matrix_enabled(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#scale)
///
/// ``` QStylePainter* self, double sx, double sy ```
void q_stylepainter_scale(void* self, double sx, double sy);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#shear)
///
/// ``` QStylePainter* self, double sh, double sv ```
void q_stylepainter_shear(void* self, double sh, double sv);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#rotate)
///
/// ``` QStylePainter* self, double a ```
void q_stylepainter_rotate(void* self, double a);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
///
/// ``` QStylePainter* self, QPointF* offset ```
void q_stylepainter_translate(void* self, void* offset);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
///
/// ``` QStylePainter* self, QPoint* offset ```
void q_stylepainter_translate2(void* self, void* offset);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
///
/// ``` QStylePainter* self, double dx, double dy ```
void q_stylepainter_translate3(void* self, double dx, double dy);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#window)
///
/// ``` QStylePainter* self ```
QRect* q_stylepainter_window(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWindow)
///
/// ``` QStylePainter* self, QRect* window ```
void q_stylepainter_set_window(void* self, void* window);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWindow)
///
/// ``` QStylePainter* self, int x, int y, int w, int h ```
void q_stylepainter_set_window2(void* self, int x, int y, int w, int h);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#viewport)
///
/// ``` QStylePainter* self ```
QRect* q_stylepainter_viewport(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewport)
///
/// ``` QStylePainter* self, QRect* viewport ```
void q_stylepainter_set_viewport(void* self, void* viewport);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewport)
///
/// ``` QStylePainter* self, int x, int y, int w, int h ```
void q_stylepainter_set_viewport2(void* self, int x, int y, int w, int h);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewTransformEnabled)
///
/// ``` QStylePainter* self, bool enable ```
void q_stylepainter_set_view_transform_enabled(void* self, bool enable);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#viewTransformEnabled)
///
/// ``` QStylePainter* self ```
bool q_stylepainter_view_transform_enabled(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#strokePath)
///
/// ``` QStylePainter* self, QPainterPath* path, QPen* pen ```
void q_stylepainter_stroke_path(void* self, void* path, void* pen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillPath)
///
/// ``` QStylePainter* self, QPainterPath* path, QBrush* brush ```
void q_stylepainter_fill_path(void* self, void* path, void* brush);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPath)
///
/// ``` QStylePainter* self, QPainterPath* path ```
void q_stylepainter_draw_path(void* self, void* path);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
///
/// ``` QStylePainter* self, QPointF* pt ```
void q_stylepainter_draw_point(void* self, void* pt);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
///
/// ``` QStylePainter* self, QPoint* p ```
void q_stylepainter_draw_point2(void* self, void* p);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
///
/// ``` QStylePainter* self, int x, int y ```
void q_stylepainter_draw_point3(void* self, int x, int y);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
///
/// ``` QStylePainter* self, QPointF* points, int pointCount ```
void q_stylepainter_draw_points(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
///
/// ``` QStylePainter* self, QPoint* points, int pointCount ```
void q_stylepainter_draw_points3(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// ``` QStylePainter* self, QLineF* line ```
void q_stylepainter_draw_line(void* self, void* line);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// ``` QStylePainter* self, QLine* line ```
void q_stylepainter_draw_line2(void* self, void* line);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// ``` QStylePainter* self, int x1, int y1, int x2, int y2 ```
void q_stylepainter_draw_line3(void* self, int x1, int y1, int x2, int y2);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// ``` QStylePainter* self, QPoint* p1, QPoint* p2 ```
void q_stylepainter_draw_line4(void* self, void* p1, void* p2);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// ``` QStylePainter* self, QPointF* p1, QPointF* p2 ```
void q_stylepainter_draw_line5(void* self, void* p1, void* p2);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QStylePainter* self, QLineF* lines, int lineCount ```
void q_stylepainter_draw_lines(void* self, void* lines, int lineCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QStylePainter* self, libqt_list /* of QLineF* */ lines ```
void q_stylepainter_draw_lines2(void* self, libqt_list lines);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QStylePainter* self, QPointF* pointPairs, int lineCount ```
void q_stylepainter_draw_lines3(void* self, void* pointPairs, int lineCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QStylePainter* self, libqt_list /* of QPointF* */ pointPairs ```
void q_stylepainter_draw_lines4(void* self, libqt_list pointPairs);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QStylePainter* self, QLine* lines, int lineCount ```
void q_stylepainter_draw_lines5(void* self, void* lines, int lineCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QStylePainter* self, libqt_list /* of QLine* */ lines ```
void q_stylepainter_draw_lines6(void* self, libqt_list lines);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QStylePainter* self, QPoint* pointPairs, int lineCount ```
void q_stylepainter_draw_lines7(void* self, void* pointPairs, int lineCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// ``` QStylePainter* self, libqt_list /* of QPoint* */ pointPairs ```
void q_stylepainter_draw_lines8(void* self, libqt_list pointPairs);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
///
/// ``` QStylePainter* self, QRectF* rect ```
void q_stylepainter_draw_rect(void* self, void* rect);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
///
/// ``` QStylePainter* self, int x1, int y1, int w, int h ```
void q_stylepainter_draw_rect2(void* self, int x1, int y1, int w, int h);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
///
/// ``` QStylePainter* self, QRect* rect ```
void q_stylepainter_draw_rect3(void* self, void* rect);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// ``` QStylePainter* self, QRectF* rects, int rectCount ```
void q_stylepainter_draw_rects(void* self, void* rects, int rectCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// ``` QStylePainter* self, libqt_list /* of QRectF* */ rectangles ```
void q_stylepainter_draw_rects2(void* self, libqt_list rectangles);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// ``` QStylePainter* self, QRect* rects, int rectCount ```
void q_stylepainter_draw_rects3(void* self, void* rects, int rectCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// ``` QStylePainter* self, libqt_list /* of QRect* */ rectangles ```
void q_stylepainter_draw_rects4(void* self, libqt_list rectangles);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// ``` QStylePainter* self, QRectF* r ```
void q_stylepainter_draw_ellipse(void* self, void* r);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// ``` QStylePainter* self, QRect* r ```
void q_stylepainter_draw_ellipse2(void* self, void* r);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// ``` QStylePainter* self, int x, int y, int w, int h ```
void q_stylepainter_draw_ellipse3(void* self, int x, int y, int w, int h);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// ``` QStylePainter* self, QPointF* center, double rx, double ry ```
void q_stylepainter_draw_ellipse4(void* self, void* center, double rx, double ry);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// ``` QStylePainter* self, QPoint* center, int rx, int ry ```
void q_stylepainter_draw_ellipse5(void* self, void* center, int rx, int ry);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
///
/// ``` QStylePainter* self, QPointF* points, int pointCount ```
void q_stylepainter_draw_polyline(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
///
/// ``` QStylePainter* self, QPoint* points, int pointCount ```
void q_stylepainter_draw_polyline3(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// ``` QStylePainter* self, QPointF* points, int pointCount ```
void q_stylepainter_draw_polygon(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// ``` QStylePainter* self, QPoint* points, int pointCount ```
void q_stylepainter_draw_polygon3(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
///
/// ``` QStylePainter* self, QPointF* points, int pointCount ```
void q_stylepainter_draw_convex_polygon(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
///
/// ``` QStylePainter* self, QPoint* points, int pointCount ```
void q_stylepainter_draw_convex_polygon3(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
///
/// ``` QStylePainter* self, QRectF* rect, int a, int alen ```
void q_stylepainter_draw_arc(void* self, void* rect, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
///
/// ``` QStylePainter* self, QRect* param1, int a, int alen ```
void q_stylepainter_draw_arc2(void* self, void* param1, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, int a, int alen ```
void q_stylepainter_draw_arc3(void* self, int x, int y, int w, int h, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
///
/// ``` QStylePainter* self, QRectF* rect, int a, int alen ```
void q_stylepainter_draw_pie(void* self, void* rect, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, int a, int alen ```
void q_stylepainter_draw_pie2(void* self, int x, int y, int w, int h, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
///
/// ``` QStylePainter* self, QRect* param1, int a, int alen ```
void q_stylepainter_draw_pie3(void* self, void* param1, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
///
/// ``` QStylePainter* self, QRectF* rect, int a, int alen ```
void q_stylepainter_draw_chord(void* self, void* rect, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, int a, int alen ```
void q_stylepainter_draw_chord2(void* self, int x, int y, int w, int h, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
///
/// ``` QStylePainter* self, QRect* param1, int a, int alen ```
void q_stylepainter_draw_chord3(void* self, void* param1, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// ``` QStylePainter* self, QRectF* rect, double xRadius, double yRadius ```
void q_stylepainter_draw_rounded_rect(void* self, void* rect, double xRadius, double yRadius);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, double xRadius, double yRadius ```
void q_stylepainter_draw_rounded_rect2(void* self, int x, int y, int w, int h, double xRadius, double yRadius);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// ``` QStylePainter* self, QRect* rect, double xRadius, double yRadius ```
void q_stylepainter_draw_rounded_rect3(void* self, void* rect, double xRadius, double yRadius);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// ``` QStylePainter* self, QRectF* rect, QPixmap* pm ```
void q_stylepainter_draw_tiled_pixmap(void* self, void* rect, void* pm);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, QPixmap* param5 ```
void q_stylepainter_draw_tiled_pixmap2(void* self, int x, int y, int w, int h, void* param5);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// ``` QStylePainter* self, QRect* param1, QPixmap* param2 ```
void q_stylepainter_draw_tiled_pixmap3(void* self, void* param1, void* param2);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
///
/// ``` QStylePainter* self, QPointF* p, QPicture* picture ```
void q_stylepainter_draw_picture(void* self, void* p, void* picture);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
///
/// ``` QStylePainter* self, int x, int y, QPicture* picture ```
void q_stylepainter_draw_picture2(void* self, int x, int y, void* picture);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
///
/// ``` QStylePainter* self, QPoint* p, QPicture* picture ```
void q_stylepainter_draw_picture3(void* self, void* p, void* picture);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QStylePainter* self, QRectF* targetRect, QPixmap* pixmap, QRectF* sourceRect ```
void q_stylepainter_draw_pixmap(void* self, void* targetRect, void* pixmap, void* sourceRect);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QStylePainter* self, QRect* targetRect, QPixmap* pixmap, QRect* sourceRect ```
void q_stylepainter_draw_pixmap2(void* self, void* targetRect, void* pixmap, void* sourceRect);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, QPixmap* pm, int sx, int sy, int sw, int sh ```
void q_stylepainter_draw_pixmap3(void* self, int x, int y, int w, int h, void* pm, int sx, int sy, int sw, int sh);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QStylePainter* self, int x, int y, QPixmap* pm, int sx, int sy, int sw, int sh ```
void q_stylepainter_draw_pixmap4(void* self, int x, int y, void* pm, int sx, int sy, int sw, int sh);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QStylePainter* self, QPointF* p, QPixmap* pm, QRectF* sr ```
void q_stylepainter_draw_pixmap5(void* self, void* p, void* pm, void* sr);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QStylePainter* self, QPoint* p, QPixmap* pm, QRect* sr ```
void q_stylepainter_draw_pixmap6(void* self, void* p, void* pm, void* sr);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QStylePainter* self, QPointF* p, QPixmap* pm ```
void q_stylepainter_draw_pixmap7(void* self, void* p, void* pm);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QStylePainter* self, QPoint* p, QPixmap* pm ```
void q_stylepainter_draw_pixmap8(void* self, void* p, void* pm);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QStylePainter* self, int x, int y, QPixmap* pm ```
void q_stylepainter_draw_pixmap9(void* self, int x, int y, void* pm);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QStylePainter* self, QRect* r, QPixmap* pm ```
void q_stylepainter_draw_pixmap10(void* self, void* r, void* pm);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, QPixmap* pm ```
void q_stylepainter_draw_pixmap11(void* self, int x, int y, int w, int h, void* pm);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
///
/// ``` QStylePainter* self, QPainter__PixmapFragment* fragments, int fragmentCount, QPixmap* pixmap ```
void q_stylepainter_draw_pixmap_fragments(void* self, void* fragments, int fragmentCount, void* pixmap);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, QRectF* targetRect, QImage* image, QRectF* sourceRect ```
void q_stylepainter_draw_image(void* self, void* targetRect, void* image, void* sourceRect);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, QRect* targetRect, QImage* image, QRect* sourceRect ```
void q_stylepainter_draw_image2(void* self, void* targetRect, void* image, void* sourceRect);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, QPointF* p, QImage* image, QRectF* sr ```
void q_stylepainter_draw_image3(void* self, void* p, void* image, void* sr);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, QPoint* p, QImage* image, QRect* sr ```
void q_stylepainter_draw_image4(void* self, void* p, void* image, void* sr);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, QRectF* r, QImage* image ```
void q_stylepainter_draw_image5(void* self, void* r, void* image);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, QRect* r, QImage* image ```
void q_stylepainter_draw_image6(void* self, void* r, void* image);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, QPointF* p, QImage* image ```
void q_stylepainter_draw_image7(void* self, void* p, void* image);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, QPoint* p, QImage* image ```
void q_stylepainter_draw_image8(void* self, void* p, void* image);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, int x, int y, QImage* image ```
void q_stylepainter_draw_image9(void* self, int x, int y, void* image);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setLayoutDirection)
///
/// ``` QStylePainter* self, enum Qt__LayoutDirection direction ```
void q_stylepainter_set_layout_direction(void* self, int64_t direction);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#layoutDirection)
///
/// ``` QStylePainter* self ```
int64_t q_stylepainter_layout_direction(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawGlyphRun)
///
/// ``` QStylePainter* self, QPointF* position, QGlyphRun* glyphRun ```
void q_stylepainter_draw_glyph_run(void* self, void* position, void* glyphRun);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
///
/// ``` QStylePainter* self, QPointF* topLeftPosition, QStaticText* staticText ```
void q_stylepainter_draw_static_text(void* self, void* topLeftPosition, void* staticText);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
///
/// ``` QStylePainter* self, QPoint* topLeftPosition, QStaticText* staticText ```
void q_stylepainter_draw_static_text2(void* self, void* topLeftPosition, void* staticText);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
///
/// ``` QStylePainter* self, int left, int top, QStaticText* staticText ```
void q_stylepainter_draw_static_text3(void* self, int left, int top, void* staticText);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QStylePainter* self, QPointF* p, const char* s ```
void q_stylepainter_draw_text(void* self, void* p, const char* s);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QStylePainter* self, QPoint* p, const char* s ```
void q_stylepainter_draw_text2(void* self, void* p, const char* s);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QStylePainter* self, int x, int y, const char* s ```
void q_stylepainter_draw_text3(void* self, int x, int y, const char* s);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QStylePainter* self, QPointF* p, const char* str, int tf, int justificationPadding ```
void q_stylepainter_draw_text4(void* self, void* p, const char* str, int tf, int justificationPadding);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QStylePainter* self, QRectF* r, int flags, const char* text ```
void q_stylepainter_draw_text5(void* self, void* r, int flags, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QStylePainter* self, QRect* r, int flags, const char* text ```
void q_stylepainter_draw_text6(void* self, void* r, int flags, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, int flags, const char* text ```
void q_stylepainter_draw_text7(void* self, int x, int y, int w, int h, int flags, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QStylePainter* self, QRectF* r, const char* text ```
void q_stylepainter_draw_text8(void* self, void* r, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// ``` QStylePainter* self, QRectF* rect, int flags, const char* text ```
QRectF* q_stylepainter_bounding_rect(void* self, void* rect, int flags, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// ``` QStylePainter* self, QRect* rect, int flags, const char* text ```
QRect* q_stylepainter_bounding_rect2(void* self, void* rect, int flags, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, int flags, const char* text ```
QRect* q_stylepainter_bounding_rect3(void* self, int x, int y, int w, int h, int flags, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// ``` QStylePainter* self, QRectF* rect, const char* text ```
QRectF* q_stylepainter_bounding_rect4(void* self, void* rect, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
///
/// ``` QStylePainter* self, QPointF* p, QTextItem* ti ```
void q_stylepainter_draw_text_item(void* self, void* p, void* ti);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
///
/// ``` QStylePainter* self, int x, int y, QTextItem* ti ```
void q_stylepainter_draw_text_item2(void* self, int x, int y, void* ti);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
///
/// ``` QStylePainter* self, QPoint* p, QTextItem* ti ```
void q_stylepainter_draw_text_item3(void* self, void* p, void* ti);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, QRectF* param1, QBrush* param2 ```
void q_stylepainter_fill_rect(void* self, void* param1, void* param2);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, QBrush* param5 ```
void q_stylepainter_fill_rect2(void* self, int x, int y, int w, int h, void* param5);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, QRect* param1, QBrush* param2 ```
void q_stylepainter_fill_rect3(void* self, void* param1, void* param2);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, QRectF* param1, QColor* color ```
void q_stylepainter_fill_rect4(void* self, void* param1, void* color);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, QColor* color ```
void q_stylepainter_fill_rect5(void* self, int x, int y, int w, int h, void* color);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, QRect* param1, QColor* color ```
void q_stylepainter_fill_rect6(void* self, void* param1, void* color);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, enum Qt__GlobalColor c ```
void q_stylepainter_fill_rect7(void* self, int x, int y, int w, int h, int64_t c);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, QRect* r, enum Qt__GlobalColor c ```
void q_stylepainter_fill_rect8(void* self, void* r, int64_t c);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, QRectF* r, enum Qt__GlobalColor c ```
void q_stylepainter_fill_rect9(void* self, void* r, int64_t c);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, enum Qt__BrushStyle style ```
void q_stylepainter_fill_rect10(void* self, int x, int y, int w, int h, int64_t style);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, QRect* r, enum Qt__BrushStyle style ```
void q_stylepainter_fill_rect11(void* self, void* r, int64_t style);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, QRectF* r, enum Qt__BrushStyle style ```
void q_stylepainter_fill_rect12(void* self, void* r, int64_t style);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, enum QGradient__Preset preset ```
void q_stylepainter_fill_rect13(void* self, int x, int y, int w, int h, int64_t preset);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, QRect* r, enum QGradient__Preset preset ```
void q_stylepainter_fill_rect14(void* self, void* r, int64_t preset);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// ``` QStylePainter* self, QRectF* r, enum QGradient__Preset preset ```
void q_stylepainter_fill_rect15(void* self, void* r, int64_t preset);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
///
/// ``` QStylePainter* self, QRectF* param1 ```
void q_stylepainter_erase_rect(void* self, void* param1);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
///
/// ``` QStylePainter* self, int x, int y, int w, int h ```
void q_stylepainter_erase_rect2(void* self, int x, int y, int w, int h);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
///
/// ``` QStylePainter* self, QRect* param1 ```
void q_stylepainter_erase_rect3(void* self, void* param1);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
///
/// ``` QStylePainter* self, enum QPainter__RenderHint hint ```
void q_stylepainter_set_render_hint(void* self, int64_t hint);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
///
/// ``` QStylePainter* self, int hints ```
void q_stylepainter_set_render_hints(void* self, int64_t hints);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#renderHints)
///
/// ``` QStylePainter* self ```
int64_t q_stylepainter_render_hints(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#testRenderHint)
///
/// ``` QStylePainter* self, enum QPainter__RenderHint hint ```
bool q_stylepainter_test_render_hint(void* self, int64_t hint);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#paintEngine)
///
/// ``` QStylePainter* self ```
QPaintEngine* q_stylepainter_paint_engine(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#beginNativePainting)
///
/// ``` QStylePainter* self ```
void q_stylepainter_begin_native_painting(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#endNativePainting)
///
/// ``` QStylePainter* self ```
void q_stylepainter_end_native_painting(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// ``` QStylePainter* self, QRectF* param1, enum Qt__ClipOperation op ```
void q_stylepainter_set_clip_rect22(void* self, void* param1, int64_t op);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// ``` QStylePainter* self, QRect* param1, enum Qt__ClipOperation op ```
void q_stylepainter_set_clip_rect23(void* self, void* param1, int64_t op);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, enum Qt__ClipOperation op ```
void q_stylepainter_set_clip_rect5(void* self, int x, int y, int w, int h, int64_t op);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
///
/// ``` QStylePainter* self, QRegion* param1, enum Qt__ClipOperation op ```
void q_stylepainter_set_clip_region2(void* self, void* param1, int64_t op);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
///
/// ``` QStylePainter* self, QPainterPath* path, enum Qt__ClipOperation op ```
void q_stylepainter_set_clip_path2(void* self, void* path, int64_t op);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setTransform)
///
/// ``` QStylePainter* self, QTransform* transform, bool combine ```
void q_stylepainter_set_transform2(void* self, void* transform, bool combine);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
///
/// ``` QStylePainter* self, QTransform* matrix, bool combine ```
void q_stylepainter_set_world_transform2(void* self, void* matrix, bool combine);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// ``` QStylePainter* self, QPointF* points, int pointCount, enum Qt__FillRule fillRule ```
void q_stylepainter_draw_polygon32(void* self, void* points, int pointCount, int64_t fillRule);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// ``` QStylePainter* self, QPoint* points, int pointCount, enum Qt__FillRule fillRule ```
void q_stylepainter_draw_polygon33(void* self, void* points, int pointCount, int64_t fillRule);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// ``` QStylePainter* self, QRectF* rect, double xRadius, double yRadius, enum Qt__SizeMode mode ```
void q_stylepainter_draw_rounded_rect4(void* self, void* rect, double xRadius, double yRadius, int64_t mode);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, double xRadius, double yRadius, enum Qt__SizeMode mode ```
void q_stylepainter_draw_rounded_rect7(void* self, int x, int y, int w, int h, double xRadius, double yRadius, int64_t mode);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// ``` QStylePainter* self, QRect* rect, double xRadius, double yRadius, enum Qt__SizeMode mode ```
void q_stylepainter_draw_rounded_rect42(void* self, void* rect, double xRadius, double yRadius, int64_t mode);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// ``` QStylePainter* self, QRectF* rect, QPixmap* pm, QPointF* offset ```
void q_stylepainter_draw_tiled_pixmap32(void* self, void* rect, void* pm, void* offset);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, QPixmap* param5, int sx ```
void q_stylepainter_draw_tiled_pixmap6(void* self, int x, int y, int w, int h, void* param5, int sx);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, QPixmap* param5, int sx, int sy ```
void q_stylepainter_draw_tiled_pixmap7(void* self, int x, int y, int w, int h, void* param5, int sx, int sy);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// ``` QStylePainter* self, QRect* param1, QPixmap* param2, QPoint* param3 ```
void q_stylepainter_draw_tiled_pixmap33(void* self, void* param1, void* param2, void* param3);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
///
/// ``` QStylePainter* self, QPainter__PixmapFragment* fragments, int fragmentCount, QPixmap* pixmap, int hints ```
void q_stylepainter_draw_pixmap_fragments4(void* self, void* fragments, int fragmentCount, void* pixmap, int64_t hints);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, QRectF* targetRect, QImage* image, QRectF* sourceRect, int flags ```
void q_stylepainter_draw_image42(void* self, void* targetRect, void* image, void* sourceRect, int64_t flags);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, QRect* targetRect, QImage* image, QRect* sourceRect, int flags ```
void q_stylepainter_draw_image43(void* self, void* targetRect, void* image, void* sourceRect, int64_t flags);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, QPointF* p, QImage* image, QRectF* sr, int flags ```
void q_stylepainter_draw_image44(void* self, void* p, void* image, void* sr, int64_t flags);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, QPoint* p, QImage* image, QRect* sr, int flags ```
void q_stylepainter_draw_image45(void* self, void* p, void* image, void* sr, int64_t flags);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, int x, int y, QImage* image, int sx ```
void q_stylepainter_draw_image46(void* self, int x, int y, void* image, int sx);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, int x, int y, QImage* image, int sx, int sy ```
void q_stylepainter_draw_image52(void* self, int x, int y, void* image, int sx, int sy);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, int x, int y, QImage* image, int sx, int sy, int sw ```
void q_stylepainter_draw_image62(void* self, int x, int y, void* image, int sx, int sy, int sw);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, int x, int y, QImage* image, int sx, int sy, int sw, int sh ```
void q_stylepainter_draw_image72(void* self, int x, int y, void* image, int sx, int sy, int sw, int sh);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// ``` QStylePainter* self, int x, int y, QImage* image, int sx, int sy, int sw, int sh, int flags ```
void q_stylepainter_draw_image82(void* self, int x, int y, void* image, int sx, int sy, int sw, int sh, int64_t flags);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QStylePainter* self, QRectF* r, int flags, const char* text, QRectF* br ```
void q_stylepainter_draw_text42(void* self, void* r, int flags, const char* text, void* br);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QStylePainter* self, QRect* r, int flags, const char* text, QRect* br ```
void q_stylepainter_draw_text43(void* self, void* r, int flags, const char* text, void* br);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QStylePainter* self, int x, int y, int w, int h, int flags, const char* text, QRect* br ```
void q_stylepainter_draw_text72(void* self, int x, int y, int w, int h, int flags, const char* text, void* br);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// ``` QStylePainter* self, QRectF* r, const char* text, QTextOption* o ```
void q_stylepainter_draw_text32(void* self, void* r, const char* text, void* o);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// ``` QStylePainter* self, QRectF* rect, const char* text, QTextOption* o ```
QRectF* q_stylepainter_bounding_rect32(void* self, void* rect, const char* text, void* o);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
///
/// ``` QStylePainter* self, enum QPainter__RenderHint hint, bool on ```
void q_stylepainter_set_render_hint2(void* self, int64_t hint, bool on);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
///
/// ``` QStylePainter* self, int hints, bool on ```
void q_stylepainter_set_render_hints2(void* self, int64_t hints, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#dtor.QStylePainter)
///
/// Delete this object from C++ memory.
///
/// ``` QStylePainter* self ```
void q_stylepainter_delete(void* self);

#endif

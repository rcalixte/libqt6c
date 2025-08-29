#pragma once
#ifndef SRCQT6C_LIBQSTYLEPAINTER_H
#define SRCQT6C_LIBQSTYLEPAINTER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstylepainter.html

/// q_stylepainter_new constructs a new QStylePainter object.
///
/// @param w QWidget*
QStylePainter* q_stylepainter_new(void* w);

/// q_stylepainter_new2 constructs a new QStylePainter object.
///
QStylePainter* q_stylepainter_new2();

/// q_stylepainter_new3 constructs a new QStylePainter object.
///
/// @param pd QPaintDevice*
/// @param w QWidget*
QStylePainter* q_stylepainter_new3(void* pd, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#begin)
///
/// @param self QStylePainter*
/// @param w QWidget*
bool q_stylepainter_begin(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#begin)
///
/// @param self QStylePainter*
/// @param pd QPaintDevice*
/// @param w QWidget*
bool q_stylepainter_begin2(void* self, void* pd, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawPrimitive)
///
/// @param self QStylePainter*
/// @param pe enum QStyle__PrimitiveElement
/// @param opt QStyleOption*
void q_stylepainter_draw_primitive(void* self, int32_t pe, void* opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawControl)
///
/// @param self QStylePainter*
/// @param ce enum QStyle__ControlElement
/// @param opt QStyleOption*
void q_stylepainter_draw_control(void* self, int64_t ce, void* opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawComplexControl)
///
/// @param self QStylePainter*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
void q_stylepainter_draw_complex_control(void* self, int64_t cc, void* opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawItemText)
///
/// @param self QStylePainter*
/// @param r QRect*
/// @param flags int
/// @param pal QPalette*
/// @param enabled bool
/// @param text const char*
void q_stylepainter_draw_item_text(void* self, void* r, int flags, void* pal, bool enabled, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawItemPixmap)
///
/// @param self QStylePainter*
/// @param r QRect*
/// @param flags int
/// @param pixmap QPixmap*
void q_stylepainter_draw_item_pixmap(void* self, void* r, int flags, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#style)
///
/// @param self QStylePainter*
QStyle* q_stylepainter_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#drawItemText)
///
/// @param self QStylePainter*
/// @param r QRect*
/// @param flags int
/// @param pal QPalette*
/// @param enabled bool
/// @param text const char*
/// @param textRole enum QPalette__ColorRole
void q_stylepainter_draw_item_text6(void* self, void* r, int flags, void* pal, bool enabled, const char* text, int32_t textRole);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#device)
///
/// @param self QStylePainter*
QPaintDevice* q_stylepainter_device(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#end)
///
/// @param self QStylePainter*
bool q_stylepainter_end(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#isActive)
///
/// @param self QStylePainter*
bool q_stylepainter_is_active(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setCompositionMode)
///
/// @param self QStylePainter*
/// @param mode enum QPainter__CompositionMode
void q_stylepainter_set_composition_mode(void* self, int32_t mode);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#compositionMode)
///
/// @param self QStylePainter*
///
/// @return enum QPainter__CompositionMode
int32_t q_stylepainter_composition_mode(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#font)
///
/// @param self QStylePainter*
const QFont* q_stylepainter_font(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setFont)
///
/// @param self QStylePainter*
/// @param f QFont*
void q_stylepainter_set_font(void* self, void* f);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fontMetrics)
///
/// @param self QStylePainter*
QFontMetrics* q_stylepainter_font_metrics(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fontInfo)
///
/// @param self QStylePainter*
QFontInfo* q_stylepainter_font_info(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
///
/// @param self QStylePainter*
/// @param color QColor*
void q_stylepainter_set_pen(void* self, void* color);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
///
/// @param self QStylePainter*
/// @param pen QPen*
void q_stylepainter_set_pen2(void* self, void* pen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setPen)
///
/// @param self QStylePainter*
/// @param style enum Qt__PenStyle
void q_stylepainter_set_pen3(void* self, int32_t style);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#pen)
///
/// @param self QStylePainter*
const QPen* q_stylepainter_pen(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrush)
///
/// @param self QStylePainter*
/// @param brush QBrush*
void q_stylepainter_set_brush(void* self, void* brush);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrush)
///
/// @param self QStylePainter*
/// @param style enum Qt__BrushStyle
void q_stylepainter_set_brush2(void* self, int32_t style);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#brush)
///
/// @param self QStylePainter*
const QBrush* q_stylepainter_brush(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBackgroundMode)
///
/// @param self QStylePainter*
/// @param mode enum Qt__BGMode
void q_stylepainter_set_background_mode(void* self, int32_t mode);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#backgroundMode)
///
/// @param self QStylePainter*
///
/// @return enum Qt__BGMode
int32_t q_stylepainter_background_mode(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#brushOrigin)
///
/// @param self QStylePainter*
QPoint* q_stylepainter_brush_origin(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
void q_stylepainter_set_brush_origin(void* self, int x, int y);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
///
/// @param self QStylePainter*
/// @param brushOrigin QPoint*
void q_stylepainter_set_brush_origin2(void* self, void* brushOrigin);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBrushOrigin)
///
/// @param self QStylePainter*
/// @param brushOrigin QPointF*
void q_stylepainter_set_brush_origin3(void* self, void* brushOrigin);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setBackground)
///
/// @param self QStylePainter*
/// @param bg QBrush*
void q_stylepainter_set_background(void* self, void* bg);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#background)
///
/// @param self QStylePainter*
const QBrush* q_stylepainter_background(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#opacity)
///
/// @param self QStylePainter*
double q_stylepainter_opacity(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setOpacity)
///
/// @param self QStylePainter*
/// @param opacity double
void q_stylepainter_set_opacity(void* self, double opacity);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipRegion)
///
/// @param self QStylePainter*
QRegion* q_stylepainter_clip_region(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipPath)
///
/// @param self QStylePainter*
QPainterPath* q_stylepainter_clip_path(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// @param self QStylePainter*
/// @param param1 QRectF*
void q_stylepainter_set_clip_rect(void* self, void* param1);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// @param self QStylePainter*
/// @param param1 QRect*
void q_stylepainter_set_clip_rect2(void* self, void* param1);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_stylepainter_set_clip_rect3(void* self, int x, int y, int w, int h);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
///
/// @param self QStylePainter*
/// @param param1 QRegion*
void q_stylepainter_set_clip_region(void* self, void* param1);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
///
/// @param self QStylePainter*
/// @param path QPainterPath*
void q_stylepainter_set_clip_path(void* self, void* path);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipping)
///
/// @param self QStylePainter*
/// @param enable bool
void q_stylepainter_set_clipping(void* self, bool enable);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#hasClipping)
///
/// @param self QStylePainter*
bool q_stylepainter_has_clipping(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#clipBoundingRect)
///
/// @param self QStylePainter*
QRectF* q_stylepainter_clip_bounding_rect(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#save)
///
/// @param self QStylePainter*
void q_stylepainter_save(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#restore)
///
/// @param self QStylePainter*
void q_stylepainter_restore(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setTransform)
///
/// @param self QStylePainter*
/// @param transform QTransform*
void q_stylepainter_set_transform(void* self, void* transform);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#transform)
///
/// @param self QStylePainter*
const QTransform* q_stylepainter_transform(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#deviceTransform)
///
/// @param self QStylePainter*
const QTransform* q_stylepainter_device_transform(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#resetTransform)
///
/// @param self QStylePainter*
void q_stylepainter_reset_transform(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
///
/// @param self QStylePainter*
/// @param matrix QTransform*
void q_stylepainter_set_world_transform(void* self, void* matrix);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#worldTransform)
///
/// @param self QStylePainter*
const QTransform* q_stylepainter_world_transform(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#combinedTransform)
///
/// @param self QStylePainter*
QTransform* q_stylepainter_combined_transform(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldMatrixEnabled)
///
/// @param self QStylePainter*
/// @param enabled bool
void q_stylepainter_set_world_matrix_enabled(void* self, bool enabled);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#worldMatrixEnabled)
///
/// @param self QStylePainter*
bool q_stylepainter_world_matrix_enabled(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#scale)
///
/// @param self QStylePainter*
/// @param sx double
/// @param sy double
void q_stylepainter_scale(void* self, double sx, double sy);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#shear)
///
/// @param self QStylePainter*
/// @param sh double
/// @param sv double
void q_stylepainter_shear(void* self, double sh, double sv);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#rotate)
///
/// @param self QStylePainter*
/// @param a double
void q_stylepainter_rotate(void* self, double a);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
///
/// @param self QStylePainter*
/// @param offset QPointF*
void q_stylepainter_translate(void* self, void* offset);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
///
/// @param self QStylePainter*
/// @param offset QPoint*
void q_stylepainter_translate2(void* self, void* offset);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#translate)
///
/// @param self QStylePainter*
/// @param dx double
/// @param dy double
void q_stylepainter_translate3(void* self, double dx, double dy);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#window)
///
/// @param self QStylePainter*
QRect* q_stylepainter_window(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWindow)
///
/// @param self QStylePainter*
/// @param window QRect*
void q_stylepainter_set_window(void* self, void* window);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWindow)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_stylepainter_set_window2(void* self, int x, int y, int w, int h);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#viewport)
///
/// @param self QStylePainter*
QRect* q_stylepainter_viewport(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewport)
///
/// @param self QStylePainter*
/// @param viewport QRect*
void q_stylepainter_set_viewport(void* self, void* viewport);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewport)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_stylepainter_set_viewport2(void* self, int x, int y, int w, int h);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setViewTransformEnabled)
///
/// @param self QStylePainter*
/// @param enable bool
void q_stylepainter_set_view_transform_enabled(void* self, bool enable);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#viewTransformEnabled)
///
/// @param self QStylePainter*
bool q_stylepainter_view_transform_enabled(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#strokePath)
///
/// @param self QStylePainter*
/// @param path QPainterPath*
/// @param pen QPen*
void q_stylepainter_stroke_path(void* self, void* path, void* pen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillPath)
///
/// @param self QStylePainter*
/// @param path QPainterPath*
/// @param brush QBrush*
void q_stylepainter_fill_path(void* self, void* path, void* brush);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPath)
///
/// @param self QStylePainter*
/// @param path QPainterPath*
void q_stylepainter_draw_path(void* self, void* path);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
///
/// @param self QStylePainter*
/// @param pt QPointF*
void q_stylepainter_draw_point(void* self, void* pt);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
///
/// @param self QStylePainter*
/// @param p QPoint*
void q_stylepainter_draw_point2(void* self, void* p);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoint)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
void q_stylepainter_draw_point3(void* self, int x, int y);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
///
/// @param self QStylePainter*
/// @param points QPointF*
/// @param pointCount int
void q_stylepainter_draw_points(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPoints)
///
/// @param self QStylePainter*
/// @param points QPoint*
/// @param pointCount int
void q_stylepainter_draw_points3(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// @param self QStylePainter*
/// @param line QLineF*
void q_stylepainter_draw_line(void* self, void* line);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// @param self QStylePainter*
/// @param line QLine*
void q_stylepainter_draw_line2(void* self, void* line);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// @param self QStylePainter*
/// @param x1 int
/// @param y1 int
/// @param x2 int
/// @param y2 int
void q_stylepainter_draw_line3(void* self, int x1, int y1, int x2, int y2);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// @param self QStylePainter*
/// @param p1 QPoint*
/// @param p2 QPoint*
void q_stylepainter_draw_line4(void* self, void* p1, void* p2);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLine)
///
/// @param self QStylePainter*
/// @param p1 QPointF*
/// @param p2 QPointF*
void q_stylepainter_draw_line5(void* self, void* p1, void* p2);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QStylePainter*
/// @param lines QLineF*
/// @param lineCount int
void q_stylepainter_draw_lines(void* self, void* lines, int lineCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QStylePainter*
/// @param lines libqt_list /* of QLineF* */
void q_stylepainter_draw_lines2(void* self, libqt_list lines);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QStylePainter*
/// @param pointPairs QPointF*
/// @param lineCount int
void q_stylepainter_draw_lines3(void* self, void* pointPairs, int lineCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QStylePainter*
/// @param pointPairs libqt_list /* of QPointF* */
void q_stylepainter_draw_lines4(void* self, libqt_list pointPairs);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QStylePainter*
/// @param lines QLine*
/// @param lineCount int
void q_stylepainter_draw_lines5(void* self, void* lines, int lineCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QStylePainter*
/// @param lines libqt_list /* of QLine* */
void q_stylepainter_draw_lines6(void* self, libqt_list lines);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QStylePainter*
/// @param pointPairs QPoint*
/// @param lineCount int
void q_stylepainter_draw_lines7(void* self, void* pointPairs, int lineCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawLines)
///
/// @param self QStylePainter*
/// @param pointPairs libqt_list /* of QPoint* */
void q_stylepainter_draw_lines8(void* self, libqt_list pointPairs);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
///
/// @param self QStylePainter*
/// @param rect QRectF*
void q_stylepainter_draw_rect(void* self, void* rect);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
///
/// @param self QStylePainter*
/// @param x1 int
/// @param y1 int
/// @param w int
/// @param h int
void q_stylepainter_draw_rect2(void* self, int x1, int y1, int w, int h);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRect)
///
/// @param self QStylePainter*
/// @param rect QRect*
void q_stylepainter_draw_rect3(void* self, void* rect);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// @param self QStylePainter*
/// @param rects QRectF*
/// @param rectCount int
void q_stylepainter_draw_rects(void* self, void* rects, int rectCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// @param self QStylePainter*
/// @param rectangles libqt_list /* of QRectF* */
void q_stylepainter_draw_rects2(void* self, libqt_list rectangles);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// @param self QStylePainter*
/// @param rects QRect*
/// @param rectCount int
void q_stylepainter_draw_rects3(void* self, void* rects, int rectCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRects)
///
/// @param self QStylePainter*
/// @param rectangles libqt_list /* of QRect* */
void q_stylepainter_draw_rects4(void* self, libqt_list rectangles);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// @param self QStylePainter*
/// @param r QRectF*
void q_stylepainter_draw_ellipse(void* self, void* r);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// @param self QStylePainter*
/// @param r QRect*
void q_stylepainter_draw_ellipse2(void* self, void* r);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_stylepainter_draw_ellipse3(void* self, int x, int y, int w, int h);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// @param self QStylePainter*
/// @param center QPointF*
/// @param rx double
/// @param ry double
void q_stylepainter_draw_ellipse4(void* self, void* center, double rx, double ry);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawEllipse)
///
/// @param self QStylePainter*
/// @param center QPoint*
/// @param rx int
/// @param ry int
void q_stylepainter_draw_ellipse5(void* self, void* center, int rx, int ry);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
///
/// @param self QStylePainter*
/// @param points QPointF*
/// @param pointCount int
void q_stylepainter_draw_polyline(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolyline)
///
/// @param self QStylePainter*
/// @param points QPoint*
/// @param pointCount int
void q_stylepainter_draw_polyline3(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// @param self QStylePainter*
/// @param points QPointF*
/// @param pointCount int
void q_stylepainter_draw_polygon(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// @param self QStylePainter*
/// @param points QPoint*
/// @param pointCount int
void q_stylepainter_draw_polygon3(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
///
/// @param self QStylePainter*
/// @param points QPointF*
/// @param pointCount int
void q_stylepainter_draw_convex_polygon(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawConvexPolygon)
///
/// @param self QStylePainter*
/// @param points QPoint*
/// @param pointCount int
void q_stylepainter_draw_convex_polygon3(void* self, void* points, int pointCount);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
///
/// @param self QStylePainter*
/// @param rect QRectF*
/// @param a int
/// @param alen int
void q_stylepainter_draw_arc(void* self, void* rect, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
///
/// @param self QStylePainter*
/// @param param1 QRect*
/// @param a int
/// @param alen int
void q_stylepainter_draw_arc2(void* self, void* param1, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawArc)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param a int
/// @param alen int
void q_stylepainter_draw_arc3(void* self, int x, int y, int w, int h, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
///
/// @param self QStylePainter*
/// @param rect QRectF*
/// @param a int
/// @param alen int
void q_stylepainter_draw_pie(void* self, void* rect, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param a int
/// @param alen int
void q_stylepainter_draw_pie2(void* self, int x, int y, int w, int h, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPie)
///
/// @param self QStylePainter*
/// @param param1 QRect*
/// @param a int
/// @param alen int
void q_stylepainter_draw_pie3(void* self, void* param1, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
///
/// @param self QStylePainter*
/// @param rect QRectF*
/// @param a int
/// @param alen int
void q_stylepainter_draw_chord(void* self, void* rect, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param a int
/// @param alen int
void q_stylepainter_draw_chord2(void* self, int x, int y, int w, int h, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawChord)
///
/// @param self QStylePainter*
/// @param param1 QRect*
/// @param a int
/// @param alen int
void q_stylepainter_draw_chord3(void* self, void* param1, int a, int alen);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// @param self QStylePainter*
/// @param rect QRectF*
/// @param xRadius double
/// @param yRadius double
void q_stylepainter_draw_rounded_rect(void* self, void* rect, double xRadius, double yRadius);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param xRadius double
/// @param yRadius double
void q_stylepainter_draw_rounded_rect2(void* self, int x, int y, int w, int h, double xRadius, double yRadius);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// @param self QStylePainter*
/// @param rect QRect*
/// @param xRadius double
/// @param yRadius double
void q_stylepainter_draw_rounded_rect3(void* self, void* rect, double xRadius, double yRadius);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// @param self QStylePainter*
/// @param rect QRectF*
/// @param pm QPixmap*
void q_stylepainter_draw_tiled_pixmap(void* self, void* rect, void* pm);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param param5 QPixmap*
void q_stylepainter_draw_tiled_pixmap2(void* self, int x, int y, int w, int h, void* param5);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// @param self QStylePainter*
/// @param param1 QRect*
/// @param param2 QPixmap*
void q_stylepainter_draw_tiled_pixmap3(void* self, void* param1, void* param2);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
///
/// @param self QStylePainter*
/// @param p QPointF*
/// @param picture QPicture*
void q_stylepainter_draw_picture(void* self, void* p, void* picture);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param picture QPicture*
void q_stylepainter_draw_picture2(void* self, int x, int y, void* picture);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPicture)
///
/// @param self QStylePainter*
/// @param p QPoint*
/// @param picture QPicture*
void q_stylepainter_draw_picture3(void* self, void* p, void* picture);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QStylePainter*
/// @param targetRect QRectF*
/// @param pixmap QPixmap*
/// @param sourceRect QRectF*
void q_stylepainter_draw_pixmap(void* self, void* targetRect, void* pixmap, void* sourceRect);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QStylePainter*
/// @param targetRect QRect*
/// @param pixmap QPixmap*
/// @param sourceRect QRect*
void q_stylepainter_draw_pixmap2(void* self, void* targetRect, void* pixmap, void* sourceRect);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param pm QPixmap*
/// @param sx int
/// @param sy int
/// @param sw int
/// @param sh int
void q_stylepainter_draw_pixmap3(void* self, int x, int y, int w, int h, void* pm, int sx, int sy, int sw, int sh);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param pm QPixmap*
/// @param sx int
/// @param sy int
/// @param sw int
/// @param sh int
void q_stylepainter_draw_pixmap4(void* self, int x, int y, void* pm, int sx, int sy, int sw, int sh);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QStylePainter*
/// @param p QPointF*
/// @param pm QPixmap*
/// @param sr QRectF*
void q_stylepainter_draw_pixmap5(void* self, void* p, void* pm, void* sr);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QStylePainter*
/// @param p QPoint*
/// @param pm QPixmap*
/// @param sr QRect*
void q_stylepainter_draw_pixmap6(void* self, void* p, void* pm, void* sr);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QStylePainter*
/// @param p QPointF*
/// @param pm QPixmap*
void q_stylepainter_draw_pixmap7(void* self, void* p, void* pm);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QStylePainter*
/// @param p QPoint*
/// @param pm QPixmap*
void q_stylepainter_draw_pixmap8(void* self, void* p, void* pm);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param pm QPixmap*
void q_stylepainter_draw_pixmap9(void* self, int x, int y, void* pm);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QStylePainter*
/// @param r QRect*
/// @param pm QPixmap*
void q_stylepainter_draw_pixmap10(void* self, void* r, void* pm);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmap)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param pm QPixmap*
void q_stylepainter_draw_pixmap11(void* self, int x, int y, int w, int h, void* pm);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
///
/// @param self QStylePainter*
/// @param fragments QPainter__PixmapFragment*
/// @param fragmentCount int
/// @param pixmap QPixmap*
void q_stylepainter_draw_pixmap_fragments(void* self, void* fragments, int fragmentCount, void* pixmap);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param targetRect QRectF*
/// @param image QImage*
/// @param sourceRect QRectF*
void q_stylepainter_draw_image(void* self, void* targetRect, void* image, void* sourceRect);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param targetRect QRect*
/// @param image QImage*
/// @param sourceRect QRect*
void q_stylepainter_draw_image2(void* self, void* targetRect, void* image, void* sourceRect);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param p QPointF*
/// @param image QImage*
/// @param sr QRectF*
void q_stylepainter_draw_image3(void* self, void* p, void* image, void* sr);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param p QPoint*
/// @param image QImage*
/// @param sr QRect*
void q_stylepainter_draw_image4(void* self, void* p, void* image, void* sr);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param r QRectF*
/// @param image QImage*
void q_stylepainter_draw_image5(void* self, void* r, void* image);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param r QRect*
/// @param image QImage*
void q_stylepainter_draw_image6(void* self, void* r, void* image);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param p QPointF*
/// @param image QImage*
void q_stylepainter_draw_image7(void* self, void* p, void* image);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param p QPoint*
/// @param image QImage*
void q_stylepainter_draw_image8(void* self, void* p, void* image);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param image QImage*
void q_stylepainter_draw_image9(void* self, int x, int y, void* image);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setLayoutDirection)
///
/// @param self QStylePainter*
/// @param direction enum Qt__LayoutDirection
void q_stylepainter_set_layout_direction(void* self, int32_t direction);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#layoutDirection)
///
/// @param self QStylePainter*
///
/// @return enum Qt__LayoutDirection
int32_t q_stylepainter_layout_direction(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawGlyphRun)
///
/// @param self QStylePainter*
/// @param position QPointF*
/// @param glyphRun QGlyphRun*
void q_stylepainter_draw_glyph_run(void* self, void* position, void* glyphRun);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
///
/// @param self QStylePainter*
/// @param topLeftPosition QPointF*
/// @param staticText QStaticText*
void q_stylepainter_draw_static_text(void* self, void* topLeftPosition, void* staticText);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
///
/// @param self QStylePainter*
/// @param topLeftPosition QPoint*
/// @param staticText QStaticText*
void q_stylepainter_draw_static_text2(void* self, void* topLeftPosition, void* staticText);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawStaticText)
///
/// @param self QStylePainter*
/// @param left int
/// @param top int
/// @param staticText QStaticText*
void q_stylepainter_draw_static_text3(void* self, int left, int top, void* staticText);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QStylePainter*
/// @param p QPointF*
/// @param s const char*
void q_stylepainter_draw_text(void* self, void* p, const char* s);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QStylePainter*
/// @param p QPoint*
/// @param s const char*
void q_stylepainter_draw_text2(void* self, void* p, const char* s);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param s const char*
void q_stylepainter_draw_text3(void* self, int x, int y, const char* s);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QStylePainter*
/// @param p QPointF*
/// @param str const char*
/// @param tf int
/// @param justificationPadding int
void q_stylepainter_draw_text4(void* self, void* p, const char* str, int tf, int justificationPadding);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QStylePainter*
/// @param r QRectF*
/// @param flags int
/// @param text const char*
void q_stylepainter_draw_text5(void* self, void* r, int flags, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QStylePainter*
/// @param r QRect*
/// @param flags int
/// @param text const char*
void q_stylepainter_draw_text6(void* self, void* r, int flags, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param flags int
/// @param text const char*
void q_stylepainter_draw_text7(void* self, int x, int y, int w, int h, int flags, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QStylePainter*
/// @param r QRectF*
/// @param text const char*
void q_stylepainter_draw_text8(void* self, void* r, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// @param self QStylePainter*
/// @param rect QRectF*
/// @param flags int
/// @param text const char*
QRectF* q_stylepainter_bounding_rect(void* self, void* rect, int flags, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// @param self QStylePainter*
/// @param rect QRect*
/// @param flags int
/// @param text const char*
QRect* q_stylepainter_bounding_rect2(void* self, void* rect, int flags, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param flags int
/// @param text const char*
QRect* q_stylepainter_bounding_rect3(void* self, int x, int y, int w, int h, int flags, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// @param self QStylePainter*
/// @param rect QRectF*
/// @param text const char*
QRectF* q_stylepainter_bounding_rect4(void* self, void* rect, const char* text);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
///
/// @param self QStylePainter*
/// @param p QPointF*
/// @param ti QTextItem*
void q_stylepainter_draw_text_item(void* self, void* p, void* ti);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param ti QTextItem*
void q_stylepainter_draw_text_item2(void* self, int x, int y, void* ti);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTextItem)
///
/// @param self QStylePainter*
/// @param p QPoint*
/// @param ti QTextItem*
void q_stylepainter_draw_text_item3(void* self, void* p, void* ti);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param param1 QRectF*
/// @param param2 QBrush*
void q_stylepainter_fill_rect(void* self, void* param1, void* param2);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param param5 QBrush*
void q_stylepainter_fill_rect2(void* self, int x, int y, int w, int h, void* param5);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param param1 QRect*
/// @param param2 QBrush*
void q_stylepainter_fill_rect3(void* self, void* param1, void* param2);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param param1 QRectF*
/// @param color QColor*
void q_stylepainter_fill_rect4(void* self, void* param1, void* color);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param color QColor*
void q_stylepainter_fill_rect5(void* self, int x, int y, int w, int h, void* color);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param param1 QRect*
/// @param color QColor*
void q_stylepainter_fill_rect6(void* self, void* param1, void* color);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param c enum Qt__GlobalColor
void q_stylepainter_fill_rect7(void* self, int x, int y, int w, int h, int32_t c);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param r QRect*
/// @param c enum Qt__GlobalColor
void q_stylepainter_fill_rect8(void* self, void* r, int32_t c);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param r QRectF*
/// @param c enum Qt__GlobalColor
void q_stylepainter_fill_rect9(void* self, void* r, int32_t c);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param style enum Qt__BrushStyle
void q_stylepainter_fill_rect10(void* self, int x, int y, int w, int h, int32_t style);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param r QRect*
/// @param style enum Qt__BrushStyle
void q_stylepainter_fill_rect11(void* self, void* r, int32_t style);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param r QRectF*
/// @param style enum Qt__BrushStyle
void q_stylepainter_fill_rect12(void* self, void* r, int32_t style);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param preset enum QGradient__Preset
void q_stylepainter_fill_rect13(void* self, int x, int y, int w, int h, int32_t preset);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param r QRect*
/// @param preset enum QGradient__Preset
void q_stylepainter_fill_rect14(void* self, void* r, int32_t preset);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#fillRect)
///
/// @param self QStylePainter*
/// @param r QRectF*
/// @param preset enum QGradient__Preset
void q_stylepainter_fill_rect15(void* self, void* r, int32_t preset);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
///
/// @param self QStylePainter*
/// @param param1 QRectF*
void q_stylepainter_erase_rect(void* self, void* param1);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_stylepainter_erase_rect2(void* self, int x, int y, int w, int h);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#eraseRect)
///
/// @param self QStylePainter*
/// @param param1 QRect*
void q_stylepainter_erase_rect3(void* self, void* param1);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
///
/// @param self QStylePainter*
/// @param hint enum QPainter__RenderHint
void q_stylepainter_set_render_hint(void* self, int32_t hint);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
///
/// @param self QStylePainter*
/// @param hints flag of enum QPainter__RenderHint
void q_stylepainter_set_render_hints(void* self, int32_t hints);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#renderHints)
///
/// @param self QStylePainter*
///
/// @return flag of enum QPainter__RenderHint
int32_t q_stylepainter_render_hints(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#testRenderHint)
///
/// @param self QStylePainter*
/// @param hint enum QPainter__RenderHint
bool q_stylepainter_test_render_hint(void* self, int32_t hint);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#paintEngine)
///
/// @param self QStylePainter*
QPaintEngine* q_stylepainter_paint_engine(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#beginNativePainting)
///
/// @param self QStylePainter*
void q_stylepainter_begin_native_painting(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#endNativePainting)
///
/// @param self QStylePainter*
void q_stylepainter_end_native_painting(void* self);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// @param self QStylePainter*
/// @param param1 QRectF*
/// @param op enum Qt__ClipOperation
void q_stylepainter_set_clip_rect22(void* self, void* param1, int32_t op);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// @param self QStylePainter*
/// @param param1 QRect*
/// @param op enum Qt__ClipOperation
void q_stylepainter_set_clip_rect23(void* self, void* param1, int32_t op);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRect)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param op enum Qt__ClipOperation
void q_stylepainter_set_clip_rect5(void* self, int x, int y, int w, int h, int32_t op);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipRegion)
///
/// @param self QStylePainter*
/// @param param1 QRegion*
/// @param op enum Qt__ClipOperation
void q_stylepainter_set_clip_region2(void* self, void* param1, int32_t op);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setClipPath)
///
/// @param self QStylePainter*
/// @param path QPainterPath*
/// @param op enum Qt__ClipOperation
void q_stylepainter_set_clip_path2(void* self, void* path, int32_t op);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setTransform)
///
/// @param self QStylePainter*
/// @param transform QTransform*
/// @param combine bool
void q_stylepainter_set_transform2(void* self, void* transform, bool combine);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setWorldTransform)
///
/// @param self QStylePainter*
/// @param matrix QTransform*
/// @param combine bool
void q_stylepainter_set_world_transform2(void* self, void* matrix, bool combine);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// @param self QStylePainter*
/// @param points QPointF*
/// @param pointCount int
/// @param fillRule enum Qt__FillRule
void q_stylepainter_draw_polygon32(void* self, void* points, int pointCount, int32_t fillRule);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPolygon)
///
/// @param self QStylePainter*
/// @param points QPoint*
/// @param pointCount int
/// @param fillRule enum Qt__FillRule
void q_stylepainter_draw_polygon33(void* self, void* points, int pointCount, int32_t fillRule);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// @param self QStylePainter*
/// @param rect QRectF*
/// @param xRadius double
/// @param yRadius double
/// @param mode enum Qt__SizeMode
void q_stylepainter_draw_rounded_rect4(void* self, void* rect, double xRadius, double yRadius, int32_t mode);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param xRadius double
/// @param yRadius double
/// @param mode enum Qt__SizeMode
void q_stylepainter_draw_rounded_rect7(void* self, int x, int y, int w, int h, double xRadius, double yRadius, int32_t mode);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawRoundedRect)
///
/// @param self QStylePainter*
/// @param rect QRect*
/// @param xRadius double
/// @param yRadius double
/// @param mode enum Qt__SizeMode
void q_stylepainter_draw_rounded_rect42(void* self, void* rect, double xRadius, double yRadius, int32_t mode);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// @param self QStylePainter*
/// @param rect QRectF*
/// @param pm QPixmap*
/// @param offset QPointF*
void q_stylepainter_draw_tiled_pixmap32(void* self, void* rect, void* pm, void* offset);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param param5 QPixmap*
/// @param sx int
void q_stylepainter_draw_tiled_pixmap6(void* self, int x, int y, int w, int h, void* param5, int sx);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param param5 QPixmap*
/// @param sx int
/// @param sy int
void q_stylepainter_draw_tiled_pixmap7(void* self, int x, int y, int w, int h, void* param5, int sx, int sy);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawTiledPixmap)
///
/// @param self QStylePainter*
/// @param param1 QRect*
/// @param param2 QPixmap*
/// @param param3 QPoint*
void q_stylepainter_draw_tiled_pixmap33(void* self, void* param1, void* param2, void* param3);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawPixmapFragments)
///
/// @param self QStylePainter*
/// @param fragments QPainter__PixmapFragment*
/// @param fragmentCount int
/// @param pixmap QPixmap*
/// @param hints flag of enum QPainter__PixmapFragmentHint
void q_stylepainter_draw_pixmap_fragments4(void* self, void* fragments, int fragmentCount, void* pixmap, int32_t hints);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param targetRect QRectF*
/// @param image QImage*
/// @param sourceRect QRectF*
/// @param flags flag of enum Qt__ImageConversionFlag
void q_stylepainter_draw_image42(void* self, void* targetRect, void* image, void* sourceRect, int32_t flags);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param targetRect QRect*
/// @param image QImage*
/// @param sourceRect QRect*
/// @param flags flag of enum Qt__ImageConversionFlag
void q_stylepainter_draw_image43(void* self, void* targetRect, void* image, void* sourceRect, int32_t flags);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param p QPointF*
/// @param image QImage*
/// @param sr QRectF*
/// @param flags flag of enum Qt__ImageConversionFlag
void q_stylepainter_draw_image44(void* self, void* p, void* image, void* sr, int32_t flags);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param p QPoint*
/// @param image QImage*
/// @param sr QRect*
/// @param flags flag of enum Qt__ImageConversionFlag
void q_stylepainter_draw_image45(void* self, void* p, void* image, void* sr, int32_t flags);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param image QImage*
/// @param sx int
void q_stylepainter_draw_image46(void* self, int x, int y, void* image, int sx);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param image QImage*
/// @param sx int
/// @param sy int
void q_stylepainter_draw_image52(void* self, int x, int y, void* image, int sx, int sy);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param image QImage*
/// @param sx int
/// @param sy int
/// @param sw int
void q_stylepainter_draw_image62(void* self, int x, int y, void* image, int sx, int sy, int sw);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param image QImage*
/// @param sx int
/// @param sy int
/// @param sw int
/// @param sh int
void q_stylepainter_draw_image72(void* self, int x, int y, void* image, int sx, int sy, int sw, int sh);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawImage)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param image QImage*
/// @param sx int
/// @param sy int
/// @param sw int
/// @param sh int
/// @param flags flag of enum Qt__ImageConversionFlag
void q_stylepainter_draw_image82(void* self, int x, int y, void* image, int sx, int sy, int sw, int sh, int32_t flags);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QStylePainter*
/// @param r QRectF*
/// @param flags int
/// @param text const char*
/// @param br QRectF*
void q_stylepainter_draw_text42(void* self, void* r, int flags, const char* text, void* br);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QStylePainter*
/// @param r QRect*
/// @param flags int
/// @param text const char*
/// @param br QRect*
void q_stylepainter_draw_text43(void* self, void* r, int flags, const char* text, void* br);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QStylePainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param flags int
/// @param text const char*
/// @param br QRect*
void q_stylepainter_draw_text72(void* self, int x, int y, int w, int h, int flags, const char* text, void* br);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#drawText)
///
/// @param self QStylePainter*
/// @param r QRectF*
/// @param text const char*
/// @param o QTextOption*
void q_stylepainter_draw_text32(void* self, void* r, const char* text, void* o);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#boundingRect)
///
/// @param self QStylePainter*
/// @param rect QRectF*
/// @param text const char*
/// @param o QTextOption*
QRectF* q_stylepainter_bounding_rect32(void* self, void* rect, const char* text, void* o);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHint)
///
/// @param self QStylePainter*
/// @param hint enum QPainter__RenderHint
/// @param on bool
void q_stylepainter_set_render_hint2(void* self, int32_t hint, bool on);

/// Inherited from QPainter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpainter.html#setRenderHints)
///
/// @param self QStylePainter*
/// @param hints flag of enum QPainter__RenderHint
/// @param on bool
void q_stylepainter_set_render_hints2(void* self, int32_t hints, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylepainter.html#dtor.QStylePainter)
///
/// Delete this object from C++ memory.
///
/// @param self QStylePainter*
void q_stylepainter_delete(void* self);

#endif

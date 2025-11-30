#pragma once
#ifndef SRC_QT6C_LIBQPAINTENGINE_H
#define SRC_QT6C_LIBQPAINTENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtextitem.html

/// q_textitem_new constructs a new QTextItem object.
///
/// @param other QTextItem*
QTextItem* q_textitem_new(void* other);

/// q_textitem_new2 constructs a new QTextItem object and invalidates the source QTextItem object.
///
/// @param other QTextItem*
QTextItem* q_textitem_new2(void* other);

/// q_textitem_new3 constructs a new QTextItem object.
///
QTextItem* q_textitem_new3();

/// q_textitem_new4 constructs a new QTextItem object.
///
/// @param param1 QTextItem*
QTextItem* q_textitem_new4(void* param1);

/// q_textitem_copy_assign shallow copies `other` into `self`.
///
/// @param self QTextItem*
/// @param other QTextItem*
void q_textitem_copy_assign(void* self, void* other);

/// q_textitem_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QTextItem*
/// @param other QTextItem*
void q_textitem_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#descent)
///
/// @param self QTextItem*
double q_textitem_descent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#ascent)
///
/// @param self QTextItem*
double q_textitem_ascent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#width)
///
/// @param self QTextItem*
double q_textitem_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#renderFlags)
///
/// @param self QTextItem*
///
/// @return flag of enum QTextItem__RenderFlag
int64_t q_textitem_render_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextItem*
const char* q_textitem_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#font)
///
/// @param self QTextItem*
QFont* q_textitem_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextitem.html#dtor.QTextItem)
///
/// Delete this object from C++ memory.
///
/// @param self QTextItem*
void q_textitem_delete(void* self);

/// https://doc.qt.io/qt-6/qpaintengine.html

/// q_paintengine_new constructs a new QPaintEngine object.
///
QPaintEngine* q_paintengine_new();

/// q_paintengine_new2 constructs a new QPaintEngine object.
///
/// @param features flag of enum QPaintEngine__PaintEngineFeature
QPaintEngine* q_paintengine_new2(int64_t features);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#isActive)
///
/// @param self QPaintEngine*
bool q_paintengine_is_active(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setActive)
///
/// @param self QPaintEngine*
/// @param newState bool
void q_paintengine_set_active(void* self, bool newState);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#begin)
///
/// @param self QPaintEngine*
/// @param pdev QPaintDevice*
bool q_paintengine_begin(void* self, void* pdev);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#begin)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback bool func(QPaintEngine* self, QPaintDevice* pdev)
void q_paintengine_on_begin(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#begin)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param pdev QPaintDevice*
bool q_paintengine_qbase_begin(void* self, void* pdev);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#end)
///
/// @param self QPaintEngine*
bool q_paintengine_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#end)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback bool func()
void q_paintengine_on_end(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#end)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
bool q_paintengine_qbase_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#updateState)
///
/// @param self QPaintEngine*
/// @param state QPaintEngineState*
void q_paintengine_update_state(void* self, void* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#updateState)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QPaintEngineState* state)
void q_paintengine_on_update_state(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#updateState)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param state QPaintEngineState*
void q_paintengine_qbase_update_state(void* self, void* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
///
/// @param self QPaintEngine*
/// @param rects QRect*
/// @param rectCount int
void q_paintengine_draw_rects(void* self, void* rects, int rectCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QRect* rects, int rectCount)
void q_paintengine_on_draw_rects(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param rects QRect*
/// @param rectCount int
void q_paintengine_qbase_draw_rects(void* self, void* rects, int rectCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
///
/// @param self QPaintEngine*
/// @param rects QRectF*
/// @param rectCount int
void q_paintengine_draw_rects2(void* self, void* rects, int rectCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QRectF* rects, int rectCount)
void q_paintengine_on_draw_rects2(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param rects QRectF*
/// @param rectCount int
void q_paintengine_qbase_draw_rects2(void* self, void* rects, int rectCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
///
/// @param self QPaintEngine*
/// @param lines QLine*
/// @param lineCount int
void q_paintengine_draw_lines(void* self, void* lines, int lineCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QLine* lines, int lineCount)
void q_paintengine_on_draw_lines(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param lines QLine*
/// @param lineCount int
void q_paintengine_qbase_draw_lines(void* self, void* lines, int lineCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
///
/// @param self QPaintEngine*
/// @param lines QLineF*
/// @param lineCount int
void q_paintengine_draw_lines2(void* self, void* lines, int lineCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QLineF* lines, int lineCount)
void q_paintengine_on_draw_lines2(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param lines QLineF*
/// @param lineCount int
void q_paintengine_qbase_draw_lines2(void* self, void* lines, int lineCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
///
/// @param self QPaintEngine*
/// @param r QRectF*
void q_paintengine_draw_ellipse(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QRectF* r)
void q_paintengine_on_draw_ellipse(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param r QRectF*
void q_paintengine_qbase_draw_ellipse(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
///
/// @param self QPaintEngine*
/// @param r QRect*
void q_paintengine_draw_ellipse2(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QRect* r)
void q_paintengine_on_draw_ellipse2(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param r QRect*
void q_paintengine_qbase_draw_ellipse2(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPath)
///
/// @param self QPaintEngine*
/// @param path QPainterPath*
void q_paintengine_draw_path(void* self, void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPath)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QPainterPath* path)
void q_paintengine_on_draw_path(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPath)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param path QPainterPath*
void q_paintengine_qbase_draw_path(void* self, void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
///
/// @param self QPaintEngine*
/// @param points QPointF*
/// @param pointCount int
void q_paintengine_draw_points(void* self, void* points, int pointCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QPointF* points, int pointCount)
void q_paintengine_on_draw_points(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param points QPointF*
/// @param pointCount int
void q_paintengine_qbase_draw_points(void* self, void* points, int pointCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
///
/// @param self QPaintEngine*
/// @param points QPoint*
/// @param pointCount int
void q_paintengine_draw_points2(void* self, void* points, int pointCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QPoint* points, int pointCount)
void q_paintengine_on_draw_points2(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param points QPoint*
/// @param pointCount int
void q_paintengine_qbase_draw_points2(void* self, void* points, int pointCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
///
/// @param self QPaintEngine*
/// @param points QPointF*
/// @param pointCount int
/// @param mode enum QPaintEngine__PolygonDrawMode
void q_paintengine_draw_polygon(void* self, void* points, int pointCount, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QPointF* points, int pointCount, enum QPaintEngine__PolygonDrawMode mode)
void q_paintengine_on_draw_polygon(void* self, void (*callback)(void*, void*, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param points QPointF*
/// @param pointCount int
/// @param mode enum QPaintEngine__PolygonDrawMode
void q_paintengine_qbase_draw_polygon(void* self, void* points, int pointCount, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
///
/// @param self QPaintEngine*
/// @param points QPoint*
/// @param pointCount int
/// @param mode enum QPaintEngine__PolygonDrawMode
void q_paintengine_draw_polygon2(void* self, void* points, int pointCount, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QPoint* points, int pointCount, enum QPaintEngine__PolygonDrawMode mode)
void q_paintengine_on_draw_polygon2(void* self, void (*callback)(void*, void*, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param points QPoint*
/// @param pointCount int
/// @param mode enum QPaintEngine__PolygonDrawMode
void q_paintengine_qbase_draw_polygon2(void* self, void* points, int pointCount, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPixmap)
///
/// @param self QPaintEngine*
/// @param r QRectF*
/// @param pm QPixmap*
/// @param sr QRectF*
void q_paintengine_draw_pixmap(void* self, void* r, void* pm, void* sr);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QRectF* r, QPixmap* pm, QRectF* sr)
void q_paintengine_on_draw_pixmap(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawPixmap)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param r QRectF*
/// @param pm QPixmap*
/// @param sr QRectF*
void q_paintengine_qbase_draw_pixmap(void* self, void* r, void* pm, void* sr);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawTextItem)
///
/// @param self QPaintEngine*
/// @param p QPointF*
/// @param textItem QTextItem*
void q_paintengine_draw_text_item(void* self, void* p, void* textItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawTextItem)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QPointF* p, QTextItem* textItem)
void q_paintengine_on_draw_text_item(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawTextItem)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param p QPointF*
/// @param textItem QTextItem*
void q_paintengine_qbase_draw_text_item(void* self, void* p, void* textItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawTiledPixmap)
///
/// @param self QPaintEngine*
/// @param r QRectF*
/// @param pixmap QPixmap*
/// @param s QPointF*
void q_paintengine_draw_tiled_pixmap(void* self, void* r, void* pixmap, void* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawTiledPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QRectF* r, QPixmap* pixmap, QPointF* s)
void q_paintengine_on_draw_tiled_pixmap(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawTiledPixmap)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param r QRectF*
/// @param pixmap QPixmap*
/// @param s QPointF*
void q_paintengine_qbase_draw_tiled_pixmap(void* self, void* r, void* pixmap, void* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawImage)
///
/// @param self QPaintEngine*
/// @param r QRectF*
/// @param pm QImage*
/// @param sr QRectF*
/// @param flags flag of enum Qt__ImageConversionFlag
void q_paintengine_draw_image(void* self, void* r, void* pm, void* sr, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawImage)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback void func(QPaintEngine* self, QRectF* r, QImage* pm, QRectF* sr, flag of enum Qt__ImageConversionFlag flags)
void q_paintengine_on_draw_image(void* self, void (*callback)(void*, void*, void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#drawImage)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param r QRectF*
/// @param pm QImage*
/// @param sr QRectF*
/// @param flags flag of enum Qt__ImageConversionFlag
void q_paintengine_qbase_draw_image(void* self, void* r, void* pm, void* sr, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setPaintDevice)
///
/// @param self QPaintEngine*
/// @param device QPaintDevice*
void q_paintengine_set_paint_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#paintDevice)
///
/// @param self QPaintEngine*
QPaintDevice* q_paintengine_paint_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setSystemClip)
///
/// @param self QPaintEngine*
/// @param baseClip QRegion*
void q_paintengine_set_system_clip(void* self, void* baseClip);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#systemClip)
///
/// @param self QPaintEngine*
QRegion* q_paintengine_system_clip(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setSystemRect)
///
/// @param self QPaintEngine*
/// @param rect QRect*
void q_paintengine_set_system_rect(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#systemRect)
///
/// @param self QPaintEngine*
QRect* q_paintengine_system_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
///
/// @param self QPaintEngine*
QPoint* q_paintengine_coordinate_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback QPoint* func()
void q_paintengine_on_coordinate_offset(void* self, QPoint* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
QPoint* q_paintengine_qbase_coordinate_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#type)
///
/// @param self QPaintEngine*
///
/// @return enum QPaintEngine__Type
int32_t q_paintengine_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback int32_t func()
void q_paintengine_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#type)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
///
/// @return enum QPaintEngine__Type
int32_t q_paintengine_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#fix_neg_rect)
///
/// @param self QPaintEngine*
/// @param x int*
/// @param y int*
/// @param w int*
/// @param h int*
void q_paintengine_fix_neg_rect(void* self, int* x, int* y, int* w, int* h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#testDirty)
///
/// @param self QPaintEngine*
/// @param df flag of enum QPaintEngine__DirtyFlag
bool q_paintengine_test_dirty(void* self, int32_t df);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#setDirty)
///
/// @param self QPaintEngine*
/// @param df flag of enum QPaintEngine__DirtyFlag
void q_paintengine_set_dirty(void* self, int32_t df);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#clearDirty)
///
/// @param self QPaintEngine*
/// @param df flag of enum QPaintEngine__DirtyFlag
void q_paintengine_clear_dirty(void* self, int32_t df);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#hasFeature)
///
/// @param self QPaintEngine*
/// @param feature flag of enum QPaintEngine__PaintEngineFeature
bool q_paintengine_has_feature(void* self, int64_t feature);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#painter)
///
/// @param self QPaintEngine*
QPainter* q_paintengine_painter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#syncState)
///
/// @param self QPaintEngine*
void q_paintengine_sync_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#isExtended)
///
/// @param self QPaintEngine*
bool q_paintengine_is_extended(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#createPixmap)
///
/// @param self QPaintEngine*
/// @param size QSize*
QPixmap* q_paintengine_create_pixmap(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#createPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback QPixmap* func(QPaintEngine* self, QSize* size)
void q_paintengine_on_create_pixmap(void* self, QPixmap* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#createPixmap)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param size QSize*
QPixmap* q_paintengine_qbase_create_pixmap(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#createPixmapFromImage)
///
/// @param self QPaintEngine*
/// @param image QImage*
/// @param flags flag of enum Qt__ImageConversionFlag
QPixmap* q_paintengine_create_pixmap_from_image(void* self, void* image, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#createPixmapFromImage)
///
/// Allows for overriding the related default method
///
/// @param self QPaintEngine*
/// @param callback QPixmap* func(QPaintEngine* self, QImage* image, flag of enum Qt__ImageConversionFlag flags)
void q_paintengine_on_create_pixmap_from_image(void* self, QPixmap* (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#createPixmapFromImage)
///
/// Base class method implementation
///
/// @param self QPaintEngine*
/// @param image QImage*
/// @param flags flag of enum Qt__ImageConversionFlag
QPixmap* q_paintengine_qbase_create_pixmap_from_image(void* self, void* image, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintengine.html#dtor.QPaintEngine)
///
/// Delete this object from C++ memory.
///
/// @param self QPaintEngine*
void q_paintengine_delete(void* self);

/// https://doc.qt.io/qt-6/qpaintenginestate.html

/// q_paintenginestate_new constructs a new QPaintEngineState object.
///
/// @param other QPaintEngineState*
QPaintEngineState* q_paintenginestate_new(void* other);

/// q_paintenginestate_new2 constructs a new QPaintEngineState object and invalidates the source QPaintEngineState object.
///
/// @param other QPaintEngineState*
QPaintEngineState* q_paintenginestate_new2(void* other);

/// q_paintenginestate_copy_assign shallow copies `other` into `self`.
///
/// @param self QPaintEngineState*
/// @param other QPaintEngineState*
void q_paintenginestate_copy_assign(void* self, void* other);

/// q_paintenginestate_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QPaintEngineState*
/// @param other QPaintEngineState*
void q_paintenginestate_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#state)
///
/// @param self QPaintEngineState*
///
/// @return flag of enum QPaintEngine__DirtyFlag
int32_t q_paintenginestate_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#pen)
///
/// @param self QPaintEngineState*
QPen* q_paintenginestate_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#brush)
///
/// @param self QPaintEngineState*
QBrush* q_paintenginestate_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#brushOrigin)
///
/// @param self QPaintEngineState*
QPointF* q_paintenginestate_brush_origin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#backgroundBrush)
///
/// @param self QPaintEngineState*
QBrush* q_paintenginestate_background_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#backgroundMode)
///
/// @param self QPaintEngineState*
///
/// @return enum Qt__BGMode
int32_t q_paintenginestate_background_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#font)
///
/// @param self QPaintEngineState*
QFont* q_paintenginestate_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#transform)
///
/// @param self QPaintEngineState*
QTransform* q_paintenginestate_transform(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#clipOperation)
///
/// @param self QPaintEngineState*
///
/// @return enum Qt__ClipOperation
int32_t q_paintenginestate_clip_operation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#clipRegion)
///
/// @param self QPaintEngineState*
QRegion* q_paintenginestate_clip_region(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#clipPath)
///
/// @param self QPaintEngineState*
QPainterPath* q_paintenginestate_clip_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#isClipEnabled)
///
/// @param self QPaintEngineState*
bool q_paintenginestate_is_clip_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#renderHints)
///
/// @param self QPaintEngineState*
///
/// @return flag of enum QPainter__RenderHint
int32_t q_paintenginestate_render_hints(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#compositionMode)
///
/// @param self QPaintEngineState*
///
/// @return enum QPainter__CompositionMode
int32_t q_paintenginestate_composition_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#opacity)
///
/// @param self QPaintEngineState*
double q_paintenginestate_opacity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#painter)
///
/// @param self QPaintEngineState*
QPainter* q_paintenginestate_painter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#brushNeedsResolving)
///
/// @param self QPaintEngineState*
bool q_paintenginestate_brush_needs_resolving(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#penNeedsResolving)
///
/// @param self QPaintEngineState*
bool q_paintenginestate_pen_needs_resolving(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintenginestate.html#dtor.QPaintEngineState)
///
/// Delete this object from C++ memory.
///
/// @param self QPaintEngineState*
void q_paintenginestate_delete(void* self);

/// https://doc.qt.io/qt-6/qpaintengine.html#types

typedef enum {
    QTEXTITEM_RENDERFLAG_RIGHTTOLEFT = 1,
    QTEXTITEM_RENDERFLAG_OVERLINE = 16,
    QTEXTITEM_RENDERFLAG_UNDERLINE = 32,
    QTEXTITEM_RENDERFLAG_STRIKEOUT = 64,
    QTEXTITEM_RENDERFLAG_DUMMY = 4294967295
} QTextItem__RenderFlag;

typedef enum {
    QPAINTENGINE_PAINTENGINEFEATURE_PRIMITIVETRANSFORM = 1,
    QPAINTENGINE_PAINTENGINEFEATURE_PATTERNTRANSFORM = 2,
    QPAINTENGINE_PAINTENGINEFEATURE_PIXMAPTRANSFORM = 4,
    QPAINTENGINE_PAINTENGINEFEATURE_PATTERNBRUSH = 8,
    QPAINTENGINE_PAINTENGINEFEATURE_LINEARGRADIENTFILL = 16,
    QPAINTENGINE_PAINTENGINEFEATURE_RADIALGRADIENTFILL = 32,
    QPAINTENGINE_PAINTENGINEFEATURE_CONICALGRADIENTFILL = 64,
    QPAINTENGINE_PAINTENGINEFEATURE_ALPHABLEND = 128,
    QPAINTENGINE_PAINTENGINEFEATURE_PORTERDUFF = 256,
    QPAINTENGINE_PAINTENGINEFEATURE_PAINTERPATHS = 512,
    QPAINTENGINE_PAINTENGINEFEATURE_ANTIALIASING = 1024,
    QPAINTENGINE_PAINTENGINEFEATURE_BRUSHSTROKE = 2048,
    QPAINTENGINE_PAINTENGINEFEATURE_CONSTANTOPACITY = 4096,
    QPAINTENGINE_PAINTENGINEFEATURE_MASKEDBRUSH = 8192,
    QPAINTENGINE_PAINTENGINEFEATURE_PERSPECTIVETRANSFORM = 16384,
    QPAINTENGINE_PAINTENGINEFEATURE_BLENDMODES = 32768,
    QPAINTENGINE_PAINTENGINEFEATURE_OBJECTBOUNDINGMODEGRADIENTS = 65536,
    QPAINTENGINE_PAINTENGINEFEATURE_RASTEROPMODES = 131072,
    QPAINTENGINE_PAINTENGINEFEATURE_PAINTOUTSIDEPAINTEVENT = 536870912,
    QPAINTENGINE_PAINTENGINEFEATURE_ALLFEATURES = 4294967295
} QPaintEngine__PaintEngineFeature;

typedef enum {
    QPAINTENGINE_DIRTYFLAG_DIRTYPEN = 1,
    QPAINTENGINE_DIRTYFLAG_DIRTYBRUSH = 2,
    QPAINTENGINE_DIRTYFLAG_DIRTYBRUSHORIGIN = 4,
    QPAINTENGINE_DIRTYFLAG_DIRTYFONT = 8,
    QPAINTENGINE_DIRTYFLAG_DIRTYBACKGROUND = 16,
    QPAINTENGINE_DIRTYFLAG_DIRTYBACKGROUNDMODE = 32,
    QPAINTENGINE_DIRTYFLAG_DIRTYTRANSFORM = 64,
    QPAINTENGINE_DIRTYFLAG_DIRTYCLIPREGION = 128,
    QPAINTENGINE_DIRTYFLAG_DIRTYCLIPPATH = 256,
    QPAINTENGINE_DIRTYFLAG_DIRTYHINTS = 512,
    QPAINTENGINE_DIRTYFLAG_DIRTYCOMPOSITIONMODE = 1024,
    QPAINTENGINE_DIRTYFLAG_DIRTYCLIPENABLED = 2048,
    QPAINTENGINE_DIRTYFLAG_DIRTYOPACITY = 4096,
    QPAINTENGINE_DIRTYFLAG_ALLDIRTY = 65535
} QPaintEngine__DirtyFlag;

typedef enum {
    QPAINTENGINE_POLYGONDRAWMODE_ODDEVENMODE = 0,
    QPAINTENGINE_POLYGONDRAWMODE_WINDINGMODE = 1,
    QPAINTENGINE_POLYGONDRAWMODE_CONVEXMODE = 2,
    QPAINTENGINE_POLYGONDRAWMODE_POLYLINEMODE = 3
} QPaintEngine__PolygonDrawMode;

typedef enum {
    QPAINTENGINE_TYPE_X11 = 0,
    QPAINTENGINE_TYPE_WINDOWS = 1,
    QPAINTENGINE_TYPE_QUICKDRAW = 2,
    QPAINTENGINE_TYPE_COREGRAPHICS = 3,
    QPAINTENGINE_TYPE_MACPRINTER = 4,
    QPAINTENGINE_TYPE_QWINDOWSYSTEM = 5,
    QPAINTENGINE_TYPE_OPENGL = 6,
    QPAINTENGINE_TYPE_PICTURE = 7,
    QPAINTENGINE_TYPE_SVG = 8,
    QPAINTENGINE_TYPE_RASTER = 9,
    QPAINTENGINE_TYPE_DIRECT3D = 10,
    QPAINTENGINE_TYPE_PDF = 11,
    QPAINTENGINE_TYPE_OPENVG = 12,
    QPAINTENGINE_TYPE_OPENGL2 = 13,
    QPAINTENGINE_TYPE_PAINTBUFFER = 14,
    QPAINTENGINE_TYPE_BLITTER = 15,
    QPAINTENGINE_TYPE_DIRECT2D = 16,
    QPAINTENGINE_TYPE_USER = 50,
    QPAINTENGINE_TYPE_MAXUSER = 100
} QPaintEngine__Type;

#endif

#pragma once
#ifndef SRCQT6C_LIBQPAINTENGINE_H
#define SRCQT6C_LIBQPAINTENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbrush.h"
#include "libqfont.h"
#include "libqimage.h"
#include "libqline.h"
#include "libqpaintdevice.h"
#include "libqpainter.h"
#include "libqpainterpath.h"
#include "libqpen.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqsize.h"
#include <string.h>
#include "libqtransform.h"

/// https://doc.qt.io/qt-6/qtextitem.html

/// q_textitem_new constructs a new QTextItem object.
///
/// ``` QTextItem* other ```
QTextItem* q_textitem_new(void* other);

/// q_textitem_new2 constructs a new QTextItem object and invalidates the source QTextItem object.
///
/// ``` QTextItem* other ```
QTextItem* q_textitem_new2(void* other);

/// q_textitem_copy_assign shallow copies `other` into `self`.
///
/// ``` QTextItem* self, QTextItem* other ```
void q_textitem_copy_assign(void* self, void* other);

/// q_textitem_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTextItem* self, QTextItem* other ```
void q_textitem_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#descent)
///
/// ``` QTextItem* self ```
double q_textitem_descent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#ascent)
///
/// ``` QTextItem* self ```
double q_textitem_ascent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#width)
///
/// ``` QTextItem* self ```
double q_textitem_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#renderFlags)
///
/// ``` QTextItem* self ```
int64_t q_textitem_render_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#text)
///
/// ``` QTextItem* self ```
const char* q_textitem_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#font)
///
/// ``` QTextItem* self ```
QFont* q_textitem_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#dtor.QTextItem)
///
/// Delete this object from C++ memory.
///
/// ``` QTextItem* self ```
void q_textitem_delete(void* self);

/// https://doc.qt.io/qt-6/qpaintengine.html

/// q_paintengine_new constructs a new QPaintEngine object.
///
///
QPaintEngine* q_paintengine_new();

/// q_paintengine_new2 constructs a new QPaintEngine object.
///
/// ``` int features ```
QPaintEngine* q_paintengine_new2(int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#isActive)
///
/// ``` QPaintEngine* self ```
bool q_paintengine_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setActive)
///
/// ``` QPaintEngine* self, bool newState ```
void q_paintengine_set_active(void* self, bool newState);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#begin)
///
/// ``` QPaintEngine* self, QPaintDevice* pdev ```
bool q_paintengine_begin(void* self, void* pdev);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#begin)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, bool (*slot)(QPaintEngine*, QPaintDevice*) ```
void q_paintengine_on_begin(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#begin)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QPaintDevice* pdev ```
bool q_paintengine_qbase_begin(void* self, void* pdev);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#end)
///
/// ``` QPaintEngine* self ```
bool q_paintengine_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#end)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, bool (*slot)() ```
void q_paintengine_on_end(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#end)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self ```
bool q_paintengine_qbase_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#updateState)
///
/// ``` QPaintEngine* self, QPaintEngineState* state ```
void q_paintengine_update_state(void* self, void* state);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#updateState)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QPaintEngineState*) ```
void q_paintengine_on_update_state(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#updateState)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QPaintEngineState* state ```
void q_paintengine_qbase_update_state(void* self, void* state);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
///
/// ``` QPaintEngine* self, QRect* rects, int rectCount ```
void q_paintengine_draw_rects(void* self, void* rects, int rectCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QRect*, int) ```
void q_paintengine_on_draw_rects(void* self, void (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QRect* rects, int rectCount ```
void q_paintengine_qbase_draw_rects(void* self, void* rects, int rectCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
///
/// ``` QPaintEngine* self, QRectF* rects, int rectCount ```
void q_paintengine_draw_rects2(void* self, void* rects, int rectCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QRectF*, int) ```
void q_paintengine_on_draw_rects2(void* self, void (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QRectF* rects, int rectCount ```
void q_paintengine_qbase_draw_rects2(void* self, void* rects, int rectCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
///
/// ``` QPaintEngine* self, QLine* lines, int lineCount ```
void q_paintengine_draw_lines(void* self, void* lines, int lineCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QLine*, int) ```
void q_paintengine_on_draw_lines(void* self, void (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QLine* lines, int lineCount ```
void q_paintengine_qbase_draw_lines(void* self, void* lines, int lineCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
///
/// ``` QPaintEngine* self, QLineF* lines, int lineCount ```
void q_paintengine_draw_lines2(void* self, void* lines, int lineCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QLineF*, int) ```
void q_paintengine_on_draw_lines2(void* self, void (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QLineF* lines, int lineCount ```
void q_paintengine_qbase_draw_lines2(void* self, void* lines, int lineCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
///
/// ``` QPaintEngine* self, QRectF* r ```
void q_paintengine_draw_ellipse(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QRectF*) ```
void q_paintengine_on_draw_ellipse(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QRectF* r ```
void q_paintengine_qbase_draw_ellipse(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
///
/// ``` QPaintEngine* self, QRect* r ```
void q_paintengine_draw_ellipse_with_q_rect(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QRect*) ```
void q_paintengine_on_draw_ellipse_with_q_rect(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QRect* r ```
void q_paintengine_qbase_draw_ellipse_with_q_rect(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPath)
///
/// ``` QPaintEngine* self, QPainterPath* path ```
void q_paintengine_draw_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPath)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QPainterPath*) ```
void q_paintengine_on_draw_path(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPath)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QPainterPath* path ```
void q_paintengine_qbase_draw_path(void* self, void* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
///
/// ``` QPaintEngine* self, QPointF* points, int pointCount ```
void q_paintengine_draw_points(void* self, void* points, int pointCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QPointF*, int) ```
void q_paintengine_on_draw_points(void* self, void (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QPointF* points, int pointCount ```
void q_paintengine_qbase_draw_points(void* self, void* points, int pointCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
///
/// ``` QPaintEngine* self, QPoint* points, int pointCount ```
void q_paintengine_draw_points2(void* self, void* points, int pointCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QPoint*, int) ```
void q_paintengine_on_draw_points2(void* self, void (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QPoint* points, int pointCount ```
void q_paintengine_qbase_draw_points2(void* self, void* points, int pointCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
///
/// ``` QPaintEngine* self, QPointF* points, int pointCount, enum QPaintEngine__PolygonDrawMode mode ```
void q_paintengine_draw_polygon(void* self, void* points, int pointCount, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QPointF*, int, enum QPaintEngine__PolygonDrawMode) ```
void q_paintengine_on_draw_polygon(void* self, void (*slot)(void*, void*, int, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QPointF* points, int pointCount, enum QPaintEngine__PolygonDrawMode mode ```
void q_paintengine_qbase_draw_polygon(void* self, void* points, int pointCount, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
///
/// ``` QPaintEngine* self, QPoint* points, int pointCount, enum QPaintEngine__PolygonDrawMode mode ```
void q_paintengine_draw_polygon2(void* self, void* points, int pointCount, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QPoint*, int, enum QPaintEngine__PolygonDrawMode) ```
void q_paintengine_on_draw_polygon2(void* self, void (*slot)(void*, void*, int, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QPoint* points, int pointCount, enum QPaintEngine__PolygonDrawMode mode ```
void q_paintengine_qbase_draw_polygon2(void* self, void* points, int pointCount, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPixmap)
///
/// ``` QPaintEngine* self, QRectF* r, QPixmap* pm, QRectF* sr ```
void q_paintengine_draw_pixmap(void* self, void* r, void* pm, void* sr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPixmap)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QRectF*, QPixmap*, QRectF*) ```
void q_paintengine_on_draw_pixmap(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPixmap)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QRectF* r, QPixmap* pm, QRectF* sr ```
void q_paintengine_qbase_draw_pixmap(void* self, void* r, void* pm, void* sr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawTextItem)
///
/// ``` QPaintEngine* self, QPointF* p, QTextItem* textItem ```
void q_paintengine_draw_text_item(void* self, void* p, void* textItem);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawTextItem)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QPointF*, QTextItem*) ```
void q_paintengine_on_draw_text_item(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawTextItem)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QPointF* p, QTextItem* textItem ```
void q_paintengine_qbase_draw_text_item(void* self, void* p, void* textItem);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawTiledPixmap)
///
/// ``` QPaintEngine* self, QRectF* r, QPixmap* pixmap, QPointF* s ```
void q_paintengine_draw_tiled_pixmap(void* self, void* r, void* pixmap, void* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawTiledPixmap)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QRectF*, QPixmap*, QPointF*) ```
void q_paintengine_on_draw_tiled_pixmap(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawTiledPixmap)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QRectF* r, QPixmap* pixmap, QPointF* s ```
void q_paintengine_qbase_draw_tiled_pixmap(void* self, void* r, void* pixmap, void* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawImage)
///
/// ``` QPaintEngine* self, QRectF* r, QImage* pm, QRectF* sr, int flags ```
void q_paintengine_draw_image(void* self, void* r, void* pm, void* sr, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawImage)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QRectF*, QImage*, QRectF*, int) ```
void q_paintengine_on_draw_image(void* self, void (*slot)(void*, void*, void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawImage)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QRectF* r, QImage* pm, QRectF* sr, int flags ```
void q_paintengine_qbase_draw_image(void* self, void* r, void* pm, void* sr, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setPaintDevice)
///
/// ``` QPaintEngine* self, QPaintDevice* device ```
void q_paintengine_set_paint_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#paintDevice)
///
/// ``` QPaintEngine* self ```
QPaintDevice* q_paintengine_paint_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setSystemClip)
///
/// ``` QPaintEngine* self, QRegion* baseClip ```
void q_paintengine_set_system_clip(void* self, void* baseClip);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#systemClip)
///
/// ``` QPaintEngine* self ```
QRegion* q_paintengine_system_clip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setSystemRect)
///
/// ``` QPaintEngine* self, QRect* rect ```
void q_paintengine_set_system_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#systemRect)
///
/// ``` QPaintEngine* self ```
QRect* q_paintengine_system_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
///
/// ``` QPaintEngine* self ```
QPoint* q_paintengine_coordinate_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, QPoint* (*slot)() ```
void q_paintengine_on_coordinate_offset(void* self, QPoint* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self ```
QPoint* q_paintengine_qbase_coordinate_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#type)
///
/// ``` QPaintEngine* self ```
int64_t q_paintengine_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, int64_t (*slot)() ```
void q_paintengine_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#type)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self ```
int64_t q_paintengine_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#fix_neg_rect)
///
/// ``` QPaintEngine* self, int* x, int* y, int* w, int* h ```
void q_paintengine_fix_neg_rect(void* self, int* x, int* y, int* w, int* h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#testDirty)
///
/// ``` QPaintEngine* self, int df ```
bool q_paintengine_test_dirty(void* self, int64_t df);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setDirty)
///
/// ``` QPaintEngine* self, int df ```
void q_paintengine_set_dirty(void* self, int64_t df);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#clearDirty)
///
/// ``` QPaintEngine* self, int df ```
void q_paintengine_clear_dirty(void* self, int64_t df);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#hasFeature)
///
/// ``` QPaintEngine* self, int feature ```
bool q_paintengine_has_feature(void* self, int64_t feature);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#painter)
///
/// ``` QPaintEngine* self ```
QPainter* q_paintengine_painter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#syncState)
///
/// ``` QPaintEngine* self ```
void q_paintengine_sync_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#isExtended)
///
/// ``` QPaintEngine* self ```
bool q_paintengine_is_extended(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#createPixmap)
///
/// ``` QPaintEngine* self, QSize* size ```
QPixmap* q_paintengine_create_pixmap(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#createPixmap)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, QPixmap* (*slot)(QPaintEngine*, QSize*) ```
void q_paintengine_on_create_pixmap(void* self, QPixmap* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#createPixmap)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QSize* size ```
QPixmap* q_paintengine_qbase_create_pixmap(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#createPixmapFromImage)
///
/// ``` QPaintEngine* self, QImage* image, int flags ```
QPixmap* q_paintengine_create_pixmap_from_image(void* self, void* image, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#createPixmapFromImage)
///
/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, QPixmap* (*slot)(QPaintEngine*, QImage*, int) ```
void q_paintengine_on_create_pixmap_from_image(void* self, QPixmap* (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#createPixmapFromImage)
///
/// Base class method implementation
///
/// ``` QPaintEngine* self, QImage* image, int flags ```
QPixmap* q_paintengine_qbase_create_pixmap_from_image(void* self, void* image, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#dtor.QPaintEngine)
///
/// Delete this object from C++ memory.
///
/// ``` QPaintEngine* self ```
void q_paintengine_delete(void* self);

/// https://doc.qt.io/qt-6/qpaintenginestate.html

/// q_paintenginestate_new constructs a new QPaintEngineState object.
///
/// ``` QPaintEngineState* other ```
QPaintEngineState* q_paintenginestate_new(void* other);

/// q_paintenginestate_new2 constructs a new QPaintEngineState object and invalidates the source QPaintEngineState object.
///
/// ``` QPaintEngineState* other ```
QPaintEngineState* q_paintenginestate_new2(void* other);

/// q_paintenginestate_copy_assign shallow copies `other` into `self`.
///
/// ``` QPaintEngineState* self, QPaintEngineState* other ```
void q_paintenginestate_copy_assign(void* self, void* other);

/// q_paintenginestate_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPaintEngineState* self, QPaintEngineState* other ```
void q_paintenginestate_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#state)
///
/// ``` QPaintEngineState* self ```
int64_t q_paintenginestate_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#pen)
///
/// ``` QPaintEngineState* self ```
QPen* q_paintenginestate_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#brush)
///
/// ``` QPaintEngineState* self ```
QBrush* q_paintenginestate_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#brushOrigin)
///
/// ``` QPaintEngineState* self ```
QPointF* q_paintenginestate_brush_origin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#backgroundBrush)
///
/// ``` QPaintEngineState* self ```
QBrush* q_paintenginestate_background_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#backgroundMode)
///
/// ``` QPaintEngineState* self ```
int64_t q_paintenginestate_background_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#font)
///
/// ``` QPaintEngineState* self ```
QFont* q_paintenginestate_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#transform)
///
/// ``` QPaintEngineState* self ```
QTransform* q_paintenginestate_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#clipOperation)
///
/// ``` QPaintEngineState* self ```
int64_t q_paintenginestate_clip_operation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#clipRegion)
///
/// ``` QPaintEngineState* self ```
QRegion* q_paintenginestate_clip_region(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#clipPath)
///
/// ``` QPaintEngineState* self ```
QPainterPath* q_paintenginestate_clip_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#isClipEnabled)
///
/// ``` QPaintEngineState* self ```
bool q_paintenginestate_is_clip_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#renderHints)
///
/// ``` QPaintEngineState* self ```
int64_t q_paintenginestate_render_hints(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#compositionMode)
///
/// ``` QPaintEngineState* self ```
int64_t q_paintenginestate_composition_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#opacity)
///
/// ``` QPaintEngineState* self ```
double q_paintenginestate_opacity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#painter)
///
/// ``` QPaintEngineState* self ```
QPainter* q_paintenginestate_painter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#brushNeedsResolving)
///
/// ``` QPaintEngineState* self ```
bool q_paintenginestate_brush_needs_resolving(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#penNeedsResolving)
///
/// ``` QPaintEngineState* self ```
bool q_paintenginestate_pen_needs_resolving(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#dtor.QPaintEngineState)
///
/// Delete this object from C++ memory.
///
/// ``` QPaintEngineState* self ```
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

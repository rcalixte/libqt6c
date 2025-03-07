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

QTextItem* q_textitem_new(void* other);
QTextItem* q_textitem_new2(void* other);
void q_textitem_copy_assign(void* self, void* other);
void q_textitem_move_assign(void* self, void* other);
double q_textitem_descent(void* self);
double q_textitem_ascent(void* self);
double q_textitem_width(void* self);
int64_t q_textitem_render_flags(void* self);
const char* q_textitem_text(void* self);
QFont* q_textitem_font(void* self);
void q_textitem_delete(void* self);

QPaintEngine* q_paintengine_new();
QPaintEngine* q_paintengine_new2(int64_t features);
bool q_paintengine_is_active(void* self);
void q_paintengine_set_active(void* self, bool newState);
bool q_paintengine_begin(void* self, void* pdev);
void q_paintengine_on_begin(void* self, bool (*slot)(void*, void*));
bool q_paintengine_qbase_begin(void* self, void* pdev);
bool q_paintengine_end(void* self);
void q_paintengine_on_end(void* self, bool (*slot)());
bool q_paintengine_qbase_end(void* self);
void q_paintengine_update_state(void* self, void* state);
void q_paintengine_on_update_state(void* self, void (*slot)(void*, void*));
void q_paintengine_qbase_update_state(void* self, void* state);
void q_paintengine_draw_rects(void* self, void* rects, int rectCount);
void q_paintengine_on_draw_rects(void* self, void (*slot)(void*, void*, int));
void q_paintengine_qbase_draw_rects(void* self, void* rects, int rectCount);
void q_paintengine_draw_rects2(void* self, void* rects, int rectCount);
void q_paintengine_on_draw_rects2(void* self, void (*slot)(void*, void*, int));
void q_paintengine_qbase_draw_rects2(void* self, void* rects, int rectCount);
void q_paintengine_draw_lines(void* self, void* lines, int lineCount);
void q_paintengine_on_draw_lines(void* self, void (*slot)(void*, void*, int));
void q_paintengine_qbase_draw_lines(void* self, void* lines, int lineCount);
void q_paintengine_draw_lines2(void* self, void* lines, int lineCount);
void q_paintengine_on_draw_lines2(void* self, void (*slot)(void*, void*, int));
void q_paintengine_qbase_draw_lines2(void* self, void* lines, int lineCount);
void q_paintengine_draw_ellipse(void* self, void* r);
void q_paintengine_on_draw_ellipse(void* self, void (*slot)(void*, void*));
void q_paintengine_qbase_draw_ellipse(void* self, void* r);
void q_paintengine_draw_ellipse_with_q_rect(void* self, void* r);
void q_paintengine_on_draw_ellipse_with_q_rect(void* self, void (*slot)(void*, void*));
void q_paintengine_qbase_draw_ellipse_with_q_rect(void* self, void* r);
void q_paintengine_draw_path(void* self, void* path);
void q_paintengine_on_draw_path(void* self, void (*slot)(void*, void*));
void q_paintengine_qbase_draw_path(void* self, void* path);
void q_paintengine_draw_points(void* self, void* points, int pointCount);
void q_paintengine_on_draw_points(void* self, void (*slot)(void*, void*, int));
void q_paintengine_qbase_draw_points(void* self, void* points, int pointCount);
void q_paintengine_draw_points2(void* self, void* points, int pointCount);
void q_paintengine_on_draw_points2(void* self, void (*slot)(void*, void*, int));
void q_paintengine_qbase_draw_points2(void* self, void* points, int pointCount);
void q_paintengine_draw_polygon(void* self, void* points, int pointCount, int64_t mode);
void q_paintengine_on_draw_polygon(void* self, void (*slot)(void*, void*, int, int64_t));
void q_paintengine_qbase_draw_polygon(void* self, void* points, int pointCount, int64_t mode);
void q_paintengine_draw_polygon2(void* self, void* points, int pointCount, int64_t mode);
void q_paintengine_on_draw_polygon2(void* self, void (*slot)(void*, void*, int, int64_t));
void q_paintengine_qbase_draw_polygon2(void* self, void* points, int pointCount, int64_t mode);
void q_paintengine_draw_pixmap(void* self, void* r, void* pm, void* sr);
void q_paintengine_on_draw_pixmap(void* self, void (*slot)(void*, void*, void*, void*));
void q_paintengine_qbase_draw_pixmap(void* self, void* r, void* pm, void* sr);
void q_paintengine_draw_text_item(void* self, void* p, void* textItem);
void q_paintengine_on_draw_text_item(void* self, void (*slot)(void*, void*, void*));
void q_paintengine_qbase_draw_text_item(void* self, void* p, void* textItem);
void q_paintengine_draw_tiled_pixmap(void* self, void* r, void* pixmap, void* s);
void q_paintengine_on_draw_tiled_pixmap(void* self, void (*slot)(void*, void*, void*, void*));
void q_paintengine_qbase_draw_tiled_pixmap(void* self, void* r, void* pixmap, void* s);
void q_paintengine_draw_image(void* self, void* r, void* pm, void* sr, int64_t flags);
void q_paintengine_on_draw_image(void* self, void (*slot)(void*, void*, void*, void*, int64_t));
void q_paintengine_qbase_draw_image(void* self, void* r, void* pm, void* sr, int64_t flags);
void q_paintengine_set_paint_device(void* self, void* device);
QPaintDevice* q_paintengine_paint_device(void* self);
void q_paintengine_set_system_clip(void* self, void* baseClip);
QRegion* q_paintengine_system_clip(void* self);
void q_paintengine_set_system_rect(void* self, void* rect);
QRect* q_paintengine_system_rect(void* self);
QPoint* q_paintengine_coordinate_offset(void* self);
void q_paintengine_on_coordinate_offset(void* self, QPoint* (*slot)());
QPoint* q_paintengine_qbase_coordinate_offset(void* self);
int64_t q_paintengine_type(void* self);
void q_paintengine_on_type(void* self, int64_t (*slot)());
int64_t q_paintengine_qbase_type(void* self);
void q_paintengine_fix_neg_rect(void* self, int* x, int* y, int* w, int* h);
bool q_paintengine_test_dirty(void* self, int64_t df);
void q_paintengine_set_dirty(void* self, int64_t df);
void q_paintengine_clear_dirty(void* self, int64_t df);
bool q_paintengine_has_feature(void* self, int64_t feature);
QPainter* q_paintengine_painter(void* self);
void q_paintengine_sync_state(void* self);
bool q_paintengine_is_extended(void* self);
QPixmap* q_paintengine_create_pixmap(void* self, void* size);
void q_paintengine_on_create_pixmap(void* self, QPixmap* (*slot)(void*, void*));
QPixmap* q_paintengine_qbase_create_pixmap(void* self, void* size);
QPixmap* q_paintengine_create_pixmap_from_image(void* self, void* image, int64_t flags);
void q_paintengine_on_create_pixmap_from_image(void* self, QPixmap* (*slot)(void*, void*, int64_t));
QPixmap* q_paintengine_qbase_create_pixmap_from_image(void* self, void* image, int64_t flags);
void q_paintengine_delete(void* self);

QPaintEngineState* q_paintenginestate_new(void* other);
QPaintEngineState* q_paintenginestate_new2(void* other);
void q_paintenginestate_copy_assign(void* self, void* other);
void q_paintenginestate_move_assign(void* self, void* other);
int64_t q_paintenginestate_state(void* self);
QPen* q_paintenginestate_pen(void* self);
QBrush* q_paintenginestate_brush(void* self);
QPointF* q_paintenginestate_brush_origin(void* self);
QBrush* q_paintenginestate_background_brush(void* self);
int64_t q_paintenginestate_background_mode(void* self);
QFont* q_paintenginestate_font(void* self);
QTransform* q_paintenginestate_transform(void* self);
int64_t q_paintenginestate_clip_operation(void* self);
QRegion* q_paintenginestate_clip_region(void* self);
QPainterPath* q_paintenginestate_clip_path(void* self);
bool q_paintenginestate_is_clip_enabled(void* self);
int64_t q_paintenginestate_render_hints(void* self);
int64_t q_paintenginestate_composition_mode(void* self);
double q_paintenginestate_opacity(void* self);
QPainter* q_paintenginestate_painter(void* self);
bool q_paintenginestate_brush_needs_resolving(void* self);
bool q_paintenginestate_pen_needs_resolving(void* self);
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

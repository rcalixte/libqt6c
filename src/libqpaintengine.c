#include "libqbrush.hpp"
#include "libqfont.hpp"
#include "libqimage.hpp"
#include "libqline.hpp"
#include "libqpaintdevice.hpp"
#include "libqpainter.hpp"
#include "libqpainterpath.hpp"
#include "libqpen.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqsize.hpp"
#include "libqtransform.hpp"
#include "libqpaintengine.hpp"
#include "libqpaintengine.h"

QTextItem* q_textitem_new(void* other) {
    return QTextItem_new((QTextItem*)other);
}

QTextItem* q_textitem_new2(void* other) {
    return QTextItem_new2((QTextItem*)other);
}

QTextItem* q_textitem_new3() {
    return QTextItem_new3();
}

QTextItem* q_textitem_new4(void* param1) {
    return QTextItem_new4((QTextItem*)param1);
}

void q_textitem_copy_assign(void* self, void* other) {
    QTextItem_CopyAssign((QTextItem*)self, (QTextItem*)other);
}

void q_textitem_move_assign(void* self, void* other) {
    QTextItem_MoveAssign((QTextItem*)self, (QTextItem*)other);
}

double q_textitem_descent(void* self) {
    return QTextItem_Descent((QTextItem*)self);
}

double q_textitem_ascent(void* self) {
    return QTextItem_Ascent((QTextItem*)self);
}

double q_textitem_width(void* self) {
    return QTextItem_Width((QTextItem*)self);
}

int32_t q_textitem_render_flags(void* self) {
    return QTextItem_RenderFlags((QTextItem*)self);
}

const char* q_textitem_text(void* self) {
    libqt_string _str = QTextItem_Text((QTextItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QFont* q_textitem_font(void* self) {
    return QTextItem_Font((QTextItem*)self);
}

void q_textitem_delete(void* self) {
    QTextItem_Delete((QTextItem*)(self));
}

QPaintEngine* q_paintengine_new() {
    return QPaintEngine_new();
}

QPaintEngine* q_paintengine_new2(int32_t features) {
    return QPaintEngine_new2(features);
}

bool q_paintengine_is_active(void* self) {
    return QPaintEngine_IsActive((QPaintEngine*)self);
}

void q_paintengine_set_active(void* self, bool newState) {
    QPaintEngine_SetActive((QPaintEngine*)self, newState);
}

bool q_paintengine_begin(void* self, void* pdev) {
    return QPaintEngine_Begin((QPaintEngine*)self, (QPaintDevice*)pdev);
}

void q_paintengine_on_begin(void* self, bool (*callback)(void*, void*)) {
    QPaintEngine_OnBegin((QPaintEngine*)self, (intptr_t)callback);
}

bool q_paintengine_qbase_begin(void* self, void* pdev) {
    return QPaintEngine_QBaseBegin((QPaintEngine*)self, (QPaintDevice*)pdev);
}

bool q_paintengine_end(void* self) {
    return QPaintEngine_End((QPaintEngine*)self);
}

void q_paintengine_on_end(void* self, bool (*callback)()) {
    QPaintEngine_OnEnd((QPaintEngine*)self, (intptr_t)callback);
}

bool q_paintengine_qbase_end(void* self) {
    return QPaintEngine_QBaseEnd((QPaintEngine*)self);
}

void q_paintengine_update_state(void* self, void* state) {
    QPaintEngine_UpdateState((QPaintEngine*)self, (QPaintEngineState*)state);
}

void q_paintengine_on_update_state(void* self, void (*callback)(void*, void*)) {
    QPaintEngine_OnUpdateState((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_update_state(void* self, void* state) {
    QPaintEngine_QBaseUpdateState((QPaintEngine*)self, (QPaintEngineState*)state);
}

void q_paintengine_draw_rects(void* self, void* rects, int rectCount) {
    QPaintEngine_DrawRects((QPaintEngine*)self, (QRect*)rects, rectCount);
}

void q_paintengine_on_draw_rects(void* self, void (*callback)(void*, void*, int)) {
    QPaintEngine_OnDrawRects((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_rects(void* self, void* rects, int rectCount) {
    QPaintEngine_QBaseDrawRects((QPaintEngine*)self, (QRect*)rects, rectCount);
}

void q_paintengine_draw_rects2(void* self, void* rects, int rectCount) {
    QPaintEngine_DrawRects2((QPaintEngine*)self, (QRectF*)rects, rectCount);
}

void q_paintengine_on_draw_rects2(void* self, void (*callback)(void*, void*, int)) {
    QPaintEngine_OnDrawRects2((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_rects2(void* self, void* rects, int rectCount) {
    QPaintEngine_QBaseDrawRects2((QPaintEngine*)self, (QRectF*)rects, rectCount);
}

void q_paintengine_draw_lines(void* self, void* lines, int lineCount) {
    QPaintEngine_DrawLines((QPaintEngine*)self, (QLine*)lines, lineCount);
}

void q_paintengine_on_draw_lines(void* self, void (*callback)(void*, void*, int)) {
    QPaintEngine_OnDrawLines((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_lines(void* self, void* lines, int lineCount) {
    QPaintEngine_QBaseDrawLines((QPaintEngine*)self, (QLine*)lines, lineCount);
}

void q_paintengine_draw_lines2(void* self, void* lines, int lineCount) {
    QPaintEngine_DrawLines2((QPaintEngine*)self, (QLineF*)lines, lineCount);
}

void q_paintengine_on_draw_lines2(void* self, void (*callback)(void*, void*, int)) {
    QPaintEngine_OnDrawLines2((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_lines2(void* self, void* lines, int lineCount) {
    QPaintEngine_QBaseDrawLines2((QPaintEngine*)self, (QLineF*)lines, lineCount);
}

void q_paintengine_draw_ellipse(void* self, void* r) {
    QPaintEngine_DrawEllipse((QPaintEngine*)self, (QRectF*)r);
}

void q_paintengine_on_draw_ellipse(void* self, void (*callback)(void*, void*)) {
    QPaintEngine_OnDrawEllipse((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_ellipse(void* self, void* r) {
    QPaintEngine_QBaseDrawEllipse((QPaintEngine*)self, (QRectF*)r);
}

void q_paintengine_draw_ellipse2(void* self, void* r) {
    QPaintEngine_DrawEllipse2((QPaintEngine*)self, (QRect*)r);
}

void q_paintengine_on_draw_ellipse2(void* self, void (*callback)(void*, void*)) {
    QPaintEngine_OnDrawEllipse2((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_ellipse2(void* self, void* r) {
    QPaintEngine_QBaseDrawEllipse2((QPaintEngine*)self, (QRect*)r);
}

void q_paintengine_draw_path(void* self, void* path) {
    QPaintEngine_DrawPath((QPaintEngine*)self, (QPainterPath*)path);
}

void q_paintengine_on_draw_path(void* self, void (*callback)(void*, void*)) {
    QPaintEngine_OnDrawPath((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_path(void* self, void* path) {
    QPaintEngine_QBaseDrawPath((QPaintEngine*)self, (QPainterPath*)path);
}

void q_paintengine_draw_points(void* self, void* points, int pointCount) {
    QPaintEngine_DrawPoints((QPaintEngine*)self, (QPointF*)points, pointCount);
}

void q_paintengine_on_draw_points(void* self, void (*callback)(void*, void*, int)) {
    QPaintEngine_OnDrawPoints((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_points(void* self, void* points, int pointCount) {
    QPaintEngine_QBaseDrawPoints((QPaintEngine*)self, (QPointF*)points, pointCount);
}

void q_paintengine_draw_points2(void* self, void* points, int pointCount) {
    QPaintEngine_DrawPoints2((QPaintEngine*)self, (QPoint*)points, pointCount);
}

void q_paintengine_on_draw_points2(void* self, void (*callback)(void*, void*, int)) {
    QPaintEngine_OnDrawPoints2((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_points2(void* self, void* points, int pointCount) {
    QPaintEngine_QBaseDrawPoints2((QPaintEngine*)self, (QPoint*)points, pointCount);
}

void q_paintengine_draw_polygon(void* self, void* points, int pointCount, int32_t mode) {
    QPaintEngine_DrawPolygon((QPaintEngine*)self, (QPointF*)points, pointCount, mode);
}

void q_paintengine_on_draw_polygon(void* self, void (*callback)(void*, void*, int, int32_t)) {
    QPaintEngine_OnDrawPolygon((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_polygon(void* self, void* points, int pointCount, int32_t mode) {
    QPaintEngine_QBaseDrawPolygon((QPaintEngine*)self, (QPointF*)points, pointCount, mode);
}

void q_paintengine_draw_polygon2(void* self, void* points, int pointCount, int32_t mode) {
    QPaintEngine_DrawPolygon2((QPaintEngine*)self, (QPoint*)points, pointCount, mode);
}

void q_paintengine_on_draw_polygon2(void* self, void (*callback)(void*, void*, int, int32_t)) {
    QPaintEngine_OnDrawPolygon2((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_polygon2(void* self, void* points, int pointCount, int32_t mode) {
    QPaintEngine_QBaseDrawPolygon2((QPaintEngine*)self, (QPoint*)points, pointCount, mode);
}

void q_paintengine_draw_pixmap(void* self, void* r, void* pm, void* sr) {
    QPaintEngine_DrawPixmap((QPaintEngine*)self, (QRectF*)r, (QPixmap*)pm, (QRectF*)sr);
}

void q_paintengine_on_draw_pixmap(void* self, void (*callback)(void*, void*, void*, void*)) {
    QPaintEngine_OnDrawPixmap((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_pixmap(void* self, void* r, void* pm, void* sr) {
    QPaintEngine_QBaseDrawPixmap((QPaintEngine*)self, (QRectF*)r, (QPixmap*)pm, (QRectF*)sr);
}

void q_paintengine_draw_text_item(void* self, void* p, void* textItem) {
    QPaintEngine_DrawTextItem((QPaintEngine*)self, (QPointF*)p, (QTextItem*)textItem);
}

void q_paintengine_on_draw_text_item(void* self, void (*callback)(void*, void*, void*)) {
    QPaintEngine_OnDrawTextItem((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_text_item(void* self, void* p, void* textItem) {
    QPaintEngine_QBaseDrawTextItem((QPaintEngine*)self, (QPointF*)p, (QTextItem*)textItem);
}

void q_paintengine_draw_tiled_pixmap(void* self, void* r, void* pixmap, void* s) {
    QPaintEngine_DrawTiledPixmap((QPaintEngine*)self, (QRectF*)r, (QPixmap*)pixmap, (QPointF*)s);
}

void q_paintengine_on_draw_tiled_pixmap(void* self, void (*callback)(void*, void*, void*, void*)) {
    QPaintEngine_OnDrawTiledPixmap((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_tiled_pixmap(void* self, void* r, void* pixmap, void* s) {
    QPaintEngine_QBaseDrawTiledPixmap((QPaintEngine*)self, (QRectF*)r, (QPixmap*)pixmap, (QPointF*)s);
}

void q_paintengine_draw_image(void* self, void* r, void* pm, void* sr, int32_t flags) {
    QPaintEngine_DrawImage((QPaintEngine*)self, (QRectF*)r, (QImage*)pm, (QRectF*)sr, flags);
}

void q_paintengine_on_draw_image(void* self, void (*callback)(void*, void*, void*, void*, int32_t)) {
    QPaintEngine_OnDrawImage((QPaintEngine*)self, (intptr_t)callback);
}

void q_paintengine_qbase_draw_image(void* self, void* r, void* pm, void* sr, int32_t flags) {
    QPaintEngine_QBaseDrawImage((QPaintEngine*)self, (QRectF*)r, (QImage*)pm, (QRectF*)sr, flags);
}

void q_paintengine_set_paint_device(void* self, void* device) {
    QPaintEngine_SetPaintDevice((QPaintEngine*)self, (QPaintDevice*)device);
}

QPaintDevice* q_paintengine_paint_device(void* self) {
    return QPaintEngine_PaintDevice((QPaintEngine*)self);
}

void q_paintengine_set_system_clip(void* self, void* baseClip) {
    QPaintEngine_SetSystemClip((QPaintEngine*)self, (QRegion*)baseClip);
}

QRegion* q_paintengine_system_clip(void* self) {
    return QPaintEngine_SystemClip((QPaintEngine*)self);
}

void q_paintengine_set_system_rect(void* self, void* rect) {
    QPaintEngine_SetSystemRect((QPaintEngine*)self, (QRect*)rect);
}

QRect* q_paintengine_system_rect(void* self) {
    return QPaintEngine_SystemRect((QPaintEngine*)self);
}

QPoint* q_paintengine_coordinate_offset(void* self) {
    return QPaintEngine_CoordinateOffset((QPaintEngine*)self);
}

void q_paintengine_on_coordinate_offset(void* self, QPoint* (*callback)()) {
    QPaintEngine_OnCoordinateOffset((QPaintEngine*)self, (intptr_t)callback);
}

QPoint* q_paintengine_qbase_coordinate_offset(void* self) {
    return QPaintEngine_QBaseCoordinateOffset((QPaintEngine*)self);
}

int32_t q_paintengine_type(void* self) {
    return QPaintEngine_Type((QPaintEngine*)self);
}

void q_paintengine_on_type(void* self, int32_t (*callback)()) {
    QPaintEngine_OnType((QPaintEngine*)self, (intptr_t)callback);
}

int32_t q_paintengine_qbase_type(void* self) {
    return QPaintEngine_QBaseType((QPaintEngine*)self);
}

void q_paintengine_fix_neg_rect(void* self, int* x, int* y, int* w, int* h) {
    QPaintEngine_FixNegRect((QPaintEngine*)self, x, y, w, h);
}

bool q_paintengine_test_dirty(void* self, int32_t df) {
    return QPaintEngine_TestDirty((QPaintEngine*)self, df);
}

void q_paintengine_set_dirty(void* self, int32_t df) {
    QPaintEngine_SetDirty((QPaintEngine*)self, df);
}

void q_paintengine_clear_dirty(void* self, int32_t df) {
    QPaintEngine_ClearDirty((QPaintEngine*)self, df);
}

bool q_paintengine_has_feature(void* self, int32_t feature) {
    return QPaintEngine_HasFeature((QPaintEngine*)self, feature);
}

QPainter* q_paintengine_painter(void* self) {
    return QPaintEngine_Painter((QPaintEngine*)self);
}

void q_paintengine_sync_state(void* self) {
    QPaintEngine_SyncState((QPaintEngine*)self);
}

bool q_paintengine_is_extended(void* self) {
    return QPaintEngine_IsExtended((QPaintEngine*)self);
}

QPixmap* q_paintengine_create_pixmap(void* self, void* size) {
    return QPaintEngine_CreatePixmap((QPaintEngine*)self, (QSize*)size);
}

void q_paintengine_on_create_pixmap(void* self, QPixmap* (*callback)(void*, void*)) {
    QPaintEngine_OnCreatePixmap((QPaintEngine*)self, (intptr_t)callback);
}

QPixmap* q_paintengine_qbase_create_pixmap(void* self, void* size) {
    return QPaintEngine_QBaseCreatePixmap((QPaintEngine*)self, (QSize*)size);
}

QPixmap* q_paintengine_create_pixmap_from_image(void* self, void* image, int32_t flags) {
    return QPaintEngine_CreatePixmapFromImage((QPaintEngine*)self, (QImage*)image, flags);
}

void q_paintengine_on_create_pixmap_from_image(void* self, QPixmap* (*callback)(void*, void*, int32_t)) {
    QPaintEngine_OnCreatePixmapFromImage((QPaintEngine*)self, (intptr_t)callback);
}

QPixmap* q_paintengine_qbase_create_pixmap_from_image(void* self, void* image, int32_t flags) {
    return QPaintEngine_QBaseCreatePixmapFromImage((QPaintEngine*)self, (QImage*)image, flags);
}

void q_paintengine_delete(void* self) {
    QPaintEngine_Delete((QPaintEngine*)(self));
}

QPaintEngineState* q_paintenginestate_new(void* other) {
    return QPaintEngineState_new((QPaintEngineState*)other);
}

QPaintEngineState* q_paintenginestate_new2(void* other) {
    return QPaintEngineState_new2((QPaintEngineState*)other);
}

void q_paintenginestate_copy_assign(void* self, void* other) {
    QPaintEngineState_CopyAssign((QPaintEngineState*)self, (QPaintEngineState*)other);
}

void q_paintenginestate_move_assign(void* self, void* other) {
    QPaintEngineState_MoveAssign((QPaintEngineState*)self, (QPaintEngineState*)other);
}

int32_t q_paintenginestate_state(void* self) {
    return QPaintEngineState_State((QPaintEngineState*)self);
}

QPen* q_paintenginestate_pen(void* self) {
    return QPaintEngineState_Pen((QPaintEngineState*)self);
}

QBrush* q_paintenginestate_brush(void* self) {
    return QPaintEngineState_Brush((QPaintEngineState*)self);
}

QPointF* q_paintenginestate_brush_origin(void* self) {
    return QPaintEngineState_BrushOrigin((QPaintEngineState*)self);
}

QBrush* q_paintenginestate_background_brush(void* self) {
    return QPaintEngineState_BackgroundBrush((QPaintEngineState*)self);
}

int32_t q_paintenginestate_background_mode(void* self) {
    return QPaintEngineState_BackgroundMode((QPaintEngineState*)self);
}

QFont* q_paintenginestate_font(void* self) {
    return QPaintEngineState_Font((QPaintEngineState*)self);
}

QTransform* q_paintenginestate_transform(void* self) {
    return QPaintEngineState_Transform((QPaintEngineState*)self);
}

int32_t q_paintenginestate_clip_operation(void* self) {
    return QPaintEngineState_ClipOperation((QPaintEngineState*)self);
}

QRegion* q_paintenginestate_clip_region(void* self) {
    return QPaintEngineState_ClipRegion((QPaintEngineState*)self);
}

QPainterPath* q_paintenginestate_clip_path(void* self) {
    return QPaintEngineState_ClipPath((QPaintEngineState*)self);
}

bool q_paintenginestate_is_clip_enabled(void* self) {
    return QPaintEngineState_IsClipEnabled((QPaintEngineState*)self);
}

int32_t q_paintenginestate_render_hints(void* self) {
    return QPaintEngineState_RenderHints((QPaintEngineState*)self);
}

int32_t q_paintenginestate_composition_mode(void* self) {
    return QPaintEngineState_CompositionMode((QPaintEngineState*)self);
}

double q_paintenginestate_opacity(void* self) {
    return QPaintEngineState_Opacity((QPaintEngineState*)self);
}

QPainter* q_paintenginestate_painter(void* self) {
    return QPaintEngineState_Painter((QPaintEngineState*)self);
}

bool q_paintenginestate_brush_needs_resolving(void* self) {
    return QPaintEngineState_BrushNeedsResolving((QPaintEngineState*)self);
}

bool q_paintenginestate_pen_needs_resolving(void* self) {
    return QPaintEngineState_PenNeedsResolving((QPaintEngineState*)self);
}

void q_paintenginestate_delete(void* self) {
    QPaintEngineState_Delete((QPaintEngineState*)(self));
}

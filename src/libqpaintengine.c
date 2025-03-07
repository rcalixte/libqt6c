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
#include <string.h>
#include "libqtransform.hpp"
#include "libqpaintengine.hpp"
#include "libqpaintengine.h"

/// https://doc.qt.io/qt-6/qtextitem.html

/// q_textitem_new constructs a new QTextItem object.
///
/// ``` QTextItem* other ```
QTextItem* q_textitem_new(void* other) {
    return QTextItem_new((QTextItem*)other);
}

/// q_textitem_new2 constructs a new QTextItem object and invalidates the source QTextItem object.
///
/// ``` QTextItem* other ```
QTextItem* q_textitem_new2(void* other) {
    return QTextItem_new2((QTextItem*)other);
}

/// q_textitem_copy_assign shallow copies `other` into `self`.
///
/// ``` QTextItem* self, QTextItem* other ```
void q_textitem_copy_assign(void* self, void* other) {
    QTextItem_CopyAssign((QTextItem*)self, (QTextItem*)other);
}

/// q_textitem_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTextItem* self, QTextItem* other ```
void q_textitem_move_assign(void* self, void* other) {
    QTextItem_MoveAssign((QTextItem*)self, (QTextItem*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#descent)
///
/// ``` QTextItem* self ```
double q_textitem_descent(void* self) {
    return QTextItem_Descent((QTextItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#ascent)
///
/// ``` QTextItem* self ```
double q_textitem_ascent(void* self) {
    return QTextItem_Ascent((QTextItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#width)
///
/// ``` QTextItem* self ```
double q_textitem_width(void* self) {
    return QTextItem_Width((QTextItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#renderFlags)
///
/// ``` QTextItem* self ```
int64_t q_textitem_render_flags(void* self) {
    return QTextItem_RenderFlags((QTextItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#text)
///
/// ``` QTextItem* self ```
const char* q_textitem_text(void* self) {
    libqt_string _str = QTextItem_Text((QTextItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextitem.html#font)
///
/// ``` QTextItem* self ```
QFont* q_textitem_font(void* self) {
    return QTextItem_Font((QTextItem*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QTextItem* self ```
void q_textitem_delete(void* self) {
    QTextItem_Delete((QTextItem*)(self));
}

/// https://doc.qt.io/qt-6/qpaintengine.html

/// q_paintengine_new constructs a new QPaintEngine object.
///
///
QPaintEngine* q_paintengine_new() {
    return QPaintEngine_new();
}

/// q_paintengine_new2 constructs a new QPaintEngine object.
///
/// ``` int features ```
QPaintEngine* q_paintengine_new2(int64_t features) {
    return QPaintEngine_new2(features);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#isActive)
///
/// ``` QPaintEngine* self ```
bool q_paintengine_is_active(void* self) {
    return QPaintEngine_IsActive((QPaintEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setActive)
///
/// ``` QPaintEngine* self, bool newState ```
void q_paintengine_set_active(void* self, bool newState) {
    QPaintEngine_SetActive((QPaintEngine*)self, newState);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#begin)
///
/// ``` QPaintEngine* self, QPaintDevice* pdev ```
bool q_paintengine_begin(void* self, void* pdev) {
    return QPaintEngine_Begin((QPaintEngine*)self, (QPaintDevice*)pdev);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, bool (*slot)(QPaintEngine*, QPaintDevice*) ```
void q_paintengine_on_begin(void* self, bool (*slot)(void*, void*)) {
    QPaintEngine_OnBegin((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QPaintDevice* pdev ```
bool q_paintengine_qbase_begin(void* self, void* pdev) {
    return QPaintEngine_QBaseBegin((QPaintEngine*)self, (QPaintDevice*)pdev);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#end)
///
/// ``` QPaintEngine* self ```
bool q_paintengine_end(void* self) {
    return QPaintEngine_End((QPaintEngine*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, bool (*slot)() ```
void q_paintengine_on_end(void* self, bool (*slot)()) {
    QPaintEngine_OnEnd((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self ```
bool q_paintengine_qbase_end(void* self) {
    return QPaintEngine_QBaseEnd((QPaintEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#updateState)
///
/// ``` QPaintEngine* self, QPaintEngineState* state ```
void q_paintengine_update_state(void* self, void* state) {
    QPaintEngine_UpdateState((QPaintEngine*)self, (QPaintEngineState*)state);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QPaintEngineState*) ```
void q_paintengine_on_update_state(void* self, void (*slot)(void*, void*)) {
    QPaintEngine_OnUpdateState((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QPaintEngineState* state ```
void q_paintengine_qbase_update_state(void* self, void* state) {
    QPaintEngine_QBaseUpdateState((QPaintEngine*)self, (QPaintEngineState*)state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
///
/// ``` QPaintEngine* self, QRect* rects, int rectCount ```
void q_paintengine_draw_rects(void* self, void* rects, int rectCount) {
    QPaintEngine_DrawRects((QPaintEngine*)self, (QRect*)rects, rectCount);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QRect*, int) ```
void q_paintengine_on_draw_rects(void* self, void (*slot)(void*, void*, int)) {
    QPaintEngine_OnDrawRects((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QRect* rects, int rectCount ```
void q_paintengine_qbase_draw_rects(void* self, void* rects, int rectCount) {
    QPaintEngine_QBaseDrawRects((QPaintEngine*)self, (QRect*)rects, rectCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawRects)
///
/// ``` QPaintEngine* self, QRectF* rects, int rectCount ```
void q_paintengine_draw_rects2(void* self, void* rects, int rectCount) {
    QPaintEngine_DrawRects2((QPaintEngine*)self, (QRectF*)rects, rectCount);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QRectF*, int) ```
void q_paintengine_on_draw_rects2(void* self, void (*slot)(void*, void*, int)) {
    QPaintEngine_OnDrawRects2((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QRectF* rects, int rectCount ```
void q_paintengine_qbase_draw_rects2(void* self, void* rects, int rectCount) {
    QPaintEngine_QBaseDrawRects2((QPaintEngine*)self, (QRectF*)rects, rectCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
///
/// ``` QPaintEngine* self, QLine* lines, int lineCount ```
void q_paintengine_draw_lines(void* self, void* lines, int lineCount) {
    QPaintEngine_DrawLines((QPaintEngine*)self, (QLine*)lines, lineCount);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QLine*, int) ```
void q_paintengine_on_draw_lines(void* self, void (*slot)(void*, void*, int)) {
    QPaintEngine_OnDrawLines((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QLine* lines, int lineCount ```
void q_paintengine_qbase_draw_lines(void* self, void* lines, int lineCount) {
    QPaintEngine_QBaseDrawLines((QPaintEngine*)self, (QLine*)lines, lineCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawLines)
///
/// ``` QPaintEngine* self, QLineF* lines, int lineCount ```
void q_paintengine_draw_lines2(void* self, void* lines, int lineCount) {
    QPaintEngine_DrawLines2((QPaintEngine*)self, (QLineF*)lines, lineCount);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QLineF*, int) ```
void q_paintengine_on_draw_lines2(void* self, void (*slot)(void*, void*, int)) {
    QPaintEngine_OnDrawLines2((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QLineF* lines, int lineCount ```
void q_paintengine_qbase_draw_lines2(void* self, void* lines, int lineCount) {
    QPaintEngine_QBaseDrawLines2((QPaintEngine*)self, (QLineF*)lines, lineCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
///
/// ``` QPaintEngine* self, QRectF* r ```
void q_paintengine_draw_ellipse(void* self, void* r) {
    QPaintEngine_DrawEllipse((QPaintEngine*)self, (QRectF*)r);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QRectF*) ```
void q_paintengine_on_draw_ellipse(void* self, void (*slot)(void*, void*)) {
    QPaintEngine_OnDrawEllipse((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QRectF* r ```
void q_paintengine_qbase_draw_ellipse(void* self, void* r) {
    QPaintEngine_QBaseDrawEllipse((QPaintEngine*)self, (QRectF*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawEllipse)
///
/// ``` QPaintEngine* self, QRect* r ```
void q_paintengine_draw_ellipse_with_q_rect(void* self, void* r) {
    QPaintEngine_DrawEllipseWithQRect((QPaintEngine*)self, (QRect*)r);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QRect*) ```
void q_paintengine_on_draw_ellipse_with_q_rect(void* self, void (*slot)(void*, void*)) {
    QPaintEngine_OnDrawEllipseWithQRect((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QRect* r ```
void q_paintengine_qbase_draw_ellipse_with_q_rect(void* self, void* r) {
    QPaintEngine_QBaseDrawEllipseWithQRect((QPaintEngine*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPath)
///
/// ``` QPaintEngine* self, QPainterPath* path ```
void q_paintengine_draw_path(void* self, void* path) {
    QPaintEngine_DrawPath((QPaintEngine*)self, (QPainterPath*)path);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QPainterPath*) ```
void q_paintengine_on_draw_path(void* self, void (*slot)(void*, void*)) {
    QPaintEngine_OnDrawPath((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QPainterPath* path ```
void q_paintengine_qbase_draw_path(void* self, void* path) {
    QPaintEngine_QBaseDrawPath((QPaintEngine*)self, (QPainterPath*)path);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
///
/// ``` QPaintEngine* self, QPointF* points, int pointCount ```
void q_paintengine_draw_points(void* self, void* points, int pointCount) {
    QPaintEngine_DrawPoints((QPaintEngine*)self, (QPointF*)points, pointCount);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QPointF*, int) ```
void q_paintengine_on_draw_points(void* self, void (*slot)(void*, void*, int)) {
    QPaintEngine_OnDrawPoints((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QPointF* points, int pointCount ```
void q_paintengine_qbase_draw_points(void* self, void* points, int pointCount) {
    QPaintEngine_QBaseDrawPoints((QPaintEngine*)self, (QPointF*)points, pointCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPoints)
///
/// ``` QPaintEngine* self, QPoint* points, int pointCount ```
void q_paintengine_draw_points2(void* self, void* points, int pointCount) {
    QPaintEngine_DrawPoints2((QPaintEngine*)self, (QPoint*)points, pointCount);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QPoint*, int) ```
void q_paintengine_on_draw_points2(void* self, void (*slot)(void*, void*, int)) {
    QPaintEngine_OnDrawPoints2((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QPoint* points, int pointCount ```
void q_paintengine_qbase_draw_points2(void* self, void* points, int pointCount) {
    QPaintEngine_QBaseDrawPoints2((QPaintEngine*)self, (QPoint*)points, pointCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
///
/// ``` QPaintEngine* self, QPointF* points, int pointCount, enum QPaintEngine__PolygonDrawMode mode ```
void q_paintengine_draw_polygon(void* self, void* points, int pointCount, int64_t mode) {
    QPaintEngine_DrawPolygon((QPaintEngine*)self, (QPointF*)points, pointCount, mode);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QPointF*, int, enum QPaintEngine__PolygonDrawMode) ```
void q_paintengine_on_draw_polygon(void* self, void (*slot)(void*, void*, int, int64_t)) {
    QPaintEngine_OnDrawPolygon((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QPointF* points, int pointCount, enum QPaintEngine__PolygonDrawMode mode ```
void q_paintengine_qbase_draw_polygon(void* self, void* points, int pointCount, int64_t mode) {
    QPaintEngine_QBaseDrawPolygon((QPaintEngine*)self, (QPointF*)points, pointCount, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPolygon)
///
/// ``` QPaintEngine* self, QPoint* points, int pointCount, enum QPaintEngine__PolygonDrawMode mode ```
void q_paintengine_draw_polygon2(void* self, void* points, int pointCount, int64_t mode) {
    QPaintEngine_DrawPolygon2((QPaintEngine*)self, (QPoint*)points, pointCount, mode);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QPoint*, int, enum QPaintEngine__PolygonDrawMode) ```
void q_paintengine_on_draw_polygon2(void* self, void (*slot)(void*, void*, int, int64_t)) {
    QPaintEngine_OnDrawPolygon2((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QPoint* points, int pointCount, enum QPaintEngine__PolygonDrawMode mode ```
void q_paintengine_qbase_draw_polygon2(void* self, void* points, int pointCount, int64_t mode) {
    QPaintEngine_QBaseDrawPolygon2((QPaintEngine*)self, (QPoint*)points, pointCount, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawPixmap)
///
/// ``` QPaintEngine* self, QRectF* r, QPixmap* pm, QRectF* sr ```
void q_paintengine_draw_pixmap(void* self, void* r, void* pm, void* sr) {
    QPaintEngine_DrawPixmap((QPaintEngine*)self, (QRectF*)r, (QPixmap*)pm, (QRectF*)sr);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QRectF*, QPixmap*, QRectF*) ```
void q_paintengine_on_draw_pixmap(void* self, void (*slot)(void*, void*, void*, void*)) {
    QPaintEngine_OnDrawPixmap((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QRectF* r, QPixmap* pm, QRectF* sr ```
void q_paintengine_qbase_draw_pixmap(void* self, void* r, void* pm, void* sr) {
    QPaintEngine_QBaseDrawPixmap((QPaintEngine*)self, (QRectF*)r, (QPixmap*)pm, (QRectF*)sr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawTextItem)
///
/// ``` QPaintEngine* self, QPointF* p, QTextItem* textItem ```
void q_paintengine_draw_text_item(void* self, void* p, void* textItem) {
    QPaintEngine_DrawTextItem((QPaintEngine*)self, (QPointF*)p, (QTextItem*)textItem);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QPointF*, QTextItem*) ```
void q_paintengine_on_draw_text_item(void* self, void (*slot)(void*, void*, void*)) {
    QPaintEngine_OnDrawTextItem((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QPointF* p, QTextItem* textItem ```
void q_paintengine_qbase_draw_text_item(void* self, void* p, void* textItem) {
    QPaintEngine_QBaseDrawTextItem((QPaintEngine*)self, (QPointF*)p, (QTextItem*)textItem);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawTiledPixmap)
///
/// ``` QPaintEngine* self, QRectF* r, QPixmap* pixmap, QPointF* s ```
void q_paintengine_draw_tiled_pixmap(void* self, void* r, void* pixmap, void* s) {
    QPaintEngine_DrawTiledPixmap((QPaintEngine*)self, (QRectF*)r, (QPixmap*)pixmap, (QPointF*)s);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QRectF*, QPixmap*, QPointF*) ```
void q_paintengine_on_draw_tiled_pixmap(void* self, void (*slot)(void*, void*, void*, void*)) {
    QPaintEngine_OnDrawTiledPixmap((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QRectF* r, QPixmap* pixmap, QPointF* s ```
void q_paintengine_qbase_draw_tiled_pixmap(void* self, void* r, void* pixmap, void* s) {
    QPaintEngine_QBaseDrawTiledPixmap((QPaintEngine*)self, (QRectF*)r, (QPixmap*)pixmap, (QPointF*)s);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#drawImage)
///
/// ``` QPaintEngine* self, QRectF* r, QImage* pm, QRectF* sr, int flags ```
void q_paintengine_draw_image(void* self, void* r, void* pm, void* sr, int64_t flags) {
    QPaintEngine_DrawImage((QPaintEngine*)self, (QRectF*)r, (QImage*)pm, (QRectF*)sr, flags);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, void (*slot)(QPaintEngine*, QRectF*, QImage*, QRectF*, int) ```
void q_paintengine_on_draw_image(void* self, void (*slot)(void*, void*, void*, void*, int64_t)) {
    QPaintEngine_OnDrawImage((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QRectF* r, QImage* pm, QRectF* sr, int flags ```
void q_paintengine_qbase_draw_image(void* self, void* r, void* pm, void* sr, int64_t flags) {
    QPaintEngine_QBaseDrawImage((QPaintEngine*)self, (QRectF*)r, (QImage*)pm, (QRectF*)sr, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setPaintDevice)
///
/// ``` QPaintEngine* self, QPaintDevice* device ```
void q_paintengine_set_paint_device(void* self, void* device) {
    QPaintEngine_SetPaintDevice((QPaintEngine*)self, (QPaintDevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#paintDevice)
///
/// ``` QPaintEngine* self ```
QPaintDevice* q_paintengine_paint_device(void* self) {
    return QPaintEngine_PaintDevice((QPaintEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setSystemClip)
///
/// ``` QPaintEngine* self, QRegion* baseClip ```
void q_paintengine_set_system_clip(void* self, void* baseClip) {
    QPaintEngine_SetSystemClip((QPaintEngine*)self, (QRegion*)baseClip);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#systemClip)
///
/// ``` QPaintEngine* self ```
QRegion* q_paintengine_system_clip(void* self) {
    return QPaintEngine_SystemClip((QPaintEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setSystemRect)
///
/// ``` QPaintEngine* self, QRect* rect ```
void q_paintengine_set_system_rect(void* self, void* rect) {
    QPaintEngine_SetSystemRect((QPaintEngine*)self, (QRect*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#systemRect)
///
/// ``` QPaintEngine* self ```
QRect* q_paintengine_system_rect(void* self) {
    return QPaintEngine_SystemRect((QPaintEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#coordinateOffset)
///
/// ``` QPaintEngine* self ```
QPoint* q_paintengine_coordinate_offset(void* self) {
    return QPaintEngine_CoordinateOffset((QPaintEngine*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, QPoint* (*slot)() ```
void q_paintengine_on_coordinate_offset(void* self, QPoint* (*slot)()) {
    QPaintEngine_OnCoordinateOffset((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self ```
QPoint* q_paintengine_qbase_coordinate_offset(void* self) {
    return QPaintEngine_QBaseCoordinateOffset((QPaintEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#type)
///
/// ``` QPaintEngine* self ```
int64_t q_paintengine_type(void* self) {
    return QPaintEngine_Type((QPaintEngine*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, int64_t (*slot)() ```
void q_paintengine_on_type(void* self, int64_t (*slot)()) {
    QPaintEngine_OnType((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self ```
int64_t q_paintengine_qbase_type(void* self) {
    return QPaintEngine_QBaseType((QPaintEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#fix_neg_rect)
///
/// ``` QPaintEngine* self, int* x, int* y, int* w, int* h ```
void q_paintengine_fix_neg_rect(void* self, int* x, int* y, int* w, int* h) {
    QPaintEngine_FixNegRect((QPaintEngine*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#testDirty)
///
/// ``` QPaintEngine* self, int df ```
bool q_paintengine_test_dirty(void* self, int64_t df) {
    return QPaintEngine_TestDirty((QPaintEngine*)self, df);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#setDirty)
///
/// ``` QPaintEngine* self, int df ```
void q_paintengine_set_dirty(void* self, int64_t df) {
    QPaintEngine_SetDirty((QPaintEngine*)self, df);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#clearDirty)
///
/// ``` QPaintEngine* self, int df ```
void q_paintengine_clear_dirty(void* self, int64_t df) {
    QPaintEngine_ClearDirty((QPaintEngine*)self, df);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#hasFeature)
///
/// ``` QPaintEngine* self, int feature ```
bool q_paintengine_has_feature(void* self, int64_t feature) {
    return QPaintEngine_HasFeature((QPaintEngine*)self, feature);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#painter)
///
/// ``` QPaintEngine* self ```
QPainter* q_paintengine_painter(void* self) {
    return QPaintEngine_Painter((QPaintEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#syncState)
///
/// ``` QPaintEngine* self ```
void q_paintengine_sync_state(void* self) {
    QPaintEngine_SyncState((QPaintEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#isExtended)
///
/// ``` QPaintEngine* self ```
bool q_paintengine_is_extended(void* self) {
    return QPaintEngine_IsExtended((QPaintEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#createPixmap)
///
/// ``` QPaintEngine* self, QSize* size ```
QPixmap* q_paintengine_create_pixmap(void* self, void* size) {
    return QPaintEngine_CreatePixmap((QPaintEngine*)self, (QSize*)size);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, QPixmap* (*slot)(QPaintEngine*, QSize*) ```
void q_paintengine_on_create_pixmap(void* self, QPixmap* (*slot)(void*, void*)) {
    QPaintEngine_OnCreatePixmap((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QSize* size ```
QPixmap* q_paintengine_qbase_create_pixmap(void* self, void* size) {
    return QPaintEngine_QBaseCreatePixmap((QPaintEngine*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintengine.html#createPixmapFromImage)
///
/// ``` QPaintEngine* self, QImage* image, int flags ```
QPixmap* q_paintengine_create_pixmap_from_image(void* self, void* image, int64_t flags) {
    return QPaintEngine_CreatePixmapFromImage((QPaintEngine*)self, (QImage*)image, flags);
}

/// Allows for overriding the related default method
///
/// ``` QPaintEngine* self, QPixmap* (*slot)(QPaintEngine*, QImage*, int) ```
void q_paintengine_on_create_pixmap_from_image(void* self, QPixmap* (*slot)(void*, void*, int64_t)) {
    QPaintEngine_OnCreatePixmapFromImage((QPaintEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPaintEngine* self, QImage* image, int flags ```
QPixmap* q_paintengine_qbase_create_pixmap_from_image(void* self, void* image, int64_t flags) {
    return QPaintEngine_QBaseCreatePixmapFromImage((QPaintEngine*)self, (QImage*)image, flags);
}

/// Delete this object from C++ memory.
///
/// ``` QPaintEngine* self ```
void q_paintengine_delete(void* self) {
    QPaintEngine_Delete((QPaintEngine*)(self));
}

/// https://doc.qt.io/qt-6/qpaintenginestate.html

/// q_paintenginestate_new constructs a new QPaintEngineState object.
///
/// ``` QPaintEngineState* other ```
QPaintEngineState* q_paintenginestate_new(void* other) {
    return QPaintEngineState_new((QPaintEngineState*)other);
}

/// q_paintenginestate_new2 constructs a new QPaintEngineState object and invalidates the source QPaintEngineState object.
///
/// ``` QPaintEngineState* other ```
QPaintEngineState* q_paintenginestate_new2(void* other) {
    return QPaintEngineState_new2((QPaintEngineState*)other);
}

/// q_paintenginestate_copy_assign shallow copies `other` into `self`.
///
/// ``` QPaintEngineState* self, QPaintEngineState* other ```
void q_paintenginestate_copy_assign(void* self, void* other) {
    QPaintEngineState_CopyAssign((QPaintEngineState*)self, (QPaintEngineState*)other);
}

/// q_paintenginestate_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPaintEngineState* self, QPaintEngineState* other ```
void q_paintenginestate_move_assign(void* self, void* other) {
    QPaintEngineState_MoveAssign((QPaintEngineState*)self, (QPaintEngineState*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#state)
///
/// ``` QPaintEngineState* self ```
int64_t q_paintenginestate_state(void* self) {
    return QPaintEngineState_State((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#pen)
///
/// ``` QPaintEngineState* self ```
QPen* q_paintenginestate_pen(void* self) {
    return QPaintEngineState_Pen((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#brush)
///
/// ``` QPaintEngineState* self ```
QBrush* q_paintenginestate_brush(void* self) {
    return QPaintEngineState_Brush((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#brushOrigin)
///
/// ``` QPaintEngineState* self ```
QPointF* q_paintenginestate_brush_origin(void* self) {
    return QPaintEngineState_BrushOrigin((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#backgroundBrush)
///
/// ``` QPaintEngineState* self ```
QBrush* q_paintenginestate_background_brush(void* self) {
    return QPaintEngineState_BackgroundBrush((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#backgroundMode)
///
/// ``` QPaintEngineState* self ```
int64_t q_paintenginestate_background_mode(void* self) {
    return QPaintEngineState_BackgroundMode((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#font)
///
/// ``` QPaintEngineState* self ```
QFont* q_paintenginestate_font(void* self) {
    return QPaintEngineState_Font((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#transform)
///
/// ``` QPaintEngineState* self ```
QTransform* q_paintenginestate_transform(void* self) {
    return QPaintEngineState_Transform((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#clipOperation)
///
/// ``` QPaintEngineState* self ```
int64_t q_paintenginestate_clip_operation(void* self) {
    return QPaintEngineState_ClipOperation((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#clipRegion)
///
/// ``` QPaintEngineState* self ```
QRegion* q_paintenginestate_clip_region(void* self) {
    return QPaintEngineState_ClipRegion((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#clipPath)
///
/// ``` QPaintEngineState* self ```
QPainterPath* q_paintenginestate_clip_path(void* self) {
    return QPaintEngineState_ClipPath((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#isClipEnabled)
///
/// ``` QPaintEngineState* self ```
bool q_paintenginestate_is_clip_enabled(void* self) {
    return QPaintEngineState_IsClipEnabled((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#renderHints)
///
/// ``` QPaintEngineState* self ```
int64_t q_paintenginestate_render_hints(void* self) {
    return QPaintEngineState_RenderHints((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#compositionMode)
///
/// ``` QPaintEngineState* self ```
int64_t q_paintenginestate_composition_mode(void* self) {
    return QPaintEngineState_CompositionMode((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#opacity)
///
/// ``` QPaintEngineState* self ```
double q_paintenginestate_opacity(void* self) {
    return QPaintEngineState_Opacity((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#painter)
///
/// ``` QPaintEngineState* self ```
QPainter* q_paintenginestate_painter(void* self) {
    return QPaintEngineState_Painter((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#brushNeedsResolving)
///
/// ``` QPaintEngineState* self ```
bool q_paintenginestate_brush_needs_resolving(void* self) {
    return QPaintEngineState_BrushNeedsResolving((QPaintEngineState*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintenginestate.html#penNeedsResolving)
///
/// ``` QPaintEngineState* self ```
bool q_paintenginestate_pen_needs_resolving(void* self) {
    return QPaintEngineState_PenNeedsResolving((QPaintEngineState*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QPaintEngineState* self ```
void q_paintenginestate_delete(void* self) {
    QPaintEngineState_Delete((QPaintEngineState*)(self));
}
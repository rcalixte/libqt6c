#include "libqabstractscrollarea.hpp"
#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqbrush.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqframe.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsitem.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqgraphicsscene.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpainterpath.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqscrollbar.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqgraphicsview.hpp"
#include "libqgraphicsview.h"

/// https://doc.qt.io/qt-6/qgraphicsview.html

/// q_graphicsview_new constructs a new QGraphicsView object.
///
/// ``` QWidget* parent ```
QGraphicsView* q_graphicsview_new(void* parent) {
    return QGraphicsView_new((QWidget*)parent);
}

/// q_graphicsview_new2 constructs a new QGraphicsView object.
///
///
QGraphicsView* q_graphicsview_new2() {
    return QGraphicsView_new2();
}

/// q_graphicsview_new3 constructs a new QGraphicsView object.
///
/// ``` QGraphicsScene* scene ```
QGraphicsView* q_graphicsview_new3(void* scene) {
    return QGraphicsView_new3((QGraphicsScene*)scene);
}

/// q_graphicsview_new4 constructs a new QGraphicsView object.
///
/// ``` QGraphicsScene* scene, QWidget* parent ```
QGraphicsView* q_graphicsview_new4(void* scene, void* parent) {
    return QGraphicsView_new4((QGraphicsScene*)scene, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsView* self ```
QMetaObject* q_graphicsview_meta_object(void* self) {
    return QGraphicsView_MetaObject((QGraphicsView*)self);
}

/// ``` QGraphicsView* self, const char* param1 ```
void* q_graphicsview_metacast(void* self, const char* param1) {
    return QGraphicsView_Metacast((QGraphicsView*)self, param1);
}

/// ``` QGraphicsView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsview_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsView_Metacall((QGraphicsView*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, int32_t (*slot)(QGraphicsView*, enum QMetaObject__Call, int, void*) ```
void q_graphicsview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsView_OnMetacall((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsview_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsView_QBaseMetacall((QGraphicsView*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsview_tr(const char* s) {
    libqt_string _str = QGraphicsView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#sizeHint)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_size_hint(void* self) {
    return QGraphicsView_SizeHint((QGraphicsView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, QSize* (*slot)() ```
void q_graphicsview_on_size_hint(void* self, QSize* (*slot)()) {
    QGraphicsView_OnSizeHint((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_qbase_size_hint(void* self) {
    return QGraphicsView_QBaseSizeHint((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#renderHints)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_render_hints(void* self) {
    return QGraphicsView_RenderHints((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
///
/// ``` QGraphicsView* self, enum QPainter__RenderHint hint ```
void q_graphicsview_set_render_hint(void* self, int64_t hint) {
    QGraphicsView_SetRenderHint((QGraphicsView*)self, hint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHints)
///
/// ``` QGraphicsView* self, int hints ```
void q_graphicsview_set_render_hints(void* self, int64_t hints) {
    QGraphicsView_SetRenderHints((QGraphicsView*)self, hints);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#alignment)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_alignment(void* self) {
    return QGraphicsView_Alignment((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setAlignment)
///
/// ``` QGraphicsView* self, int alignment ```
void q_graphicsview_set_alignment(void* self, int64_t alignment) {
    QGraphicsView_SetAlignment((QGraphicsView*)self, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#transformationAnchor)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_transformation_anchor(void* self) {
    return QGraphicsView_TransformationAnchor((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setTransformationAnchor)
///
/// ``` QGraphicsView* self, enum QGraphicsView__ViewportAnchor anchor ```
void q_graphicsview_set_transformation_anchor(void* self, int64_t anchor) {
    QGraphicsView_SetTransformationAnchor((QGraphicsView*)self, anchor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resizeAnchor)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_resize_anchor(void* self) {
    return QGraphicsView_ResizeAnchor((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setResizeAnchor)
///
/// ``` QGraphicsView* self, enum QGraphicsView__ViewportAnchor anchor ```
void q_graphicsview_set_resize_anchor(void* self, int64_t anchor) {
    QGraphicsView_SetResizeAnchor((QGraphicsView*)self, anchor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportUpdateMode)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_viewport_update_mode(void* self) {
    return QGraphicsView_ViewportUpdateMode((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setViewportUpdateMode)
///
/// ``` QGraphicsView* self, enum QGraphicsView__ViewportUpdateMode mode ```
void q_graphicsview_set_viewport_update_mode(void* self, int64_t mode) {
    QGraphicsView_SetViewportUpdateMode((QGraphicsView*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#optimizationFlags)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_optimization_flags(void* self) {
    return QGraphicsView_OptimizationFlags((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
///
/// ``` QGraphicsView* self, enum QGraphicsView__OptimizationFlag flag ```
void q_graphicsview_set_optimization_flag(void* self, int64_t flag) {
    QGraphicsView_SetOptimizationFlag((QGraphicsView*)self, flag);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlags)
///
/// ``` QGraphicsView* self, int flags ```
void q_graphicsview_set_optimization_flags(void* self, int64_t flags) {
    QGraphicsView_SetOptimizationFlags((QGraphicsView*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragMode)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_drag_mode(void* self) {
    return QGraphicsView_DragMode((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setDragMode)
///
/// ``` QGraphicsView* self, enum QGraphicsView__DragMode mode ```
void q_graphicsview_set_drag_mode(void* self, int64_t mode) {
    QGraphicsView_SetDragMode((QGraphicsView*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandSelectionMode)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_rubber_band_selection_mode(void* self) {
    return QGraphicsView_RubberBandSelectionMode((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRubberBandSelectionMode)
///
/// ``` QGraphicsView* self, enum Qt__ItemSelectionMode mode ```
void q_graphicsview_set_rubber_band_selection_mode(void* self, int64_t mode) {
    QGraphicsView_SetRubberBandSelectionMode((QGraphicsView*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandRect)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_rubber_band_rect(void* self) {
    return QGraphicsView_RubberBandRect((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#cacheMode)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_cache_mode(void* self) {
    return QGraphicsView_CacheMode((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setCacheMode)
///
/// ``` QGraphicsView* self, int mode ```
void q_graphicsview_set_cache_mode(void* self, int64_t mode) {
    QGraphicsView_SetCacheMode((QGraphicsView*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resetCachedContent)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_reset_cached_content(void* self) {
    QGraphicsView_ResetCachedContent((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#isInteractive)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_interactive(void* self) {
    return QGraphicsView_IsInteractive((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setInteractive)
///
/// ``` QGraphicsView* self, bool allowed ```
void q_graphicsview_set_interactive(void* self, bool allowed) {
    QGraphicsView_SetInteractive((QGraphicsView*)self, allowed);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scene)
///
/// ``` QGraphicsView* self ```
QGraphicsScene* q_graphicsview_scene(void* self) {
    return QGraphicsView_Scene((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setScene)
///
/// ``` QGraphicsView* self, QGraphicsScene* scene ```
void q_graphicsview_set_scene(void* self, void* scene) {
    QGraphicsView_SetScene((QGraphicsView*)self, (QGraphicsScene*)scene);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#sceneRect)
///
/// ``` QGraphicsView* self ```
QRectF* q_graphicsview_scene_rect(void* self) {
    return QGraphicsView_SceneRect((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
///
/// ``` QGraphicsView* self, QRectF* rect ```
void q_graphicsview_set_scene_rect(void* self, void* rect) {
    QGraphicsView_SetSceneRect((QGraphicsView*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setSceneRect)
///
/// ``` QGraphicsView* self, double x, double y, double w, double h ```
void q_graphicsview_set_scene_rect2(void* self, double x, double y, double w, double h) {
    QGraphicsView_SetSceneRect2((QGraphicsView*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#transform)
///
/// ``` QGraphicsView* self ```
QTransform* q_graphicsview_transform(void* self) {
    return QGraphicsView_Transform((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportTransform)
///
/// ``` QGraphicsView* self ```
QTransform* q_graphicsview_viewport_transform(void* self) {
    return QGraphicsView_ViewportTransform((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#isTransformed)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_transformed(void* self) {
    return QGraphicsView_IsTransformed((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
///
/// ``` QGraphicsView* self, QTransform* matrix ```
void q_graphicsview_set_transform(void* self, void* matrix) {
    QGraphicsView_SetTransform((QGraphicsView*)self, (QTransform*)matrix);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resetTransform)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_reset_transform(void* self) {
    QGraphicsView_ResetTransform((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rotate)
///
/// ``` QGraphicsView* self, double angle ```
void q_graphicsview_rotate(void* self, double angle) {
    QGraphicsView_Rotate((QGraphicsView*)self, angle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scale)
///
/// ``` QGraphicsView* self, double sx, double sy ```
void q_graphicsview_scale(void* self, double sx, double sy) {
    QGraphicsView_Scale((QGraphicsView*)self, sx, sy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#shear)
///
/// ``` QGraphicsView* self, double sh, double sv ```
void q_graphicsview_shear(void* self, double sh, double sv) {
    QGraphicsView_Shear((QGraphicsView*)self, sh, sv);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#translate)
///
/// ``` QGraphicsView* self, double dx, double dy ```
void q_graphicsview_translate(void* self, double dx, double dy) {
    QGraphicsView_Translate((QGraphicsView*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// ``` QGraphicsView* self, QPointF* pos ```
void q_graphicsview_center_on(void* self, void* pos) {
    QGraphicsView_CenterOn((QGraphicsView*)self, (QPointF*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// ``` QGraphicsView* self, double x, double y ```
void q_graphicsview_center_on2(void* self, double x, double y) {
    QGraphicsView_CenterOn2((QGraphicsView*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#centerOn)
///
/// ``` QGraphicsView* self, QGraphicsItem* item ```
void q_graphicsview_center_on_with_item(void* self, void* item) {
    QGraphicsView_CenterOnWithItem((QGraphicsView*)self, (QGraphicsItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, QRectF* rect ```
void q_graphicsview_ensure_visible(void* self, void* rect) {
    QGraphicsView_EnsureVisible((QGraphicsView*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, double x, double y, double w, double h ```
void q_graphicsview_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsView_EnsureVisible2((QGraphicsView*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, QGraphicsItem* item ```
void q_graphicsview_ensure_visible_with_item(void* self, void* item) {
    QGraphicsView_EnsureVisibleWithItem((QGraphicsView*)self, (QGraphicsItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QGraphicsView* self, QRectF* rect ```
void q_graphicsview_fit_in_view(void* self, void* rect) {
    QGraphicsView_FitInView((QGraphicsView*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QGraphicsView* self, double x, double y, double w, double h ```
void q_graphicsview_fit_in_view2(void* self, double x, double y, double w, double h) {
    QGraphicsView_FitInView2((QGraphicsView*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QGraphicsView* self, QGraphicsItem* item ```
void q_graphicsview_fit_in_view_with_item(void* self, void* item) {
    QGraphicsView_FitInViewWithItem((QGraphicsView*)self, (QGraphicsItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter ```
void q_graphicsview_render(void* self, void* painter) {
    QGraphicsView_Render((QGraphicsView*)self, (QPainter*)painter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items(void* self) {
    libqt_list _arr = QGraphicsView_Items((QGraphicsView*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, QPoint* pos ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items_with_pos(void* self, void* pos) {
    libqt_list _arr = QGraphicsView_ItemsWithPos((QGraphicsView*)self, (QPoint*)pos);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, int x, int y ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items2(void* self, int x, int y) {
    libqt_list _arr = QGraphicsView_Items2((QGraphicsView*)self, x, y);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, QRect* rect ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items_with_rect(void* self, void* rect) {
    libqt_list _arr = QGraphicsView_ItemsWithRect((QGraphicsView*)self, (QRect*)rect);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, int x, int y, int w, int h ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items3(void* self, int x, int y, int w, int h) {
    libqt_list _arr = QGraphicsView_Items3((QGraphicsView*)self, x, y, w, h);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, QPainterPath* path ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items_with_path(void* self, void* path) {
    libqt_list _arr = QGraphicsView_ItemsWithPath((QGraphicsView*)self, (QPainterPath*)path);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
///
/// ``` QGraphicsView* self, QPoint* pos ```
QGraphicsItem* q_graphicsview_item_at(void* self, void* pos) {
    return QGraphicsView_ItemAt((QGraphicsView*)self, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#itemAt)
///
/// ``` QGraphicsView* self, int x, int y ```
QGraphicsItem* q_graphicsview_item_at2(void* self, int x, int y) {
    return QGraphicsView_ItemAt2((QGraphicsView*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// ``` QGraphicsView* self, QPoint* point ```
QPointF* q_graphicsview_map_to_scene(void* self, void* point) {
    return QGraphicsView_MapToScene((QGraphicsView*)self, (QPoint*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// ``` QGraphicsView* self, QPainterPath* path ```
QPainterPath* q_graphicsview_map_to_scene_with_path(void* self, void* path) {
    return QGraphicsView_MapToSceneWithPath((QGraphicsView*)self, (QPainterPath*)path);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// ``` QGraphicsView* self, QPointF* point ```
QPoint* q_graphicsview_map_from_scene(void* self, void* point) {
    return QGraphicsView_MapFromScene((QGraphicsView*)self, (QPointF*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// ``` QGraphicsView* self, QPainterPath* path ```
QPainterPath* q_graphicsview_map_from_scene_with_path(void* self, void* path) {
    return QGraphicsView_MapFromSceneWithPath((QGraphicsView*)self, (QPainterPath*)path);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapToScene)
///
/// ``` QGraphicsView* self, int x, int y ```
QPointF* q_graphicsview_map_to_scene2(void* self, int x, int y) {
    return QGraphicsView_MapToScene2((QGraphicsView*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mapFromScene)
///
/// ``` QGraphicsView* self, double x, double y ```
QPoint* q_graphicsview_map_from_scene2(void* self, double x, double y) {
    return QGraphicsView_MapFromScene2((QGraphicsView*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodQuery)
///
/// ``` QGraphicsView* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsview_input_method_query(void* self, int64_t query) {
    return QGraphicsView_InputMethodQuery((QGraphicsView*)self, query);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, QVariant* (*slot)(QGraphicsView*, enum Qt__InputMethodQuery) ```
void q_graphicsview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QGraphicsView_OnInputMethodQuery((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsview_qbase_input_method_query(void* self, int64_t query) {
    return QGraphicsView_QBaseInputMethodQuery((QGraphicsView*)self, query);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#backgroundBrush)
///
/// ``` QGraphicsView* self ```
QBrush* q_graphicsview_background_brush(void* self) {
    return QGraphicsView_BackgroundBrush((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setBackgroundBrush)
///
/// ``` QGraphicsView* self, QBrush* brush ```
void q_graphicsview_set_background_brush(void* self, void* brush) {
    QGraphicsView_SetBackgroundBrush((QGraphicsView*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#foregroundBrush)
///
/// ``` QGraphicsView* self ```
QBrush* q_graphicsview_foreground_brush(void* self) {
    return QGraphicsView_ForegroundBrush((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setForegroundBrush)
///
/// ``` QGraphicsView* self, QBrush* brush ```
void q_graphicsview_set_foreground_brush(void* self, void* brush) {
    QGraphicsView_SetForegroundBrush((QGraphicsView*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#updateScene)
///
/// ``` QGraphicsView* self, QRectF* rects[] ```
void q_graphicsview_update_scene(void* self, void* rects[]) {
    QRectF** rects_arr = (QRectF**)rects;
    size_t rects_len = 0;
    while (rects_arr[rects_len] != NULL) {
        rects_len++;
    }
    libqt_list rects_list = {
        .len = rects_len,
        .data = {(QRectF*)rects},
    };
    QGraphicsView_UpdateScene((QGraphicsView*)self, rects_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_invalidate_scene(void* self) {
    QGraphicsView_InvalidateScene((QGraphicsView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#updateSceneRect)
///
/// ``` QGraphicsView* self, QRectF* rect ```
void q_graphicsview_update_scene_rect(void* self, void* rect) {
    QGraphicsView_UpdateSceneRect((QGraphicsView*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#rubberBandChanged)
///
/// ``` QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint ```
void q_graphicsview_rubber_band_changed(void* self, void* viewportRect, void* fromScenePoint, void* toScenePoint) {
    QGraphicsView_RubberBandChanged((QGraphicsView*)self, (QRect*)viewportRect, (QPointF*)fromScenePoint, (QPointF*)toScenePoint);
}

/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QRect*, QPointF*, QPointF*) ```
void q_graphicsview_on_rubber_band_changed(void* self, void (*slot)(void*, void*, void*, void*)) {
    QGraphicsView_Connect_RubberBandChanged((QGraphicsView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setupViewport)
///
/// ``` QGraphicsView* self, QWidget* widget ```
void q_graphicsview_setup_viewport(void* self, void* widget) {
    QGraphicsView_SetupViewport((QGraphicsView*)self, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QWidget*) ```
void q_graphicsview_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnSetupViewport((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QWidget* widget ```
void q_graphicsview_qbase_setup_viewport(void* self, void* widget) {
    QGraphicsView_QBaseSetupViewport((QGraphicsView*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#event)
///
/// ``` QGraphicsView* self, QEvent* event ```
bool q_graphicsview_event(void* self, void* event) {
    return QGraphicsView_Event((QGraphicsView*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, bool (*slot)(QGraphicsView*, QEvent*) ```
void q_graphicsview_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsView_OnEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QEvent* event ```
bool q_graphicsview_qbase_event(void* self, void* event) {
    return QGraphicsView_QBaseEvent((QGraphicsView*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#viewportEvent)
///
/// ``` QGraphicsView* self, QEvent* event ```
bool q_graphicsview_viewport_event(void* self, void* event) {
    return QGraphicsView_ViewportEvent((QGraphicsView*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, bool (*slot)(QGraphicsView*, QEvent*) ```
void q_graphicsview_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsView_OnViewportEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QEvent* event ```
bool q_graphicsview_qbase_viewport_event(void* self, void* event) {
    return QGraphicsView_QBaseViewportEvent((QGraphicsView*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#contextMenuEvent)
///
/// ``` QGraphicsView* self, QContextMenuEvent* event ```
void q_graphicsview_context_menu_event(void* self, void* event) {
    QGraphicsView_ContextMenuEvent((QGraphicsView*)self, (QContextMenuEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QContextMenuEvent*) ```
void q_graphicsview_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnContextMenuEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QContextMenuEvent* event ```
void q_graphicsview_qbase_context_menu_event(void* self, void* event) {
    QGraphicsView_QBaseContextMenuEvent((QGraphicsView*)self, (QContextMenuEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragEnterEvent)
///
/// ``` QGraphicsView* self, QDragEnterEvent* event ```
void q_graphicsview_drag_enter_event(void* self, void* event) {
    QGraphicsView_DragEnterEvent((QGraphicsView*)self, (QDragEnterEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QDragEnterEvent*) ```
void q_graphicsview_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnDragEnterEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QDragEnterEvent* event ```
void q_graphicsview_qbase_drag_enter_event(void* self, void* event) {
    QGraphicsView_QBaseDragEnterEvent((QGraphicsView*)self, (QDragEnterEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragLeaveEvent)
///
/// ``` QGraphicsView* self, QDragLeaveEvent* event ```
void q_graphicsview_drag_leave_event(void* self, void* event) {
    QGraphicsView_DragLeaveEvent((QGraphicsView*)self, (QDragLeaveEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QDragLeaveEvent*) ```
void q_graphicsview_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnDragLeaveEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QDragLeaveEvent* event ```
void q_graphicsview_qbase_drag_leave_event(void* self, void* event) {
    QGraphicsView_QBaseDragLeaveEvent((QGraphicsView*)self, (QDragLeaveEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dragMoveEvent)
///
/// ``` QGraphicsView* self, QDragMoveEvent* event ```
void q_graphicsview_drag_move_event(void* self, void* event) {
    QGraphicsView_DragMoveEvent((QGraphicsView*)self, (QDragMoveEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QDragMoveEvent*) ```
void q_graphicsview_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnDragMoveEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QDragMoveEvent* event ```
void q_graphicsview_qbase_drag_move_event(void* self, void* event) {
    QGraphicsView_QBaseDragMoveEvent((QGraphicsView*)self, (QDragMoveEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#dropEvent)
///
/// ``` QGraphicsView* self, QDropEvent* event ```
void q_graphicsview_drop_event(void* self, void* event) {
    QGraphicsView_DropEvent((QGraphicsView*)self, (QDropEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QDropEvent*) ```
void q_graphicsview_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnDropEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QDropEvent* event ```
void q_graphicsview_qbase_drop_event(void* self, void* event) {
    QGraphicsView_QBaseDropEvent((QGraphicsView*)self, (QDropEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusInEvent)
///
/// ``` QGraphicsView* self, QFocusEvent* event ```
void q_graphicsview_focus_in_event(void* self, void* event) {
    QGraphicsView_FocusInEvent((QGraphicsView*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QFocusEvent*) ```
void q_graphicsview_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnFocusInEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QFocusEvent* event ```
void q_graphicsview_qbase_focus_in_event(void* self, void* event) {
    QGraphicsView_QBaseFocusInEvent((QGraphicsView*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusNextPrevChild)
///
/// ``` QGraphicsView* self, bool next ```
bool q_graphicsview_focus_next_prev_child(void* self, bool next) {
    return QGraphicsView_FocusNextPrevChild((QGraphicsView*)self, next);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, bool (*slot)(QGraphicsView*, bool) ```
void q_graphicsview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QGraphicsView_OnFocusNextPrevChild((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, bool next ```
bool q_graphicsview_qbase_focus_next_prev_child(void* self, bool next) {
    return QGraphicsView_QBaseFocusNextPrevChild((QGraphicsView*)self, next);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#focusOutEvent)
///
/// ``` QGraphicsView* self, QFocusEvent* event ```
void q_graphicsview_focus_out_event(void* self, void* event) {
    QGraphicsView_FocusOutEvent((QGraphicsView*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QFocusEvent*) ```
void q_graphicsview_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnFocusOutEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QFocusEvent* event ```
void q_graphicsview_qbase_focus_out_event(void* self, void* event) {
    QGraphicsView_QBaseFocusOutEvent((QGraphicsView*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyPressEvent)
///
/// ``` QGraphicsView* self, QKeyEvent* event ```
void q_graphicsview_key_press_event(void* self, void* event) {
    QGraphicsView_KeyPressEvent((QGraphicsView*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QKeyEvent*) ```
void q_graphicsview_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnKeyPressEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QKeyEvent* event ```
void q_graphicsview_qbase_key_press_event(void* self, void* event) {
    QGraphicsView_QBaseKeyPressEvent((QGraphicsView*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#keyReleaseEvent)
///
/// ``` QGraphicsView* self, QKeyEvent* event ```
void q_graphicsview_key_release_event(void* self, void* event) {
    QGraphicsView_KeyReleaseEvent((QGraphicsView*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QKeyEvent*) ```
void q_graphicsview_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnKeyReleaseEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QKeyEvent* event ```
void q_graphicsview_qbase_key_release_event(void* self, void* event) {
    QGraphicsView_QBaseKeyReleaseEvent((QGraphicsView*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseDoubleClickEvent)
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_mouse_double_click_event(void* self, void* event) {
    QGraphicsView_MouseDoubleClickEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QMouseEvent*) ```
void q_graphicsview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnMouseDoubleClickEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_qbase_mouse_double_click_event(void* self, void* event) {
    QGraphicsView_QBaseMouseDoubleClickEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mousePressEvent)
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_mouse_press_event(void* self, void* event) {
    QGraphicsView_MousePressEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QMouseEvent*) ```
void q_graphicsview_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnMousePressEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_qbase_mouse_press_event(void* self, void* event) {
    QGraphicsView_QBaseMousePressEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseMoveEvent)
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_mouse_move_event(void* self, void* event) {
    QGraphicsView_MouseMoveEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QMouseEvent*) ```
void q_graphicsview_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnMouseMoveEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_qbase_mouse_move_event(void* self, void* event) {
    QGraphicsView_QBaseMouseMoveEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#mouseReleaseEvent)
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_mouse_release_event(void* self, void* event) {
    QGraphicsView_MouseReleaseEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QMouseEvent*) ```
void q_graphicsview_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnMouseReleaseEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QMouseEvent* event ```
void q_graphicsview_qbase_mouse_release_event(void* self, void* event) {
    QGraphicsView_QBaseMouseReleaseEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#wheelEvent)
///
/// ``` QGraphicsView* self, QWheelEvent* event ```
void q_graphicsview_wheel_event(void* self, void* event) {
    QGraphicsView_WheelEvent((QGraphicsView*)self, (QWheelEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QWheelEvent*) ```
void q_graphicsview_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnWheelEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QWheelEvent* event ```
void q_graphicsview_qbase_wheel_event(void* self, void* event) {
    QGraphicsView_QBaseWheelEvent((QGraphicsView*)self, (QWheelEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#paintEvent)
///
/// ``` QGraphicsView* self, QPaintEvent* event ```
void q_graphicsview_paint_event(void* self, void* event) {
    QGraphicsView_PaintEvent((QGraphicsView*)self, (QPaintEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QPaintEvent*) ```
void q_graphicsview_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnPaintEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QPaintEvent* event ```
void q_graphicsview_qbase_paint_event(void* self, void* event) {
    QGraphicsView_QBasePaintEvent((QGraphicsView*)self, (QPaintEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#resizeEvent)
///
/// ``` QGraphicsView* self, QResizeEvent* event ```
void q_graphicsview_resize_event(void* self, void* event) {
    QGraphicsView_ResizeEvent((QGraphicsView*)self, (QResizeEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QResizeEvent*) ```
void q_graphicsview_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnResizeEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QResizeEvent* event ```
void q_graphicsview_qbase_resize_event(void* self, void* event) {
    QGraphicsView_QBaseResizeEvent((QGraphicsView*)self, (QResizeEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#scrollContentsBy)
///
/// ``` QGraphicsView* self, int dx, int dy ```
void q_graphicsview_scroll_contents_by(void* self, int dx, int dy) {
    QGraphicsView_ScrollContentsBy((QGraphicsView*)self, dx, dy);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, int, int) ```
void q_graphicsview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QGraphicsView_OnScrollContentsBy((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, int dx, int dy ```
void q_graphicsview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QGraphicsView_QBaseScrollContentsBy((QGraphicsView*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#showEvent)
///
/// ``` QGraphicsView* self, QShowEvent* event ```
void q_graphicsview_show_event(void* self, void* event) {
    QGraphicsView_ShowEvent((QGraphicsView*)self, (QShowEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QShowEvent*) ```
void q_graphicsview_on_show_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnShowEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QShowEvent* event ```
void q_graphicsview_qbase_show_event(void* self, void* event) {
    QGraphicsView_QBaseShowEvent((QGraphicsView*)self, (QShowEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#inputMethodEvent)
///
/// ``` QGraphicsView* self, QInputMethodEvent* event ```
void q_graphicsview_input_method_event(void* self, void* event) {
    QGraphicsView_InputMethodEvent((QGraphicsView*)self, (QInputMethodEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QInputMethodEvent*) ```
void q_graphicsview_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnInputMethodEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QInputMethodEvent* event ```
void q_graphicsview_qbase_input_method_event(void* self, void* event) {
    QGraphicsView_QBaseInputMethodEvent((QGraphicsView*)self, (QInputMethodEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawBackground)
///
/// ``` QGraphicsView* self, QPainter* painter, QRectF* rect ```
void q_graphicsview_draw_background(void* self, void* painter, void* rect) {
    QGraphicsView_DrawBackground((QGraphicsView*)self, (QPainter*)painter, (QRectF*)rect);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QPainter*, QRectF*) ```
void q_graphicsview_on_draw_background(void* self, void (*slot)(void*, void*, void*)) {
    QGraphicsView_OnDrawBackground((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QPainter* painter, QRectF* rect ```
void q_graphicsview_qbase_draw_background(void* self, void* painter, void* rect) {
    QGraphicsView_QBaseDrawBackground((QGraphicsView*)self, (QPainter*)painter, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#drawForeground)
///
/// ``` QGraphicsView* self, QPainter* painter, QRectF* rect ```
void q_graphicsview_draw_foreground(void* self, void* painter, void* rect) {
    QGraphicsView_DrawForeground((QGraphicsView*)self, (QPainter*)painter, (QRectF*)rect);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QPainter*, QRectF*) ```
void q_graphicsview_on_draw_foreground(void* self, void (*slot)(void*, void*, void*)) {
    QGraphicsView_OnDrawForeground((QGraphicsView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsView* self, QPainter* painter, QRectF* rect ```
void q_graphicsview_qbase_draw_foreground(void* self, void* painter, void* rect) {
    QGraphicsView_QBaseDrawForeground((QGraphicsView*)self, (QPainter*)painter, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsview_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setRenderHint)
///
/// ``` QGraphicsView* self, enum QPainter__RenderHint hint, bool enabled ```
void q_graphicsview_set_render_hint2(void* self, int64_t hint, bool enabled) {
    QGraphicsView_SetRenderHint2((QGraphicsView*)self, hint, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setOptimizationFlag)
///
/// ``` QGraphicsView* self, enum QGraphicsView__OptimizationFlag flag, bool enabled ```
void q_graphicsview_set_optimization_flag2(void* self, int64_t flag, bool enabled) {
    QGraphicsView_SetOptimizationFlag2((QGraphicsView*)self, flag, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#setTransform)
///
/// ``` QGraphicsView* self, QTransform* matrix, bool combine ```
void q_graphicsview_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsView_SetTransform2((QGraphicsView*)self, (QTransform*)matrix, combine);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, QRectF* rect, int xmargin ```
void q_graphicsview_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsView_EnsureVisible22((QGraphicsView*)self, (QRectF*)rect, xmargin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicsview_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsView_EnsureVisible3((QGraphicsView*)self, (QRectF*)rect, xmargin, ymargin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, double x, double y, double w, double h, int xmargin ```
void q_graphicsview_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsView_EnsureVisible5((QGraphicsView*)self, x, y, w, h, xmargin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicsview_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsView_EnsureVisible6((QGraphicsView*)self, x, y, w, h, xmargin, ymargin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, QGraphicsItem* item, int xmargin ```
void q_graphicsview_ensure_visible23(void* self, void* item, int xmargin) {
    QGraphicsView_EnsureVisible23((QGraphicsView*)self, (QGraphicsItem*)item, xmargin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#ensureVisible)
///
/// ``` QGraphicsView* self, QGraphicsItem* item, int xmargin, int ymargin ```
void q_graphicsview_ensure_visible32(void* self, void* item, int xmargin, int ymargin) {
    QGraphicsView_EnsureVisible32((QGraphicsView*)self, (QGraphicsItem*)item, xmargin, ymargin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QGraphicsView* self, QRectF* rect, enum Qt__AspectRatioMode aspectRadioMode ```
void q_graphicsview_fit_in_view22(void* self, void* rect, int64_t aspectRadioMode) {
    QGraphicsView_FitInView22((QGraphicsView*)self, (QRectF*)rect, aspectRadioMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QGraphicsView* self, double x, double y, double w, double h, enum Qt__AspectRatioMode aspectRadioMode ```
void q_graphicsview_fit_in_view5(void* self, double x, double y, double w, double h, int64_t aspectRadioMode) {
    QGraphicsView_FitInView5((QGraphicsView*)self, x, y, w, h, aspectRadioMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#fitInView)
///
/// ``` QGraphicsView* self, QGraphicsItem* item, enum Qt__AspectRatioMode aspectRadioMode ```
void q_graphicsview_fit_in_view23(void* self, void* item, int64_t aspectRadioMode) {
    QGraphicsView_FitInView23((QGraphicsView*)self, (QGraphicsItem*)item, aspectRadioMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter, QRectF* target ```
void q_graphicsview_render2(void* self, void* painter, void* target) {
    QGraphicsView_Render2((QGraphicsView*)self, (QPainter*)painter, (QRectF*)target);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source ```
void q_graphicsview_render3(void* self, void* painter, void* target, void* source) {
    QGraphicsView_Render3((QGraphicsView*)self, (QPainter*)painter, (QRectF*)target, (QRect*)source);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source, enum Qt__AspectRatioMode aspectRatioMode ```
void q_graphicsview_render4(void* self, void* painter, void* target, void* source, int64_t aspectRatioMode) {
    QGraphicsView_Render4((QGraphicsView*)self, (QPainter*)painter, (QRectF*)target, (QRect*)source, aspectRatioMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, QRect* rect, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items22(void* self, void* rect, int64_t mode) {
    libqt_list _arr = QGraphicsView_Items22((QGraphicsView*)self, (QRect*)rect, mode);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, int x, int y, int w, int h, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items5(void* self, int x, int y, int w, int h, int64_t mode) {
    libqt_list _arr = QGraphicsView_Items5((QGraphicsView*)self, x, y, w, h, mode);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#items)
///
/// ``` QGraphicsView* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsview_items24(void* self, void* path, int64_t mode) {
    libqt_list _arr = QGraphicsView_Items24((QGraphicsView*)self, (QPainterPath*)path, mode);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// ``` QGraphicsView* self, QRectF* rect ```
void q_graphicsview_invalidate_scene1(void* self, void* rect) {
    QGraphicsView_InvalidateScene1((QGraphicsView*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsview.html#invalidateScene)
///
/// ``` QGraphicsView* self, QRectF* rect, int layers ```
void q_graphicsview_invalidate_scene2(void* self, void* rect, int64_t layers) {
    QGraphicsView_InvalidateScene2((QGraphicsView*)self, (QRectF*)rect, layers);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QGraphicsView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_graphicsview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QGraphicsView* self ```
QScrollBar* q_graphicsview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QGraphicsView* self, QScrollBar* scrollbar ```
void q_graphicsview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QGraphicsView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_graphicsview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QGraphicsView* self ```
QScrollBar* q_graphicsview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QGraphicsView* self, QScrollBar* scrollbar ```
void q_graphicsview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QGraphicsView* self, QWidget* widget ```
void q_graphicsview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QGraphicsView* self, QWidget* widget, int alignment ```
void q_graphicsview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QGraphicsView* self, int alignment ```
libqt_list /* of QWidget* */ q_graphicsview_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QGraphicsView* self, QWidget* widget ```
void q_graphicsview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QGraphicsView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_graphicsview_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QGraphicsView* self, int frameStyle ```
void q_graphicsview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QGraphicsView* self, enum QFrame__Shape frameShape ```
void q_graphicsview_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QGraphicsView* self, enum QFrame__Shadow frameShadow ```
void q_graphicsview_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QGraphicsView* self, int lineWidth ```
void q_graphicsview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QGraphicsView* self, int midLineWidth ```
void q_graphicsview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QGraphicsView* self, QRect* frameRect ```
void q_graphicsview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QGraphicsView* self ```
uintptr_t q_graphicsview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QGraphicsView* self ```
uintptr_t q_graphicsview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QGraphicsView* self ```
uintptr_t q_graphicsview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QGraphicsView* self ```
QStyle* q_graphicsview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QGraphicsView* self, QStyle* style ```
void q_graphicsview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QGraphicsView* self, enum Qt__WindowModality windowModality ```
void q_graphicsview_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QGraphicsView* self, QWidget* param1 ```
bool q_graphicsview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QGraphicsView* self, bool enabled ```
void q_graphicsview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QGraphicsView* self, bool disabled ```
void q_graphicsview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QGraphicsView* self, bool windowModified ```
void q_graphicsview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QGraphicsView* self ```
QPoint* q_graphicsview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QGraphicsView* self ```
QRegion* q_graphicsview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QGraphicsView* self, QSize* minimumSize ```
void q_graphicsview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QGraphicsView* self, int minw, int minh ```
void q_graphicsview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QGraphicsView* self, QSize* maximumSize ```
void q_graphicsview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QGraphicsView* self, int maxw, int maxh ```
void q_graphicsview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QGraphicsView* self, int minw ```
void q_graphicsview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QGraphicsView* self, int minh ```
void q_graphicsview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QGraphicsView* self, int maxw ```
void q_graphicsview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QGraphicsView* self, int maxh ```
void q_graphicsview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QGraphicsView* self, QSize* sizeIncrement ```
void q_graphicsview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QGraphicsView* self, int w, int h ```
void q_graphicsview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QGraphicsView* self, QSize* baseSize ```
void q_graphicsview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QGraphicsView* self, int basew, int baseh ```
void q_graphicsview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QGraphicsView* self, QSize* fixedSize ```
void q_graphicsview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QGraphicsView* self, int w, int h ```
void q_graphicsview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QGraphicsView* self, int w ```
void q_graphicsview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QGraphicsView* self, int h ```
void q_graphicsview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QGraphicsView* self, QPointF* param1 ```
QPointF* q_graphicsview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QGraphicsView* self, QPoint* param1 ```
QPoint* q_graphicsview_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QGraphicsView* self, QPointF* param1 ```
QPointF* q_graphicsview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QGraphicsView* self, QPoint* param1 ```
QPoint* q_graphicsview_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QGraphicsView* self, QPointF* param1 ```
QPointF* q_graphicsview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QGraphicsView* self, QPoint* param1 ```
QPoint* q_graphicsview_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QGraphicsView* self, QPointF* param1 ```
QPointF* q_graphicsview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QGraphicsView* self, QPoint* param1 ```
QPoint* q_graphicsview_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QGraphicsView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_graphicsview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QGraphicsView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_graphicsview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QGraphicsView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_graphicsview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QGraphicsView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_graphicsview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QGraphicsView* self ```
QPalette* q_graphicsview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QGraphicsView* self, QPalette* palette ```
void q_graphicsview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QGraphicsView* self, enum QPalette__ColorRole backgroundRole ```
void q_graphicsview_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QGraphicsView* self, enum QPalette__ColorRole foregroundRole ```
void q_graphicsview_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QGraphicsView* self ```
QFont* q_graphicsview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QGraphicsView* self, QFont* font ```
void q_graphicsview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QGraphicsView* self ```
QFontMetrics* q_graphicsview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QGraphicsView* self ```
QFontInfo* q_graphicsview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QGraphicsView* self ```
QCursor* q_graphicsview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QGraphicsView* self, QCursor* cursor ```
void q_graphicsview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QGraphicsView* self, bool enable ```
void q_graphicsview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QGraphicsView* self, bool enable ```
void q_graphicsview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QGraphicsView* self, QBitmap* mask ```
void q_graphicsview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QGraphicsView* self, QRegion* mask ```
void q_graphicsview_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QGraphicsView* self ```
QRegion* q_graphicsview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter ```
void q_graphicsview_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QGraphicsView* self ```
QPixmap* q_graphicsview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QGraphicsView* self ```
QGraphicsEffect* q_graphicsview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QGraphicsView* self, QGraphicsEffect* effect ```
void q_graphicsview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QGraphicsView* self, enum Qt__GestureType typeVal ```
void q_graphicsview_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QGraphicsView* self, enum Qt__GestureType typeVal ```
void q_graphicsview_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QGraphicsView* self, const char* windowTitle ```
void q_graphicsview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QGraphicsView* self, const char* styleSheet ```
void q_graphicsview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QGraphicsView* self, QIcon* icon ```
void q_graphicsview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QGraphicsView* self ```
QIcon* q_graphicsview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QGraphicsView* self, const char* windowIconText ```
void q_graphicsview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QGraphicsView* self, const char* windowRole ```
void q_graphicsview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QGraphicsView* self, const char* filePath ```
void q_graphicsview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QGraphicsView* self, double level ```
void q_graphicsview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QGraphicsView* self ```
double q_graphicsview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QGraphicsView* self, const char* toolTip ```
void q_graphicsview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QGraphicsView* self, int msec ```
void q_graphicsview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QGraphicsView* self, const char* statusTip ```
void q_graphicsview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QGraphicsView* self, const char* whatsThis ```
void q_graphicsview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QGraphicsView* self, const char* name ```
void q_graphicsview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QGraphicsView* self, const char* description ```
void q_graphicsview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QGraphicsView* self, enum Qt__LayoutDirection direction ```
void q_graphicsview_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QGraphicsView* self, QLocale* locale ```
void q_graphicsview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QGraphicsView* self ```
QLocale* q_graphicsview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QGraphicsView* self, enum Qt__FocusReason reason ```
void q_graphicsview_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QGraphicsView* self, enum Qt__FocusPolicy policy ```
void q_graphicsview_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_graphicsview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QGraphicsView* self, QWidget* focusProxy ```
void q_graphicsview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QGraphicsView* self, enum Qt__ContextMenuPolicy policy ```
void q_graphicsview_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QGraphicsView* self, QCursor* param1 ```
void q_graphicsview_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QGraphicsView* self, QKeySequence* key ```
int32_t q_graphicsview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QGraphicsView* self, int id ```
void q_graphicsview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QGraphicsView* self, int id ```
void q_graphicsview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QGraphicsView* self, int id ```
void q_graphicsview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_graphicsview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_graphicsview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QGraphicsView* self, bool enable ```
void q_graphicsview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QGraphicsView* self ```
QGraphicsProxyWidget* q_graphicsview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGraphicsView* self, int x, int y, int w, int h ```
void q_graphicsview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGraphicsView* self, QRect* param1 ```
void q_graphicsview_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QGraphicsView* self, QRegion* param1 ```
void q_graphicsview_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGraphicsView* self, int x, int y, int w, int h ```
void q_graphicsview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGraphicsView* self, QRect* param1 ```
void q_graphicsview_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QGraphicsView* self, QRegion* param1 ```
void q_graphicsview_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QGraphicsView* self, bool hidden ```
void q_graphicsview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QGraphicsView* self, QWidget* param1 ```
void q_graphicsview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QGraphicsView* self, int x, int y ```
void q_graphicsview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QGraphicsView* self, QPoint* param1 ```
void q_graphicsview_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QGraphicsView* self, int w, int h ```
void q_graphicsview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QGraphicsView* self, QSize* param1 ```
void q_graphicsview_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QGraphicsView* self, int x, int y, int w, int h ```
void q_graphicsview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QGraphicsView* self, QRect* geometry ```
void q_graphicsview_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QGraphicsView* self ```
char* q_graphicsview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QGraphicsView* self, const char* geometry ```
bool q_graphicsview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QGraphicsView* self, QWidget* param1 ```
bool q_graphicsview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QGraphicsView* self, int state ```
void q_graphicsview_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QGraphicsView* self, int state ```
void q_graphicsview_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QGraphicsView* self ```
QSizePolicy* q_graphicsview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QGraphicsView* self, QSizePolicy* sizePolicy ```
void q_graphicsview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QGraphicsView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_graphicsview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QGraphicsView* self ```
QRegion* q_graphicsview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QGraphicsView* self, int left, int top, int right, int bottom ```
void q_graphicsview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QGraphicsView* self, QMargins* margins ```
void q_graphicsview_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QGraphicsView* self ```
QMargins* q_graphicsview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QGraphicsView* self ```
QRect* q_graphicsview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QGraphicsView* self ```
QLayout* q_graphicsview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QGraphicsView* self, QLayout* layout ```
void q_graphicsview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QGraphicsView* self, QWidget* parent ```
void q_graphicsview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QGraphicsView* self, QWidget* parent, int f ```
void q_graphicsview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QGraphicsView* self, int dx, int dy ```
void q_graphicsview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QGraphicsView* self, int dx, int dy, QRect* param3 ```
void q_graphicsview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QGraphicsView* self, bool on ```
void q_graphicsview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGraphicsView* self, QAction* action ```
void q_graphicsview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QGraphicsView* self, QAction* actions[] ```
void q_graphicsview_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QGraphicsView* self, QAction* before, QAction* actions[] ```
void q_graphicsview_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QGraphicsView* self, QAction* before, QAction* action ```
void q_graphicsview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QGraphicsView* self, QAction* action ```
void q_graphicsview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QGraphicsView* self ```
libqt_list /* of QAction* */ q_graphicsview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGraphicsView* self, const char* text ```
QAction* q_graphicsview_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGraphicsView* self, QIcon* icon, const char* text ```
QAction* q_graphicsview_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGraphicsView* self, const char* text, QKeySequence* shortcut ```
QAction* q_graphicsview_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QGraphicsView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_graphicsview_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QGraphicsView* self ```
QWidget* q_graphicsview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QGraphicsView* self, int typeVal ```
void q_graphicsview_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QGraphicsView* self, enum Qt__WindowType param1 ```
void q_graphicsview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QGraphicsView* self, int typeVal ```
void q_graphicsview_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_graphicsview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QGraphicsView* self, int x, int y ```
QWidget* q_graphicsview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QGraphicsView* self, QPoint* p ```
QWidget* q_graphicsview_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QGraphicsView* self, enum Qt__WidgetAttribute param1 ```
void q_graphicsview_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QGraphicsView* self, enum Qt__WidgetAttribute param1 ```
bool q_graphicsview_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QGraphicsView* self, QWidget* child ```
bool q_graphicsview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QGraphicsView* self, bool enabled ```
void q_graphicsview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QGraphicsView* self ```
QBackingStore* q_graphicsview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QGraphicsView* self ```
QWindow* q_graphicsview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QGraphicsView* self ```
QScreen* q_graphicsview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QGraphicsView* self, QScreen* screen ```
void q_graphicsview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_graphicsview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QGraphicsView* self, const char* title ```
void q_graphicsview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QGraphicsView* self, void (*slot)(QWidget*, const char*) ```
void q_graphicsview_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QGraphicsView* self, QIcon* icon ```
void q_graphicsview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QGraphicsView* self, void (*slot)(QWidget*, QIcon*) ```
void q_graphicsview_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QGraphicsView* self, const char* iconText ```
void q_graphicsview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QGraphicsView* self, void (*slot)(QWidget*, const char*) ```
void q_graphicsview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QGraphicsView* self, QPoint* pos ```
void q_graphicsview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QGraphicsView* self, void (*slot)(QWidget*, QPoint*) ```
void q_graphicsview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QGraphicsView* self ```
int64_t q_graphicsview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QGraphicsView* self, int hints ```
void q_graphicsview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter, QPoint* targetOffset ```
void q_graphicsview_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_graphicsview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QGraphicsView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_graphicsview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QGraphicsView* self, QRect* rectangle ```
QPixmap* q_graphicsview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QGraphicsView* self, enum Qt__GestureType typeVal, int flags ```
void q_graphicsview_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QGraphicsView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_graphicsview_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QGraphicsView* self, int id, bool enable ```
void q_graphicsview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QGraphicsView* self, int id, bool enable ```
void q_graphicsview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QGraphicsView* self, enum Qt__WindowType param1, bool on ```
void q_graphicsview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QGraphicsView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_graphicsview_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_graphicsview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_graphicsview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsView* self ```
const char* q_graphicsview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsView* self, const char* name ```
void q_graphicsview_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsView* self, bool b ```
bool q_graphicsview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsView* self ```
QThread* q_graphicsview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsView* self, QThread* thread ```
void q_graphicsview_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsView* self, int interval ```
int32_t q_graphicsview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsView* self, int id ```
void q_graphicsview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsView* self ```
libqt_list /* of QObject* */ q_graphicsview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsView* self, QObject* filterObj ```
void q_graphicsview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsView* self, QObject* obj ```
void q_graphicsview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsview_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsView* self, const char* name, QVariant* value ```
bool q_graphicsview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsView* self, const char* name ```
QVariant* q_graphicsview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsView* self ```
const char** q_graphicsview_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsView* self ```
QBindingStorage* q_graphicsview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsView* self ```
QBindingStorage* q_graphicsview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsView* self, void (*slot)(QObject*) ```
void q_graphicsview_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsView* self ```
QObject* q_graphicsview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsView* self, const char* classname ```
bool q_graphicsview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsView* self ```
void q_graphicsview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsview_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsView* self, QObject* param1 ```
void q_graphicsview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsView* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsview_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QGraphicsView* self ```
double q_graphicsview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QGraphicsView* self ```
double q_graphicsview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_graphicsview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_minimum_size_hint(void* self) {
    return QGraphicsView_MinimumSizeHint((QGraphicsView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_qbase_minimum_size_hint(void* self) {
    return QGraphicsView_QBaseMinimumSizeHint((QGraphicsView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, QSize* (*slot)() ```
void q_graphicsview_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QGraphicsView_OnMinimumSizeHint((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QObject* param1, QEvent* param2 ```
bool q_graphicsview_event_filter(void* self, void* param1, void* param2) {
    return QGraphicsView_EventFilter((QGraphicsView*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QObject* param1, QEvent* param2 ```
bool q_graphicsview_qbase_event_filter(void* self, void* param1, void* param2) {
    return QGraphicsView_QBaseEventFilter((QGraphicsView*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, bool (*slot)(QGraphicsView*, QObject*, QEvent*) ```
void q_graphicsview_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsView_OnEventFilter((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_viewport_size_hint(void* self) {
    return QGraphicsView_ViewportSizeHint((QGraphicsView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
QSize* q_graphicsview_qbase_viewport_size_hint(void* self) {
    return QGraphicsView_QBaseViewportSizeHint((QGraphicsView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, QSize* (*slot)() ```
void q_graphicsview_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QGraphicsView_OnViewportSizeHint((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QEvent* param1 ```
void q_graphicsview_change_event(void* self, void* param1) {
    QGraphicsView_ChangeEvent((QGraphicsView*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QEvent* param1 ```
void q_graphicsview_qbase_change_event(void* self, void* param1) {
    QGraphicsView_QBaseChangeEvent((QGraphicsView*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QEvent*) ```
void q_graphicsview_on_change_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnChangeEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QStyleOptionFrame* option ```
void q_graphicsview_init_style_option(void* self, void* option) {
    QGraphicsView_InitStyleOption((QGraphicsView*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QStyleOptionFrame* option ```
void q_graphicsview_qbase_init_style_option(void* self, void* option) {
    QGraphicsView_QBaseInitStyleOption((QGraphicsView*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QStyleOptionFrame*) ```
void q_graphicsview_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnInitStyleOption((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_dev_type(void* self) {
    return QGraphicsView_DevType((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_qbase_dev_type(void* self) {
    return QGraphicsView_QBaseDevType((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, int32_t (*slot)() ```
void q_graphicsview_on_dev_type(void* self, int32_t (*slot)()) {
    QGraphicsView_OnDevType((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, bool visible ```
void q_graphicsview_set_visible(void* self, bool visible) {
    QGraphicsView_SetVisible((QGraphicsView*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, bool visible ```
void q_graphicsview_qbase_set_visible(void* self, bool visible) {
    QGraphicsView_QBaseSetVisible((QGraphicsView*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, bool) ```
void q_graphicsview_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QGraphicsView_OnSetVisible((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, int param1 ```
int32_t q_graphicsview_height_for_width(void* self, int param1) {
    return QGraphicsView_HeightForWidth((QGraphicsView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, int param1 ```
int32_t q_graphicsview_qbase_height_for_width(void* self, int param1) {
    return QGraphicsView_QBaseHeightForWidth((QGraphicsView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, int32_t (*slot)(QGraphicsView*, int) ```
void q_graphicsview_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QGraphicsView_OnHeightForWidth((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_has_height_for_width(void* self) {
    return QGraphicsView_HasHeightForWidth((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_qbase_has_height_for_width(void* self) {
    return QGraphicsView_QBaseHasHeightForWidth((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, bool (*slot)() ```
void q_graphicsview_on_has_height_for_width(void* self, bool (*slot)()) {
    QGraphicsView_OnHasHeightForWidth((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
QPaintEngine* q_graphicsview_paint_engine(void* self) {
    return QGraphicsView_PaintEngine((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
QPaintEngine* q_graphicsview_qbase_paint_engine(void* self) {
    return QGraphicsView_QBasePaintEngine((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, QPaintEngine* (*slot)() ```
void q_graphicsview_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QGraphicsView_OnPaintEngine((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QEnterEvent* event ```
void q_graphicsview_enter_event(void* self, void* event) {
    QGraphicsView_EnterEvent((QGraphicsView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QEnterEvent* event ```
void q_graphicsview_qbase_enter_event(void* self, void* event) {
    QGraphicsView_QBaseEnterEvent((QGraphicsView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QEnterEvent*) ```
void q_graphicsview_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnEnterEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QEvent* event ```
void q_graphicsview_leave_event(void* self, void* event) {
    QGraphicsView_LeaveEvent((QGraphicsView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QEvent* event ```
void q_graphicsview_qbase_leave_event(void* self, void* event) {
    QGraphicsView_QBaseLeaveEvent((QGraphicsView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QEvent*) ```
void q_graphicsview_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnLeaveEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QMoveEvent* event ```
void q_graphicsview_move_event(void* self, void* event) {
    QGraphicsView_MoveEvent((QGraphicsView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QMoveEvent* event ```
void q_graphicsview_qbase_move_event(void* self, void* event) {
    QGraphicsView_QBaseMoveEvent((QGraphicsView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QMoveEvent*) ```
void q_graphicsview_on_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnMoveEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QCloseEvent* event ```
void q_graphicsview_close_event(void* self, void* event) {
    QGraphicsView_CloseEvent((QGraphicsView*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QCloseEvent* event ```
void q_graphicsview_qbase_close_event(void* self, void* event) {
    QGraphicsView_QBaseCloseEvent((QGraphicsView*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QCloseEvent*) ```
void q_graphicsview_on_close_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnCloseEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QTabletEvent* event ```
void q_graphicsview_tablet_event(void* self, void* event) {
    QGraphicsView_TabletEvent((QGraphicsView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QTabletEvent* event ```
void q_graphicsview_qbase_tablet_event(void* self, void* event) {
    QGraphicsView_QBaseTabletEvent((QGraphicsView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QTabletEvent*) ```
void q_graphicsview_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnTabletEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QActionEvent* event ```
void q_graphicsview_action_event(void* self, void* event) {
    QGraphicsView_ActionEvent((QGraphicsView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QActionEvent* event ```
void q_graphicsview_qbase_action_event(void* self, void* event) {
    QGraphicsView_QBaseActionEvent((QGraphicsView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QActionEvent*) ```
void q_graphicsview_on_action_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnActionEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QHideEvent* event ```
void q_graphicsview_hide_event(void* self, void* event) {
    QGraphicsView_HideEvent((QGraphicsView*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QHideEvent* event ```
void q_graphicsview_qbase_hide_event(void* self, void* event) {
    QGraphicsView_QBaseHideEvent((QGraphicsView*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QHideEvent*) ```
void q_graphicsview_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnHideEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, const char* eventType, void* message, intptr_t* result ```
bool q_graphicsview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QGraphicsView_NativeEvent((QGraphicsView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, const char* eventType, void* message, intptr_t* result ```
bool q_graphicsview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QGraphicsView_QBaseNativeEvent((QGraphicsView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, bool (*slot)(QGraphicsView*, const char*, void*, intptr_t*) ```
void q_graphicsview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QGraphicsView_OnNativeEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_graphicsview_metric(void* self, int64_t param1) {
    return QGraphicsView_Metric((QGraphicsView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_graphicsview_qbase_metric(void* self, int64_t param1) {
    return QGraphicsView_QBaseMetric((QGraphicsView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, int32_t (*slot)(QGraphicsView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_graphicsview_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QGraphicsView_OnMetric((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QPainter* painter ```
void q_graphicsview_init_painter(void* self, void* painter) {
    QGraphicsView_InitPainter((QGraphicsView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QPainter* painter ```
void q_graphicsview_qbase_init_painter(void* self, void* painter) {
    QGraphicsView_QBaseInitPainter((QGraphicsView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QPainter*) ```
void q_graphicsview_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnInitPainter((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QPoint* offset ```
QPaintDevice* q_graphicsview_redirected(void* self, void* offset) {
    return QGraphicsView_Redirected((QGraphicsView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QPoint* offset ```
QPaintDevice* q_graphicsview_qbase_redirected(void* self, void* offset) {
    return QGraphicsView_QBaseRedirected((QGraphicsView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, QPaintDevice* (*slot)(QGraphicsView*, QPoint*) ```
void q_graphicsview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QGraphicsView_OnRedirected((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
QPainter* q_graphicsview_shared_painter(void* self) {
    return QGraphicsView_SharedPainter((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
QPainter* q_graphicsview_qbase_shared_painter(void* self) {
    return QGraphicsView_QBaseSharedPainter((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, QPainter* (*slot)() ```
void q_graphicsview_on_shared_painter(void* self, QPainter* (*slot)()) {
    QGraphicsView_OnSharedPainter((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QTimerEvent* event ```
void q_graphicsview_timer_event(void* self, void* event) {
    QGraphicsView_TimerEvent((QGraphicsView*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QTimerEvent* event ```
void q_graphicsview_qbase_timer_event(void* self, void* event) {
    QGraphicsView_QBaseTimerEvent((QGraphicsView*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QTimerEvent*) ```
void q_graphicsview_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnTimerEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QChildEvent* event ```
void q_graphicsview_child_event(void* self, void* event) {
    QGraphicsView_ChildEvent((QGraphicsView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QChildEvent* event ```
void q_graphicsview_qbase_child_event(void* self, void* event) {
    QGraphicsView_QBaseChildEvent((QGraphicsView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QChildEvent*) ```
void q_graphicsview_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnChildEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QEvent* event ```
void q_graphicsview_custom_event(void* self, void* event) {
    QGraphicsView_CustomEvent((QGraphicsView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QEvent* event ```
void q_graphicsview_qbase_custom_event(void* self, void* event) {
    QGraphicsView_QBaseCustomEvent((QGraphicsView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QEvent*) ```
void q_graphicsview_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnCustomEvent((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QMetaMethod* signal ```
void q_graphicsview_connect_notify(void* self, void* signal) {
    QGraphicsView_ConnectNotify((QGraphicsView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QMetaMethod* signal ```
void q_graphicsview_qbase_connect_notify(void* self, void* signal) {
    QGraphicsView_QBaseConnectNotify((QGraphicsView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QMetaMethod*) ```
void q_graphicsview_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnConnectNotify((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QMetaMethod* signal ```
void q_graphicsview_disconnect_notify(void* self, void* signal) {
    QGraphicsView_DisconnectNotify((QGraphicsView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QMetaMethod* signal ```
void q_graphicsview_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsView_QBaseDisconnectNotify((QGraphicsView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QMetaMethod*) ```
void q_graphicsview_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnDisconnectNotify((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, int left, int top, int right, int bottom ```
void q_graphicsview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QGraphicsView_SetViewportMargins((QGraphicsView*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, int left, int top, int right, int bottom ```
void q_graphicsview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QGraphicsView_QBaseSetViewportMargins((QGraphicsView*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, int, int, int, int) ```
void q_graphicsview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QGraphicsView_OnSetViewportMargins((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
QMargins* q_graphicsview_viewport_margins(void* self) {
    return QGraphicsView_ViewportMargins((QGraphicsView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
QMargins* q_graphicsview_qbase_viewport_margins(void* self) {
    return QGraphicsView_QBaseViewportMargins((QGraphicsView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, QMargins* (*slot)() ```
void q_graphicsview_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QGraphicsView_OnViewportMargins((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QPainter* param1 ```
void q_graphicsview_draw_frame(void* self, void* param1) {
    QGraphicsView_DrawFrame((QGraphicsView*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QPainter* param1 ```
void q_graphicsview_qbase_draw_frame(void* self, void* param1) {
    QGraphicsView_QBaseDrawFrame((QGraphicsView*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)(QGraphicsView*, QPainter*) ```
void q_graphicsview_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QGraphicsView_OnDrawFrame((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
void q_graphicsview_update_micro_focus(void* self) {
    QGraphicsView_UpdateMicroFocus((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
void q_graphicsview_qbase_update_micro_focus(void* self) {
    QGraphicsView_QBaseUpdateMicroFocus((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)() ```
void q_graphicsview_on_update_micro_focus(void* self, void (*slot)()) {
    QGraphicsView_OnUpdateMicroFocus((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
void q_graphicsview_create(void* self) {
    QGraphicsView_Create((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
void q_graphicsview_qbase_create(void* self) {
    QGraphicsView_QBaseCreate((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)() ```
void q_graphicsview_on_create(void* self, void (*slot)()) {
    QGraphicsView_OnCreate((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
void q_graphicsview_destroy(void* self) {
    QGraphicsView_Destroy((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
void q_graphicsview_qbase_destroy(void* self) {
    QGraphicsView_QBaseDestroy((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, void (*slot)() ```
void q_graphicsview_on_destroy(void* self, void (*slot)()) {
    QGraphicsView_OnDestroy((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_focus_next_child(void* self) {
    return QGraphicsView_FocusNextChild((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_qbase_focus_next_child(void* self) {
    return QGraphicsView_QBaseFocusNextChild((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, bool (*slot)() ```
void q_graphicsview_on_focus_next_child(void* self, bool (*slot)()) {
    QGraphicsView_OnFocusNextChild((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_focus_previous_child(void* self) {
    return QGraphicsView_FocusPreviousChild((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
bool q_graphicsview_qbase_focus_previous_child(void* self) {
    return QGraphicsView_QBaseFocusPreviousChild((QGraphicsView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, bool (*slot)() ```
void q_graphicsview_on_focus_previous_child(void* self, bool (*slot)()) {
    QGraphicsView_OnFocusPreviousChild((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
QObject* q_graphicsview_sender(void* self) {
    return QGraphicsView_Sender((QGraphicsView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
QObject* q_graphicsview_qbase_sender(void* self) {
    return QGraphicsView_QBaseSender((QGraphicsView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, QObject* (*slot)() ```
void q_graphicsview_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsView_OnSender((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_sender_signal_index(void* self) {
    return QGraphicsView_SenderSignalIndex((QGraphicsView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self ```
int32_t q_graphicsview_qbase_sender_signal_index(void* self) {
    return QGraphicsView_QBaseSenderSignalIndex((QGraphicsView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, int32_t (*slot)() ```
void q_graphicsview_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsView_OnSenderSignalIndex((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, const char* signal ```
int32_t q_graphicsview_receivers(void* self, const char* signal) {
    return QGraphicsView_Receivers((QGraphicsView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, const char* signal ```
int32_t q_graphicsview_qbase_receivers(void* self, const char* signal) {
    return QGraphicsView_QBaseReceivers((QGraphicsView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, int32_t (*slot)(QGraphicsView*, const char*) ```
void q_graphicsview_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsView_OnReceivers((QGraphicsView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsView* self, QMetaMethod* signal ```
bool q_graphicsview_is_signal_connected(void* self, void* signal) {
    return QGraphicsView_IsSignalConnected((QGraphicsView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsView* self, QMetaMethod* signal ```
bool q_graphicsview_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsView_QBaseIsSignalConnected((QGraphicsView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsView* self, bool (*slot)(QGraphicsView*, QMetaMethod*) ```
void q_graphicsview_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsView_OnIsSignalConnected((QGraphicsView*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsView* self ```
void q_graphicsview_delete(void* self) {
    QGraphicsView_Delete((QGraphicsView*)(self));
}
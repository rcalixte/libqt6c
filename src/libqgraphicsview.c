#include "libqabstractscrollarea.hpp"
#include "libqevent.hpp"
#include "libqbrush.hpp"
#include "libqcoreevent.hpp"
#include "libqframe.hpp"
#include "libqgraphicsitem.hpp"
#include "libqgraphicsscene.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpainterpath.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqgraphicsview.hpp"
#include "libqgraphicsview.h"

QGraphicsView* q_graphicsview_new(void* parent) {
    return QGraphicsView_new((QWidget*)parent);
}

QGraphicsView* q_graphicsview_new2() {
    return QGraphicsView_new2();
}

QGraphicsView* q_graphicsview_new3(void* scene) {
    return QGraphicsView_new3((QGraphicsScene*)scene);
}

QGraphicsView* q_graphicsview_new4(void* scene, void* parent) {
    return QGraphicsView_new4((QGraphicsScene*)scene, (QWidget*)parent);
}

const QMetaObject* q_graphicsview_meta_object(void* self) {
    return QGraphicsView_MetaObject((QGraphicsView*)self);
}

void q_graphicsview_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QGraphicsView_OnMetaObject((QGraphicsView*)self, (intptr_t)callback);
}

const QMetaObject* q_graphicsview_qbase_meta_object(void* self) {
    return QGraphicsView_QBaseMetaObject((QGraphicsView*)self);
}

void* q_graphicsview_metacast(void* self, const char* param1) {
    return QGraphicsView_Metacast((QGraphicsView*)self, param1);
}

void q_graphicsview_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QGraphicsView_OnMetacast((QGraphicsView*)self, (intptr_t)callback);
}

void* q_graphicsview_qbase_metacast(void* self, const char* param1) {
    return QGraphicsView_QBaseMetacast((QGraphicsView*)self, param1);
}

int32_t q_graphicsview_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsView_Metacall((QGraphicsView*)self, param1, param2, param3);
}

void q_graphicsview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGraphicsView_OnMetacall((QGraphicsView*)self, (intptr_t)callback);
}

int32_t q_graphicsview_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsView_QBaseMetacall((QGraphicsView*)self, param1, param2, param3);
}

const char* q_graphicsview_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_graphicsview_size_hint(void* self) {
    return QGraphicsView_SizeHint((QGraphicsView*)self);
}

void q_graphicsview_on_size_hint(void* self, QSize* (*callback)()) {
    QGraphicsView_OnSizeHint((QGraphicsView*)self, (intptr_t)callback);
}

QSize* q_graphicsview_qbase_size_hint(void* self) {
    return QGraphicsView_QBaseSizeHint((QGraphicsView*)self);
}

int32_t q_graphicsview_render_hints(void* self) {
    return QGraphicsView_RenderHints((QGraphicsView*)self);
}

void q_graphicsview_set_render_hint(void* self, int32_t hint) {
    QGraphicsView_SetRenderHint((QGraphicsView*)self, hint);
}

void q_graphicsview_set_render_hints(void* self, int32_t hints) {
    QGraphicsView_SetRenderHints((QGraphicsView*)self, hints);
}

int32_t q_graphicsview_alignment(void* self) {
    return QGraphicsView_Alignment((QGraphicsView*)self);
}

void q_graphicsview_set_alignment(void* self, int32_t alignment) {
    QGraphicsView_SetAlignment((QGraphicsView*)self, alignment);
}

int32_t q_graphicsview_transformation_anchor(void* self) {
    return QGraphicsView_TransformationAnchor((QGraphicsView*)self);
}

void q_graphicsview_set_transformation_anchor(void* self, int32_t anchor) {
    QGraphicsView_SetTransformationAnchor((QGraphicsView*)self, anchor);
}

int32_t q_graphicsview_resize_anchor(void* self) {
    return QGraphicsView_ResizeAnchor((QGraphicsView*)self);
}

void q_graphicsview_set_resize_anchor(void* self, int32_t anchor) {
    QGraphicsView_SetResizeAnchor((QGraphicsView*)self, anchor);
}

int32_t q_graphicsview_viewport_update_mode(void* self) {
    return QGraphicsView_ViewportUpdateMode((QGraphicsView*)self);
}

void q_graphicsview_set_viewport_update_mode(void* self, int32_t mode) {
    QGraphicsView_SetViewportUpdateMode((QGraphicsView*)self, mode);
}

int32_t q_graphicsview_optimization_flags(void* self) {
    return QGraphicsView_OptimizationFlags((QGraphicsView*)self);
}

void q_graphicsview_set_optimization_flag(void* self, int32_t flag) {
    QGraphicsView_SetOptimizationFlag((QGraphicsView*)self, flag);
}

void q_graphicsview_set_optimization_flags(void* self, int32_t flags) {
    QGraphicsView_SetOptimizationFlags((QGraphicsView*)self, flags);
}

int32_t q_graphicsview_drag_mode(void* self) {
    return QGraphicsView_DragMode((QGraphicsView*)self);
}

void q_graphicsview_set_drag_mode(void* self, int32_t mode) {
    QGraphicsView_SetDragMode((QGraphicsView*)self, mode);
}

int32_t q_graphicsview_rubber_band_selection_mode(void* self) {
    return QGraphicsView_RubberBandSelectionMode((QGraphicsView*)self);
}

void q_graphicsview_set_rubber_band_selection_mode(void* self, int32_t mode) {
    QGraphicsView_SetRubberBandSelectionMode((QGraphicsView*)self, mode);
}

QRect* q_graphicsview_rubber_band_rect(void* self) {
    return QGraphicsView_RubberBandRect((QGraphicsView*)self);
}

int32_t q_graphicsview_cache_mode(void* self) {
    return QGraphicsView_CacheMode((QGraphicsView*)self);
}

void q_graphicsview_set_cache_mode(void* self, int32_t mode) {
    QGraphicsView_SetCacheMode((QGraphicsView*)self, mode);
}

void q_graphicsview_reset_cached_content(void* self) {
    QGraphicsView_ResetCachedContent((QGraphicsView*)self);
}

bool q_graphicsview_is_interactive(void* self) {
    return QGraphicsView_IsInteractive((QGraphicsView*)self);
}

void q_graphicsview_set_interactive(void* self, bool allowed) {
    QGraphicsView_SetInteractive((QGraphicsView*)self, allowed);
}

QGraphicsScene* q_graphicsview_scene(void* self) {
    return QGraphicsView_Scene((QGraphicsView*)self);
}

void q_graphicsview_set_scene(void* self, void* scene) {
    QGraphicsView_SetScene((QGraphicsView*)self, (QGraphicsScene*)scene);
}

QRectF* q_graphicsview_scene_rect(void* self) {
    return QGraphicsView_SceneRect((QGraphicsView*)self);
}

void q_graphicsview_set_scene_rect(void* self, void* rect) {
    QGraphicsView_SetSceneRect((QGraphicsView*)self, (QRectF*)rect);
}

void q_graphicsview_set_scene_rect2(void* self, double x, double y, double w, double h) {
    QGraphicsView_SetSceneRect2((QGraphicsView*)self, x, y, w, h);
}

QTransform* q_graphicsview_transform(void* self) {
    return QGraphicsView_Transform((QGraphicsView*)self);
}

QTransform* q_graphicsview_viewport_transform(void* self) {
    return QGraphicsView_ViewportTransform((QGraphicsView*)self);
}

bool q_graphicsview_is_transformed(void* self) {
    return QGraphicsView_IsTransformed((QGraphicsView*)self);
}

void q_graphicsview_set_transform(void* self, void* matrix) {
    QGraphicsView_SetTransform((QGraphicsView*)self, (QTransform*)matrix);
}

void q_graphicsview_reset_transform(void* self) {
    QGraphicsView_ResetTransform((QGraphicsView*)self);
}

void q_graphicsview_rotate(void* self, double angle) {
    QGraphicsView_Rotate((QGraphicsView*)self, angle);
}

void q_graphicsview_scale(void* self, double sx, double sy) {
    QGraphicsView_Scale((QGraphicsView*)self, sx, sy);
}

void q_graphicsview_shear(void* self, double sh, double sv) {
    QGraphicsView_Shear((QGraphicsView*)self, sh, sv);
}

void q_graphicsview_translate(void* self, double dx, double dy) {
    QGraphicsView_Translate((QGraphicsView*)self, dx, dy);
}

void q_graphicsview_center_on(void* self, void* pos) {
    QGraphicsView_CenterOn((QGraphicsView*)self, (QPointF*)pos);
}

void q_graphicsview_center_on2(void* self, double x, double y) {
    QGraphicsView_CenterOn2((QGraphicsView*)self, x, y);
}

void q_graphicsview_center_on3(void* self, void* item) {
    QGraphicsView_CenterOn3((QGraphicsView*)self, (QGraphicsItem*)item);
}

void q_graphicsview_ensure_visible(void* self, void* rect) {
    QGraphicsView_EnsureVisible((QGraphicsView*)self, (QRectF*)rect);
}

void q_graphicsview_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsView_EnsureVisible2((QGraphicsView*)self, x, y, w, h);
}

void q_graphicsview_ensure_visible3(void* self, void* item) {
    QGraphicsView_EnsureVisible3((QGraphicsView*)self, (QGraphicsItem*)item);
}

void q_graphicsview_fit_in_view(void* self, void* rect) {
    QGraphicsView_FitInView((QGraphicsView*)self, (QRectF*)rect);
}

void q_graphicsview_fit_in_view2(void* self, double x, double y, double w, double h) {
    QGraphicsView_FitInView2((QGraphicsView*)self, x, y, w, h);
}

void q_graphicsview_fit_in_view3(void* self, void* item) {
    QGraphicsView_FitInView3((QGraphicsView*)self, (QGraphicsItem*)item);
}

void q_graphicsview_render(void* self, void* painter) {
    QGraphicsView_Render((QGraphicsView*)self, (QPainter*)painter);
}

libqt_list /* of QGraphicsItem* */ q_graphicsview_items(void* self) {
    libqt_list _arr = QGraphicsView_Items((QGraphicsView*)self);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsview_items2(void* self, void* pos) {
    libqt_list _arr = QGraphicsView_Items2((QGraphicsView*)self, (QPoint*)pos);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsview_items3(void* self, int x, int y) {
    libqt_list _arr = QGraphicsView_Items3((QGraphicsView*)self, x, y);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsview_items4(void* self, void* rect) {
    libqt_list _arr = QGraphicsView_Items4((QGraphicsView*)self, (QRect*)rect);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsview_items5(void* self, int x, int y, int w, int h) {
    libqt_list _arr = QGraphicsView_Items5((QGraphicsView*)self, x, y, w, h);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsview_items7(void* self, void* path) {
    libqt_list _arr = QGraphicsView_Items7((QGraphicsView*)self, (QPainterPath*)path);
    return _arr;
}

QGraphicsItem* q_graphicsview_item_at(void* self, void* pos) {
    return QGraphicsView_ItemAt((QGraphicsView*)self, (QPoint*)pos);
}

QGraphicsItem* q_graphicsview_item_at2(void* self, int x, int y) {
    return QGraphicsView_ItemAt2((QGraphicsView*)self, x, y);
}

QPointF* q_graphicsview_map_to_scene(void* self, void* point) {
    return QGraphicsView_MapToScene((QGraphicsView*)self, (QPoint*)point);
}

QPainterPath* q_graphicsview_map_to_scene4(void* self, void* path) {
    return QGraphicsView_MapToScene4((QGraphicsView*)self, (QPainterPath*)path);
}

QPoint* q_graphicsview_map_from_scene(void* self, void* point) {
    return QGraphicsView_MapFromScene((QGraphicsView*)self, (QPointF*)point);
}

QPainterPath* q_graphicsview_map_from_scene4(void* self, void* path) {
    return QGraphicsView_MapFromScene4((QGraphicsView*)self, (QPainterPath*)path);
}

QPointF* q_graphicsview_map_to_scene5(void* self, int x, int y) {
    return QGraphicsView_MapToScene5((QGraphicsView*)self, x, y);
}

QPoint* q_graphicsview_map_from_scene5(void* self, double x, double y) {
    return QGraphicsView_MapFromScene5((QGraphicsView*)self, x, y);
}

QVariant* q_graphicsview_input_method_query(void* self, int32_t query) {
    return QGraphicsView_InputMethodQuery((QGraphicsView*)self, query);
}

void q_graphicsview_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QGraphicsView_OnInputMethodQuery((QGraphicsView*)self, (intptr_t)callback);
}

QVariant* q_graphicsview_qbase_input_method_query(void* self, int32_t query) {
    return QGraphicsView_QBaseInputMethodQuery((QGraphicsView*)self, query);
}

QBrush* q_graphicsview_background_brush(void* self) {
    return QGraphicsView_BackgroundBrush((QGraphicsView*)self);
}

void q_graphicsview_set_background_brush(void* self, void* brush) {
    QGraphicsView_SetBackgroundBrush((QGraphicsView*)self, (QBrush*)brush);
}

QBrush* q_graphicsview_foreground_brush(void* self) {
    return QGraphicsView_ForegroundBrush((QGraphicsView*)self);
}

void q_graphicsview_set_foreground_brush(void* self, void* brush) {
    QGraphicsView_SetForegroundBrush((QGraphicsView*)self, (QBrush*)brush);
}

void q_graphicsview_update_scene(void* self, libqt_list /* of QRectF* */ rects) {
    QGraphicsView_UpdateScene((QGraphicsView*)self, rects);
}

void q_graphicsview_invalidate_scene(void* self) {
    QGraphicsView_InvalidateScene((QGraphicsView*)self);
}

void q_graphicsview_update_scene_rect(void* self, void* rect) {
    QGraphicsView_UpdateSceneRect((QGraphicsView*)self, (QRectF*)rect);
}

void q_graphicsview_rubber_band_changed(void* self, void* viewportRect, void* fromScenePoint, void* toScenePoint) {
    QGraphicsView_RubberBandChanged((QGraphicsView*)self, (QRect*)viewportRect, (QPointF*)fromScenePoint, (QPointF*)toScenePoint);
}

void q_graphicsview_on_rubber_band_changed(void* self, void (*callback)(void*, void*, void*, void*)) {
    QGraphicsView_Connect_RubberBandChanged((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_setup_viewport(void* self, void* widget) {
    QGraphicsView_SetupViewport((QGraphicsView*)self, (QWidget*)widget);
}

void q_graphicsview_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnSetupViewport((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_setup_viewport(void* self, void* widget) {
    QGraphicsView_QBaseSetupViewport((QGraphicsView*)self, (QWidget*)widget);
}

bool q_graphicsview_event(void* self, void* event) {
    return QGraphicsView_Event((QGraphicsView*)self, (QEvent*)event);
}

void q_graphicsview_on_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsView_OnEvent((QGraphicsView*)self, (intptr_t)callback);
}

bool q_graphicsview_qbase_event(void* self, void* event) {
    return QGraphicsView_QBaseEvent((QGraphicsView*)self, (QEvent*)event);
}

bool q_graphicsview_viewport_event(void* self, void* event) {
    return QGraphicsView_ViewportEvent((QGraphicsView*)self, (QEvent*)event);
}

void q_graphicsview_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsView_OnViewportEvent((QGraphicsView*)self, (intptr_t)callback);
}

bool q_graphicsview_qbase_viewport_event(void* self, void* event) {
    return QGraphicsView_QBaseViewportEvent((QGraphicsView*)self, (QEvent*)event);
}

void q_graphicsview_context_menu_event(void* self, void* event) {
    QGraphicsView_ContextMenuEvent((QGraphicsView*)self, (QContextMenuEvent*)event);
}

void q_graphicsview_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnContextMenuEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_context_menu_event(void* self, void* event) {
    QGraphicsView_QBaseContextMenuEvent((QGraphicsView*)self, (QContextMenuEvent*)event);
}

void q_graphicsview_drag_enter_event(void* self, void* event) {
    QGraphicsView_DragEnterEvent((QGraphicsView*)self, (QDragEnterEvent*)event);
}

void q_graphicsview_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnDragEnterEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_drag_enter_event(void* self, void* event) {
    QGraphicsView_QBaseDragEnterEvent((QGraphicsView*)self, (QDragEnterEvent*)event);
}

void q_graphicsview_drag_leave_event(void* self, void* event) {
    QGraphicsView_DragLeaveEvent((QGraphicsView*)self, (QDragLeaveEvent*)event);
}

void q_graphicsview_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnDragLeaveEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_drag_leave_event(void* self, void* event) {
    QGraphicsView_QBaseDragLeaveEvent((QGraphicsView*)self, (QDragLeaveEvent*)event);
}

void q_graphicsview_drag_move_event(void* self, void* event) {
    QGraphicsView_DragMoveEvent((QGraphicsView*)self, (QDragMoveEvent*)event);
}

void q_graphicsview_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnDragMoveEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_drag_move_event(void* self, void* event) {
    QGraphicsView_QBaseDragMoveEvent((QGraphicsView*)self, (QDragMoveEvent*)event);
}

void q_graphicsview_drop_event(void* self, void* event) {
    QGraphicsView_DropEvent((QGraphicsView*)self, (QDropEvent*)event);
}

void q_graphicsview_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnDropEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_drop_event(void* self, void* event) {
    QGraphicsView_QBaseDropEvent((QGraphicsView*)self, (QDropEvent*)event);
}

void q_graphicsview_focus_in_event(void* self, void* event) {
    QGraphicsView_FocusInEvent((QGraphicsView*)self, (QFocusEvent*)event);
}

void q_graphicsview_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnFocusInEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_focus_in_event(void* self, void* event) {
    QGraphicsView_QBaseFocusInEvent((QGraphicsView*)self, (QFocusEvent*)event);
}

bool q_graphicsview_focus_next_prev_child(void* self, bool next) {
    return QGraphicsView_FocusNextPrevChild((QGraphicsView*)self, next);
}

void q_graphicsview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QGraphicsView_OnFocusNextPrevChild((QGraphicsView*)self, (intptr_t)callback);
}

bool q_graphicsview_qbase_focus_next_prev_child(void* self, bool next) {
    return QGraphicsView_QBaseFocusNextPrevChild((QGraphicsView*)self, next);
}

void q_graphicsview_focus_out_event(void* self, void* event) {
    QGraphicsView_FocusOutEvent((QGraphicsView*)self, (QFocusEvent*)event);
}

void q_graphicsview_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnFocusOutEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_focus_out_event(void* self, void* event) {
    QGraphicsView_QBaseFocusOutEvent((QGraphicsView*)self, (QFocusEvent*)event);
}

void q_graphicsview_key_press_event(void* self, void* event) {
    QGraphicsView_KeyPressEvent((QGraphicsView*)self, (QKeyEvent*)event);
}

void q_graphicsview_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnKeyPressEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_key_press_event(void* self, void* event) {
    QGraphicsView_QBaseKeyPressEvent((QGraphicsView*)self, (QKeyEvent*)event);
}

void q_graphicsview_key_release_event(void* self, void* event) {
    QGraphicsView_KeyReleaseEvent((QGraphicsView*)self, (QKeyEvent*)event);
}

void q_graphicsview_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnKeyReleaseEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_key_release_event(void* self, void* event) {
    QGraphicsView_QBaseKeyReleaseEvent((QGraphicsView*)self, (QKeyEvent*)event);
}

void q_graphicsview_mouse_double_click_event(void* self, void* event) {
    QGraphicsView_MouseDoubleClickEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

void q_graphicsview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnMouseDoubleClickEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_mouse_double_click_event(void* self, void* event) {
    QGraphicsView_QBaseMouseDoubleClickEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

void q_graphicsview_mouse_press_event(void* self, void* event) {
    QGraphicsView_MousePressEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

void q_graphicsview_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnMousePressEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_mouse_press_event(void* self, void* event) {
    QGraphicsView_QBaseMousePressEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

void q_graphicsview_mouse_move_event(void* self, void* event) {
    QGraphicsView_MouseMoveEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

void q_graphicsview_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnMouseMoveEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_mouse_move_event(void* self, void* event) {
    QGraphicsView_QBaseMouseMoveEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

void q_graphicsview_mouse_release_event(void* self, void* event) {
    QGraphicsView_MouseReleaseEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

void q_graphicsview_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnMouseReleaseEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_mouse_release_event(void* self, void* event) {
    QGraphicsView_QBaseMouseReleaseEvent((QGraphicsView*)self, (QMouseEvent*)event);
}

void q_graphicsview_wheel_event(void* self, void* event) {
    QGraphicsView_WheelEvent((QGraphicsView*)self, (QWheelEvent*)event);
}

void q_graphicsview_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnWheelEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_wheel_event(void* self, void* event) {
    QGraphicsView_QBaseWheelEvent((QGraphicsView*)self, (QWheelEvent*)event);
}

void q_graphicsview_paint_event(void* self, void* event) {
    QGraphicsView_PaintEvent((QGraphicsView*)self, (QPaintEvent*)event);
}

void q_graphicsview_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnPaintEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_paint_event(void* self, void* event) {
    QGraphicsView_QBasePaintEvent((QGraphicsView*)self, (QPaintEvent*)event);
}

void q_graphicsview_resize_event(void* self, void* event) {
    QGraphicsView_ResizeEvent((QGraphicsView*)self, (QResizeEvent*)event);
}

void q_graphicsview_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnResizeEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_resize_event(void* self, void* event) {
    QGraphicsView_QBaseResizeEvent((QGraphicsView*)self, (QResizeEvent*)event);
}

void q_graphicsview_scroll_contents_by(void* self, int dx, int dy) {
    QGraphicsView_ScrollContentsBy((QGraphicsView*)self, dx, dy);
}

void q_graphicsview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    QGraphicsView_OnScrollContentsBy((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QGraphicsView_QBaseScrollContentsBy((QGraphicsView*)self, dx, dy);
}

void q_graphicsview_show_event(void* self, void* event) {
    QGraphicsView_ShowEvent((QGraphicsView*)self, (QShowEvent*)event);
}

void q_graphicsview_on_show_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnShowEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_show_event(void* self, void* event) {
    QGraphicsView_QBaseShowEvent((QGraphicsView*)self, (QShowEvent*)event);
}

void q_graphicsview_input_method_event(void* self, void* event) {
    QGraphicsView_InputMethodEvent((QGraphicsView*)self, (QInputMethodEvent*)event);
}

void q_graphicsview_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnInputMethodEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_input_method_event(void* self, void* event) {
    QGraphicsView_QBaseInputMethodEvent((QGraphicsView*)self, (QInputMethodEvent*)event);
}

void q_graphicsview_draw_background(void* self, void* painter, void* rect) {
    QGraphicsView_DrawBackground((QGraphicsView*)self, (QPainter*)painter, (QRectF*)rect);
}

void q_graphicsview_on_draw_background(void* self, void (*callback)(void*, void*, void*)) {
    QGraphicsView_OnDrawBackground((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_draw_background(void* self, void* painter, void* rect) {
    QGraphicsView_QBaseDrawBackground((QGraphicsView*)self, (QPainter*)painter, (QRectF*)rect);
}

void q_graphicsview_draw_foreground(void* self, void* painter, void* rect) {
    QGraphicsView_DrawForeground((QGraphicsView*)self, (QPainter*)painter, (QRectF*)rect);
}

void q_graphicsview_on_draw_foreground(void* self, void (*callback)(void*, void*, void*)) {
    QGraphicsView_OnDrawForeground((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_qbase_draw_foreground(void* self, void* painter, void* rect) {
    QGraphicsView_QBaseDrawForeground((QGraphicsView*)self, (QPainter*)painter, (QRectF*)rect);
}

const char* q_graphicsview_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsview_set_render_hint2(void* self, int32_t hint, bool enabled) {
    QGraphicsView_SetRenderHint2((QGraphicsView*)self, hint, enabled);
}

void q_graphicsview_set_optimization_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsView_SetOptimizationFlag2((QGraphicsView*)self, flag, enabled);
}

void q_graphicsview_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsView_SetTransform2((QGraphicsView*)self, (QTransform*)matrix, combine);
}

void q_graphicsview_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsView_EnsureVisible22((QGraphicsView*)self, (QRectF*)rect, xmargin);
}

void q_graphicsview_ensure_visible32(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsView_EnsureVisible32((QGraphicsView*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicsview_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsView_EnsureVisible5((QGraphicsView*)self, x, y, w, h, xmargin);
}

void q_graphicsview_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsView_EnsureVisible6((QGraphicsView*)self, x, y, w, h, xmargin, ymargin);
}

void q_graphicsview_ensure_visible23(void* self, void* item, int xmargin) {
    QGraphicsView_EnsureVisible23((QGraphicsView*)self, (QGraphicsItem*)item, xmargin);
}

void q_graphicsview_ensure_visible33(void* self, void* item, int xmargin, int ymargin) {
    QGraphicsView_EnsureVisible33((QGraphicsView*)self, (QGraphicsItem*)item, xmargin, ymargin);
}

void q_graphicsview_fit_in_view22(void* self, void* rect, int32_t aspectRadioMode) {
    QGraphicsView_FitInView22((QGraphicsView*)self, (QRectF*)rect, aspectRadioMode);
}

void q_graphicsview_fit_in_view5(void* self, double x, double y, double w, double h, int32_t aspectRadioMode) {
    QGraphicsView_FitInView5((QGraphicsView*)self, x, y, w, h, aspectRadioMode);
}

void q_graphicsview_fit_in_view23(void* self, void* item, int32_t aspectRadioMode) {
    QGraphicsView_FitInView23((QGraphicsView*)self, (QGraphicsItem*)item, aspectRadioMode);
}

void q_graphicsview_render2(void* self, void* painter, void* target) {
    QGraphicsView_Render2((QGraphicsView*)self, (QPainter*)painter, (QRectF*)target);
}

void q_graphicsview_render3(void* self, void* painter, void* target, void* source) {
    QGraphicsView_Render3((QGraphicsView*)self, (QPainter*)painter, (QRectF*)target, (QRect*)source);
}

void q_graphicsview_render4(void* self, void* painter, void* target, void* source, int32_t aspectRatioMode) {
    QGraphicsView_Render4((QGraphicsView*)self, (QPainter*)painter, (QRectF*)target, (QRect*)source, aspectRatioMode);
}

libqt_list /* of QGraphicsItem* */ q_graphicsview_items22(void* self, void* rect, int32_t mode) {
    libqt_list _arr = QGraphicsView_Items22((QGraphicsView*)self, (QRect*)rect, mode);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsview_items52(void* self, int x, int y, int w, int h, int32_t mode) {
    libqt_list _arr = QGraphicsView_Items52((QGraphicsView*)self, x, y, w, h, mode);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsview_items24(void* self, void* path, int32_t mode) {
    libqt_list _arr = QGraphicsView_Items24((QGraphicsView*)self, (QPainterPath*)path, mode);
    return _arr;
}

void q_graphicsview_invalidate_scene1(void* self, void* rect) {
    QGraphicsView_InvalidateScene1((QGraphicsView*)self, (QRectF*)rect);
}

void q_graphicsview_invalidate_scene2(void* self, void* rect, int32_t layers) {
    QGraphicsView_InvalidateScene2((QGraphicsView*)self, (QRectF*)rect, layers);
}

int32_t q_graphicsview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_graphicsview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_graphicsview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_graphicsview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t q_graphicsview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_graphicsview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_graphicsview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_graphicsview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_graphicsview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_graphicsview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_graphicsview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_graphicsview_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_graphicsview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_graphicsview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_graphicsview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t q_graphicsview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_graphicsview_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_graphicsview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_graphicsview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_graphicsview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t q_graphicsview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_graphicsview_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t q_graphicsview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_graphicsview_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_graphicsview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_graphicsview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_graphicsview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_graphicsview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_graphicsview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_graphicsview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_graphicsview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_graphicsview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_graphicsview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_graphicsview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_graphicsview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_graphicsview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_graphicsview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_graphicsview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_graphicsview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_graphicsview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_graphicsview_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_graphicsview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_graphicsview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_graphicsview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_graphicsview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_graphicsview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_graphicsview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_graphicsview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_graphicsview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_graphicsview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_graphicsview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_graphicsview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_graphicsview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_graphicsview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_graphicsview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_graphicsview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_graphicsview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_graphicsview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_graphicsview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_graphicsview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_graphicsview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_graphicsview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_graphicsview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_graphicsview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_graphicsview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_graphicsview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_graphicsview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_graphicsview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_graphicsview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_graphicsview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_graphicsview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_graphicsview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_graphicsview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_graphicsview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_graphicsview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_graphicsview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_graphicsview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_graphicsview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_graphicsview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_graphicsview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_graphicsview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_graphicsview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_graphicsview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_graphicsview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_graphicsview_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_graphicsview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_graphicsview_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_graphicsview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_graphicsview_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_graphicsview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_graphicsview_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_graphicsview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_graphicsview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_graphicsview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_graphicsview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_graphicsview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_graphicsview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_graphicsview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_graphicsview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_graphicsview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_graphicsview_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_graphicsview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_graphicsview_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_graphicsview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_graphicsview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_graphicsview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_graphicsview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_graphicsview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_graphicsview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_graphicsview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_graphicsview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_graphicsview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_graphicsview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_graphicsview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_graphicsview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_graphicsview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_graphicsview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_graphicsview_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_graphicsview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_graphicsview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

QPixmap* q_graphicsview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_graphicsview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_graphicsview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_graphicsview_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_graphicsview_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_graphicsview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_graphicsview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_graphicsview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_graphicsview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_graphicsview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_graphicsview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_graphicsview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_graphicsview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_graphicsview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_graphicsview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_graphicsview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_graphicsview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_graphicsview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_graphicsview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_graphicsview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_graphicsview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_graphicsview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_graphicsview_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_graphicsview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_graphicsview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_graphicsview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_graphicsview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_graphicsview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_graphicsview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_graphicsview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_graphicsview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_graphicsview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_graphicsview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_graphicsview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_graphicsview_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_graphicsview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_graphicsview_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_graphicsview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_graphicsview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_graphicsview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_graphicsview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_graphicsview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_graphicsview_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_graphicsview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_graphicsview_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_graphicsview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_graphicsview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_graphicsview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_graphicsview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_graphicsview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_graphicsview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_graphicsview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_graphicsview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_graphicsview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_graphicsview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_graphicsview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_graphicsview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_graphicsview_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_graphicsview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_graphicsview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_graphicsview_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_graphicsview_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_graphicsview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_graphicsview_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_graphicsview_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_graphicsview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_graphicsview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_graphicsview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_graphicsview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_graphicsview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_graphicsview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_graphicsview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_graphicsview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_graphicsview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_graphicsview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_graphicsview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_graphicsview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_graphicsview_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_graphicsview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_graphicsview_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_graphicsview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_graphicsview_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_graphicsview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_graphicsview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_graphicsview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_graphicsview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_graphicsview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_graphicsview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_graphicsview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_graphicsview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_graphicsview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_graphicsview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_graphicsview_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_graphicsview_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_graphicsview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_graphicsview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_graphicsview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_graphicsview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_graphicsview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_graphicsview_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_graphicsview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_graphicsview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_graphicsview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_graphicsview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_graphicsview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_graphicsview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_graphicsview_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_graphicsview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_graphicsview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_graphicsview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_graphicsview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_graphicsview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_graphicsview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_graphicsview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_graphicsview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_graphicsview_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_graphicsview_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_graphicsview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_graphicsview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_graphicsview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_graphicsview_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_graphicsview_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_graphicsview_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_graphicsview_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_graphicsview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_graphicsview_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_graphicsview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_graphicsview_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_graphicsview_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_graphicsview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_graphicsview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_graphicsview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_graphicsview_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_graphicsview_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_graphicsview_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_graphicsview_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_graphicsview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_graphicsview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_graphicsview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_graphicsview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_graphicsview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_graphicsview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_graphicsview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_graphicsview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_graphicsview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_graphicsview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_graphicsview_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_graphicsview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_graphicsview_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_graphicsview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_graphicsview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_graphicsview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_graphicsview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_graphicsview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_graphicsview_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_graphicsview_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_graphicsview_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_graphicsview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_graphicsview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_graphicsview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_graphicsview_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_graphicsview_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_graphicsview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_graphicsview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_graphicsview_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_graphicsview_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_graphicsview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_graphicsview_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_graphicsview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsview_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicsview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicsview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicsview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicsview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicsview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicsview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicsview_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicsview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_graphicsview_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_graphicsview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicsview_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicsview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicsview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicsview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicsview_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_graphicsview_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicsview_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicsview_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_graphicsview_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicsview_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_graphicsview_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_graphicsview_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_graphicsview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicsview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicsview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicsview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicsview_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_graphicsview_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_graphicsview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicsview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicsview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicsview_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_graphicsview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicsview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicsview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_graphicsview_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_graphicsview_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_graphicsview_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_graphicsview_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_graphicsview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_graphicsview_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_graphicsview_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_graphicsview_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_graphicsview_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_graphicsview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicsview_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_graphicsview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_graphicsview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_graphicsview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_graphicsview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_graphicsview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_graphicsview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_graphicsview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_graphicsview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_graphicsview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_graphicsview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_graphicsview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_graphicsview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_graphicsview_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* q_graphicsview_minimum_size_hint(void* self) {
    return QGraphicsView_MinimumSizeHint((QGraphicsView*)self);
}

QSize* q_graphicsview_qbase_minimum_size_hint(void* self) {
    return QGraphicsView_QBaseMinimumSizeHint((QGraphicsView*)self);
}

void q_graphicsview_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QGraphicsView_OnMinimumSizeHint((QGraphicsView*)self, (intptr_t)callback);
}

bool q_graphicsview_event_filter(void* self, void* param1, void* param2) {
    return QGraphicsView_EventFilter((QGraphicsView*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_graphicsview_qbase_event_filter(void* self, void* param1, void* param2) {
    return QGraphicsView_QBaseEventFilter((QGraphicsView*)self, (QObject*)param1, (QEvent*)param2);
}

void q_graphicsview_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsView_OnEventFilter((QGraphicsView*)self, (intptr_t)callback);
}

QSize* q_graphicsview_viewport_size_hint(void* self) {
    return QGraphicsView_ViewportSizeHint((QGraphicsView*)self);
}

QSize* q_graphicsview_qbase_viewport_size_hint(void* self) {
    return QGraphicsView_QBaseViewportSizeHint((QGraphicsView*)self);
}

void q_graphicsview_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    QGraphicsView_OnViewportSizeHint((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_change_event(void* self, void* param1) {
    QGraphicsView_ChangeEvent((QGraphicsView*)self, (QEvent*)param1);
}

void q_graphicsview_qbase_change_event(void* self, void* param1) {
    QGraphicsView_QBaseChangeEvent((QGraphicsView*)self, (QEvent*)param1);
}

void q_graphicsview_on_change_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnChangeEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_init_style_option(void* self, void* option) {
    QGraphicsView_InitStyleOption((QGraphicsView*)self, (QStyleOptionFrame*)option);
}

void q_graphicsview_qbase_init_style_option(void* self, void* option) {
    QGraphicsView_QBaseInitStyleOption((QGraphicsView*)self, (QStyleOptionFrame*)option);
}

void q_graphicsview_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnInitStyleOption((QGraphicsView*)self, (intptr_t)callback);
}

int32_t q_graphicsview_dev_type(void* self) {
    return QGraphicsView_DevType((QGraphicsView*)self);
}

int32_t q_graphicsview_qbase_dev_type(void* self) {
    return QGraphicsView_QBaseDevType((QGraphicsView*)self);
}

void q_graphicsview_on_dev_type(void* self, int32_t (*callback)()) {
    QGraphicsView_OnDevType((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_set_visible(void* self, bool visible) {
    QGraphicsView_SetVisible((QGraphicsView*)self, visible);
}

void q_graphicsview_qbase_set_visible(void* self, bool visible) {
    QGraphicsView_QBaseSetVisible((QGraphicsView*)self, visible);
}

void q_graphicsview_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QGraphicsView_OnSetVisible((QGraphicsView*)self, (intptr_t)callback);
}

int32_t q_graphicsview_height_for_width(void* self, int param1) {
    return QGraphicsView_HeightForWidth((QGraphicsView*)self, param1);
}

int32_t q_graphicsview_qbase_height_for_width(void* self, int param1) {
    return QGraphicsView_QBaseHeightForWidth((QGraphicsView*)self, param1);
}

void q_graphicsview_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QGraphicsView_OnHeightForWidth((QGraphicsView*)self, (intptr_t)callback);
}

bool q_graphicsview_has_height_for_width(void* self) {
    return QGraphicsView_HasHeightForWidth((QGraphicsView*)self);
}

bool q_graphicsview_qbase_has_height_for_width(void* self) {
    return QGraphicsView_QBaseHasHeightForWidth((QGraphicsView*)self);
}

void q_graphicsview_on_has_height_for_width(void* self, bool (*callback)()) {
    QGraphicsView_OnHasHeightForWidth((QGraphicsView*)self, (intptr_t)callback);
}

QPaintEngine* q_graphicsview_paint_engine(void* self) {
    return QGraphicsView_PaintEngine((QGraphicsView*)self);
}

QPaintEngine* q_graphicsview_qbase_paint_engine(void* self) {
    return QGraphicsView_QBasePaintEngine((QGraphicsView*)self);
}

void q_graphicsview_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QGraphicsView_OnPaintEngine((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_enter_event(void* self, void* event) {
    QGraphicsView_EnterEvent((QGraphicsView*)self, (QEnterEvent*)event);
}

void q_graphicsview_qbase_enter_event(void* self, void* event) {
    QGraphicsView_QBaseEnterEvent((QGraphicsView*)self, (QEnterEvent*)event);
}

void q_graphicsview_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnEnterEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_leave_event(void* self, void* event) {
    QGraphicsView_LeaveEvent((QGraphicsView*)self, (QEvent*)event);
}

void q_graphicsview_qbase_leave_event(void* self, void* event) {
    QGraphicsView_QBaseLeaveEvent((QGraphicsView*)self, (QEvent*)event);
}

void q_graphicsview_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnLeaveEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_move_event(void* self, void* event) {
    QGraphicsView_MoveEvent((QGraphicsView*)self, (QMoveEvent*)event);
}

void q_graphicsview_qbase_move_event(void* self, void* event) {
    QGraphicsView_QBaseMoveEvent((QGraphicsView*)self, (QMoveEvent*)event);
}

void q_graphicsview_on_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnMoveEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_close_event(void* self, void* event) {
    QGraphicsView_CloseEvent((QGraphicsView*)self, (QCloseEvent*)event);
}

void q_graphicsview_qbase_close_event(void* self, void* event) {
    QGraphicsView_QBaseCloseEvent((QGraphicsView*)self, (QCloseEvent*)event);
}

void q_graphicsview_on_close_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnCloseEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_tablet_event(void* self, void* event) {
    QGraphicsView_TabletEvent((QGraphicsView*)self, (QTabletEvent*)event);
}

void q_graphicsview_qbase_tablet_event(void* self, void* event) {
    QGraphicsView_QBaseTabletEvent((QGraphicsView*)self, (QTabletEvent*)event);
}

void q_graphicsview_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnTabletEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_action_event(void* self, void* event) {
    QGraphicsView_ActionEvent((QGraphicsView*)self, (QActionEvent*)event);
}

void q_graphicsview_qbase_action_event(void* self, void* event) {
    QGraphicsView_QBaseActionEvent((QGraphicsView*)self, (QActionEvent*)event);
}

void q_graphicsview_on_action_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnActionEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_hide_event(void* self, void* event) {
    QGraphicsView_HideEvent((QGraphicsView*)self, (QHideEvent*)event);
}

void q_graphicsview_qbase_hide_event(void* self, void* event) {
    QGraphicsView_QBaseHideEvent((QGraphicsView*)self, (QHideEvent*)event);
}

void q_graphicsview_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnHideEvent((QGraphicsView*)self, (intptr_t)callback);
}

bool q_graphicsview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QGraphicsView_NativeEvent((QGraphicsView*)self, qstring(eventType), message, result);
}

bool q_graphicsview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QGraphicsView_QBaseNativeEvent((QGraphicsView*)self, qstring(eventType), message, result);
}

void q_graphicsview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QGraphicsView_OnNativeEvent((QGraphicsView*)self, (intptr_t)callback);
}

int32_t q_graphicsview_metric(void* self, int32_t param1) {
    return QGraphicsView_Metric((QGraphicsView*)self, param1);
}

int32_t q_graphicsview_qbase_metric(void* self, int32_t param1) {
    return QGraphicsView_QBaseMetric((QGraphicsView*)self, param1);
}

void q_graphicsview_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QGraphicsView_OnMetric((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_init_painter(void* self, void* painter) {
    QGraphicsView_InitPainter((QGraphicsView*)self, (QPainter*)painter);
}

void q_graphicsview_qbase_init_painter(void* self, void* painter) {
    QGraphicsView_QBaseInitPainter((QGraphicsView*)self, (QPainter*)painter);
}

void q_graphicsview_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnInitPainter((QGraphicsView*)self, (intptr_t)callback);
}

QPaintDevice* q_graphicsview_redirected(void* self, void* offset) {
    return QGraphicsView_Redirected((QGraphicsView*)self, (QPoint*)offset);
}

QPaintDevice* q_graphicsview_qbase_redirected(void* self, void* offset) {
    return QGraphicsView_QBaseRedirected((QGraphicsView*)self, (QPoint*)offset);
}

void q_graphicsview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QGraphicsView_OnRedirected((QGraphicsView*)self, (intptr_t)callback);
}

QPainter* q_graphicsview_shared_painter(void* self) {
    return QGraphicsView_SharedPainter((QGraphicsView*)self);
}

QPainter* q_graphicsview_qbase_shared_painter(void* self) {
    return QGraphicsView_QBaseSharedPainter((QGraphicsView*)self);
}

void q_graphicsview_on_shared_painter(void* self, QPainter* (*callback)()) {
    QGraphicsView_OnSharedPainter((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_timer_event(void* self, void* event) {
    QGraphicsView_TimerEvent((QGraphicsView*)self, (QTimerEvent*)event);
}

void q_graphicsview_qbase_timer_event(void* self, void* event) {
    QGraphicsView_QBaseTimerEvent((QGraphicsView*)self, (QTimerEvent*)event);
}

void q_graphicsview_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnTimerEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_child_event(void* self, void* event) {
    QGraphicsView_ChildEvent((QGraphicsView*)self, (QChildEvent*)event);
}

void q_graphicsview_qbase_child_event(void* self, void* event) {
    QGraphicsView_QBaseChildEvent((QGraphicsView*)self, (QChildEvent*)event);
}

void q_graphicsview_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnChildEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_custom_event(void* self, void* event) {
    QGraphicsView_CustomEvent((QGraphicsView*)self, (QEvent*)event);
}

void q_graphicsview_qbase_custom_event(void* self, void* event) {
    QGraphicsView_QBaseCustomEvent((QGraphicsView*)self, (QEvent*)event);
}

void q_graphicsview_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnCustomEvent((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_connect_notify(void* self, void* signal) {
    QGraphicsView_ConnectNotify((QGraphicsView*)self, (QMetaMethod*)signal);
}

void q_graphicsview_qbase_connect_notify(void* self, void* signal) {
    QGraphicsView_QBaseConnectNotify((QGraphicsView*)self, (QMetaMethod*)signal);
}

void q_graphicsview_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnConnectNotify((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_disconnect_notify(void* self, void* signal) {
    QGraphicsView_DisconnectNotify((QGraphicsView*)self, (QMetaMethod*)signal);
}

void q_graphicsview_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsView_QBaseDisconnectNotify((QGraphicsView*)self, (QMetaMethod*)signal);
}

void q_graphicsview_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnDisconnectNotify((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QGraphicsView_SetViewportMargins((QGraphicsView*)self, left, top, right, bottom);
}

void q_graphicsview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QGraphicsView_QBaseSetViewportMargins((QGraphicsView*)self, left, top, right, bottom);
}

void q_graphicsview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    QGraphicsView_OnSetViewportMargins((QGraphicsView*)self, (intptr_t)callback);
}

QMargins* q_graphicsview_viewport_margins(void* self) {
    return QGraphicsView_ViewportMargins((QGraphicsView*)self);
}

QMargins* q_graphicsview_qbase_viewport_margins(void* self) {
    return QGraphicsView_QBaseViewportMargins((QGraphicsView*)self);
}

void q_graphicsview_on_viewport_margins(void* self, QMargins* (*callback)()) {
    QGraphicsView_OnViewportMargins((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_draw_frame(void* self, void* param1) {
    QGraphicsView_DrawFrame((QGraphicsView*)self, (QPainter*)param1);
}

void q_graphicsview_qbase_draw_frame(void* self, void* param1) {
    QGraphicsView_QBaseDrawFrame((QGraphicsView*)self, (QPainter*)param1);
}

void q_graphicsview_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    QGraphicsView_OnDrawFrame((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_update_micro_focus(void* self) {
    QGraphicsView_UpdateMicroFocus((QGraphicsView*)self);
}

void q_graphicsview_qbase_update_micro_focus(void* self) {
    QGraphicsView_QBaseUpdateMicroFocus((QGraphicsView*)self);
}

void q_graphicsview_on_update_micro_focus(void* self, void (*callback)()) {
    QGraphicsView_OnUpdateMicroFocus((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_create(void* self) {
    QGraphicsView_Create((QGraphicsView*)self);
}

void q_graphicsview_qbase_create(void* self) {
    QGraphicsView_QBaseCreate((QGraphicsView*)self);
}

void q_graphicsview_on_create(void* self, void (*callback)()) {
    QGraphicsView_OnCreate((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_destroy(void* self) {
    QGraphicsView_Destroy((QGraphicsView*)self);
}

void q_graphicsview_qbase_destroy(void* self) {
    QGraphicsView_QBaseDestroy((QGraphicsView*)self);
}

void q_graphicsview_on_destroy(void* self, void (*callback)()) {
    QGraphicsView_OnDestroy((QGraphicsView*)self, (intptr_t)callback);
}

bool q_graphicsview_focus_next_child(void* self) {
    return QGraphicsView_FocusNextChild((QGraphicsView*)self);
}

bool q_graphicsview_qbase_focus_next_child(void* self) {
    return QGraphicsView_QBaseFocusNextChild((QGraphicsView*)self);
}

void q_graphicsview_on_focus_next_child(void* self, bool (*callback)()) {
    QGraphicsView_OnFocusNextChild((QGraphicsView*)self, (intptr_t)callback);
}

bool q_graphicsview_focus_previous_child(void* self) {
    return QGraphicsView_FocusPreviousChild((QGraphicsView*)self);
}

bool q_graphicsview_qbase_focus_previous_child(void* self) {
    return QGraphicsView_QBaseFocusPreviousChild((QGraphicsView*)self);
}

void q_graphicsview_on_focus_previous_child(void* self, bool (*callback)()) {
    QGraphicsView_OnFocusPreviousChild((QGraphicsView*)self, (intptr_t)callback);
}

QObject* q_graphicsview_sender(void* self) {
    return QGraphicsView_Sender((QGraphicsView*)self);
}

QObject* q_graphicsview_qbase_sender(void* self) {
    return QGraphicsView_QBaseSender((QGraphicsView*)self);
}

void q_graphicsview_on_sender(void* self, QObject* (*callback)()) {
    QGraphicsView_OnSender((QGraphicsView*)self, (intptr_t)callback);
}

int32_t q_graphicsview_sender_signal_index(void* self) {
    return QGraphicsView_SenderSignalIndex((QGraphicsView*)self);
}

int32_t q_graphicsview_qbase_sender_signal_index(void* self) {
    return QGraphicsView_QBaseSenderSignalIndex((QGraphicsView*)self);
}

void q_graphicsview_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGraphicsView_OnSenderSignalIndex((QGraphicsView*)self, (intptr_t)callback);
}

int32_t q_graphicsview_receivers(void* self, const char* signal) {
    return QGraphicsView_Receivers((QGraphicsView*)self, signal);
}

int32_t q_graphicsview_qbase_receivers(void* self, const char* signal) {
    return QGraphicsView_QBaseReceivers((QGraphicsView*)self, signal);
}

void q_graphicsview_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGraphicsView_OnReceivers((QGraphicsView*)self, (intptr_t)callback);
}

bool q_graphicsview_is_signal_connected(void* self, void* signal) {
    return QGraphicsView_IsSignalConnected((QGraphicsView*)self, (QMetaMethod*)signal);
}

bool q_graphicsview_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsView_QBaseIsSignalConnected((QGraphicsView*)self, (QMetaMethod*)signal);
}

void q_graphicsview_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGraphicsView_OnIsSignalConnected((QGraphicsView*)self, (intptr_t)callback);
}

double q_graphicsview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QGraphicsView_GetDecodedMetricF((QGraphicsView*)self, metricA, metricB);
}

double q_graphicsview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QGraphicsView_QBaseGetDecodedMetricF((QGraphicsView*)self, metricA, metricB);
}

void q_graphicsview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QGraphicsView_OnGetDecodedMetricF((QGraphicsView*)self, (intptr_t)callback);
}

void q_graphicsview_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_graphicsview_delete(void* self) {
    QGraphicsView_Delete((QGraphicsView*)(self));
}

#include "libqbrush.hpp"
#include "libqcoreevent.hpp"
#include "libqevent.hpp"
#include "libqfont.hpp"
#include "libqgraphicsitem.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqgraphicssceneevent.hpp"
#include "libqgraphicsview.hpp"
#include "libqgraphicswidget.hpp"
#include "libqline.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqpainterpath.hpp"
#include "libqpalette.hpp"
#include "libqpen.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqstyle.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqgraphicsscene.hpp"
#include "libqgraphicsscene.h"

QGraphicsScene* q_graphicsscene_new() {
    return QGraphicsScene_new();
}

QGraphicsScene* q_graphicsscene_new2(void* sceneRect) {
    return QGraphicsScene_new2((QRectF*)sceneRect);
}

QGraphicsScene* q_graphicsscene_new3(double x, double y, double width, double height) {
    return QGraphicsScene_new3(x, y, width, height);
}

QGraphicsScene* q_graphicsscene_new4(void* parent) {
    return QGraphicsScene_new4((QObject*)parent);
}

QGraphicsScene* q_graphicsscene_new5(void* sceneRect, void* parent) {
    return QGraphicsScene_new5((QRectF*)sceneRect, (QObject*)parent);
}

QGraphicsScene* q_graphicsscene_new6(double x, double y, double width, double height, void* parent) {
    return QGraphicsScene_new6(x, y, width, height, (QObject*)parent);
}

const QMetaObject* q_graphicsscene_meta_object(void* self) {
    return QGraphicsScene_MetaObject((QGraphicsScene*)self);
}

void* q_graphicsscene_metacast(void* self, const char* param1) {
    return QGraphicsScene_Metacast((QGraphicsScene*)self, param1);
}

int32_t q_graphicsscene_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsScene_Metacall((QGraphicsScene*)self, param1, param2, param3);
}

void q_graphicsscene_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGraphicsScene_OnMetacall((QGraphicsScene*)self, (intptr_t)callback);
}

int32_t q_graphicsscene_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsScene_QBaseMetacall((QGraphicsScene*)self, param1, param2, param3);
}

const char* q_graphicsscene_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRectF* q_graphicsscene_scene_rect(void* self) {
    return QGraphicsScene_SceneRect((QGraphicsScene*)self);
}

double q_graphicsscene_width(void* self) {
    return QGraphicsScene_Width((QGraphicsScene*)self);
}

double q_graphicsscene_height(void* self) {
    return QGraphicsScene_Height((QGraphicsScene*)self);
}

void q_graphicsscene_set_scene_rect(void* self, void* rect) {
    QGraphicsScene_SetSceneRect((QGraphicsScene*)self, (QRectF*)rect);
}

void q_graphicsscene_set_scene_rect2(void* self, double x, double y, double w, double h) {
    QGraphicsScene_SetSceneRect2((QGraphicsScene*)self, x, y, w, h);
}

void q_graphicsscene_render(void* self, void* painter) {
    QGraphicsScene_Render((QGraphicsScene*)self, (QPainter*)painter);
}

int32_t q_graphicsscene_item_index_method(void* self) {
    return QGraphicsScene_ItemIndexMethod((QGraphicsScene*)self);
}

void q_graphicsscene_set_item_index_method(void* self, int32_t method) {
    QGraphicsScene_SetItemIndexMethod((QGraphicsScene*)self, method);
}

int32_t q_graphicsscene_bsp_tree_depth(void* self) {
    return QGraphicsScene_BspTreeDepth((QGraphicsScene*)self);
}

void q_graphicsscene_set_bsp_tree_depth(void* self, int depth) {
    QGraphicsScene_SetBspTreeDepth((QGraphicsScene*)self, depth);
}

QRectF* q_graphicsscene_items_bounding_rect(void* self) {
    return QGraphicsScene_ItemsBoundingRect((QGraphicsScene*)self);
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items(void* self) {
    libqt_list _arr = QGraphicsScene_Items((QGraphicsScene*)self);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items2(void* self, void* pos) {
    libqt_list _arr = QGraphicsScene_Items2((QGraphicsScene*)self, (QPointF*)pos);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items3(void* self, void* rect) {
    libqt_list _arr = QGraphicsScene_Items3((QGraphicsScene*)self, (QRectF*)rect);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items5(void* self, void* path) {
    libqt_list _arr = QGraphicsScene_Items5((QGraphicsScene*)self, (QPainterPath*)path);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items6(void* self, double x, double y, double w, double h, int32_t mode, int32_t order) {
    libqt_list _arr = QGraphicsScene_Items6((QGraphicsScene*)self, x, y, w, h, mode, order);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_colliding_items(void* self, void* item) {
    libqt_list _arr = QGraphicsScene_CollidingItems((QGraphicsScene*)self, (QGraphicsItem*)item);
    return _arr;
}

QGraphicsItem* q_graphicsscene_item_at(void* self, void* pos, void* deviceTransform) {
    return QGraphicsScene_ItemAt((QGraphicsScene*)self, (QPointF*)pos, (QTransform*)deviceTransform);
}

QGraphicsItem* q_graphicsscene_item_at2(void* self, double x, double y, void* deviceTransform) {
    return QGraphicsScene_ItemAt2((QGraphicsScene*)self, x, y, (QTransform*)deviceTransform);
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_selected_items(void* self) {
    libqt_list _arr = QGraphicsScene_SelectedItems((QGraphicsScene*)self);
    return _arr;
}

QPainterPath* q_graphicsscene_selection_area(void* self) {
    return QGraphicsScene_SelectionArea((QGraphicsScene*)self);
}

void q_graphicsscene_set_selection_area(void* self, void* path, void* deviceTransform) {
    QGraphicsScene_SetSelectionArea((QGraphicsScene*)self, (QPainterPath*)path, (QTransform*)deviceTransform);
}

void q_graphicsscene_set_selection_area2(void* self, void* path) {
    QGraphicsScene_SetSelectionArea2((QGraphicsScene*)self, (QPainterPath*)path);
}

QGraphicsItemGroup* q_graphicsscene_create_item_group(void* self, libqt_list items) {
    return QGraphicsScene_CreateItemGroup((QGraphicsScene*)self, items);
}

void q_graphicsscene_destroy_item_group(void* self, void* group) {
    QGraphicsScene_DestroyItemGroup((QGraphicsScene*)self, (QGraphicsItemGroup*)group);
}

void q_graphicsscene_add_item(void* self, void* item) {
    QGraphicsScene_AddItem((QGraphicsScene*)self, (QGraphicsItem*)item);
}

QGraphicsEllipseItem* q_graphicsscene_add_ellipse(void* self, void* rect) {
    return QGraphicsScene_AddEllipse((QGraphicsScene*)self, (QRectF*)rect);
}

QGraphicsLineItem* q_graphicsscene_add_line(void* self, void* line) {
    return QGraphicsScene_AddLine((QGraphicsScene*)self, (QLineF*)line);
}

QGraphicsPathItem* q_graphicsscene_add_path(void* self, void* path) {
    return QGraphicsScene_AddPath((QGraphicsScene*)self, (QPainterPath*)path);
}

QGraphicsPixmapItem* q_graphicsscene_add_pixmap(void* self, void* pixmap) {
    return QGraphicsScene_AddPixmap((QGraphicsScene*)self, (QPixmap*)pixmap);
}

QGraphicsRectItem* q_graphicsscene_add_rect(void* self, void* rect) {
    return QGraphicsScene_AddRect((QGraphicsScene*)self, (QRectF*)rect);
}

QGraphicsTextItem* q_graphicsscene_add_text(void* self, const char* text) {
    return QGraphicsScene_AddText((QGraphicsScene*)self, qstring(text));
}

QGraphicsSimpleTextItem* q_graphicsscene_add_simple_text(void* self, const char* text) {
    return QGraphicsScene_AddSimpleText((QGraphicsScene*)self, qstring(text));
}

QGraphicsProxyWidget* q_graphicsscene_add_widget(void* self, void* widget) {
    return QGraphicsScene_AddWidget((QGraphicsScene*)self, (QWidget*)widget);
}

QGraphicsEllipseItem* q_graphicsscene_add_ellipse2(void* self, double x, double y, double w, double h) {
    return QGraphicsScene_AddEllipse2((QGraphicsScene*)self, x, y, w, h);
}

QGraphicsLineItem* q_graphicsscene_add_line2(void* self, double x1, double y1, double x2, double y2) {
    return QGraphicsScene_AddLine2((QGraphicsScene*)self, x1, y1, x2, y2);
}

QGraphicsRectItem* q_graphicsscene_add_rect2(void* self, double x, double y, double w, double h) {
    return QGraphicsScene_AddRect2((QGraphicsScene*)self, x, y, w, h);
}

void q_graphicsscene_remove_item(void* self, void* item) {
    QGraphicsScene_RemoveItem((QGraphicsScene*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicsscene_focus_item(void* self) {
    return QGraphicsScene_FocusItem((QGraphicsScene*)self);
}

void q_graphicsscene_set_focus_item(void* self, void* item) {
    QGraphicsScene_SetFocusItem((QGraphicsScene*)self, (QGraphicsItem*)item);
}

bool q_graphicsscene_has_focus(void* self) {
    return QGraphicsScene_HasFocus((QGraphicsScene*)self);
}

void q_graphicsscene_set_focus(void* self) {
    QGraphicsScene_SetFocus((QGraphicsScene*)self);
}

void q_graphicsscene_clear_focus(void* self) {
    QGraphicsScene_ClearFocus((QGraphicsScene*)self);
}

void q_graphicsscene_set_sticky_focus(void* self, bool enabled) {
    QGraphicsScene_SetStickyFocus((QGraphicsScene*)self, enabled);
}

bool q_graphicsscene_sticky_focus(void* self) {
    return QGraphicsScene_StickyFocus((QGraphicsScene*)self);
}

QGraphicsItem* q_graphicsscene_mouse_grabber_item(void* self) {
    return QGraphicsScene_MouseGrabberItem((QGraphicsScene*)self);
}

QBrush* q_graphicsscene_background_brush(void* self) {
    return QGraphicsScene_BackgroundBrush((QGraphicsScene*)self);
}

void q_graphicsscene_set_background_brush(void* self, void* brush) {
    QGraphicsScene_SetBackgroundBrush((QGraphicsScene*)self, (QBrush*)brush);
}

QBrush* q_graphicsscene_foreground_brush(void* self) {
    return QGraphicsScene_ForegroundBrush((QGraphicsScene*)self);
}

void q_graphicsscene_set_foreground_brush(void* self, void* brush) {
    QGraphicsScene_SetForegroundBrush((QGraphicsScene*)self, (QBrush*)brush);
}

QVariant* q_graphicsscene_input_method_query(void* self, int64_t query) {
    return QGraphicsScene_InputMethodQuery((QGraphicsScene*)self, query);
}

void q_graphicsscene_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QGraphicsScene_OnInputMethodQuery((QGraphicsScene*)self, (intptr_t)callback);
}

QVariant* q_graphicsscene_qbase_input_method_query(void* self, int64_t query) {
    return QGraphicsScene_QBaseInputMethodQuery((QGraphicsScene*)self, query);
}

libqt_list /* of QGraphicsView* */ q_graphicsscene_views(void* self) {
    libqt_list _arr = QGraphicsScene_Views((QGraphicsScene*)self);
    return _arr;
}

void q_graphicsscene_update(void* self, double x, double y, double w, double h) {
    QGraphicsScene_Update((QGraphicsScene*)self, x, y, w, h);
}

void q_graphicsscene_invalidate(void* self, double x, double y, double w, double h) {
    QGraphicsScene_Invalidate((QGraphicsScene*)self, x, y, w, h);
}

QStyle* q_graphicsscene_style(void* self) {
    return QGraphicsScene_Style((QGraphicsScene*)self);
}

void q_graphicsscene_set_style(void* self, void* style) {
    QGraphicsScene_SetStyle((QGraphicsScene*)self, (QStyle*)style);
}

QFont* q_graphicsscene_font(void* self) {
    return QGraphicsScene_Font((QGraphicsScene*)self);
}

void q_graphicsscene_set_font(void* self, void* font) {
    QGraphicsScene_SetFont((QGraphicsScene*)self, (QFont*)font);
}

QPalette* q_graphicsscene_palette(void* self) {
    return QGraphicsScene_Palette((QGraphicsScene*)self);
}

void q_graphicsscene_set_palette(void* self, void* palette) {
    QGraphicsScene_SetPalette((QGraphicsScene*)self, (QPalette*)palette);
}

bool q_graphicsscene_is_active(void* self) {
    return QGraphicsScene_IsActive((QGraphicsScene*)self);
}

QGraphicsItem* q_graphicsscene_active_panel(void* self) {
    return QGraphicsScene_ActivePanel((QGraphicsScene*)self);
}

void q_graphicsscene_set_active_panel(void* self, void* item) {
    QGraphicsScene_SetActivePanel((QGraphicsScene*)self, (QGraphicsItem*)item);
}

QGraphicsWidget* q_graphicsscene_active_window(void* self) {
    return QGraphicsScene_ActiveWindow((QGraphicsScene*)self);
}

void q_graphicsscene_set_active_window(void* self, void* widget) {
    QGraphicsScene_SetActiveWindow((QGraphicsScene*)self, (QGraphicsWidget*)widget);
}

bool q_graphicsscene_send_event(void* self, void* item, void* event) {
    return QGraphicsScene_SendEvent((QGraphicsScene*)self, (QGraphicsItem*)item, (QEvent*)event);
}

double q_graphicsscene_minimum_render_size(void* self) {
    return QGraphicsScene_MinimumRenderSize((QGraphicsScene*)self);
}

void q_graphicsscene_set_minimum_render_size(void* self, double minSize) {
    QGraphicsScene_SetMinimumRenderSize((QGraphicsScene*)self, minSize);
}

bool q_graphicsscene_focus_on_touch(void* self) {
    return QGraphicsScene_FocusOnTouch((QGraphicsScene*)self);
}

void q_graphicsscene_set_focus_on_touch(void* self, bool enabled) {
    QGraphicsScene_SetFocusOnTouch((QGraphicsScene*)self, enabled);
}

void q_graphicsscene_update2(void* self) {
    QGraphicsScene_Update2((QGraphicsScene*)self);
}

void q_graphicsscene_invalidate2(void* self) {
    QGraphicsScene_Invalidate2((QGraphicsScene*)self);
}

void q_graphicsscene_advance(void* self) {
    QGraphicsScene_Advance((QGraphicsScene*)self);
}

void q_graphicsscene_clear_selection(void* self) {
    QGraphicsScene_ClearSelection((QGraphicsScene*)self);
}

void q_graphicsscene_clear(void* self) {
    QGraphicsScene_Clear((QGraphicsScene*)self);
}

bool q_graphicsscene_event(void* self, void* event) {
    return QGraphicsScene_Event((QGraphicsScene*)self, (QEvent*)event);
}

void q_graphicsscene_on_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsScene_OnEvent((QGraphicsScene*)self, (intptr_t)callback);
}

bool q_graphicsscene_qbase_event(void* self, void* event) {
    return QGraphicsScene_QBaseEvent((QGraphicsScene*)self, (QEvent*)event);
}

bool q_graphicsscene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsScene_EventFilter((QGraphicsScene*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicsscene_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsScene_OnEventFilter((QGraphicsScene*)self, (intptr_t)callback);
}

bool q_graphicsscene_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsScene_QBaseEventFilter((QGraphicsScene*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicsscene_context_menu_event(void* self, void* event) {
    QGraphicsScene_ContextMenuEvent((QGraphicsScene*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsscene_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnContextMenuEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_context_menu_event(void* self, void* event) {
    QGraphicsScene_QBaseContextMenuEvent((QGraphicsScene*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsscene_drag_enter_event(void* self, void* event) {
    QGraphicsScene_DragEnterEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsscene_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnDragEnterEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_drag_enter_event(void* self, void* event) {
    QGraphicsScene_QBaseDragEnterEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsscene_drag_move_event(void* self, void* event) {
    QGraphicsScene_DragMoveEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsscene_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnDragMoveEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_drag_move_event(void* self, void* event) {
    QGraphicsScene_QBaseDragMoveEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsscene_drag_leave_event(void* self, void* event) {
    QGraphicsScene_DragLeaveEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsscene_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnDragLeaveEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_drag_leave_event(void* self, void* event) {
    QGraphicsScene_QBaseDragLeaveEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsscene_drop_event(void* self, void* event) {
    QGraphicsScene_DropEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsscene_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnDropEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_drop_event(void* self, void* event) {
    QGraphicsScene_QBaseDropEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsscene_focus_in_event(void* self, void* event) {
    QGraphicsScene_FocusInEvent((QGraphicsScene*)self, (QFocusEvent*)event);
}

void q_graphicsscene_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnFocusInEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_focus_in_event(void* self, void* event) {
    QGraphicsScene_QBaseFocusInEvent((QGraphicsScene*)self, (QFocusEvent*)event);
}

void q_graphicsscene_focus_out_event(void* self, void* event) {
    QGraphicsScene_FocusOutEvent((QGraphicsScene*)self, (QFocusEvent*)event);
}

void q_graphicsscene_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnFocusOutEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_focus_out_event(void* self, void* event) {
    QGraphicsScene_QBaseFocusOutEvent((QGraphicsScene*)self, (QFocusEvent*)event);
}

void q_graphicsscene_help_event(void* self, void* event) {
    QGraphicsScene_HelpEvent((QGraphicsScene*)self, (QGraphicsSceneHelpEvent*)event);
}

void q_graphicsscene_on_help_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnHelpEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_help_event(void* self, void* event) {
    QGraphicsScene_QBaseHelpEvent((QGraphicsScene*)self, (QGraphicsSceneHelpEvent*)event);
}

void q_graphicsscene_key_press_event(void* self, void* event) {
    QGraphicsScene_KeyPressEvent((QGraphicsScene*)self, (QKeyEvent*)event);
}

void q_graphicsscene_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnKeyPressEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_key_press_event(void* self, void* event) {
    QGraphicsScene_QBaseKeyPressEvent((QGraphicsScene*)self, (QKeyEvent*)event);
}

void q_graphicsscene_key_release_event(void* self, void* event) {
    QGraphicsScene_KeyReleaseEvent((QGraphicsScene*)self, (QKeyEvent*)event);
}

void q_graphicsscene_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnKeyReleaseEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_key_release_event(void* self, void* event) {
    QGraphicsScene_QBaseKeyReleaseEvent((QGraphicsScene*)self, (QKeyEvent*)event);
}

void q_graphicsscene_mouse_press_event(void* self, void* event) {
    QGraphicsScene_MousePressEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsscene_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnMousePressEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_mouse_press_event(void* self, void* event) {
    QGraphicsScene_QBaseMousePressEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsscene_mouse_move_event(void* self, void* event) {
    QGraphicsScene_MouseMoveEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsscene_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnMouseMoveEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_mouse_move_event(void* self, void* event) {
    QGraphicsScene_QBaseMouseMoveEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsscene_mouse_release_event(void* self, void* event) {
    QGraphicsScene_MouseReleaseEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsscene_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnMouseReleaseEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_mouse_release_event(void* self, void* event) {
    QGraphicsScene_QBaseMouseReleaseEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsscene_mouse_double_click_event(void* self, void* event) {
    QGraphicsScene_MouseDoubleClickEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsscene_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnMouseDoubleClickEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_mouse_double_click_event(void* self, void* event) {
    QGraphicsScene_QBaseMouseDoubleClickEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsscene_wheel_event(void* self, void* event) {
    QGraphicsScene_WheelEvent((QGraphicsScene*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsscene_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnWheelEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_wheel_event(void* self, void* event) {
    QGraphicsScene_QBaseWheelEvent((QGraphicsScene*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsscene_input_method_event(void* self, void* event) {
    QGraphicsScene_InputMethodEvent((QGraphicsScene*)self, (QInputMethodEvent*)event);
}

void q_graphicsscene_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnInputMethodEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_input_method_event(void* self, void* event) {
    QGraphicsScene_QBaseInputMethodEvent((QGraphicsScene*)self, (QInputMethodEvent*)event);
}

void q_graphicsscene_draw_background(void* self, void* painter, void* rect) {
    QGraphicsScene_DrawBackground((QGraphicsScene*)self, (QPainter*)painter, (QRectF*)rect);
}

void q_graphicsscene_on_draw_background(void* self, void (*callback)(void*, void*, void*)) {
    QGraphicsScene_OnDrawBackground((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_draw_background(void* self, void* painter, void* rect) {
    QGraphicsScene_QBaseDrawBackground((QGraphicsScene*)self, (QPainter*)painter, (QRectF*)rect);
}

void q_graphicsscene_draw_foreground(void* self, void* painter, void* rect) {
    QGraphicsScene_DrawForeground((QGraphicsScene*)self, (QPainter*)painter, (QRectF*)rect);
}

void q_graphicsscene_on_draw_foreground(void* self, void (*callback)(void*, void*, void*)) {
    QGraphicsScene_OnDrawForeground((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_qbase_draw_foreground(void* self, void* painter, void* rect) {
    QGraphicsScene_QBaseDrawForeground((QGraphicsScene*)self, (QPainter*)painter, (QRectF*)rect);
}

bool q_graphicsscene_focus_next_prev_child(void* self, bool next) {
    return QGraphicsScene_FocusNextPrevChild((QGraphicsScene*)self, next);
}

void q_graphicsscene_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QGraphicsScene_OnFocusNextPrevChild((QGraphicsScene*)self, (intptr_t)callback);
}

bool q_graphicsscene_qbase_focus_next_prev_child(void* self, bool next) {
    return QGraphicsScene_QBaseFocusNextPrevChild((QGraphicsScene*)self, next);
}

void q_graphicsscene_changed(void* self, libqt_list region) {
    QGraphicsScene_Changed((QGraphicsScene*)self, region);
}

void q_graphicsscene_on_changed(void* self, void (*callback)(void*, QRectF**)) {
    QGraphicsScene_Connect_Changed((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_scene_rect_changed(void* self, void* rect) {
    QGraphicsScene_SceneRectChanged((QGraphicsScene*)self, (QRectF*)rect);
}

void q_graphicsscene_on_scene_rect_changed(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_Connect_SceneRectChanged((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_selection_changed(void* self) {
    QGraphicsScene_SelectionChanged((QGraphicsScene*)self);
}

void q_graphicsscene_on_selection_changed(void* self, void (*callback)(void*)) {
    QGraphicsScene_Connect_SelectionChanged((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_focus_item_changed(void* self, void* newFocus, void* oldFocus, int32_t reason) {
    QGraphicsScene_FocusItemChanged((QGraphicsScene*)self, (QGraphicsItem*)newFocus, (QGraphicsItem*)oldFocus, reason);
}

void q_graphicsscene_on_focus_item_changed(void* self, void (*callback)(void*, void*, void*, int32_t)) {
    QGraphicsScene_Connect_FocusItemChanged((QGraphicsScene*)self, (intptr_t)callback);
}

const char* q_graphicsscene_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsscene_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsscene_render2(void* self, void* painter, void* target) {
    QGraphicsScene_Render2((QGraphicsScene*)self, (QPainter*)painter, (QRectF*)target);
}

void q_graphicsscene_render3(void* self, void* painter, void* target, void* source) {
    QGraphicsScene_Render3((QGraphicsScene*)self, (QPainter*)painter, (QRectF*)target, (QRectF*)source);
}

void q_graphicsscene_render4(void* self, void* painter, void* target, void* source, int32_t aspectRatioMode) {
    QGraphicsScene_Render4((QGraphicsScene*)self, (QPainter*)painter, (QRectF*)target, (QRectF*)source, aspectRatioMode);
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items1(void* self, int32_t order) {
    libqt_list _arr = QGraphicsScene_Items1((QGraphicsScene*)self, order);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items22(void* self, void* pos, int32_t mode) {
    libqt_list _arr = QGraphicsScene_Items22((QGraphicsScene*)self, (QPointF*)pos, mode);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items32(void* self, void* pos, int32_t mode, int32_t order) {
    libqt_list _arr = QGraphicsScene_Items32((QGraphicsScene*)self, (QPointF*)pos, mode, order);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items42(void* self, void* pos, int32_t mode, int32_t order, void* deviceTransform) {
    libqt_list _arr = QGraphicsScene_Items42((QGraphicsScene*)self, (QPointF*)pos, mode, order, (QTransform*)deviceTransform);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items23(void* self, void* rect, int32_t mode) {
    libqt_list _arr = QGraphicsScene_Items23((QGraphicsScene*)self, (QRectF*)rect, mode);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items33(void* self, void* rect, int32_t mode, int32_t order) {
    libqt_list _arr = QGraphicsScene_Items33((QGraphicsScene*)self, (QRectF*)rect, mode, order);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items43(void* self, void* rect, int32_t mode, int32_t order, void* deviceTransform) {
    libqt_list _arr = QGraphicsScene_Items43((QGraphicsScene*)self, (QRectF*)rect, mode, order, (QTransform*)deviceTransform);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items25(void* self, void* path, int32_t mode) {
    libqt_list _arr = QGraphicsScene_Items25((QGraphicsScene*)self, (QPainterPath*)path, mode);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items35(void* self, void* path, int32_t mode, int32_t order) {
    libqt_list _arr = QGraphicsScene_Items35((QGraphicsScene*)self, (QPainterPath*)path, mode, order);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items45(void* self, void* path, int32_t mode, int32_t order, void* deviceTransform) {
    libqt_list _arr = QGraphicsScene_Items45((QGraphicsScene*)self, (QPainterPath*)path, mode, order, (QTransform*)deviceTransform);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_items7(void* self, double x, double y, double w, double h, int32_t mode, int32_t order, void* deviceTransform) {
    libqt_list _arr = QGraphicsScene_Items7((QGraphicsScene*)self, x, y, w, h, mode, order, (QTransform*)deviceTransform);
    return _arr;
}

libqt_list /* of QGraphicsItem* */ q_graphicsscene_colliding_items2(void* self, void* item, int32_t mode) {
    libqt_list _arr = QGraphicsScene_CollidingItems2((QGraphicsScene*)self, (QGraphicsItem*)item, mode);
    return _arr;
}

void q_graphicsscene_set_selection_area22(void* self, void* path, int32_t selectionOperation) {
    QGraphicsScene_SetSelectionArea22((QGraphicsScene*)self, (QPainterPath*)path, selectionOperation);
}

void q_graphicsscene_set_selection_area3(void* self, void* path, int32_t selectionOperation, int32_t mode) {
    QGraphicsScene_SetSelectionArea3((QGraphicsScene*)self, (QPainterPath*)path, selectionOperation, mode);
}

void q_graphicsscene_set_selection_area4(void* self, void* path, int32_t selectionOperation, int32_t mode, void* deviceTransform) {
    QGraphicsScene_SetSelectionArea4((QGraphicsScene*)self, (QPainterPath*)path, selectionOperation, mode, (QTransform*)deviceTransform);
}

QGraphicsEllipseItem* q_graphicsscene_add_ellipse22(void* self, void* rect, void* pen) {
    return QGraphicsScene_AddEllipse22((QGraphicsScene*)self, (QRectF*)rect, (QPen*)pen);
}

QGraphicsEllipseItem* q_graphicsscene_add_ellipse3(void* self, void* rect, void* pen, void* brush) {
    return QGraphicsScene_AddEllipse3((QGraphicsScene*)self, (QRectF*)rect, (QPen*)pen, (QBrush*)brush);
}

QGraphicsLineItem* q_graphicsscene_add_line22(void* self, void* line, void* pen) {
    return QGraphicsScene_AddLine22((QGraphicsScene*)self, (QLineF*)line, (QPen*)pen);
}

QGraphicsPathItem* q_graphicsscene_add_path2(void* self, void* path, void* pen) {
    return QGraphicsScene_AddPath2((QGraphicsScene*)self, (QPainterPath*)path, (QPen*)pen);
}

QGraphicsPathItem* q_graphicsscene_add_path3(void* self, void* path, void* pen, void* brush) {
    return QGraphicsScene_AddPath3((QGraphicsScene*)self, (QPainterPath*)path, (QPen*)pen, (QBrush*)brush);
}

QGraphicsRectItem* q_graphicsscene_add_rect22(void* self, void* rect, void* pen) {
    return QGraphicsScene_AddRect22((QGraphicsScene*)self, (QRectF*)rect, (QPen*)pen);
}

QGraphicsRectItem* q_graphicsscene_add_rect3(void* self, void* rect, void* pen, void* brush) {
    return QGraphicsScene_AddRect3((QGraphicsScene*)self, (QRectF*)rect, (QPen*)pen, (QBrush*)brush);
}

QGraphicsTextItem* q_graphicsscene_add_text2(void* self, const char* text, void* font) {
    return QGraphicsScene_AddText2((QGraphicsScene*)self, qstring(text), (QFont*)font);
}

QGraphicsSimpleTextItem* q_graphicsscene_add_simple_text2(void* self, const char* text, void* font) {
    return QGraphicsScene_AddSimpleText2((QGraphicsScene*)self, qstring(text), (QFont*)font);
}

QGraphicsProxyWidget* q_graphicsscene_add_widget2(void* self, void* widget, int64_t wFlags) {
    return QGraphicsScene_AddWidget2((QGraphicsScene*)self, (QWidget*)widget, wFlags);
}

QGraphicsEllipseItem* q_graphicsscene_add_ellipse5(void* self, double x, double y, double w, double h, void* pen) {
    return QGraphicsScene_AddEllipse5((QGraphicsScene*)self, x, y, w, h, (QPen*)pen);
}

QGraphicsEllipseItem* q_graphicsscene_add_ellipse6(void* self, double x, double y, double w, double h, void* pen, void* brush) {
    return QGraphicsScene_AddEllipse6((QGraphicsScene*)self, x, y, w, h, (QPen*)pen, (QBrush*)brush);
}

QGraphicsLineItem* q_graphicsscene_add_line5(void* self, double x1, double y1, double x2, double y2, void* pen) {
    return QGraphicsScene_AddLine5((QGraphicsScene*)self, x1, y1, x2, y2, (QPen*)pen);
}

QGraphicsRectItem* q_graphicsscene_add_rect5(void* self, double x, double y, double w, double h, void* pen) {
    return QGraphicsScene_AddRect5((QGraphicsScene*)self, x, y, w, h, (QPen*)pen);
}

QGraphicsRectItem* q_graphicsscene_add_rect6(void* self, double x, double y, double w, double h, void* pen, void* brush) {
    return QGraphicsScene_AddRect6((QGraphicsScene*)self, x, y, w, h, (QPen*)pen, (QBrush*)brush);
}

void q_graphicsscene_set_focus_item2(void* self, void* item, int32_t focusReason) {
    QGraphicsScene_SetFocusItem2((QGraphicsScene*)self, (QGraphicsItem*)item, focusReason);
}

void q_graphicsscene_set_focus1(void* self, int32_t focusReason) {
    QGraphicsScene_SetFocus1((QGraphicsScene*)self, focusReason);
}

void q_graphicsscene_invalidate5(void* self, double x, double y, double w, double h, int32_t layers) {
    QGraphicsScene_Invalidate5((QGraphicsScene*)self, x, y, w, h, layers);
}

void q_graphicsscene_update1(void* self, void* rect) {
    QGraphicsScene_Update1((QGraphicsScene*)self, (QRectF*)rect);
}

void q_graphicsscene_invalidate1(void* self, void* rect) {
    QGraphicsScene_Invalidate1((QGraphicsScene*)self, (QRectF*)rect);
}

void q_graphicsscene_invalidate22(void* self, void* rect, int32_t layers) {
    QGraphicsScene_Invalidate22((QGraphicsScene*)self, (QRectF*)rect, layers);
}

const char* q_graphicsscene_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsscene_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicsscene_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicsscene_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicsscene_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicsscene_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicsscene_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicsscene_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicsscene_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicsscene_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_graphicsscene_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicsscene_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicsscene_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicsscene_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicsscene_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicsscene_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicsscene_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicsscene_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicsscene_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicsscene_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_graphicsscene_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicsscene_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicsscene_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicsscene_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicsscene_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_graphicsscene_dynamic_property_names");
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

QBindingStorage* q_graphicsscene_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicsscene_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicsscene_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicsscene_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_graphicsscene_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicsscene_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicsscene_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_graphicsscene_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_graphicsscene_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_graphicsscene_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_graphicsscene_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_graphicsscene_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicsscene_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_graphicsscene_timer_event(void* self, void* event) {
    QGraphicsScene_TimerEvent((QGraphicsScene*)self, (QTimerEvent*)event);
}

void q_graphicsscene_qbase_timer_event(void* self, void* event) {
    QGraphicsScene_QBaseTimerEvent((QGraphicsScene*)self, (QTimerEvent*)event);
}

void q_graphicsscene_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnTimerEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_child_event(void* self, void* event) {
    QGraphicsScene_ChildEvent((QGraphicsScene*)self, (QChildEvent*)event);
}

void q_graphicsscene_qbase_child_event(void* self, void* event) {
    QGraphicsScene_QBaseChildEvent((QGraphicsScene*)self, (QChildEvent*)event);
}

void q_graphicsscene_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnChildEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_custom_event(void* self, void* event) {
    QGraphicsScene_CustomEvent((QGraphicsScene*)self, (QEvent*)event);
}

void q_graphicsscene_qbase_custom_event(void* self, void* event) {
    QGraphicsScene_QBaseCustomEvent((QGraphicsScene*)self, (QEvent*)event);
}

void q_graphicsscene_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnCustomEvent((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_connect_notify(void* self, void* signal) {
    QGraphicsScene_ConnectNotify((QGraphicsScene*)self, (QMetaMethod*)signal);
}

void q_graphicsscene_qbase_connect_notify(void* self, void* signal) {
    QGraphicsScene_QBaseConnectNotify((QGraphicsScene*)self, (QMetaMethod*)signal);
}

void q_graphicsscene_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnConnectNotify((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_disconnect_notify(void* self, void* signal) {
    QGraphicsScene_DisconnectNotify((QGraphicsScene*)self, (QMetaMethod*)signal);
}

void q_graphicsscene_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsScene_QBaseDisconnectNotify((QGraphicsScene*)self, (QMetaMethod*)signal);
}

void q_graphicsscene_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsScene_OnDisconnectNotify((QGraphicsScene*)self, (intptr_t)callback);
}

QObject* q_graphicsscene_sender(void* self) {
    return QGraphicsScene_Sender((QGraphicsScene*)self);
}

QObject* q_graphicsscene_qbase_sender(void* self) {
    return QGraphicsScene_QBaseSender((QGraphicsScene*)self);
}

void q_graphicsscene_on_sender(void* self, QObject* (*callback)()) {
    QGraphicsScene_OnSender((QGraphicsScene*)self, (intptr_t)callback);
}

int32_t q_graphicsscene_sender_signal_index(void* self) {
    return QGraphicsScene_SenderSignalIndex((QGraphicsScene*)self);
}

int32_t q_graphicsscene_qbase_sender_signal_index(void* self) {
    return QGraphicsScene_QBaseSenderSignalIndex((QGraphicsScene*)self);
}

void q_graphicsscene_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGraphicsScene_OnSenderSignalIndex((QGraphicsScene*)self, (intptr_t)callback);
}

int32_t q_graphicsscene_receivers(void* self, const char* signal) {
    return QGraphicsScene_Receivers((QGraphicsScene*)self, signal);
}

int32_t q_graphicsscene_qbase_receivers(void* self, const char* signal) {
    return QGraphicsScene_QBaseReceivers((QGraphicsScene*)self, signal);
}

void q_graphicsscene_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGraphicsScene_OnReceivers((QGraphicsScene*)self, (intptr_t)callback);
}

bool q_graphicsscene_is_signal_connected(void* self, void* signal) {
    return QGraphicsScene_IsSignalConnected((QGraphicsScene*)self, (QMetaMethod*)signal);
}

bool q_graphicsscene_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsScene_QBaseIsSignalConnected((QGraphicsScene*)self, (QMetaMethod*)signal);
}

void q_graphicsscene_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGraphicsScene_OnIsSignalConnected((QGraphicsScene*)self, (intptr_t)callback);
}

void q_graphicsscene_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_graphicsscene_delete(void* self) {
    QGraphicsScene_Delete((QGraphicsScene*)(self));
}

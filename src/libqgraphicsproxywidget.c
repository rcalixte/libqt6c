#include "libqcoreevent.hpp"
#include "libqevent.hpp"
#include "libqgraphicsitem.hpp"
#include "libqgraphicslayoutitem.hpp"
#include "libqgraphicssceneevent.hpp"
#include "libqgraphicswidget.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqpainterpath.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqgraphicsproxywidget.h"

QGraphicsProxyWidget* q_graphicsproxywidget_new() {
    return QGraphicsProxyWidget_New();
}

QGraphicsProxyWidget* q_graphicsproxywidget_new2(void* parent) {
    return QGraphicsProxyWidget_New2((QGraphicsItem*)parent);
}

QGraphicsProxyWidget* q_graphicsproxywidget_new3(void* parent, int32_t wFlags) {
    return QGraphicsProxyWidget_New3((QGraphicsItem*)parent, wFlags);
}

const QMetaObject* q_graphicsproxywidget_meta_object(const void* self) {
    return QGraphicsProxyWidget_MetaObject((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QGraphicsProxyWidget_OnMetaObject((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

const QMetaObject* q_graphicsproxywidget_super_meta_object(const void* self) {
    return QGraphicsProxyWidget_SuperMetaObject((QGraphicsProxyWidget*)self);
}

void* q_graphicsproxywidget_metacast(void* self, const char* param1) {
    return QGraphicsProxyWidget_Metacast((QGraphicsProxyWidget*)self, param1);
}

void q_graphicsproxywidget_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QGraphicsProxyWidget_OnMetacast((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void* q_graphicsproxywidget_super_metacast(void* self, const char* param1) {
    return QGraphicsProxyWidget_SuperMetacast((QGraphicsProxyWidget*)self, param1);
}

int32_t q_graphicsproxywidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsProxyWidget_Metacall((QGraphicsProxyWidget*)self, param1, param2, param3);
}

void q_graphicsproxywidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGraphicsProxyWidget_OnMetacall((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

int32_t q_graphicsproxywidget_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsProxyWidget_SuperMetacall((QGraphicsProxyWidget*)self, param1, param2, param3);
}

const char* q_graphicsproxywidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsproxywidget_set_widget(void* self, void* widget) {
    QGraphicsProxyWidget_SetWidget((QGraphicsProxyWidget*)self, (QWidget*)widget);
}

QWidget* q_graphicsproxywidget_widget(const void* self) {
    return QGraphicsProxyWidget_Widget((QGraphicsProxyWidget*)self);
}

QRectF* q_graphicsproxywidget_sub_widget_rect(const void* self, const void* widget) {
    return QGraphicsProxyWidget_SubWidgetRect((QGraphicsProxyWidget*)self, (QWidget*)widget);
}

void q_graphicsproxywidget_set_geometry(void* self, const void* rect) {
    QGraphicsProxyWidget_SetGeometry((QGraphicsProxyWidget*)self, (QRectF*)rect);
}

void q_graphicsproxywidget_on_set_geometry(void* self, void (*callback)(void*, const void*)) {
    QGraphicsProxyWidget_OnSetGeometry((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_set_geometry(void* self, const void* rect) {
    QGraphicsProxyWidget_SuperSetGeometry((QGraphicsProxyWidget*)self, (QRectF*)rect);
}

void q_graphicsproxywidget_paint(void* self, void* painter, const void* option, void* widget) {
    QGraphicsProxyWidget_Paint((QGraphicsProxyWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicsproxywidget_on_paint(void* self, void (*callback)(void*, void*, const void*, void*)) {
    QGraphicsProxyWidget_OnPaint((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_paint(void* self, void* painter, const void* option, void* widget) {
    QGraphicsProxyWidget_SuperPaint((QGraphicsProxyWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

int32_t q_graphicsproxywidget_type(const void* self) {
    return QGraphicsProxyWidget_Type((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_type(void* self, int32_t (*callback)(const void*)) {
    QGraphicsProxyWidget_OnType((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

int32_t q_graphicsproxywidget_super_type(const void* self) {
    return QGraphicsProxyWidget_SuperType((QGraphicsProxyWidget*)self);
}

QGraphicsProxyWidget* q_graphicsproxywidget_create_proxy_for_child_widget(void* self, void* child) {
    return QGraphicsProxyWidget_CreateProxyForChildWidget((QGraphicsProxyWidget*)self, (QWidget*)child);
}

QVariant* q_graphicsproxywidget_item_change(void* self, int32_t change, const void* value) {
    return QGraphicsProxyWidget_ItemChange((QGraphicsProxyWidget*)self, change, (QVariant*)value);
}

void q_graphicsproxywidget_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, const void*)) {
    QGraphicsProxyWidget_OnItemChange((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

QVariant* q_graphicsproxywidget_super_item_change(void* self, int32_t change, const void* value) {
    return QGraphicsProxyWidget_SuperItemChange((QGraphicsProxyWidget*)self, change, (QVariant*)value);
}

bool q_graphicsproxywidget_event(void* self, void* event) {
    return QGraphicsProxyWidget_Event((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

bool q_graphicsproxywidget_super_event(void* self, void* event) {
    return QGraphicsProxyWidget_SuperEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

bool q_graphicsproxywidget_event_filter(void* self, void* object, void* event) {
    return QGraphicsProxyWidget_EventFilter((QGraphicsProxyWidget*)self, (QObject*)object, (QEvent*)event);
}

void q_graphicsproxywidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsProxyWidget_OnEventFilter((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

bool q_graphicsproxywidget_super_event_filter(void* self, void* object, void* event) {
    return QGraphicsProxyWidget_SuperEventFilter((QGraphicsProxyWidget*)self, (QObject*)object, (QEvent*)event);
}

void q_graphicsproxywidget_show_event(void* self, void* event) {
    QGraphicsProxyWidget_ShowEvent((QGraphicsProxyWidget*)self, (QShowEvent*)event);
}

void q_graphicsproxywidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnShowEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_show_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperShowEvent((QGraphicsProxyWidget*)self, (QShowEvent*)event);
}

void q_graphicsproxywidget_hide_event(void* self, void* event) {
    QGraphicsProxyWidget_HideEvent((QGraphicsProxyWidget*)self, (QHideEvent*)event);
}

void q_graphicsproxywidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnHideEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_hide_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperHideEvent((QGraphicsProxyWidget*)self, (QHideEvent*)event);
}

void q_graphicsproxywidget_context_menu_event(void* self, void* event) {
    QGraphicsProxyWidget_ContextMenuEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsproxywidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnContextMenuEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_context_menu_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperContextMenuEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsproxywidget_drag_enter_event(void* self, void* event) {
    QGraphicsProxyWidget_DragEnterEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnDragEnterEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_drag_enter_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperDragEnterEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_drag_leave_event(void* self, void* event) {
    QGraphicsProxyWidget_DragLeaveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnDragLeaveEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_drag_leave_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperDragLeaveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_drag_move_event(void* self, void* event) {
    QGraphicsProxyWidget_DragMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnDragMoveEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_drag_move_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperDragMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_drop_event(void* self, void* event) {
    QGraphicsProxyWidget_DropEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnDropEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_drop_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperDropEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_hover_enter_event(void* self, void* event) {
    QGraphicsProxyWidget_HoverEnterEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsproxywidget_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnHoverEnterEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_hover_enter_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperHoverEnterEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsproxywidget_hover_leave_event(void* self, void* event) {
    QGraphicsProxyWidget_HoverLeaveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsproxywidget_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnHoverLeaveEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_hover_leave_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperHoverLeaveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsproxywidget_hover_move_event(void* self, void* event) {
    QGraphicsProxyWidget_HoverMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsproxywidget_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnHoverMoveEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_hover_move_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperHoverMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsproxywidget_grab_mouse_event(void* self, void* event) {
    QGraphicsProxyWidget_GrabMouseEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_grab_mouse_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnGrabMouseEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_grab_mouse_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperGrabMouseEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_ungrab_mouse_event(void* self, void* event) {
    QGraphicsProxyWidget_UngrabMouseEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_ungrab_mouse_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnUngrabMouseEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_ungrab_mouse_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperUngrabMouseEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_mouse_move_event(void* self, void* event) {
    QGraphicsProxyWidget_MouseMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnMouseMoveEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_mouse_move_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperMouseMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_mouse_press_event(void* self, void* event) {
    QGraphicsProxyWidget_MousePressEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnMousePressEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_mouse_press_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperMousePressEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_mouse_release_event(void* self, void* event) {
    QGraphicsProxyWidget_MouseReleaseEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnMouseReleaseEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_mouse_release_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperMouseReleaseEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_mouse_double_click_event(void* self, void* event) {
    QGraphicsProxyWidget_MouseDoubleClickEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnMouseDoubleClickEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_mouse_double_click_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperMouseDoubleClickEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_wheel_event(void* self, void* event) {
    QGraphicsProxyWidget_WheelEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsproxywidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnWheelEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_wheel_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperWheelEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsproxywidget_key_press_event(void* self, void* event) {
    QGraphicsProxyWidget_KeyPressEvent((QGraphicsProxyWidget*)self, (QKeyEvent*)event);
}

void q_graphicsproxywidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnKeyPressEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_key_press_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperKeyPressEvent((QGraphicsProxyWidget*)self, (QKeyEvent*)event);
}

void q_graphicsproxywidget_key_release_event(void* self, void* event) {
    QGraphicsProxyWidget_KeyReleaseEvent((QGraphicsProxyWidget*)self, (QKeyEvent*)event);
}

void q_graphicsproxywidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnKeyReleaseEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_key_release_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperKeyReleaseEvent((QGraphicsProxyWidget*)self, (QKeyEvent*)event);
}

void q_graphicsproxywidget_focus_in_event(void* self, void* event) {
    QGraphicsProxyWidget_FocusInEvent((QGraphicsProxyWidget*)self, (QFocusEvent*)event);
}

void q_graphicsproxywidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnFocusInEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_focus_in_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperFocusInEvent((QGraphicsProxyWidget*)self, (QFocusEvent*)event);
}

void q_graphicsproxywidget_focus_out_event(void* self, void* event) {
    QGraphicsProxyWidget_FocusOutEvent((QGraphicsProxyWidget*)self, (QFocusEvent*)event);
}

void q_graphicsproxywidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnFocusOutEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_focus_out_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperFocusOutEvent((QGraphicsProxyWidget*)self, (QFocusEvent*)event);
}

bool q_graphicsproxywidget_focus_next_prev_child(void* self, bool next) {
    return QGraphicsProxyWidget_FocusNextPrevChild((QGraphicsProxyWidget*)self, next);
}

void q_graphicsproxywidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QGraphicsProxyWidget_OnFocusNextPrevChild((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

bool q_graphicsproxywidget_super_focus_next_prev_child(void* self, bool next) {
    return QGraphicsProxyWidget_SuperFocusNextPrevChild((QGraphicsProxyWidget*)self, next);
}

QVariant* q_graphicsproxywidget_input_method_query(const void* self, int32_t query) {
    return QGraphicsProxyWidget_InputMethodQuery((QGraphicsProxyWidget*)self, query);
}

void q_graphicsproxywidget_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t)) {
    QGraphicsProxyWidget_OnInputMethodQuery((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

QVariant* q_graphicsproxywidget_super_input_method_query(const void* self, int32_t query) {
    return QGraphicsProxyWidget_SuperInputMethodQuery((QGraphicsProxyWidget*)self, query);
}

void q_graphicsproxywidget_input_method_event(void* self, void* event) {
    QGraphicsProxyWidget_InputMethodEvent((QGraphicsProxyWidget*)self, (QInputMethodEvent*)event);
}

void q_graphicsproxywidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnInputMethodEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_input_method_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperInputMethodEvent((QGraphicsProxyWidget*)self, (QInputMethodEvent*)event);
}

QSizeF* q_graphicsproxywidget_size_hint(const void* self, int32_t which, const void* constraint) {
    return QGraphicsProxyWidget_SizeHint((QGraphicsProxyWidget*)self, which, (QSizeF*)constraint);
}

void q_graphicsproxywidget_on_size_hint(void* self, QSizeF* (*callback)(const void*, int32_t, const void*)) {
    QGraphicsProxyWidget_OnSizeHint((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

QSizeF* q_graphicsproxywidget_super_size_hint(const void* self, int32_t which, const void* constraint) {
    return QGraphicsProxyWidget_SuperSizeHint((QGraphicsProxyWidget*)self, which, (QSizeF*)constraint);
}

void q_graphicsproxywidget_resize_event(void* self, void* event) {
    QGraphicsProxyWidget_ResizeEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneResizeEvent*)event);
}

void q_graphicsproxywidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnResizeEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_super_resize_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperResizeEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneResizeEvent*)event);
}

QGraphicsProxyWidget* q_graphicsproxywidget_new_proxy_widget(void* self, const void* param1) {
    return QGraphicsProxyWidget_NewProxyWidget((QGraphicsProxyWidget*)self, (QWidget*)param1);
}

const char* q_graphicsproxywidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsproxywidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QGraphicsLayoutItem* q_graphicsproxywidget_as_q_graphics_layout_item(const void* self) {
    return QGraphicsWidget_AsQGraphicsLayoutItem((QGraphicsWidget*)self);
}

QGraphicsProxyWidget* q_graphicsproxywidget_from_q_graphics_layout_item(const void* _qgraphicslayoutitem) {
    return (QGraphicsProxyWidget*)QGraphicsWidget_FromQGraphicsLayoutItem((QGraphicsLayoutItem*)_qgraphicslayoutitem);
}

QGraphicsLayout* q_graphicsproxywidget_layout(const void* self) {
    return QGraphicsWidget_Layout((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_layout(void* self, void* layout) {
    QGraphicsWidget_SetLayout((QGraphicsWidget*)self, (QGraphicsLayout*)layout);
}

void q_graphicsproxywidget_adjust_size(void* self) {
    QGraphicsWidget_AdjustSize((QGraphicsWidget*)self);
}

int32_t q_graphicsproxywidget_layout_direction(const void* self) {
    return QGraphicsWidget_LayoutDirection((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_layout_direction(void* self, int32_t direction) {
    QGraphicsWidget_SetLayoutDirection((QGraphicsWidget*)self, direction);
}

void q_graphicsproxywidget_unset_layout_direction(void* self) {
    QGraphicsWidget_UnsetLayoutDirection((QGraphicsWidget*)self);
}

QStyle* q_graphicsproxywidget_style(const void* self) {
    return QGraphicsWidget_Style((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_style(void* self, void* style) {
    QGraphicsWidget_SetStyle((QGraphicsWidget*)self, (QStyle*)style);
}

QFont* q_graphicsproxywidget_font(const void* self) {
    return QGraphicsWidget_Font((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_font(void* self, const void* font) {
    QGraphicsWidget_SetFont((QGraphicsWidget*)self, (QFont*)font);
}

QPalette* q_graphicsproxywidget_palette(const void* self) {
    return QGraphicsWidget_Palette((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_palette(void* self, const void* palette) {
    QGraphicsWidget_SetPalette((QGraphicsWidget*)self, (QPalette*)palette);
}

bool q_graphicsproxywidget_auto_fill_background(const void* self) {
    return QGraphicsWidget_AutoFillBackground((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_auto_fill_background(void* self, bool enabled) {
    QGraphicsWidget_SetAutoFillBackground((QGraphicsWidget*)self, enabled);
}

void q_graphicsproxywidget_resize(void* self, const void* size) {
    QGraphicsWidget_Resize((QGraphicsWidget*)self, (QSizeF*)size);
}

void q_graphicsproxywidget_resize2(void* self, double w, double h) {
    QGraphicsWidget_Resize2((QGraphicsWidget*)self, w, h);
}

QSizeF* q_graphicsproxywidget_size(const void* self) {
    return QGraphicsWidget_Size((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_geometry2(void* self, double x, double y, double w, double h) {
    QGraphicsWidget_SetGeometry2((QGraphicsWidget*)self, x, y, w, h);
}

QRectF* q_graphicsproxywidget_rect(const void* self) {
    return QGraphicsWidget_Rect((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_graphicsproxywidget_set_contents_margins2(void* self, void* margins) {
    QGraphicsWidget_SetContentsMargins2((QGraphicsWidget*)self, (QMarginsF*)margins);
}

void q_graphicsproxywidget_set_window_frame_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_graphicsproxywidget_set_window_frame_margins2(void* self, void* margins) {
    QGraphicsWidget_SetWindowFrameMargins2((QGraphicsWidget*)self, (QMarginsF*)margins);
}

void q_graphicsproxywidget_get_window_frame_margins(const void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_GetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_graphicsproxywidget_unset_window_frame_margins(void* self) {
    QGraphicsWidget_UnsetWindowFrameMargins((QGraphicsWidget*)self);
}

QRectF* q_graphicsproxywidget_window_frame_geometry(const void* self) {
    return QGraphicsWidget_WindowFrameGeometry((QGraphicsWidget*)self);
}

QRectF* q_graphicsproxywidget_window_frame_rect(const void* self) {
    return QGraphicsWidget_WindowFrameRect((QGraphicsWidget*)self);
}

int32_t q_graphicsproxywidget_window_flags(const void* self) {
    return QGraphicsWidget_WindowFlags((QGraphicsWidget*)self);
}

int32_t q_graphicsproxywidget_window_type(const void* self) {
    return QGraphicsWidget_WindowType((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_window_flags(void* self, int32_t wFlags) {
    QGraphicsWidget_SetWindowFlags((QGraphicsWidget*)self, wFlags);
}

bool q_graphicsproxywidget_is_active_window(const void* self) {
    return QGraphicsWidget_IsActiveWindow((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_window_title(void* self, const char* title) {
    QGraphicsWidget_SetWindowTitle((QGraphicsWidget*)self, qstring(title));
}

const char* q_graphicsproxywidget_window_title(const void* self) {
    libqt_string _str = QGraphicsWidget_WindowTitle((QGraphicsWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_graphicsproxywidget_focus_policy(const void* self) {
    return QGraphicsWidget_FocusPolicy((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_focus_policy(void* self, int32_t policy) {
    QGraphicsWidget_SetFocusPolicy((QGraphicsWidget*)self, policy);
}

void q_graphicsproxywidget_set_tab_order(void* first, void* second) {
    QGraphicsWidget_SetTabOrder((QGraphicsWidget*)first, (QGraphicsWidget*)second);
}

QGraphicsWidget* q_graphicsproxywidget_focus_widget(const void* self) {
    return QGraphicsWidget_FocusWidget((QGraphicsWidget*)self);
}

int32_t q_graphicsproxywidget_grab_shortcut(void* self, const void* sequence) {
    return QGraphicsWidget_GrabShortcut((QGraphicsWidget*)self, (QKeySequence*)sequence);
}

void q_graphicsproxywidget_release_shortcut(void* self, int id) {
    QGraphicsWidget_ReleaseShortcut((QGraphicsWidget*)self, id);
}

void q_graphicsproxywidget_set_shortcut_enabled(void* self, int id) {
    QGraphicsWidget_SetShortcutEnabled((QGraphicsWidget*)self, id);
}

void q_graphicsproxywidget_set_shortcut_auto_repeat(void* self, int id) {
    QGraphicsWidget_SetShortcutAutoRepeat((QGraphicsWidget*)self, id);
}

void q_graphicsproxywidget_add_action(void* self, void* action) {
    QGraphicsWidget_AddAction((QGraphicsWidget*)self, (QAction*)action);
}

void q_graphicsproxywidget_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QGraphicsWidget_AddActions((QGraphicsWidget*)self, actions);
}

void q_graphicsproxywidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QGraphicsWidget_InsertActions((QGraphicsWidget*)self, (QAction*)before, actions);
}

void q_graphicsproxywidget_insert_action(void* self, void* before, void* action) {
    QGraphicsWidget_InsertAction((QGraphicsWidget*)self, (QAction*)before, (QAction*)action);
}

void q_graphicsproxywidget_remove_action(void* self, void* action) {
    QGraphicsWidget_RemoveAction((QGraphicsWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_graphicsproxywidget_actions(const void* self) {
    libqt_list _arr = QGraphicsWidget_Actions((QGraphicsWidget*)self);
    return _arr;
}

void q_graphicsproxywidget_set_attribute(void* self, int32_t attribute) {
    QGraphicsWidget_SetAttribute((QGraphicsWidget*)self, attribute);
}

bool q_graphicsproxywidget_test_attribute(const void* self, int32_t attribute) {
    return QGraphicsWidget_TestAttribute((QGraphicsWidget*)self, attribute);
}

void q_graphicsproxywidget_geometry_changed(void* self) {
    QGraphicsWidget_GeometryChanged((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_on_geometry_changed(void* self, void (*callback)(void*)) {
    QGraphicsWidget_Connect_GeometryChanged((QGraphicsWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_layout_changed(void* self) {
    QGraphicsWidget_LayoutChanged((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_on_layout_changed(void* self, void (*callback)(void*)) {
    QGraphicsWidget_Connect_LayoutChanged((QGraphicsWidget*)self, (intptr_t)callback);
}

bool q_graphicsproxywidget_close(void* self) {
    return QGraphicsWidget_Close((QGraphicsWidget*)self);
}

int32_t q_graphicsproxywidget_grab_shortcut2(void* self, const void* sequence, int32_t context) {
    return QGraphicsWidget_GrabShortcut2((QGraphicsWidget*)self, (QKeySequence*)sequence, context);
}

void q_graphicsproxywidget_set_shortcut_enabled2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutEnabled2((QGraphicsWidget*)self, id, enabled);
}

void q_graphicsproxywidget_set_shortcut_auto_repeat2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutAutoRepeat2((QGraphicsWidget*)self, id, enabled);
}

void q_graphicsproxywidget_set_attribute2(void* self, int32_t attribute, bool on) {
    QGraphicsWidget_SetAttribute2((QGraphicsWidget*)self, attribute, on);
}

QGraphicsItem* q_graphicsproxywidget_as_q_graphics_item(const void* self) {
    return QGraphicsObject_AsQGraphicsItem((QGraphicsObject*)self);
}

QGraphicsProxyWidget* q_graphicsproxywidget_from_q_graphics_item(const void* _qgraphicsitem) {
    return (QGraphicsProxyWidget*)QGraphicsObject_FromQGraphicsItem((QGraphicsItem*)_qgraphicsitem);
}

void q_graphicsproxywidget_grab_gesture(void* self, int32_t type) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, type);
}

void q_graphicsproxywidget_ungrab_gesture(void* self, int32_t type) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, type);
}

void q_graphicsproxywidget_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_parent_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_opacity_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_visible_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_enabled_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_x_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_y_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_z_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_rotation_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_scale_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_children_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_width_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_height_changed(void* self, void (*callback)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, type, flags);
}

const char* q_graphicsproxywidget_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsproxywidget_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicsproxywidget_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicsproxywidget_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicsproxywidget_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicsproxywidget_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicsproxywidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicsproxywidget_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicsproxywidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicsproxywidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_graphicsproxywidget_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_graphicsproxywidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicsproxywidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicsproxywidget_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicsproxywidget_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicsproxywidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicsproxywidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicsproxywidget_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_graphicsproxywidget_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicsproxywidget_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicsproxywidget_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_graphicsproxywidget_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicsproxywidget_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_graphicsproxywidget_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_graphicsproxywidget_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_graphicsproxywidget_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicsproxywidget_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicsproxywidget_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicsproxywidget_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicsproxywidget_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_graphicsproxywidget_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_graphicsproxywidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicsproxywidget_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicsproxywidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicsproxywidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_graphicsproxywidget_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicsproxywidget_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicsproxywidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_graphicsproxywidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_graphicsproxywidget_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_graphicsproxywidget_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_graphicsproxywidget_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_graphicsproxywidget_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_graphicsproxywidget_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_graphicsproxywidget_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_graphicsproxywidget_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_graphicsproxywidget_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_graphicsproxywidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicsproxywidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QGraphicsScene* q_graphicsproxywidget_scene(const void* self) {
    return QGraphicsItem_Scene(q_graphicsproxywidget_as_q_graphics_item(self));
}

QGraphicsItem* q_graphicsproxywidget_parent_item(const void* self) {
    return QGraphicsItem_ParentItem(q_graphicsproxywidget_as_q_graphics_item(self));
}

QGraphicsItem* q_graphicsproxywidget_top_level_item(const void* self) {
    return QGraphicsItem_TopLevelItem(q_graphicsproxywidget_as_q_graphics_item(self));
}

QGraphicsObject* q_graphicsproxywidget_parent_object(const void* self) {
    return QGraphicsItem_ParentObject(q_graphicsproxywidget_as_q_graphics_item(self));
}

QGraphicsWidget* q_graphicsproxywidget_parent_widget(const void* self) {
    return QGraphicsItem_ParentWidget(q_graphicsproxywidget_as_q_graphics_item(self));
}

QGraphicsWidget* q_graphicsproxywidget_top_level_widget(const void* self) {
    return QGraphicsItem_TopLevelWidget(q_graphicsproxywidget_as_q_graphics_item(self));
}

QGraphicsWidget* q_graphicsproxywidget_window(const void* self) {
    return QGraphicsItem_Window(q_graphicsproxywidget_as_q_graphics_item(self));
}

QGraphicsItem* q_graphicsproxywidget_panel(const void* self) {
    return QGraphicsItem_Panel(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_child_items(const void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems(q_graphicsproxywidget_as_q_graphics_item(self));
    return _arr;
}

bool q_graphicsproxywidget_is_widget(const void* self) {
    return QGraphicsItem_IsWidget(q_graphicsproxywidget_as_q_graphics_item(self));
}

bool q_graphicsproxywidget_is_window(const void* self) {
    return QGraphicsItem_IsWindow(q_graphicsproxywidget_as_q_graphics_item(self));
}

bool q_graphicsproxywidget_is_panel(const void* self) {
    return QGraphicsItem_IsPanel(q_graphicsproxywidget_as_q_graphics_item(self));
}

QGraphicsObject* q_graphicsproxywidget_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject(q_graphicsproxywidget_as_q_graphics_item(self));
}

const QGraphicsObject* q_graphicsproxywidget_to_graphics_object2(const void* self) {
    return QGraphicsItem_ToGraphicsObject2(q_graphicsproxywidget_as_q_graphics_item(self));
}

QGraphicsItemGroup* q_graphicsproxywidget_group(const void* self) {
    return QGraphicsItem_Group(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItemGroup*)group);
}

int32_t q_graphicsproxywidget_flags(const void* self) {
    return QGraphicsItem_Flags(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_flag(void* self, int32_t flag) {
    QGraphicsItem_SetFlag(q_graphicsproxywidget_as_q_graphics_item(self), flag);
}

void q_graphicsproxywidget_set_flags(void* self, int32_t flags) {
    QGraphicsItem_SetFlags(q_graphicsproxywidget_as_q_graphics_item(self), flags);
}

int32_t q_graphicsproxywidget_cache_mode(const void* self) {
    return QGraphicsItem_CacheMode(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_cache_mode(void* self, int32_t mode) {
    QGraphicsItem_SetCacheMode(q_graphicsproxywidget_as_q_graphics_item(self), mode);
}

int32_t q_graphicsproxywidget_panel_modality(const void* self) {
    return QGraphicsItem_PanelModality(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_panel_modality(void* self, int32_t panelModality) {
    QGraphicsItem_SetPanelModality(q_graphicsproxywidget_as_q_graphics_item(self), panelModality);
}

bool q_graphicsproxywidget_is_blocked_by_modal_panel(const void* self) {
    return QGraphicsItem_IsBlockedByModalPanel(q_graphicsproxywidget_as_q_graphics_item(self));
}

const char* q_graphicsproxywidget_tool_tip(const void* self) {
    libqt_string _str = QGraphicsItem_ToolTip(q_graphicsproxywidget_as_q_graphics_item(self));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsproxywidget_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip(q_graphicsproxywidget_as_q_graphics_item(self), qstring(toolTip));
}

QCursor* q_graphicsproxywidget_cursor(const void* self) {
    return QGraphicsItem_Cursor(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_cursor(void* self, const void* cursor) {
    QGraphicsItem_SetCursor(q_graphicsproxywidget_as_q_graphics_item(self), (QCursor*)cursor);
}

bool q_graphicsproxywidget_has_cursor(const void* self) {
    return QGraphicsItem_HasCursor(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor(q_graphicsproxywidget_as_q_graphics_item(self));
}

bool q_graphicsproxywidget_is_visible(const void* self) {
    return QGraphicsItem_IsVisible(q_graphicsproxywidget_as_q_graphics_item(self));
}

bool q_graphicsproxywidget_is_visible_to(const void* self, const void* parent) {
    return QGraphicsItem_IsVisibleTo(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)parent);
}

void q_graphicsproxywidget_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible(q_graphicsproxywidget_as_q_graphics_item(self), visible);
}

void q_graphicsproxywidget_hide(void* self) {
    QGraphicsItem_Hide(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_show(void* self) {
    QGraphicsItem_Show(q_graphicsproxywidget_as_q_graphics_item(self));
}

bool q_graphicsproxywidget_is_enabled(const void* self) {
    return QGraphicsItem_IsEnabled(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled(q_graphicsproxywidget_as_q_graphics_item(self), enabled);
}

bool q_graphicsproxywidget_is_selected(const void* self) {
    return QGraphicsItem_IsSelected(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected(q_graphicsproxywidget_as_q_graphics_item(self), selected);
}

bool q_graphicsproxywidget_accept_drops(const void* self) {
    return QGraphicsItem_AcceptDrops(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops(q_graphicsproxywidget_as_q_graphics_item(self), on);
}

double q_graphicsproxywidget_opacity(const void* self) {
    return QGraphicsItem_Opacity(q_graphicsproxywidget_as_q_graphics_item(self));
}

double q_graphicsproxywidget_effective_opacity(const void* self) {
    return QGraphicsItem_EffectiveOpacity(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity(q_graphicsproxywidget_as_q_graphics_item(self), opacity);
}

QGraphicsEffect* q_graphicsproxywidget_graphics_effect(const void* self) {
    return QGraphicsItem_GraphicsEffect(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsEffect*)effect);
}

int32_t q_graphicsproxywidget_accepted_mouse_buttons(const void* self) {
    return QGraphicsItem_AcceptedMouseButtons(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons(q_graphicsproxywidget_as_q_graphics_item(self), buttons);
}

bool q_graphicsproxywidget_accept_hover_events(const void* self) {
    return QGraphicsItem_AcceptHoverEvents(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents(q_graphicsproxywidget_as_q_graphics_item(self), enabled);
}

bool q_graphicsproxywidget_accept_touch_events(const void* self) {
    return QGraphicsItem_AcceptTouchEvents(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents(q_graphicsproxywidget_as_q_graphics_item(self), enabled);
}

bool q_graphicsproxywidget_filters_child_events(const void* self) {
    return QGraphicsItem_FiltersChildEvents(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents(q_graphicsproxywidget_as_q_graphics_item(self), enabled);
}

bool q_graphicsproxywidget_handles_child_events(const void* self) {
    return QGraphicsItem_HandlesChildEvents(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents(q_graphicsproxywidget_as_q_graphics_item(self), enabled);
}

bool q_graphicsproxywidget_is_active(const void* self) {
    return QGraphicsItem_IsActive(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_active(void* self, bool active) {
    QGraphicsItem_SetActive(q_graphicsproxywidget_as_q_graphics_item(self), active);
}

bool q_graphicsproxywidget_has_focus(const void* self) {
    return QGraphicsItem_HasFocus(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_focus(void* self) {
    QGraphicsItem_SetFocus(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_clear_focus(void* self) {
    QGraphicsItem_ClearFocus(q_graphicsproxywidget_as_q_graphics_item(self));
}

QGraphicsItem* q_graphicsproxywidget_focus_proxy(const void* self) {
    return QGraphicsItem_FocusProxy(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicsproxywidget_focus_item(const void* self) {
    return QGraphicsItem_FocusItem(q_graphicsproxywidget_as_q_graphics_item(self));
}

QGraphicsItem* q_graphicsproxywidget_focus_scope_item(const void* self) {
    return QGraphicsItem_FocusScopeItem(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard(q_graphicsproxywidget_as_q_graphics_item(self));
}

QPointF* q_graphicsproxywidget_pos(const void* self) {
    return QGraphicsItem_Pos(q_graphicsproxywidget_as_q_graphics_item(self));
}

double q_graphicsproxywidget_x(const void* self) {
    return QGraphicsItem_X(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_x(void* self, double x) {
    QGraphicsItem_SetX(q_graphicsproxywidget_as_q_graphics_item(self), x);
}

double q_graphicsproxywidget_y(const void* self) {
    return QGraphicsItem_Y(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_y(void* self, double y) {
    QGraphicsItem_SetY(q_graphicsproxywidget_as_q_graphics_item(self), y);
}

QPointF* q_graphicsproxywidget_scene_pos(const void* self) {
    return QGraphicsItem_ScenePos(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_pos(void* self, const void* pos) {
    QGraphicsItem_SetPos(q_graphicsproxywidget_as_q_graphics_item(self), (QPointF*)pos);
}

void q_graphicsproxywidget_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2(q_graphicsproxywidget_as_q_graphics_item(self), x, y);
}

void q_graphicsproxywidget_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy(q_graphicsproxywidget_as_q_graphics_item(self), dx, dy);
}

void q_graphicsproxywidget_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2(q_graphicsproxywidget_as_q_graphics_item(self), x, y, w, h);
}

QTransform* q_graphicsproxywidget_transform(const void* self) {
    return QGraphicsItem_Transform(q_graphicsproxywidget_as_q_graphics_item(self));
}

QTransform* q_graphicsproxywidget_scene_transform(const void* self) {
    return QGraphicsItem_SceneTransform(q_graphicsproxywidget_as_q_graphics_item(self));
}

QTransform* q_graphicsproxywidget_device_transform(const void* self, const void* viewportTransform) {
    return QGraphicsItem_DeviceTransform(q_graphicsproxywidget_as_q_graphics_item(self), (QTransform*)viewportTransform);
}

QTransform* q_graphicsproxywidget_item_transform(const void* self, const void* other) {
    return QGraphicsItem_ItemTransform(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)other);
}

void q_graphicsproxywidget_set_transform(void* self, const void* matrix) {
    QGraphicsItem_SetTransform(q_graphicsproxywidget_as_q_graphics_item(self), (QTransform*)matrix);
}

void q_graphicsproxywidget_reset_transform(void* self) {
    QGraphicsItem_ResetTransform(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation(q_graphicsproxywidget_as_q_graphics_item(self), angle);
}

double q_graphicsproxywidget_rotation(const void* self) {
    return QGraphicsItem_Rotation(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale(q_graphicsproxywidget_as_q_graphics_item(self), scale);
}

double q_graphicsproxywidget_scale(const void* self) {
    return QGraphicsItem_Scale(q_graphicsproxywidget_as_q_graphics_item(self));
}

libqt_list /* of QGraphicsTransform* */ q_graphicsproxywidget_transformations(const void* self) {
    libqt_list _arr = QGraphicsItem_Transformations(q_graphicsproxywidget_as_q_graphics_item(self));
    return _arr;
}

void q_graphicsproxywidget_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QGraphicsItem_SetTransformations(q_graphicsproxywidget_as_q_graphics_item(self), transformations);
}

QPointF* q_graphicsproxywidget_transform_origin_point(const void* self) {
    return QGraphicsItem_TransformOriginPoint(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_transform_origin_point(void* self, const void* origin) {
    QGraphicsItem_SetTransformOriginPoint(q_graphicsproxywidget_as_q_graphics_item(self), (QPointF*)origin);
}

void q_graphicsproxywidget_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2(q_graphicsproxywidget_as_q_graphics_item(self), ax, ay);
}

double q_graphicsproxywidget_z_value(const void* self) {
    return QGraphicsItem_ZValue(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue(q_graphicsproxywidget_as_q_graphics_item(self), z);
}

void q_graphicsproxywidget_stack_before(void* self, const void* sibling) {
    QGraphicsItem_StackBefore(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)sibling);
}

QRectF* q_graphicsproxywidget_children_bounding_rect(const void* self) {
    return QGraphicsItem_ChildrenBoundingRect(q_graphicsproxywidget_as_q_graphics_item(self));
}

QRectF* q_graphicsproxywidget_scene_bounding_rect(const void* self) {
    return QGraphicsItem_SceneBoundingRect(q_graphicsproxywidget_as_q_graphics_item(self));
}

bool q_graphicsproxywidget_is_clipped(const void* self) {
    return QGraphicsItem_IsClipped(q_graphicsproxywidget_as_q_graphics_item(self));
}

QPainterPath* q_graphicsproxywidget_clip_path(const void* self) {
    return QGraphicsItem_ClipPath(q_graphicsproxywidget_as_q_graphics_item(self));
}

libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_colliding_items(const void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems(q_graphicsproxywidget_as_q_graphics_item(self));
    return _arr;
}

bool q_graphicsproxywidget_is_obscured(const void* self) {
    return QGraphicsItem_IsObscured(q_graphicsproxywidget_as_q_graphics_item(self));
}

bool q_graphicsproxywidget_is_obscured2(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2(q_graphicsproxywidget_as_q_graphics_item(self), x, y, w, h);
}

QRegion* q_graphicsproxywidget_bounding_region(const void* self, const void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion(q_graphicsproxywidget_as_q_graphics_item(self), (QTransform*)itemToDeviceTransform);
}

double q_graphicsproxywidget_bounding_region_granularity(const void* self) {
    return QGraphicsItem_BoundingRegionGranularity(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity(q_graphicsproxywidget_as_q_graphics_item(self), granularity);
}

void q_graphicsproxywidget_update(void* self) {
    QGraphicsItem_Update(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2(q_graphicsproxywidget_as_q_graphics_item(self), x, y, width, height);
}

void q_graphicsproxywidget_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll(q_graphicsproxywidget_as_q_graphics_item(self), dx, dy);
}

QPointF* q_graphicsproxywidget_map_to_item(const void* self, const void* item, const void* point) {
    return QGraphicsItem_MapToItem(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsproxywidget_map_to_parent(const void* self, const void* point) {
    return QGraphicsItem_MapToParent(q_graphicsproxywidget_as_q_graphics_item(self), (QPointF*)point);
}

QPointF* q_graphicsproxywidget_map_to_scene(const void* self, const void* point) {
    return QGraphicsItem_MapToScene(q_graphicsproxywidget_as_q_graphics_item(self), (QPointF*)point);
}

QPolygonF* q_graphicsproxywidget_map_to_item2(const void* self, const void* item, const void* rect) {
    return QGraphicsItem_MapToItem2(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, (QRectF*)rect);
}

QPolygonF* q_graphicsproxywidget_map_to_parent2(const void* self, const void* rect) {
    return QGraphicsItem_MapToParent2(q_graphicsproxywidget_as_q_graphics_item(self), (QRectF*)rect);
}

QPolygonF* q_graphicsproxywidget_map_to_scene2(const void* self, const void* rect) {
    return QGraphicsItem_MapToScene2(q_graphicsproxywidget_as_q_graphics_item(self), (QRectF*)rect);
}

QRectF* q_graphicsproxywidget_map_rect_to_item(const void* self, const void* item, const void* rect) {
    return QGraphicsItem_MapRectToItem(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsproxywidget_map_rect_to_parent(const void* self, const void* rect) {
    return QGraphicsItem_MapRectToParent(q_graphicsproxywidget_as_q_graphics_item(self), (QRectF*)rect);
}

QRectF* q_graphicsproxywidget_map_rect_to_scene(const void* self, const void* rect) {
    return QGraphicsItem_MapRectToScene(q_graphicsproxywidget_as_q_graphics_item(self), (QRectF*)rect);
}

QPolygonF* q_graphicsproxywidget_map_to_item3(const void* self, const void* item, const void* polygon) {
    return QGraphicsItem_MapToItem3(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, (QPolygonF*)polygon);
}

QPolygonF* q_graphicsproxywidget_map_to_parent3(const void* self, const void* polygon) {
    return QGraphicsItem_MapToParent3(q_graphicsproxywidget_as_q_graphics_item(self), (QPolygonF*)polygon);
}

QPolygonF* q_graphicsproxywidget_map_to_scene3(const void* self, const void* polygon) {
    return QGraphicsItem_MapToScene3(q_graphicsproxywidget_as_q_graphics_item(self), (QPolygonF*)polygon);
}

QPainterPath* q_graphicsproxywidget_map_to_item4(const void* self, const void* item, const void* path) {
    return QGraphicsItem_MapToItem4(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsproxywidget_map_to_parent4(const void* self, const void* path) {
    return QGraphicsItem_MapToParent4(q_graphicsproxywidget_as_q_graphics_item(self), (QPainterPath*)path);
}

QPainterPath* q_graphicsproxywidget_map_to_scene4(const void* self, const void* path) {
    return QGraphicsItem_MapToScene4(q_graphicsproxywidget_as_q_graphics_item(self), (QPainterPath*)path);
}

QPointF* q_graphicsproxywidget_map_from_item(const void* self, const void* item, const void* point) {
    return QGraphicsItem_MapFromItem(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsproxywidget_map_from_parent(const void* self, const void* point) {
    return QGraphicsItem_MapFromParent(q_graphicsproxywidget_as_q_graphics_item(self), (QPointF*)point);
}

QPointF* q_graphicsproxywidget_map_from_scene(const void* self, const void* point) {
    return QGraphicsItem_MapFromScene(q_graphicsproxywidget_as_q_graphics_item(self), (QPointF*)point);
}

QPolygonF* q_graphicsproxywidget_map_from_item2(const void* self, const void* item, const void* rect) {
    return QGraphicsItem_MapFromItem2(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, (QRectF*)rect);
}

QPolygonF* q_graphicsproxywidget_map_from_parent2(const void* self, const void* rect) {
    return QGraphicsItem_MapFromParent2(q_graphicsproxywidget_as_q_graphics_item(self), (QRectF*)rect);
}

QPolygonF* q_graphicsproxywidget_map_from_scene2(const void* self, const void* rect) {
    return QGraphicsItem_MapFromScene2(q_graphicsproxywidget_as_q_graphics_item(self), (QRectF*)rect);
}

QRectF* q_graphicsproxywidget_map_rect_from_item(const void* self, const void* item, const void* rect) {
    return QGraphicsItem_MapRectFromItem(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsproxywidget_map_rect_from_parent(const void* self, const void* rect) {
    return QGraphicsItem_MapRectFromParent(q_graphicsproxywidget_as_q_graphics_item(self), (QRectF*)rect);
}

QRectF* q_graphicsproxywidget_map_rect_from_scene(const void* self, const void* rect) {
    return QGraphicsItem_MapRectFromScene(q_graphicsproxywidget_as_q_graphics_item(self), (QRectF*)rect);
}

QPolygonF* q_graphicsproxywidget_map_from_item3(const void* self, const void* item, const void* polygon) {
    return QGraphicsItem_MapFromItem3(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, (QPolygonF*)polygon);
}

QPolygonF* q_graphicsproxywidget_map_from_parent3(const void* self, const void* polygon) {
    return QGraphicsItem_MapFromParent3(q_graphicsproxywidget_as_q_graphics_item(self), (QPolygonF*)polygon);
}

QPolygonF* q_graphicsproxywidget_map_from_scene3(const void* self, const void* polygon) {
    return QGraphicsItem_MapFromScene3(q_graphicsproxywidget_as_q_graphics_item(self), (QPolygonF*)polygon);
}

QPainterPath* q_graphicsproxywidget_map_from_item4(const void* self, const void* item, const void* path) {
    return QGraphicsItem_MapFromItem4(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsproxywidget_map_from_parent4(const void* self, const void* path) {
    return QGraphicsItem_MapFromParent4(q_graphicsproxywidget_as_q_graphics_item(self), (QPainterPath*)path);
}

QPainterPath* q_graphicsproxywidget_map_from_scene4(const void* self, const void* path) {
    return QGraphicsItem_MapFromScene4(q_graphicsproxywidget_as_q_graphics_item(self), (QPainterPath*)path);
}

QPointF* q_graphicsproxywidget_map_to_item5(const void* self, const void* item, double x, double y) {
    return QGraphicsItem_MapToItem5(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsproxywidget_map_to_parent5(const void* self, double x, double y) {
    return QGraphicsItem_MapToParent5(q_graphicsproxywidget_as_q_graphics_item(self), x, y);
}

QPointF* q_graphicsproxywidget_map_to_scene5(const void* self, double x, double y) {
    return QGraphicsItem_MapToScene5(q_graphicsproxywidget_as_q_graphics_item(self), x, y);
}

QPolygonF* q_graphicsproxywidget_map_to_item6(const void* self, const void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapToItem6(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, x, y, w, h);
}

QPolygonF* q_graphicsproxywidget_map_to_parent6(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapToParent6(q_graphicsproxywidget_as_q_graphics_item(self), x, y, w, h);
}

QPolygonF* q_graphicsproxywidget_map_to_scene6(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapToScene6(q_graphicsproxywidget_as_q_graphics_item(self), x, y, w, h);
}

QRectF* q_graphicsproxywidget_map_rect_to_item2(const void* self, const void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsproxywidget_map_rect_to_parent2(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2(q_graphicsproxywidget_as_q_graphics_item(self), x, y, w, h);
}

QRectF* q_graphicsproxywidget_map_rect_to_scene2(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2(q_graphicsproxywidget_as_q_graphics_item(self), x, y, w, h);
}

QPointF* q_graphicsproxywidget_map_from_item5(const void* self, const void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsproxywidget_map_from_parent5(const void* self, double x, double y) {
    return QGraphicsItem_MapFromParent5(q_graphicsproxywidget_as_q_graphics_item(self), x, y);
}

QPointF* q_graphicsproxywidget_map_from_scene5(const void* self, double x, double y) {
    return QGraphicsItem_MapFromScene5(q_graphicsproxywidget_as_q_graphics_item(self), x, y);
}

QPolygonF* q_graphicsproxywidget_map_from_item6(const void* self, const void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapFromItem6(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, x, y, w, h);
}

QPolygonF* q_graphicsproxywidget_map_from_parent6(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapFromParent6(q_graphicsproxywidget_as_q_graphics_item(self), x, y, w, h);
}

QPolygonF* q_graphicsproxywidget_map_from_scene6(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapFromScene6(q_graphicsproxywidget_as_q_graphics_item(self), x, y, w, h);
}

QRectF* q_graphicsproxywidget_map_rect_from_item2(const void* self, const void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsproxywidget_map_rect_from_parent2(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2(q_graphicsproxywidget_as_q_graphics_item(self), x, y, w, h);
}

QRectF* q_graphicsproxywidget_map_rect_from_scene2(const void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2(q_graphicsproxywidget_as_q_graphics_item(self), x, y, w, h);
}

bool q_graphicsproxywidget_is_ancestor_of(const void* self, const void* child) {
    return QGraphicsItem_IsAncestorOf(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicsproxywidget_common_ancestor_item(const void* self, const void* other) {
    return QGraphicsItem_CommonAncestorItem(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)other);
}

bool q_graphicsproxywidget_is_under_mouse(const void* self) {
    return QGraphicsItem_IsUnderMouse(q_graphicsproxywidget_as_q_graphics_item(self));
}

QVariant* q_graphicsproxywidget_data(const void* self, int key) {
    return QGraphicsItem_Data(q_graphicsproxywidget_as_q_graphics_item(self), key);
}

void q_graphicsproxywidget_set_data(void* self, int key, const void* value) {
    QGraphicsItem_SetData(q_graphicsproxywidget_as_q_graphics_item(self), key, (QVariant*)value);
}

int32_t q_graphicsproxywidget_input_method_hints(const void* self) {
    return QGraphicsItem_InputMethodHints(q_graphicsproxywidget_as_q_graphics_item(self));
}

void q_graphicsproxywidget_set_input_method_hints(void* self, int32_t hints) {
    QGraphicsItem_SetInputMethodHints(q_graphicsproxywidget_as_q_graphics_item(self), hints);
}

void q_graphicsproxywidget_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)filterItem);
}

void q_graphicsproxywidget_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)filterItem);
}

void q_graphicsproxywidget_set_flag2(void* self, int32_t flag, bool enabled) {
    QGraphicsItem_SetFlag2(q_graphicsproxywidget_as_q_graphics_item(self), flag, enabled);
}

void q_graphicsproxywidget_set_cache_mode2(void* self, int32_t mode, const void* cacheSize) {
    QGraphicsItem_SetCacheMode2(q_graphicsproxywidget_as_q_graphics_item(self), mode, (QSize*)cacheSize);
}

bool q_graphicsproxywidget_is_blocked_by_modal_panel1(const void* self, void** blockingPanel) {
    return QGraphicsItem_IsBlockedByModalPanel1(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem**)blockingPanel);
}

void q_graphicsproxywidget_set_focus1(void* self, int32_t focusReason) {
    QGraphicsItem_SetFocus1(q_graphicsproxywidget_as_q_graphics_item(self), focusReason);
}

void q_graphicsproxywidget_ensure_visible1(void* self, const void* rect) {
    QGraphicsItem_EnsureVisible1(q_graphicsproxywidget_as_q_graphics_item(self), (QRectF*)rect);
}

void q_graphicsproxywidget_ensure_visible22(void* self, const void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22(q_graphicsproxywidget_as_q_graphics_item(self), (QRectF*)rect, xmargin);
}

void q_graphicsproxywidget_ensure_visible3(void* self, const void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3(q_graphicsproxywidget_as_q_graphics_item(self), (QRectF*)rect, xmargin, ymargin);
}

void q_graphicsproxywidget_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5(q_graphicsproxywidget_as_q_graphics_item(self), x, y, w, h, xmargin);
}

void q_graphicsproxywidget_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6(q_graphicsproxywidget_as_q_graphics_item(self), x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicsproxywidget_item_transform2(const void* self, const void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2(q_graphicsproxywidget_as_q_graphics_item(self), (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicsproxywidget_set_transform2(void* self, const void* matrix, bool combine) {
    QGraphicsItem_SetTransform2(q_graphicsproxywidget_as_q_graphics_item(self), (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_colliding_items1(const void* self, int32_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1(q_graphicsproxywidget_as_q_graphics_item(self), mode);
    return _arr;
}

bool q_graphicsproxywidget_is_obscured1(const void* self, const void* rect) {
    return QGraphicsItem_IsObscured1(q_graphicsproxywidget_as_q_graphics_item(self), (QRectF*)rect);
}

void q_graphicsproxywidget_update1(void* self, const void* rect) {
    QGraphicsItem_Update1(q_graphicsproxywidget_as_q_graphics_item(self), (QRectF*)rect);
}

void q_graphicsproxywidget_scroll3(void* self, double dx, double dy, const void* rect) {
    QGraphicsItem_Scroll3(q_graphicsproxywidget_as_q_graphics_item(self), dx, dy, (QRectF*)rect);
}

void q_graphicsproxywidget_set_size_policy(void* self, const void* policy) {
    QGraphicsLayoutItem_SetSizePolicy(q_graphicsproxywidget_as_q_graphics_layout_item(self), (QSizePolicy*)policy);
}

void q_graphicsproxywidget_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2(q_graphicsproxywidget_as_q_graphics_layout_item(self), hPolicy, vPolicy);
}

QSizePolicy* q_graphicsproxywidget_size_policy(const void* self) {
    return QGraphicsLayoutItem_SizePolicy(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

void q_graphicsproxywidget_set_minimum_size(void* self, const void* size) {
    QGraphicsLayoutItem_SetMinimumSize(q_graphicsproxywidget_as_q_graphics_layout_item(self), (QSizeF*)size);
}

void q_graphicsproxywidget_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2(q_graphicsproxywidget_as_q_graphics_layout_item(self), w, h);
}

QSizeF* q_graphicsproxywidget_minimum_size(const void* self) {
    return QGraphicsLayoutItem_MinimumSize(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

void q_graphicsproxywidget_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth(q_graphicsproxywidget_as_q_graphics_layout_item(self), width);
}

double q_graphicsproxywidget_minimum_width(const void* self) {
    return QGraphicsLayoutItem_MinimumWidth(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

void q_graphicsproxywidget_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight(q_graphicsproxywidget_as_q_graphics_layout_item(self), height);
}

double q_graphicsproxywidget_minimum_height(const void* self) {
    return QGraphicsLayoutItem_MinimumHeight(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

void q_graphicsproxywidget_set_preferred_size(void* self, const void* size) {
    QGraphicsLayoutItem_SetPreferredSize(q_graphicsproxywidget_as_q_graphics_layout_item(self), (QSizeF*)size);
}

void q_graphicsproxywidget_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2(q_graphicsproxywidget_as_q_graphics_layout_item(self), w, h);
}

QSizeF* q_graphicsproxywidget_preferred_size(const void* self) {
    return QGraphicsLayoutItem_PreferredSize(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

void q_graphicsproxywidget_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth(q_graphicsproxywidget_as_q_graphics_layout_item(self), width);
}

double q_graphicsproxywidget_preferred_width(const void* self) {
    return QGraphicsLayoutItem_PreferredWidth(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

void q_graphicsproxywidget_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight(q_graphicsproxywidget_as_q_graphics_layout_item(self), height);
}

double q_graphicsproxywidget_preferred_height(const void* self) {
    return QGraphicsLayoutItem_PreferredHeight(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

void q_graphicsproxywidget_set_maximum_size(void* self, const void* size) {
    QGraphicsLayoutItem_SetMaximumSize(q_graphicsproxywidget_as_q_graphics_layout_item(self), (QSizeF*)size);
}

void q_graphicsproxywidget_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2(q_graphicsproxywidget_as_q_graphics_layout_item(self), w, h);
}

QSizeF* q_graphicsproxywidget_maximum_size(const void* self) {
    return QGraphicsLayoutItem_MaximumSize(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

void q_graphicsproxywidget_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth(q_graphicsproxywidget_as_q_graphics_layout_item(self), width);
}

double q_graphicsproxywidget_maximum_width(const void* self) {
    return QGraphicsLayoutItem_MaximumWidth(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

void q_graphicsproxywidget_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight(q_graphicsproxywidget_as_q_graphics_layout_item(self), height);
}

double q_graphicsproxywidget_maximum_height(const void* self) {
    return QGraphicsLayoutItem_MaximumHeight(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

QRectF* q_graphicsproxywidget_geometry(const void* self) {
    return QGraphicsLayoutItem_Geometry(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

QRectF* q_graphicsproxywidget_contents_rect(const void* self) {
    return QGraphicsLayoutItem_ContentsRect(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

QSizeF* q_graphicsproxywidget_effective_size_hint(const void* self, int32_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint(q_graphicsproxywidget_as_q_graphics_layout_item(self), which);
}

QGraphicsLayoutItem* q_graphicsproxywidget_parent_layout_item(const void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

void q_graphicsproxywidget_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem(q_graphicsproxywidget_as_q_graphics_layout_item(self), (QGraphicsLayoutItem*)parent);
}

bool q_graphicsproxywidget_is_layout(const void* self) {
    return QGraphicsLayoutItem_IsLayout(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

QGraphicsItem* q_graphicsproxywidget_graphics_item(const void* self) {
    return QGraphicsLayoutItem_GraphicsItem(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

bool q_graphicsproxywidget_owned_by_layout(const void* self) {
    return QGraphicsLayoutItem_OwnedByLayout(q_graphicsproxywidget_as_q_graphics_layout_item(self));
}

void q_graphicsproxywidget_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3(q_graphicsproxywidget_as_q_graphics_layout_item(self), hPolicy, vPolicy, controlType);
}

QSizeF* q_graphicsproxywidget_effective_size_hint2(const void* self, int32_t which, const void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2(q_graphicsproxywidget_as_q_graphics_layout_item(self), which, (QSizeF*)constraint);
}

void q_graphicsproxywidget_get_contents_margins(const void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsProxyWidget_GetContentsMargins((QGraphicsProxyWidget*)self, left, top, right, bottom);
}

void q_graphicsproxywidget_super_get_contents_margins(const void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsProxyWidget_SuperGetContentsMargins((QGraphicsProxyWidget*)self, left, top, right, bottom);
}

void q_graphicsproxywidget_on_get_contents_margins(void* self, void (*callback)(const void*, double*, double*, double*, double*)) {
    QGraphicsProxyWidget_OnGetContentsMargins((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_paint_window_frame(void* self, void* painter, const void* option, void* widget) {
    QGraphicsProxyWidget_PaintWindowFrame((QGraphicsProxyWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicsproxywidget_super_paint_window_frame(void* self, void* painter, const void* option, void* widget) {
    QGraphicsProxyWidget_SuperPaintWindowFrame((QGraphicsProxyWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicsproxywidget_on_paint_window_frame(void* self, void (*callback)(void*, void*, const void*, void*)) {
    QGraphicsProxyWidget_OnPaintWindowFrame((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

QRectF* q_graphicsproxywidget_bounding_rect(const void* self) {
    return QGraphicsProxyWidget_BoundingRect((QGraphicsProxyWidget*)self);
}

QRectF* q_graphicsproxywidget_super_bounding_rect(const void* self) {
    return QGraphicsProxyWidget_SuperBoundingRect((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_bounding_rect(void* self, QRectF* (*callback)(const void*)) {
    QGraphicsProxyWidget_OnBoundingRect((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

QPainterPath* q_graphicsproxywidget_shape(const void* self) {
    return QGraphicsProxyWidget_Shape((QGraphicsProxyWidget*)self);
}

QPainterPath* q_graphicsproxywidget_super_shape(const void* self) {
    return QGraphicsProxyWidget_SuperShape((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_shape(void* self, QPainterPath* (*callback)(const void*)) {
    QGraphicsProxyWidget_OnShape((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_init_style_option(const void* self, void* option) {
    QGraphicsProxyWidget_InitStyleOption((QGraphicsProxyWidget*)self, (QStyleOption*)option);
}

void q_graphicsproxywidget_super_init_style_option(const void* self, void* option) {
    QGraphicsProxyWidget_SuperInitStyleOption((QGraphicsProxyWidget*)self, (QStyleOption*)option);
}

void q_graphicsproxywidget_on_init_style_option(void* self, void (*callback)(const void*, void*)) {
    QGraphicsProxyWidget_OnInitStyleOption((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_update_geometry(void* self) {
    QGraphicsProxyWidget_UpdateGeometry((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_super_update_geometry(void* self) {
    QGraphicsProxyWidget_SuperUpdateGeometry((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_update_geometry(void* self, void (*callback)(void*)) {
    QGraphicsProxyWidget_OnUpdateGeometry((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

QVariant* q_graphicsproxywidget_property_change(void* self, const char* propertyName, const void* value) {
    return QGraphicsProxyWidget_PropertyChange((QGraphicsProxyWidget*)self, qstring(propertyName), (QVariant*)value);
}

QVariant* q_graphicsproxywidget_super_property_change(void* self, const char* propertyName, const void* value) {
    return QGraphicsProxyWidget_SuperPropertyChange((QGraphicsProxyWidget*)self, qstring(propertyName), (QVariant*)value);
}

void q_graphicsproxywidget_on_property_change(void* self, QVariant* (*callback)(void*, const char*, const void*)) {
    QGraphicsProxyWidget_OnPropertyChange((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

bool q_graphicsproxywidget_scene_event(void* self, void* event) {
    return QGraphicsProxyWidget_SceneEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

bool q_graphicsproxywidget_super_scene_event(void* self, void* event) {
    return QGraphicsProxyWidget_SuperSceneEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_scene_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnSceneEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

bool q_graphicsproxywidget_window_frame_event(void* self, void* e) {
    return QGraphicsProxyWidget_WindowFrameEvent((QGraphicsProxyWidget*)self, (QEvent*)e);
}

bool q_graphicsproxywidget_super_window_frame_event(void* self, void* e) {
    return QGraphicsProxyWidget_SuperWindowFrameEvent((QGraphicsProxyWidget*)self, (QEvent*)e);
}

void q_graphicsproxywidget_on_window_frame_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnWindowFrameEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

int32_t q_graphicsproxywidget_window_frame_section_at(const void* self, const void* pos) {
    return QGraphicsProxyWidget_WindowFrameSectionAt((QGraphicsProxyWidget*)self, (QPointF*)pos);
}

int32_t q_graphicsproxywidget_super_window_frame_section_at(const void* self, const void* pos) {
    return QGraphicsProxyWidget_SuperWindowFrameSectionAt((QGraphicsProxyWidget*)self, (QPointF*)pos);
}

void q_graphicsproxywidget_on_window_frame_section_at(void* self, int32_t (*callback)(const void*, const void*)) {
    QGraphicsProxyWidget_OnWindowFrameSectionAt((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_change_event(void* self, void* event) {
    QGraphicsProxyWidget_ChangeEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_super_change_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperChangeEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnChangeEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_close_event(void* self, void* event) {
    QGraphicsProxyWidget_CloseEvent((QGraphicsProxyWidget*)self, (QCloseEvent*)event);
}

void q_graphicsproxywidget_super_close_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperCloseEvent((QGraphicsProxyWidget*)self, (QCloseEvent*)event);
}

void q_graphicsproxywidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnCloseEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_move_event(void* self, void* event) {
    QGraphicsProxyWidget_MoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMoveEvent*)event);
}

void q_graphicsproxywidget_super_move_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMoveEvent*)event);
}

void q_graphicsproxywidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnMoveEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_polish_event(void* self) {
    QGraphicsProxyWidget_PolishEvent((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_super_polish_event(void* self) {
    QGraphicsProxyWidget_SuperPolishEvent((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_polish_event(void* self, void (*callback)(void*)) {
    QGraphicsProxyWidget_OnPolishEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_grab_keyboard_event(void* self, void* event) {
    QGraphicsProxyWidget_GrabKeyboardEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_super_grab_keyboard_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperGrabKeyboardEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_grab_keyboard_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnGrabKeyboardEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_ungrab_keyboard_event(void* self, void* event) {
    QGraphicsProxyWidget_UngrabKeyboardEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_super_ungrab_keyboard_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperUngrabKeyboardEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_ungrab_keyboard_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnUngrabKeyboardEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_timer_event(void* self, void* event) {
    QGraphicsProxyWidget_TimerEvent((QGraphicsProxyWidget*)self, (QTimerEvent*)event);
}

void q_graphicsproxywidget_super_timer_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperTimerEvent((QGraphicsProxyWidget*)self, (QTimerEvent*)event);
}

void q_graphicsproxywidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnTimerEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_child_event(void* self, void* event) {
    QGraphicsProxyWidget_ChildEvent((QGraphicsProxyWidget*)self, (QChildEvent*)event);
}

void q_graphicsproxywidget_super_child_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperChildEvent((QGraphicsProxyWidget*)self, (QChildEvent*)event);
}

void q_graphicsproxywidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnChildEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_custom_event(void* self, void* event) {
    QGraphicsProxyWidget_CustomEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_super_custom_event(void* self, void* event) {
    QGraphicsProxyWidget_SuperCustomEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsProxyWidget_OnCustomEvent((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_connect_notify(void* self, const void* signal) {
    QGraphicsProxyWidget_ConnectNotify((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

void q_graphicsproxywidget_super_connect_notify(void* self, const void* signal) {
    QGraphicsProxyWidget_SuperConnectNotify((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

void q_graphicsproxywidget_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QGraphicsProxyWidget_OnConnectNotify((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_disconnect_notify(void* self, const void* signal) {
    QGraphicsProxyWidget_DisconnectNotify((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

void q_graphicsproxywidget_super_disconnect_notify(void* self, const void* signal) {
    QGraphicsProxyWidget_SuperDisconnectNotify((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

void q_graphicsproxywidget_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QGraphicsProxyWidget_OnDisconnectNotify((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_advance(void* self, int phase) {
    QGraphicsProxyWidget_Advance((QGraphicsProxyWidget*)self, phase);
}

void q_graphicsproxywidget_super_advance(void* self, int phase) {
    QGraphicsProxyWidget_SuperAdvance((QGraphicsProxyWidget*)self, phase);
}

void q_graphicsproxywidget_on_advance(void* self, void (*callback)(void*, int)) {
    QGraphicsProxyWidget_OnAdvance((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

bool q_graphicsproxywidget_contains(const void* self, const void* point) {
    return QGraphicsProxyWidget_Contains((QGraphicsProxyWidget*)self, (QPointF*)point);
}

bool q_graphicsproxywidget_super_contains(const void* self, const void* point) {
    return QGraphicsProxyWidget_SuperContains((QGraphicsProxyWidget*)self, (QPointF*)point);
}

void q_graphicsproxywidget_on_contains(void* self, bool (*callback)(const void*, const void*)) {
    QGraphicsProxyWidget_OnContains((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

bool q_graphicsproxywidget_collides_with_item(const void* self, const void* other, int32_t mode) {
    return QGraphicsProxyWidget_CollidesWithItem((QGraphicsProxyWidget*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicsproxywidget_super_collides_with_item(const void* self, const void* other, int32_t mode) {
    return QGraphicsProxyWidget_SuperCollidesWithItem((QGraphicsProxyWidget*)self, (QGraphicsItem*)other, mode);
}

void q_graphicsproxywidget_on_collides_with_item(void* self, bool (*callback)(const void*, const void*, int32_t)) {
    QGraphicsProxyWidget_OnCollidesWithItem((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

bool q_graphicsproxywidget_collides_with_path(const void* self, const void* path, int32_t mode) {
    return QGraphicsProxyWidget_CollidesWithPath((QGraphicsProxyWidget*)self, (QPainterPath*)path, mode);
}

bool q_graphicsproxywidget_super_collides_with_path(const void* self, const void* path, int32_t mode) {
    return QGraphicsProxyWidget_SuperCollidesWithPath((QGraphicsProxyWidget*)self, (QPainterPath*)path, mode);
}

void q_graphicsproxywidget_on_collides_with_path(void* self, bool (*callback)(const void*, const void*, int32_t)) {
    QGraphicsProxyWidget_OnCollidesWithPath((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

bool q_graphicsproxywidget_is_obscured_by(const void* self, const void* item) {
    return QGraphicsProxyWidget_IsObscuredBy((QGraphicsProxyWidget*)self, (QGraphicsItem*)item);
}

bool q_graphicsproxywidget_super_is_obscured_by(const void* self, const void* item) {
    return QGraphicsProxyWidget_SuperIsObscuredBy((QGraphicsProxyWidget*)self, (QGraphicsItem*)item);
}

void q_graphicsproxywidget_on_is_obscured_by(void* self, bool (*callback)(const void*, const void*)) {
    QGraphicsProxyWidget_OnIsObscuredBy((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

QPainterPath* q_graphicsproxywidget_opaque_area(const void* self) {
    return QGraphicsProxyWidget_OpaqueArea((QGraphicsProxyWidget*)self);
}

QPainterPath* q_graphicsproxywidget_super_opaque_area(const void* self) {
    return QGraphicsProxyWidget_SuperOpaqueArea((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_opaque_area(void* self, QPainterPath* (*callback)(const void*)) {
    QGraphicsProxyWidget_OnOpaqueArea((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

bool q_graphicsproxywidget_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsProxyWidget_SceneEventFilter((QGraphicsProxyWidget*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicsproxywidget_super_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsProxyWidget_SuperSceneEventFilter((QGraphicsProxyWidget*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicsproxywidget_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsProxyWidget_OnSceneEventFilter((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

bool q_graphicsproxywidget_supports_extension(const void* self, int32_t extension) {
    return QGraphicsProxyWidget_SupportsExtension((QGraphicsProxyWidget*)self, extension);
}

bool q_graphicsproxywidget_super_supports_extension(const void* self, int32_t extension) {
    return QGraphicsProxyWidget_SuperSupportsExtension((QGraphicsProxyWidget*)self, extension);
}

void q_graphicsproxywidget_on_supports_extension(void* self, bool (*callback)(const void*, int32_t)) {
    QGraphicsProxyWidget_OnSupportsExtension((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_set_extension(void* self, int32_t extension, const void* variant) {
    QGraphicsProxyWidget_SetExtension((QGraphicsProxyWidget*)self, extension, (QVariant*)variant);
}

void q_graphicsproxywidget_super_set_extension(void* self, int32_t extension, const void* variant) {
    QGraphicsProxyWidget_SuperSetExtension((QGraphicsProxyWidget*)self, extension, (QVariant*)variant);
}

void q_graphicsproxywidget_on_set_extension(void* self, void (*callback)(void*, int32_t, const void*)) {
    QGraphicsProxyWidget_OnSetExtension((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

QVariant* q_graphicsproxywidget_extension(const void* self, const void* variant) {
    return QGraphicsProxyWidget_Extension((QGraphicsProxyWidget*)self, (QVariant*)variant);
}

QVariant* q_graphicsproxywidget_super_extension(const void* self, const void* variant) {
    return QGraphicsProxyWidget_SuperExtension((QGraphicsProxyWidget*)self, (QVariant*)variant);
}

void q_graphicsproxywidget_on_extension(void* self, QVariant* (*callback)(const void*, const void*)) {
    QGraphicsProxyWidget_OnExtension((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

bool q_graphicsproxywidget_is_empty(const void* self) {
    return QGraphicsProxyWidget_IsEmpty((QGraphicsProxyWidget*)self);
}

bool q_graphicsproxywidget_super_is_empty(const void* self) {
    return QGraphicsProxyWidget_SuperIsEmpty((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_is_empty(void* self, bool (*callback)(const void*)) {
    QGraphicsProxyWidget_OnIsEmpty((QGraphicsProxyWidget*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_update_micro_focus(void* self) {
    QGraphicsProxyWidget_UpdateMicroFocus((QGraphicsProxyWidget*)self);
}

QObject* q_graphicsproxywidget_sender(const void* self) {
    return QGraphicsProxyWidget_Sender((QGraphicsProxyWidget*)self);
}

int32_t q_graphicsproxywidget_sender_signal_index(const void* self) {
    return QGraphicsProxyWidget_SenderSignalIndex((QGraphicsProxyWidget*)self);
}

int32_t q_graphicsproxywidget_receivers(const void* self, const char* signal) {
    return QGraphicsProxyWidget_Receivers((QGraphicsProxyWidget*)self, signal);
}

bool q_graphicsproxywidget_is_signal_connected(const void* self, const void* signal) {
    return QGraphicsProxyWidget_IsSignalConnected((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

void q_graphicsproxywidget_add_to_index(void* self) {
    QGraphicsProxyWidget_AddToIndex((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_remove_from_index(void* self) {
    QGraphicsProxyWidget_RemoveFromIndex((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_prepare_geometry_change(void* self) {
    QGraphicsProxyWidget_PrepareGeometryChange((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_set_graphics_item(void* self, void* item) {
    QGraphicsProxyWidget_SetGraphicsItem((QGraphicsProxyWidget*)self, (QGraphicsItem*)item);
}

void q_graphicsproxywidget_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsProxyWidget_SetOwnedByLayout((QGraphicsProxyWidget*)self, ownedByLayout);
}

void q_graphicsproxywidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_graphicsproxywidget_delete(void* self) {
    QGraphicsProxyWidget_Delete((QGraphicsProxyWidget*)(self));
}

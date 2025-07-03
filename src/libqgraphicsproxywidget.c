#include "libqevent.hpp"
#include "libqgraphicsitem.hpp"
#include "libqgraphicslayoutitem.hpp"
#include "libqgraphicswidget.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqpainterpath.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqgraphicsproxywidget.h"

QGraphicsProxyWidget* q_graphicsproxywidget_new() {
    return QGraphicsProxyWidget_new();
}

QGraphicsProxyWidget* q_graphicsproxywidget_new2(void* parent) {
    return QGraphicsProxyWidget_new2((QGraphicsItem*)parent);
}

QGraphicsProxyWidget* q_graphicsproxywidget_new3(void* parent, int64_t wFlags) {
    return QGraphicsProxyWidget_new3((QGraphicsItem*)parent, wFlags);
}

const QMetaObject* q_graphicsproxywidget_meta_object(void* self) {
    return QGraphicsProxyWidget_MetaObject((QGraphicsProxyWidget*)self);
}

void* q_graphicsproxywidget_metacast(void* self, const char* param1) {
    return QGraphicsProxyWidget_Metacast((QGraphicsProxyWidget*)self, param1);
}

int32_t q_graphicsproxywidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsProxyWidget_Metacall((QGraphicsProxyWidget*)self, param1, param2, param3);
}

void q_graphicsproxywidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsProxyWidget_OnMetacall((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

int32_t q_graphicsproxywidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsProxyWidget_QBaseMetacall((QGraphicsProxyWidget*)self, param1, param2, param3);
}

const char* q_graphicsproxywidget_tr(const char* s) {
    libqt_string _str = QGraphicsProxyWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsproxywidget_set_widget(void* self, void* widget) {
    QGraphicsProxyWidget_SetWidget((QGraphicsProxyWidget*)self, (QWidget*)widget);
}

QWidget* q_graphicsproxywidget_widget(void* self) {
    return QGraphicsProxyWidget_Widget((QGraphicsProxyWidget*)self);
}

QRectF* q_graphicsproxywidget_sub_widget_rect(void* self, void* widget) {
    return QGraphicsProxyWidget_SubWidgetRect((QGraphicsProxyWidget*)self, (QWidget*)widget);
}

void q_graphicsproxywidget_set_geometry(void* self, void* rect) {
    QGraphicsProxyWidget_SetGeometry((QGraphicsProxyWidget*)self, (QRectF*)rect);
}

void q_graphicsproxywidget_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnSetGeometry((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_set_geometry(void* self, void* rect) {
    QGraphicsProxyWidget_QBaseSetGeometry((QGraphicsProxyWidget*)self, (QRectF*)rect);
}

void q_graphicsproxywidget_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsProxyWidget_Paint((QGraphicsProxyWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicsproxywidget_on_paint(void* self, void (*slot)(void*, void*, void*, void*)) {
    QGraphicsProxyWidget_OnPaint((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsProxyWidget_QBasePaint((QGraphicsProxyWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

int32_t q_graphicsproxywidget_type(void* self) {
    return QGraphicsProxyWidget_Type((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_type(void* self, int32_t (*slot)()) {
    QGraphicsProxyWidget_OnType((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

int32_t q_graphicsproxywidget_qbase_type(void* self) {
    return QGraphicsProxyWidget_QBaseType((QGraphicsProxyWidget*)self);
}

QGraphicsProxyWidget* q_graphicsproxywidget_create_proxy_for_child_widget(void* self, void* child) {
    return QGraphicsProxyWidget_CreateProxyForChildWidget((QGraphicsProxyWidget*)self, (QWidget*)child);
}

QVariant* q_graphicsproxywidget_item_change(void* self, int64_t change, void* value) {
    return QGraphicsProxyWidget_ItemChange((QGraphicsProxyWidget*)self, change, (QVariant*)value);
}

void q_graphicsproxywidget_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*)) {
    QGraphicsProxyWidget_OnItemChange((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

QVariant* q_graphicsproxywidget_qbase_item_change(void* self, int64_t change, void* value) {
    return QGraphicsProxyWidget_QBaseItemChange((QGraphicsProxyWidget*)self, change, (QVariant*)value);
}

bool q_graphicsproxywidget_event(void* self, void* event) {
    return QGraphicsProxyWidget_Event((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

bool q_graphicsproxywidget_qbase_event(void* self, void* event) {
    return QGraphicsProxyWidget_QBaseEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

bool q_graphicsproxywidget_event_filter(void* self, void* object, void* event) {
    return QGraphicsProxyWidget_EventFilter((QGraphicsProxyWidget*)self, (QObject*)object, (QEvent*)event);
}

void q_graphicsproxywidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsProxyWidget_OnEventFilter((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

bool q_graphicsproxywidget_qbase_event_filter(void* self, void* object, void* event) {
    return QGraphicsProxyWidget_QBaseEventFilter((QGraphicsProxyWidget*)self, (QObject*)object, (QEvent*)event);
}

void q_graphicsproxywidget_show_event(void* self, void* event) {
    QGraphicsProxyWidget_ShowEvent((QGraphicsProxyWidget*)self, (QShowEvent*)event);
}

void q_graphicsproxywidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnShowEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_show_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseShowEvent((QGraphicsProxyWidget*)self, (QShowEvent*)event);
}

void q_graphicsproxywidget_hide_event(void* self, void* event) {
    QGraphicsProxyWidget_HideEvent((QGraphicsProxyWidget*)self, (QHideEvent*)event);
}

void q_graphicsproxywidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnHideEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_hide_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseHideEvent((QGraphicsProxyWidget*)self, (QHideEvent*)event);
}

void q_graphicsproxywidget_context_menu_event(void* self, void* event) {
    QGraphicsProxyWidget_ContextMenuEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsproxywidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnContextMenuEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_context_menu_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseContextMenuEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneContextMenuEvent*)event);
}

void q_graphicsproxywidget_drag_enter_event(void* self, void* event) {
    QGraphicsProxyWidget_DragEnterEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnDragEnterEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_drag_enter_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseDragEnterEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_drag_leave_event(void* self, void* event) {
    QGraphicsProxyWidget_DragLeaveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnDragLeaveEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_drag_leave_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseDragLeaveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_drag_move_event(void* self, void* event) {
    QGraphicsProxyWidget_DragMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnDragMoveEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_drag_move_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseDragMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_drop_event(void* self, void* event) {
    QGraphicsProxyWidget_DropEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnDropEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_drop_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseDropEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

void q_graphicsproxywidget_hover_enter_event(void* self, void* event) {
    QGraphicsProxyWidget_HoverEnterEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsproxywidget_on_hover_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnHoverEnterEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_hover_enter_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseHoverEnterEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsproxywidget_hover_leave_event(void* self, void* event) {
    QGraphicsProxyWidget_HoverLeaveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsproxywidget_on_hover_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnHoverLeaveEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_hover_leave_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseHoverLeaveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsproxywidget_hover_move_event(void* self, void* event) {
    QGraphicsProxyWidget_HoverMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsproxywidget_on_hover_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnHoverMoveEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_hover_move_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseHoverMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

void q_graphicsproxywidget_grab_mouse_event(void* self, void* event) {
    QGraphicsProxyWidget_GrabMouseEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_grab_mouse_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnGrabMouseEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_grab_mouse_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseGrabMouseEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_ungrab_mouse_event(void* self, void* event) {
    QGraphicsProxyWidget_UngrabMouseEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_ungrab_mouse_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnUngrabMouseEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_ungrab_mouse_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseUngrabMouseEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_mouse_move_event(void* self, void* event) {
    QGraphicsProxyWidget_MouseMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnMouseMoveEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_mouse_move_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseMouseMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_mouse_press_event(void* self, void* event) {
    QGraphicsProxyWidget_MousePressEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnMousePressEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_mouse_press_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseMousePressEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_mouse_release_event(void* self, void* event) {
    QGraphicsProxyWidget_MouseReleaseEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnMouseReleaseEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_mouse_release_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseMouseReleaseEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_mouse_double_click_event(void* self, void* event) {
    QGraphicsProxyWidget_MouseDoubleClickEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnMouseDoubleClickEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_mouse_double_click_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseMouseDoubleClickEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

void q_graphicsproxywidget_wheel_event(void* self, void* event) {
    QGraphicsProxyWidget_WheelEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsproxywidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnWheelEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_wheel_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseWheelEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneWheelEvent*)event);
}

void q_graphicsproxywidget_key_press_event(void* self, void* event) {
    QGraphicsProxyWidget_KeyPressEvent((QGraphicsProxyWidget*)self, (QKeyEvent*)event);
}

void q_graphicsproxywidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnKeyPressEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_key_press_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseKeyPressEvent((QGraphicsProxyWidget*)self, (QKeyEvent*)event);
}

void q_graphicsproxywidget_key_release_event(void* self, void* event) {
    QGraphicsProxyWidget_KeyReleaseEvent((QGraphicsProxyWidget*)self, (QKeyEvent*)event);
}

void q_graphicsproxywidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnKeyReleaseEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_key_release_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseKeyReleaseEvent((QGraphicsProxyWidget*)self, (QKeyEvent*)event);
}

void q_graphicsproxywidget_focus_in_event(void* self, void* event) {
    QGraphicsProxyWidget_FocusInEvent((QGraphicsProxyWidget*)self, (QFocusEvent*)event);
}

void q_graphicsproxywidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnFocusInEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_focus_in_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseFocusInEvent((QGraphicsProxyWidget*)self, (QFocusEvent*)event);
}

void q_graphicsproxywidget_focus_out_event(void* self, void* event) {
    QGraphicsProxyWidget_FocusOutEvent((QGraphicsProxyWidget*)self, (QFocusEvent*)event);
}

void q_graphicsproxywidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnFocusOutEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_focus_out_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseFocusOutEvent((QGraphicsProxyWidget*)self, (QFocusEvent*)event);
}

bool q_graphicsproxywidget_focus_next_prev_child(void* self, bool next) {
    return QGraphicsProxyWidget_FocusNextPrevChild((QGraphicsProxyWidget*)self, next);
}

void q_graphicsproxywidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QGraphicsProxyWidget_OnFocusNextPrevChild((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

bool q_graphicsproxywidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QGraphicsProxyWidget_QBaseFocusNextPrevChild((QGraphicsProxyWidget*)self, next);
}

QVariant* q_graphicsproxywidget_input_method_query(void* self, int64_t query) {
    return QGraphicsProxyWidget_InputMethodQuery((QGraphicsProxyWidget*)self, query);
}

void q_graphicsproxywidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QGraphicsProxyWidget_OnInputMethodQuery((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

QVariant* q_graphicsproxywidget_qbase_input_method_query(void* self, int64_t query) {
    return QGraphicsProxyWidget_QBaseInputMethodQuery((QGraphicsProxyWidget*)self, query);
}

void q_graphicsproxywidget_input_method_event(void* self, void* event) {
    QGraphicsProxyWidget_InputMethodEvent((QGraphicsProxyWidget*)self, (QInputMethodEvent*)event);
}

void q_graphicsproxywidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnInputMethodEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_input_method_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseInputMethodEvent((QGraphicsProxyWidget*)self, (QInputMethodEvent*)event);
}

QSizeF* q_graphicsproxywidget_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsProxyWidget_SizeHint((QGraphicsProxyWidget*)self, which, (QSizeF*)constraint);
}

void q_graphicsproxywidget_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*)) {
    QGraphicsProxyWidget_OnSizeHint((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

QSizeF* q_graphicsproxywidget_qbase_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsProxyWidget_QBaseSizeHint((QGraphicsProxyWidget*)self, which, (QSizeF*)constraint);
}

void q_graphicsproxywidget_resize_event(void* self, void* event) {
    QGraphicsProxyWidget_ResizeEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneResizeEvent*)event);
}

void q_graphicsproxywidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnResizeEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_qbase_resize_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseResizeEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneResizeEvent*)event);
}

QGraphicsProxyWidget* q_graphicsproxywidget_new_proxy_widget(void* self, void* param1) {
    return QGraphicsProxyWidget_NewProxyWidget((QGraphicsProxyWidget*)self, (QWidget*)param1);
}

void q_graphicsproxywidget_on_new_proxy_widget(void* self, QGraphicsProxyWidget* (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnNewProxyWidget((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

QGraphicsProxyWidget* q_graphicsproxywidget_qbase_new_proxy_widget(void* self, void* param1) {
    return QGraphicsProxyWidget_QBaseNewProxyWidget((QGraphicsProxyWidget*)self, (QWidget*)param1);
}

const char* q_graphicsproxywidget_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsProxyWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsproxywidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsProxyWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QGraphicsLayout* q_graphicsproxywidget_layout(void* self) {
    return QGraphicsWidget_Layout((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_layout(void* self, void* layout) {
    QGraphicsWidget_SetLayout((QGraphicsWidget*)self, (QGraphicsLayout*)layout);
}

void q_graphicsproxywidget_adjust_size(void* self) {
    QGraphicsWidget_AdjustSize((QGraphicsWidget*)self);
}

int64_t q_graphicsproxywidget_layout_direction(void* self) {
    return QGraphicsWidget_LayoutDirection((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_layout_direction(void* self, int64_t direction) {
    QGraphicsWidget_SetLayoutDirection((QGraphicsWidget*)self, direction);
}

void q_graphicsproxywidget_unset_layout_direction(void* self) {
    QGraphicsWidget_UnsetLayoutDirection((QGraphicsWidget*)self);
}

QStyle* q_graphicsproxywidget_style(void* self) {
    return QGraphicsWidget_Style((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_style(void* self, void* style) {
    QGraphicsWidget_SetStyle((QGraphicsWidget*)self, (QStyle*)style);
}

QFont* q_graphicsproxywidget_font(void* self) {
    return QGraphicsWidget_Font((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_font(void* self, void* font) {
    QGraphicsWidget_SetFont((QGraphicsWidget*)self, (QFont*)font);
}

QPalette* q_graphicsproxywidget_palette(void* self) {
    return QGraphicsWidget_Palette((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_palette(void* self, void* palette) {
    QGraphicsWidget_SetPalette((QGraphicsWidget*)self, (QPalette*)palette);
}

bool q_graphicsproxywidget_auto_fill_background(void* self) {
    return QGraphicsWidget_AutoFillBackground((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_auto_fill_background(void* self, bool enabled) {
    QGraphicsWidget_SetAutoFillBackground((QGraphicsWidget*)self, enabled);
}

void q_graphicsproxywidget_resize(void* self, void* size) {
    QGraphicsWidget_Resize((QGraphicsWidget*)self, (QSizeF*)size);
}

void q_graphicsproxywidget_resize2(void* self, double w, double h) {
    QGraphicsWidget_Resize2((QGraphicsWidget*)self, w, h);
}

QSizeF* q_graphicsproxywidget_size(void* self) {
    return QGraphicsWidget_Size((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_geometry2(void* self, double x, double y, double w, double h) {
    QGraphicsWidget_SetGeometry2((QGraphicsWidget*)self, x, y, w, h);
}

QRectF* q_graphicsproxywidget_rect(void* self) {
    return QGraphicsWidget_Rect((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_graphicsproxywidget_set_contents_margins_with_margins(void* self, void* margins) {
    QGraphicsWidget_SetContentsMarginsWithMargins((QGraphicsWidget*)self, (QMarginsF*)margins);
}

void q_graphicsproxywidget_set_window_frame_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_graphicsproxywidget_set_window_frame_margins_with_margins(void* self, void* margins) {
    QGraphicsWidget_SetWindowFrameMarginsWithMargins((QGraphicsWidget*)self, (QMarginsF*)margins);
}

void q_graphicsproxywidget_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_GetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

void q_graphicsproxywidget_unset_window_frame_margins(void* self) {
    QGraphicsWidget_UnsetWindowFrameMargins((QGraphicsWidget*)self);
}

QRectF* q_graphicsproxywidget_window_frame_geometry(void* self) {
    return QGraphicsWidget_WindowFrameGeometry((QGraphicsWidget*)self);
}

QRectF* q_graphicsproxywidget_window_frame_rect(void* self) {
    return QGraphicsWidget_WindowFrameRect((QGraphicsWidget*)self);
}

int64_t q_graphicsproxywidget_window_flags(void* self) {
    return QGraphicsWidget_WindowFlags((QGraphicsWidget*)self);
}

int64_t q_graphicsproxywidget_window_type(void* self) {
    return QGraphicsWidget_WindowType((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_window_flags(void* self, int64_t wFlags) {
    QGraphicsWidget_SetWindowFlags((QGraphicsWidget*)self, wFlags);
}

bool q_graphicsproxywidget_is_active_window(void* self) {
    return QGraphicsWidget_IsActiveWindow((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_window_title(void* self, const char* title) {
    QGraphicsWidget_SetWindowTitle((QGraphicsWidget*)self, qstring(title));
}

const char* q_graphicsproxywidget_window_title(void* self) {
    libqt_string _str = QGraphicsWidget_WindowTitle((QGraphicsWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_graphicsproxywidget_focus_policy(void* self) {
    return QGraphicsWidget_FocusPolicy((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_set_focus_policy(void* self, int64_t policy) {
    QGraphicsWidget_SetFocusPolicy((QGraphicsWidget*)self, policy);
}

void q_graphicsproxywidget_set_tab_order(void* first, void* second) {
    QGraphicsWidget_SetTabOrder((QGraphicsWidget*)first, (QGraphicsWidget*)second);
}

QGraphicsWidget* q_graphicsproxywidget_focus_widget(void* self) {
    return QGraphicsWidget_FocusWidget((QGraphicsWidget*)self);
}

int32_t q_graphicsproxywidget_grab_shortcut(void* self, void* sequence) {
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

void q_graphicsproxywidget_add_actions(void* self, libqt_list actions) {
    QGraphicsWidget_AddActions((QGraphicsWidget*)self, actions);
}

void q_graphicsproxywidget_insert_actions(void* self, void* before, libqt_list actions) {
    QGraphicsWidget_InsertActions((QGraphicsWidget*)self, (QAction*)before, actions);
}

void q_graphicsproxywidget_insert_action(void* self, void* before, void* action) {
    QGraphicsWidget_InsertAction((QGraphicsWidget*)self, (QAction*)before, (QAction*)action);
}

void q_graphicsproxywidget_remove_action(void* self, void* action) {
    QGraphicsWidget_RemoveAction((QGraphicsWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_graphicsproxywidget_actions(void* self) {
    libqt_list _arr = QGraphicsWidget_Actions((QGraphicsWidget*)self);
    return _arr;
}

void q_graphicsproxywidget_set_attribute(void* self, int64_t attribute) {
    QGraphicsWidget_SetAttribute((QGraphicsWidget*)self, attribute);
}

bool q_graphicsproxywidget_test_attribute(void* self, int64_t attribute) {
    return QGraphicsWidget_TestAttribute((QGraphicsWidget*)self, attribute);
}

void q_graphicsproxywidget_geometry_changed(void* self) {
    QGraphicsWidget_GeometryChanged((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_on_geometry_changed(void* self, void (*slot)(void*)) {
    QGraphicsWidget_Connect_GeometryChanged((QGraphicsWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_layout_changed(void* self) {
    QGraphicsWidget_LayoutChanged((QGraphicsWidget*)self);
}

void q_graphicsproxywidget_on_layout_changed(void* self, void (*slot)(void*)) {
    QGraphicsWidget_Connect_LayoutChanged((QGraphicsWidget*)self, (intptr_t)slot);
}

bool q_graphicsproxywidget_close(void* self) {
    return QGraphicsWidget_Close((QGraphicsWidget*)self);
}

int32_t q_graphicsproxywidget_grab_shortcut2(void* self, void* sequence, int64_t context) {
    return QGraphicsWidget_GrabShortcut2((QGraphicsWidget*)self, (QKeySequence*)sequence, context);
}

void q_graphicsproxywidget_set_shortcut_enabled2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutEnabled2((QGraphicsWidget*)self, id, enabled);
}

void q_graphicsproxywidget_set_shortcut_auto_repeat2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutAutoRepeat2((QGraphicsWidget*)self, id, enabled);
}

void q_graphicsproxywidget_set_attribute2(void* self, int64_t attribute, bool on) {
    QGraphicsWidget_SetAttribute2((QGraphicsWidget*)self, attribute, on);
}

void q_graphicsproxywidget_grab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, typeVal);
}

void q_graphicsproxywidget_ungrab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, typeVal);
}

void q_graphicsproxywidget_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_parent_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_opacity_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_visible_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_enabled_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_x_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_y_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_z_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_rotation_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_scale_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_children_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_width_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

void q_graphicsproxywidget_on_height_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, typeVal, flags);
}

const char* q_graphicsproxywidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsproxywidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicsproxywidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicsproxywidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicsproxywidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicsproxywidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicsproxywidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicsproxywidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_graphicsproxywidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicsproxywidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_graphicsproxywidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicsproxywidget_children(void* self) {
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

QMetaObject__Connection* q_graphicsproxywidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicsproxywidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicsproxywidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicsproxywidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_graphicsproxywidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicsproxywidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicsproxywidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicsproxywidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicsproxywidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_graphicsproxywidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicsproxywidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicsproxywidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicsproxywidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_graphicsproxywidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicsproxywidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicsproxywidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_graphicsproxywidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_graphicsproxywidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_graphicsproxywidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_graphicsproxywidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicsproxywidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

QGraphicsScene* q_graphicsproxywidget_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsproxywidget_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsproxywidget_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicsproxywidget_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsproxywidget_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsproxywidget_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

QGraphicsWidget* q_graphicsproxywidget_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsproxywidget_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicsproxywidget_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

bool q_graphicsproxywidget_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

bool q_graphicsproxywidget_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

QGraphicsObject* q_graphicsproxywidget_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

const QGraphicsObject* q_graphicsproxywidget_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

QGraphicsItemGroup* q_graphicsproxywidget_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

int64_t q_graphicsproxywidget_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_flag(void* self, int64_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

void q_graphicsproxywidget_set_flags(void* self, int64_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

int64_t q_graphicsproxywidget_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_cache_mode(void* self, int64_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

int64_t q_graphicsproxywidget_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_panel_modality(void* self, int64_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

bool q_graphicsproxywidget_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

const char* q_graphicsproxywidget_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsproxywidget_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

QCursor* q_graphicsproxywidget_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

bool q_graphicsproxywidget_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

void q_graphicsproxywidget_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

bool q_graphicsproxywidget_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

bool q_graphicsproxywidget_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

void q_graphicsproxywidget_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

void q_graphicsproxywidget_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

void q_graphicsproxywidget_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

bool q_graphicsproxywidget_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

bool q_graphicsproxywidget_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

bool q_graphicsproxywidget_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

double q_graphicsproxywidget_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

double q_graphicsproxywidget_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

QGraphicsEffect* q_graphicsproxywidget_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

int64_t q_graphicsproxywidget_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_accepted_mouse_buttons(void* self, int64_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

bool q_graphicsproxywidget_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsproxywidget_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsproxywidget_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsproxywidget_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

bool q_graphicsproxywidget_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

bool q_graphicsproxywidget_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

void q_graphicsproxywidget_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsproxywidget_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

QGraphicsItem* q_graphicsproxywidget_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

QGraphicsItem* q_graphicsproxywidget_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

void q_graphicsproxywidget_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

void q_graphicsproxywidget_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

void q_graphicsproxywidget_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

void q_graphicsproxywidget_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

QPointF* q_graphicsproxywidget_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

double q_graphicsproxywidget_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

double q_graphicsproxywidget_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

QPointF* q_graphicsproxywidget_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

void q_graphicsproxywidget_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

void q_graphicsproxywidget_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

void q_graphicsproxywidget_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

void q_graphicsproxywidget_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

QTransform* q_graphicsproxywidget_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

QTransform* q_graphicsproxywidget_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

QTransform* q_graphicsproxywidget_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

QTransform* q_graphicsproxywidget_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

void q_graphicsproxywidget_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

void q_graphicsproxywidget_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

double q_graphicsproxywidget_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

double q_graphicsproxywidget_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsTransform* */ q_graphicsproxywidget_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

void q_graphicsproxywidget_set_transformations(void* self, libqt_list transformations) {
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations);
}

QPointF* q_graphicsproxywidget_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

void q_graphicsproxywidget_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

double q_graphicsproxywidget_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

void q_graphicsproxywidget_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

QRectF* q_graphicsproxywidget_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

QRectF* q_graphicsproxywidget_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

bool q_graphicsproxywidget_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

QPainterPath* q_graphicsproxywidget_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

bool q_graphicsproxywidget_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

bool q_graphicsproxywidget_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

QRegion* q_graphicsproxywidget_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

double q_graphicsproxywidget_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

void q_graphicsproxywidget_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

void q_graphicsproxywidget_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

void q_graphicsproxywidget_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

QPointF* q_graphicsproxywidget_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsproxywidget_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicsproxywidget_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicsproxywidget_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsproxywidget_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicsproxywidget_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicsproxywidget_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsproxywidget_map_to_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapToParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicsproxywidget_map_to_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapToSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicsproxywidget_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

QPointF* q_graphicsproxywidget_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

QPointF* q_graphicsproxywidget_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

QRectF* q_graphicsproxywidget_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

QRectF* q_graphicsproxywidget_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

QRectF* q_graphicsproxywidget_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

QPainterPath* q_graphicsproxywidget_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

QPainterPath* q_graphicsproxywidget_map_from_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

QPainterPath* q_graphicsproxywidget_map_from_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

QPointF* q_graphicsproxywidget_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsproxywidget_map_to_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapToParent2((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicsproxywidget_map_to_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapToScene2((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicsproxywidget_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsproxywidget_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicsproxywidget_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

QPointF* q_graphicsproxywidget_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

QPointF* q_graphicsproxywidget_map_from_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent2((QGraphicsItem*)self, x, y);
}

QPointF* q_graphicsproxywidget_map_from_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene2((QGraphicsItem*)self, x, y);
}

QRectF* q_graphicsproxywidget_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

QRectF* q_graphicsproxywidget_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

QRectF* q_graphicsproxywidget_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

bool q_graphicsproxywidget_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

QGraphicsItem* q_graphicsproxywidget_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

bool q_graphicsproxywidget_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

QVariant* q_graphicsproxywidget_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

void q_graphicsproxywidget_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

int64_t q_graphicsproxywidget_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

void q_graphicsproxywidget_set_input_method_hints(void* self, int64_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

void q_graphicsproxywidget_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicsproxywidget_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

void q_graphicsproxywidget_set_flag2(void* self, int64_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

void q_graphicsproxywidget_set_cache_mode2(void* self, int64_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

void q_graphicsproxywidget_set_focus1(void* self, int64_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

void q_graphicsproxywidget_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsproxywidget_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

void q_graphicsproxywidget_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

void q_graphicsproxywidget_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

void q_graphicsproxywidget_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

QTransform* q_graphicsproxywidget_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

void q_graphicsproxywidget_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_colliding_items1(void* self, int64_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

bool q_graphicsproxywidget_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsproxywidget_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

void q_graphicsproxywidget_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

void q_graphicsproxywidget_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

void q_graphicsproxywidget_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

QSizePolicy* q_graphicsproxywidget_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

void q_graphicsproxywidget_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicsproxywidget_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicsproxywidget_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

void q_graphicsproxywidget_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicsproxywidget_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

void q_graphicsproxywidget_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicsproxywidget_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

void q_graphicsproxywidget_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicsproxywidget_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicsproxywidget_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

void q_graphicsproxywidget_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicsproxywidget_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

void q_graphicsproxywidget_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicsproxywidget_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

void q_graphicsproxywidget_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

void q_graphicsproxywidget_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

QSizeF* q_graphicsproxywidget_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

void q_graphicsproxywidget_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

double q_graphicsproxywidget_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

void q_graphicsproxywidget_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

double q_graphicsproxywidget_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

QRectF* q_graphicsproxywidget_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

QRectF* q_graphicsproxywidget_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

QSizeF* q_graphicsproxywidget_effective_size_hint(void* self, int64_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

QGraphicsLayoutItem* q_graphicsproxywidget_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

void q_graphicsproxywidget_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

bool q_graphicsproxywidget_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

QGraphicsItem* q_graphicsproxywidget_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

bool q_graphicsproxywidget_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

void q_graphicsproxywidget_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

QSizeF* q_graphicsproxywidget_effective_size_hint2(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

void q_graphicsproxywidget_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsProxyWidget_GetContentsMargins((QGraphicsProxyWidget*)self, left, top, right, bottom);
}

void q_graphicsproxywidget_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsProxyWidget_QBaseGetContentsMargins((QGraphicsProxyWidget*)self, left, top, right, bottom);
}

void q_graphicsproxywidget_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*)) {
    QGraphicsProxyWidget_OnGetContentsMargins((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QGraphicsProxyWidget_PaintWindowFrame((QGraphicsProxyWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicsproxywidget_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QGraphicsProxyWidget_QBasePaintWindowFrame((QGraphicsProxyWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

void q_graphicsproxywidget_on_paint_window_frame(void* self, void (*slot)(void*, void*, void*, void*)) {
    QGraphicsProxyWidget_OnPaintWindowFrame((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

QRectF* q_graphicsproxywidget_bounding_rect(void* self) {
    return QGraphicsProxyWidget_BoundingRect((QGraphicsProxyWidget*)self);
}

QRectF* q_graphicsproxywidget_qbase_bounding_rect(void* self) {
    return QGraphicsProxyWidget_QBaseBoundingRect((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsProxyWidget_OnBoundingRect((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

QPainterPath* q_graphicsproxywidget_shape(void* self) {
    return QGraphicsProxyWidget_Shape((QGraphicsProxyWidget*)self);
}

QPainterPath* q_graphicsproxywidget_qbase_shape(void* self) {
    return QGraphicsProxyWidget_QBaseShape((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_shape(void* self, QPainterPath* (*slot)()) {
    QGraphicsProxyWidget_OnShape((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_init_style_option(void* self, void* option) {
    QGraphicsProxyWidget_InitStyleOption((QGraphicsProxyWidget*)self, (QStyleOption*)option);
}

void q_graphicsproxywidget_qbase_init_style_option(void* self, void* option) {
    QGraphicsProxyWidget_QBaseInitStyleOption((QGraphicsProxyWidget*)self, (QStyleOption*)option);
}

void q_graphicsproxywidget_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnInitStyleOption((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_update_geometry(void* self) {
    QGraphicsProxyWidget_UpdateGeometry((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_qbase_update_geometry(void* self) {
    QGraphicsProxyWidget_QBaseUpdateGeometry((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_update_geometry(void* self, void (*slot)()) {
    QGraphicsProxyWidget_OnUpdateGeometry((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

QVariant* q_graphicsproxywidget_property_change(void* self, const char* propertyName, void* value) {
    return QGraphicsProxyWidget_PropertyChange((QGraphicsProxyWidget*)self, qstring(propertyName), (QVariant*)value);
}

QVariant* q_graphicsproxywidget_qbase_property_change(void* self, const char* propertyName, void* value) {
    return QGraphicsProxyWidget_QBasePropertyChange((QGraphicsProxyWidget*)self, qstring(propertyName), (QVariant*)value);
}

void q_graphicsproxywidget_on_property_change(void* self, QVariant* (*slot)(void*, const char*, void*)) {
    QGraphicsProxyWidget_OnPropertyChange((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

bool q_graphicsproxywidget_scene_event(void* self, void* event) {
    return QGraphicsProxyWidget_SceneEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

bool q_graphicsproxywidget_qbase_scene_event(void* self, void* event) {
    return QGraphicsProxyWidget_QBaseSceneEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_scene_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnSceneEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

bool q_graphicsproxywidget_window_frame_event(void* self, void* e) {
    return QGraphicsProxyWidget_WindowFrameEvent((QGraphicsProxyWidget*)self, (QEvent*)e);
}

bool q_graphicsproxywidget_qbase_window_frame_event(void* self, void* e) {
    return QGraphicsProxyWidget_QBaseWindowFrameEvent((QGraphicsProxyWidget*)self, (QEvent*)e);
}

void q_graphicsproxywidget_on_window_frame_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnWindowFrameEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

int64_t q_graphicsproxywidget_window_frame_section_at(void* self, void* pos) {
    return QGraphicsProxyWidget_WindowFrameSectionAt((QGraphicsProxyWidget*)self, (QPointF*)pos);
}

int64_t q_graphicsproxywidget_qbase_window_frame_section_at(void* self, void* pos) {
    return QGraphicsProxyWidget_QBaseWindowFrameSectionAt((QGraphicsProxyWidget*)self, (QPointF*)pos);
}

void q_graphicsproxywidget_on_window_frame_section_at(void* self, int64_t (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnWindowFrameSectionAt((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_change_event(void* self, void* event) {
    QGraphicsProxyWidget_ChangeEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_qbase_change_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseChangeEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnChangeEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_close_event(void* self, void* event) {
    QGraphicsProxyWidget_CloseEvent((QGraphicsProxyWidget*)self, (QCloseEvent*)event);
}

void q_graphicsproxywidget_qbase_close_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseCloseEvent((QGraphicsProxyWidget*)self, (QCloseEvent*)event);
}

void q_graphicsproxywidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnCloseEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_move_event(void* self, void* event) {
    QGraphicsProxyWidget_MoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMoveEvent*)event);
}

void q_graphicsproxywidget_qbase_move_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseMoveEvent((QGraphicsProxyWidget*)self, (QGraphicsSceneMoveEvent*)event);
}

void q_graphicsproxywidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnMoveEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_polish_event(void* self) {
    QGraphicsProxyWidget_PolishEvent((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_qbase_polish_event(void* self) {
    QGraphicsProxyWidget_QBasePolishEvent((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_polish_event(void* self, void (*slot)()) {
    QGraphicsProxyWidget_OnPolishEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_grab_keyboard_event(void* self, void* event) {
    QGraphicsProxyWidget_GrabKeyboardEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_qbase_grab_keyboard_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseGrabKeyboardEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_grab_keyboard_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnGrabKeyboardEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_ungrab_keyboard_event(void* self, void* event) {
    QGraphicsProxyWidget_UngrabKeyboardEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_qbase_ungrab_keyboard_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseUngrabKeyboardEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_ungrab_keyboard_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnUngrabKeyboardEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_timer_event(void* self, void* event) {
    QGraphicsProxyWidget_TimerEvent((QGraphicsProxyWidget*)self, (QTimerEvent*)event);
}

void q_graphicsproxywidget_qbase_timer_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseTimerEvent((QGraphicsProxyWidget*)self, (QTimerEvent*)event);
}

void q_graphicsproxywidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnTimerEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_child_event(void* self, void* event) {
    QGraphicsProxyWidget_ChildEvent((QGraphicsProxyWidget*)self, (QChildEvent*)event);
}

void q_graphicsproxywidget_qbase_child_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseChildEvent((QGraphicsProxyWidget*)self, (QChildEvent*)event);
}

void q_graphicsproxywidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnChildEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_custom_event(void* self, void* event) {
    QGraphicsProxyWidget_CustomEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_qbase_custom_event(void* self, void* event) {
    QGraphicsProxyWidget_QBaseCustomEvent((QGraphicsProxyWidget*)self, (QEvent*)event);
}

void q_graphicsproxywidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnCustomEvent((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_connect_notify(void* self, void* signal) {
    QGraphicsProxyWidget_ConnectNotify((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

void q_graphicsproxywidget_qbase_connect_notify(void* self, void* signal) {
    QGraphicsProxyWidget_QBaseConnectNotify((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

void q_graphicsproxywidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnConnectNotify((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_disconnect_notify(void* self, void* signal) {
    QGraphicsProxyWidget_DisconnectNotify((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

void q_graphicsproxywidget_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsProxyWidget_QBaseDisconnectNotify((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

void q_graphicsproxywidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnDisconnectNotify((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_advance(void* self, int phase) {
    QGraphicsProxyWidget_Advance((QGraphicsProxyWidget*)self, phase);
}

void q_graphicsproxywidget_qbase_advance(void* self, int phase) {
    QGraphicsProxyWidget_QBaseAdvance((QGraphicsProxyWidget*)self, phase);
}

void q_graphicsproxywidget_on_advance(void* self, void (*slot)(void*, int)) {
    QGraphicsProxyWidget_OnAdvance((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

bool q_graphicsproxywidget_contains(void* self, void* point) {
    return QGraphicsProxyWidget_Contains((QGraphicsProxyWidget*)self, (QPointF*)point);
}

bool q_graphicsproxywidget_qbase_contains(void* self, void* point) {
    return QGraphicsProxyWidget_QBaseContains((QGraphicsProxyWidget*)self, (QPointF*)point);
}

void q_graphicsproxywidget_on_contains(void* self, bool (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnContains((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

bool q_graphicsproxywidget_collides_with_item(void* self, void* other, int64_t mode) {
    return QGraphicsProxyWidget_CollidesWithItem((QGraphicsProxyWidget*)self, (QGraphicsItem*)other, mode);
}

bool q_graphicsproxywidget_qbase_collides_with_item(void* self, void* other, int64_t mode) {
    return QGraphicsProxyWidget_QBaseCollidesWithItem((QGraphicsProxyWidget*)self, (QGraphicsItem*)other, mode);
}

void q_graphicsproxywidget_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t)) {
    QGraphicsProxyWidget_OnCollidesWithItem((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

bool q_graphicsproxywidget_collides_with_path(void* self, void* path, int64_t mode) {
    return QGraphicsProxyWidget_CollidesWithPath((QGraphicsProxyWidget*)self, (QPainterPath*)path, mode);
}

bool q_graphicsproxywidget_qbase_collides_with_path(void* self, void* path, int64_t mode) {
    return QGraphicsProxyWidget_QBaseCollidesWithPath((QGraphicsProxyWidget*)self, (QPainterPath*)path, mode);
}

void q_graphicsproxywidget_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t)) {
    QGraphicsProxyWidget_OnCollidesWithPath((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

bool q_graphicsproxywidget_is_obscured_by(void* self, void* item) {
    return QGraphicsProxyWidget_IsObscuredBy((QGraphicsProxyWidget*)self, (QGraphicsItem*)item);
}

bool q_graphicsproxywidget_qbase_is_obscured_by(void* self, void* item) {
    return QGraphicsProxyWidget_QBaseIsObscuredBy((QGraphicsProxyWidget*)self, (QGraphicsItem*)item);
}

void q_graphicsproxywidget_on_is_obscured_by(void* self, bool (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnIsObscuredBy((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

QPainterPath* q_graphicsproxywidget_opaque_area(void* self) {
    return QGraphicsProxyWidget_OpaqueArea((QGraphicsProxyWidget*)self);
}

QPainterPath* q_graphicsproxywidget_qbase_opaque_area(void* self) {
    return QGraphicsProxyWidget_QBaseOpaqueArea((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_opaque_area(void* self, QPainterPath* (*slot)()) {
    QGraphicsProxyWidget_OnOpaqueArea((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

bool q_graphicsproxywidget_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsProxyWidget_SceneEventFilter((QGraphicsProxyWidget*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

bool q_graphicsproxywidget_qbase_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsProxyWidget_QBaseSceneEventFilter((QGraphicsProxyWidget*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

void q_graphicsproxywidget_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsProxyWidget_OnSceneEventFilter((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

bool q_graphicsproxywidget_supports_extension(void* self, int64_t extension) {
    return QGraphicsProxyWidget_SupportsExtension((QGraphicsProxyWidget*)self, extension);
}

bool q_graphicsproxywidget_qbase_supports_extension(void* self, int64_t extension) {
    return QGraphicsProxyWidget_QBaseSupportsExtension((QGraphicsProxyWidget*)self, extension);
}

void q_graphicsproxywidget_on_supports_extension(void* self, bool (*slot)(void*, int64_t)) {
    QGraphicsProxyWidget_OnSupportsExtension((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_set_extension(void* self, int64_t extension, void* variant) {
    QGraphicsProxyWidget_SetExtension((QGraphicsProxyWidget*)self, extension, (QVariant*)variant);
}

void q_graphicsproxywidget_qbase_set_extension(void* self, int64_t extension, void* variant) {
    QGraphicsProxyWidget_QBaseSetExtension((QGraphicsProxyWidget*)self, extension, (QVariant*)variant);
}

void q_graphicsproxywidget_on_set_extension(void* self, void (*slot)(void*, int64_t, void*)) {
    QGraphicsProxyWidget_OnSetExtension((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

QVariant* q_graphicsproxywidget_extension(void* self, void* variant) {
    return QGraphicsProxyWidget_Extension((QGraphicsProxyWidget*)self, (QVariant*)variant);
}

QVariant* q_graphicsproxywidget_qbase_extension(void* self, void* variant) {
    return QGraphicsProxyWidget_QBaseExtension((QGraphicsProxyWidget*)self, (QVariant*)variant);
}

void q_graphicsproxywidget_on_extension(void* self, QVariant* (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnExtension((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

bool q_graphicsproxywidget_is_empty(void* self) {
    return QGraphicsProxyWidget_IsEmpty((QGraphicsProxyWidget*)self);
}

bool q_graphicsproxywidget_qbase_is_empty(void* self) {
    return QGraphicsProxyWidget_QBaseIsEmpty((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_is_empty(void* self, bool (*slot)()) {
    QGraphicsProxyWidget_OnIsEmpty((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_update_micro_focus(void* self) {
    QGraphicsProxyWidget_UpdateMicroFocus((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_qbase_update_micro_focus(void* self) {
    QGraphicsProxyWidget_QBaseUpdateMicroFocus((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_update_micro_focus(void* self, void (*slot)()) {
    QGraphicsProxyWidget_OnUpdateMicroFocus((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

QObject* q_graphicsproxywidget_sender(void* self) {
    return QGraphicsProxyWidget_Sender((QGraphicsProxyWidget*)self);
}

QObject* q_graphicsproxywidget_qbase_sender(void* self) {
    return QGraphicsProxyWidget_QBaseSender((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsProxyWidget_OnSender((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

int32_t q_graphicsproxywidget_sender_signal_index(void* self) {
    return QGraphicsProxyWidget_SenderSignalIndex((QGraphicsProxyWidget*)self);
}

int32_t q_graphicsproxywidget_qbase_sender_signal_index(void* self) {
    return QGraphicsProxyWidget_QBaseSenderSignalIndex((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsProxyWidget_OnSenderSignalIndex((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

int32_t q_graphicsproxywidget_receivers(void* self, const char* signal) {
    return QGraphicsProxyWidget_Receivers((QGraphicsProxyWidget*)self, signal);
}

int32_t q_graphicsproxywidget_qbase_receivers(void* self, const char* signal) {
    return QGraphicsProxyWidget_QBaseReceivers((QGraphicsProxyWidget*)self, signal);
}

void q_graphicsproxywidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsProxyWidget_OnReceivers((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

bool q_graphicsproxywidget_is_signal_connected(void* self, void* signal) {
    return QGraphicsProxyWidget_IsSignalConnected((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

bool q_graphicsproxywidget_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsProxyWidget_QBaseIsSignalConnected((QGraphicsProxyWidget*)self, (QMetaMethod*)signal);
}

void q_graphicsproxywidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnIsSignalConnected((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_add_to_index(void* self) {
    QGraphicsProxyWidget_AddToIndex((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_qbase_add_to_index(void* self) {
    QGraphicsProxyWidget_QBaseAddToIndex((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_add_to_index(void* self, void (*slot)()) {
    QGraphicsProxyWidget_OnAddToIndex((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_remove_from_index(void* self) {
    QGraphicsProxyWidget_RemoveFromIndex((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_qbase_remove_from_index(void* self) {
    QGraphicsProxyWidget_QBaseRemoveFromIndex((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_remove_from_index(void* self, void (*slot)()) {
    QGraphicsProxyWidget_OnRemoveFromIndex((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_prepare_geometry_change(void* self) {
    QGraphicsProxyWidget_PrepareGeometryChange((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_qbase_prepare_geometry_change(void* self) {
    QGraphicsProxyWidget_QBasePrepareGeometryChange((QGraphicsProxyWidget*)self);
}

void q_graphicsproxywidget_on_prepare_geometry_change(void* self, void (*slot)()) {
    QGraphicsProxyWidget_OnPrepareGeometryChange((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_set_graphics_item(void* self, void* item) {
    QGraphicsProxyWidget_SetGraphicsItem((QGraphicsProxyWidget*)self, (QGraphicsItem*)item);
}

void q_graphicsproxywidget_qbase_set_graphics_item(void* self, void* item) {
    QGraphicsProxyWidget_QBaseSetGraphicsItem((QGraphicsProxyWidget*)self, (QGraphicsItem*)item);
}

void q_graphicsproxywidget_on_set_graphics_item(void* self, void (*slot)(void*, void*)) {
    QGraphicsProxyWidget_OnSetGraphicsItem((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsProxyWidget_SetOwnedByLayout((QGraphicsProxyWidget*)self, ownedByLayout);
}

void q_graphicsproxywidget_qbase_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsProxyWidget_QBaseSetOwnedByLayout((QGraphicsProxyWidget*)self, ownedByLayout);
}

void q_graphicsproxywidget_on_set_owned_by_layout(void* self, void (*slot)(void*, bool)) {
    QGraphicsProxyWidget_OnSetOwnedByLayout((QGraphicsProxyWidget*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_graphicsproxywidget_delete(void* self) {
    QGraphicsProxyWidget_Delete((QGraphicsProxyWidget*)(self));
}

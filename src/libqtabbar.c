#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqcolor.hpp"
#include "libqicon.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqtabbar.hpp"
#include "libqtabbar.h"

QTabBar* q_tabbar_new(void* parent) {
    return QTabBar_new((QWidget*)parent);
}

QTabBar* q_tabbar_new2() {
    return QTabBar_new2();
}

const QMetaObject* q_tabbar_meta_object(void* self) {
    return QTabBar_MetaObject((QTabBar*)self);
}

void q_tabbar_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QTabBar_OnMetaObject((QTabBar*)self, (intptr_t)callback);
}

const QMetaObject* q_tabbar_qbase_meta_object(void* self) {
    return QTabBar_QBaseMetaObject((QTabBar*)self);
}

void* q_tabbar_metacast(void* self, const char* param1) {
    return QTabBar_Metacast((QTabBar*)self, param1);
}

void q_tabbar_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QTabBar_OnMetacast((QTabBar*)self, (intptr_t)callback);
}

void* q_tabbar_qbase_metacast(void* self, const char* param1) {
    return QTabBar_QBaseMetacast((QTabBar*)self, param1);
}

int32_t q_tabbar_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTabBar_Metacall((QTabBar*)self, param1, param2, param3);
}

void q_tabbar_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QTabBar_OnMetacall((QTabBar*)self, (intptr_t)callback);
}

int32_t q_tabbar_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTabBar_QBaseMetacall((QTabBar*)self, param1, param2, param3);
}

const char* q_tabbar_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_tabbar_shape(void* self) {
    return QTabBar_Shape((QTabBar*)self);
}

void q_tabbar_set_shape(void* self, int32_t shape) {
    QTabBar_SetShape((QTabBar*)self, shape);
}

int32_t q_tabbar_add_tab(void* self, const char* text) {
    return QTabBar_AddTab((QTabBar*)self, qstring(text));
}

int32_t q_tabbar_add_tab2(void* self, void* icon, const char* text) {
    return QTabBar_AddTab2((QTabBar*)self, (QIcon*)icon, qstring(text));
}

int32_t q_tabbar_insert_tab(void* self, int index, const char* text) {
    return QTabBar_InsertTab((QTabBar*)self, index, qstring(text));
}

int32_t q_tabbar_insert_tab2(void* self, int index, void* icon, const char* text) {
    return QTabBar_InsertTab2((QTabBar*)self, index, (QIcon*)icon, qstring(text));
}

void q_tabbar_remove_tab(void* self, int index) {
    QTabBar_RemoveTab((QTabBar*)self, index);
}

void q_tabbar_move_tab(void* self, int from, int to) {
    QTabBar_MoveTab((QTabBar*)self, from, to);
}

bool q_tabbar_is_tab_enabled(void* self, int index) {
    return QTabBar_IsTabEnabled((QTabBar*)self, index);
}

void q_tabbar_set_tab_enabled(void* self, int index, bool enabled) {
    QTabBar_SetTabEnabled((QTabBar*)self, index, enabled);
}

bool q_tabbar_is_tab_visible(void* self, int index) {
    return QTabBar_IsTabVisible((QTabBar*)self, index);
}

void q_tabbar_set_tab_visible(void* self, int index, bool visible) {
    QTabBar_SetTabVisible((QTabBar*)self, index, visible);
}

const char* q_tabbar_tab_text(void* self, int index) {
    libqt_string _str = QTabBar_TabText((QTabBar*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabbar_set_tab_text(void* self, int index, const char* text) {
    QTabBar_SetTabText((QTabBar*)self, index, qstring(text));
}

QColor* q_tabbar_tab_text_color(void* self, int index) {
    return QTabBar_TabTextColor((QTabBar*)self, index);
}

void q_tabbar_set_tab_text_color(void* self, int index, void* color) {
    QTabBar_SetTabTextColor((QTabBar*)self, index, (QColor*)color);
}

QIcon* q_tabbar_tab_icon(void* self, int index) {
    return QTabBar_TabIcon((QTabBar*)self, index);
}

void q_tabbar_set_tab_icon(void* self, int index, void* icon) {
    QTabBar_SetTabIcon((QTabBar*)self, index, (QIcon*)icon);
}

int32_t q_tabbar_elide_mode(void* self) {
    return QTabBar_ElideMode((QTabBar*)self);
}

void q_tabbar_set_elide_mode(void* self, int32_t mode) {
    QTabBar_SetElideMode((QTabBar*)self, mode);
}

void q_tabbar_set_tab_tool_tip(void* self, int index, const char* tip) {
    QTabBar_SetTabToolTip((QTabBar*)self, index, qstring(tip));
}

const char* q_tabbar_tab_tool_tip(void* self, int index) {
    libqt_string _str = QTabBar_TabToolTip((QTabBar*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabbar_set_tab_whats_this(void* self, int index, const char* text) {
    QTabBar_SetTabWhatsThis((QTabBar*)self, index, qstring(text));
}

const char* q_tabbar_tab_whats_this(void* self, int index) {
    libqt_string _str = QTabBar_TabWhatsThis((QTabBar*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabbar_set_tab_data(void* self, int index, void* data) {
    QTabBar_SetTabData((QTabBar*)self, index, (QVariant*)data);
}

QVariant* q_tabbar_tab_data(void* self, int index) {
    return QTabBar_TabData((QTabBar*)self, index);
}

QRect* q_tabbar_tab_rect(void* self, int index) {
    return QTabBar_TabRect((QTabBar*)self, index);
}

int32_t q_tabbar_tab_at(void* self, void* pos) {
    return QTabBar_TabAt((QTabBar*)self, (QPoint*)pos);
}

int32_t q_tabbar_current_index(void* self) {
    return QTabBar_CurrentIndex((QTabBar*)self);
}

int32_t q_tabbar_count(void* self) {
    return QTabBar_Count((QTabBar*)self);
}

QSize* q_tabbar_size_hint(void* self) {
    return QTabBar_SizeHint((QTabBar*)self);
}

void q_tabbar_on_size_hint(void* self, QSize* (*callback)()) {
    QTabBar_OnSizeHint((QTabBar*)self, (intptr_t)callback);
}

QSize* q_tabbar_qbase_size_hint(void* self) {
    return QTabBar_QBaseSizeHint((QTabBar*)self);
}

QSize* q_tabbar_minimum_size_hint(void* self) {
    return QTabBar_MinimumSizeHint((QTabBar*)self);
}

void q_tabbar_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QTabBar_OnMinimumSizeHint((QTabBar*)self, (intptr_t)callback);
}

QSize* q_tabbar_qbase_minimum_size_hint(void* self) {
    return QTabBar_QBaseMinimumSizeHint((QTabBar*)self);
}

void q_tabbar_set_draw_base(void* self, bool drawTheBase) {
    QTabBar_SetDrawBase((QTabBar*)self, drawTheBase);
}

bool q_tabbar_draw_base(void* self) {
    return QTabBar_DrawBase((QTabBar*)self);
}

QSize* q_tabbar_icon_size(void* self) {
    return QTabBar_IconSize((QTabBar*)self);
}

void q_tabbar_set_icon_size(void* self, void* size) {
    QTabBar_SetIconSize((QTabBar*)self, (QSize*)size);
}

bool q_tabbar_uses_scroll_buttons(void* self) {
    return QTabBar_UsesScrollButtons((QTabBar*)self);
}

void q_tabbar_set_uses_scroll_buttons(void* self, bool useButtons) {
    QTabBar_SetUsesScrollButtons((QTabBar*)self, useButtons);
}

bool q_tabbar_tabs_closable(void* self) {
    return QTabBar_TabsClosable((QTabBar*)self);
}

void q_tabbar_set_tabs_closable(void* self, bool closable) {
    QTabBar_SetTabsClosable((QTabBar*)self, closable);
}

void q_tabbar_set_tab_button(void* self, int index, int32_t position, void* widget) {
    QTabBar_SetTabButton((QTabBar*)self, index, position, (QWidget*)widget);
}

QWidget* q_tabbar_tab_button(void* self, int index, int32_t position) {
    return QTabBar_TabButton((QTabBar*)self, index, position);
}

int32_t q_tabbar_selection_behavior_on_remove(void* self) {
    return QTabBar_SelectionBehaviorOnRemove((QTabBar*)self);
}

void q_tabbar_set_selection_behavior_on_remove(void* self, int32_t behavior) {
    QTabBar_SetSelectionBehaviorOnRemove((QTabBar*)self, behavior);
}

bool q_tabbar_expanding(void* self) {
    return QTabBar_Expanding((QTabBar*)self);
}

void q_tabbar_set_expanding(void* self, bool enabled) {
    QTabBar_SetExpanding((QTabBar*)self, enabled);
}

bool q_tabbar_is_movable(void* self) {
    return QTabBar_IsMovable((QTabBar*)self);
}

void q_tabbar_set_movable(void* self, bool movable) {
    QTabBar_SetMovable((QTabBar*)self, movable);
}

bool q_tabbar_document_mode(void* self) {
    return QTabBar_DocumentMode((QTabBar*)self);
}

void q_tabbar_set_document_mode(void* self, bool set) {
    QTabBar_SetDocumentMode((QTabBar*)self, set);
}

bool q_tabbar_auto_hide(void* self) {
    return QTabBar_AutoHide((QTabBar*)self);
}

void q_tabbar_set_auto_hide(void* self, bool hide) {
    QTabBar_SetAutoHide((QTabBar*)self, hide);
}

bool q_tabbar_change_current_on_drag(void* self) {
    return QTabBar_ChangeCurrentOnDrag((QTabBar*)self);
}

void q_tabbar_set_change_current_on_drag(void* self, bool change) {
    QTabBar_SetChangeCurrentOnDrag((QTabBar*)self, change);
}

const char* q_tabbar_accessible_tab_name(void* self, int index) {
    libqt_string _str = QTabBar_AccessibleTabName((QTabBar*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabbar_set_accessible_tab_name(void* self, int index, const char* name) {
    QTabBar_SetAccessibleTabName((QTabBar*)self, index, qstring(name));
}

void q_tabbar_set_current_index(void* self, int index) {
    QTabBar_SetCurrentIndex((QTabBar*)self, index);
}

void q_tabbar_current_changed(void* self, int index) {
    QTabBar_CurrentChanged((QTabBar*)self, index);
}

void q_tabbar_on_current_changed(void* self, void (*callback)(void*, int)) {
    QTabBar_Connect_CurrentChanged((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_tab_close_requested(void* self, int index) {
    QTabBar_TabCloseRequested((QTabBar*)self, index);
}

void q_tabbar_on_tab_close_requested(void* self, void (*callback)(void*, int)) {
    QTabBar_Connect_TabCloseRequested((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_tab_moved(void* self, int from, int to) {
    QTabBar_TabMoved((QTabBar*)self, from, to);
}

void q_tabbar_on_tab_moved(void* self, void (*callback)(void*, int, int)) {
    QTabBar_Connect_TabMoved((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_tab_bar_clicked(void* self, int index) {
    QTabBar_TabBarClicked((QTabBar*)self, index);
}

void q_tabbar_on_tab_bar_clicked(void* self, void (*callback)(void*, int)) {
    QTabBar_Connect_TabBarClicked((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_tab_bar_double_clicked(void* self, int index) {
    QTabBar_TabBarDoubleClicked((QTabBar*)self, index);
}

void q_tabbar_on_tab_bar_double_clicked(void* self, void (*callback)(void*, int)) {
    QTabBar_Connect_TabBarDoubleClicked((QTabBar*)self, (intptr_t)callback);
}

QSize* q_tabbar_tab_size_hint(void* self, int index) {
    return QTabBar_TabSizeHint((QTabBar*)self, index);
}

void q_tabbar_on_tab_size_hint(void* self, QSize* (*callback)(void*, int)) {
    QTabBar_OnTabSizeHint((QTabBar*)self, (intptr_t)callback);
}

QSize* q_tabbar_qbase_tab_size_hint(void* self, int index) {
    return QTabBar_QBaseTabSizeHint((QTabBar*)self, index);
}

QSize* q_tabbar_minimum_tab_size_hint(void* self, int index) {
    return QTabBar_MinimumTabSizeHint((QTabBar*)self, index);
}

void q_tabbar_on_minimum_tab_size_hint(void* self, QSize* (*callback)(void*, int)) {
    QTabBar_OnMinimumTabSizeHint((QTabBar*)self, (intptr_t)callback);
}

QSize* q_tabbar_qbase_minimum_tab_size_hint(void* self, int index) {
    return QTabBar_QBaseMinimumTabSizeHint((QTabBar*)self, index);
}

void q_tabbar_tab_inserted(void* self, int index) {
    QTabBar_TabInserted((QTabBar*)self, index);
}

void q_tabbar_on_tab_inserted(void* self, void (*callback)(void*, int)) {
    QTabBar_OnTabInserted((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_tab_inserted(void* self, int index) {
    QTabBar_QBaseTabInserted((QTabBar*)self, index);
}

void q_tabbar_tab_removed(void* self, int index) {
    QTabBar_TabRemoved((QTabBar*)self, index);
}

void q_tabbar_on_tab_removed(void* self, void (*callback)(void*, int)) {
    QTabBar_OnTabRemoved((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_tab_removed(void* self, int index) {
    QTabBar_QBaseTabRemoved((QTabBar*)self, index);
}

void q_tabbar_tab_layout_change(void* self) {
    QTabBar_TabLayoutChange((QTabBar*)self);
}

void q_tabbar_on_tab_layout_change(void* self, void (*callback)()) {
    QTabBar_OnTabLayoutChange((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_tab_layout_change(void* self) {
    QTabBar_QBaseTabLayoutChange((QTabBar*)self);
}

bool q_tabbar_event(void* self, void* param1) {
    return QTabBar_Event((QTabBar*)self, (QEvent*)param1);
}

void q_tabbar_on_event(void* self, bool (*callback)(void*, void*)) {
    QTabBar_OnEvent((QTabBar*)self, (intptr_t)callback);
}

bool q_tabbar_qbase_event(void* self, void* param1) {
    return QTabBar_QBaseEvent((QTabBar*)self, (QEvent*)param1);
}

void q_tabbar_resize_event(void* self, void* param1) {
    QTabBar_ResizeEvent((QTabBar*)self, (QResizeEvent*)param1);
}

void q_tabbar_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnResizeEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_resize_event(void* self, void* param1) {
    QTabBar_QBaseResizeEvent((QTabBar*)self, (QResizeEvent*)param1);
}

void q_tabbar_show_event(void* self, void* param1) {
    QTabBar_ShowEvent((QTabBar*)self, (QShowEvent*)param1);
}

void q_tabbar_on_show_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnShowEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_show_event(void* self, void* param1) {
    QTabBar_QBaseShowEvent((QTabBar*)self, (QShowEvent*)param1);
}

void q_tabbar_hide_event(void* self, void* param1) {
    QTabBar_HideEvent((QTabBar*)self, (QHideEvent*)param1);
}

void q_tabbar_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnHideEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_hide_event(void* self, void* param1) {
    QTabBar_QBaseHideEvent((QTabBar*)self, (QHideEvent*)param1);
}

void q_tabbar_paint_event(void* self, void* param1) {
    QTabBar_PaintEvent((QTabBar*)self, (QPaintEvent*)param1);
}

void q_tabbar_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnPaintEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_paint_event(void* self, void* param1) {
    QTabBar_QBasePaintEvent((QTabBar*)self, (QPaintEvent*)param1);
}

void q_tabbar_mouse_press_event(void* self, void* param1) {
    QTabBar_MousePressEvent((QTabBar*)self, (QMouseEvent*)param1);
}

void q_tabbar_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnMousePressEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_mouse_press_event(void* self, void* param1) {
    QTabBar_QBaseMousePressEvent((QTabBar*)self, (QMouseEvent*)param1);
}

void q_tabbar_mouse_move_event(void* self, void* param1) {
    QTabBar_MouseMoveEvent((QTabBar*)self, (QMouseEvent*)param1);
}

void q_tabbar_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnMouseMoveEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_mouse_move_event(void* self, void* param1) {
    QTabBar_QBaseMouseMoveEvent((QTabBar*)self, (QMouseEvent*)param1);
}

void q_tabbar_mouse_release_event(void* self, void* param1) {
    QTabBar_MouseReleaseEvent((QTabBar*)self, (QMouseEvent*)param1);
}

void q_tabbar_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnMouseReleaseEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_mouse_release_event(void* self, void* param1) {
    QTabBar_QBaseMouseReleaseEvent((QTabBar*)self, (QMouseEvent*)param1);
}

void q_tabbar_mouse_double_click_event(void* self, void* param1) {
    QTabBar_MouseDoubleClickEvent((QTabBar*)self, (QMouseEvent*)param1);
}

void q_tabbar_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnMouseDoubleClickEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_mouse_double_click_event(void* self, void* param1) {
    QTabBar_QBaseMouseDoubleClickEvent((QTabBar*)self, (QMouseEvent*)param1);
}

void q_tabbar_wheel_event(void* self, void* event) {
    QTabBar_WheelEvent((QTabBar*)self, (QWheelEvent*)event);
}

void q_tabbar_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnWheelEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_wheel_event(void* self, void* event) {
    QTabBar_QBaseWheelEvent((QTabBar*)self, (QWheelEvent*)event);
}

void q_tabbar_key_press_event(void* self, void* param1) {
    QTabBar_KeyPressEvent((QTabBar*)self, (QKeyEvent*)param1);
}

void q_tabbar_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnKeyPressEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_key_press_event(void* self, void* param1) {
    QTabBar_QBaseKeyPressEvent((QTabBar*)self, (QKeyEvent*)param1);
}

void q_tabbar_change_event(void* self, void* param1) {
    QTabBar_ChangeEvent((QTabBar*)self, (QEvent*)param1);
}

void q_tabbar_on_change_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnChangeEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_change_event(void* self, void* param1) {
    QTabBar_QBaseChangeEvent((QTabBar*)self, (QEvent*)param1);
}

void q_tabbar_timer_event(void* self, void* event) {
    QTabBar_TimerEvent((QTabBar*)self, (QTimerEvent*)event);
}

void q_tabbar_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnTimerEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_timer_event(void* self, void* event) {
    QTabBar_QBaseTimerEvent((QTabBar*)self, (QTimerEvent*)event);
}

void q_tabbar_init_style_option(void* self, void* option, int tabIndex) {
    QTabBar_InitStyleOption((QTabBar*)self, (QStyleOptionTab*)option, tabIndex);
}

void q_tabbar_on_init_style_option(void* self, void (*callback)(void*, void*, int)) {
    QTabBar_OnInitStyleOption((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_qbase_init_style_option(void* self, void* option, int tabIndex) {
    QTabBar_QBaseInitStyleOption((QTabBar*)self, (QStyleOptionTab*)option, tabIndex);
}

const char* q_tabbar_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tabbar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_tabbar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_tabbar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_tabbar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_tabbar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_tabbar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_tabbar_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_tabbar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_tabbar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_tabbar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_tabbar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_tabbar_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_tabbar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_tabbar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_tabbar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_tabbar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_tabbar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_tabbar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_tabbar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_tabbar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_tabbar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_tabbar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_tabbar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_tabbar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_tabbar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_tabbar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_tabbar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_tabbar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_tabbar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_tabbar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_tabbar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_tabbar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_tabbar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_tabbar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_tabbar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_tabbar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_tabbar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_tabbar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_tabbar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_tabbar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_tabbar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_tabbar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_tabbar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_tabbar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_tabbar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_tabbar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_tabbar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_tabbar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_tabbar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_tabbar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_tabbar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_tabbar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_tabbar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_tabbar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_tabbar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tabbar_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tabbar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tabbar_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tabbar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tabbar_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tabbar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tabbar_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tabbar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_tabbar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_tabbar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_tabbar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_tabbar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_tabbar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_tabbar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_tabbar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_tabbar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_tabbar_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_tabbar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_tabbar_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_tabbar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_tabbar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_tabbar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_tabbar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_tabbar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_tabbar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_tabbar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_tabbar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_tabbar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_tabbar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_tabbar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_tabbar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_tabbar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_tabbar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_tabbar_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_tabbar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_tabbar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_tabbar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_tabbar_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_tabbar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_tabbar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_tabbar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_tabbar_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_tabbar_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_tabbar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_tabbar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_tabbar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tabbar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabbar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_tabbar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_tabbar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_tabbar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabbar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_tabbar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabbar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_tabbar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabbar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_tabbar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_tabbar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_tabbar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_tabbar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabbar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_tabbar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_tabbar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_tabbar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabbar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_tabbar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tabbar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabbar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_tabbar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabbar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_tabbar_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_tabbar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_tabbar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_tabbar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_tabbar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_tabbar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_tabbar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_tabbar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_tabbar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_tabbar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_tabbar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_tabbar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_tabbar_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_tabbar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_tabbar_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_tabbar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_tabbar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_tabbar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_tabbar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_tabbar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_tabbar_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_tabbar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_tabbar_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_tabbar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_tabbar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_tabbar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_tabbar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_tabbar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_tabbar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_tabbar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_tabbar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_tabbar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_tabbar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_tabbar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_tabbar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_tabbar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_tabbar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_tabbar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_tabbar_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_tabbar_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_tabbar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_tabbar_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_tabbar_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_tabbar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_tabbar_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_tabbar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_tabbar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_tabbar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_tabbar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_tabbar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_tabbar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_tabbar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_tabbar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_tabbar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_tabbar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_tabbar_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_tabbar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_tabbar_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_tabbar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_tabbar_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_tabbar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_tabbar_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_tabbar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_tabbar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_tabbar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_tabbar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_tabbar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_tabbar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_tabbar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_tabbar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_tabbar_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_tabbar_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_tabbar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_tabbar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_tabbar_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_tabbar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_tabbar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_tabbar_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_tabbar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_tabbar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_tabbar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_tabbar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_tabbar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_tabbar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_tabbar_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_tabbar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_tabbar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_tabbar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_tabbar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_tabbar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_tabbar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_tabbar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_tabbar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_tabbar_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_tabbar_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_tabbar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_tabbar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_tabbar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_tabbar_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_tabbar_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_tabbar_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_tabbar_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_tabbar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_tabbar_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_tabbar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_tabbar_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_tabbar_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_tabbar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_tabbar_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_tabbar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_tabbar_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_tabbar_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_tabbar_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_tabbar_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_tabbar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_tabbar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_tabbar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_tabbar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_tabbar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_tabbar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_tabbar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_tabbar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_tabbar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_tabbar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_tabbar_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_tabbar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_tabbar_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_tabbar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_tabbar_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_tabbar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_tabbar_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_tabbar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_tabbar_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_tabbar_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_tabbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_tabbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_tabbar_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_tabbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_tabbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_tabbar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_tabbar_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_tabbar_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_tabbar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_tabbar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_tabbar_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_tabbar_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_tabbar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_tabbar_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_tabbar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabbar_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_tabbar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_tabbar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_tabbar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_tabbar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_tabbar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_tabbar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_tabbar_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_tabbar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_tabbar_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_tabbar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_tabbar_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_tabbar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_tabbar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_tabbar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_tabbar_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_tabbar_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_tabbar_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_tabbar_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_tabbar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_tabbar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_tabbar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_tabbar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_tabbar_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_tabbar_dynamic_property_names\n");
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

QBindingStorage* q_tabbar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_tabbar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_tabbar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_tabbar_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_tabbar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_tabbar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_tabbar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_tabbar_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_tabbar_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_tabbar_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_tabbar_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_tabbar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_tabbar_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_tabbar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_tabbar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_tabbar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_tabbar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_tabbar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_tabbar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_tabbar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_tabbar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_tabbar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_tabbar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_tabbar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_tabbar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_tabbar_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_tabbar_dev_type(void* self) {
    return QTabBar_DevType((QTabBar*)self);
}

int32_t q_tabbar_qbase_dev_type(void* self) {
    return QTabBar_QBaseDevType((QTabBar*)self);
}

void q_tabbar_on_dev_type(void* self, int32_t (*callback)()) {
    QTabBar_OnDevType((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_set_visible(void* self, bool visible) {
    QTabBar_SetVisible((QTabBar*)self, visible);
}

void q_tabbar_qbase_set_visible(void* self, bool visible) {
    QTabBar_QBaseSetVisible((QTabBar*)self, visible);
}

void q_tabbar_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QTabBar_OnSetVisible((QTabBar*)self, (intptr_t)callback);
}

int32_t q_tabbar_height_for_width(void* self, int param1) {
    return QTabBar_HeightForWidth((QTabBar*)self, param1);
}

int32_t q_tabbar_qbase_height_for_width(void* self, int param1) {
    return QTabBar_QBaseHeightForWidth((QTabBar*)self, param1);
}

void q_tabbar_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QTabBar_OnHeightForWidth((QTabBar*)self, (intptr_t)callback);
}

bool q_tabbar_has_height_for_width(void* self) {
    return QTabBar_HasHeightForWidth((QTabBar*)self);
}

bool q_tabbar_qbase_has_height_for_width(void* self) {
    return QTabBar_QBaseHasHeightForWidth((QTabBar*)self);
}

void q_tabbar_on_has_height_for_width(void* self, bool (*callback)()) {
    QTabBar_OnHasHeightForWidth((QTabBar*)self, (intptr_t)callback);
}

QPaintEngine* q_tabbar_paint_engine(void* self) {
    return QTabBar_PaintEngine((QTabBar*)self);
}

QPaintEngine* q_tabbar_qbase_paint_engine(void* self) {
    return QTabBar_QBasePaintEngine((QTabBar*)self);
}

void q_tabbar_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QTabBar_OnPaintEngine((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_key_release_event(void* self, void* event) {
    QTabBar_KeyReleaseEvent((QTabBar*)self, (QKeyEvent*)event);
}

void q_tabbar_qbase_key_release_event(void* self, void* event) {
    QTabBar_QBaseKeyReleaseEvent((QTabBar*)self, (QKeyEvent*)event);
}

void q_tabbar_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnKeyReleaseEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_focus_in_event(void* self, void* event) {
    QTabBar_FocusInEvent((QTabBar*)self, (QFocusEvent*)event);
}

void q_tabbar_qbase_focus_in_event(void* self, void* event) {
    QTabBar_QBaseFocusInEvent((QTabBar*)self, (QFocusEvent*)event);
}

void q_tabbar_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnFocusInEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_focus_out_event(void* self, void* event) {
    QTabBar_FocusOutEvent((QTabBar*)self, (QFocusEvent*)event);
}

void q_tabbar_qbase_focus_out_event(void* self, void* event) {
    QTabBar_QBaseFocusOutEvent((QTabBar*)self, (QFocusEvent*)event);
}

void q_tabbar_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnFocusOutEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_enter_event(void* self, void* event) {
    QTabBar_EnterEvent((QTabBar*)self, (QEnterEvent*)event);
}

void q_tabbar_qbase_enter_event(void* self, void* event) {
    QTabBar_QBaseEnterEvent((QTabBar*)self, (QEnterEvent*)event);
}

void q_tabbar_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnEnterEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_leave_event(void* self, void* event) {
    QTabBar_LeaveEvent((QTabBar*)self, (QEvent*)event);
}

void q_tabbar_qbase_leave_event(void* self, void* event) {
    QTabBar_QBaseLeaveEvent((QTabBar*)self, (QEvent*)event);
}

void q_tabbar_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnLeaveEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_move_event(void* self, void* event) {
    QTabBar_MoveEvent((QTabBar*)self, (QMoveEvent*)event);
}

void q_tabbar_qbase_move_event(void* self, void* event) {
    QTabBar_QBaseMoveEvent((QTabBar*)self, (QMoveEvent*)event);
}

void q_tabbar_on_move_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnMoveEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_close_event(void* self, void* event) {
    QTabBar_CloseEvent((QTabBar*)self, (QCloseEvent*)event);
}

void q_tabbar_qbase_close_event(void* self, void* event) {
    QTabBar_QBaseCloseEvent((QTabBar*)self, (QCloseEvent*)event);
}

void q_tabbar_on_close_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnCloseEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_context_menu_event(void* self, void* event) {
    QTabBar_ContextMenuEvent((QTabBar*)self, (QContextMenuEvent*)event);
}

void q_tabbar_qbase_context_menu_event(void* self, void* event) {
    QTabBar_QBaseContextMenuEvent((QTabBar*)self, (QContextMenuEvent*)event);
}

void q_tabbar_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnContextMenuEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_tablet_event(void* self, void* event) {
    QTabBar_TabletEvent((QTabBar*)self, (QTabletEvent*)event);
}

void q_tabbar_qbase_tablet_event(void* self, void* event) {
    QTabBar_QBaseTabletEvent((QTabBar*)self, (QTabletEvent*)event);
}

void q_tabbar_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnTabletEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_action_event(void* self, void* event) {
    QTabBar_ActionEvent((QTabBar*)self, (QActionEvent*)event);
}

void q_tabbar_qbase_action_event(void* self, void* event) {
    QTabBar_QBaseActionEvent((QTabBar*)self, (QActionEvent*)event);
}

void q_tabbar_on_action_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnActionEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_drag_enter_event(void* self, void* event) {
    QTabBar_DragEnterEvent((QTabBar*)self, (QDragEnterEvent*)event);
}

void q_tabbar_qbase_drag_enter_event(void* self, void* event) {
    QTabBar_QBaseDragEnterEvent((QTabBar*)self, (QDragEnterEvent*)event);
}

void q_tabbar_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnDragEnterEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_drag_move_event(void* self, void* event) {
    QTabBar_DragMoveEvent((QTabBar*)self, (QDragMoveEvent*)event);
}

void q_tabbar_qbase_drag_move_event(void* self, void* event) {
    QTabBar_QBaseDragMoveEvent((QTabBar*)self, (QDragMoveEvent*)event);
}

void q_tabbar_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnDragMoveEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_drag_leave_event(void* self, void* event) {
    QTabBar_DragLeaveEvent((QTabBar*)self, (QDragLeaveEvent*)event);
}

void q_tabbar_qbase_drag_leave_event(void* self, void* event) {
    QTabBar_QBaseDragLeaveEvent((QTabBar*)self, (QDragLeaveEvent*)event);
}

void q_tabbar_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnDragLeaveEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_drop_event(void* self, void* event) {
    QTabBar_DropEvent((QTabBar*)self, (QDropEvent*)event);
}

void q_tabbar_qbase_drop_event(void* self, void* event) {
    QTabBar_QBaseDropEvent((QTabBar*)self, (QDropEvent*)event);
}

void q_tabbar_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnDropEvent((QTabBar*)self, (intptr_t)callback);
}

bool q_tabbar_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTabBar_NativeEvent((QTabBar*)self, qstring(eventType), message, result);
}

bool q_tabbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTabBar_QBaseNativeEvent((QTabBar*)self, qstring(eventType), message, result);
}

void q_tabbar_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QTabBar_OnNativeEvent((QTabBar*)self, (intptr_t)callback);
}

int32_t q_tabbar_metric(void* self, int32_t param1) {
    return QTabBar_Metric((QTabBar*)self, param1);
}

int32_t q_tabbar_qbase_metric(void* self, int32_t param1) {
    return QTabBar_QBaseMetric((QTabBar*)self, param1);
}

void q_tabbar_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QTabBar_OnMetric((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_init_painter(void* self, void* painter) {
    QTabBar_InitPainter((QTabBar*)self, (QPainter*)painter);
}

void q_tabbar_qbase_init_painter(void* self, void* painter) {
    QTabBar_QBaseInitPainter((QTabBar*)self, (QPainter*)painter);
}

void q_tabbar_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnInitPainter((QTabBar*)self, (intptr_t)callback);
}

QPaintDevice* q_tabbar_redirected(void* self, void* offset) {
    return QTabBar_Redirected((QTabBar*)self, (QPoint*)offset);
}

QPaintDevice* q_tabbar_qbase_redirected(void* self, void* offset) {
    return QTabBar_QBaseRedirected((QTabBar*)self, (QPoint*)offset);
}

void q_tabbar_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QTabBar_OnRedirected((QTabBar*)self, (intptr_t)callback);
}

QPainter* q_tabbar_shared_painter(void* self) {
    return QTabBar_SharedPainter((QTabBar*)self);
}

QPainter* q_tabbar_qbase_shared_painter(void* self) {
    return QTabBar_QBaseSharedPainter((QTabBar*)self);
}

void q_tabbar_on_shared_painter(void* self, QPainter* (*callback)()) {
    QTabBar_OnSharedPainter((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_input_method_event(void* self, void* param1) {
    QTabBar_InputMethodEvent((QTabBar*)self, (QInputMethodEvent*)param1);
}

void q_tabbar_qbase_input_method_event(void* self, void* param1) {
    QTabBar_QBaseInputMethodEvent((QTabBar*)self, (QInputMethodEvent*)param1);
}

void q_tabbar_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnInputMethodEvent((QTabBar*)self, (intptr_t)callback);
}

QVariant* q_tabbar_input_method_query(void* self, int32_t param1) {
    return QTabBar_InputMethodQuery((QTabBar*)self, param1);
}

QVariant* q_tabbar_qbase_input_method_query(void* self, int32_t param1) {
    return QTabBar_QBaseInputMethodQuery((QTabBar*)self, param1);
}

void q_tabbar_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QTabBar_OnInputMethodQuery((QTabBar*)self, (intptr_t)callback);
}

bool q_tabbar_focus_next_prev_child(void* self, bool next) {
    return QTabBar_FocusNextPrevChild((QTabBar*)self, next);
}

bool q_tabbar_qbase_focus_next_prev_child(void* self, bool next) {
    return QTabBar_QBaseFocusNextPrevChild((QTabBar*)self, next);
}

void q_tabbar_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QTabBar_OnFocusNextPrevChild((QTabBar*)self, (intptr_t)callback);
}

bool q_tabbar_event_filter(void* self, void* watched, void* event) {
    return QTabBar_EventFilter((QTabBar*)self, (QObject*)watched, (QEvent*)event);
}

bool q_tabbar_qbase_event_filter(void* self, void* watched, void* event) {
    return QTabBar_QBaseEventFilter((QTabBar*)self, (QObject*)watched, (QEvent*)event);
}

void q_tabbar_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTabBar_OnEventFilter((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_child_event(void* self, void* event) {
    QTabBar_ChildEvent((QTabBar*)self, (QChildEvent*)event);
}

void q_tabbar_qbase_child_event(void* self, void* event) {
    QTabBar_QBaseChildEvent((QTabBar*)self, (QChildEvent*)event);
}

void q_tabbar_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnChildEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_custom_event(void* self, void* event) {
    QTabBar_CustomEvent((QTabBar*)self, (QEvent*)event);
}

void q_tabbar_qbase_custom_event(void* self, void* event) {
    QTabBar_QBaseCustomEvent((QTabBar*)self, (QEvent*)event);
}

void q_tabbar_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnCustomEvent((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_connect_notify(void* self, void* signal) {
    QTabBar_ConnectNotify((QTabBar*)self, (QMetaMethod*)signal);
}

void q_tabbar_qbase_connect_notify(void* self, void* signal) {
    QTabBar_QBaseConnectNotify((QTabBar*)self, (QMetaMethod*)signal);
}

void q_tabbar_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnConnectNotify((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_disconnect_notify(void* self, void* signal) {
    QTabBar_DisconnectNotify((QTabBar*)self, (QMetaMethod*)signal);
}

void q_tabbar_qbase_disconnect_notify(void* self, void* signal) {
    QTabBar_QBaseDisconnectNotify((QTabBar*)self, (QMetaMethod*)signal);
}

void q_tabbar_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QTabBar_OnDisconnectNotify((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_update_micro_focus(void* self) {
    QTabBar_UpdateMicroFocus((QTabBar*)self);
}

void q_tabbar_qbase_update_micro_focus(void* self) {
    QTabBar_QBaseUpdateMicroFocus((QTabBar*)self);
}

void q_tabbar_on_update_micro_focus(void* self, void (*callback)()) {
    QTabBar_OnUpdateMicroFocus((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_create(void* self) {
    QTabBar_Create((QTabBar*)self);
}

void q_tabbar_qbase_create(void* self) {
    QTabBar_QBaseCreate((QTabBar*)self);
}

void q_tabbar_on_create(void* self, void (*callback)()) {
    QTabBar_OnCreate((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_destroy(void* self) {
    QTabBar_Destroy((QTabBar*)self);
}

void q_tabbar_qbase_destroy(void* self) {
    QTabBar_QBaseDestroy((QTabBar*)self);
}

void q_tabbar_on_destroy(void* self, void (*callback)()) {
    QTabBar_OnDestroy((QTabBar*)self, (intptr_t)callback);
}

bool q_tabbar_focus_next_child(void* self) {
    return QTabBar_FocusNextChild((QTabBar*)self);
}

bool q_tabbar_qbase_focus_next_child(void* self) {
    return QTabBar_QBaseFocusNextChild((QTabBar*)self);
}

void q_tabbar_on_focus_next_child(void* self, bool (*callback)()) {
    QTabBar_OnFocusNextChild((QTabBar*)self, (intptr_t)callback);
}

bool q_tabbar_focus_previous_child(void* self) {
    return QTabBar_FocusPreviousChild((QTabBar*)self);
}

bool q_tabbar_qbase_focus_previous_child(void* self) {
    return QTabBar_QBaseFocusPreviousChild((QTabBar*)self);
}

void q_tabbar_on_focus_previous_child(void* self, bool (*callback)()) {
    QTabBar_OnFocusPreviousChild((QTabBar*)self, (intptr_t)callback);
}

QObject* q_tabbar_sender(void* self) {
    return QTabBar_Sender((QTabBar*)self);
}

QObject* q_tabbar_qbase_sender(void* self) {
    return QTabBar_QBaseSender((QTabBar*)self);
}

void q_tabbar_on_sender(void* self, QObject* (*callback)()) {
    QTabBar_OnSender((QTabBar*)self, (intptr_t)callback);
}

int32_t q_tabbar_sender_signal_index(void* self) {
    return QTabBar_SenderSignalIndex((QTabBar*)self);
}

int32_t q_tabbar_qbase_sender_signal_index(void* self) {
    return QTabBar_QBaseSenderSignalIndex((QTabBar*)self);
}

void q_tabbar_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QTabBar_OnSenderSignalIndex((QTabBar*)self, (intptr_t)callback);
}

int32_t q_tabbar_receivers(void* self, const char* signal) {
    return QTabBar_Receivers((QTabBar*)self, signal);
}

int32_t q_tabbar_qbase_receivers(void* self, const char* signal) {
    return QTabBar_QBaseReceivers((QTabBar*)self, signal);
}

void q_tabbar_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QTabBar_OnReceivers((QTabBar*)self, (intptr_t)callback);
}

bool q_tabbar_is_signal_connected(void* self, void* signal) {
    return QTabBar_IsSignalConnected((QTabBar*)self, (QMetaMethod*)signal);
}

bool q_tabbar_qbase_is_signal_connected(void* self, void* signal) {
    return QTabBar_QBaseIsSignalConnected((QTabBar*)self, (QMetaMethod*)signal);
}

void q_tabbar_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QTabBar_OnIsSignalConnected((QTabBar*)self, (intptr_t)callback);
}

double q_tabbar_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QTabBar_GetDecodedMetricF((QTabBar*)self, metricA, metricB);
}

double q_tabbar_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QTabBar_QBaseGetDecodedMetricF((QTabBar*)self, metricA, metricB);
}

void q_tabbar_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QTabBar_OnGetDecodedMetricF((QTabBar*)self, (intptr_t)callback);
}

void q_tabbar_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_tabbar_delete(void* self) {
    QTabBar_Delete((QTabBar*)(self));
}

#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqmdiarea.hpp"
#include "libqmenu.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqmdisubwindow.hpp"
#include "libqmdisubwindow.h"

QMdiSubWindow* q_mdisubwindow_new(void* parent) {
    return QMdiSubWindow_new((QWidget*)parent);
}

QMdiSubWindow* q_mdisubwindow_new2() {
    return QMdiSubWindow_new2();
}

QMdiSubWindow* q_mdisubwindow_new3(void* parent, int64_t flags) {
    return QMdiSubWindow_new3((QWidget*)parent, flags);
}

const QMetaObject* q_mdisubwindow_meta_object(void* self) {
    return QMdiSubWindow_MetaObject((QMdiSubWindow*)self);
}

void* q_mdisubwindow_metacast(void* self, const char* param1) {
    return QMdiSubWindow_Metacast((QMdiSubWindow*)self, param1);
}

int32_t q_mdisubwindow_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMdiSubWindow_Metacall((QMdiSubWindow*)self, param1, param2, param3);
}

void q_mdisubwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QMdiSubWindow_OnMetacall((QMdiSubWindow*)self, (intptr_t)callback);
}

int32_t q_mdisubwindow_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMdiSubWindow_QBaseMetacall((QMdiSubWindow*)self, param1, param2, param3);
}

const char* q_mdisubwindow_tr(const char* s) {
    libqt_string _str = QMdiSubWindow_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_mdisubwindow_size_hint(void* self) {
    return QMdiSubWindow_SizeHint((QMdiSubWindow*)self);
}

void q_mdisubwindow_on_size_hint(void* self, QSize* (*callback)()) {
    QMdiSubWindow_OnSizeHint((QMdiSubWindow*)self, (intptr_t)callback);
}

QSize* q_mdisubwindow_qbase_size_hint(void* self) {
    return QMdiSubWindow_QBaseSizeHint((QMdiSubWindow*)self);
}

QSize* q_mdisubwindow_minimum_size_hint(void* self) {
    return QMdiSubWindow_MinimumSizeHint((QMdiSubWindow*)self);
}

void q_mdisubwindow_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QMdiSubWindow_OnMinimumSizeHint((QMdiSubWindow*)self, (intptr_t)callback);
}

QSize* q_mdisubwindow_qbase_minimum_size_hint(void* self) {
    return QMdiSubWindow_QBaseMinimumSizeHint((QMdiSubWindow*)self);
}

void q_mdisubwindow_set_widget(void* self, void* widget) {
    QMdiSubWindow_SetWidget((QMdiSubWindow*)self, (QWidget*)widget);
}

QWidget* q_mdisubwindow_widget(void* self) {
    return QMdiSubWindow_Widget((QMdiSubWindow*)self);
}

QWidget* q_mdisubwindow_maximized_buttons_widget(void* self) {
    return QMdiSubWindow_MaximizedButtonsWidget((QMdiSubWindow*)self);
}

QWidget* q_mdisubwindow_maximized_system_menu_icon_widget(void* self) {
    return QMdiSubWindow_MaximizedSystemMenuIconWidget((QMdiSubWindow*)self);
}

bool q_mdisubwindow_is_shaded(void* self) {
    return QMdiSubWindow_IsShaded((QMdiSubWindow*)self);
}

void q_mdisubwindow_set_option(void* self, int32_t option) {
    QMdiSubWindow_SetOption((QMdiSubWindow*)self, option);
}

bool q_mdisubwindow_test_option(void* self, int32_t param1) {
    return QMdiSubWindow_TestOption((QMdiSubWindow*)self, param1);
}

void q_mdisubwindow_set_keyboard_single_step(void* self, int step) {
    QMdiSubWindow_SetKeyboardSingleStep((QMdiSubWindow*)self, step);
}

int32_t q_mdisubwindow_keyboard_single_step(void* self) {
    return QMdiSubWindow_KeyboardSingleStep((QMdiSubWindow*)self);
}

void q_mdisubwindow_set_keyboard_page_step(void* self, int step) {
    QMdiSubWindow_SetKeyboardPageStep((QMdiSubWindow*)self, step);
}

int32_t q_mdisubwindow_keyboard_page_step(void* self) {
    return QMdiSubWindow_KeyboardPageStep((QMdiSubWindow*)self);
}

void q_mdisubwindow_set_system_menu(void* self, void* systemMenu) {
    QMdiSubWindow_SetSystemMenu((QMdiSubWindow*)self, (QMenu*)systemMenu);
}

QMenu* q_mdisubwindow_system_menu(void* self) {
    return QMdiSubWindow_SystemMenu((QMdiSubWindow*)self);
}

QMdiArea* q_mdisubwindow_mdi_area(void* self) {
    return QMdiSubWindow_MdiArea((QMdiSubWindow*)self);
}

void q_mdisubwindow_window_state_changed(void* self, int32_t oldState, int32_t newState) {
    QMdiSubWindow_WindowStateChanged((QMdiSubWindow*)self, oldState, newState);
}

void q_mdisubwindow_on_window_state_changed(void* self, void (*callback)(void*, int32_t, int32_t)) {
    QMdiSubWindow_Connect_WindowStateChanged((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_about_to_activate(void* self) {
    QMdiSubWindow_AboutToActivate((QMdiSubWindow*)self);
}

void q_mdisubwindow_on_about_to_activate(void* self, void (*callback)(void*)) {
    QMdiSubWindow_Connect_AboutToActivate((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_show_system_menu(void* self) {
    QMdiSubWindow_ShowSystemMenu((QMdiSubWindow*)self);
}

void q_mdisubwindow_show_shaded(void* self) {
    QMdiSubWindow_ShowShaded((QMdiSubWindow*)self);
}

bool q_mdisubwindow_event_filter(void* self, void* object, void* event) {
    return QMdiSubWindow_EventFilter((QMdiSubWindow*)self, (QObject*)object, (QEvent*)event);
}

void q_mdisubwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QMdiSubWindow_OnEventFilter((QMdiSubWindow*)self, (intptr_t)callback);
}

bool q_mdisubwindow_qbase_event_filter(void* self, void* object, void* event) {
    return QMdiSubWindow_QBaseEventFilter((QMdiSubWindow*)self, (QObject*)object, (QEvent*)event);
}

bool q_mdisubwindow_event(void* self, void* event) {
    return QMdiSubWindow_Event((QMdiSubWindow*)self, (QEvent*)event);
}

void q_mdisubwindow_on_event(void* self, bool (*callback)(void*, void*)) {
    QMdiSubWindow_OnEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

bool q_mdisubwindow_qbase_event(void* self, void* event) {
    return QMdiSubWindow_QBaseEvent((QMdiSubWindow*)self, (QEvent*)event);
}

void q_mdisubwindow_show_event(void* self, void* showEvent) {
    QMdiSubWindow_ShowEvent((QMdiSubWindow*)self, (QShowEvent*)showEvent);
}

void q_mdisubwindow_on_show_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnShowEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_show_event(void* self, void* showEvent) {
    QMdiSubWindow_QBaseShowEvent((QMdiSubWindow*)self, (QShowEvent*)showEvent);
}

void q_mdisubwindow_hide_event(void* self, void* hideEvent) {
    QMdiSubWindow_HideEvent((QMdiSubWindow*)self, (QHideEvent*)hideEvent);
}

void q_mdisubwindow_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnHideEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_hide_event(void* self, void* hideEvent) {
    QMdiSubWindow_QBaseHideEvent((QMdiSubWindow*)self, (QHideEvent*)hideEvent);
}

void q_mdisubwindow_change_event(void* self, void* changeEvent) {
    QMdiSubWindow_ChangeEvent((QMdiSubWindow*)self, (QEvent*)changeEvent);
}

void q_mdisubwindow_on_change_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnChangeEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_change_event(void* self, void* changeEvent) {
    QMdiSubWindow_QBaseChangeEvent((QMdiSubWindow*)self, (QEvent*)changeEvent);
}

void q_mdisubwindow_close_event(void* self, void* closeEvent) {
    QMdiSubWindow_CloseEvent((QMdiSubWindow*)self, (QCloseEvent*)closeEvent);
}

void q_mdisubwindow_on_close_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnCloseEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_close_event(void* self, void* closeEvent) {
    QMdiSubWindow_QBaseCloseEvent((QMdiSubWindow*)self, (QCloseEvent*)closeEvent);
}

void q_mdisubwindow_leave_event(void* self, void* leaveEvent) {
    QMdiSubWindow_LeaveEvent((QMdiSubWindow*)self, (QEvent*)leaveEvent);
}

void q_mdisubwindow_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnLeaveEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_leave_event(void* self, void* leaveEvent) {
    QMdiSubWindow_QBaseLeaveEvent((QMdiSubWindow*)self, (QEvent*)leaveEvent);
}

void q_mdisubwindow_resize_event(void* self, void* resizeEvent) {
    QMdiSubWindow_ResizeEvent((QMdiSubWindow*)self, (QResizeEvent*)resizeEvent);
}

void q_mdisubwindow_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnResizeEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_resize_event(void* self, void* resizeEvent) {
    QMdiSubWindow_QBaseResizeEvent((QMdiSubWindow*)self, (QResizeEvent*)resizeEvent);
}

void q_mdisubwindow_timer_event(void* self, void* timerEvent) {
    QMdiSubWindow_TimerEvent((QMdiSubWindow*)self, (QTimerEvent*)timerEvent);
}

void q_mdisubwindow_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnTimerEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_timer_event(void* self, void* timerEvent) {
    QMdiSubWindow_QBaseTimerEvent((QMdiSubWindow*)self, (QTimerEvent*)timerEvent);
}

void q_mdisubwindow_move_event(void* self, void* moveEvent) {
    QMdiSubWindow_MoveEvent((QMdiSubWindow*)self, (QMoveEvent*)moveEvent);
}

void q_mdisubwindow_on_move_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnMoveEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_move_event(void* self, void* moveEvent) {
    QMdiSubWindow_QBaseMoveEvent((QMdiSubWindow*)self, (QMoveEvent*)moveEvent);
}

void q_mdisubwindow_paint_event(void* self, void* paintEvent) {
    QMdiSubWindow_PaintEvent((QMdiSubWindow*)self, (QPaintEvent*)paintEvent);
}

void q_mdisubwindow_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnPaintEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_paint_event(void* self, void* paintEvent) {
    QMdiSubWindow_QBasePaintEvent((QMdiSubWindow*)self, (QPaintEvent*)paintEvent);
}

void q_mdisubwindow_mouse_press_event(void* self, void* mouseEvent) {
    QMdiSubWindow_MousePressEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

void q_mdisubwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnMousePressEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_mouse_press_event(void* self, void* mouseEvent) {
    QMdiSubWindow_QBaseMousePressEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

void q_mdisubwindow_mouse_double_click_event(void* self, void* mouseEvent) {
    QMdiSubWindow_MouseDoubleClickEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

void q_mdisubwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnMouseDoubleClickEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_mouse_double_click_event(void* self, void* mouseEvent) {
    QMdiSubWindow_QBaseMouseDoubleClickEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

void q_mdisubwindow_mouse_release_event(void* self, void* mouseEvent) {
    QMdiSubWindow_MouseReleaseEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

void q_mdisubwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnMouseReleaseEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_mouse_release_event(void* self, void* mouseEvent) {
    QMdiSubWindow_QBaseMouseReleaseEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

void q_mdisubwindow_mouse_move_event(void* self, void* mouseEvent) {
    QMdiSubWindow_MouseMoveEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

void q_mdisubwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnMouseMoveEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_mouse_move_event(void* self, void* mouseEvent) {
    QMdiSubWindow_QBaseMouseMoveEvent((QMdiSubWindow*)self, (QMouseEvent*)mouseEvent);
}

void q_mdisubwindow_key_press_event(void* self, void* keyEvent) {
    QMdiSubWindow_KeyPressEvent((QMdiSubWindow*)self, (QKeyEvent*)keyEvent);
}

void q_mdisubwindow_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnKeyPressEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_key_press_event(void* self, void* keyEvent) {
    QMdiSubWindow_QBaseKeyPressEvent((QMdiSubWindow*)self, (QKeyEvent*)keyEvent);
}

void q_mdisubwindow_context_menu_event(void* self, void* contextMenuEvent) {
    QMdiSubWindow_ContextMenuEvent((QMdiSubWindow*)self, (QContextMenuEvent*)contextMenuEvent);
}

void q_mdisubwindow_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnContextMenuEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_context_menu_event(void* self, void* contextMenuEvent) {
    QMdiSubWindow_QBaseContextMenuEvent((QMdiSubWindow*)self, (QContextMenuEvent*)contextMenuEvent);
}

void q_mdisubwindow_focus_in_event(void* self, void* focusInEvent) {
    QMdiSubWindow_FocusInEvent((QMdiSubWindow*)self, (QFocusEvent*)focusInEvent);
}

void q_mdisubwindow_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnFocusInEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_focus_in_event(void* self, void* focusInEvent) {
    QMdiSubWindow_QBaseFocusInEvent((QMdiSubWindow*)self, (QFocusEvent*)focusInEvent);
}

void q_mdisubwindow_focus_out_event(void* self, void* focusOutEvent) {
    QMdiSubWindow_FocusOutEvent((QMdiSubWindow*)self, (QFocusEvent*)focusOutEvent);
}

void q_mdisubwindow_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnFocusOutEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_focus_out_event(void* self, void* focusOutEvent) {
    QMdiSubWindow_QBaseFocusOutEvent((QMdiSubWindow*)self, (QFocusEvent*)focusOutEvent);
}

void q_mdisubwindow_child_event(void* self, void* childEvent) {
    QMdiSubWindow_ChildEvent((QMdiSubWindow*)self, (QChildEvent*)childEvent);
}

void q_mdisubwindow_on_child_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnChildEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_qbase_child_event(void* self, void* childEvent) {
    QMdiSubWindow_QBaseChildEvent((QMdiSubWindow*)self, (QChildEvent*)childEvent);
}

const char* q_mdisubwindow_tr2(const char* s, const char* c) {
    libqt_string _str = QMdiSubWindow_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mdisubwindow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMdiSubWindow_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdisubwindow_set_option2(void* self, int32_t option, bool on) {
    QMdiSubWindow_SetOption2((QMdiSubWindow*)self, option, on);
}

uintptr_t q_mdisubwindow_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_mdisubwindow_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_mdisubwindow_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_mdisubwindow_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_mdisubwindow_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_mdisubwindow_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_mdisubwindow_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_mdisubwindow_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_mdisubwindow_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_mdisubwindow_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_mdisubwindow_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_mdisubwindow_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_mdisubwindow_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_mdisubwindow_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_mdisubwindow_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_mdisubwindow_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_mdisubwindow_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_mdisubwindow_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_mdisubwindow_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_mdisubwindow_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_mdisubwindow_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_mdisubwindow_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_mdisubwindow_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_mdisubwindow_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_mdisubwindow_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_mdisubwindow_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_mdisubwindow_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_mdisubwindow_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_mdisubwindow_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_mdisubwindow_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_mdisubwindow_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_mdisubwindow_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_mdisubwindow_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_mdisubwindow_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_mdisubwindow_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_mdisubwindow_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_mdisubwindow_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_mdisubwindow_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_mdisubwindow_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_mdisubwindow_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_mdisubwindow_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_mdisubwindow_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_mdisubwindow_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_mdisubwindow_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_mdisubwindow_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_mdisubwindow_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_mdisubwindow_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_mdisubwindow_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_mdisubwindow_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_mdisubwindow_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_mdisubwindow_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_mdisubwindow_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_mdisubwindow_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_mdisubwindow_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_mdisubwindow_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_mdisubwindow_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_mdisubwindow_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_mdisubwindow_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_mdisubwindow_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_mdisubwindow_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_mdisubwindow_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_mdisubwindow_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_mdisubwindow_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_mdisubwindow_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_mdisubwindow_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_mdisubwindow_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_mdisubwindow_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_mdisubwindow_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_mdisubwindow_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_mdisubwindow_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_mdisubwindow_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_mdisubwindow_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_mdisubwindow_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_mdisubwindow_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_mdisubwindow_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_mdisubwindow_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_mdisubwindow_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_mdisubwindow_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_mdisubwindow_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_mdisubwindow_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_mdisubwindow_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_mdisubwindow_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_mdisubwindow_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_mdisubwindow_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_mdisubwindow_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_mdisubwindow_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_mdisubwindow_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_mdisubwindow_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_mdisubwindow_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_mdisubwindow_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_mdisubwindow_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_mdisubwindow_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_mdisubwindow_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_mdisubwindow_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_mdisubwindow_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_mdisubwindow_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_mdisubwindow_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_mdisubwindow_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_mdisubwindow_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_mdisubwindow_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mdisubwindow_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdisubwindow_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_mdisubwindow_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_mdisubwindow_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_mdisubwindow_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdisubwindow_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_mdisubwindow_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdisubwindow_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_mdisubwindow_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdisubwindow_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_mdisubwindow_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_mdisubwindow_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_mdisubwindow_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_mdisubwindow_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdisubwindow_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_mdisubwindow_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_mdisubwindow_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_mdisubwindow_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdisubwindow_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_mdisubwindow_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mdisubwindow_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdisubwindow_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_mdisubwindow_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdisubwindow_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_mdisubwindow_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_mdisubwindow_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_mdisubwindow_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_mdisubwindow_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_mdisubwindow_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_mdisubwindow_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_mdisubwindow_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_mdisubwindow_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_mdisubwindow_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_mdisubwindow_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_mdisubwindow_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_mdisubwindow_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_mdisubwindow_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_mdisubwindow_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_mdisubwindow_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_mdisubwindow_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_mdisubwindow_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_mdisubwindow_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_mdisubwindow_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_mdisubwindow_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_mdisubwindow_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_mdisubwindow_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_mdisubwindow_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_mdisubwindow_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_mdisubwindow_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_mdisubwindow_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_mdisubwindow_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_mdisubwindow_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_mdisubwindow_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_mdisubwindow_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_mdisubwindow_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_mdisubwindow_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_mdisubwindow_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_mdisubwindow_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_mdisubwindow_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_mdisubwindow_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_mdisubwindow_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_mdisubwindow_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_mdisubwindow_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_mdisubwindow_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_mdisubwindow_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_mdisubwindow_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_mdisubwindow_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_mdisubwindow_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_mdisubwindow_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_mdisubwindow_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_mdisubwindow_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_mdisubwindow_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_mdisubwindow_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_mdisubwindow_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_mdisubwindow_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_mdisubwindow_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_mdisubwindow_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_mdisubwindow_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_mdisubwindow_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_mdisubwindow_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_mdisubwindow_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_mdisubwindow_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_mdisubwindow_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_mdisubwindow_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_mdisubwindow_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_mdisubwindow_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_mdisubwindow_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_mdisubwindow_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_mdisubwindow_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_mdisubwindow_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_mdisubwindow_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_mdisubwindow_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_mdisubwindow_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_mdisubwindow_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_mdisubwindow_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_mdisubwindow_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_mdisubwindow_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_mdisubwindow_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_mdisubwindow_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_mdisubwindow_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_mdisubwindow_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_mdisubwindow_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_mdisubwindow_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_mdisubwindow_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_mdisubwindow_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_mdisubwindow_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_mdisubwindow_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_mdisubwindow_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_mdisubwindow_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_mdisubwindow_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_mdisubwindow_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_mdisubwindow_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_mdisubwindow_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_mdisubwindow_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_mdisubwindow_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_mdisubwindow_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_mdisubwindow_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_mdisubwindow_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_mdisubwindow_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_mdisubwindow_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_mdisubwindow_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_mdisubwindow_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_mdisubwindow_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_mdisubwindow_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_mdisubwindow_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_mdisubwindow_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_mdisubwindow_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_mdisubwindow_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_mdisubwindow_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_mdisubwindow_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_mdisubwindow_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_mdisubwindow_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_mdisubwindow_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_mdisubwindow_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_mdisubwindow_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_mdisubwindow_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_mdisubwindow_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_mdisubwindow_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_mdisubwindow_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_mdisubwindow_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_mdisubwindow_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_mdisubwindow_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_mdisubwindow_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_mdisubwindow_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_mdisubwindow_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_mdisubwindow_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_mdisubwindow_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_mdisubwindow_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_mdisubwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_mdisubwindow_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_mdisubwindow_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_mdisubwindow_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_mdisubwindow_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_mdisubwindow_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_mdisubwindow_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_mdisubwindow_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_mdisubwindow_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_mdisubwindow_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_mdisubwindow_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_mdisubwindow_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_mdisubwindow_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_mdisubwindow_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_mdisubwindow_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_mdisubwindow_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_mdisubwindow_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_mdisubwindow_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_mdisubwindow_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_mdisubwindow_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_mdisubwindow_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_mdisubwindow_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_mdisubwindow_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_mdisubwindow_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_mdisubwindow_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdisubwindow_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_mdisubwindow_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_mdisubwindow_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_mdisubwindow_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_mdisubwindow_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_mdisubwindow_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_mdisubwindow_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_mdisubwindow_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_mdisubwindow_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_mdisubwindow_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_mdisubwindow_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_mdisubwindow_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_mdisubwindow_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_mdisubwindow_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_mdisubwindow_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_mdisubwindow_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_mdisubwindow_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_mdisubwindow_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_mdisubwindow_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_mdisubwindow_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_mdisubwindow_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_mdisubwindow_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_mdisubwindow_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_mdisubwindow_dynamic_property_names");
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

QBindingStorage* q_mdisubwindow_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_mdisubwindow_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_mdisubwindow_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_mdisubwindow_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_mdisubwindow_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_mdisubwindow_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_mdisubwindow_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_mdisubwindow_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_mdisubwindow_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_mdisubwindow_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_mdisubwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_mdisubwindow_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_mdisubwindow_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_mdisubwindow_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_mdisubwindow_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_mdisubwindow_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_mdisubwindow_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_mdisubwindow_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_mdisubwindow_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_mdisubwindow_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_mdisubwindow_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_mdisubwindow_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_mdisubwindow_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_mdisubwindow_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_mdisubwindow_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_mdisubwindow_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_mdisubwindow_dev_type(void* self) {
    return QMdiSubWindow_DevType((QMdiSubWindow*)self);
}

int32_t q_mdisubwindow_qbase_dev_type(void* self) {
    return QMdiSubWindow_QBaseDevType((QMdiSubWindow*)self);
}

void q_mdisubwindow_on_dev_type(void* self, int32_t (*callback)()) {
    QMdiSubWindow_OnDevType((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_set_visible(void* self, bool visible) {
    QMdiSubWindow_SetVisible((QMdiSubWindow*)self, visible);
}

void q_mdisubwindow_qbase_set_visible(void* self, bool visible) {
    QMdiSubWindow_QBaseSetVisible((QMdiSubWindow*)self, visible);
}

void q_mdisubwindow_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QMdiSubWindow_OnSetVisible((QMdiSubWindow*)self, (intptr_t)callback);
}

int32_t q_mdisubwindow_height_for_width(void* self, int param1) {
    return QMdiSubWindow_HeightForWidth((QMdiSubWindow*)self, param1);
}

int32_t q_mdisubwindow_qbase_height_for_width(void* self, int param1) {
    return QMdiSubWindow_QBaseHeightForWidth((QMdiSubWindow*)self, param1);
}

void q_mdisubwindow_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QMdiSubWindow_OnHeightForWidth((QMdiSubWindow*)self, (intptr_t)callback);
}

bool q_mdisubwindow_has_height_for_width(void* self) {
    return QMdiSubWindow_HasHeightForWidth((QMdiSubWindow*)self);
}

bool q_mdisubwindow_qbase_has_height_for_width(void* self) {
    return QMdiSubWindow_QBaseHasHeightForWidth((QMdiSubWindow*)self);
}

void q_mdisubwindow_on_has_height_for_width(void* self, bool (*callback)()) {
    QMdiSubWindow_OnHasHeightForWidth((QMdiSubWindow*)self, (intptr_t)callback);
}

QPaintEngine* q_mdisubwindow_paint_engine(void* self) {
    return QMdiSubWindow_PaintEngine((QMdiSubWindow*)self);
}

QPaintEngine* q_mdisubwindow_qbase_paint_engine(void* self) {
    return QMdiSubWindow_QBasePaintEngine((QMdiSubWindow*)self);
}

void q_mdisubwindow_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QMdiSubWindow_OnPaintEngine((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_wheel_event(void* self, void* event) {
    QMdiSubWindow_WheelEvent((QMdiSubWindow*)self, (QWheelEvent*)event);
}

void q_mdisubwindow_qbase_wheel_event(void* self, void* event) {
    QMdiSubWindow_QBaseWheelEvent((QMdiSubWindow*)self, (QWheelEvent*)event);
}

void q_mdisubwindow_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnWheelEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_key_release_event(void* self, void* event) {
    QMdiSubWindow_KeyReleaseEvent((QMdiSubWindow*)self, (QKeyEvent*)event);
}

void q_mdisubwindow_qbase_key_release_event(void* self, void* event) {
    QMdiSubWindow_QBaseKeyReleaseEvent((QMdiSubWindow*)self, (QKeyEvent*)event);
}

void q_mdisubwindow_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnKeyReleaseEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_enter_event(void* self, void* event) {
    QMdiSubWindow_EnterEvent((QMdiSubWindow*)self, (QEnterEvent*)event);
}

void q_mdisubwindow_qbase_enter_event(void* self, void* event) {
    QMdiSubWindow_QBaseEnterEvent((QMdiSubWindow*)self, (QEnterEvent*)event);
}

void q_mdisubwindow_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnEnterEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_tablet_event(void* self, void* event) {
    QMdiSubWindow_TabletEvent((QMdiSubWindow*)self, (QTabletEvent*)event);
}

void q_mdisubwindow_qbase_tablet_event(void* self, void* event) {
    QMdiSubWindow_QBaseTabletEvent((QMdiSubWindow*)self, (QTabletEvent*)event);
}

void q_mdisubwindow_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnTabletEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_action_event(void* self, void* event) {
    QMdiSubWindow_ActionEvent((QMdiSubWindow*)self, (QActionEvent*)event);
}

void q_mdisubwindow_qbase_action_event(void* self, void* event) {
    QMdiSubWindow_QBaseActionEvent((QMdiSubWindow*)self, (QActionEvent*)event);
}

void q_mdisubwindow_on_action_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnActionEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_drag_enter_event(void* self, void* event) {
    QMdiSubWindow_DragEnterEvent((QMdiSubWindow*)self, (QDragEnterEvent*)event);
}

void q_mdisubwindow_qbase_drag_enter_event(void* self, void* event) {
    QMdiSubWindow_QBaseDragEnterEvent((QMdiSubWindow*)self, (QDragEnterEvent*)event);
}

void q_mdisubwindow_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnDragEnterEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_drag_move_event(void* self, void* event) {
    QMdiSubWindow_DragMoveEvent((QMdiSubWindow*)self, (QDragMoveEvent*)event);
}

void q_mdisubwindow_qbase_drag_move_event(void* self, void* event) {
    QMdiSubWindow_QBaseDragMoveEvent((QMdiSubWindow*)self, (QDragMoveEvent*)event);
}

void q_mdisubwindow_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnDragMoveEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_drag_leave_event(void* self, void* event) {
    QMdiSubWindow_DragLeaveEvent((QMdiSubWindow*)self, (QDragLeaveEvent*)event);
}

void q_mdisubwindow_qbase_drag_leave_event(void* self, void* event) {
    QMdiSubWindow_QBaseDragLeaveEvent((QMdiSubWindow*)self, (QDragLeaveEvent*)event);
}

void q_mdisubwindow_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnDragLeaveEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_drop_event(void* self, void* event) {
    QMdiSubWindow_DropEvent((QMdiSubWindow*)self, (QDropEvent*)event);
}

void q_mdisubwindow_qbase_drop_event(void* self, void* event) {
    QMdiSubWindow_QBaseDropEvent((QMdiSubWindow*)self, (QDropEvent*)event);
}

void q_mdisubwindow_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnDropEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

bool q_mdisubwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMdiSubWindow_NativeEvent((QMdiSubWindow*)self, qstring(eventType), message, result);
}

bool q_mdisubwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMdiSubWindow_QBaseNativeEvent((QMdiSubWindow*)self, qstring(eventType), message, result);
}

void q_mdisubwindow_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QMdiSubWindow_OnNativeEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

int32_t q_mdisubwindow_metric(void* self, int32_t param1) {
    return QMdiSubWindow_Metric((QMdiSubWindow*)self, param1);
}

int32_t q_mdisubwindow_qbase_metric(void* self, int32_t param1) {
    return QMdiSubWindow_QBaseMetric((QMdiSubWindow*)self, param1);
}

void q_mdisubwindow_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QMdiSubWindow_OnMetric((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_init_painter(void* self, void* painter) {
    QMdiSubWindow_InitPainter((QMdiSubWindow*)self, (QPainter*)painter);
}

void q_mdisubwindow_qbase_init_painter(void* self, void* painter) {
    QMdiSubWindow_QBaseInitPainter((QMdiSubWindow*)self, (QPainter*)painter);
}

void q_mdisubwindow_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnInitPainter((QMdiSubWindow*)self, (intptr_t)callback);
}

QPaintDevice* q_mdisubwindow_redirected(void* self, void* offset) {
    return QMdiSubWindow_Redirected((QMdiSubWindow*)self, (QPoint*)offset);
}

QPaintDevice* q_mdisubwindow_qbase_redirected(void* self, void* offset) {
    return QMdiSubWindow_QBaseRedirected((QMdiSubWindow*)self, (QPoint*)offset);
}

void q_mdisubwindow_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QMdiSubWindow_OnRedirected((QMdiSubWindow*)self, (intptr_t)callback);
}

QPainter* q_mdisubwindow_shared_painter(void* self) {
    return QMdiSubWindow_SharedPainter((QMdiSubWindow*)self);
}

QPainter* q_mdisubwindow_qbase_shared_painter(void* self) {
    return QMdiSubWindow_QBaseSharedPainter((QMdiSubWindow*)self);
}

void q_mdisubwindow_on_shared_painter(void* self, QPainter* (*callback)()) {
    QMdiSubWindow_OnSharedPainter((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_input_method_event(void* self, void* param1) {
    QMdiSubWindow_InputMethodEvent((QMdiSubWindow*)self, (QInputMethodEvent*)param1);
}

void q_mdisubwindow_qbase_input_method_event(void* self, void* param1) {
    QMdiSubWindow_QBaseInputMethodEvent((QMdiSubWindow*)self, (QInputMethodEvent*)param1);
}

void q_mdisubwindow_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnInputMethodEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

QVariant* q_mdisubwindow_input_method_query(void* self, int64_t param1) {
    return QMdiSubWindow_InputMethodQuery((QMdiSubWindow*)self, param1);
}

QVariant* q_mdisubwindow_qbase_input_method_query(void* self, int64_t param1) {
    return QMdiSubWindow_QBaseInputMethodQuery((QMdiSubWindow*)self, param1);
}

void q_mdisubwindow_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QMdiSubWindow_OnInputMethodQuery((QMdiSubWindow*)self, (intptr_t)callback);
}

bool q_mdisubwindow_focus_next_prev_child(void* self, bool next) {
    return QMdiSubWindow_FocusNextPrevChild((QMdiSubWindow*)self, next);
}

bool q_mdisubwindow_qbase_focus_next_prev_child(void* self, bool next) {
    return QMdiSubWindow_QBaseFocusNextPrevChild((QMdiSubWindow*)self, next);
}

void q_mdisubwindow_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QMdiSubWindow_OnFocusNextPrevChild((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_custom_event(void* self, void* event) {
    QMdiSubWindow_CustomEvent((QMdiSubWindow*)self, (QEvent*)event);
}

void q_mdisubwindow_qbase_custom_event(void* self, void* event) {
    QMdiSubWindow_QBaseCustomEvent((QMdiSubWindow*)self, (QEvent*)event);
}

void q_mdisubwindow_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnCustomEvent((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_connect_notify(void* self, void* signal) {
    QMdiSubWindow_ConnectNotify((QMdiSubWindow*)self, (QMetaMethod*)signal);
}

void q_mdisubwindow_qbase_connect_notify(void* self, void* signal) {
    QMdiSubWindow_QBaseConnectNotify((QMdiSubWindow*)self, (QMetaMethod*)signal);
}

void q_mdisubwindow_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnConnectNotify((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_disconnect_notify(void* self, void* signal) {
    QMdiSubWindow_DisconnectNotify((QMdiSubWindow*)self, (QMetaMethod*)signal);
}

void q_mdisubwindow_qbase_disconnect_notify(void* self, void* signal) {
    QMdiSubWindow_QBaseDisconnectNotify((QMdiSubWindow*)self, (QMetaMethod*)signal);
}

void q_mdisubwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QMdiSubWindow_OnDisconnectNotify((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_update_micro_focus(void* self) {
    QMdiSubWindow_UpdateMicroFocus((QMdiSubWindow*)self);
}

void q_mdisubwindow_qbase_update_micro_focus(void* self) {
    QMdiSubWindow_QBaseUpdateMicroFocus((QMdiSubWindow*)self);
}

void q_mdisubwindow_on_update_micro_focus(void* self, void (*callback)()) {
    QMdiSubWindow_OnUpdateMicroFocus((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_create(void* self) {
    QMdiSubWindow_Create((QMdiSubWindow*)self);
}

void q_mdisubwindow_qbase_create(void* self) {
    QMdiSubWindow_QBaseCreate((QMdiSubWindow*)self);
}

void q_mdisubwindow_on_create(void* self, void (*callback)()) {
    QMdiSubWindow_OnCreate((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_destroy(void* self) {
    QMdiSubWindow_Destroy((QMdiSubWindow*)self);
}

void q_mdisubwindow_qbase_destroy(void* self) {
    QMdiSubWindow_QBaseDestroy((QMdiSubWindow*)self);
}

void q_mdisubwindow_on_destroy(void* self, void (*callback)()) {
    QMdiSubWindow_OnDestroy((QMdiSubWindow*)self, (intptr_t)callback);
}

bool q_mdisubwindow_focus_next_child(void* self) {
    return QMdiSubWindow_FocusNextChild((QMdiSubWindow*)self);
}

bool q_mdisubwindow_qbase_focus_next_child(void* self) {
    return QMdiSubWindow_QBaseFocusNextChild((QMdiSubWindow*)self);
}

void q_mdisubwindow_on_focus_next_child(void* self, bool (*callback)()) {
    QMdiSubWindow_OnFocusNextChild((QMdiSubWindow*)self, (intptr_t)callback);
}

bool q_mdisubwindow_focus_previous_child(void* self) {
    return QMdiSubWindow_FocusPreviousChild((QMdiSubWindow*)self);
}

bool q_mdisubwindow_qbase_focus_previous_child(void* self) {
    return QMdiSubWindow_QBaseFocusPreviousChild((QMdiSubWindow*)self);
}

void q_mdisubwindow_on_focus_previous_child(void* self, bool (*callback)()) {
    QMdiSubWindow_OnFocusPreviousChild((QMdiSubWindow*)self, (intptr_t)callback);
}

QObject* q_mdisubwindow_sender(void* self) {
    return QMdiSubWindow_Sender((QMdiSubWindow*)self);
}

QObject* q_mdisubwindow_qbase_sender(void* self) {
    return QMdiSubWindow_QBaseSender((QMdiSubWindow*)self);
}

void q_mdisubwindow_on_sender(void* self, QObject* (*callback)()) {
    QMdiSubWindow_OnSender((QMdiSubWindow*)self, (intptr_t)callback);
}

int32_t q_mdisubwindow_sender_signal_index(void* self) {
    return QMdiSubWindow_SenderSignalIndex((QMdiSubWindow*)self);
}

int32_t q_mdisubwindow_qbase_sender_signal_index(void* self) {
    return QMdiSubWindow_QBaseSenderSignalIndex((QMdiSubWindow*)self);
}

void q_mdisubwindow_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QMdiSubWindow_OnSenderSignalIndex((QMdiSubWindow*)self, (intptr_t)callback);
}

int32_t q_mdisubwindow_receivers(void* self, const char* signal) {
    return QMdiSubWindow_Receivers((QMdiSubWindow*)self, signal);
}

int32_t q_mdisubwindow_qbase_receivers(void* self, const char* signal) {
    return QMdiSubWindow_QBaseReceivers((QMdiSubWindow*)self, signal);
}

void q_mdisubwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QMdiSubWindow_OnReceivers((QMdiSubWindow*)self, (intptr_t)callback);
}

bool q_mdisubwindow_is_signal_connected(void* self, void* signal) {
    return QMdiSubWindow_IsSignalConnected((QMdiSubWindow*)self, (QMetaMethod*)signal);
}

bool q_mdisubwindow_qbase_is_signal_connected(void* self, void* signal) {
    return QMdiSubWindow_QBaseIsSignalConnected((QMdiSubWindow*)self, (QMetaMethod*)signal);
}

void q_mdisubwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QMdiSubWindow_OnIsSignalConnected((QMdiSubWindow*)self, (intptr_t)callback);
}

double q_mdisubwindow_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QMdiSubWindow_GetDecodedMetricF((QMdiSubWindow*)self, metricA, metricB);
}

double q_mdisubwindow_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QMdiSubWindow_QBaseGetDecodedMetricF((QMdiSubWindow*)self, metricA, metricB);
}

void q_mdisubwindow_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QMdiSubWindow_OnGetDecodedMetricF((QMdiSubWindow*)self, (intptr_t)callback);
}

void q_mdisubwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_mdisubwindow_delete(void* self) {
    QMdiSubWindow_Delete((QMdiSubWindow*)(self));
}

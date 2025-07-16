#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqicon.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqmenu.hpp"
#include "libqmenu.h"

QMenu* q_menu_new(void* parent) {
    return QMenu_new((QWidget*)parent);
}

QMenu* q_menu_new2() {
    return QMenu_new2();
}

QMenu* q_menu_new3(const char* title) {
    return QMenu_new3(qstring(title));
}

QMenu* q_menu_new4(const char* title, void* parent) {
    return QMenu_new4(qstring(title), (QWidget*)parent);
}

const QMetaObject* q_menu_meta_object(void* self) {
    return QMenu_MetaObject((QMenu*)self);
}

void* q_menu_metacast(void* self, const char* param1) {
    return QMenu_Metacast((QMenu*)self, param1);
}

int32_t q_menu_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMenu_Metacall((QMenu*)self, param1, param2, param3);
}

void q_menu_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QMenu_OnMetacall((QMenu*)self, (intptr_t)slot);
}

int32_t q_menu_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMenu_QBaseMetacall((QMenu*)self, param1, param2, param3);
}

const char* q_menu_tr(const char* s) {
    libqt_string _str = QMenu_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAction* q_menu_add_menu(void* self, void* menu) {
    return QMenu_AddMenu((QMenu*)self, (QMenu*)menu);
}

QMenu* q_menu_add_menu2(void* self, const char* title) {
    return QMenu_AddMenu2((QMenu*)self, qstring(title));
}

QMenu* q_menu_add_menu3(void* self, void* icon, const char* title) {
    return QMenu_AddMenu3((QMenu*)self, (QIcon*)icon, qstring(title));
}

QAction* q_menu_add_separator(void* self) {
    return QMenu_AddSeparator((QMenu*)self);
}

QAction* q_menu_add_section(void* self, const char* text) {
    return QMenu_AddSection((QMenu*)self, qstring(text));
}

QAction* q_menu_add_section2(void* self, void* icon, const char* text) {
    return QMenu_AddSection2((QMenu*)self, (QIcon*)icon, qstring(text));
}

QAction* q_menu_insert_menu(void* self, void* before, void* menu) {
    return QMenu_InsertMenu((QMenu*)self, (QAction*)before, (QMenu*)menu);
}

QAction* q_menu_insert_separator(void* self, void* before) {
    return QMenu_InsertSeparator((QMenu*)self, (QAction*)before);
}

QAction* q_menu_insert_section(void* self, void* before, const char* text) {
    return QMenu_InsertSection((QMenu*)self, (QAction*)before, qstring(text));
}

QAction* q_menu_insert_section2(void* self, void* before, void* icon, const char* text) {
    return QMenu_InsertSection2((QMenu*)self, (QAction*)before, (QIcon*)icon, qstring(text));
}

bool q_menu_is_empty(void* self) {
    return QMenu_IsEmpty((QMenu*)self);
}

void q_menu_clear(void* self) {
    QMenu_Clear((QMenu*)self);
}

void q_menu_set_tear_off_enabled(void* self, bool tearOffEnabled) {
    QMenu_SetTearOffEnabled((QMenu*)self, tearOffEnabled);
}

bool q_menu_is_tear_off_enabled(void* self) {
    return QMenu_IsTearOffEnabled((QMenu*)self);
}

bool q_menu_is_tear_off_menu_visible(void* self) {
    return QMenu_IsTearOffMenuVisible((QMenu*)self);
}

void q_menu_show_tear_off_menu(void* self) {
    QMenu_ShowTearOffMenu((QMenu*)self);
}

void q_menu_show_tear_off_menu2(void* self, void* pos) {
    QMenu_ShowTearOffMenu2((QMenu*)self, (QPoint*)pos);
}

void q_menu_hide_tear_off_menu(void* self) {
    QMenu_HideTearOffMenu((QMenu*)self);
}

void q_menu_set_default_action(void* self, void* defaultAction) {
    QMenu_SetDefaultAction((QMenu*)self, (QAction*)defaultAction);
}

QAction* q_menu_default_action(void* self) {
    return QMenu_DefaultAction((QMenu*)self);
}

void q_menu_set_active_action(void* self, void* act) {
    QMenu_SetActiveAction((QMenu*)self, (QAction*)act);
}

QAction* q_menu_active_action(void* self) {
    return QMenu_ActiveAction((QMenu*)self);
}

void q_menu_popup(void* self, void* pos) {
    QMenu_Popup((QMenu*)self, (QPoint*)pos);
}

QAction* q_menu_exec(void* self) {
    return QMenu_Exec((QMenu*)self);
}

QAction* q_menu_exec2(void* self, void* pos) {
    return QMenu_Exec2((QMenu*)self, (QPoint*)pos);
}

QAction* q_menu_exec3(libqt_list actions, void* pos) {
    return QMenu_Exec3(actions, (QPoint*)pos);
}

QSize* q_menu_size_hint(void* self) {
    return QMenu_SizeHint((QMenu*)self);
}

void q_menu_on_size_hint(void* self, QSize* (*slot)()) {
    QMenu_OnSizeHint((QMenu*)self, (intptr_t)slot);
}

QSize* q_menu_qbase_size_hint(void* self) {
    return QMenu_QBaseSizeHint((QMenu*)self);
}

QRect* q_menu_action_geometry(void* self, void* param1) {
    return QMenu_ActionGeometry((QMenu*)self, (QAction*)param1);
}

QAction* q_menu_action_at(void* self, void* param1) {
    return QMenu_ActionAt((QMenu*)self, (QPoint*)param1);
}

QAction* q_menu_menu_action(void* self) {
    return QMenu_MenuAction((QMenu*)self);
}

QMenu* q_menu_menu_in_action(void* action) {
    return QMenu_MenuInAction((QAction*)action);
}

const char* q_menu_title(void* self) {
    libqt_string _str = QMenu_Title((QMenu*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_menu_set_title(void* self, const char* title) {
    QMenu_SetTitle((QMenu*)self, qstring(title));
}

QIcon* q_menu_icon(void* self) {
    return QMenu_Icon((QMenu*)self);
}

void q_menu_set_icon(void* self, void* icon) {
    QMenu_SetIcon((QMenu*)self, (QIcon*)icon);
}

void q_menu_set_no_replay_for(void* self, void* widget) {
    QMenu_SetNoReplayFor((QMenu*)self, (QWidget*)widget);
}

bool q_menu_separators_collapsible(void* self) {
    return QMenu_SeparatorsCollapsible((QMenu*)self);
}

void q_menu_set_separators_collapsible(void* self, bool collapse) {
    QMenu_SetSeparatorsCollapsible((QMenu*)self, collapse);
}

bool q_menu_tool_tips_visible(void* self) {
    return QMenu_ToolTipsVisible((QMenu*)self);
}

void q_menu_set_tool_tips_visible(void* self, bool visible) {
    QMenu_SetToolTipsVisible((QMenu*)self, visible);
}

void q_menu_about_to_show(void* self) {
    QMenu_AboutToShow((QMenu*)self);
}

void q_menu_on_about_to_show(void* self, void (*slot)(void*)) {
    QMenu_Connect_AboutToShow((QMenu*)self, (intptr_t)slot);
}

void q_menu_about_to_hide(void* self) {
    QMenu_AboutToHide((QMenu*)self);
}

void q_menu_on_about_to_hide(void* self, void (*slot)(void*)) {
    QMenu_Connect_AboutToHide((QMenu*)self, (intptr_t)slot);
}

void q_menu_triggered(void* self, void* action) {
    QMenu_Triggered((QMenu*)self, (QAction*)action);
}

void q_menu_on_triggered(void* self, void (*slot)(void*, void*)) {
    QMenu_Connect_Triggered((QMenu*)self, (intptr_t)slot);
}

void q_menu_hovered(void* self, void* action) {
    QMenu_Hovered((QMenu*)self, (QAction*)action);
}

void q_menu_on_hovered(void* self, void (*slot)(void*, void*)) {
    QMenu_Connect_Hovered((QMenu*)self, (intptr_t)slot);
}

int32_t q_menu_column_count(void* self) {
    return QMenu_ColumnCount((QMenu*)self);
}

void q_menu_on_column_count(void* self, int32_t (*slot)()) {
    QMenu_OnColumnCount((QMenu*)self, (intptr_t)slot);
}

int32_t q_menu_qbase_column_count(void* self) {
    return QMenu_QBaseColumnCount((QMenu*)self);
}

void q_menu_change_event(void* self, void* param1) {
    QMenu_ChangeEvent((QMenu*)self, (QEvent*)param1);
}

void q_menu_on_change_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnChangeEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_qbase_change_event(void* self, void* param1) {
    QMenu_QBaseChangeEvent((QMenu*)self, (QEvent*)param1);
}

void q_menu_key_press_event(void* self, void* param1) {
    QMenu_KeyPressEvent((QMenu*)self, (QKeyEvent*)param1);
}

void q_menu_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnKeyPressEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_qbase_key_press_event(void* self, void* param1) {
    QMenu_QBaseKeyPressEvent((QMenu*)self, (QKeyEvent*)param1);
}

void q_menu_mouse_release_event(void* self, void* param1) {
    QMenu_MouseReleaseEvent((QMenu*)self, (QMouseEvent*)param1);
}

void q_menu_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnMouseReleaseEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_qbase_mouse_release_event(void* self, void* param1) {
    QMenu_QBaseMouseReleaseEvent((QMenu*)self, (QMouseEvent*)param1);
}

void q_menu_mouse_press_event(void* self, void* param1) {
    QMenu_MousePressEvent((QMenu*)self, (QMouseEvent*)param1);
}

void q_menu_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnMousePressEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_qbase_mouse_press_event(void* self, void* param1) {
    QMenu_QBaseMousePressEvent((QMenu*)self, (QMouseEvent*)param1);
}

void q_menu_mouse_move_event(void* self, void* param1) {
    QMenu_MouseMoveEvent((QMenu*)self, (QMouseEvent*)param1);
}

void q_menu_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnMouseMoveEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_qbase_mouse_move_event(void* self, void* param1) {
    QMenu_QBaseMouseMoveEvent((QMenu*)self, (QMouseEvent*)param1);
}

void q_menu_wheel_event(void* self, void* param1) {
    QMenu_WheelEvent((QMenu*)self, (QWheelEvent*)param1);
}

void q_menu_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnWheelEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_qbase_wheel_event(void* self, void* param1) {
    QMenu_QBaseWheelEvent((QMenu*)self, (QWheelEvent*)param1);
}

void q_menu_enter_event(void* self, void* param1) {
    QMenu_EnterEvent((QMenu*)self, (QEnterEvent*)param1);
}

void q_menu_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnEnterEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_qbase_enter_event(void* self, void* param1) {
    QMenu_QBaseEnterEvent((QMenu*)self, (QEnterEvent*)param1);
}

void q_menu_leave_event(void* self, void* param1) {
    QMenu_LeaveEvent((QMenu*)self, (QEvent*)param1);
}

void q_menu_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnLeaveEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_qbase_leave_event(void* self, void* param1) {
    QMenu_QBaseLeaveEvent((QMenu*)self, (QEvent*)param1);
}

void q_menu_hide_event(void* self, void* param1) {
    QMenu_HideEvent((QMenu*)self, (QHideEvent*)param1);
}

void q_menu_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnHideEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_qbase_hide_event(void* self, void* param1) {
    QMenu_QBaseHideEvent((QMenu*)self, (QHideEvent*)param1);
}

void q_menu_paint_event(void* self, void* param1) {
    QMenu_PaintEvent((QMenu*)self, (QPaintEvent*)param1);
}

void q_menu_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnPaintEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_qbase_paint_event(void* self, void* param1) {
    QMenu_QBasePaintEvent((QMenu*)self, (QPaintEvent*)param1);
}

void q_menu_action_event(void* self, void* param1) {
    QMenu_ActionEvent((QMenu*)self, (QActionEvent*)param1);
}

void q_menu_on_action_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnActionEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_qbase_action_event(void* self, void* param1) {
    QMenu_QBaseActionEvent((QMenu*)self, (QActionEvent*)param1);
}

void q_menu_timer_event(void* self, void* param1) {
    QMenu_TimerEvent((QMenu*)self, (QTimerEvent*)param1);
}

void q_menu_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnTimerEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_qbase_timer_event(void* self, void* param1) {
    QMenu_QBaseTimerEvent((QMenu*)self, (QTimerEvent*)param1);
}

bool q_menu_event(void* self, void* param1) {
    return QMenu_Event((QMenu*)self, (QEvent*)param1);
}

void q_menu_on_event(void* self, bool (*slot)(void*, void*)) {
    QMenu_OnEvent((QMenu*)self, (intptr_t)slot);
}

bool q_menu_qbase_event(void* self, void* param1) {
    return QMenu_QBaseEvent((QMenu*)self, (QEvent*)param1);
}

bool q_menu_focus_next_prev_child(void* self, bool next) {
    return QMenu_FocusNextPrevChild((QMenu*)self, next);
}

void q_menu_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QMenu_OnFocusNextPrevChild((QMenu*)self, (intptr_t)slot);
}

bool q_menu_qbase_focus_next_prev_child(void* self, bool next) {
    return QMenu_QBaseFocusNextPrevChild((QMenu*)self, next);
}

void q_menu_init_style_option(void* self, void* option, void* action) {
    QMenu_InitStyleOption((QMenu*)self, (QStyleOptionMenuItem*)option, (QAction*)action);
}

void q_menu_on_init_style_option(void* self, void (*slot)(void*, void*, void*)) {
    QMenu_OnInitStyleOption((QMenu*)self, (intptr_t)slot);
}

void q_menu_qbase_init_style_option(void* self, void* option, void* action) {
    QMenu_QBaseInitStyleOption((QMenu*)self, (QStyleOptionMenuItem*)option, (QAction*)action);
}

const char* q_menu_tr2(const char* s, const char* c) {
    libqt_string _str = QMenu_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_menu_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMenu_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_menu_popup2(void* self, void* pos, void* at) {
    QMenu_Popup2((QMenu*)self, (QPoint*)pos, (QAction*)at);
}

QAction* q_menu_exec22(void* self, void* pos, void* at) {
    return QMenu_Exec22((QMenu*)self, (QPoint*)pos, (QAction*)at);
}

QAction* q_menu_exec32(libqt_list actions, void* pos, void* at) {
    return QMenu_Exec32(actions, (QPoint*)pos, (QAction*)at);
}

QAction* q_menu_exec4(libqt_list actions, void* pos, void* at, void* parent) {
    return QMenu_Exec4(actions, (QPoint*)pos, (QAction*)at, (QWidget*)parent);
}

uintptr_t q_menu_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_menu_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_menu_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_menu_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_menu_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_menu_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_menu_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_menu_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_menu_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_menu_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_menu_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_menu_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_menu_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_menu_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_menu_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_menu_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_menu_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_menu_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_menu_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_menu_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_menu_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_menu_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_menu_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_menu_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_menu_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_menu_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_menu_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_menu_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_menu_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_menu_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_menu_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_menu_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_menu_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_menu_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_menu_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_menu_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_menu_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_menu_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_menu_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_menu_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_menu_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_menu_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_menu_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_menu_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_menu_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_menu_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_menu_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_menu_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_menu_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_menu_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_menu_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_menu_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_menu_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_menu_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_menu_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_menu_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_menu_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_menu_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_menu_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_menu_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_menu_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_menu_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_menu_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_menu_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_menu_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_menu_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_menu_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_menu_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_menu_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_menu_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_menu_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_menu_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_menu_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_menu_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_menu_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_menu_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_menu_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_menu_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_menu_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_menu_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_menu_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_menu_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_menu_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_menu_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_menu_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_menu_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_menu_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_menu_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_menu_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_menu_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_menu_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_menu_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_menu_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_menu_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_menu_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_menu_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_menu_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_menu_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_menu_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_menu_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_menu_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_menu_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_menu_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_menu_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_menu_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_menu_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_menu_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_menu_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_menu_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_menu_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_menu_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_menu_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_menu_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_menu_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_menu_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_menu_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_menu_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_menu_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_menu_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_menu_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_menu_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_menu_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_menu_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_menu_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_menu_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_menu_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_menu_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_menu_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_menu_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_menu_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_menu_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_menu_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_menu_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_menu_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_menu_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_menu_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_menu_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_menu_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_menu_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_menu_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_menu_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_menu_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_menu_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_menu_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_menu_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_menu_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_menu_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_menu_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_menu_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_menu_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_menu_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_menu_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_menu_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_menu_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_menu_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_menu_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_menu_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_menu_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_menu_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_menu_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_menu_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_menu_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_menu_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_menu_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_menu_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_menu_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_menu_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_menu_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_menu_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_menu_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_menu_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_menu_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_menu_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_menu_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_menu_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_menu_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_menu_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_menu_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_menu_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_menu_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_menu_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_menu_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_menu_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_menu_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_menu_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_menu_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_menu_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_menu_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_menu_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_menu_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_menu_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_menu_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_menu_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_menu_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_menu_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_menu_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_menu_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_menu_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_menu_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_menu_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_menu_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_menu_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_menu_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_menu_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_menu_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_menu_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_menu_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_menu_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_menu_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_menu_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_menu_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_menu_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_menu_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_menu_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_menu_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_menu_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_menu_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_menu_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_menu_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_menu_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_menu_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_menu_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_menu_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_menu_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_menu_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_menu_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_menu_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_menu_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_menu_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_menu_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_menu_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_menu_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_menu_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_menu_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_menu_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_menu_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_menu_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_menu_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_menu_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_menu_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_menu_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_menu_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_menu_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_menu_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_menu_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_menu_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_menu_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_menu_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_menu_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_menu_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_menu_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_menu_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_menu_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_menu_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_menu_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_menu_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_menu_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_menu_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_menu_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_menu_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_menu_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_menu_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_menu_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_menu_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_menu_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_menu_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_menu_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_menu_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_menu_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_menu_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_menu_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_menu_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_menu_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_menu_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_menu_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_menu_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_menu_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_menu_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_menu_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_menu_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_menu_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_menu_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_menu_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_menu_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_menu_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_menu_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_menu_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_menu_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_menu_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_menu_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_menu_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_menu_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_menu_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_menu_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_menu_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_menu_dynamic_property_names(void* self) {
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
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_menu_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_menu_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_menu_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_menu_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_menu_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_menu_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_menu_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_menu_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_menu_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_menu_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_menu_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_menu_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_menu_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_menu_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_menu_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_menu_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_menu_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_menu_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_menu_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_menu_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_menu_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_menu_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_menu_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_menu_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_menu_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_menu_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_menu_dev_type(void* self) {
    return QMenu_DevType((QMenu*)self);
}

int32_t q_menu_qbase_dev_type(void* self) {
    return QMenu_QBaseDevType((QMenu*)self);
}

void q_menu_on_dev_type(void* self, int32_t (*slot)()) {
    QMenu_OnDevType((QMenu*)self, (intptr_t)slot);
}

void q_menu_set_visible(void* self, bool visible) {
    QMenu_SetVisible((QMenu*)self, visible);
}

void q_menu_qbase_set_visible(void* self, bool visible) {
    QMenu_QBaseSetVisible((QMenu*)self, visible);
}

void q_menu_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QMenu_OnSetVisible((QMenu*)self, (intptr_t)slot);
}

QSize* q_menu_minimum_size_hint(void* self) {
    return QMenu_MinimumSizeHint((QMenu*)self);
}

QSize* q_menu_qbase_minimum_size_hint(void* self) {
    return QMenu_QBaseMinimumSizeHint((QMenu*)self);
}

void q_menu_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QMenu_OnMinimumSizeHint((QMenu*)self, (intptr_t)slot);
}

int32_t q_menu_height_for_width(void* self, int param1) {
    return QMenu_HeightForWidth((QMenu*)self, param1);
}

int32_t q_menu_qbase_height_for_width(void* self, int param1) {
    return QMenu_QBaseHeightForWidth((QMenu*)self, param1);
}

void q_menu_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QMenu_OnHeightForWidth((QMenu*)self, (intptr_t)slot);
}

bool q_menu_has_height_for_width(void* self) {
    return QMenu_HasHeightForWidth((QMenu*)self);
}

bool q_menu_qbase_has_height_for_width(void* self) {
    return QMenu_QBaseHasHeightForWidth((QMenu*)self);
}

void q_menu_on_has_height_for_width(void* self, bool (*slot)()) {
    QMenu_OnHasHeightForWidth((QMenu*)self, (intptr_t)slot);
}

QPaintEngine* q_menu_paint_engine(void* self) {
    return QMenu_PaintEngine((QMenu*)self);
}

QPaintEngine* q_menu_qbase_paint_engine(void* self) {
    return QMenu_QBasePaintEngine((QMenu*)self);
}

void q_menu_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QMenu_OnPaintEngine((QMenu*)self, (intptr_t)slot);
}

void q_menu_mouse_double_click_event(void* self, void* event) {
    QMenu_MouseDoubleClickEvent((QMenu*)self, (QMouseEvent*)event);
}

void q_menu_qbase_mouse_double_click_event(void* self, void* event) {
    QMenu_QBaseMouseDoubleClickEvent((QMenu*)self, (QMouseEvent*)event);
}

void q_menu_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnMouseDoubleClickEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_key_release_event(void* self, void* event) {
    QMenu_KeyReleaseEvent((QMenu*)self, (QKeyEvent*)event);
}

void q_menu_qbase_key_release_event(void* self, void* event) {
    QMenu_QBaseKeyReleaseEvent((QMenu*)self, (QKeyEvent*)event);
}

void q_menu_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnKeyReleaseEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_focus_in_event(void* self, void* event) {
    QMenu_FocusInEvent((QMenu*)self, (QFocusEvent*)event);
}

void q_menu_qbase_focus_in_event(void* self, void* event) {
    QMenu_QBaseFocusInEvent((QMenu*)self, (QFocusEvent*)event);
}

void q_menu_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnFocusInEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_focus_out_event(void* self, void* event) {
    QMenu_FocusOutEvent((QMenu*)self, (QFocusEvent*)event);
}

void q_menu_qbase_focus_out_event(void* self, void* event) {
    QMenu_QBaseFocusOutEvent((QMenu*)self, (QFocusEvent*)event);
}

void q_menu_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnFocusOutEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_move_event(void* self, void* event) {
    QMenu_MoveEvent((QMenu*)self, (QMoveEvent*)event);
}

void q_menu_qbase_move_event(void* self, void* event) {
    QMenu_QBaseMoveEvent((QMenu*)self, (QMoveEvent*)event);
}

void q_menu_on_move_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnMoveEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_resize_event(void* self, void* event) {
    QMenu_ResizeEvent((QMenu*)self, (QResizeEvent*)event);
}

void q_menu_qbase_resize_event(void* self, void* event) {
    QMenu_QBaseResizeEvent((QMenu*)self, (QResizeEvent*)event);
}

void q_menu_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnResizeEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_close_event(void* self, void* event) {
    QMenu_CloseEvent((QMenu*)self, (QCloseEvent*)event);
}

void q_menu_qbase_close_event(void* self, void* event) {
    QMenu_QBaseCloseEvent((QMenu*)self, (QCloseEvent*)event);
}

void q_menu_on_close_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnCloseEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_context_menu_event(void* self, void* event) {
    QMenu_ContextMenuEvent((QMenu*)self, (QContextMenuEvent*)event);
}

void q_menu_qbase_context_menu_event(void* self, void* event) {
    QMenu_QBaseContextMenuEvent((QMenu*)self, (QContextMenuEvent*)event);
}

void q_menu_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnContextMenuEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_tablet_event(void* self, void* event) {
    QMenu_TabletEvent((QMenu*)self, (QTabletEvent*)event);
}

void q_menu_qbase_tablet_event(void* self, void* event) {
    QMenu_QBaseTabletEvent((QMenu*)self, (QTabletEvent*)event);
}

void q_menu_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnTabletEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_drag_enter_event(void* self, void* event) {
    QMenu_DragEnterEvent((QMenu*)self, (QDragEnterEvent*)event);
}

void q_menu_qbase_drag_enter_event(void* self, void* event) {
    QMenu_QBaseDragEnterEvent((QMenu*)self, (QDragEnterEvent*)event);
}

void q_menu_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnDragEnterEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_drag_move_event(void* self, void* event) {
    QMenu_DragMoveEvent((QMenu*)self, (QDragMoveEvent*)event);
}

void q_menu_qbase_drag_move_event(void* self, void* event) {
    QMenu_QBaseDragMoveEvent((QMenu*)self, (QDragMoveEvent*)event);
}

void q_menu_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnDragMoveEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_drag_leave_event(void* self, void* event) {
    QMenu_DragLeaveEvent((QMenu*)self, (QDragLeaveEvent*)event);
}

void q_menu_qbase_drag_leave_event(void* self, void* event) {
    QMenu_QBaseDragLeaveEvent((QMenu*)self, (QDragLeaveEvent*)event);
}

void q_menu_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnDragLeaveEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_drop_event(void* self, void* event) {
    QMenu_DropEvent((QMenu*)self, (QDropEvent*)event);
}

void q_menu_qbase_drop_event(void* self, void* event) {
    QMenu_QBaseDropEvent((QMenu*)self, (QDropEvent*)event);
}

void q_menu_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnDropEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_show_event(void* self, void* event) {
    QMenu_ShowEvent((QMenu*)self, (QShowEvent*)event);
}

void q_menu_qbase_show_event(void* self, void* event) {
    QMenu_QBaseShowEvent((QMenu*)self, (QShowEvent*)event);
}

void q_menu_on_show_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnShowEvent((QMenu*)self, (intptr_t)slot);
}

bool q_menu_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMenu_NativeEvent((QMenu*)self, qstring(eventType), message, result);
}

bool q_menu_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMenu_QBaseNativeEvent((QMenu*)self, qstring(eventType), message, result);
}

void q_menu_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QMenu_OnNativeEvent((QMenu*)self, (intptr_t)slot);
}

int32_t q_menu_metric(void* self, int64_t param1) {
    return QMenu_Metric((QMenu*)self, param1);
}

int32_t q_menu_qbase_metric(void* self, int64_t param1) {
    return QMenu_QBaseMetric((QMenu*)self, param1);
}

void q_menu_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QMenu_OnMetric((QMenu*)self, (intptr_t)slot);
}

void q_menu_init_painter(void* self, void* painter) {
    QMenu_InitPainter((QMenu*)self, (QPainter*)painter);
}

void q_menu_qbase_init_painter(void* self, void* painter) {
    QMenu_QBaseInitPainter((QMenu*)self, (QPainter*)painter);
}

void q_menu_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QMenu_OnInitPainter((QMenu*)self, (intptr_t)slot);
}

QPaintDevice* q_menu_redirected(void* self, void* offset) {
    return QMenu_Redirected((QMenu*)self, (QPoint*)offset);
}

QPaintDevice* q_menu_qbase_redirected(void* self, void* offset) {
    return QMenu_QBaseRedirected((QMenu*)self, (QPoint*)offset);
}

void q_menu_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QMenu_OnRedirected((QMenu*)self, (intptr_t)slot);
}

QPainter* q_menu_shared_painter(void* self) {
    return QMenu_SharedPainter((QMenu*)self);
}

QPainter* q_menu_qbase_shared_painter(void* self) {
    return QMenu_QBaseSharedPainter((QMenu*)self);
}

void q_menu_on_shared_painter(void* self, QPainter* (*slot)()) {
    QMenu_OnSharedPainter((QMenu*)self, (intptr_t)slot);
}

void q_menu_input_method_event(void* self, void* param1) {
    QMenu_InputMethodEvent((QMenu*)self, (QInputMethodEvent*)param1);
}

void q_menu_qbase_input_method_event(void* self, void* param1) {
    QMenu_QBaseInputMethodEvent((QMenu*)self, (QInputMethodEvent*)param1);
}

void q_menu_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnInputMethodEvent((QMenu*)self, (intptr_t)slot);
}

QVariant* q_menu_input_method_query(void* self, int64_t param1) {
    return QMenu_InputMethodQuery((QMenu*)self, param1);
}

QVariant* q_menu_qbase_input_method_query(void* self, int64_t param1) {
    return QMenu_QBaseInputMethodQuery((QMenu*)self, param1);
}

void q_menu_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QMenu_OnInputMethodQuery((QMenu*)self, (intptr_t)slot);
}

bool q_menu_event_filter(void* self, void* watched, void* event) {
    return QMenu_EventFilter((QMenu*)self, (QObject*)watched, (QEvent*)event);
}

bool q_menu_qbase_event_filter(void* self, void* watched, void* event) {
    return QMenu_QBaseEventFilter((QMenu*)self, (QObject*)watched, (QEvent*)event);
}

void q_menu_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QMenu_OnEventFilter((QMenu*)self, (intptr_t)slot);
}

void q_menu_child_event(void* self, void* event) {
    QMenu_ChildEvent((QMenu*)self, (QChildEvent*)event);
}

void q_menu_qbase_child_event(void* self, void* event) {
    QMenu_QBaseChildEvent((QMenu*)self, (QChildEvent*)event);
}

void q_menu_on_child_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnChildEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_custom_event(void* self, void* event) {
    QMenu_CustomEvent((QMenu*)self, (QEvent*)event);
}

void q_menu_qbase_custom_event(void* self, void* event) {
    QMenu_QBaseCustomEvent((QMenu*)self, (QEvent*)event);
}

void q_menu_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QMenu_OnCustomEvent((QMenu*)self, (intptr_t)slot);
}

void q_menu_connect_notify(void* self, void* signal) {
    QMenu_ConnectNotify((QMenu*)self, (QMetaMethod*)signal);
}

void q_menu_qbase_connect_notify(void* self, void* signal) {
    QMenu_QBaseConnectNotify((QMenu*)self, (QMetaMethod*)signal);
}

void q_menu_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QMenu_OnConnectNotify((QMenu*)self, (intptr_t)slot);
}

void q_menu_disconnect_notify(void* self, void* signal) {
    QMenu_DisconnectNotify((QMenu*)self, (QMetaMethod*)signal);
}

void q_menu_qbase_disconnect_notify(void* self, void* signal) {
    QMenu_QBaseDisconnectNotify((QMenu*)self, (QMetaMethod*)signal);
}

void q_menu_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QMenu_OnDisconnectNotify((QMenu*)self, (intptr_t)slot);
}

void q_menu_update_micro_focus(void* self) {
    QMenu_UpdateMicroFocus((QMenu*)self);
}

void q_menu_qbase_update_micro_focus(void* self) {
    QMenu_QBaseUpdateMicroFocus((QMenu*)self);
}

void q_menu_on_update_micro_focus(void* self, void (*slot)()) {
    QMenu_OnUpdateMicroFocus((QMenu*)self, (intptr_t)slot);
}

void q_menu_create(void* self) {
    QMenu_Create((QMenu*)self);
}

void q_menu_qbase_create(void* self) {
    QMenu_QBaseCreate((QMenu*)self);
}

void q_menu_on_create(void* self, void (*slot)()) {
    QMenu_OnCreate((QMenu*)self, (intptr_t)slot);
}

void q_menu_destroy(void* self) {
    QMenu_Destroy((QMenu*)self);
}

void q_menu_qbase_destroy(void* self) {
    QMenu_QBaseDestroy((QMenu*)self);
}

void q_menu_on_destroy(void* self, void (*slot)()) {
    QMenu_OnDestroy((QMenu*)self, (intptr_t)slot);
}

bool q_menu_focus_next_child(void* self) {
    return QMenu_FocusNextChild((QMenu*)self);
}

bool q_menu_qbase_focus_next_child(void* self) {
    return QMenu_QBaseFocusNextChild((QMenu*)self);
}

void q_menu_on_focus_next_child(void* self, bool (*slot)()) {
    QMenu_OnFocusNextChild((QMenu*)self, (intptr_t)slot);
}

bool q_menu_focus_previous_child(void* self) {
    return QMenu_FocusPreviousChild((QMenu*)self);
}

bool q_menu_qbase_focus_previous_child(void* self) {
    return QMenu_QBaseFocusPreviousChild((QMenu*)self);
}

void q_menu_on_focus_previous_child(void* self, bool (*slot)()) {
    QMenu_OnFocusPreviousChild((QMenu*)self, (intptr_t)slot);
}

QObject* q_menu_sender(void* self) {
    return QMenu_Sender((QMenu*)self);
}

QObject* q_menu_qbase_sender(void* self) {
    return QMenu_QBaseSender((QMenu*)self);
}

void q_menu_on_sender(void* self, QObject* (*slot)()) {
    QMenu_OnSender((QMenu*)self, (intptr_t)slot);
}

int32_t q_menu_sender_signal_index(void* self) {
    return QMenu_SenderSignalIndex((QMenu*)self);
}

int32_t q_menu_qbase_sender_signal_index(void* self) {
    return QMenu_QBaseSenderSignalIndex((QMenu*)self);
}

void q_menu_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QMenu_OnSenderSignalIndex((QMenu*)self, (intptr_t)slot);
}

int32_t q_menu_receivers(void* self, const char* signal) {
    return QMenu_Receivers((QMenu*)self, signal);
}

int32_t q_menu_qbase_receivers(void* self, const char* signal) {
    return QMenu_QBaseReceivers((QMenu*)self, signal);
}

void q_menu_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QMenu_OnReceivers((QMenu*)self, (intptr_t)slot);
}

bool q_menu_is_signal_connected(void* self, void* signal) {
    return QMenu_IsSignalConnected((QMenu*)self, (QMetaMethod*)signal);
}

bool q_menu_qbase_is_signal_connected(void* self, void* signal) {
    return QMenu_QBaseIsSignalConnected((QMenu*)self, (QMetaMethod*)signal);
}

void q_menu_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QMenu_OnIsSignalConnected((QMenu*)self, (intptr_t)slot);
}

double q_menu_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QMenu_GetDecodedMetricF((QMenu*)self, metricA, metricB);
}

double q_menu_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QMenu_QBaseGetDecodedMetricF((QMenu*)self, metricA, metricB);
}

void q_menu_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QMenu_OnGetDecodedMetricF((QMenu*)self, (intptr_t)slot);
}

void q_menu_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_menu_delete(void* self) {
    QMenu_Delete((QMenu*)(self));
}

#include "../extras-kconfig/libkconfiggroup.hpp"
#include "libkmainwindow.hpp"
#include "libkxmlguiclient.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../xml/libqdom.hpp"
#include "../libqmainwindow.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqtoolbar.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libktoolbar.hpp"
#include "libktoolbar.h"

KToolBar* k_toolbar_new(void* parent) {
    return KToolBar_new((QWidget*)parent);
}

KToolBar* k_toolbar_new2(const char* objectName, void* parent) {
    return KToolBar_new2(qstring(objectName), (QWidget*)parent);
}

KToolBar* k_toolbar_new3(const char* objectName, void* parentWindow, int32_t area) {
    return KToolBar_new3(qstring(objectName), (QMainWindow*)parentWindow, area);
}

KToolBar* k_toolbar_new4(void* parent, bool isMainToolBar) {
    return KToolBar_new4((QWidget*)parent, isMainToolBar);
}

KToolBar* k_toolbar_new5(void* parent, bool isMainToolBar, bool readConfig) {
    return KToolBar_new5((QWidget*)parent, isMainToolBar, readConfig);
}

KToolBar* k_toolbar_new6(const char* objectName, void* parent, bool readConfig) {
    return KToolBar_new6(qstring(objectName), (QWidget*)parent, readConfig);
}

KToolBar* k_toolbar_new7(const char* objectName, void* parentWindow, int32_t area, bool newLine) {
    return KToolBar_new7(qstring(objectName), (QMainWindow*)parentWindow, area, newLine);
}

KToolBar* k_toolbar_new8(const char* objectName, void* parentWindow, int32_t area, bool newLine, bool isMainToolBar) {
    return KToolBar_new8(qstring(objectName), (QMainWindow*)parentWindow, area, newLine, isMainToolBar);
}

KToolBar* k_toolbar_new9(const char* objectName, void* parentWindow, int32_t area, bool newLine, bool isMainToolBar, bool readConfig) {
    return KToolBar_new9(qstring(objectName), (QMainWindow*)parentWindow, area, newLine, isMainToolBar, readConfig);
}

const QMetaObject* k_toolbar_meta_object(void* self) {
    return KToolBar_MetaObject((KToolBar*)self);
}

void* k_toolbar_metacast(void* self, const char* param1) {
    return KToolBar_Metacast((KToolBar*)self, param1);
}

int32_t k_toolbar_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KToolBar_Metacall((KToolBar*)self, param1, param2, param3);
}

void k_toolbar_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KToolBar_OnMetacall((KToolBar*)self, (intptr_t)callback);
}

int32_t k_toolbar_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KToolBar_QBaseMetacall((KToolBar*)self, param1, param2, param3);
}

const char* k_toolbar_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KMainWindow* k_toolbar_main_window(void* self) {
    return KToolBar_MainWindow((KToolBar*)self);
}

void k_toolbar_set_icon_dimensions(void* self, int size) {
    KToolBar_SetIconDimensions((KToolBar*)self, size);
}

int32_t k_toolbar_icon_size_default(void* self) {
    return KToolBar_IconSizeDefault((KToolBar*)self);
}

void k_toolbar_save_settings(void* self, void* cg) {
    KToolBar_SaveSettings((KToolBar*)self, (KConfigGroup*)cg);
}

void k_toolbar_apply_settings(void* self, void* cg) {
    KToolBar_ApplySettings((KToolBar*)self, (KConfigGroup*)cg);
}

void k_toolbar_add_x_m_l_g_u_i_client(void* self, void* client) {
    KToolBar_AddXMLGUIClient((KToolBar*)self, (KXMLGUIClient*)client);
}

void k_toolbar_remove_x_m_l_g_u_i_client(void* self, void* client) {
    KToolBar_RemoveXMLGUIClient((KToolBar*)self, (KXMLGUIClient*)client);
}

void k_toolbar_load_state(void* self, void* element) {
    KToolBar_LoadState((KToolBar*)self, (QDomElement*)element);
}

void k_toolbar_save_state(void* self, void* element) {
    KToolBar_SaveState((KToolBar*)self, (QDomElement*)element);
}

bool k_toolbar_event_filter(void* self, void* watched, void* event) {
    return KToolBar_EventFilter((KToolBar*)self, (QObject*)watched, (QEvent*)event);
}

void k_toolbar_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KToolBar_OnEventFilter((KToolBar*)self, (intptr_t)callback);
}

bool k_toolbar_qbase_event_filter(void* self, void* watched, void* event) {
    return KToolBar_QBaseEventFilter((KToolBar*)self, (QObject*)watched, (QEvent*)event);
}

bool k_toolbar_tool_bars_editable() {
    return KToolBar_ToolBarsEditable();
}

void k_toolbar_set_tool_bars_editable(bool editable) {
    KToolBar_SetToolBarsEditable(editable);
}

bool k_toolbar_tool_bars_locked() {
    return KToolBar_ToolBarsLocked();
}

void k_toolbar_set_tool_bars_locked(bool locked) {
    KToolBar_SetToolBarsLocked(locked);
}

void k_toolbar_emit_toolbar_style_changed() {
    KToolBar_EmitToolbarStyleChanged();
}

void k_toolbar_slot_movable_changed(void* self, bool movable) {
    KToolBar_SlotMovableChanged((KToolBar*)self, movable);
}

void k_toolbar_on_slot_movable_changed(void* self, void (*callback)(void*, bool)) {
    KToolBar_OnSlotMovableChanged((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_qbase_slot_movable_changed(void* self, bool movable) {
    KToolBar_QBaseSlotMovableChanged((KToolBar*)self, movable);
}

void k_toolbar_context_menu_event(void* self, void* param1) {
    KToolBar_ContextMenuEvent((KToolBar*)self, (QContextMenuEvent*)param1);
}

void k_toolbar_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnContextMenuEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_qbase_context_menu_event(void* self, void* param1) {
    KToolBar_QBaseContextMenuEvent((KToolBar*)self, (QContextMenuEvent*)param1);
}

void k_toolbar_action_event(void* self, void* param1) {
    KToolBar_ActionEvent((KToolBar*)self, (QActionEvent*)param1);
}

void k_toolbar_on_action_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnActionEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_qbase_action_event(void* self, void* param1) {
    KToolBar_QBaseActionEvent((KToolBar*)self, (QActionEvent*)param1);
}

void k_toolbar_drag_enter_event(void* self, void* param1) {
    KToolBar_DragEnterEvent((KToolBar*)self, (QDragEnterEvent*)param1);
}

void k_toolbar_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnDragEnterEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_qbase_drag_enter_event(void* self, void* param1) {
    KToolBar_QBaseDragEnterEvent((KToolBar*)self, (QDragEnterEvent*)param1);
}

void k_toolbar_drag_move_event(void* self, void* param1) {
    KToolBar_DragMoveEvent((KToolBar*)self, (QDragMoveEvent*)param1);
}

void k_toolbar_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnDragMoveEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_qbase_drag_move_event(void* self, void* param1) {
    KToolBar_QBaseDragMoveEvent((KToolBar*)self, (QDragMoveEvent*)param1);
}

void k_toolbar_drag_leave_event(void* self, void* param1) {
    KToolBar_DragLeaveEvent((KToolBar*)self, (QDragLeaveEvent*)param1);
}

void k_toolbar_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnDragLeaveEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_qbase_drag_leave_event(void* self, void* param1) {
    KToolBar_QBaseDragLeaveEvent((KToolBar*)self, (QDragLeaveEvent*)param1);
}

void k_toolbar_drop_event(void* self, void* param1) {
    KToolBar_DropEvent((KToolBar*)self, (QDropEvent*)param1);
}

void k_toolbar_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnDropEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_qbase_drop_event(void* self, void* param1) {
    KToolBar_QBaseDropEvent((KToolBar*)self, (QDropEvent*)param1);
}

void k_toolbar_mouse_press_event(void* self, void* param1) {
    KToolBar_MousePressEvent((KToolBar*)self, (QMouseEvent*)param1);
}

void k_toolbar_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnMousePressEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_qbase_mouse_press_event(void* self, void* param1) {
    KToolBar_QBaseMousePressEvent((KToolBar*)self, (QMouseEvent*)param1);
}

void k_toolbar_mouse_move_event(void* self, void* param1) {
    KToolBar_MouseMoveEvent((KToolBar*)self, (QMouseEvent*)param1);
}

void k_toolbar_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnMouseMoveEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_qbase_mouse_move_event(void* self, void* param1) {
    KToolBar_QBaseMouseMoveEvent((KToolBar*)self, (QMouseEvent*)param1);
}

void k_toolbar_mouse_release_event(void* self, void* param1) {
    KToolBar_MouseReleaseEvent((KToolBar*)self, (QMouseEvent*)param1);
}

void k_toolbar_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnMouseReleaseEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_qbase_mouse_release_event(void* self, void* param1) {
    KToolBar_QBaseMouseReleaseEvent((KToolBar*)self, (QMouseEvent*)param1);
}

const char* k_toolbar_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_toolbar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbar_set_movable(void* self, bool movable) {
    QToolBar_SetMovable((QToolBar*)self, movable);
}

bool k_toolbar_is_movable(void* self) {
    return QToolBar_IsMovable((QToolBar*)self);
}

void k_toolbar_set_allowed_areas(void* self, int32_t areas) {
    QToolBar_SetAllowedAreas((QToolBar*)self, areas);
}

int32_t k_toolbar_allowed_areas(void* self) {
    return QToolBar_AllowedAreas((QToolBar*)self);
}

bool k_toolbar_is_area_allowed(void* self, int32_t area) {
    return QToolBar_IsAreaAllowed((QToolBar*)self, area);
}

void k_toolbar_set_orientation(void* self, int32_t orientation) {
    QToolBar_SetOrientation((QToolBar*)self, orientation);
}

int32_t k_toolbar_orientation(void* self) {
    return QToolBar_Orientation((QToolBar*)self);
}

void k_toolbar_clear(void* self) {
    QToolBar_Clear((QToolBar*)self);
}

QAction* k_toolbar_add_separator(void* self) {
    return QToolBar_AddSeparator((QToolBar*)self);
}

QAction* k_toolbar_insert_separator(void* self, void* before) {
    return QToolBar_InsertSeparator((QToolBar*)self, (QAction*)before);
}

QAction* k_toolbar_add_widget(void* self, void* widget) {
    return QToolBar_AddWidget((QToolBar*)self, (QWidget*)widget);
}

QAction* k_toolbar_insert_widget(void* self, void* before, void* widget) {
    return QToolBar_InsertWidget((QToolBar*)self, (QAction*)before, (QWidget*)widget);
}

QRect* k_toolbar_action_geometry(void* self, void* action) {
    return QToolBar_ActionGeometry((QToolBar*)self, (QAction*)action);
}

QAction* k_toolbar_action_at(void* self, void* p) {
    return QToolBar_ActionAt((QToolBar*)self, (QPoint*)p);
}

QAction* k_toolbar_action_at2(void* self, int x, int y) {
    return QToolBar_ActionAt2((QToolBar*)self, x, y);
}

QAction* k_toolbar_toggle_view_action(void* self) {
    return QToolBar_ToggleViewAction((QToolBar*)self);
}

QSize* k_toolbar_icon_size(void* self) {
    return QToolBar_IconSize((QToolBar*)self);
}

int32_t k_toolbar_tool_button_style(void* self) {
    return QToolBar_ToolButtonStyle((QToolBar*)self);
}

QWidget* k_toolbar_widget_for_action(void* self, void* action) {
    return QToolBar_WidgetForAction((QToolBar*)self, (QAction*)action);
}

bool k_toolbar_is_floatable(void* self) {
    return QToolBar_IsFloatable((QToolBar*)self);
}

void k_toolbar_set_floatable(void* self, bool floatable) {
    QToolBar_SetFloatable((QToolBar*)self, floatable);
}

bool k_toolbar_is_floating(void* self) {
    return QToolBar_IsFloating((QToolBar*)self);
}

void k_toolbar_set_icon_size(void* self, void* iconSize) {
    QToolBar_SetIconSize((QToolBar*)self, (QSize*)iconSize);
}

void k_toolbar_set_tool_button_style(void* self, int32_t toolButtonStyle) {
    QToolBar_SetToolButtonStyle((QToolBar*)self, toolButtonStyle);
}

void k_toolbar_action_triggered(void* self, void* action) {
    QToolBar_ActionTriggered((QToolBar*)self, (QAction*)action);
}

void k_toolbar_on_action_triggered(void* self, void (*callback)(void*, void*)) {
    QToolBar_Connect_ActionTriggered((QToolBar*)self, (intptr_t)callback);
}

void k_toolbar_movable_changed(void* self, bool movable) {
    QToolBar_MovableChanged((QToolBar*)self, movable);
}

void k_toolbar_on_movable_changed(void* self, void (*callback)(void*, bool)) {
    QToolBar_Connect_MovableChanged((QToolBar*)self, (intptr_t)callback);
}

void k_toolbar_allowed_areas_changed(void* self, int32_t allowedAreas) {
    QToolBar_AllowedAreasChanged((QToolBar*)self, allowedAreas);
}

void k_toolbar_on_allowed_areas_changed(void* self, void (*callback)(void*, int32_t)) {
    QToolBar_Connect_AllowedAreasChanged((QToolBar*)self, (intptr_t)callback);
}

void k_toolbar_orientation_changed(void* self, int32_t orientation) {
    QToolBar_OrientationChanged((QToolBar*)self, orientation);
}

void k_toolbar_on_orientation_changed(void* self, void (*callback)(void*, int32_t)) {
    QToolBar_Connect_OrientationChanged((QToolBar*)self, (intptr_t)callback);
}

void k_toolbar_icon_size_changed(void* self, void* iconSize) {
    QToolBar_IconSizeChanged((QToolBar*)self, (QSize*)iconSize);
}

void k_toolbar_on_icon_size_changed(void* self, void (*callback)(void*, void*)) {
    QToolBar_Connect_IconSizeChanged((QToolBar*)self, (intptr_t)callback);
}

void k_toolbar_tool_button_style_changed(void* self, int32_t toolButtonStyle) {
    QToolBar_ToolButtonStyleChanged((QToolBar*)self, toolButtonStyle);
}

void k_toolbar_on_tool_button_style_changed(void* self, void (*callback)(void*, int32_t)) {
    QToolBar_Connect_ToolButtonStyleChanged((QToolBar*)self, (intptr_t)callback);
}

void k_toolbar_top_level_changed(void* self, bool topLevel) {
    QToolBar_TopLevelChanged((QToolBar*)self, topLevel);
}

void k_toolbar_on_top_level_changed(void* self, void (*callback)(void*, bool)) {
    QToolBar_Connect_TopLevelChanged((QToolBar*)self, (intptr_t)callback);
}

void k_toolbar_visibility_changed(void* self, bool visible) {
    QToolBar_VisibilityChanged((QToolBar*)self, visible);
}

void k_toolbar_on_visibility_changed(void* self, void (*callback)(void*, bool)) {
    QToolBar_Connect_VisibilityChanged((QToolBar*)self, (intptr_t)callback);
}

uintptr_t k_toolbar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_toolbar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_toolbar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_toolbar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_toolbar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_toolbar_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_toolbar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_toolbar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_toolbar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_toolbar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_toolbar_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_toolbar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_toolbar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_toolbar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_toolbar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_toolbar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_toolbar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_toolbar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_toolbar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_toolbar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_toolbar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_toolbar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_toolbar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_toolbar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_toolbar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_toolbar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_toolbar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_toolbar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_toolbar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_toolbar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_toolbar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_toolbar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_toolbar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_toolbar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_toolbar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_toolbar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_toolbar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_toolbar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_toolbar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_toolbar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_toolbar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_toolbar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_toolbar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_toolbar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_toolbar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_toolbar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_toolbar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_toolbar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_toolbar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_toolbar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_toolbar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_toolbar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_toolbar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_toolbar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_toolbar_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_toolbar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_toolbar_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_toolbar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_toolbar_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_toolbar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_toolbar_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_toolbar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_toolbar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_toolbar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_toolbar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_toolbar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_toolbar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_toolbar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_toolbar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_toolbar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_toolbar_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_toolbar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_toolbar_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_toolbar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_toolbar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_toolbar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_toolbar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_toolbar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_toolbar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_toolbar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_toolbar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_toolbar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_toolbar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_toolbar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_toolbar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_toolbar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_toolbar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_toolbar_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_toolbar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_toolbar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_toolbar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_toolbar_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_toolbar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_toolbar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_toolbar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_toolbar_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_toolbar_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_toolbar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_toolbar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_toolbar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_toolbar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_toolbar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_toolbar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_toolbar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_toolbar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_toolbar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_toolbar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_toolbar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_toolbar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_toolbar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_toolbar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_toolbar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_toolbar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_toolbar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_toolbar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_toolbar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_toolbar_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_toolbar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_toolbar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_toolbar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_toolbar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_toolbar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_toolbar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_toolbar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_toolbar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_toolbar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_toolbar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_toolbar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_toolbar_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_toolbar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_toolbar_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_toolbar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_toolbar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_toolbar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_toolbar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_toolbar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_toolbar_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_toolbar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_toolbar_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_toolbar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_toolbar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_toolbar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_toolbar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_toolbar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_toolbar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_toolbar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_toolbar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_toolbar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_toolbar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_toolbar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_toolbar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_toolbar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_toolbar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_toolbar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_toolbar_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_toolbar_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_toolbar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_toolbar_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_toolbar_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_toolbar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_toolbar_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_toolbar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_toolbar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_toolbar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_toolbar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_toolbar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_toolbar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_toolbar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_toolbar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_toolbar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_toolbar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_toolbar_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_toolbar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_toolbar_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_toolbar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_toolbar_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_toolbar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_toolbar_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_toolbar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_toolbar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_toolbar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_toolbar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_toolbar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_toolbar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_toolbar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_toolbar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_toolbar_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_toolbar_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_toolbar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_toolbar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_toolbar_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_toolbar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_toolbar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_toolbar_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_toolbar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_toolbar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_toolbar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_toolbar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_toolbar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_toolbar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_toolbar_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_toolbar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_toolbar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_toolbar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_toolbar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_toolbar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_toolbar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_toolbar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_toolbar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_toolbar_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_toolbar_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_toolbar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_toolbar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_toolbar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_toolbar_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_toolbar_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_toolbar_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_toolbar_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_toolbar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_toolbar_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_toolbar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_toolbar_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_toolbar_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_toolbar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_toolbar_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_toolbar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_toolbar_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_toolbar_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_toolbar_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_toolbar_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_toolbar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_toolbar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_toolbar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_toolbar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_toolbar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_toolbar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_toolbar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_toolbar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_toolbar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_toolbar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_toolbar_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_toolbar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_toolbar_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_toolbar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_toolbar_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_toolbar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_toolbar_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_toolbar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_toolbar_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_toolbar_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_toolbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_toolbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_toolbar_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_toolbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_toolbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_toolbar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_toolbar_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_toolbar_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_toolbar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_toolbar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_toolbar_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_toolbar_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_toolbar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_toolbar_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_toolbar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_toolbar_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_toolbar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_toolbar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_toolbar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_toolbar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_toolbar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_toolbar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_toolbar_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_toolbar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_toolbar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_toolbar_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_toolbar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_toolbar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_toolbar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_toolbar_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_toolbar_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_toolbar_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_toolbar_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_toolbar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_toolbar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_toolbar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_toolbar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_toolbar_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_toolbar_dynamic_property_names");
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

QBindingStorage* k_toolbar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_toolbar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_toolbar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_toolbar_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_toolbar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_toolbar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_toolbar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_toolbar_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_toolbar_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_toolbar_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_toolbar_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_toolbar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_toolbar_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_toolbar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_toolbar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_toolbar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_toolbar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_toolbar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_toolbar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_toolbar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_toolbar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_toolbar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_toolbar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_toolbar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_toolbar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_toolbar_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_toolbar_change_event(void* self, void* event) {
    KToolBar_ChangeEvent((KToolBar*)self, (QEvent*)event);
}

void k_toolbar_qbase_change_event(void* self, void* event) {
    KToolBar_QBaseChangeEvent((KToolBar*)self, (QEvent*)event);
}

void k_toolbar_on_change_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnChangeEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_paint_event(void* self, void* event) {
    KToolBar_PaintEvent((KToolBar*)self, (QPaintEvent*)event);
}

void k_toolbar_qbase_paint_event(void* self, void* event) {
    KToolBar_QBasePaintEvent((KToolBar*)self, (QPaintEvent*)event);
}

void k_toolbar_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnPaintEvent((KToolBar*)self, (intptr_t)callback);
}

bool k_toolbar_event(void* self, void* event) {
    return KToolBar_Event((KToolBar*)self, (QEvent*)event);
}

bool k_toolbar_qbase_event(void* self, void* event) {
    return KToolBar_QBaseEvent((KToolBar*)self, (QEvent*)event);
}

void k_toolbar_on_event(void* self, bool (*callback)(void*, void*)) {
    KToolBar_OnEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_init_style_option(void* self, void* option) {
    KToolBar_InitStyleOption((KToolBar*)self, (QStyleOptionToolBar*)option);
}

void k_toolbar_qbase_init_style_option(void* self, void* option) {
    KToolBar_QBaseInitStyleOption((KToolBar*)self, (QStyleOptionToolBar*)option);
}

void k_toolbar_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnInitStyleOption((KToolBar*)self, (intptr_t)callback);
}

int32_t k_toolbar_dev_type(void* self) {
    return KToolBar_DevType((KToolBar*)self);
}

int32_t k_toolbar_qbase_dev_type(void* self) {
    return KToolBar_QBaseDevType((KToolBar*)self);
}

void k_toolbar_on_dev_type(void* self, int32_t (*callback)()) {
    KToolBar_OnDevType((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_set_visible(void* self, bool visible) {
    KToolBar_SetVisible((KToolBar*)self, visible);
}

void k_toolbar_qbase_set_visible(void* self, bool visible) {
    KToolBar_QBaseSetVisible((KToolBar*)self, visible);
}

void k_toolbar_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KToolBar_OnSetVisible((KToolBar*)self, (intptr_t)callback);
}

QSize* k_toolbar_size_hint(void* self) {
    return KToolBar_SizeHint((KToolBar*)self);
}

QSize* k_toolbar_qbase_size_hint(void* self) {
    return KToolBar_QBaseSizeHint((KToolBar*)self);
}

void k_toolbar_on_size_hint(void* self, QSize* (*callback)()) {
    KToolBar_OnSizeHint((KToolBar*)self, (intptr_t)callback);
}

QSize* k_toolbar_minimum_size_hint(void* self) {
    return KToolBar_MinimumSizeHint((KToolBar*)self);
}

QSize* k_toolbar_qbase_minimum_size_hint(void* self) {
    return KToolBar_QBaseMinimumSizeHint((KToolBar*)self);
}

void k_toolbar_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KToolBar_OnMinimumSizeHint((KToolBar*)self, (intptr_t)callback);
}

int32_t k_toolbar_height_for_width(void* self, int param1) {
    return KToolBar_HeightForWidth((KToolBar*)self, param1);
}

int32_t k_toolbar_qbase_height_for_width(void* self, int param1) {
    return KToolBar_QBaseHeightForWidth((KToolBar*)self, param1);
}

void k_toolbar_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KToolBar_OnHeightForWidth((KToolBar*)self, (intptr_t)callback);
}

bool k_toolbar_has_height_for_width(void* self) {
    return KToolBar_HasHeightForWidth((KToolBar*)self);
}

bool k_toolbar_qbase_has_height_for_width(void* self) {
    return KToolBar_QBaseHasHeightForWidth((KToolBar*)self);
}

void k_toolbar_on_has_height_for_width(void* self, bool (*callback)()) {
    KToolBar_OnHasHeightForWidth((KToolBar*)self, (intptr_t)callback);
}

QPaintEngine* k_toolbar_paint_engine(void* self) {
    return KToolBar_PaintEngine((KToolBar*)self);
}

QPaintEngine* k_toolbar_qbase_paint_engine(void* self) {
    return KToolBar_QBasePaintEngine((KToolBar*)self);
}

void k_toolbar_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KToolBar_OnPaintEngine((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_mouse_double_click_event(void* self, void* event) {
    KToolBar_MouseDoubleClickEvent((KToolBar*)self, (QMouseEvent*)event);
}

void k_toolbar_qbase_mouse_double_click_event(void* self, void* event) {
    KToolBar_QBaseMouseDoubleClickEvent((KToolBar*)self, (QMouseEvent*)event);
}

void k_toolbar_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnMouseDoubleClickEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_wheel_event(void* self, void* event) {
    KToolBar_WheelEvent((KToolBar*)self, (QWheelEvent*)event);
}

void k_toolbar_qbase_wheel_event(void* self, void* event) {
    KToolBar_QBaseWheelEvent((KToolBar*)self, (QWheelEvent*)event);
}

void k_toolbar_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnWheelEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_key_press_event(void* self, void* event) {
    KToolBar_KeyPressEvent((KToolBar*)self, (QKeyEvent*)event);
}

void k_toolbar_qbase_key_press_event(void* self, void* event) {
    KToolBar_QBaseKeyPressEvent((KToolBar*)self, (QKeyEvent*)event);
}

void k_toolbar_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnKeyPressEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_key_release_event(void* self, void* event) {
    KToolBar_KeyReleaseEvent((KToolBar*)self, (QKeyEvent*)event);
}

void k_toolbar_qbase_key_release_event(void* self, void* event) {
    KToolBar_QBaseKeyReleaseEvent((KToolBar*)self, (QKeyEvent*)event);
}

void k_toolbar_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnKeyReleaseEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_focus_in_event(void* self, void* event) {
    KToolBar_FocusInEvent((KToolBar*)self, (QFocusEvent*)event);
}

void k_toolbar_qbase_focus_in_event(void* self, void* event) {
    KToolBar_QBaseFocusInEvent((KToolBar*)self, (QFocusEvent*)event);
}

void k_toolbar_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnFocusInEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_focus_out_event(void* self, void* event) {
    KToolBar_FocusOutEvent((KToolBar*)self, (QFocusEvent*)event);
}

void k_toolbar_qbase_focus_out_event(void* self, void* event) {
    KToolBar_QBaseFocusOutEvent((KToolBar*)self, (QFocusEvent*)event);
}

void k_toolbar_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnFocusOutEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_enter_event(void* self, void* event) {
    KToolBar_EnterEvent((KToolBar*)self, (QEnterEvent*)event);
}

void k_toolbar_qbase_enter_event(void* self, void* event) {
    KToolBar_QBaseEnterEvent((KToolBar*)self, (QEnterEvent*)event);
}

void k_toolbar_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnEnterEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_leave_event(void* self, void* event) {
    KToolBar_LeaveEvent((KToolBar*)self, (QEvent*)event);
}

void k_toolbar_qbase_leave_event(void* self, void* event) {
    KToolBar_QBaseLeaveEvent((KToolBar*)self, (QEvent*)event);
}

void k_toolbar_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnLeaveEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_move_event(void* self, void* event) {
    KToolBar_MoveEvent((KToolBar*)self, (QMoveEvent*)event);
}

void k_toolbar_qbase_move_event(void* self, void* event) {
    KToolBar_QBaseMoveEvent((KToolBar*)self, (QMoveEvent*)event);
}

void k_toolbar_on_move_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnMoveEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_resize_event(void* self, void* event) {
    KToolBar_ResizeEvent((KToolBar*)self, (QResizeEvent*)event);
}

void k_toolbar_qbase_resize_event(void* self, void* event) {
    KToolBar_QBaseResizeEvent((KToolBar*)self, (QResizeEvent*)event);
}

void k_toolbar_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnResizeEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_close_event(void* self, void* event) {
    KToolBar_CloseEvent((KToolBar*)self, (QCloseEvent*)event);
}

void k_toolbar_qbase_close_event(void* self, void* event) {
    KToolBar_QBaseCloseEvent((KToolBar*)self, (QCloseEvent*)event);
}

void k_toolbar_on_close_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnCloseEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_tablet_event(void* self, void* event) {
    KToolBar_TabletEvent((KToolBar*)self, (QTabletEvent*)event);
}

void k_toolbar_qbase_tablet_event(void* self, void* event) {
    KToolBar_QBaseTabletEvent((KToolBar*)self, (QTabletEvent*)event);
}

void k_toolbar_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnTabletEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_show_event(void* self, void* event) {
    KToolBar_ShowEvent((KToolBar*)self, (QShowEvent*)event);
}

void k_toolbar_qbase_show_event(void* self, void* event) {
    KToolBar_QBaseShowEvent((KToolBar*)self, (QShowEvent*)event);
}

void k_toolbar_on_show_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnShowEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_hide_event(void* self, void* event) {
    KToolBar_HideEvent((KToolBar*)self, (QHideEvent*)event);
}

void k_toolbar_qbase_hide_event(void* self, void* event) {
    KToolBar_QBaseHideEvent((KToolBar*)self, (QHideEvent*)event);
}

void k_toolbar_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnHideEvent((KToolBar*)self, (intptr_t)callback);
}

bool k_toolbar_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KToolBar_NativeEvent((KToolBar*)self, qstring(eventType), message, result);
}

bool k_toolbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KToolBar_QBaseNativeEvent((KToolBar*)self, qstring(eventType), message, result);
}

void k_toolbar_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KToolBar_OnNativeEvent((KToolBar*)self, (intptr_t)callback);
}

int32_t k_toolbar_metric(void* self, int32_t param1) {
    return KToolBar_Metric((KToolBar*)self, param1);
}

int32_t k_toolbar_qbase_metric(void* self, int32_t param1) {
    return KToolBar_QBaseMetric((KToolBar*)self, param1);
}

void k_toolbar_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KToolBar_OnMetric((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_init_painter(void* self, void* painter) {
    KToolBar_InitPainter((KToolBar*)self, (QPainter*)painter);
}

void k_toolbar_qbase_init_painter(void* self, void* painter) {
    KToolBar_QBaseInitPainter((KToolBar*)self, (QPainter*)painter);
}

void k_toolbar_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnInitPainter((KToolBar*)self, (intptr_t)callback);
}

QPaintDevice* k_toolbar_redirected(void* self, void* offset) {
    return KToolBar_Redirected((KToolBar*)self, (QPoint*)offset);
}

QPaintDevice* k_toolbar_qbase_redirected(void* self, void* offset) {
    return KToolBar_QBaseRedirected((KToolBar*)self, (QPoint*)offset);
}

void k_toolbar_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KToolBar_OnRedirected((KToolBar*)self, (intptr_t)callback);
}

QPainter* k_toolbar_shared_painter(void* self) {
    return KToolBar_SharedPainter((KToolBar*)self);
}

QPainter* k_toolbar_qbase_shared_painter(void* self) {
    return KToolBar_QBaseSharedPainter((KToolBar*)self);
}

void k_toolbar_on_shared_painter(void* self, QPainter* (*callback)()) {
    KToolBar_OnSharedPainter((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_input_method_event(void* self, void* param1) {
    KToolBar_InputMethodEvent((KToolBar*)self, (QInputMethodEvent*)param1);
}

void k_toolbar_qbase_input_method_event(void* self, void* param1) {
    KToolBar_QBaseInputMethodEvent((KToolBar*)self, (QInputMethodEvent*)param1);
}

void k_toolbar_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnInputMethodEvent((KToolBar*)self, (intptr_t)callback);
}

QVariant* k_toolbar_input_method_query(void* self, int64_t param1) {
    return KToolBar_InputMethodQuery((KToolBar*)self, param1);
}

QVariant* k_toolbar_qbase_input_method_query(void* self, int64_t param1) {
    return KToolBar_QBaseInputMethodQuery((KToolBar*)self, param1);
}

void k_toolbar_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KToolBar_OnInputMethodQuery((KToolBar*)self, (intptr_t)callback);
}

bool k_toolbar_focus_next_prev_child(void* self, bool next) {
    return KToolBar_FocusNextPrevChild((KToolBar*)self, next);
}

bool k_toolbar_qbase_focus_next_prev_child(void* self, bool next) {
    return KToolBar_QBaseFocusNextPrevChild((KToolBar*)self, next);
}

void k_toolbar_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KToolBar_OnFocusNextPrevChild((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_timer_event(void* self, void* event) {
    KToolBar_TimerEvent((KToolBar*)self, (QTimerEvent*)event);
}

void k_toolbar_qbase_timer_event(void* self, void* event) {
    KToolBar_QBaseTimerEvent((KToolBar*)self, (QTimerEvent*)event);
}

void k_toolbar_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnTimerEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_child_event(void* self, void* event) {
    KToolBar_ChildEvent((KToolBar*)self, (QChildEvent*)event);
}

void k_toolbar_qbase_child_event(void* self, void* event) {
    KToolBar_QBaseChildEvent((KToolBar*)self, (QChildEvent*)event);
}

void k_toolbar_on_child_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnChildEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_custom_event(void* self, void* event) {
    KToolBar_CustomEvent((KToolBar*)self, (QEvent*)event);
}

void k_toolbar_qbase_custom_event(void* self, void* event) {
    KToolBar_QBaseCustomEvent((KToolBar*)self, (QEvent*)event);
}

void k_toolbar_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnCustomEvent((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_connect_notify(void* self, void* signal) {
    KToolBar_ConnectNotify((KToolBar*)self, (QMetaMethod*)signal);
}

void k_toolbar_qbase_connect_notify(void* self, void* signal) {
    KToolBar_QBaseConnectNotify((KToolBar*)self, (QMetaMethod*)signal);
}

void k_toolbar_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnConnectNotify((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_disconnect_notify(void* self, void* signal) {
    KToolBar_DisconnectNotify((KToolBar*)self, (QMetaMethod*)signal);
}

void k_toolbar_qbase_disconnect_notify(void* self, void* signal) {
    KToolBar_QBaseDisconnectNotify((KToolBar*)self, (QMetaMethod*)signal);
}

void k_toolbar_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KToolBar_OnDisconnectNotify((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_update_micro_focus(void* self) {
    KToolBar_UpdateMicroFocus((KToolBar*)self);
}

void k_toolbar_qbase_update_micro_focus(void* self) {
    KToolBar_QBaseUpdateMicroFocus((KToolBar*)self);
}

void k_toolbar_on_update_micro_focus(void* self, void (*callback)()) {
    KToolBar_OnUpdateMicroFocus((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_create(void* self) {
    KToolBar_Create((KToolBar*)self);
}

void k_toolbar_qbase_create(void* self) {
    KToolBar_QBaseCreate((KToolBar*)self);
}

void k_toolbar_on_create(void* self, void (*callback)()) {
    KToolBar_OnCreate((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_destroy(void* self) {
    KToolBar_Destroy((KToolBar*)self);
}

void k_toolbar_qbase_destroy(void* self) {
    KToolBar_QBaseDestroy((KToolBar*)self);
}

void k_toolbar_on_destroy(void* self, void (*callback)()) {
    KToolBar_OnDestroy((KToolBar*)self, (intptr_t)callback);
}

bool k_toolbar_focus_next_child(void* self) {
    return KToolBar_FocusNextChild((KToolBar*)self);
}

bool k_toolbar_qbase_focus_next_child(void* self) {
    return KToolBar_QBaseFocusNextChild((KToolBar*)self);
}

void k_toolbar_on_focus_next_child(void* self, bool (*callback)()) {
    KToolBar_OnFocusNextChild((KToolBar*)self, (intptr_t)callback);
}

bool k_toolbar_focus_previous_child(void* self) {
    return KToolBar_FocusPreviousChild((KToolBar*)self);
}

bool k_toolbar_qbase_focus_previous_child(void* self) {
    return KToolBar_QBaseFocusPreviousChild((KToolBar*)self);
}

void k_toolbar_on_focus_previous_child(void* self, bool (*callback)()) {
    KToolBar_OnFocusPreviousChild((KToolBar*)self, (intptr_t)callback);
}

QObject* k_toolbar_sender(void* self) {
    return KToolBar_Sender((KToolBar*)self);
}

QObject* k_toolbar_qbase_sender(void* self) {
    return KToolBar_QBaseSender((KToolBar*)self);
}

void k_toolbar_on_sender(void* self, QObject* (*callback)()) {
    KToolBar_OnSender((KToolBar*)self, (intptr_t)callback);
}

int32_t k_toolbar_sender_signal_index(void* self) {
    return KToolBar_SenderSignalIndex((KToolBar*)self);
}

int32_t k_toolbar_qbase_sender_signal_index(void* self) {
    return KToolBar_QBaseSenderSignalIndex((KToolBar*)self);
}

void k_toolbar_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KToolBar_OnSenderSignalIndex((KToolBar*)self, (intptr_t)callback);
}

int32_t k_toolbar_receivers(void* self, const char* signal) {
    return KToolBar_Receivers((KToolBar*)self, signal);
}

int32_t k_toolbar_qbase_receivers(void* self, const char* signal) {
    return KToolBar_QBaseReceivers((KToolBar*)self, signal);
}

void k_toolbar_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KToolBar_OnReceivers((KToolBar*)self, (intptr_t)callback);
}

bool k_toolbar_is_signal_connected(void* self, void* signal) {
    return KToolBar_IsSignalConnected((KToolBar*)self, (QMetaMethod*)signal);
}

bool k_toolbar_qbase_is_signal_connected(void* self, void* signal) {
    return KToolBar_QBaseIsSignalConnected((KToolBar*)self, (QMetaMethod*)signal);
}

void k_toolbar_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KToolBar_OnIsSignalConnected((KToolBar*)self, (intptr_t)callback);
}

double k_toolbar_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KToolBar_GetDecodedMetricF((KToolBar*)self, metricA, metricB);
}

double k_toolbar_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KToolBar_QBaseGetDecodedMetricF((KToolBar*)self, metricA, metricB);
}

void k_toolbar_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KToolBar_OnGetDecodedMetricF((KToolBar*)self, (intptr_t)callback);
}

void k_toolbar_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_toolbar_delete(void* self) {
    KToolBar_Delete((KToolBar*)(self));
}

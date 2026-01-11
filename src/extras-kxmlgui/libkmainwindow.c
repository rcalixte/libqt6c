#include "../extras-kconfig/libkconfig.hpp"
#include "../extras-kconfig/libkconfiggroup.hpp"
#include "libktoolbar.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmainwindow.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkmainwindow.hpp"
#include "libkmainwindow.h"

KMainWindow* k_mainwindow_new(void* parent) {
    return KMainWindow_new((QWidget*)parent);
}

KMainWindow* k_mainwindow_new2() {
    return KMainWindow_new2();
}

KMainWindow* k_mainwindow_new3(void* parent, int64_t flags) {
    return KMainWindow_new3((QWidget*)parent, flags);
}

const QMetaObject* k_mainwindow_meta_object(void* self) {
    return KMainWindow_MetaObject((KMainWindow*)self);
}

void* k_mainwindow_metacast(void* self, const char* param1) {
    return KMainWindow_Metacast((KMainWindow*)self, param1);
}

int32_t k_mainwindow_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KMainWindow_Metacall((KMainWindow*)self, param1, param2, param3);
}

void k_mainwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KMainWindow_OnMetacall((KMainWindow*)self, (intptr_t)callback);
}

int32_t k_mainwindow_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KMainWindow_QBaseMetacall((KMainWindow*)self, param1, param2, param3);
}

const char* k_mainwindow_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_mainwindow_can_be_restored(int numberOfInstances) {
    return KMainWindow_CanBeRestored(numberOfInstances);
}

const char* k_mainwindow_class_name_of_toplevel(int instanceNumber) {
    libqt_string _str = KMainWindow_ClassNameOfToplevel(instanceNumber);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_mainwindow_restore(void* self, int numberOfInstances) {
    return KMainWindow_Restore((KMainWindow*)self, numberOfInstances);
}

bool k_mainwindow_has_menu_bar(void* self) {
    return KMainWindow_HasMenuBar((KMainWindow*)self);
}

libqt_list /* of KMainWindow* */ k_mainwindow_member_list() {
    libqt_list _arr = KMainWindow_MemberList();
    return _arr;
}

KToolBar* k_mainwindow_tool_bar(void* self) {
    return KMainWindow_ToolBar((KMainWindow*)self);
}

libqt_list /* of KToolBar* */ k_mainwindow_tool_bars(void* self) {
    libqt_list _arr = KMainWindow_ToolBars((KMainWindow*)self);
    return _arr;
}

void k_mainwindow_set_auto_save_settings(void* self) {
    KMainWindow_SetAutoSaveSettings((KMainWindow*)self);
}

void k_mainwindow_set_auto_save_settings2(void* self, void* group) {
    KMainWindow_SetAutoSaveSettings2((KMainWindow*)self, (KConfigGroup*)group);
}

void k_mainwindow_reset_auto_save_settings(void* self) {
    KMainWindow_ResetAutoSaveSettings((KMainWindow*)self);
}

bool k_mainwindow_auto_save_settings(void* self) {
    return KMainWindow_AutoSaveSettings((KMainWindow*)self);
}

const char* k_mainwindow_auto_save_group(void* self) {
    libqt_string _str = KMainWindow_AutoSaveGroup((KMainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KConfigGroup* k_mainwindow_auto_save_config_group(void* self) {
    return KMainWindow_AutoSaveConfigGroup((KMainWindow*)self);
}

void k_mainwindow_set_state_config_group(void* self, const char* configGroup) {
    KMainWindow_SetStateConfigGroup((KMainWindow*)self, qstring(configGroup));
}

KConfigGroup* k_mainwindow_state_config_group(void* self) {
    return KMainWindow_StateConfigGroup((KMainWindow*)self);
}

void k_mainwindow_apply_main_window_settings(void* self, void* config) {
    KMainWindow_ApplyMainWindowSettings((KMainWindow*)self, (KConfigGroup*)config);
}

void k_mainwindow_on_apply_main_window_settings(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnApplyMainWindowSettings((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_qbase_apply_main_window_settings(void* self, void* config) {
    KMainWindow_QBaseApplyMainWindowSettings((KMainWindow*)self, (KConfigGroup*)config);
}

void k_mainwindow_save_main_window_settings(void* self, void* config) {
    KMainWindow_SaveMainWindowSettings((KMainWindow*)self, (KConfigGroup*)config);
}

const char* k_mainwindow_dbus_name(void* self) {
    libqt_string _str = KMainWindow_DbusName((KMainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mainwindow_set_caption(void* self, const char* caption) {
    KMainWindow_SetCaption((KMainWindow*)self, qstring(caption));
}

void k_mainwindow_on_set_caption(void* self, void (*callback)(void*, const char*)) {
    KMainWindow_OnSetCaption((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_qbase_set_caption(void* self, const char* caption) {
    KMainWindow_QBaseSetCaption((KMainWindow*)self, qstring(caption));
}

void k_mainwindow_set_caption2(void* self, const char* caption, bool modified) {
    KMainWindow_SetCaption2((KMainWindow*)self, qstring(caption), modified);
}

void k_mainwindow_on_set_caption2(void* self, void (*callback)(void*, const char*, bool)) {
    KMainWindow_OnSetCaption2((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_qbase_set_caption2(void* self, const char* caption, bool modified) {
    KMainWindow_QBaseSetCaption2((KMainWindow*)self, qstring(caption), modified);
}

void k_mainwindow_set_plain_caption(void* self, const char* caption) {
    KMainWindow_SetPlainCaption((KMainWindow*)self, qstring(caption));
}

void k_mainwindow_on_set_plain_caption(void* self, void (*callback)(void*, const char*)) {
    KMainWindow_OnSetPlainCaption((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_qbase_set_plain_caption(void* self, const char* caption) {
    KMainWindow_QBaseSetPlainCaption((KMainWindow*)self, qstring(caption));
}

void k_mainwindow_app_help_activated(void* self) {
    KMainWindow_AppHelpActivated((KMainWindow*)self);
}

void k_mainwindow_set_settings_dirty(void* self) {
    KMainWindow_SetSettingsDirty((KMainWindow*)self);
}

bool k_mainwindow_event(void* self, void* event) {
    return KMainWindow_Event((KMainWindow*)self, (QEvent*)event);
}

void k_mainwindow_on_event(void* self, bool (*callback)(void*, void*)) {
    KMainWindow_OnEvent((KMainWindow*)self, (intptr_t)callback);
}

bool k_mainwindow_qbase_event(void* self, void* event) {
    return KMainWindow_QBaseEvent((KMainWindow*)self, (QEvent*)event);
}

void k_mainwindow_key_press_event(void* self, void* keyEvent) {
    KMainWindow_KeyPressEvent((KMainWindow*)self, (QKeyEvent*)keyEvent);
}

void k_mainwindow_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnKeyPressEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_qbase_key_press_event(void* self, void* keyEvent) {
    KMainWindow_QBaseKeyPressEvent((KMainWindow*)self, (QKeyEvent*)keyEvent);
}

void k_mainwindow_close_event(void* self, void* param1) {
    KMainWindow_CloseEvent((KMainWindow*)self, (QCloseEvent*)param1);
}

void k_mainwindow_on_close_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnCloseEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_qbase_close_event(void* self, void* param1) {
    KMainWindow_QBaseCloseEvent((KMainWindow*)self, (QCloseEvent*)param1);
}

bool k_mainwindow_query_close(void* self) {
    return KMainWindow_QueryClose((KMainWindow*)self);
}

void k_mainwindow_on_query_close(void* self, bool (*callback)()) {
    KMainWindow_OnQueryClose((KMainWindow*)self, (intptr_t)callback);
}

bool k_mainwindow_qbase_query_close(void* self) {
    return KMainWindow_QBaseQueryClose((KMainWindow*)self);
}

void k_mainwindow_save_properties(void* self, void* param1) {
    KMainWindow_SaveProperties((KMainWindow*)self, (KConfigGroup*)param1);
}

void k_mainwindow_on_save_properties(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnSaveProperties((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_qbase_save_properties(void* self, void* param1) {
    KMainWindow_QBaseSaveProperties((KMainWindow*)self, (KConfigGroup*)param1);
}

void k_mainwindow_read_properties(void* self, void* param1) {
    KMainWindow_ReadProperties((KMainWindow*)self, (KConfigGroup*)param1);
}

void k_mainwindow_on_read_properties(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnReadProperties((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_qbase_read_properties(void* self, void* param1) {
    KMainWindow_QBaseReadProperties((KMainWindow*)self, (KConfigGroup*)param1);
}

void k_mainwindow_save_global_properties(void* self, void* sessionConfig) {
    KMainWindow_SaveGlobalProperties((KMainWindow*)self, (KConfig*)sessionConfig);
}

void k_mainwindow_on_save_global_properties(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnSaveGlobalProperties((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_qbase_save_global_properties(void* self, void* sessionConfig) {
    KMainWindow_QBaseSaveGlobalProperties((KMainWindow*)self, (KConfig*)sessionConfig);
}

void k_mainwindow_read_global_properties(void* self, void* sessionConfig) {
    KMainWindow_ReadGlobalProperties((KMainWindow*)self, (KConfig*)sessionConfig);
}

void k_mainwindow_on_read_global_properties(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnReadGlobalProperties((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_qbase_read_global_properties(void* self, void* sessionConfig) {
    KMainWindow_QBaseReadGlobalProperties((KMainWindow*)self, (KConfig*)sessionConfig);
}

void k_mainwindow_save_properties_internal(void* self, void* param1, int param2) {
    KMainWindow_SavePropertiesInternal((KMainWindow*)self, (KConfig*)param1, param2);
}

void k_mainwindow_on_save_properties_internal(void* self, void (*callback)(void*, void*, int)) {
    KMainWindow_OnSavePropertiesInternal((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_qbase_save_properties_internal(void* self, void* param1, int param2) {
    KMainWindow_QBaseSavePropertiesInternal((KMainWindow*)self, (KConfig*)param1, param2);
}

bool k_mainwindow_read_properties_internal(void* self, void* param1, int param2) {
    return KMainWindow_ReadPropertiesInternal((KMainWindow*)self, (KConfig*)param1, param2);
}

void k_mainwindow_on_read_properties_internal(void* self, bool (*callback)(void*, void*, int)) {
    KMainWindow_OnReadPropertiesInternal((KMainWindow*)self, (intptr_t)callback);
}

bool k_mainwindow_qbase_read_properties_internal(void* self, void* param1, int param2) {
    return KMainWindow_QBaseReadPropertiesInternal((KMainWindow*)self, (KConfig*)param1, param2);
}

bool k_mainwindow_settings_dirty(void* self) {
    return KMainWindow_SettingsDirty((KMainWindow*)self);
}

void k_mainwindow_on_settings_dirty(void* self, bool (*callback)()) {
    KMainWindow_OnSettingsDirty((KMainWindow*)self, (intptr_t)callback);
}

bool k_mainwindow_qbase_settings_dirty(void* self) {
    return KMainWindow_QBaseSettingsDirty((KMainWindow*)self);
}

void k_mainwindow_save_auto_save_settings(void* self) {
    KMainWindow_SaveAutoSaveSettings((KMainWindow*)self);
}

void k_mainwindow_on_save_auto_save_settings(void* self, void (*callback)()) {
    KMainWindow_OnSaveAutoSaveSettings((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_qbase_save_auto_save_settings(void* self) {
    KMainWindow_QBaseSaveAutoSaveSettings((KMainWindow*)self);
}

const char* k_mainwindow_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_mainwindow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_mainwindow_restore2(void* self, int numberOfInstances, bool show) {
    return KMainWindow_Restore2((KMainWindow*)self, numberOfInstances, show);
}

KToolBar* k_mainwindow_tool_bar1(void* self, const char* name) {
    return KMainWindow_ToolBar1((KMainWindow*)self, qstring(name));
}

void k_mainwindow_set_auto_save_settings1(void* self, const char* groupName) {
    KMainWindow_SetAutoSaveSettings1((KMainWindow*)self, qstring(groupName));
}

void k_mainwindow_set_auto_save_settings22(void* self, const char* groupName, bool saveWindowSize) {
    KMainWindow_SetAutoSaveSettings22((KMainWindow*)self, qstring(groupName), saveWindowSize);
}

void k_mainwindow_set_auto_save_settings23(void* self, void* group, bool saveWindowSize) {
    KMainWindow_SetAutoSaveSettings23((KMainWindow*)self, (KConfigGroup*)group, saveWindowSize);
}

QSize* k_mainwindow_icon_size(void* self) {
    return QMainWindow_IconSize((QMainWindow*)self);
}

void k_mainwindow_set_icon_size(void* self, void* iconSize) {
    QMainWindow_SetIconSize((QMainWindow*)self, (QSize*)iconSize);
}

int32_t k_mainwindow_tool_button_style(void* self) {
    return QMainWindow_ToolButtonStyle((QMainWindow*)self);
}

void k_mainwindow_set_tool_button_style(void* self, int32_t toolButtonStyle) {
    QMainWindow_SetToolButtonStyle((QMainWindow*)self, toolButtonStyle);
}

bool k_mainwindow_is_animated(void* self) {
    return QMainWindow_IsAnimated((QMainWindow*)self);
}

bool k_mainwindow_is_dock_nesting_enabled(void* self) {
    return QMainWindow_IsDockNestingEnabled((QMainWindow*)self);
}

bool k_mainwindow_document_mode(void* self) {
    return QMainWindow_DocumentMode((QMainWindow*)self);
}

void k_mainwindow_set_document_mode(void* self, bool enabled) {
    QMainWindow_SetDocumentMode((QMainWindow*)self, enabled);
}

int32_t k_mainwindow_tab_shape(void* self) {
    return QMainWindow_TabShape((QMainWindow*)self);
}

void k_mainwindow_set_tab_shape(void* self, int32_t tabShape) {
    QMainWindow_SetTabShape((QMainWindow*)self, tabShape);
}

int32_t k_mainwindow_tab_position(void* self, int32_t area) {
    return QMainWindow_TabPosition((QMainWindow*)self, area);
}

void k_mainwindow_set_tab_position(void* self, int32_t areas, int32_t tabPosition) {
    QMainWindow_SetTabPosition((QMainWindow*)self, areas, tabPosition);
}

void k_mainwindow_set_dock_options(void* self, int32_t options) {
    QMainWindow_SetDockOptions((QMainWindow*)self, options);
}

int32_t k_mainwindow_dock_options(void* self) {
    return QMainWindow_DockOptions((QMainWindow*)self);
}

bool k_mainwindow_is_separator(void* self, void* pos) {
    return QMainWindow_IsSeparator((QMainWindow*)self, (QPoint*)pos);
}

QMenuBar* k_mainwindow_menu_bar(void* self) {
    return QMainWindow_MenuBar((QMainWindow*)self);
}

void k_mainwindow_set_menu_bar(void* self, void* menubar) {
    QMainWindow_SetMenuBar((QMainWindow*)self, (QMenuBar*)menubar);
}

QWidget* k_mainwindow_menu_widget(void* self) {
    return QMainWindow_MenuWidget((QMainWindow*)self);
}

void k_mainwindow_set_menu_widget(void* self, void* menubar) {
    QMainWindow_SetMenuWidget((QMainWindow*)self, (QWidget*)menubar);
}

QStatusBar* k_mainwindow_status_bar(void* self) {
    return QMainWindow_StatusBar((QMainWindow*)self);
}

void k_mainwindow_set_status_bar(void* self, void* statusbar) {
    QMainWindow_SetStatusBar((QMainWindow*)self, (QStatusBar*)statusbar);
}

QWidget* k_mainwindow_central_widget(void* self) {
    return QMainWindow_CentralWidget((QMainWindow*)self);
}

void k_mainwindow_set_central_widget(void* self, void* widget) {
    QMainWindow_SetCentralWidget((QMainWindow*)self, (QWidget*)widget);
}

QWidget* k_mainwindow_take_central_widget(void* self) {
    return QMainWindow_TakeCentralWidget((QMainWindow*)self);
}

void k_mainwindow_set_corner(void* self, int32_t corner, int32_t area) {
    QMainWindow_SetCorner((QMainWindow*)self, corner, area);
}

int32_t k_mainwindow_corner(void* self, int32_t corner) {
    return QMainWindow_Corner((QMainWindow*)self, corner);
}

void k_mainwindow_add_tool_bar_break(void* self) {
    QMainWindow_AddToolBarBreak((QMainWindow*)self);
}

void k_mainwindow_insert_tool_bar_break(void* self, void* before) {
    QMainWindow_InsertToolBarBreak((QMainWindow*)self, (QToolBar*)before);
}

void k_mainwindow_add_tool_bar(void* self, int32_t area, void* toolbar) {
    QMainWindow_AddToolBar((QMainWindow*)self, area, (QToolBar*)toolbar);
}

void k_mainwindow_add_tool_bar2(void* self, void* toolbar) {
    QMainWindow_AddToolBar2((QMainWindow*)self, (QToolBar*)toolbar);
}

QToolBar* k_mainwindow_add_tool_bar3(void* self, const char* title) {
    return QMainWindow_AddToolBar3((QMainWindow*)self, qstring(title));
}

void k_mainwindow_insert_tool_bar(void* self, void* before, void* toolbar) {
    QMainWindow_InsertToolBar((QMainWindow*)self, (QToolBar*)before, (QToolBar*)toolbar);
}

void k_mainwindow_remove_tool_bar(void* self, void* toolbar) {
    QMainWindow_RemoveToolBar((QMainWindow*)self, (QToolBar*)toolbar);
}

void k_mainwindow_remove_tool_bar_break(void* self, void* before) {
    QMainWindow_RemoveToolBarBreak((QMainWindow*)self, (QToolBar*)before);
}

bool k_mainwindow_unified_title_and_tool_bar_on_mac(void* self) {
    return QMainWindow_UnifiedTitleAndToolBarOnMac((QMainWindow*)self);
}

int32_t k_mainwindow_tool_bar_area(void* self, void* toolbar) {
    return QMainWindow_ToolBarArea((QMainWindow*)self, (QToolBar*)toolbar);
}

bool k_mainwindow_tool_bar_break(void* self, void* toolbar) {
    return QMainWindow_ToolBarBreak((QMainWindow*)self, (QToolBar*)toolbar);
}

void k_mainwindow_add_dock_widget(void* self, int32_t area, void* dockwidget) {
    QMainWindow_AddDockWidget((QMainWindow*)self, area, (QDockWidget*)dockwidget);
}

void k_mainwindow_add_dock_widget2(void* self, int32_t area, void* dockwidget, int32_t orientation) {
    QMainWindow_AddDockWidget2((QMainWindow*)self, area, (QDockWidget*)dockwidget, orientation);
}

void k_mainwindow_split_dock_widget(void* self, void* after, void* dockwidget, int32_t orientation) {
    QMainWindow_SplitDockWidget((QMainWindow*)self, (QDockWidget*)after, (QDockWidget*)dockwidget, orientation);
}

void k_mainwindow_tabify_dock_widget(void* self, void* first, void* second) {
    QMainWindow_TabifyDockWidget((QMainWindow*)self, (QDockWidget*)first, (QDockWidget*)second);
}

libqt_list /* of QDockWidget* */ k_mainwindow_tabified_dock_widgets(void* self, void* dockwidget) {
    libqt_list _arr = QMainWindow_TabifiedDockWidgets((QMainWindow*)self, (QDockWidget*)dockwidget);
    return _arr;
}

void k_mainwindow_remove_dock_widget(void* self, void* dockwidget) {
    QMainWindow_RemoveDockWidget((QMainWindow*)self, (QDockWidget*)dockwidget);
}

bool k_mainwindow_restore_dock_widget(void* self, void* dockwidget) {
    return QMainWindow_RestoreDockWidget((QMainWindow*)self, (QDockWidget*)dockwidget);
}

int32_t k_mainwindow_dock_widget_area(void* self, void* dockwidget) {
    return QMainWindow_DockWidgetArea((QMainWindow*)self, (QDockWidget*)dockwidget);
}

void k_mainwindow_resize_docks(void* self, libqt_list docks, libqt_list sizes, int32_t orientation) {
    QMainWindow_ResizeDocks((QMainWindow*)self, docks, sizes, orientation);
}

char* k_mainwindow_save_state(void* self) {
    libqt_string _str = QMainWindow_SaveState((QMainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_mainwindow_restore_state(void* self, const char* state) {
    return QMainWindow_RestoreState((QMainWindow*)self, qstring(state));
}

void k_mainwindow_set_animated(void* self, bool enabled) {
    QMainWindow_SetAnimated((QMainWindow*)self, enabled);
}

void k_mainwindow_set_dock_nesting_enabled(void* self, bool enabled) {
    QMainWindow_SetDockNestingEnabled((QMainWindow*)self, enabled);
}

void k_mainwindow_set_unified_title_and_tool_bar_on_mac(void* self, bool set) {
    QMainWindow_SetUnifiedTitleAndToolBarOnMac((QMainWindow*)self, set);
}

void k_mainwindow_icon_size_changed(void* self, void* iconSize) {
    QMainWindow_IconSizeChanged((QMainWindow*)self, (QSize*)iconSize);
}

void k_mainwindow_on_icon_size_changed(void* self, void (*callback)(void*, void*)) {
    QMainWindow_Connect_IconSizeChanged((QMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_tool_button_style_changed(void* self, int32_t toolButtonStyle) {
    QMainWindow_ToolButtonStyleChanged((QMainWindow*)self, toolButtonStyle);
}

void k_mainwindow_on_tool_button_style_changed(void* self, void (*callback)(void*, int32_t)) {
    QMainWindow_Connect_ToolButtonStyleChanged((QMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_tabified_dock_widget_activated(void* self, void* dockWidget) {
    QMainWindow_TabifiedDockWidgetActivated((QMainWindow*)self, (QDockWidget*)dockWidget);
}

void k_mainwindow_on_tabified_dock_widget_activated(void* self, void (*callback)(void*, void*)) {
    QMainWindow_Connect_TabifiedDockWidgetActivated((QMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_add_tool_bar_break1(void* self, int32_t area) {
    QMainWindow_AddToolBarBreak1((QMainWindow*)self, area);
}

char* k_mainwindow_save_state1(void* self, int version) {
    libqt_string _str = QMainWindow_SaveState1((QMainWindow*)self, version);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_mainwindow_restore_state2(void* self, const char* state, int version) {
    return QMainWindow_RestoreState2((QMainWindow*)self, qstring(state), version);
}

uintptr_t k_mainwindow_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_mainwindow_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_mainwindow_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_mainwindow_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_mainwindow_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_mainwindow_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_mainwindow_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_mainwindow_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_mainwindow_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_mainwindow_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_mainwindow_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_mainwindow_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_mainwindow_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_mainwindow_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_mainwindow_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_mainwindow_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_mainwindow_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_mainwindow_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_mainwindow_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_mainwindow_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_mainwindow_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_mainwindow_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_mainwindow_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_mainwindow_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_mainwindow_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_mainwindow_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_mainwindow_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_mainwindow_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_mainwindow_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_mainwindow_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_mainwindow_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_mainwindow_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_mainwindow_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_mainwindow_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_mainwindow_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_mainwindow_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_mainwindow_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_mainwindow_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_mainwindow_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_mainwindow_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_mainwindow_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_mainwindow_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_mainwindow_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_mainwindow_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_mainwindow_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_mainwindow_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_mainwindow_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_mainwindow_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_mainwindow_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_mainwindow_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_mainwindow_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_mainwindow_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_mainwindow_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_mainwindow_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_mainwindow_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_mainwindow_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_mainwindow_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_mainwindow_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_mainwindow_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_mainwindow_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_mainwindow_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_mainwindow_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_mainwindow_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_mainwindow_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_mainwindow_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_mainwindow_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_mainwindow_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_mainwindow_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_mainwindow_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_mainwindow_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_mainwindow_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_mainwindow_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_mainwindow_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_mainwindow_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_mainwindow_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_mainwindow_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_mainwindow_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_mainwindow_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_mainwindow_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_mainwindow_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_mainwindow_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_mainwindow_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_mainwindow_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_mainwindow_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_mainwindow_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_mainwindow_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_mainwindow_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_mainwindow_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_mainwindow_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_mainwindow_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_mainwindow_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_mainwindow_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_mainwindow_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_mainwindow_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_mainwindow_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_mainwindow_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_mainwindow_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_mainwindow_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_mainwindow_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_mainwindow_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_mainwindow_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mainwindow_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_mainwindow_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_mainwindow_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_mainwindow_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mainwindow_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_mainwindow_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mainwindow_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_mainwindow_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mainwindow_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_mainwindow_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_mainwindow_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_mainwindow_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_mainwindow_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mainwindow_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_mainwindow_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_mainwindow_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_mainwindow_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mainwindow_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_mainwindow_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_mainwindow_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mainwindow_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_mainwindow_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mainwindow_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_mainwindow_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_mainwindow_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_mainwindow_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_mainwindow_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_mainwindow_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_mainwindow_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_mainwindow_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_mainwindow_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_mainwindow_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_mainwindow_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_mainwindow_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_mainwindow_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_mainwindow_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_mainwindow_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_mainwindow_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_mainwindow_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_mainwindow_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_mainwindow_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_mainwindow_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_mainwindow_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_mainwindow_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_mainwindow_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_mainwindow_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_mainwindow_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_mainwindow_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_mainwindow_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_mainwindow_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_mainwindow_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_mainwindow_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_mainwindow_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_mainwindow_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_mainwindow_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_mainwindow_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_mainwindow_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_mainwindow_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_mainwindow_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_mainwindow_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_mainwindow_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_mainwindow_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_mainwindow_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_mainwindow_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_mainwindow_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_mainwindow_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_mainwindow_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_mainwindow_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_mainwindow_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_mainwindow_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_mainwindow_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_mainwindow_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_mainwindow_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_mainwindow_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_mainwindow_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_mainwindow_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_mainwindow_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_mainwindow_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_mainwindow_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_mainwindow_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_mainwindow_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_mainwindow_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_mainwindow_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_mainwindow_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_mainwindow_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_mainwindow_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_mainwindow_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_mainwindow_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_mainwindow_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_mainwindow_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_mainwindow_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_mainwindow_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_mainwindow_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_mainwindow_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_mainwindow_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_mainwindow_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_mainwindow_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_mainwindow_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_mainwindow_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_mainwindow_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_mainwindow_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_mainwindow_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_mainwindow_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_mainwindow_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_mainwindow_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_mainwindow_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_mainwindow_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_mainwindow_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_mainwindow_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_mainwindow_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_mainwindow_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_mainwindow_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_mainwindow_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_mainwindow_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_mainwindow_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_mainwindow_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_mainwindow_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_mainwindow_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_mainwindow_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_mainwindow_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_mainwindow_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_mainwindow_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_mainwindow_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_mainwindow_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_mainwindow_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_mainwindow_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_mainwindow_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_mainwindow_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_mainwindow_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_mainwindow_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_mainwindow_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_mainwindow_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_mainwindow_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_mainwindow_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_mainwindow_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_mainwindow_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_mainwindow_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_mainwindow_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_mainwindow_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_mainwindow_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_mainwindow_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_mainwindow_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_mainwindow_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_mainwindow_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_mainwindow_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_mainwindow_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_mainwindow_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_mainwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_mainwindow_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_mainwindow_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_mainwindow_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_mainwindow_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_mainwindow_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_mainwindow_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_mainwindow_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_mainwindow_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_mainwindow_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_mainwindow_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_mainwindow_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_mainwindow_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_mainwindow_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_mainwindow_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_mainwindow_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_mainwindow_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_mainwindow_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_mainwindow_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_mainwindow_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_mainwindow_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_mainwindow_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_mainwindow_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_mainwindow_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_mainwindow_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mainwindow_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_mainwindow_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_mainwindow_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_mainwindow_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_mainwindow_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_mainwindow_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_mainwindow_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_mainwindow_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_mainwindow_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_mainwindow_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_mainwindow_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_mainwindow_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_mainwindow_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_mainwindow_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_mainwindow_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_mainwindow_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_mainwindow_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_mainwindow_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_mainwindow_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_mainwindow_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_mainwindow_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_mainwindow_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_mainwindow_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_mainwindow_dynamic_property_names");
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

QBindingStorage* k_mainwindow_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_mainwindow_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_mainwindow_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_mainwindow_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_mainwindow_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_mainwindow_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_mainwindow_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_mainwindow_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_mainwindow_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_mainwindow_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_mainwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_mainwindow_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_mainwindow_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_mainwindow_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_mainwindow_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_mainwindow_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_mainwindow_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_mainwindow_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_mainwindow_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_mainwindow_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_mainwindow_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_mainwindow_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_mainwindow_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_mainwindow_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_mainwindow_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_mainwindow_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QMenu* k_mainwindow_create_popup_menu(void* self) {
    return KMainWindow_CreatePopupMenu((KMainWindow*)self);
}

QMenu* k_mainwindow_qbase_create_popup_menu(void* self) {
    return KMainWindow_QBaseCreatePopupMenu((KMainWindow*)self);
}

void k_mainwindow_on_create_popup_menu(void* self, QMenu* (*callback)()) {
    KMainWindow_OnCreatePopupMenu((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_context_menu_event(void* self, void* event) {
    KMainWindow_ContextMenuEvent((KMainWindow*)self, (QContextMenuEvent*)event);
}

void k_mainwindow_qbase_context_menu_event(void* self, void* event) {
    KMainWindow_QBaseContextMenuEvent((KMainWindow*)self, (QContextMenuEvent*)event);
}

void k_mainwindow_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnContextMenuEvent((KMainWindow*)self, (intptr_t)callback);
}

int32_t k_mainwindow_dev_type(void* self) {
    return KMainWindow_DevType((KMainWindow*)self);
}

int32_t k_mainwindow_qbase_dev_type(void* self) {
    return KMainWindow_QBaseDevType((KMainWindow*)self);
}

void k_mainwindow_on_dev_type(void* self, int32_t (*callback)()) {
    KMainWindow_OnDevType((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_set_visible(void* self, bool visible) {
    KMainWindow_SetVisible((KMainWindow*)self, visible);
}

void k_mainwindow_qbase_set_visible(void* self, bool visible) {
    KMainWindow_QBaseSetVisible((KMainWindow*)self, visible);
}

void k_mainwindow_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KMainWindow_OnSetVisible((KMainWindow*)self, (intptr_t)callback);
}

QSize* k_mainwindow_size_hint(void* self) {
    return KMainWindow_SizeHint((KMainWindow*)self);
}

QSize* k_mainwindow_qbase_size_hint(void* self) {
    return KMainWindow_QBaseSizeHint((KMainWindow*)self);
}

void k_mainwindow_on_size_hint(void* self, QSize* (*callback)()) {
    KMainWindow_OnSizeHint((KMainWindow*)self, (intptr_t)callback);
}

QSize* k_mainwindow_minimum_size_hint(void* self) {
    return KMainWindow_MinimumSizeHint((KMainWindow*)self);
}

QSize* k_mainwindow_qbase_minimum_size_hint(void* self) {
    return KMainWindow_QBaseMinimumSizeHint((KMainWindow*)self);
}

void k_mainwindow_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KMainWindow_OnMinimumSizeHint((KMainWindow*)self, (intptr_t)callback);
}

int32_t k_mainwindow_height_for_width(void* self, int param1) {
    return KMainWindow_HeightForWidth((KMainWindow*)self, param1);
}

int32_t k_mainwindow_qbase_height_for_width(void* self, int param1) {
    return KMainWindow_QBaseHeightForWidth((KMainWindow*)self, param1);
}

void k_mainwindow_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KMainWindow_OnHeightForWidth((KMainWindow*)self, (intptr_t)callback);
}

bool k_mainwindow_has_height_for_width(void* self) {
    return KMainWindow_HasHeightForWidth((KMainWindow*)self);
}

bool k_mainwindow_qbase_has_height_for_width(void* self) {
    return KMainWindow_QBaseHasHeightForWidth((KMainWindow*)self);
}

void k_mainwindow_on_has_height_for_width(void* self, bool (*callback)()) {
    KMainWindow_OnHasHeightForWidth((KMainWindow*)self, (intptr_t)callback);
}

QPaintEngine* k_mainwindow_paint_engine(void* self) {
    return KMainWindow_PaintEngine((KMainWindow*)self);
}

QPaintEngine* k_mainwindow_qbase_paint_engine(void* self) {
    return KMainWindow_QBasePaintEngine((KMainWindow*)self);
}

void k_mainwindow_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KMainWindow_OnPaintEngine((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_mouse_press_event(void* self, void* event) {
    KMainWindow_MousePressEvent((KMainWindow*)self, (QMouseEvent*)event);
}

void k_mainwindow_qbase_mouse_press_event(void* self, void* event) {
    KMainWindow_QBaseMousePressEvent((KMainWindow*)self, (QMouseEvent*)event);
}

void k_mainwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnMousePressEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_mouse_release_event(void* self, void* event) {
    KMainWindow_MouseReleaseEvent((KMainWindow*)self, (QMouseEvent*)event);
}

void k_mainwindow_qbase_mouse_release_event(void* self, void* event) {
    KMainWindow_QBaseMouseReleaseEvent((KMainWindow*)self, (QMouseEvent*)event);
}

void k_mainwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnMouseReleaseEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_mouse_double_click_event(void* self, void* event) {
    KMainWindow_MouseDoubleClickEvent((KMainWindow*)self, (QMouseEvent*)event);
}

void k_mainwindow_qbase_mouse_double_click_event(void* self, void* event) {
    KMainWindow_QBaseMouseDoubleClickEvent((KMainWindow*)self, (QMouseEvent*)event);
}

void k_mainwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnMouseDoubleClickEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_mouse_move_event(void* self, void* event) {
    KMainWindow_MouseMoveEvent((KMainWindow*)self, (QMouseEvent*)event);
}

void k_mainwindow_qbase_mouse_move_event(void* self, void* event) {
    KMainWindow_QBaseMouseMoveEvent((KMainWindow*)self, (QMouseEvent*)event);
}

void k_mainwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnMouseMoveEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_wheel_event(void* self, void* event) {
    KMainWindow_WheelEvent((KMainWindow*)self, (QWheelEvent*)event);
}

void k_mainwindow_qbase_wheel_event(void* self, void* event) {
    KMainWindow_QBaseWheelEvent((KMainWindow*)self, (QWheelEvent*)event);
}

void k_mainwindow_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnWheelEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_key_release_event(void* self, void* event) {
    KMainWindow_KeyReleaseEvent((KMainWindow*)self, (QKeyEvent*)event);
}

void k_mainwindow_qbase_key_release_event(void* self, void* event) {
    KMainWindow_QBaseKeyReleaseEvent((KMainWindow*)self, (QKeyEvent*)event);
}

void k_mainwindow_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnKeyReleaseEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_focus_in_event(void* self, void* event) {
    KMainWindow_FocusInEvent((KMainWindow*)self, (QFocusEvent*)event);
}

void k_mainwindow_qbase_focus_in_event(void* self, void* event) {
    KMainWindow_QBaseFocusInEvent((KMainWindow*)self, (QFocusEvent*)event);
}

void k_mainwindow_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnFocusInEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_focus_out_event(void* self, void* event) {
    KMainWindow_FocusOutEvent((KMainWindow*)self, (QFocusEvent*)event);
}

void k_mainwindow_qbase_focus_out_event(void* self, void* event) {
    KMainWindow_QBaseFocusOutEvent((KMainWindow*)self, (QFocusEvent*)event);
}

void k_mainwindow_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnFocusOutEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_enter_event(void* self, void* event) {
    KMainWindow_EnterEvent((KMainWindow*)self, (QEnterEvent*)event);
}

void k_mainwindow_qbase_enter_event(void* self, void* event) {
    KMainWindow_QBaseEnterEvent((KMainWindow*)self, (QEnterEvent*)event);
}

void k_mainwindow_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnEnterEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_leave_event(void* self, void* event) {
    KMainWindow_LeaveEvent((KMainWindow*)self, (QEvent*)event);
}

void k_mainwindow_qbase_leave_event(void* self, void* event) {
    KMainWindow_QBaseLeaveEvent((KMainWindow*)self, (QEvent*)event);
}

void k_mainwindow_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnLeaveEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_paint_event(void* self, void* event) {
    KMainWindow_PaintEvent((KMainWindow*)self, (QPaintEvent*)event);
}

void k_mainwindow_qbase_paint_event(void* self, void* event) {
    KMainWindow_QBasePaintEvent((KMainWindow*)self, (QPaintEvent*)event);
}

void k_mainwindow_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnPaintEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_move_event(void* self, void* event) {
    KMainWindow_MoveEvent((KMainWindow*)self, (QMoveEvent*)event);
}

void k_mainwindow_qbase_move_event(void* self, void* event) {
    KMainWindow_QBaseMoveEvent((KMainWindow*)self, (QMoveEvent*)event);
}

void k_mainwindow_on_move_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnMoveEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_resize_event(void* self, void* event) {
    KMainWindow_ResizeEvent((KMainWindow*)self, (QResizeEvent*)event);
}

void k_mainwindow_qbase_resize_event(void* self, void* event) {
    KMainWindow_QBaseResizeEvent((KMainWindow*)self, (QResizeEvent*)event);
}

void k_mainwindow_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnResizeEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_tablet_event(void* self, void* event) {
    KMainWindow_TabletEvent((KMainWindow*)self, (QTabletEvent*)event);
}

void k_mainwindow_qbase_tablet_event(void* self, void* event) {
    KMainWindow_QBaseTabletEvent((KMainWindow*)self, (QTabletEvent*)event);
}

void k_mainwindow_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnTabletEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_action_event(void* self, void* event) {
    KMainWindow_ActionEvent((KMainWindow*)self, (QActionEvent*)event);
}

void k_mainwindow_qbase_action_event(void* self, void* event) {
    KMainWindow_QBaseActionEvent((KMainWindow*)self, (QActionEvent*)event);
}

void k_mainwindow_on_action_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnActionEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_drag_enter_event(void* self, void* event) {
    KMainWindow_DragEnterEvent((KMainWindow*)self, (QDragEnterEvent*)event);
}

void k_mainwindow_qbase_drag_enter_event(void* self, void* event) {
    KMainWindow_QBaseDragEnterEvent((KMainWindow*)self, (QDragEnterEvent*)event);
}

void k_mainwindow_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnDragEnterEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_drag_move_event(void* self, void* event) {
    KMainWindow_DragMoveEvent((KMainWindow*)self, (QDragMoveEvent*)event);
}

void k_mainwindow_qbase_drag_move_event(void* self, void* event) {
    KMainWindow_QBaseDragMoveEvent((KMainWindow*)self, (QDragMoveEvent*)event);
}

void k_mainwindow_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnDragMoveEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_drag_leave_event(void* self, void* event) {
    KMainWindow_DragLeaveEvent((KMainWindow*)self, (QDragLeaveEvent*)event);
}

void k_mainwindow_qbase_drag_leave_event(void* self, void* event) {
    KMainWindow_QBaseDragLeaveEvent((KMainWindow*)self, (QDragLeaveEvent*)event);
}

void k_mainwindow_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnDragLeaveEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_drop_event(void* self, void* event) {
    KMainWindow_DropEvent((KMainWindow*)self, (QDropEvent*)event);
}

void k_mainwindow_qbase_drop_event(void* self, void* event) {
    KMainWindow_QBaseDropEvent((KMainWindow*)self, (QDropEvent*)event);
}

void k_mainwindow_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnDropEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_show_event(void* self, void* event) {
    KMainWindow_ShowEvent((KMainWindow*)self, (QShowEvent*)event);
}

void k_mainwindow_qbase_show_event(void* self, void* event) {
    KMainWindow_QBaseShowEvent((KMainWindow*)self, (QShowEvent*)event);
}

void k_mainwindow_on_show_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnShowEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_hide_event(void* self, void* event) {
    KMainWindow_HideEvent((KMainWindow*)self, (QHideEvent*)event);
}

void k_mainwindow_qbase_hide_event(void* self, void* event) {
    KMainWindow_QBaseHideEvent((KMainWindow*)self, (QHideEvent*)event);
}

void k_mainwindow_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnHideEvent((KMainWindow*)self, (intptr_t)callback);
}

bool k_mainwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KMainWindow_NativeEvent((KMainWindow*)self, qstring(eventType), message, result);
}

bool k_mainwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KMainWindow_QBaseNativeEvent((KMainWindow*)self, qstring(eventType), message, result);
}

void k_mainwindow_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KMainWindow_OnNativeEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_change_event(void* self, void* param1) {
    KMainWindow_ChangeEvent((KMainWindow*)self, (QEvent*)param1);
}

void k_mainwindow_qbase_change_event(void* self, void* param1) {
    KMainWindow_QBaseChangeEvent((KMainWindow*)self, (QEvent*)param1);
}

void k_mainwindow_on_change_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnChangeEvent((KMainWindow*)self, (intptr_t)callback);
}

int32_t k_mainwindow_metric(void* self, int32_t param1) {
    return KMainWindow_Metric((KMainWindow*)self, param1);
}

int32_t k_mainwindow_qbase_metric(void* self, int32_t param1) {
    return KMainWindow_QBaseMetric((KMainWindow*)self, param1);
}

void k_mainwindow_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KMainWindow_OnMetric((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_init_painter(void* self, void* painter) {
    KMainWindow_InitPainter((KMainWindow*)self, (QPainter*)painter);
}

void k_mainwindow_qbase_init_painter(void* self, void* painter) {
    KMainWindow_QBaseInitPainter((KMainWindow*)self, (QPainter*)painter);
}

void k_mainwindow_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnInitPainter((KMainWindow*)self, (intptr_t)callback);
}

QPaintDevice* k_mainwindow_redirected(void* self, void* offset) {
    return KMainWindow_Redirected((KMainWindow*)self, (QPoint*)offset);
}

QPaintDevice* k_mainwindow_qbase_redirected(void* self, void* offset) {
    return KMainWindow_QBaseRedirected((KMainWindow*)self, (QPoint*)offset);
}

void k_mainwindow_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KMainWindow_OnRedirected((KMainWindow*)self, (intptr_t)callback);
}

QPainter* k_mainwindow_shared_painter(void* self) {
    return KMainWindow_SharedPainter((KMainWindow*)self);
}

QPainter* k_mainwindow_qbase_shared_painter(void* self) {
    return KMainWindow_QBaseSharedPainter((KMainWindow*)self);
}

void k_mainwindow_on_shared_painter(void* self, QPainter* (*callback)()) {
    KMainWindow_OnSharedPainter((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_input_method_event(void* self, void* param1) {
    KMainWindow_InputMethodEvent((KMainWindow*)self, (QInputMethodEvent*)param1);
}

void k_mainwindow_qbase_input_method_event(void* self, void* param1) {
    KMainWindow_QBaseInputMethodEvent((KMainWindow*)self, (QInputMethodEvent*)param1);
}

void k_mainwindow_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnInputMethodEvent((KMainWindow*)self, (intptr_t)callback);
}

QVariant* k_mainwindow_input_method_query(void* self, int64_t param1) {
    return KMainWindow_InputMethodQuery((KMainWindow*)self, param1);
}

QVariant* k_mainwindow_qbase_input_method_query(void* self, int64_t param1) {
    return KMainWindow_QBaseInputMethodQuery((KMainWindow*)self, param1);
}

void k_mainwindow_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KMainWindow_OnInputMethodQuery((KMainWindow*)self, (intptr_t)callback);
}

bool k_mainwindow_focus_next_prev_child(void* self, bool next) {
    return KMainWindow_FocusNextPrevChild((KMainWindow*)self, next);
}

bool k_mainwindow_qbase_focus_next_prev_child(void* self, bool next) {
    return KMainWindow_QBaseFocusNextPrevChild((KMainWindow*)self, next);
}

void k_mainwindow_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KMainWindow_OnFocusNextPrevChild((KMainWindow*)self, (intptr_t)callback);
}

bool k_mainwindow_event_filter(void* self, void* watched, void* event) {
    return KMainWindow_EventFilter((KMainWindow*)self, (QObject*)watched, (QEvent*)event);
}

bool k_mainwindow_qbase_event_filter(void* self, void* watched, void* event) {
    return KMainWindow_QBaseEventFilter((KMainWindow*)self, (QObject*)watched, (QEvent*)event);
}

void k_mainwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KMainWindow_OnEventFilter((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_timer_event(void* self, void* event) {
    KMainWindow_TimerEvent((KMainWindow*)self, (QTimerEvent*)event);
}

void k_mainwindow_qbase_timer_event(void* self, void* event) {
    KMainWindow_QBaseTimerEvent((KMainWindow*)self, (QTimerEvent*)event);
}

void k_mainwindow_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnTimerEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_child_event(void* self, void* event) {
    KMainWindow_ChildEvent((KMainWindow*)self, (QChildEvent*)event);
}

void k_mainwindow_qbase_child_event(void* self, void* event) {
    KMainWindow_QBaseChildEvent((KMainWindow*)self, (QChildEvent*)event);
}

void k_mainwindow_on_child_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnChildEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_custom_event(void* self, void* event) {
    KMainWindow_CustomEvent((KMainWindow*)self, (QEvent*)event);
}

void k_mainwindow_qbase_custom_event(void* self, void* event) {
    KMainWindow_QBaseCustomEvent((KMainWindow*)self, (QEvent*)event);
}

void k_mainwindow_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnCustomEvent((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_connect_notify(void* self, void* signal) {
    KMainWindow_ConnectNotify((KMainWindow*)self, (QMetaMethod*)signal);
}

void k_mainwindow_qbase_connect_notify(void* self, void* signal) {
    KMainWindow_QBaseConnectNotify((KMainWindow*)self, (QMetaMethod*)signal);
}

void k_mainwindow_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnConnectNotify((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_disconnect_notify(void* self, void* signal) {
    KMainWindow_DisconnectNotify((KMainWindow*)self, (QMetaMethod*)signal);
}

void k_mainwindow_qbase_disconnect_notify(void* self, void* signal) {
    KMainWindow_QBaseDisconnectNotify((KMainWindow*)self, (QMetaMethod*)signal);
}

void k_mainwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KMainWindow_OnDisconnectNotify((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_update_micro_focus(void* self) {
    KMainWindow_UpdateMicroFocus((KMainWindow*)self);
}

void k_mainwindow_qbase_update_micro_focus(void* self) {
    KMainWindow_QBaseUpdateMicroFocus((KMainWindow*)self);
}

void k_mainwindow_on_update_micro_focus(void* self, void (*callback)()) {
    KMainWindow_OnUpdateMicroFocus((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_create(void* self) {
    KMainWindow_Create((KMainWindow*)self);
}

void k_mainwindow_qbase_create(void* self) {
    KMainWindow_QBaseCreate((KMainWindow*)self);
}

void k_mainwindow_on_create(void* self, void (*callback)()) {
    KMainWindow_OnCreate((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_destroy(void* self) {
    KMainWindow_Destroy((KMainWindow*)self);
}

void k_mainwindow_qbase_destroy(void* self) {
    KMainWindow_QBaseDestroy((KMainWindow*)self);
}

void k_mainwindow_on_destroy(void* self, void (*callback)()) {
    KMainWindow_OnDestroy((KMainWindow*)self, (intptr_t)callback);
}

bool k_mainwindow_focus_next_child(void* self) {
    return KMainWindow_FocusNextChild((KMainWindow*)self);
}

bool k_mainwindow_qbase_focus_next_child(void* self) {
    return KMainWindow_QBaseFocusNextChild((KMainWindow*)self);
}

void k_mainwindow_on_focus_next_child(void* self, bool (*callback)()) {
    KMainWindow_OnFocusNextChild((KMainWindow*)self, (intptr_t)callback);
}

bool k_mainwindow_focus_previous_child(void* self) {
    return KMainWindow_FocusPreviousChild((KMainWindow*)self);
}

bool k_mainwindow_qbase_focus_previous_child(void* self) {
    return KMainWindow_QBaseFocusPreviousChild((KMainWindow*)self);
}

void k_mainwindow_on_focus_previous_child(void* self, bool (*callback)()) {
    KMainWindow_OnFocusPreviousChild((KMainWindow*)self, (intptr_t)callback);
}

QObject* k_mainwindow_sender(void* self) {
    return KMainWindow_Sender((KMainWindow*)self);
}

QObject* k_mainwindow_qbase_sender(void* self) {
    return KMainWindow_QBaseSender((KMainWindow*)self);
}

void k_mainwindow_on_sender(void* self, QObject* (*callback)()) {
    KMainWindow_OnSender((KMainWindow*)self, (intptr_t)callback);
}

int32_t k_mainwindow_sender_signal_index(void* self) {
    return KMainWindow_SenderSignalIndex((KMainWindow*)self);
}

int32_t k_mainwindow_qbase_sender_signal_index(void* self) {
    return KMainWindow_QBaseSenderSignalIndex((KMainWindow*)self);
}

void k_mainwindow_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KMainWindow_OnSenderSignalIndex((KMainWindow*)self, (intptr_t)callback);
}

int32_t k_mainwindow_receivers(void* self, const char* signal) {
    return KMainWindow_Receivers((KMainWindow*)self, signal);
}

int32_t k_mainwindow_qbase_receivers(void* self, const char* signal) {
    return KMainWindow_QBaseReceivers((KMainWindow*)self, signal);
}

void k_mainwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KMainWindow_OnReceivers((KMainWindow*)self, (intptr_t)callback);
}

bool k_mainwindow_is_signal_connected(void* self, void* signal) {
    return KMainWindow_IsSignalConnected((KMainWindow*)self, (QMetaMethod*)signal);
}

bool k_mainwindow_qbase_is_signal_connected(void* self, void* signal) {
    return KMainWindow_QBaseIsSignalConnected((KMainWindow*)self, (QMetaMethod*)signal);
}

void k_mainwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KMainWindow_OnIsSignalConnected((KMainWindow*)self, (intptr_t)callback);
}

double k_mainwindow_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KMainWindow_GetDecodedMetricF((KMainWindow*)self, metricA, metricB);
}

double k_mainwindow_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KMainWindow_QBaseGetDecodedMetricF((KMainWindow*)self, metricA, metricB);
}

void k_mainwindow_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KMainWindow_OnGetDecodedMetricF((KMainWindow*)self, (intptr_t)callback);
}

void k_mainwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_mainwindow_delete(void* self) {
    KMainWindow_Delete((KMainWindow*)(self));
}

#include "../extras-kxmlgui/libkactioncollection.hpp"
#include "../extras-kconfig/libkconfig.hpp"
#include "../extras-kconfig/libkconfiggroup.hpp"
#include "../extras-kxmlgui/libkmainwindow.hpp"
#include "libpart.hpp"
#include "libpartbase.hpp"
#include "../extras-kxmlgui/libkxmlguibuilder.hpp"
#include "../extras-kxmlgui/libkxmlguiclient.hpp"
#include "../extras-kxmlgui/libkxmlguifactory.hpp"
#include "../extras-kxmlgui/libkxmlguiwindow.hpp"
#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../xml/libqdom.hpp"
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
#include "libmainwindow.hpp"
#include "libmainwindow.h"

KParts__MainWindow* k_parts__mainwindow_new(void* parent) {
    return KParts__MainWindow_new((QWidget*)parent);
}

KParts__MainWindow* k_parts__mainwindow_new2() {
    return KParts__MainWindow_new2();
}

KParts__MainWindow* k_parts__mainwindow_new3(void* parent, int32_t f) {
    return KParts__MainWindow_new3((QWidget*)parent, f);
}

const QMetaObject* k_parts__mainwindow_meta_object(void* self) {
    return KParts__MainWindow_MetaObject((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KParts__MainWindow_OnMetaObject((KParts__MainWindow*)self, (intptr_t)callback);
}

const QMetaObject* k_parts__mainwindow_qbase_meta_object(void* self) {
    return KParts__MainWindow_QBaseMetaObject((KParts__MainWindow*)self);
}

void* k_parts__mainwindow_metacast(void* self, const char* param1) {
    return KParts__MainWindow_Metacast((KParts__MainWindow*)self, param1);
}

void k_parts__mainwindow_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KParts__MainWindow_OnMetacast((KParts__MainWindow*)self, (intptr_t)callback);
}

void* k_parts__mainwindow_qbase_metacast(void* self, const char* param1) {
    return KParts__MainWindow_QBaseMetacast((KParts__MainWindow*)self, param1);
}

int32_t k_parts__mainwindow_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__MainWindow_Metacall((KParts__MainWindow*)self, param1, param2, param3);
}

void k_parts__mainwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KParts__MainWindow_OnMetacall((KParts__MainWindow*)self, (intptr_t)callback);
}

int32_t k_parts__mainwindow_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__MainWindow_QBaseMetacall((KParts__MainWindow*)self, param1, param2, param3);
}

const char* k_parts__mainwindow_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_configure_toolbars(void* self) {
    KParts__MainWindow_ConfigureToolbars((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_configure_toolbars(void* self, void (*callback)()) {
    KParts__MainWindow_OnConfigureToolbars((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_qbase_configure_toolbars(void* self) {
    KParts__MainWindow_QBaseConfigureToolbars((KParts__MainWindow*)self);
}

void k_parts__mainwindow_create_g_u_i(void* self, void* part) {
    KParts__MainWindow_CreateGUI((KParts__MainWindow*)self, (KParts__Part*)part);
}

void k_parts__mainwindow_on_create_g_u_i(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnCreateGUI((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_qbase_create_g_u_i(void* self, void* part) {
    KParts__MainWindow_QBaseCreateGUI((KParts__MainWindow*)self, (KParts__Part*)part);
}

void k_parts__mainwindow_set_window_title_handling(void* self, bool enabled) {
    KParts__MainWindow_SetWindowTitleHandling((KParts__MainWindow*)self, enabled);
}

void k_parts__mainwindow_on_set_window_title_handling(void* self, void (*callback)(void*, bool)) {
    KParts__MainWindow_OnSetWindowTitleHandling((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_qbase_set_window_title_handling(void* self, bool enabled) {
    KParts__MainWindow_QBaseSetWindowTitleHandling((KParts__MainWindow*)self, enabled);
}

void k_parts__mainwindow_slot_set_status_bar_text(void* self, const char* param1) {
    KParts__MainWindow_SlotSetStatusBarText((KParts__MainWindow*)self, qstring(param1));
}

void k_parts__mainwindow_on_slot_set_status_bar_text(void* self, void (*callback)(void*, const char*)) {
    KParts__MainWindow_OnSlotSetStatusBarText((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_qbase_slot_set_status_bar_text(void* self, const char* param1) {
    KParts__MainWindow_QBaseSlotSetStatusBarText((KParts__MainWindow*)self, qstring(param1));
}

void k_parts__mainwindow_save_new_toolbar_config(void* self) {
    KParts__MainWindow_SaveNewToolbarConfig((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_save_new_toolbar_config(void* self, void (*callback)()) {
    KParts__MainWindow_OnSaveNewToolbarConfig((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_qbase_save_new_toolbar_config(void* self) {
    KParts__MainWindow_QBaseSaveNewToolbarConfig((KParts__MainWindow*)self);
}

void k_parts__mainwindow_create_shell_g_u_i(void* self, bool create) {
    KParts__MainWindow_CreateShellGUI((KParts__MainWindow*)self, create);
}

void k_parts__mainwindow_on_create_shell_g_u_i(void* self, void (*callback)(void*, bool)) {
    KParts__MainWindow_OnCreateShellGUI((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_qbase_create_shell_g_u_i(void* self, bool create) {
    KParts__MainWindow_QBaseCreateShellGUI((KParts__MainWindow*)self, create);
}

const char* k_parts__mainwindow_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__mainwindow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_set_help_menu_enabled(void* self) {
    KXmlGuiWindow_SetHelpMenuEnabled((KXmlGuiWindow*)self);
}

bool k_parts__mainwindow_is_help_menu_enabled(void* self) {
    return KXmlGuiWindow_IsHelpMenuEnabled((KXmlGuiWindow*)self);
}

void k_parts__mainwindow_set_standard_tool_bar_menu_enabled(void* self, bool showToolBarMenu) {
    KXmlGuiWindow_SetStandardToolBarMenuEnabled((KXmlGuiWindow*)self, showToolBarMenu);
}

bool k_parts__mainwindow_is_standard_tool_bar_menu_enabled(void* self) {
    return KXmlGuiWindow_IsStandardToolBarMenuEnabled((KXmlGuiWindow*)self);
}

void k_parts__mainwindow_create_standard_status_bar_action(void* self) {
    KXmlGuiWindow_CreateStandardStatusBarAction((KXmlGuiWindow*)self);
}

void k_parts__mainwindow_setup_g_u_i(void* self) {
    KXmlGuiWindow_SetupGUI((KXmlGuiWindow*)self);
}

void k_parts__mainwindow_setup_g_u_i2(void* self, void* defaultSize) {
    KXmlGuiWindow_SetupGUI2((KXmlGuiWindow*)self, (QSize*)defaultSize);
}

QAction* k_parts__mainwindow_tool_bar_menu_action(void* self) {
    return KXmlGuiWindow_ToolBarMenuAction((KXmlGuiWindow*)self);
}

void k_parts__mainwindow_setup_toolbar_menu_actions(void* self) {
    KXmlGuiWindow_SetupToolbarMenuActions((KXmlGuiWindow*)self);
}

const char** k_parts__mainwindow_tool_bar_names(void* self) {
    libqt_list _arr = KXmlGuiWindow_ToolBarNames((KXmlGuiWindow*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__mainwindow_tool_bar_names\n");
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

void k_parts__mainwindow_set_command_bar_enabled(void* self, bool showCommandBar) {
    KXmlGuiWindow_SetCommandBarEnabled((KXmlGuiWindow*)self, showCommandBar);
}

bool k_parts__mainwindow_is_command_bar_enabled(void* self) {
    return KXmlGuiWindow_IsCommandBarEnabled((KXmlGuiWindow*)self);
}

void k_parts__mainwindow_slot_state_changed2(void* self, const char* newstate, bool reverse) {
    KXmlGuiWindow_SlotStateChanged2((KXmlGuiWindow*)self, qstring(newstate), reverse);
}

bool k_parts__mainwindow_is_tool_bar_visible(void* self, const char* name) {
    return KXmlGuiWindow_IsToolBarVisible((KXmlGuiWindow*)self, qstring(name));
}

void k_parts__mainwindow_set_tool_bar_visible(void* self, const char* name, bool visible) {
    KXmlGuiWindow_SetToolBarVisible((KXmlGuiWindow*)self, qstring(name), visible);
}

void k_parts__mainwindow_set_help_menu_enabled1(void* self, bool showHelpMenu) {
    KXmlGuiWindow_SetHelpMenuEnabled1((KXmlGuiWindow*)self, showHelpMenu);
}

void k_parts__mainwindow_create_g_u_i1(void* self, const char* xmlfile) {
    KXmlGuiWindow_CreateGUI1((KXmlGuiWindow*)self, qstring(xmlfile));
}

void k_parts__mainwindow_setup_g_u_i1(void* self, int32_t options) {
    KXmlGuiWindow_SetupGUI1((KXmlGuiWindow*)self, options);
}

void k_parts__mainwindow_setup_g_u_i22(void* self, int32_t options, const char* xmlfile) {
    KXmlGuiWindow_SetupGUI22((KXmlGuiWindow*)self, options, qstring(xmlfile));
}

void k_parts__mainwindow_setup_g_u_i23(void* self, void* defaultSize, int32_t options) {
    KXmlGuiWindow_SetupGUI23((KXmlGuiWindow*)self, (QSize*)defaultSize, options);
}

void k_parts__mainwindow_setup_g_u_i3(void* self, void* defaultSize, int32_t options, const char* xmlfile) {
    KXmlGuiWindow_SetupGUI3((KXmlGuiWindow*)self, (QSize*)defaultSize, options, qstring(xmlfile));
}

bool k_parts__mainwindow_can_be_restored(int numberOfInstances) {
    return KMainWindow_CanBeRestored(numberOfInstances);
}

const char* k_parts__mainwindow_class_name_of_toplevel(int instanceNumber) {
    libqt_string _str = KMainWindow_ClassNameOfToplevel(instanceNumber);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_parts__mainwindow_restore(void* self, int numberOfInstances) {
    return KMainWindow_Restore((KMainWindow*)self, numberOfInstances);
}

bool k_parts__mainwindow_has_menu_bar(void* self) {
    return KMainWindow_HasMenuBar((KMainWindow*)self);
}

libqt_list /* of KMainWindow* */ k_parts__mainwindow_member_list() {
    libqt_list _arr = KMainWindow_MemberList();
    return _arr;
}

KToolBar* k_parts__mainwindow_tool_bar(void* self) {
    return KMainWindow_ToolBar((KMainWindow*)self);
}

libqt_list /* of KToolBar* */ k_parts__mainwindow_tool_bars(void* self) {
    libqt_list _arr = KMainWindow_ToolBars((KMainWindow*)self);
    return _arr;
}

void k_parts__mainwindow_set_auto_save_settings(void* self) {
    KMainWindow_SetAutoSaveSettings((KMainWindow*)self);
}

void k_parts__mainwindow_set_auto_save_settings2(void* self, void* group) {
    KMainWindow_SetAutoSaveSettings2((KMainWindow*)self, (KConfigGroup*)group);
}

void k_parts__mainwindow_reset_auto_save_settings(void* self) {
    KMainWindow_ResetAutoSaveSettings((KMainWindow*)self);
}

bool k_parts__mainwindow_auto_save_settings(void* self) {
    return KMainWindow_AutoSaveSettings((KMainWindow*)self);
}

const char* k_parts__mainwindow_auto_save_group(void* self) {
    libqt_string _str = KMainWindow_AutoSaveGroup((KMainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KConfigGroup* k_parts__mainwindow_auto_save_config_group(void* self) {
    return KMainWindow_AutoSaveConfigGroup((KMainWindow*)self);
}

void k_parts__mainwindow_set_state_config_group(void* self, const char* configGroup) {
    KMainWindow_SetStateConfigGroup((KMainWindow*)self, qstring(configGroup));
}

KConfigGroup* k_parts__mainwindow_state_config_group(void* self) {
    return KMainWindow_StateConfigGroup((KMainWindow*)self);
}

void k_parts__mainwindow_save_main_window_settings(void* self, void* config) {
    KMainWindow_SaveMainWindowSettings((KMainWindow*)self, (KConfigGroup*)config);
}

const char* k_parts__mainwindow_dbus_name(void* self) {
    libqt_string _str = KMainWindow_DbusName((KMainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_set_caption2(void* self, const char* caption, bool modified) {
    KMainWindow_SetCaption2((KMainWindow*)self, qstring(caption), modified);
}

void k_parts__mainwindow_on_set_caption2(void* self, void (*callback)(void*, const char*, bool)) {
    KMainWindow_OnSetCaption2((KMainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_qbase_set_caption2(void* self, const char* caption, bool modified) {
    KMainWindow_QBaseSetCaption2((KMainWindow*)self, qstring(caption), modified);
}

void k_parts__mainwindow_app_help_activated(void* self) {
    KMainWindow_AppHelpActivated((KMainWindow*)self);
}

void k_parts__mainwindow_set_settings_dirty(void* self) {
    KMainWindow_SetSettingsDirty((KMainWindow*)self);
}

bool k_parts__mainwindow_restore2(void* self, int numberOfInstances, bool show) {
    return KMainWindow_Restore2((KMainWindow*)self, numberOfInstances, show);
}

KToolBar* k_parts__mainwindow_tool_bar1(void* self, const char* name) {
    return KMainWindow_ToolBar1((KMainWindow*)self, qstring(name));
}

void k_parts__mainwindow_set_auto_save_settings1(void* self, const char* groupName) {
    KMainWindow_SetAutoSaveSettings1((KMainWindow*)self, qstring(groupName));
}

void k_parts__mainwindow_set_auto_save_settings22(void* self, const char* groupName, bool saveWindowSize) {
    KMainWindow_SetAutoSaveSettings22((KMainWindow*)self, qstring(groupName), saveWindowSize);
}

void k_parts__mainwindow_set_auto_save_settings23(void* self, void* group, bool saveWindowSize) {
    KMainWindow_SetAutoSaveSettings23((KMainWindow*)self, (KConfigGroup*)group, saveWindowSize);
}

QSize* k_parts__mainwindow_icon_size(void* self) {
    return QMainWindow_IconSize((QMainWindow*)self);
}

void k_parts__mainwindow_set_icon_size(void* self, void* iconSize) {
    QMainWindow_SetIconSize((QMainWindow*)self, (QSize*)iconSize);
}

int32_t k_parts__mainwindow_tool_button_style(void* self) {
    return QMainWindow_ToolButtonStyle((QMainWindow*)self);
}

void k_parts__mainwindow_set_tool_button_style(void* self, int32_t toolButtonStyle) {
    QMainWindow_SetToolButtonStyle((QMainWindow*)self, toolButtonStyle);
}

bool k_parts__mainwindow_is_animated(void* self) {
    return QMainWindow_IsAnimated((QMainWindow*)self);
}

bool k_parts__mainwindow_is_dock_nesting_enabled(void* self) {
    return QMainWindow_IsDockNestingEnabled((QMainWindow*)self);
}

bool k_parts__mainwindow_document_mode(void* self) {
    return QMainWindow_DocumentMode((QMainWindow*)self);
}

void k_parts__mainwindow_set_document_mode(void* self, bool enabled) {
    QMainWindow_SetDocumentMode((QMainWindow*)self, enabled);
}

int32_t k_parts__mainwindow_tab_shape(void* self) {
    return QMainWindow_TabShape((QMainWindow*)self);
}

void k_parts__mainwindow_set_tab_shape(void* self, int32_t tabShape) {
    QMainWindow_SetTabShape((QMainWindow*)self, tabShape);
}

int32_t k_parts__mainwindow_tab_position(void* self, int32_t area) {
    return QMainWindow_TabPosition((QMainWindow*)self, area);
}

void k_parts__mainwindow_set_tab_position(void* self, int32_t areas, int32_t tabPosition) {
    QMainWindow_SetTabPosition((QMainWindow*)self, areas, tabPosition);
}

void k_parts__mainwindow_set_dock_options(void* self, int32_t options) {
    QMainWindow_SetDockOptions((QMainWindow*)self, options);
}

int32_t k_parts__mainwindow_dock_options(void* self) {
    return QMainWindow_DockOptions((QMainWindow*)self);
}

bool k_parts__mainwindow_is_separator(void* self, void* pos) {
    return QMainWindow_IsSeparator((QMainWindow*)self, (QPoint*)pos);
}

QMenuBar* k_parts__mainwindow_menu_bar(void* self) {
    return QMainWindow_MenuBar((QMainWindow*)self);
}

void k_parts__mainwindow_set_menu_bar(void* self, void* menubar) {
    QMainWindow_SetMenuBar((QMainWindow*)self, (QMenuBar*)menubar);
}

QWidget* k_parts__mainwindow_menu_widget(void* self) {
    return QMainWindow_MenuWidget((QMainWindow*)self);
}

void k_parts__mainwindow_set_menu_widget(void* self, void* menubar) {
    QMainWindow_SetMenuWidget((QMainWindow*)self, (QWidget*)menubar);
}

QStatusBar* k_parts__mainwindow_status_bar(void* self) {
    return QMainWindow_StatusBar((QMainWindow*)self);
}

void k_parts__mainwindow_set_status_bar(void* self, void* statusbar) {
    QMainWindow_SetStatusBar((QMainWindow*)self, (QStatusBar*)statusbar);
}

QWidget* k_parts__mainwindow_central_widget(void* self) {
    return QMainWindow_CentralWidget((QMainWindow*)self);
}

void k_parts__mainwindow_set_central_widget(void* self, void* widget) {
    QMainWindow_SetCentralWidget((QMainWindow*)self, (QWidget*)widget);
}

QWidget* k_parts__mainwindow_take_central_widget(void* self) {
    return QMainWindow_TakeCentralWidget((QMainWindow*)self);
}

void k_parts__mainwindow_set_corner(void* self, int32_t corner, int32_t area) {
    QMainWindow_SetCorner((QMainWindow*)self, corner, area);
}

int32_t k_parts__mainwindow_corner(void* self, int32_t corner) {
    return QMainWindow_Corner((QMainWindow*)self, corner);
}

void k_parts__mainwindow_add_tool_bar_break(void* self) {
    QMainWindow_AddToolBarBreak((QMainWindow*)self);
}

void k_parts__mainwindow_insert_tool_bar_break(void* self, void* before) {
    QMainWindow_InsertToolBarBreak((QMainWindow*)self, (QToolBar*)before);
}

void k_parts__mainwindow_add_tool_bar(void* self, int32_t area, void* toolbar) {
    QMainWindow_AddToolBar((QMainWindow*)self, area, (QToolBar*)toolbar);
}

void k_parts__mainwindow_add_tool_bar2(void* self, void* toolbar) {
    QMainWindow_AddToolBar2((QMainWindow*)self, (QToolBar*)toolbar);
}

QToolBar* k_parts__mainwindow_add_tool_bar3(void* self, const char* title) {
    return QMainWindow_AddToolBar3((QMainWindow*)self, qstring(title));
}

void k_parts__mainwindow_insert_tool_bar(void* self, void* before, void* toolbar) {
    QMainWindow_InsertToolBar((QMainWindow*)self, (QToolBar*)before, (QToolBar*)toolbar);
}

void k_parts__mainwindow_remove_tool_bar(void* self, void* toolbar) {
    QMainWindow_RemoveToolBar((QMainWindow*)self, (QToolBar*)toolbar);
}

void k_parts__mainwindow_remove_tool_bar_break(void* self, void* before) {
    QMainWindow_RemoveToolBarBreak((QMainWindow*)self, (QToolBar*)before);
}

bool k_parts__mainwindow_unified_title_and_tool_bar_on_mac(void* self) {
    return QMainWindow_UnifiedTitleAndToolBarOnMac((QMainWindow*)self);
}

int32_t k_parts__mainwindow_tool_bar_area(void* self, void* toolbar) {
    return QMainWindow_ToolBarArea((QMainWindow*)self, (QToolBar*)toolbar);
}

bool k_parts__mainwindow_tool_bar_break(void* self, void* toolbar) {
    return QMainWindow_ToolBarBreak((QMainWindow*)self, (QToolBar*)toolbar);
}

void k_parts__mainwindow_add_dock_widget(void* self, int32_t area, void* dockwidget) {
    QMainWindow_AddDockWidget((QMainWindow*)self, area, (QDockWidget*)dockwidget);
}

void k_parts__mainwindow_add_dock_widget2(void* self, int32_t area, void* dockwidget, int32_t orientation) {
    QMainWindow_AddDockWidget2((QMainWindow*)self, area, (QDockWidget*)dockwidget, orientation);
}

void k_parts__mainwindow_split_dock_widget(void* self, void* after, void* dockwidget, int32_t orientation) {
    QMainWindow_SplitDockWidget((QMainWindow*)self, (QDockWidget*)after, (QDockWidget*)dockwidget, orientation);
}

void k_parts__mainwindow_tabify_dock_widget(void* self, void* first, void* second) {
    QMainWindow_TabifyDockWidget((QMainWindow*)self, (QDockWidget*)first, (QDockWidget*)second);
}

libqt_list /* of QDockWidget* */ k_parts__mainwindow_tabified_dock_widgets(void* self, void* dockwidget) {
    libqt_list _arr = QMainWindow_TabifiedDockWidgets((QMainWindow*)self, (QDockWidget*)dockwidget);
    return _arr;
}

void k_parts__mainwindow_remove_dock_widget(void* self, void* dockwidget) {
    QMainWindow_RemoveDockWidget((QMainWindow*)self, (QDockWidget*)dockwidget);
}

bool k_parts__mainwindow_restore_dock_widget(void* self, void* dockwidget) {
    return QMainWindow_RestoreDockWidget((QMainWindow*)self, (QDockWidget*)dockwidget);
}

int32_t k_parts__mainwindow_dock_widget_area(void* self, void* dockwidget) {
    return QMainWindow_DockWidgetArea((QMainWindow*)self, (QDockWidget*)dockwidget);
}

void k_parts__mainwindow_resize_docks(void* self, libqt_list /* of QDockWidget* */ docks, libqt_list /* of int */ sizes, int32_t orientation) {
    QMainWindow_ResizeDocks((QMainWindow*)self, docks, sizes, orientation);
}

char* k_parts__mainwindow_save_state(void* self) {
    libqt_string _str = QMainWindow_SaveState((QMainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_parts__mainwindow_restore_state(void* self, const char* state) {
    return QMainWindow_RestoreState((QMainWindow*)self, qstring(state));
}

void k_parts__mainwindow_set_animated(void* self, bool enabled) {
    QMainWindow_SetAnimated((QMainWindow*)self, enabled);
}

void k_parts__mainwindow_set_dock_nesting_enabled(void* self, bool enabled) {
    QMainWindow_SetDockNestingEnabled((QMainWindow*)self, enabled);
}

void k_parts__mainwindow_set_unified_title_and_tool_bar_on_mac(void* self, bool set) {
    QMainWindow_SetUnifiedTitleAndToolBarOnMac((QMainWindow*)self, set);
}

void k_parts__mainwindow_icon_size_changed(void* self, void* iconSize) {
    QMainWindow_IconSizeChanged((QMainWindow*)self, (QSize*)iconSize);
}

void k_parts__mainwindow_on_icon_size_changed(void* self, void (*callback)(void*, void*)) {
    QMainWindow_Connect_IconSizeChanged((QMainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_tool_button_style_changed(void* self, int32_t toolButtonStyle) {
    QMainWindow_ToolButtonStyleChanged((QMainWindow*)self, toolButtonStyle);
}

void k_parts__mainwindow_on_tool_button_style_changed(void* self, void (*callback)(void*, int32_t)) {
    QMainWindow_Connect_ToolButtonStyleChanged((QMainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_tabified_dock_widget_activated(void* self, void* dockWidget) {
    QMainWindow_TabifiedDockWidgetActivated((QMainWindow*)self, (QDockWidget*)dockWidget);
}

void k_parts__mainwindow_on_tabified_dock_widget_activated(void* self, void (*callback)(void*, void*)) {
    QMainWindow_Connect_TabifiedDockWidgetActivated((QMainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_add_tool_bar_break1(void* self, int32_t area) {
    QMainWindow_AddToolBarBreak1((QMainWindow*)self, area);
}

char* k_parts__mainwindow_save_state1(void* self, int version) {
    libqt_string _str = QMainWindow_SaveState1((QMainWindow*)self, version);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_parts__mainwindow_restore_state2(void* self, const char* state, int version) {
    return QMainWindow_RestoreState2((QMainWindow*)self, qstring(state), version);
}

uintptr_t k_parts__mainwindow_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_parts__mainwindow_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_parts__mainwindow_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_parts__mainwindow_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_parts__mainwindow_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_parts__mainwindow_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_parts__mainwindow_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_parts__mainwindow_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_parts__mainwindow_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_parts__mainwindow_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_parts__mainwindow_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_parts__mainwindow_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_parts__mainwindow_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_parts__mainwindow_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_parts__mainwindow_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_parts__mainwindow_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_parts__mainwindow_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_parts__mainwindow_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_parts__mainwindow_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_parts__mainwindow_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_parts__mainwindow_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_parts__mainwindow_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_parts__mainwindow_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_parts__mainwindow_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_parts__mainwindow_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_parts__mainwindow_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_parts__mainwindow_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_parts__mainwindow_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_parts__mainwindow_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_parts__mainwindow_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_parts__mainwindow_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_parts__mainwindow_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_parts__mainwindow_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_parts__mainwindow_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_parts__mainwindow_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_parts__mainwindow_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_parts__mainwindow_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_parts__mainwindow_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_parts__mainwindow_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_parts__mainwindow_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_parts__mainwindow_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_parts__mainwindow_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_parts__mainwindow_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_parts__mainwindow_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_parts__mainwindow_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_parts__mainwindow_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_parts__mainwindow_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_parts__mainwindow_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_parts__mainwindow_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_parts__mainwindow_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_parts__mainwindow_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_parts__mainwindow_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_parts__mainwindow_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_parts__mainwindow_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_parts__mainwindow_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_parts__mainwindow_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_parts__mainwindow_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_parts__mainwindow_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_parts__mainwindow_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_parts__mainwindow_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_parts__mainwindow_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_parts__mainwindow_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_parts__mainwindow_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_parts__mainwindow_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_parts__mainwindow_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_parts__mainwindow_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_parts__mainwindow_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_parts__mainwindow_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_parts__mainwindow_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_parts__mainwindow_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_parts__mainwindow_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_parts__mainwindow_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_parts__mainwindow_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_parts__mainwindow_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_parts__mainwindow_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_parts__mainwindow_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_parts__mainwindow_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_parts__mainwindow_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_parts__mainwindow_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_parts__mainwindow_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_parts__mainwindow_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_parts__mainwindow_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_parts__mainwindow_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_parts__mainwindow_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_parts__mainwindow_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_parts__mainwindow_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_parts__mainwindow_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_parts__mainwindow_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_parts__mainwindow_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_parts__mainwindow_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_parts__mainwindow_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_parts__mainwindow_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_parts__mainwindow_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_parts__mainwindow_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_parts__mainwindow_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_parts__mainwindow_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_parts__mainwindow_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_parts__mainwindow_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_parts__mainwindow_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_parts__mainwindow_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__mainwindow_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_parts__mainwindow_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_parts__mainwindow_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_parts__mainwindow_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_parts__mainwindow_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_parts__mainwindow_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_parts__mainwindow_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_parts__mainwindow_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_parts__mainwindow_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_parts__mainwindow_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_parts__mainwindow_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_parts__mainwindow_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_parts__mainwindow_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_parts__mainwindow_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__mainwindow_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_parts__mainwindow_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_parts__mainwindow_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_parts__mainwindow_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_parts__mainwindow_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_parts__mainwindow_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_parts__mainwindow_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_parts__mainwindow_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_parts__mainwindow_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_parts__mainwindow_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_parts__mainwindow_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_parts__mainwindow_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_parts__mainwindow_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_parts__mainwindow_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_parts__mainwindow_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_parts__mainwindow_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_parts__mainwindow_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_parts__mainwindow_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_parts__mainwindow_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_parts__mainwindow_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_parts__mainwindow_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_parts__mainwindow_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_parts__mainwindow_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_parts__mainwindow_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_parts__mainwindow_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_parts__mainwindow_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_parts__mainwindow_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_parts__mainwindow_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_parts__mainwindow_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_parts__mainwindow_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_parts__mainwindow_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_parts__mainwindow_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_parts__mainwindow_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_parts__mainwindow_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_parts__mainwindow_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_parts__mainwindow_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_parts__mainwindow_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_parts__mainwindow_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_parts__mainwindow_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_parts__mainwindow_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_parts__mainwindow_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_parts__mainwindow_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_parts__mainwindow_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_parts__mainwindow_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_parts__mainwindow_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_parts__mainwindow_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_parts__mainwindow_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_parts__mainwindow_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_parts__mainwindow_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_parts__mainwindow_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_parts__mainwindow_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_parts__mainwindow_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_parts__mainwindow_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_parts__mainwindow_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_parts__mainwindow_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_parts__mainwindow_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_parts__mainwindow_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_parts__mainwindow_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_parts__mainwindow_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_parts__mainwindow_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_parts__mainwindow_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_parts__mainwindow_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_parts__mainwindow_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_parts__mainwindow_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_parts__mainwindow_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_parts__mainwindow_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_parts__mainwindow_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_parts__mainwindow_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_parts__mainwindow_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_parts__mainwindow_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_parts__mainwindow_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_parts__mainwindow_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_parts__mainwindow_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_parts__mainwindow_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_parts__mainwindow_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_parts__mainwindow_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_parts__mainwindow_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_parts__mainwindow_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_parts__mainwindow_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_parts__mainwindow_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_parts__mainwindow_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_parts__mainwindow_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_parts__mainwindow_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_parts__mainwindow_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_parts__mainwindow_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_parts__mainwindow_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_parts__mainwindow_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_parts__mainwindow_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_parts__mainwindow_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_parts__mainwindow_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_parts__mainwindow_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_parts__mainwindow_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_parts__mainwindow_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_parts__mainwindow_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_parts__mainwindow_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_parts__mainwindow_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_parts__mainwindow_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_parts__mainwindow_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_parts__mainwindow_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_parts__mainwindow_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_parts__mainwindow_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_parts__mainwindow_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_parts__mainwindow_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_parts__mainwindow_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_parts__mainwindow_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_parts__mainwindow_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_parts__mainwindow_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_parts__mainwindow_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_parts__mainwindow_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_parts__mainwindow_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_parts__mainwindow_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_parts__mainwindow_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_parts__mainwindow_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_parts__mainwindow_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_parts__mainwindow_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_parts__mainwindow_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_parts__mainwindow_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_parts__mainwindow_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_parts__mainwindow_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_parts__mainwindow_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_parts__mainwindow_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_parts__mainwindow_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_parts__mainwindow_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_parts__mainwindow_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_parts__mainwindow_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_parts__mainwindow_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_parts__mainwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_parts__mainwindow_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_parts__mainwindow_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_parts__mainwindow_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_parts__mainwindow_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_parts__mainwindow_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_parts__mainwindow_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_parts__mainwindow_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_parts__mainwindow_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_parts__mainwindow_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_parts__mainwindow_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_parts__mainwindow_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_parts__mainwindow_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_parts__mainwindow_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_parts__mainwindow_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_parts__mainwindow_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_parts__mainwindow_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_parts__mainwindow_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_parts__mainwindow_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_parts__mainwindow_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_parts__mainwindow_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_parts__mainwindow_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_parts__mainwindow_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_parts__mainwindow_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_parts__mainwindow_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_parts__mainwindow_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_parts__mainwindow_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_parts__mainwindow_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_parts__mainwindow_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_parts__mainwindow_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_parts__mainwindow_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_parts__mainwindow_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_parts__mainwindow_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_parts__mainwindow_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_parts__mainwindow_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_parts__mainwindow_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_parts__mainwindow_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_parts__mainwindow_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_parts__mainwindow_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_parts__mainwindow_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_parts__mainwindow_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_parts__mainwindow_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_parts__mainwindow_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_parts__mainwindow_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_parts__mainwindow_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_parts__mainwindow_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_parts__mainwindow_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_parts__mainwindow_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_parts__mainwindow_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_parts__mainwindow_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_parts__mainwindow_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_parts__mainwindow_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__mainwindow_dynamic_property_names\n");
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

QBindingStorage* k_parts__mainwindow_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_parts__mainwindow_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_parts__mainwindow_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_parts__mainwindow_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_parts__mainwindow_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_parts__mainwindow_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_parts__mainwindow_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_parts__mainwindow_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_parts__mainwindow_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_parts__mainwindow_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_parts__mainwindow_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_parts__mainwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_parts__mainwindow_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_parts__mainwindow_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_parts__mainwindow_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_parts__mainwindow_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_parts__mainwindow_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_parts__mainwindow_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_parts__mainwindow_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_parts__mainwindow_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_parts__mainwindow_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_parts__mainwindow_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_parts__mainwindow_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_parts__mainwindow_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_parts__mainwindow_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_parts__mainwindow_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_parts__mainwindow_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_parts__mainwindow_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_parts__mainwindow_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_parts__mainwindow_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_parts__mainwindow_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

KXMLGUIClient* k_parts__mainwindow_builder_client(void* self) {
    return KXMLGUIBuilder_BuilderClient((KXMLGUIBuilder*)self);
}

void k_parts__mainwindow_set_builder_client(void* self, void* client) {
    KXMLGUIBuilder_SetBuilderClient((KXMLGUIBuilder*)self, (KXMLGUIClient*)client);
}

QWidget* k_parts__mainwindow_widget(void* self) {
    return KXMLGUIBuilder_Widget((KXMLGUIBuilder*)self);
}

QAction* k_parts__mainwindow_action(void* self, const char* name) {
    return KXMLGUIClient_Action((KXMLGUIClient*)self, qstring(name));
}

void k_parts__mainwindow_set_x_m_l_g_u_i_build_document(void* self, void* doc) {
    KXMLGUIClient_SetXMLGUIBuildDocument((KXMLGUIClient*)self, (QDomDocument*)doc);
}

QDomDocument* k_parts__mainwindow_xmlgui_build_document(void* self) {
    return KXMLGUIClient_XmlguiBuildDocument((KXMLGUIClient*)self);
}

void k_parts__mainwindow_set_factory(void* self, void* factory) {
    KXMLGUIClient_SetFactory((KXMLGUIClient*)self, (KXMLGUIFactory*)factory);
}

KXMLGUIFactory* k_parts__mainwindow_factory(void* self) {
    return KXMLGUIClient_Factory((KXMLGUIClient*)self);
}

KXMLGUIClient* k_parts__mainwindow_parent_client(void* self) {
    return KXMLGUIClient_ParentClient((KXMLGUIClient*)self);
}

void k_parts__mainwindow_insert_child_client(void* self, void* child) {
    KXMLGUIClient_InsertChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

void k_parts__mainwindow_remove_child_client(void* self, void* child) {
    KXMLGUIClient_RemoveChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

libqt_list /* of KXMLGUIClient* */ k_parts__mainwindow_child_clients(void* self) {
    libqt_list _arr = KXMLGUIClient_ChildClients((KXMLGUIClient*)self);
    return _arr;
}

void k_parts__mainwindow_set_client_builder(void* self, void* builder) {
    KXMLGUIClient_SetClientBuilder((KXMLGUIClient*)self, (KXMLGUIBuilder*)builder);
}

KXMLGUIBuilder* k_parts__mainwindow_client_builder(void* self) {
    return KXMLGUIClient_ClientBuilder((KXMLGUIClient*)self);
}

void k_parts__mainwindow_reload_x_m_l(void* self) {
    KXMLGUIClient_ReloadXML((KXMLGUIClient*)self);
}

void k_parts__mainwindow_plug_action_list(void* self, const char* name, libqt_list /* of QAction* */ actionList) {
    KXMLGUIClient_PlugActionList((KXMLGUIClient*)self, qstring(name), actionList);
}

void k_parts__mainwindow_unplug_action_list(void* self, const char* name) {
    KXMLGUIClient_UnplugActionList((KXMLGUIClient*)self, qstring(name));
}

const char* k_parts__mainwindow_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__mainwindow_find_most_recent_x_m_l_file\n");
        abort();
    }
    for (size_t i = 0; i < files_len; ++i) {
        files_qstr[i] = qstring(files[i]);
    }
    libqt_list files_list = qlist(files_qstr, files_len);
    libqt_string _str = KXMLGUIClient_FindMostRecentXMLFile(files_list, qstring(doc));
    free(files_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_add_state_action_enabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionEnabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

void k_parts__mainwindow_add_state_action_disabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionDisabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

KXMLGUIClient__StateChange* k_parts__mainwindow_get_actions_to_change_for_state(void* self, const char* state) {
    return KXMLGUIClient_GetActionsToChangeForState((KXMLGUIClient*)self, qstring(state));
}

void k_parts__mainwindow_begin_x_m_l_plug(void* self, void* param1) {
    KXMLGUIClient_BeginXMLPlug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_parts__mainwindow_end_x_m_l_plug(void* self) {
    KXMLGUIClient_EndXMLPlug((KXMLGUIClient*)self);
}

void k_parts__mainwindow_prepare_x_m_l_unplug(void* self, void* param1) {
    KXMLGUIClient_PrepareXMLUnplug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_parts__mainwindow_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile) {
    KXMLGUIClient_ReplaceXMLFile((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile));
}

const char* k_parts__mainwindow_find_version_number(const char* xml) {
    libqt_string _str = KXMLGUIClient_FindVersionNumber(qstring(xml));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge) {
    KXMLGUIClient_ReplaceXMLFile3((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile), merge);
}

void k_parts__mainwindow_set_part_object(void* self, void* object) {
    KParts__PartBase_SetPartObject((KParts__PartBase*)self, (QObject*)object);
}

QObject* k_parts__mainwindow_part_object(void* self) {
    return KParts__PartBase_PartObject((KParts__PartBase*)self);
}

KXMLGUIFactory* k_parts__mainwindow_gui_factory(void* self) {
    return KParts__MainWindow_GuiFactory((KParts__MainWindow*)self);
}

KXMLGUIFactory* k_parts__mainwindow_qbase_gui_factory(void* self) {
    return KParts__MainWindow_QBaseGuiFactory((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_gui_factory(void* self, KXMLGUIFactory* (*callback)()) {
    KParts__MainWindow_OnGuiFactory((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_apply_main_window_settings(void* self, void* config) {
    KParts__MainWindow_ApplyMainWindowSettings((KParts__MainWindow*)self, (KConfigGroup*)config);
}

void k_parts__mainwindow_qbase_apply_main_window_settings(void* self, void* config) {
    KParts__MainWindow_QBaseApplyMainWindowSettings((KParts__MainWindow*)self, (KConfigGroup*)config);
}

void k_parts__mainwindow_on_apply_main_window_settings(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnApplyMainWindowSettings((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_slot_state_changed(void* self, const char* newstate) {
    KParts__MainWindow_SlotStateChanged((KParts__MainWindow*)self, qstring(newstate));
}

void k_parts__mainwindow_qbase_slot_state_changed(void* self, const char* newstate) {
    KParts__MainWindow_QBaseSlotStateChanged((KParts__MainWindow*)self, qstring(newstate));
}

void k_parts__mainwindow_on_slot_state_changed(void* self, void (*callback)(void*, const char*)) {
    KParts__MainWindow_OnSlotStateChanged((KParts__MainWindow*)self, (intptr_t)callback);
}

bool k_parts__mainwindow_event(void* self, void* event) {
    return KParts__MainWindow_Event((KParts__MainWindow*)self, (QEvent*)event);
}

bool k_parts__mainwindow_qbase_event(void* self, void* event) {
    return KParts__MainWindow_QBaseEvent((KParts__MainWindow*)self, (QEvent*)event);
}

void k_parts__mainwindow_on_event(void* self, bool (*callback)(void*, void*)) {
    KParts__MainWindow_OnEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_set_caption(void* self, const char* caption) {
    KParts__MainWindow_SetCaption((KParts__MainWindow*)self, qstring(caption));
}

void k_parts__mainwindow_qbase_set_caption(void* self, const char* caption) {
    KParts__MainWindow_QBaseSetCaption((KParts__MainWindow*)self, qstring(caption));
}

void k_parts__mainwindow_on_set_caption(void* self, void (*callback)(void*, const char*)) {
    KParts__MainWindow_OnSetCaption((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_set_plain_caption(void* self, const char* caption) {
    KParts__MainWindow_SetPlainCaption((KParts__MainWindow*)self, qstring(caption));
}

void k_parts__mainwindow_qbase_set_plain_caption(void* self, const char* caption) {
    KParts__MainWindow_QBaseSetPlainCaption((KParts__MainWindow*)self, qstring(caption));
}

void k_parts__mainwindow_on_set_plain_caption(void* self, void (*callback)(void*, const char*)) {
    KParts__MainWindow_OnSetPlainCaption((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_key_press_event(void* self, void* keyEvent) {
    KParts__MainWindow_KeyPressEvent((KParts__MainWindow*)self, (QKeyEvent*)keyEvent);
}

void k_parts__mainwindow_qbase_key_press_event(void* self, void* keyEvent) {
    KParts__MainWindow_QBaseKeyPressEvent((KParts__MainWindow*)self, (QKeyEvent*)keyEvent);
}

void k_parts__mainwindow_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnKeyPressEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_close_event(void* self, void* param1) {
    KParts__MainWindow_CloseEvent((KParts__MainWindow*)self, (QCloseEvent*)param1);
}

void k_parts__mainwindow_qbase_close_event(void* self, void* param1) {
    KParts__MainWindow_QBaseCloseEvent((KParts__MainWindow*)self, (QCloseEvent*)param1);
}

void k_parts__mainwindow_on_close_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnCloseEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

bool k_parts__mainwindow_query_close(void* self) {
    return KParts__MainWindow_QueryClose((KParts__MainWindow*)self);
}

bool k_parts__mainwindow_qbase_query_close(void* self) {
    return KParts__MainWindow_QBaseQueryClose((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_query_close(void* self, bool (*callback)()) {
    KParts__MainWindow_OnQueryClose((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_save_properties(void* self, void* param1) {
    KParts__MainWindow_SaveProperties((KParts__MainWindow*)self, (KConfigGroup*)param1);
}

void k_parts__mainwindow_qbase_save_properties(void* self, void* param1) {
    KParts__MainWindow_QBaseSaveProperties((KParts__MainWindow*)self, (KConfigGroup*)param1);
}

void k_parts__mainwindow_on_save_properties(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnSaveProperties((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_read_properties(void* self, void* param1) {
    KParts__MainWindow_ReadProperties((KParts__MainWindow*)self, (KConfigGroup*)param1);
}

void k_parts__mainwindow_qbase_read_properties(void* self, void* param1) {
    KParts__MainWindow_QBaseReadProperties((KParts__MainWindow*)self, (KConfigGroup*)param1);
}

void k_parts__mainwindow_on_read_properties(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnReadProperties((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_save_global_properties(void* self, void* sessionConfig) {
    KParts__MainWindow_SaveGlobalProperties((KParts__MainWindow*)self, (KConfig*)sessionConfig);
}

void k_parts__mainwindow_qbase_save_global_properties(void* self, void* sessionConfig) {
    KParts__MainWindow_QBaseSaveGlobalProperties((KParts__MainWindow*)self, (KConfig*)sessionConfig);
}

void k_parts__mainwindow_on_save_global_properties(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnSaveGlobalProperties((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_read_global_properties(void* self, void* sessionConfig) {
    KParts__MainWindow_ReadGlobalProperties((KParts__MainWindow*)self, (KConfig*)sessionConfig);
}

void k_parts__mainwindow_qbase_read_global_properties(void* self, void* sessionConfig) {
    KParts__MainWindow_QBaseReadGlobalProperties((KParts__MainWindow*)self, (KConfig*)sessionConfig);
}

void k_parts__mainwindow_on_read_global_properties(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnReadGlobalProperties((KParts__MainWindow*)self, (intptr_t)callback);
}

QMenu* k_parts__mainwindow_create_popup_menu(void* self) {
    return KParts__MainWindow_CreatePopupMenu((KParts__MainWindow*)self);
}

QMenu* k_parts__mainwindow_qbase_create_popup_menu(void* self) {
    return KParts__MainWindow_QBaseCreatePopupMenu((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_create_popup_menu(void* self, QMenu* (*callback)()) {
    KParts__MainWindow_OnCreatePopupMenu((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_context_menu_event(void* self, void* event) {
    KParts__MainWindow_ContextMenuEvent((KParts__MainWindow*)self, (QContextMenuEvent*)event);
}

void k_parts__mainwindow_qbase_context_menu_event(void* self, void* event) {
    KParts__MainWindow_QBaseContextMenuEvent((KParts__MainWindow*)self, (QContextMenuEvent*)event);
}

void k_parts__mainwindow_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnContextMenuEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

int32_t k_parts__mainwindow_dev_type(void* self) {
    return KParts__MainWindow_DevType((KParts__MainWindow*)self);
}

int32_t k_parts__mainwindow_qbase_dev_type(void* self) {
    return KParts__MainWindow_QBaseDevType((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_dev_type(void* self, int32_t (*callback)()) {
    KParts__MainWindow_OnDevType((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_set_visible(void* self, bool visible) {
    KParts__MainWindow_SetVisible((KParts__MainWindow*)self, visible);
}

void k_parts__mainwindow_qbase_set_visible(void* self, bool visible) {
    KParts__MainWindow_QBaseSetVisible((KParts__MainWindow*)self, visible);
}

void k_parts__mainwindow_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KParts__MainWindow_OnSetVisible((KParts__MainWindow*)self, (intptr_t)callback);
}

QSize* k_parts__mainwindow_size_hint(void* self) {
    return KParts__MainWindow_SizeHint((KParts__MainWindow*)self);
}

QSize* k_parts__mainwindow_qbase_size_hint(void* self) {
    return KParts__MainWindow_QBaseSizeHint((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_size_hint(void* self, QSize* (*callback)()) {
    KParts__MainWindow_OnSizeHint((KParts__MainWindow*)self, (intptr_t)callback);
}

QSize* k_parts__mainwindow_minimum_size_hint(void* self) {
    return KParts__MainWindow_MinimumSizeHint((KParts__MainWindow*)self);
}

QSize* k_parts__mainwindow_qbase_minimum_size_hint(void* self) {
    return KParts__MainWindow_QBaseMinimumSizeHint((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KParts__MainWindow_OnMinimumSizeHint((KParts__MainWindow*)self, (intptr_t)callback);
}

int32_t k_parts__mainwindow_height_for_width(void* self, int param1) {
    return KParts__MainWindow_HeightForWidth((KParts__MainWindow*)self, param1);
}

int32_t k_parts__mainwindow_qbase_height_for_width(void* self, int param1) {
    return KParts__MainWindow_QBaseHeightForWidth((KParts__MainWindow*)self, param1);
}

void k_parts__mainwindow_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KParts__MainWindow_OnHeightForWidth((KParts__MainWindow*)self, (intptr_t)callback);
}

bool k_parts__mainwindow_has_height_for_width(void* self) {
    return KParts__MainWindow_HasHeightForWidth((KParts__MainWindow*)self);
}

bool k_parts__mainwindow_qbase_has_height_for_width(void* self) {
    return KParts__MainWindow_QBaseHasHeightForWidth((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_has_height_for_width(void* self, bool (*callback)()) {
    KParts__MainWindow_OnHasHeightForWidth((KParts__MainWindow*)self, (intptr_t)callback);
}

QPaintEngine* k_parts__mainwindow_paint_engine(void* self) {
    return KParts__MainWindow_PaintEngine((KParts__MainWindow*)self);
}

QPaintEngine* k_parts__mainwindow_qbase_paint_engine(void* self) {
    return KParts__MainWindow_QBasePaintEngine((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KParts__MainWindow_OnPaintEngine((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_mouse_press_event(void* self, void* event) {
    KParts__MainWindow_MousePressEvent((KParts__MainWindow*)self, (QMouseEvent*)event);
}

void k_parts__mainwindow_qbase_mouse_press_event(void* self, void* event) {
    KParts__MainWindow_QBaseMousePressEvent((KParts__MainWindow*)self, (QMouseEvent*)event);
}

void k_parts__mainwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnMousePressEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_mouse_release_event(void* self, void* event) {
    KParts__MainWindow_MouseReleaseEvent((KParts__MainWindow*)self, (QMouseEvent*)event);
}

void k_parts__mainwindow_qbase_mouse_release_event(void* self, void* event) {
    KParts__MainWindow_QBaseMouseReleaseEvent((KParts__MainWindow*)self, (QMouseEvent*)event);
}

void k_parts__mainwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnMouseReleaseEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_mouse_double_click_event(void* self, void* event) {
    KParts__MainWindow_MouseDoubleClickEvent((KParts__MainWindow*)self, (QMouseEvent*)event);
}

void k_parts__mainwindow_qbase_mouse_double_click_event(void* self, void* event) {
    KParts__MainWindow_QBaseMouseDoubleClickEvent((KParts__MainWindow*)self, (QMouseEvent*)event);
}

void k_parts__mainwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnMouseDoubleClickEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_mouse_move_event(void* self, void* event) {
    KParts__MainWindow_MouseMoveEvent((KParts__MainWindow*)self, (QMouseEvent*)event);
}

void k_parts__mainwindow_qbase_mouse_move_event(void* self, void* event) {
    KParts__MainWindow_QBaseMouseMoveEvent((KParts__MainWindow*)self, (QMouseEvent*)event);
}

void k_parts__mainwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnMouseMoveEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_wheel_event(void* self, void* event) {
    KParts__MainWindow_WheelEvent((KParts__MainWindow*)self, (QWheelEvent*)event);
}

void k_parts__mainwindow_qbase_wheel_event(void* self, void* event) {
    KParts__MainWindow_QBaseWheelEvent((KParts__MainWindow*)self, (QWheelEvent*)event);
}

void k_parts__mainwindow_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnWheelEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_key_release_event(void* self, void* event) {
    KParts__MainWindow_KeyReleaseEvent((KParts__MainWindow*)self, (QKeyEvent*)event);
}

void k_parts__mainwindow_qbase_key_release_event(void* self, void* event) {
    KParts__MainWindow_QBaseKeyReleaseEvent((KParts__MainWindow*)self, (QKeyEvent*)event);
}

void k_parts__mainwindow_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnKeyReleaseEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_focus_in_event(void* self, void* event) {
    KParts__MainWindow_FocusInEvent((KParts__MainWindow*)self, (QFocusEvent*)event);
}

void k_parts__mainwindow_qbase_focus_in_event(void* self, void* event) {
    KParts__MainWindow_QBaseFocusInEvent((KParts__MainWindow*)self, (QFocusEvent*)event);
}

void k_parts__mainwindow_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnFocusInEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_focus_out_event(void* self, void* event) {
    KParts__MainWindow_FocusOutEvent((KParts__MainWindow*)self, (QFocusEvent*)event);
}

void k_parts__mainwindow_qbase_focus_out_event(void* self, void* event) {
    KParts__MainWindow_QBaseFocusOutEvent((KParts__MainWindow*)self, (QFocusEvent*)event);
}

void k_parts__mainwindow_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnFocusOutEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_enter_event(void* self, void* event) {
    KParts__MainWindow_EnterEvent((KParts__MainWindow*)self, (QEnterEvent*)event);
}

void k_parts__mainwindow_qbase_enter_event(void* self, void* event) {
    KParts__MainWindow_QBaseEnterEvent((KParts__MainWindow*)self, (QEnterEvent*)event);
}

void k_parts__mainwindow_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnEnterEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_leave_event(void* self, void* event) {
    KParts__MainWindow_LeaveEvent((KParts__MainWindow*)self, (QEvent*)event);
}

void k_parts__mainwindow_qbase_leave_event(void* self, void* event) {
    KParts__MainWindow_QBaseLeaveEvent((KParts__MainWindow*)self, (QEvent*)event);
}

void k_parts__mainwindow_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnLeaveEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_paint_event(void* self, void* event) {
    KParts__MainWindow_PaintEvent((KParts__MainWindow*)self, (QPaintEvent*)event);
}

void k_parts__mainwindow_qbase_paint_event(void* self, void* event) {
    KParts__MainWindow_QBasePaintEvent((KParts__MainWindow*)self, (QPaintEvent*)event);
}

void k_parts__mainwindow_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnPaintEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_move_event(void* self, void* event) {
    KParts__MainWindow_MoveEvent((KParts__MainWindow*)self, (QMoveEvent*)event);
}

void k_parts__mainwindow_qbase_move_event(void* self, void* event) {
    KParts__MainWindow_QBaseMoveEvent((KParts__MainWindow*)self, (QMoveEvent*)event);
}

void k_parts__mainwindow_on_move_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnMoveEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_resize_event(void* self, void* event) {
    KParts__MainWindow_ResizeEvent((KParts__MainWindow*)self, (QResizeEvent*)event);
}

void k_parts__mainwindow_qbase_resize_event(void* self, void* event) {
    KParts__MainWindow_QBaseResizeEvent((KParts__MainWindow*)self, (QResizeEvent*)event);
}

void k_parts__mainwindow_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnResizeEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_tablet_event(void* self, void* event) {
    KParts__MainWindow_TabletEvent((KParts__MainWindow*)self, (QTabletEvent*)event);
}

void k_parts__mainwindow_qbase_tablet_event(void* self, void* event) {
    KParts__MainWindow_QBaseTabletEvent((KParts__MainWindow*)self, (QTabletEvent*)event);
}

void k_parts__mainwindow_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnTabletEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_action_event(void* self, void* event) {
    KParts__MainWindow_ActionEvent((KParts__MainWindow*)self, (QActionEvent*)event);
}

void k_parts__mainwindow_qbase_action_event(void* self, void* event) {
    KParts__MainWindow_QBaseActionEvent((KParts__MainWindow*)self, (QActionEvent*)event);
}

void k_parts__mainwindow_on_action_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnActionEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_drag_enter_event(void* self, void* event) {
    KParts__MainWindow_DragEnterEvent((KParts__MainWindow*)self, (QDragEnterEvent*)event);
}

void k_parts__mainwindow_qbase_drag_enter_event(void* self, void* event) {
    KParts__MainWindow_QBaseDragEnterEvent((KParts__MainWindow*)self, (QDragEnterEvent*)event);
}

void k_parts__mainwindow_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnDragEnterEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_drag_move_event(void* self, void* event) {
    KParts__MainWindow_DragMoveEvent((KParts__MainWindow*)self, (QDragMoveEvent*)event);
}

void k_parts__mainwindow_qbase_drag_move_event(void* self, void* event) {
    KParts__MainWindow_QBaseDragMoveEvent((KParts__MainWindow*)self, (QDragMoveEvent*)event);
}

void k_parts__mainwindow_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnDragMoveEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_drag_leave_event(void* self, void* event) {
    KParts__MainWindow_DragLeaveEvent((KParts__MainWindow*)self, (QDragLeaveEvent*)event);
}

void k_parts__mainwindow_qbase_drag_leave_event(void* self, void* event) {
    KParts__MainWindow_QBaseDragLeaveEvent((KParts__MainWindow*)self, (QDragLeaveEvent*)event);
}

void k_parts__mainwindow_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnDragLeaveEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_drop_event(void* self, void* event) {
    KParts__MainWindow_DropEvent((KParts__MainWindow*)self, (QDropEvent*)event);
}

void k_parts__mainwindow_qbase_drop_event(void* self, void* event) {
    KParts__MainWindow_QBaseDropEvent((KParts__MainWindow*)self, (QDropEvent*)event);
}

void k_parts__mainwindow_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnDropEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_show_event(void* self, void* event) {
    KParts__MainWindow_ShowEvent((KParts__MainWindow*)self, (QShowEvent*)event);
}

void k_parts__mainwindow_qbase_show_event(void* self, void* event) {
    KParts__MainWindow_QBaseShowEvent((KParts__MainWindow*)self, (QShowEvent*)event);
}

void k_parts__mainwindow_on_show_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnShowEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_hide_event(void* self, void* event) {
    KParts__MainWindow_HideEvent((KParts__MainWindow*)self, (QHideEvent*)event);
}

void k_parts__mainwindow_qbase_hide_event(void* self, void* event) {
    KParts__MainWindow_QBaseHideEvent((KParts__MainWindow*)self, (QHideEvent*)event);
}

void k_parts__mainwindow_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnHideEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

bool k_parts__mainwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KParts__MainWindow_NativeEvent((KParts__MainWindow*)self, qstring(eventType), message, result);
}

bool k_parts__mainwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KParts__MainWindow_QBaseNativeEvent((KParts__MainWindow*)self, qstring(eventType), message, result);
}

void k_parts__mainwindow_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KParts__MainWindow_OnNativeEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_change_event(void* self, void* param1) {
    KParts__MainWindow_ChangeEvent((KParts__MainWindow*)self, (QEvent*)param1);
}

void k_parts__mainwindow_qbase_change_event(void* self, void* param1) {
    KParts__MainWindow_QBaseChangeEvent((KParts__MainWindow*)self, (QEvent*)param1);
}

void k_parts__mainwindow_on_change_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnChangeEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

int32_t k_parts__mainwindow_metric(void* self, int32_t param1) {
    return KParts__MainWindow_Metric((KParts__MainWindow*)self, param1);
}

int32_t k_parts__mainwindow_qbase_metric(void* self, int32_t param1) {
    return KParts__MainWindow_QBaseMetric((KParts__MainWindow*)self, param1);
}

void k_parts__mainwindow_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KParts__MainWindow_OnMetric((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_init_painter(void* self, void* painter) {
    KParts__MainWindow_InitPainter((KParts__MainWindow*)self, (QPainter*)painter);
}

void k_parts__mainwindow_qbase_init_painter(void* self, void* painter) {
    KParts__MainWindow_QBaseInitPainter((KParts__MainWindow*)self, (QPainter*)painter);
}

void k_parts__mainwindow_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnInitPainter((KParts__MainWindow*)self, (intptr_t)callback);
}

QPaintDevice* k_parts__mainwindow_redirected(void* self, void* offset) {
    return KParts__MainWindow_Redirected((KParts__MainWindow*)self, (QPoint*)offset);
}

QPaintDevice* k_parts__mainwindow_qbase_redirected(void* self, void* offset) {
    return KParts__MainWindow_QBaseRedirected((KParts__MainWindow*)self, (QPoint*)offset);
}

void k_parts__mainwindow_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KParts__MainWindow_OnRedirected((KParts__MainWindow*)self, (intptr_t)callback);
}

QPainter* k_parts__mainwindow_shared_painter(void* self) {
    return KParts__MainWindow_SharedPainter((KParts__MainWindow*)self);
}

QPainter* k_parts__mainwindow_qbase_shared_painter(void* self) {
    return KParts__MainWindow_QBaseSharedPainter((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_shared_painter(void* self, QPainter* (*callback)()) {
    KParts__MainWindow_OnSharedPainter((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_input_method_event(void* self, void* param1) {
    KParts__MainWindow_InputMethodEvent((KParts__MainWindow*)self, (QInputMethodEvent*)param1);
}

void k_parts__mainwindow_qbase_input_method_event(void* self, void* param1) {
    KParts__MainWindow_QBaseInputMethodEvent((KParts__MainWindow*)self, (QInputMethodEvent*)param1);
}

void k_parts__mainwindow_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnInputMethodEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

QVariant* k_parts__mainwindow_input_method_query(void* self, int32_t param1) {
    return KParts__MainWindow_InputMethodQuery((KParts__MainWindow*)self, param1);
}

QVariant* k_parts__mainwindow_qbase_input_method_query(void* self, int32_t param1) {
    return KParts__MainWindow_QBaseInputMethodQuery((KParts__MainWindow*)self, param1);
}

void k_parts__mainwindow_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KParts__MainWindow_OnInputMethodQuery((KParts__MainWindow*)self, (intptr_t)callback);
}

bool k_parts__mainwindow_focus_next_prev_child(void* self, bool next) {
    return KParts__MainWindow_FocusNextPrevChild((KParts__MainWindow*)self, next);
}

bool k_parts__mainwindow_qbase_focus_next_prev_child(void* self, bool next) {
    return KParts__MainWindow_QBaseFocusNextPrevChild((KParts__MainWindow*)self, next);
}

void k_parts__mainwindow_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KParts__MainWindow_OnFocusNextPrevChild((KParts__MainWindow*)self, (intptr_t)callback);
}

bool k_parts__mainwindow_event_filter(void* self, void* watched, void* event) {
    return KParts__MainWindow_EventFilter((KParts__MainWindow*)self, (QObject*)watched, (QEvent*)event);
}

bool k_parts__mainwindow_qbase_event_filter(void* self, void* watched, void* event) {
    return KParts__MainWindow_QBaseEventFilter((KParts__MainWindow*)self, (QObject*)watched, (QEvent*)event);
}

void k_parts__mainwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KParts__MainWindow_OnEventFilter((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_timer_event(void* self, void* event) {
    KParts__MainWindow_TimerEvent((KParts__MainWindow*)self, (QTimerEvent*)event);
}

void k_parts__mainwindow_qbase_timer_event(void* self, void* event) {
    KParts__MainWindow_QBaseTimerEvent((KParts__MainWindow*)self, (QTimerEvent*)event);
}

void k_parts__mainwindow_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnTimerEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_child_event(void* self, void* event) {
    KParts__MainWindow_ChildEvent((KParts__MainWindow*)self, (QChildEvent*)event);
}

void k_parts__mainwindow_qbase_child_event(void* self, void* event) {
    KParts__MainWindow_QBaseChildEvent((KParts__MainWindow*)self, (QChildEvent*)event);
}

void k_parts__mainwindow_on_child_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnChildEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_custom_event(void* self, void* event) {
    KParts__MainWindow_CustomEvent((KParts__MainWindow*)self, (QEvent*)event);
}

void k_parts__mainwindow_qbase_custom_event(void* self, void* event) {
    KParts__MainWindow_QBaseCustomEvent((KParts__MainWindow*)self, (QEvent*)event);
}

void k_parts__mainwindow_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnCustomEvent((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_connect_notify(void* self, void* signal) {
    KParts__MainWindow_ConnectNotify((KParts__MainWindow*)self, (QMetaMethod*)signal);
}

void k_parts__mainwindow_qbase_connect_notify(void* self, void* signal) {
    KParts__MainWindow_QBaseConnectNotify((KParts__MainWindow*)self, (QMetaMethod*)signal);
}

void k_parts__mainwindow_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnConnectNotify((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_disconnect_notify(void* self, void* signal) {
    KParts__MainWindow_DisconnectNotify((KParts__MainWindow*)self, (QMetaMethod*)signal);
}

void k_parts__mainwindow_qbase_disconnect_notify(void* self, void* signal) {
    KParts__MainWindow_QBaseDisconnectNotify((KParts__MainWindow*)self, (QMetaMethod*)signal);
}

void k_parts__mainwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnDisconnectNotify((KParts__MainWindow*)self, (intptr_t)callback);
}

const char** k_parts__mainwindow_container_tags(void* self) {
    libqt_list _arr = KParts__MainWindow_ContainerTags((KParts__MainWindow*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__mainwindow_container_tags\n");
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

const char** k_parts__mainwindow_qbase_container_tags(void* self) {
    libqt_list _arr = KParts__MainWindow_QBaseContainerTags((KParts__MainWindow*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__mainwindow_container_tags\n");
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

void k_parts__mainwindow_on_container_tags(void* self, const char** (*callback)()) {
    KParts__MainWindow_OnContainerTags((KParts__MainWindow*)self, (intptr_t)callback);
}

QWidget* k_parts__mainwindow_create_container(void* self, void* parent, int index, void* element, void** containerAction) {
    return KParts__MainWindow_CreateContainer((KParts__MainWindow*)self, (QWidget*)parent, index, (QDomElement*)element, (QAction**)containerAction);
}

QWidget* k_parts__mainwindow_qbase_create_container(void* self, void* parent, int index, void* element, void** containerAction) {
    return KParts__MainWindow_QBaseCreateContainer((KParts__MainWindow*)self, (QWidget*)parent, index, (QDomElement*)element, (QAction**)containerAction);
}

void k_parts__mainwindow_on_create_container(void* self, QWidget* (*callback)(void*, void*, int, void*, void**)) {
    KParts__MainWindow_OnCreateContainer((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_remove_container(void* self, void* container, void* parent, void* element, void* containerAction) {
    KParts__MainWindow_RemoveContainer((KParts__MainWindow*)self, (QWidget*)container, (QWidget*)parent, (QDomElement*)element, (QAction*)containerAction);
}

void k_parts__mainwindow_qbase_remove_container(void* self, void* container, void* parent, void* element, void* containerAction) {
    KParts__MainWindow_QBaseRemoveContainer((KParts__MainWindow*)self, (QWidget*)container, (QWidget*)parent, (QDomElement*)element, (QAction*)containerAction);
}

void k_parts__mainwindow_on_remove_container(void* self, void (*callback)(void*, void*, void*, void*, void*)) {
    KParts__MainWindow_OnRemoveContainer((KParts__MainWindow*)self, (intptr_t)callback);
}

const char** k_parts__mainwindow_custom_tags(void* self) {
    libqt_list _arr = KParts__MainWindow_CustomTags((KParts__MainWindow*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__mainwindow_custom_tags\n");
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

const char** k_parts__mainwindow_qbase_custom_tags(void* self) {
    libqt_list _arr = KParts__MainWindow_QBaseCustomTags((KParts__MainWindow*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__mainwindow_custom_tags\n");
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

void k_parts__mainwindow_on_custom_tags(void* self, const char** (*callback)()) {
    KParts__MainWindow_OnCustomTags((KParts__MainWindow*)self, (intptr_t)callback);
}

QAction* k_parts__mainwindow_create_custom_element(void* self, void* parent, int index, void* element) {
    return KParts__MainWindow_CreateCustomElement((KParts__MainWindow*)self, (QWidget*)parent, index, (QDomElement*)element);
}

QAction* k_parts__mainwindow_qbase_create_custom_element(void* self, void* parent, int index, void* element) {
    return KParts__MainWindow_QBaseCreateCustomElement((KParts__MainWindow*)self, (QWidget*)parent, index, (QDomElement*)element);
}

void k_parts__mainwindow_on_create_custom_element(void* self, QAction* (*callback)(void*, void*, int, void*)) {
    KParts__MainWindow_OnCreateCustomElement((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_finalize_g_u_i(void* self, void* client) {
    KParts__MainWindow_FinalizeGUI((KParts__MainWindow*)self, (KXMLGUIClient*)client);
}

void k_parts__mainwindow_qbase_finalize_g_u_i(void* self, void* client) {
    KParts__MainWindow_QBaseFinalizeGUI((KParts__MainWindow*)self, (KXMLGUIClient*)client);
}

void k_parts__mainwindow_on_finalize_g_u_i(void* self, void (*callback)(void*, void*)) {
    KParts__MainWindow_OnFinalizeGUI((KParts__MainWindow*)self, (intptr_t)callback);
}

QAction* k_parts__mainwindow_action2(void* self, void* element) {
    return KParts__MainWindow_Action2((KParts__MainWindow*)self, (QDomElement*)element);
}

QAction* k_parts__mainwindow_qbase_action2(void* self, void* element) {
    return KParts__MainWindow_QBaseAction2((KParts__MainWindow*)self, (QDomElement*)element);
}

void k_parts__mainwindow_on_action2(void* self, QAction* (*callback)(void*, void*)) {
    KParts__MainWindow_OnAction2((KParts__MainWindow*)self, (intptr_t)callback);
}

KActionCollection* k_parts__mainwindow_action_collection(void* self) {
    return KParts__MainWindow_ActionCollection((KParts__MainWindow*)self);
}

KActionCollection* k_parts__mainwindow_qbase_action_collection(void* self) {
    return KParts__MainWindow_QBaseActionCollection((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_action_collection(void* self, KActionCollection* (*callback)()) {
    KParts__MainWindow_OnActionCollection((KParts__MainWindow*)self, (intptr_t)callback);
}

const char* k_parts__mainwindow_component_name(void* self) {
    libqt_string _str = KParts__MainWindow_ComponentName((KParts__MainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__mainwindow_qbase_component_name(void* self) {
    libqt_string _str = KParts__MainWindow_QBaseComponentName((KParts__MainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_on_component_name(void* self, const char* (*callback)()) {
    KParts__MainWindow_OnComponentName((KParts__MainWindow*)self, (intptr_t)callback);
}

QDomDocument* k_parts__mainwindow_dom_document(void* self) {
    return KParts__MainWindow_DomDocument((KParts__MainWindow*)self);
}

QDomDocument* k_parts__mainwindow_qbase_dom_document(void* self) {
    return KParts__MainWindow_QBaseDomDocument((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_dom_document(void* self, QDomDocument* (*callback)()) {
    KParts__MainWindow_OnDomDocument((KParts__MainWindow*)self, (intptr_t)callback);
}

const char* k_parts__mainwindow_xml_file(void* self) {
    libqt_string _str = KParts__MainWindow_XmlFile((KParts__MainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__mainwindow_qbase_xml_file(void* self) {
    libqt_string _str = KParts__MainWindow_QBaseXmlFile((KParts__MainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_on_xml_file(void* self, const char* (*callback)()) {
    KParts__MainWindow_OnXmlFile((KParts__MainWindow*)self, (intptr_t)callback);
}

const char* k_parts__mainwindow_local_x_m_l_file(void* self) {
    libqt_string _str = KParts__MainWindow_LocalXMLFile((KParts__MainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__mainwindow_qbase_local_x_m_l_file(void* self) {
    libqt_string _str = KParts__MainWindow_QBaseLocalXMLFile((KParts__MainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_on_local_x_m_l_file(void* self, const char* (*callback)()) {
    KParts__MainWindow_OnLocalXMLFile((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_set_component_name(void* self, const char* componentName, const char* componentDisplayName) {
    KParts__MainWindow_SetComponentName((KParts__MainWindow*)self, qstring(componentName), qstring(componentDisplayName));
}

void k_parts__mainwindow_qbase_set_component_name(void* self, const char* componentName, const char* componentDisplayName) {
    KParts__MainWindow_QBaseSetComponentName((KParts__MainWindow*)self, qstring(componentName), qstring(componentDisplayName));
}

void k_parts__mainwindow_on_set_component_name(void* self, void (*callback)(void*, const char*, const char*)) {
    KParts__MainWindow_OnSetComponentName((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc) {
    KParts__MainWindow_SetXMLFile((KParts__MainWindow*)self, qstring(file), merge, setXMLDoc);
}

void k_parts__mainwindow_qbase_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc) {
    KParts__MainWindow_QBaseSetXMLFile((KParts__MainWindow*)self, qstring(file), merge, setXMLDoc);
}

void k_parts__mainwindow_on_set_x_m_l_file(void* self, void (*callback)(void*, const char*, bool, bool)) {
    KParts__MainWindow_OnSetXMLFile((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_set_local_x_m_l_file(void* self, const char* file) {
    KParts__MainWindow_SetLocalXMLFile((KParts__MainWindow*)self, qstring(file));
}

void k_parts__mainwindow_qbase_set_local_x_m_l_file(void* self, const char* file) {
    KParts__MainWindow_QBaseSetLocalXMLFile((KParts__MainWindow*)self, qstring(file));
}

void k_parts__mainwindow_on_set_local_x_m_l_file(void* self, void (*callback)(void*, const char*)) {
    KParts__MainWindow_OnSetLocalXMLFile((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_set_x_m_l(void* self, const char* document, bool merge) {
    KParts__MainWindow_SetXML((KParts__MainWindow*)self, qstring(document), merge);
}

void k_parts__mainwindow_qbase_set_x_m_l(void* self, const char* document, bool merge) {
    KParts__MainWindow_QBaseSetXML((KParts__MainWindow*)self, qstring(document), merge);
}

void k_parts__mainwindow_on_set_x_m_l(void* self, void (*callback)(void*, const char*, bool)) {
    KParts__MainWindow_OnSetXML((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_set_d_o_m_document(void* self, void* document, bool merge) {
    KParts__MainWindow_SetDOMDocument((KParts__MainWindow*)self, (QDomDocument*)document, merge);
}

void k_parts__mainwindow_qbase_set_d_o_m_document(void* self, void* document, bool merge) {
    KParts__MainWindow_QBaseSetDOMDocument((KParts__MainWindow*)self, (QDomDocument*)document, merge);
}

void k_parts__mainwindow_on_set_d_o_m_document(void* self, void (*callback)(void*, void*, bool)) {
    KParts__MainWindow_OnSetDOMDocument((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_state_changed(void* self, const char* newstate, int32_t reverse) {
    KParts__MainWindow_StateChanged((KParts__MainWindow*)self, qstring(newstate), reverse);
}

void k_parts__mainwindow_qbase_state_changed(void* self, const char* newstate, int32_t reverse) {
    KParts__MainWindow_QBaseStateChanged((KParts__MainWindow*)self, qstring(newstate), reverse);
}

void k_parts__mainwindow_on_state_changed(void* self, void (*callback)(void*, const char*, int32_t)) {
    KParts__MainWindow_OnStateChanged((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_check_ambiguous_shortcuts(void* self) {
    KParts__MainWindow_CheckAmbiguousShortcuts((KParts__MainWindow*)self);
}

void k_parts__mainwindow_qbase_check_ambiguous_shortcuts(void* self) {
    KParts__MainWindow_QBaseCheckAmbiguousShortcuts((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_check_ambiguous_shortcuts(void* self, void (*callback)()) {
    KParts__MainWindow_OnCheckAmbiguousShortcuts((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_save_properties_internal(void* self, void* param1, int param2) {
    KParts__MainWindow_SavePropertiesInternal((KParts__MainWindow*)self, (KConfig*)param1, param2);
}

void k_parts__mainwindow_qbase_save_properties_internal(void* self, void* param1, int param2) {
    KParts__MainWindow_QBaseSavePropertiesInternal((KParts__MainWindow*)self, (KConfig*)param1, param2);
}

void k_parts__mainwindow_on_save_properties_internal(void* self, void (*callback)(void*, void*, int)) {
    KParts__MainWindow_OnSavePropertiesInternal((KParts__MainWindow*)self, (intptr_t)callback);
}

bool k_parts__mainwindow_read_properties_internal(void* self, void* param1, int param2) {
    return KParts__MainWindow_ReadPropertiesInternal((KParts__MainWindow*)self, (KConfig*)param1, param2);
}

bool k_parts__mainwindow_qbase_read_properties_internal(void* self, void* param1, int param2) {
    return KParts__MainWindow_QBaseReadPropertiesInternal((KParts__MainWindow*)self, (KConfig*)param1, param2);
}

void k_parts__mainwindow_on_read_properties_internal(void* self, bool (*callback)(void*, void*, int)) {
    KParts__MainWindow_OnReadPropertiesInternal((KParts__MainWindow*)self, (intptr_t)callback);
}

bool k_parts__mainwindow_settings_dirty(void* self) {
    return KParts__MainWindow_SettingsDirty((KParts__MainWindow*)self);
}

bool k_parts__mainwindow_qbase_settings_dirty(void* self) {
    return KParts__MainWindow_QBaseSettingsDirty((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_settings_dirty(void* self, bool (*callback)()) {
    KParts__MainWindow_OnSettingsDirty((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_save_auto_save_settings(void* self) {
    KParts__MainWindow_SaveAutoSaveSettings((KParts__MainWindow*)self);
}

void k_parts__mainwindow_qbase_save_auto_save_settings(void* self) {
    KParts__MainWindow_QBaseSaveAutoSaveSettings((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_save_auto_save_settings(void* self, void (*callback)()) {
    KParts__MainWindow_OnSaveAutoSaveSettings((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_update_micro_focus(void* self) {
    KParts__MainWindow_UpdateMicroFocus((KParts__MainWindow*)self);
}

void k_parts__mainwindow_qbase_update_micro_focus(void* self) {
    KParts__MainWindow_QBaseUpdateMicroFocus((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_update_micro_focus(void* self, void (*callback)()) {
    KParts__MainWindow_OnUpdateMicroFocus((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_create(void* self) {
    KParts__MainWindow_Create((KParts__MainWindow*)self);
}

void k_parts__mainwindow_qbase_create(void* self) {
    KParts__MainWindow_QBaseCreate((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_create(void* self, void (*callback)()) {
    KParts__MainWindow_OnCreate((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_destroy(void* self) {
    KParts__MainWindow_Destroy((KParts__MainWindow*)self);
}

void k_parts__mainwindow_qbase_destroy(void* self) {
    KParts__MainWindow_QBaseDestroy((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_destroy(void* self, void (*callback)()) {
    KParts__MainWindow_OnDestroy((KParts__MainWindow*)self, (intptr_t)callback);
}

bool k_parts__mainwindow_focus_next_child(void* self) {
    return KParts__MainWindow_FocusNextChild((KParts__MainWindow*)self);
}

bool k_parts__mainwindow_qbase_focus_next_child(void* self) {
    return KParts__MainWindow_QBaseFocusNextChild((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_focus_next_child(void* self, bool (*callback)()) {
    KParts__MainWindow_OnFocusNextChild((KParts__MainWindow*)self, (intptr_t)callback);
}

bool k_parts__mainwindow_focus_previous_child(void* self) {
    return KParts__MainWindow_FocusPreviousChild((KParts__MainWindow*)self);
}

bool k_parts__mainwindow_qbase_focus_previous_child(void* self) {
    return KParts__MainWindow_QBaseFocusPreviousChild((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_focus_previous_child(void* self, bool (*callback)()) {
    KParts__MainWindow_OnFocusPreviousChild((KParts__MainWindow*)self, (intptr_t)callback);
}

QObject* k_parts__mainwindow_sender(void* self) {
    return KParts__MainWindow_Sender((KParts__MainWindow*)self);
}

QObject* k_parts__mainwindow_qbase_sender(void* self) {
    return KParts__MainWindow_QBaseSender((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_sender(void* self, QObject* (*callback)()) {
    KParts__MainWindow_OnSender((KParts__MainWindow*)self, (intptr_t)callback);
}

int32_t k_parts__mainwindow_sender_signal_index(void* self) {
    return KParts__MainWindow_SenderSignalIndex((KParts__MainWindow*)self);
}

int32_t k_parts__mainwindow_qbase_sender_signal_index(void* self) {
    return KParts__MainWindow_QBaseSenderSignalIndex((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KParts__MainWindow_OnSenderSignalIndex((KParts__MainWindow*)self, (intptr_t)callback);
}

int32_t k_parts__mainwindow_receivers(void* self, const char* signal) {
    return KParts__MainWindow_Receivers((KParts__MainWindow*)self, signal);
}

int32_t k_parts__mainwindow_qbase_receivers(void* self, const char* signal) {
    return KParts__MainWindow_QBaseReceivers((KParts__MainWindow*)self, signal);
}

void k_parts__mainwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KParts__MainWindow_OnReceivers((KParts__MainWindow*)self, (intptr_t)callback);
}

bool k_parts__mainwindow_is_signal_connected(void* self, void* signal) {
    return KParts__MainWindow_IsSignalConnected((KParts__MainWindow*)self, (QMetaMethod*)signal);
}

bool k_parts__mainwindow_qbase_is_signal_connected(void* self, void* signal) {
    return KParts__MainWindow_QBaseIsSignalConnected((KParts__MainWindow*)self, (QMetaMethod*)signal);
}

void k_parts__mainwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KParts__MainWindow_OnIsSignalConnected((KParts__MainWindow*)self, (intptr_t)callback);
}

double k_parts__mainwindow_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KParts__MainWindow_GetDecodedMetricF((KParts__MainWindow*)self, metricA, metricB);
}

double k_parts__mainwindow_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KParts__MainWindow_QBaseGetDecodedMetricF((KParts__MainWindow*)self, metricA, metricB);
}

void k_parts__mainwindow_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KParts__MainWindow_OnGetDecodedMetricF((KParts__MainWindow*)self, (intptr_t)callback);
}

const char* k_parts__mainwindow_standards_xml_file_location(void* self) {
    libqt_string _str = KParts__MainWindow_StandardsXmlFileLocation((KParts__MainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__mainwindow_qbase_standards_xml_file_location(void* self) {
    libqt_string _str = KParts__MainWindow_QBaseStandardsXmlFileLocation((KParts__MainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__mainwindow_on_standards_xml_file_location(void* self, const char* (*callback)()) {
    KParts__MainWindow_OnStandardsXmlFileLocation((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_load_standards_xml_file(void* self) {
    KParts__MainWindow_LoadStandardsXmlFile((KParts__MainWindow*)self);
}

void k_parts__mainwindow_qbase_load_standards_xml_file(void* self) {
    KParts__MainWindow_QBaseLoadStandardsXmlFile((KParts__MainWindow*)self);
}

void k_parts__mainwindow_on_load_standards_xml_file(void* self, void (*callback)()) {
    KParts__MainWindow_OnLoadStandardsXmlFile((KParts__MainWindow*)self, (intptr_t)callback);
}

void k_parts__mainwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_parts__mainwindow_delete(void* self) {
    KParts__MainWindow_Delete((KParts__MainWindow*)(self));
}

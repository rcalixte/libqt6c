#include "libkactioncollection.hpp"
#include "../extras-kconfig/libkconfig.hpp"
#include "../extras-kconfig/libkconfiggroup.hpp"
#include "libkmainwindow.hpp"
#include "libkxmlguibuilder.hpp"
#include "libkxmlguiclient.hpp"
#include "libkxmlguifactory.hpp"
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
#include "libkxmlguiwindow.hpp"
#include "libkxmlguiwindow.h"

KXmlGuiWindow* k_xmlguiwindow_new(void* parent) {
    return KXmlGuiWindow_new((QWidget*)parent);
}

KXmlGuiWindow* k_xmlguiwindow_new2() {
    return KXmlGuiWindow_new2();
}

KXmlGuiWindow* k_xmlguiwindow_new3(void* parent, int64_t flags) {
    return KXmlGuiWindow_new3((QWidget*)parent, flags);
}

const QMetaObject* k_xmlguiwindow_meta_object(void* self) {
    return KXmlGuiWindow_MetaObject((KXmlGuiWindow*)self);
}

void* k_xmlguiwindow_metacast(void* self, const char* param1) {
    return KXmlGuiWindow_Metacast((KXmlGuiWindow*)self, param1);
}

int32_t k_xmlguiwindow_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KXmlGuiWindow_Metacall((KXmlGuiWindow*)self, param1, param2, param3);
}

void k_xmlguiwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KXmlGuiWindow_OnMetacall((KXmlGuiWindow*)self, (intptr_t)callback);
}

int32_t k_xmlguiwindow_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KXmlGuiWindow_QBaseMetacall((KXmlGuiWindow*)self, param1, param2, param3);
}

const char* k_xmlguiwindow_tr(const char* s) {
    libqt_string _str = KXmlGuiWindow_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_set_help_menu_enabled(void* self) {
    KXmlGuiWindow_SetHelpMenuEnabled((KXmlGuiWindow*)self);
}

bool k_xmlguiwindow_is_help_menu_enabled(void* self) {
    return KXmlGuiWindow_IsHelpMenuEnabled((KXmlGuiWindow*)self);
}

KXMLGUIFactory* k_xmlguiwindow_gui_factory(void* self) {
    return KXmlGuiWindow_GuiFactory((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_gui_factory(void* self, KXMLGUIFactory* (*callback)()) {
    KXmlGuiWindow_OnGuiFactory((KXmlGuiWindow*)self, (intptr_t)callback);
}

KXMLGUIFactory* k_xmlguiwindow_qbase_gui_factory(void* self) {
    return KXmlGuiWindow_QBaseGuiFactory((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_create_g_u_i(void* self) {
    KXmlGuiWindow_CreateGUI((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_set_standard_tool_bar_menu_enabled(void* self, bool showToolBarMenu) {
    KXmlGuiWindow_SetStandardToolBarMenuEnabled((KXmlGuiWindow*)self, showToolBarMenu);
}

bool k_xmlguiwindow_is_standard_tool_bar_menu_enabled(void* self) {
    return KXmlGuiWindow_IsStandardToolBarMenuEnabled((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_create_standard_status_bar_action(void* self) {
    KXmlGuiWindow_CreateStandardStatusBarAction((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_setup_g_u_i(void* self) {
    KXmlGuiWindow_SetupGUI((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_setup_g_u_i2(void* self, void* defaultSize) {
    KXmlGuiWindow_SetupGUI2((KXmlGuiWindow*)self, (QSize*)defaultSize);
}

QAction* k_xmlguiwindow_tool_bar_menu_action(void* self) {
    return KXmlGuiWindow_ToolBarMenuAction((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_setup_toolbar_menu_actions(void* self) {
    KXmlGuiWindow_SetupToolbarMenuActions((KXmlGuiWindow*)self);
}

const char** k_xmlguiwindow_tool_bar_names(void* self) {
    libqt_list _arr = KXmlGuiWindow_ToolBarNames((KXmlGuiWindow*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_xmlguiwindow_tool_bar_names");
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

void k_xmlguiwindow_finalize_g_u_i(void* self, bool force) {
    KXmlGuiWindow_FinalizeGUI((KXmlGuiWindow*)self, force);
}

void k_xmlguiwindow_apply_main_window_settings(void* self, void* config) {
    KXmlGuiWindow_ApplyMainWindowSettings((KXmlGuiWindow*)self, (KConfigGroup*)config);
}

void k_xmlguiwindow_on_apply_main_window_settings(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnApplyMainWindowSettings((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_qbase_apply_main_window_settings(void* self, void* config) {
    KXmlGuiWindow_QBaseApplyMainWindowSettings((KXmlGuiWindow*)self, (KConfigGroup*)config);
}

void k_xmlguiwindow_set_command_bar_enabled(void* self, bool showCommandBar) {
    KXmlGuiWindow_SetCommandBarEnabled((KXmlGuiWindow*)self, showCommandBar);
}

bool k_xmlguiwindow_is_command_bar_enabled(void* self) {
    return KXmlGuiWindow_IsCommandBarEnabled((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_configure_toolbars(void* self) {
    KXmlGuiWindow_ConfigureToolbars((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_configure_toolbars(void* self, void (*callback)()) {
    KXmlGuiWindow_OnConfigureToolbars((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_qbase_configure_toolbars(void* self) {
    KXmlGuiWindow_QBaseConfigureToolbars((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_slot_state_changed(void* self, const char* newstate) {
    KXmlGuiWindow_SlotStateChanged((KXmlGuiWindow*)self, qstring(newstate));
}

void k_xmlguiwindow_on_slot_state_changed(void* self, void (*callback)(void*, const char*)) {
    KXmlGuiWindow_OnSlotStateChanged((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_qbase_slot_state_changed(void* self, const char* newstate) {
    KXmlGuiWindow_QBaseSlotStateChanged((KXmlGuiWindow*)self, qstring(newstate));
}

void k_xmlguiwindow_slot_state_changed2(void* self, const char* newstate, bool reverse) {
    KXmlGuiWindow_SlotStateChanged2((KXmlGuiWindow*)self, qstring(newstate), reverse);
}

bool k_xmlguiwindow_is_tool_bar_visible(void* self, const char* name) {
    return KXmlGuiWindow_IsToolBarVisible((KXmlGuiWindow*)self, qstring(name));
}

void k_xmlguiwindow_set_tool_bar_visible(void* self, const char* name, bool visible) {
    KXmlGuiWindow_SetToolBarVisible((KXmlGuiWindow*)self, qstring(name), visible);
}

bool k_xmlguiwindow_event(void* self, void* event) {
    return KXmlGuiWindow_Event((KXmlGuiWindow*)self, (QEvent*)event);
}

void k_xmlguiwindow_on_event(void* self, bool (*callback)(void*, void*)) {
    KXmlGuiWindow_OnEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

bool k_xmlguiwindow_qbase_event(void* self, void* event) {
    return KXmlGuiWindow_QBaseEvent((KXmlGuiWindow*)self, (QEvent*)event);
}

void k_xmlguiwindow_check_ambiguous_shortcuts(void* self) {
    KXmlGuiWindow_CheckAmbiguousShortcuts((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_check_ambiguous_shortcuts(void* self, void (*callback)()) {
    KXmlGuiWindow_OnCheckAmbiguousShortcuts((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_qbase_check_ambiguous_shortcuts(void* self) {
    KXmlGuiWindow_QBaseCheckAmbiguousShortcuts((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_save_new_toolbar_config(void* self) {
    KXmlGuiWindow_SaveNewToolbarConfig((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_save_new_toolbar_config(void* self, void (*callback)()) {
    KXmlGuiWindow_OnSaveNewToolbarConfig((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_qbase_save_new_toolbar_config(void* self) {
    KXmlGuiWindow_QBaseSaveNewToolbarConfig((KXmlGuiWindow*)self);
}

const char* k_xmlguiwindow_tr2(const char* s, const char* c) {
    libqt_string _str = KXmlGuiWindow_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xmlguiwindow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KXmlGuiWindow_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_set_help_menu_enabled1(void* self, bool showHelpMenu) {
    KXmlGuiWindow_SetHelpMenuEnabled1((KXmlGuiWindow*)self, showHelpMenu);
}

void k_xmlguiwindow_create_g_u_i1(void* self, const char* xmlfile) {
    KXmlGuiWindow_CreateGUI1((KXmlGuiWindow*)self, qstring(xmlfile));
}

void k_xmlguiwindow_setup_g_u_i1(void* self, int32_t options) {
    KXmlGuiWindow_SetupGUI1((KXmlGuiWindow*)self, options);
}

void k_xmlguiwindow_setup_g_u_i22(void* self, int32_t options, const char* xmlfile) {
    KXmlGuiWindow_SetupGUI22((KXmlGuiWindow*)self, options, qstring(xmlfile));
}

void k_xmlguiwindow_setup_g_u_i23(void* self, void* defaultSize, int32_t options) {
    KXmlGuiWindow_SetupGUI23((KXmlGuiWindow*)self, (QSize*)defaultSize, options);
}

void k_xmlguiwindow_setup_g_u_i3(void* self, void* defaultSize, int32_t options, const char* xmlfile) {
    KXmlGuiWindow_SetupGUI3((KXmlGuiWindow*)self, (QSize*)defaultSize, options, qstring(xmlfile));
}

bool k_xmlguiwindow_can_be_restored(int numberOfInstances) {
    return KMainWindow_CanBeRestored(numberOfInstances);
}

const char* k_xmlguiwindow_class_name_of_toplevel(int instanceNumber) {
    libqt_string _str = KMainWindow_ClassNameOfToplevel(instanceNumber);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_xmlguiwindow_restore(void* self, int numberOfInstances) {
    return KMainWindow_Restore((KMainWindow*)self, numberOfInstances);
}

bool k_xmlguiwindow_has_menu_bar(void* self) {
    return KMainWindow_HasMenuBar((KMainWindow*)self);
}

libqt_list /* of KMainWindow* */ k_xmlguiwindow_member_list() {
    libqt_list _arr = KMainWindow_MemberList();
    return _arr;
}

KToolBar* k_xmlguiwindow_tool_bar(void* self) {
    return KMainWindow_ToolBar((KMainWindow*)self);
}

libqt_list /* of KToolBar* */ k_xmlguiwindow_tool_bars(void* self) {
    libqt_list _arr = KMainWindow_ToolBars((KMainWindow*)self);
    return _arr;
}

void k_xmlguiwindow_set_auto_save_settings(void* self) {
    KMainWindow_SetAutoSaveSettings((KMainWindow*)self);
}

void k_xmlguiwindow_set_auto_save_settings2(void* self, void* group) {
    KMainWindow_SetAutoSaveSettings2((KMainWindow*)self, (KConfigGroup*)group);
}

void k_xmlguiwindow_reset_auto_save_settings(void* self) {
    KMainWindow_ResetAutoSaveSettings((KMainWindow*)self);
}

bool k_xmlguiwindow_auto_save_settings(void* self) {
    return KMainWindow_AutoSaveSettings((KMainWindow*)self);
}

const char* k_xmlguiwindow_auto_save_group(void* self) {
    libqt_string _str = KMainWindow_AutoSaveGroup((KMainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KConfigGroup* k_xmlguiwindow_auto_save_config_group(void* self) {
    return KMainWindow_AutoSaveConfigGroup((KMainWindow*)self);
}

void k_xmlguiwindow_set_state_config_group(void* self, const char* configGroup) {
    KMainWindow_SetStateConfigGroup((KMainWindow*)self, qstring(configGroup));
}

KConfigGroup* k_xmlguiwindow_state_config_group(void* self) {
    return KMainWindow_StateConfigGroup((KMainWindow*)self);
}

void k_xmlguiwindow_save_main_window_settings(void* self, void* config) {
    KMainWindow_SaveMainWindowSettings((KMainWindow*)self, (KConfigGroup*)config);
}

const char* k_xmlguiwindow_dbus_name(void* self) {
    libqt_string _str = KMainWindow_DbusName((KMainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_set_caption2(void* self, const char* caption, bool modified) {
    KMainWindow_SetCaption2((KMainWindow*)self, qstring(caption), modified);
}

void k_xmlguiwindow_on_set_caption2(void* self, void (*callback)(void*, const char*, bool)) {
    KMainWindow_OnSetCaption2((KMainWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_qbase_set_caption2(void* self, const char* caption, bool modified) {
    KMainWindow_QBaseSetCaption2((KMainWindow*)self, qstring(caption), modified);
}

void k_xmlguiwindow_app_help_activated(void* self) {
    KMainWindow_AppHelpActivated((KMainWindow*)self);
}

void k_xmlguiwindow_set_settings_dirty(void* self) {
    KMainWindow_SetSettingsDirty((KMainWindow*)self);
}

bool k_xmlguiwindow_restore2(void* self, int numberOfInstances, bool show) {
    return KMainWindow_Restore2((KMainWindow*)self, numberOfInstances, show);
}

KToolBar* k_xmlguiwindow_tool_bar1(void* self, const char* name) {
    return KMainWindow_ToolBar1((KMainWindow*)self, qstring(name));
}

void k_xmlguiwindow_set_auto_save_settings1(void* self, const char* groupName) {
    KMainWindow_SetAutoSaveSettings1((KMainWindow*)self, qstring(groupName));
}

void k_xmlguiwindow_set_auto_save_settings22(void* self, const char* groupName, bool saveWindowSize) {
    KMainWindow_SetAutoSaveSettings22((KMainWindow*)self, qstring(groupName), saveWindowSize);
}

void k_xmlguiwindow_set_auto_save_settings23(void* self, void* group, bool saveWindowSize) {
    KMainWindow_SetAutoSaveSettings23((KMainWindow*)self, (KConfigGroup*)group, saveWindowSize);
}

QSize* k_xmlguiwindow_icon_size(void* self) {
    return QMainWindow_IconSize((QMainWindow*)self);
}

void k_xmlguiwindow_set_icon_size(void* self, void* iconSize) {
    QMainWindow_SetIconSize((QMainWindow*)self, (QSize*)iconSize);
}

int32_t k_xmlguiwindow_tool_button_style(void* self) {
    return QMainWindow_ToolButtonStyle((QMainWindow*)self);
}

void k_xmlguiwindow_set_tool_button_style(void* self, int32_t toolButtonStyle) {
    QMainWindow_SetToolButtonStyle((QMainWindow*)self, toolButtonStyle);
}

bool k_xmlguiwindow_is_animated(void* self) {
    return QMainWindow_IsAnimated((QMainWindow*)self);
}

bool k_xmlguiwindow_is_dock_nesting_enabled(void* self) {
    return QMainWindow_IsDockNestingEnabled((QMainWindow*)self);
}

bool k_xmlguiwindow_document_mode(void* self) {
    return QMainWindow_DocumentMode((QMainWindow*)self);
}

void k_xmlguiwindow_set_document_mode(void* self, bool enabled) {
    QMainWindow_SetDocumentMode((QMainWindow*)self, enabled);
}

int32_t k_xmlguiwindow_tab_shape(void* self) {
    return QMainWindow_TabShape((QMainWindow*)self);
}

void k_xmlguiwindow_set_tab_shape(void* self, int32_t tabShape) {
    QMainWindow_SetTabShape((QMainWindow*)self, tabShape);
}

int32_t k_xmlguiwindow_tab_position(void* self, int32_t area) {
    return QMainWindow_TabPosition((QMainWindow*)self, area);
}

void k_xmlguiwindow_set_tab_position(void* self, int32_t areas, int32_t tabPosition) {
    QMainWindow_SetTabPosition((QMainWindow*)self, areas, tabPosition);
}

void k_xmlguiwindow_set_dock_options(void* self, int32_t options) {
    QMainWindow_SetDockOptions((QMainWindow*)self, options);
}

int32_t k_xmlguiwindow_dock_options(void* self) {
    return QMainWindow_DockOptions((QMainWindow*)self);
}

bool k_xmlguiwindow_is_separator(void* self, void* pos) {
    return QMainWindow_IsSeparator((QMainWindow*)self, (QPoint*)pos);
}

QMenuBar* k_xmlguiwindow_menu_bar(void* self) {
    return QMainWindow_MenuBar((QMainWindow*)self);
}

void k_xmlguiwindow_set_menu_bar(void* self, void* menubar) {
    QMainWindow_SetMenuBar((QMainWindow*)self, (QMenuBar*)menubar);
}

QWidget* k_xmlguiwindow_menu_widget(void* self) {
    return QMainWindow_MenuWidget((QMainWindow*)self);
}

void k_xmlguiwindow_set_menu_widget(void* self, void* menubar) {
    QMainWindow_SetMenuWidget((QMainWindow*)self, (QWidget*)menubar);
}

QStatusBar* k_xmlguiwindow_status_bar(void* self) {
    return QMainWindow_StatusBar((QMainWindow*)self);
}

void k_xmlguiwindow_set_status_bar(void* self, void* statusbar) {
    QMainWindow_SetStatusBar((QMainWindow*)self, (QStatusBar*)statusbar);
}

QWidget* k_xmlguiwindow_central_widget(void* self) {
    return QMainWindow_CentralWidget((QMainWindow*)self);
}

void k_xmlguiwindow_set_central_widget(void* self, void* widget) {
    QMainWindow_SetCentralWidget((QMainWindow*)self, (QWidget*)widget);
}

QWidget* k_xmlguiwindow_take_central_widget(void* self) {
    return QMainWindow_TakeCentralWidget((QMainWindow*)self);
}

void k_xmlguiwindow_set_corner(void* self, int32_t corner, int32_t area) {
    QMainWindow_SetCorner((QMainWindow*)self, corner, area);
}

int32_t k_xmlguiwindow_corner(void* self, int32_t corner) {
    return QMainWindow_Corner((QMainWindow*)self, corner);
}

void k_xmlguiwindow_add_tool_bar_break(void* self) {
    QMainWindow_AddToolBarBreak((QMainWindow*)self);
}

void k_xmlguiwindow_insert_tool_bar_break(void* self, void* before) {
    QMainWindow_InsertToolBarBreak((QMainWindow*)self, (QToolBar*)before);
}

void k_xmlguiwindow_add_tool_bar(void* self, int32_t area, void* toolbar) {
    QMainWindow_AddToolBar((QMainWindow*)self, area, (QToolBar*)toolbar);
}

void k_xmlguiwindow_add_tool_bar2(void* self, void* toolbar) {
    QMainWindow_AddToolBar2((QMainWindow*)self, (QToolBar*)toolbar);
}

QToolBar* k_xmlguiwindow_add_tool_bar3(void* self, const char* title) {
    return QMainWindow_AddToolBar3((QMainWindow*)self, qstring(title));
}

void k_xmlguiwindow_insert_tool_bar(void* self, void* before, void* toolbar) {
    QMainWindow_InsertToolBar((QMainWindow*)self, (QToolBar*)before, (QToolBar*)toolbar);
}

void k_xmlguiwindow_remove_tool_bar(void* self, void* toolbar) {
    QMainWindow_RemoveToolBar((QMainWindow*)self, (QToolBar*)toolbar);
}

void k_xmlguiwindow_remove_tool_bar_break(void* self, void* before) {
    QMainWindow_RemoveToolBarBreak((QMainWindow*)self, (QToolBar*)before);
}

bool k_xmlguiwindow_unified_title_and_tool_bar_on_mac(void* self) {
    return QMainWindow_UnifiedTitleAndToolBarOnMac((QMainWindow*)self);
}

int32_t k_xmlguiwindow_tool_bar_area(void* self, void* toolbar) {
    return QMainWindow_ToolBarArea((QMainWindow*)self, (QToolBar*)toolbar);
}

bool k_xmlguiwindow_tool_bar_break(void* self, void* toolbar) {
    return QMainWindow_ToolBarBreak((QMainWindow*)self, (QToolBar*)toolbar);
}

void k_xmlguiwindow_add_dock_widget(void* self, int32_t area, void* dockwidget) {
    QMainWindow_AddDockWidget((QMainWindow*)self, area, (QDockWidget*)dockwidget);
}

void k_xmlguiwindow_add_dock_widget2(void* self, int32_t area, void* dockwidget, int32_t orientation) {
    QMainWindow_AddDockWidget2((QMainWindow*)self, area, (QDockWidget*)dockwidget, orientation);
}

void k_xmlguiwindow_split_dock_widget(void* self, void* after, void* dockwidget, int32_t orientation) {
    QMainWindow_SplitDockWidget((QMainWindow*)self, (QDockWidget*)after, (QDockWidget*)dockwidget, orientation);
}

void k_xmlguiwindow_tabify_dock_widget(void* self, void* first, void* second) {
    QMainWindow_TabifyDockWidget((QMainWindow*)self, (QDockWidget*)first, (QDockWidget*)second);
}

libqt_list /* of QDockWidget* */ k_xmlguiwindow_tabified_dock_widgets(void* self, void* dockwidget) {
    libqt_list _arr = QMainWindow_TabifiedDockWidgets((QMainWindow*)self, (QDockWidget*)dockwidget);
    return _arr;
}

void k_xmlguiwindow_remove_dock_widget(void* self, void* dockwidget) {
    QMainWindow_RemoveDockWidget((QMainWindow*)self, (QDockWidget*)dockwidget);
}

bool k_xmlguiwindow_restore_dock_widget(void* self, void* dockwidget) {
    return QMainWindow_RestoreDockWidget((QMainWindow*)self, (QDockWidget*)dockwidget);
}

int32_t k_xmlguiwindow_dock_widget_area(void* self, void* dockwidget) {
    return QMainWindow_DockWidgetArea((QMainWindow*)self, (QDockWidget*)dockwidget);
}

void k_xmlguiwindow_resize_docks(void* self, libqt_list docks, libqt_list sizes, int32_t orientation) {
    QMainWindow_ResizeDocks((QMainWindow*)self, docks, sizes, orientation);
}

char* k_xmlguiwindow_save_state(void* self) {
    libqt_string _str = QMainWindow_SaveState((QMainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_xmlguiwindow_restore_state(void* self, const char* state) {
    return QMainWindow_RestoreState((QMainWindow*)self, qstring(state));
}

void k_xmlguiwindow_set_animated(void* self, bool enabled) {
    QMainWindow_SetAnimated((QMainWindow*)self, enabled);
}

void k_xmlguiwindow_set_dock_nesting_enabled(void* self, bool enabled) {
    QMainWindow_SetDockNestingEnabled((QMainWindow*)self, enabled);
}

void k_xmlguiwindow_set_unified_title_and_tool_bar_on_mac(void* self, bool set) {
    QMainWindow_SetUnifiedTitleAndToolBarOnMac((QMainWindow*)self, set);
}

void k_xmlguiwindow_icon_size_changed(void* self, void* iconSize) {
    QMainWindow_IconSizeChanged((QMainWindow*)self, (QSize*)iconSize);
}

void k_xmlguiwindow_on_icon_size_changed(void* self, void (*callback)(void*, void*)) {
    QMainWindow_Connect_IconSizeChanged((QMainWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_tool_button_style_changed(void* self, int32_t toolButtonStyle) {
    QMainWindow_ToolButtonStyleChanged((QMainWindow*)self, toolButtonStyle);
}

void k_xmlguiwindow_on_tool_button_style_changed(void* self, void (*callback)(void*, int32_t)) {
    QMainWindow_Connect_ToolButtonStyleChanged((QMainWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_tabified_dock_widget_activated(void* self, void* dockWidget) {
    QMainWindow_TabifiedDockWidgetActivated((QMainWindow*)self, (QDockWidget*)dockWidget);
}

void k_xmlguiwindow_on_tabified_dock_widget_activated(void* self, void (*callback)(void*, void*)) {
    QMainWindow_Connect_TabifiedDockWidgetActivated((QMainWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_add_tool_bar_break1(void* self, int32_t area) {
    QMainWindow_AddToolBarBreak1((QMainWindow*)self, area);
}

char* k_xmlguiwindow_save_state1(void* self, int version) {
    libqt_string _str = QMainWindow_SaveState1((QMainWindow*)self, version);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_xmlguiwindow_restore_state2(void* self, const char* state, int version) {
    return QMainWindow_RestoreState2((QMainWindow*)self, qstring(state), version);
}

uintptr_t k_xmlguiwindow_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_xmlguiwindow_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_xmlguiwindow_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_xmlguiwindow_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_xmlguiwindow_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_xmlguiwindow_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_xmlguiwindow_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_xmlguiwindow_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_xmlguiwindow_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_xmlguiwindow_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_xmlguiwindow_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_xmlguiwindow_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_xmlguiwindow_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_xmlguiwindow_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_xmlguiwindow_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_xmlguiwindow_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_xmlguiwindow_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_xmlguiwindow_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_xmlguiwindow_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_xmlguiwindow_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_xmlguiwindow_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_xmlguiwindow_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_xmlguiwindow_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_xmlguiwindow_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_xmlguiwindow_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_xmlguiwindow_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_xmlguiwindow_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_xmlguiwindow_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_xmlguiwindow_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_xmlguiwindow_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_xmlguiwindow_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_xmlguiwindow_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_xmlguiwindow_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_xmlguiwindow_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_xmlguiwindow_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_xmlguiwindow_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_xmlguiwindow_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_xmlguiwindow_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_xmlguiwindow_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_xmlguiwindow_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_xmlguiwindow_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_xmlguiwindow_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_xmlguiwindow_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_xmlguiwindow_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_xmlguiwindow_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_xmlguiwindow_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_xmlguiwindow_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_xmlguiwindow_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_xmlguiwindow_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_xmlguiwindow_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_xmlguiwindow_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_xmlguiwindow_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_xmlguiwindow_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_xmlguiwindow_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_xmlguiwindow_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_xmlguiwindow_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_xmlguiwindow_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_xmlguiwindow_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_xmlguiwindow_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_xmlguiwindow_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_xmlguiwindow_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_xmlguiwindow_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_xmlguiwindow_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_xmlguiwindow_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_xmlguiwindow_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_xmlguiwindow_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_xmlguiwindow_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_xmlguiwindow_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_xmlguiwindow_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_xmlguiwindow_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_xmlguiwindow_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_xmlguiwindow_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_xmlguiwindow_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_xmlguiwindow_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_xmlguiwindow_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_xmlguiwindow_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_xmlguiwindow_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_xmlguiwindow_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_xmlguiwindow_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_xmlguiwindow_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_xmlguiwindow_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_xmlguiwindow_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_xmlguiwindow_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_xmlguiwindow_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_xmlguiwindow_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_xmlguiwindow_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_xmlguiwindow_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_xmlguiwindow_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_xmlguiwindow_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_xmlguiwindow_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_xmlguiwindow_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_xmlguiwindow_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_xmlguiwindow_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_xmlguiwindow_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_xmlguiwindow_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_xmlguiwindow_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_xmlguiwindow_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_xmlguiwindow_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_xmlguiwindow_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_xmlguiwindow_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xmlguiwindow_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_xmlguiwindow_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_xmlguiwindow_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_xmlguiwindow_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_xmlguiwindow_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_xmlguiwindow_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_xmlguiwindow_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_xmlguiwindow_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_xmlguiwindow_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_xmlguiwindow_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_xmlguiwindow_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_xmlguiwindow_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_xmlguiwindow_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_xmlguiwindow_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xmlguiwindow_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_xmlguiwindow_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_xmlguiwindow_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_xmlguiwindow_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_xmlguiwindow_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_xmlguiwindow_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_xmlguiwindow_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_xmlguiwindow_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_xmlguiwindow_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_xmlguiwindow_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_xmlguiwindow_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_xmlguiwindow_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_xmlguiwindow_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_xmlguiwindow_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_xmlguiwindow_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_xmlguiwindow_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_xmlguiwindow_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_xmlguiwindow_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_xmlguiwindow_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_xmlguiwindow_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_xmlguiwindow_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_xmlguiwindow_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_xmlguiwindow_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_xmlguiwindow_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_xmlguiwindow_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_xmlguiwindow_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_xmlguiwindow_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_xmlguiwindow_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_xmlguiwindow_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_xmlguiwindow_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_xmlguiwindow_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_xmlguiwindow_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_xmlguiwindow_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_xmlguiwindow_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_xmlguiwindow_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_xmlguiwindow_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_xmlguiwindow_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_xmlguiwindow_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_xmlguiwindow_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_xmlguiwindow_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_xmlguiwindow_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_xmlguiwindow_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_xmlguiwindow_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_xmlguiwindow_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_xmlguiwindow_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_xmlguiwindow_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_xmlguiwindow_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_xmlguiwindow_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_xmlguiwindow_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_xmlguiwindow_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_xmlguiwindow_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_xmlguiwindow_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_xmlguiwindow_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_xmlguiwindow_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_xmlguiwindow_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_xmlguiwindow_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_xmlguiwindow_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_xmlguiwindow_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_xmlguiwindow_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_xmlguiwindow_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_xmlguiwindow_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_xmlguiwindow_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_xmlguiwindow_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_xmlguiwindow_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_xmlguiwindow_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_xmlguiwindow_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_xmlguiwindow_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_xmlguiwindow_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_xmlguiwindow_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_xmlguiwindow_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_xmlguiwindow_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_xmlguiwindow_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_xmlguiwindow_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_xmlguiwindow_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_xmlguiwindow_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_xmlguiwindow_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_xmlguiwindow_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_xmlguiwindow_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_xmlguiwindow_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_xmlguiwindow_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_xmlguiwindow_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_xmlguiwindow_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_xmlguiwindow_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_xmlguiwindow_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_xmlguiwindow_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_xmlguiwindow_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_xmlguiwindow_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_xmlguiwindow_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_xmlguiwindow_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_xmlguiwindow_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_xmlguiwindow_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_xmlguiwindow_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_xmlguiwindow_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_xmlguiwindow_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_xmlguiwindow_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_xmlguiwindow_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_xmlguiwindow_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_xmlguiwindow_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_xmlguiwindow_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_xmlguiwindow_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_xmlguiwindow_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_xmlguiwindow_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_xmlguiwindow_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_xmlguiwindow_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_xmlguiwindow_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_xmlguiwindow_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_xmlguiwindow_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_xmlguiwindow_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_xmlguiwindow_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_xmlguiwindow_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_xmlguiwindow_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_xmlguiwindow_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_xmlguiwindow_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_xmlguiwindow_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_xmlguiwindow_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_xmlguiwindow_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_xmlguiwindow_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_xmlguiwindow_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_xmlguiwindow_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_xmlguiwindow_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_xmlguiwindow_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_xmlguiwindow_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_xmlguiwindow_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_xmlguiwindow_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_xmlguiwindow_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_xmlguiwindow_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_xmlguiwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_xmlguiwindow_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_xmlguiwindow_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_xmlguiwindow_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_xmlguiwindow_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_xmlguiwindow_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_xmlguiwindow_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_xmlguiwindow_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_xmlguiwindow_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_xmlguiwindow_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_xmlguiwindow_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_xmlguiwindow_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_xmlguiwindow_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_xmlguiwindow_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_xmlguiwindow_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_xmlguiwindow_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_xmlguiwindow_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_xmlguiwindow_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_xmlguiwindow_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_xmlguiwindow_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_xmlguiwindow_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_xmlguiwindow_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_xmlguiwindow_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_xmlguiwindow_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_xmlguiwindow_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_xmlguiwindow_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_xmlguiwindow_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_xmlguiwindow_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_xmlguiwindow_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_xmlguiwindow_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_xmlguiwindow_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_xmlguiwindow_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_xmlguiwindow_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_xmlguiwindow_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_xmlguiwindow_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_xmlguiwindow_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_xmlguiwindow_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_xmlguiwindow_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_xmlguiwindow_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_xmlguiwindow_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_xmlguiwindow_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_xmlguiwindow_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_xmlguiwindow_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_xmlguiwindow_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_xmlguiwindow_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_xmlguiwindow_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_xmlguiwindow_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_xmlguiwindow_dynamic_property_names");
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

QBindingStorage* k_xmlguiwindow_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_xmlguiwindow_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_xmlguiwindow_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_xmlguiwindow_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_xmlguiwindow_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_xmlguiwindow_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_xmlguiwindow_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_xmlguiwindow_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_xmlguiwindow_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_xmlguiwindow_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_xmlguiwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_xmlguiwindow_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_xmlguiwindow_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_xmlguiwindow_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_xmlguiwindow_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_xmlguiwindow_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_xmlguiwindow_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_xmlguiwindow_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_xmlguiwindow_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_xmlguiwindow_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_xmlguiwindow_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_xmlguiwindow_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_xmlguiwindow_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_xmlguiwindow_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_xmlguiwindow_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_xmlguiwindow_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

KXMLGUIClient* k_xmlguiwindow_builder_client(void* self) {
    return KXMLGUIBuilder_BuilderClient((KXMLGUIBuilder*)self);
}

void k_xmlguiwindow_set_builder_client(void* self, void* client) {
    KXMLGUIBuilder_SetBuilderClient((KXMLGUIBuilder*)self, (KXMLGUIClient*)client);
}

QWidget* k_xmlguiwindow_widget(void* self) {
    return KXMLGUIBuilder_Widget((KXMLGUIBuilder*)self);
}

QAction* k_xmlguiwindow_action(void* self, const char* name) {
    return KXMLGUIClient_Action((KXMLGUIClient*)self, qstring(name));
}

void k_xmlguiwindow_set_x_m_l_g_u_i_build_document(void* self, void* doc) {
    KXMLGUIClient_SetXMLGUIBuildDocument((KXMLGUIClient*)self, (QDomDocument*)doc);
}

QDomDocument* k_xmlguiwindow_xmlgui_build_document(void* self) {
    return KXMLGUIClient_XmlguiBuildDocument((KXMLGUIClient*)self);
}

void k_xmlguiwindow_set_factory(void* self, void* factory) {
    KXMLGUIClient_SetFactory((KXMLGUIClient*)self, (KXMLGUIFactory*)factory);
}

KXMLGUIFactory* k_xmlguiwindow_factory(void* self) {
    return KXMLGUIClient_Factory((KXMLGUIClient*)self);
}

KXMLGUIClient* k_xmlguiwindow_parent_client(void* self) {
    return KXMLGUIClient_ParentClient((KXMLGUIClient*)self);
}

void k_xmlguiwindow_insert_child_client(void* self, void* child) {
    KXMLGUIClient_InsertChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

void k_xmlguiwindow_remove_child_client(void* self, void* child) {
    KXMLGUIClient_RemoveChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

libqt_list /* of KXMLGUIClient* */ k_xmlguiwindow_child_clients(void* self) {
    libqt_list _arr = KXMLGUIClient_ChildClients((KXMLGUIClient*)self);
    return _arr;
}

void k_xmlguiwindow_set_client_builder(void* self, void* builder) {
    KXMLGUIClient_SetClientBuilder((KXMLGUIClient*)self, (KXMLGUIBuilder*)builder);
}

KXMLGUIBuilder* k_xmlguiwindow_client_builder(void* self) {
    return KXMLGUIClient_ClientBuilder((KXMLGUIClient*)self);
}

void k_xmlguiwindow_reload_x_m_l(void* self) {
    KXMLGUIClient_ReloadXML((KXMLGUIClient*)self);
}

void k_xmlguiwindow_plug_action_list(void* self, const char* name, libqt_list actionList) {
    KXMLGUIClient_PlugActionList((KXMLGUIClient*)self, qstring(name), actionList);
}

void k_xmlguiwindow_unplug_action_list(void* self, const char* name) {
    KXMLGUIClient_UnplugActionList((KXMLGUIClient*)self, qstring(name));
}

const char* k_xmlguiwindow_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_xmlguiwindow_find_most_recent_x_m_l_file");
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

void k_xmlguiwindow_add_state_action_enabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionEnabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

void k_xmlguiwindow_add_state_action_disabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionDisabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

KXMLGUIClient__StateChange* k_xmlguiwindow_get_actions_to_change_for_state(void* self, const char* state) {
    return KXMLGUIClient_GetActionsToChangeForState((KXMLGUIClient*)self, qstring(state));
}

void k_xmlguiwindow_begin_x_m_l_plug(void* self, void* param1) {
    KXMLGUIClient_BeginXMLPlug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_xmlguiwindow_end_x_m_l_plug(void* self) {
    KXMLGUIClient_EndXMLPlug((KXMLGUIClient*)self);
}

void k_xmlguiwindow_prepare_x_m_l_unplug(void* self, void* param1) {
    KXMLGUIClient_PrepareXMLUnplug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_xmlguiwindow_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile) {
    KXMLGUIClient_ReplaceXMLFile((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile));
}

const char* k_xmlguiwindow_find_version_number(const char* xml) {
    libqt_string _str = KXMLGUIClient_FindVersionNumber(qstring(xml));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge) {
    KXMLGUIClient_ReplaceXMLFile3((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile), merge);
}

void k_xmlguiwindow_set_caption(void* self, const char* caption) {
    KXmlGuiWindow_SetCaption((KXmlGuiWindow*)self, qstring(caption));
}

void k_xmlguiwindow_qbase_set_caption(void* self, const char* caption) {
    KXmlGuiWindow_QBaseSetCaption((KXmlGuiWindow*)self, qstring(caption));
}

void k_xmlguiwindow_on_set_caption(void* self, void (*callback)(void*, const char*)) {
    KXmlGuiWindow_OnSetCaption((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_set_plain_caption(void* self, const char* caption) {
    KXmlGuiWindow_SetPlainCaption((KXmlGuiWindow*)self, qstring(caption));
}

void k_xmlguiwindow_qbase_set_plain_caption(void* self, const char* caption) {
    KXmlGuiWindow_QBaseSetPlainCaption((KXmlGuiWindow*)self, qstring(caption));
}

void k_xmlguiwindow_on_set_plain_caption(void* self, void (*callback)(void*, const char*)) {
    KXmlGuiWindow_OnSetPlainCaption((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_key_press_event(void* self, void* keyEvent) {
    KXmlGuiWindow_KeyPressEvent((KXmlGuiWindow*)self, (QKeyEvent*)keyEvent);
}

void k_xmlguiwindow_qbase_key_press_event(void* self, void* keyEvent) {
    KXmlGuiWindow_QBaseKeyPressEvent((KXmlGuiWindow*)self, (QKeyEvent*)keyEvent);
}

void k_xmlguiwindow_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnKeyPressEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_close_event(void* self, void* param1) {
    KXmlGuiWindow_CloseEvent((KXmlGuiWindow*)self, (QCloseEvent*)param1);
}

void k_xmlguiwindow_qbase_close_event(void* self, void* param1) {
    KXmlGuiWindow_QBaseCloseEvent((KXmlGuiWindow*)self, (QCloseEvent*)param1);
}

void k_xmlguiwindow_on_close_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnCloseEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

bool k_xmlguiwindow_query_close(void* self) {
    return KXmlGuiWindow_QueryClose((KXmlGuiWindow*)self);
}

bool k_xmlguiwindow_qbase_query_close(void* self) {
    return KXmlGuiWindow_QBaseQueryClose((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_query_close(void* self, bool (*callback)()) {
    KXmlGuiWindow_OnQueryClose((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_save_properties(void* self, void* param1) {
    KXmlGuiWindow_SaveProperties((KXmlGuiWindow*)self, (KConfigGroup*)param1);
}

void k_xmlguiwindow_qbase_save_properties(void* self, void* param1) {
    KXmlGuiWindow_QBaseSaveProperties((KXmlGuiWindow*)self, (KConfigGroup*)param1);
}

void k_xmlguiwindow_on_save_properties(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnSaveProperties((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_read_properties(void* self, void* param1) {
    KXmlGuiWindow_ReadProperties((KXmlGuiWindow*)self, (KConfigGroup*)param1);
}

void k_xmlguiwindow_qbase_read_properties(void* self, void* param1) {
    KXmlGuiWindow_QBaseReadProperties((KXmlGuiWindow*)self, (KConfigGroup*)param1);
}

void k_xmlguiwindow_on_read_properties(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnReadProperties((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_save_global_properties(void* self, void* sessionConfig) {
    KXmlGuiWindow_SaveGlobalProperties((KXmlGuiWindow*)self, (KConfig*)sessionConfig);
}

void k_xmlguiwindow_qbase_save_global_properties(void* self, void* sessionConfig) {
    KXmlGuiWindow_QBaseSaveGlobalProperties((KXmlGuiWindow*)self, (KConfig*)sessionConfig);
}

void k_xmlguiwindow_on_save_global_properties(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnSaveGlobalProperties((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_read_global_properties(void* self, void* sessionConfig) {
    KXmlGuiWindow_ReadGlobalProperties((KXmlGuiWindow*)self, (KConfig*)sessionConfig);
}

void k_xmlguiwindow_qbase_read_global_properties(void* self, void* sessionConfig) {
    KXmlGuiWindow_QBaseReadGlobalProperties((KXmlGuiWindow*)self, (KConfig*)sessionConfig);
}

void k_xmlguiwindow_on_read_global_properties(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnReadGlobalProperties((KXmlGuiWindow*)self, (intptr_t)callback);
}

QMenu* k_xmlguiwindow_create_popup_menu(void* self) {
    return KXmlGuiWindow_CreatePopupMenu((KXmlGuiWindow*)self);
}

QMenu* k_xmlguiwindow_qbase_create_popup_menu(void* self) {
    return KXmlGuiWindow_QBaseCreatePopupMenu((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_create_popup_menu(void* self, QMenu* (*callback)()) {
    KXmlGuiWindow_OnCreatePopupMenu((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_context_menu_event(void* self, void* event) {
    KXmlGuiWindow_ContextMenuEvent((KXmlGuiWindow*)self, (QContextMenuEvent*)event);
}

void k_xmlguiwindow_qbase_context_menu_event(void* self, void* event) {
    KXmlGuiWindow_QBaseContextMenuEvent((KXmlGuiWindow*)self, (QContextMenuEvent*)event);
}

void k_xmlguiwindow_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnContextMenuEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

int32_t k_xmlguiwindow_dev_type(void* self) {
    return KXmlGuiWindow_DevType((KXmlGuiWindow*)self);
}

int32_t k_xmlguiwindow_qbase_dev_type(void* self) {
    return KXmlGuiWindow_QBaseDevType((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_dev_type(void* self, int32_t (*callback)()) {
    KXmlGuiWindow_OnDevType((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_set_visible(void* self, bool visible) {
    KXmlGuiWindow_SetVisible((KXmlGuiWindow*)self, visible);
}

void k_xmlguiwindow_qbase_set_visible(void* self, bool visible) {
    KXmlGuiWindow_QBaseSetVisible((KXmlGuiWindow*)self, visible);
}

void k_xmlguiwindow_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KXmlGuiWindow_OnSetVisible((KXmlGuiWindow*)self, (intptr_t)callback);
}

QSize* k_xmlguiwindow_size_hint(void* self) {
    return KXmlGuiWindow_SizeHint((KXmlGuiWindow*)self);
}

QSize* k_xmlguiwindow_qbase_size_hint(void* self) {
    return KXmlGuiWindow_QBaseSizeHint((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_size_hint(void* self, QSize* (*callback)()) {
    KXmlGuiWindow_OnSizeHint((KXmlGuiWindow*)self, (intptr_t)callback);
}

QSize* k_xmlguiwindow_minimum_size_hint(void* self) {
    return KXmlGuiWindow_MinimumSizeHint((KXmlGuiWindow*)self);
}

QSize* k_xmlguiwindow_qbase_minimum_size_hint(void* self) {
    return KXmlGuiWindow_QBaseMinimumSizeHint((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KXmlGuiWindow_OnMinimumSizeHint((KXmlGuiWindow*)self, (intptr_t)callback);
}

int32_t k_xmlguiwindow_height_for_width(void* self, int param1) {
    return KXmlGuiWindow_HeightForWidth((KXmlGuiWindow*)self, param1);
}

int32_t k_xmlguiwindow_qbase_height_for_width(void* self, int param1) {
    return KXmlGuiWindow_QBaseHeightForWidth((KXmlGuiWindow*)self, param1);
}

void k_xmlguiwindow_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KXmlGuiWindow_OnHeightForWidth((KXmlGuiWindow*)self, (intptr_t)callback);
}

bool k_xmlguiwindow_has_height_for_width(void* self) {
    return KXmlGuiWindow_HasHeightForWidth((KXmlGuiWindow*)self);
}

bool k_xmlguiwindow_qbase_has_height_for_width(void* self) {
    return KXmlGuiWindow_QBaseHasHeightForWidth((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_has_height_for_width(void* self, bool (*callback)()) {
    KXmlGuiWindow_OnHasHeightForWidth((KXmlGuiWindow*)self, (intptr_t)callback);
}

QPaintEngine* k_xmlguiwindow_paint_engine(void* self) {
    return KXmlGuiWindow_PaintEngine((KXmlGuiWindow*)self);
}

QPaintEngine* k_xmlguiwindow_qbase_paint_engine(void* self) {
    return KXmlGuiWindow_QBasePaintEngine((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KXmlGuiWindow_OnPaintEngine((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_mouse_press_event(void* self, void* event) {
    KXmlGuiWindow_MousePressEvent((KXmlGuiWindow*)self, (QMouseEvent*)event);
}

void k_xmlguiwindow_qbase_mouse_press_event(void* self, void* event) {
    KXmlGuiWindow_QBaseMousePressEvent((KXmlGuiWindow*)self, (QMouseEvent*)event);
}

void k_xmlguiwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnMousePressEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_mouse_release_event(void* self, void* event) {
    KXmlGuiWindow_MouseReleaseEvent((KXmlGuiWindow*)self, (QMouseEvent*)event);
}

void k_xmlguiwindow_qbase_mouse_release_event(void* self, void* event) {
    KXmlGuiWindow_QBaseMouseReleaseEvent((KXmlGuiWindow*)self, (QMouseEvent*)event);
}

void k_xmlguiwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnMouseReleaseEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_mouse_double_click_event(void* self, void* event) {
    KXmlGuiWindow_MouseDoubleClickEvent((KXmlGuiWindow*)self, (QMouseEvent*)event);
}

void k_xmlguiwindow_qbase_mouse_double_click_event(void* self, void* event) {
    KXmlGuiWindow_QBaseMouseDoubleClickEvent((KXmlGuiWindow*)self, (QMouseEvent*)event);
}

void k_xmlguiwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnMouseDoubleClickEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_mouse_move_event(void* self, void* event) {
    KXmlGuiWindow_MouseMoveEvent((KXmlGuiWindow*)self, (QMouseEvent*)event);
}

void k_xmlguiwindow_qbase_mouse_move_event(void* self, void* event) {
    KXmlGuiWindow_QBaseMouseMoveEvent((KXmlGuiWindow*)self, (QMouseEvent*)event);
}

void k_xmlguiwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnMouseMoveEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_wheel_event(void* self, void* event) {
    KXmlGuiWindow_WheelEvent((KXmlGuiWindow*)self, (QWheelEvent*)event);
}

void k_xmlguiwindow_qbase_wheel_event(void* self, void* event) {
    KXmlGuiWindow_QBaseWheelEvent((KXmlGuiWindow*)self, (QWheelEvent*)event);
}

void k_xmlguiwindow_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnWheelEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_key_release_event(void* self, void* event) {
    KXmlGuiWindow_KeyReleaseEvent((KXmlGuiWindow*)self, (QKeyEvent*)event);
}

void k_xmlguiwindow_qbase_key_release_event(void* self, void* event) {
    KXmlGuiWindow_QBaseKeyReleaseEvent((KXmlGuiWindow*)self, (QKeyEvent*)event);
}

void k_xmlguiwindow_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnKeyReleaseEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_focus_in_event(void* self, void* event) {
    KXmlGuiWindow_FocusInEvent((KXmlGuiWindow*)self, (QFocusEvent*)event);
}

void k_xmlguiwindow_qbase_focus_in_event(void* self, void* event) {
    KXmlGuiWindow_QBaseFocusInEvent((KXmlGuiWindow*)self, (QFocusEvent*)event);
}

void k_xmlguiwindow_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnFocusInEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_focus_out_event(void* self, void* event) {
    KXmlGuiWindow_FocusOutEvent((KXmlGuiWindow*)self, (QFocusEvent*)event);
}

void k_xmlguiwindow_qbase_focus_out_event(void* self, void* event) {
    KXmlGuiWindow_QBaseFocusOutEvent((KXmlGuiWindow*)self, (QFocusEvent*)event);
}

void k_xmlguiwindow_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnFocusOutEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_enter_event(void* self, void* event) {
    KXmlGuiWindow_EnterEvent((KXmlGuiWindow*)self, (QEnterEvent*)event);
}

void k_xmlguiwindow_qbase_enter_event(void* self, void* event) {
    KXmlGuiWindow_QBaseEnterEvent((KXmlGuiWindow*)self, (QEnterEvent*)event);
}

void k_xmlguiwindow_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnEnterEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_leave_event(void* self, void* event) {
    KXmlGuiWindow_LeaveEvent((KXmlGuiWindow*)self, (QEvent*)event);
}

void k_xmlguiwindow_qbase_leave_event(void* self, void* event) {
    KXmlGuiWindow_QBaseLeaveEvent((KXmlGuiWindow*)self, (QEvent*)event);
}

void k_xmlguiwindow_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnLeaveEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_paint_event(void* self, void* event) {
    KXmlGuiWindow_PaintEvent((KXmlGuiWindow*)self, (QPaintEvent*)event);
}

void k_xmlguiwindow_qbase_paint_event(void* self, void* event) {
    KXmlGuiWindow_QBasePaintEvent((KXmlGuiWindow*)self, (QPaintEvent*)event);
}

void k_xmlguiwindow_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnPaintEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_move_event(void* self, void* event) {
    KXmlGuiWindow_MoveEvent((KXmlGuiWindow*)self, (QMoveEvent*)event);
}

void k_xmlguiwindow_qbase_move_event(void* self, void* event) {
    KXmlGuiWindow_QBaseMoveEvent((KXmlGuiWindow*)self, (QMoveEvent*)event);
}

void k_xmlguiwindow_on_move_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnMoveEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_resize_event(void* self, void* event) {
    KXmlGuiWindow_ResizeEvent((KXmlGuiWindow*)self, (QResizeEvent*)event);
}

void k_xmlguiwindow_qbase_resize_event(void* self, void* event) {
    KXmlGuiWindow_QBaseResizeEvent((KXmlGuiWindow*)self, (QResizeEvent*)event);
}

void k_xmlguiwindow_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnResizeEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_tablet_event(void* self, void* event) {
    KXmlGuiWindow_TabletEvent((KXmlGuiWindow*)self, (QTabletEvent*)event);
}

void k_xmlguiwindow_qbase_tablet_event(void* self, void* event) {
    KXmlGuiWindow_QBaseTabletEvent((KXmlGuiWindow*)self, (QTabletEvent*)event);
}

void k_xmlguiwindow_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnTabletEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_action_event(void* self, void* event) {
    KXmlGuiWindow_ActionEvent((KXmlGuiWindow*)self, (QActionEvent*)event);
}

void k_xmlguiwindow_qbase_action_event(void* self, void* event) {
    KXmlGuiWindow_QBaseActionEvent((KXmlGuiWindow*)self, (QActionEvent*)event);
}

void k_xmlguiwindow_on_action_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnActionEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_drag_enter_event(void* self, void* event) {
    KXmlGuiWindow_DragEnterEvent((KXmlGuiWindow*)self, (QDragEnterEvent*)event);
}

void k_xmlguiwindow_qbase_drag_enter_event(void* self, void* event) {
    KXmlGuiWindow_QBaseDragEnterEvent((KXmlGuiWindow*)self, (QDragEnterEvent*)event);
}

void k_xmlguiwindow_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnDragEnterEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_drag_move_event(void* self, void* event) {
    KXmlGuiWindow_DragMoveEvent((KXmlGuiWindow*)self, (QDragMoveEvent*)event);
}

void k_xmlguiwindow_qbase_drag_move_event(void* self, void* event) {
    KXmlGuiWindow_QBaseDragMoveEvent((KXmlGuiWindow*)self, (QDragMoveEvent*)event);
}

void k_xmlguiwindow_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnDragMoveEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_drag_leave_event(void* self, void* event) {
    KXmlGuiWindow_DragLeaveEvent((KXmlGuiWindow*)self, (QDragLeaveEvent*)event);
}

void k_xmlguiwindow_qbase_drag_leave_event(void* self, void* event) {
    KXmlGuiWindow_QBaseDragLeaveEvent((KXmlGuiWindow*)self, (QDragLeaveEvent*)event);
}

void k_xmlguiwindow_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnDragLeaveEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_drop_event(void* self, void* event) {
    KXmlGuiWindow_DropEvent((KXmlGuiWindow*)self, (QDropEvent*)event);
}

void k_xmlguiwindow_qbase_drop_event(void* self, void* event) {
    KXmlGuiWindow_QBaseDropEvent((KXmlGuiWindow*)self, (QDropEvent*)event);
}

void k_xmlguiwindow_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnDropEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_show_event(void* self, void* event) {
    KXmlGuiWindow_ShowEvent((KXmlGuiWindow*)self, (QShowEvent*)event);
}

void k_xmlguiwindow_qbase_show_event(void* self, void* event) {
    KXmlGuiWindow_QBaseShowEvent((KXmlGuiWindow*)self, (QShowEvent*)event);
}

void k_xmlguiwindow_on_show_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnShowEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_hide_event(void* self, void* event) {
    KXmlGuiWindow_HideEvent((KXmlGuiWindow*)self, (QHideEvent*)event);
}

void k_xmlguiwindow_qbase_hide_event(void* self, void* event) {
    KXmlGuiWindow_QBaseHideEvent((KXmlGuiWindow*)self, (QHideEvent*)event);
}

void k_xmlguiwindow_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnHideEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

bool k_xmlguiwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KXmlGuiWindow_NativeEvent((KXmlGuiWindow*)self, qstring(eventType), message, result);
}

bool k_xmlguiwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KXmlGuiWindow_QBaseNativeEvent((KXmlGuiWindow*)self, qstring(eventType), message, result);
}

void k_xmlguiwindow_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KXmlGuiWindow_OnNativeEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_change_event(void* self, void* param1) {
    KXmlGuiWindow_ChangeEvent((KXmlGuiWindow*)self, (QEvent*)param1);
}

void k_xmlguiwindow_qbase_change_event(void* self, void* param1) {
    KXmlGuiWindow_QBaseChangeEvent((KXmlGuiWindow*)self, (QEvent*)param1);
}

void k_xmlguiwindow_on_change_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnChangeEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

int32_t k_xmlguiwindow_metric(void* self, int32_t param1) {
    return KXmlGuiWindow_Metric((KXmlGuiWindow*)self, param1);
}

int32_t k_xmlguiwindow_qbase_metric(void* self, int32_t param1) {
    return KXmlGuiWindow_QBaseMetric((KXmlGuiWindow*)self, param1);
}

void k_xmlguiwindow_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KXmlGuiWindow_OnMetric((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_init_painter(void* self, void* painter) {
    KXmlGuiWindow_InitPainter((KXmlGuiWindow*)self, (QPainter*)painter);
}

void k_xmlguiwindow_qbase_init_painter(void* self, void* painter) {
    KXmlGuiWindow_QBaseInitPainter((KXmlGuiWindow*)self, (QPainter*)painter);
}

void k_xmlguiwindow_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnInitPainter((KXmlGuiWindow*)self, (intptr_t)callback);
}

QPaintDevice* k_xmlguiwindow_redirected(void* self, void* offset) {
    return KXmlGuiWindow_Redirected((KXmlGuiWindow*)self, (QPoint*)offset);
}

QPaintDevice* k_xmlguiwindow_qbase_redirected(void* self, void* offset) {
    return KXmlGuiWindow_QBaseRedirected((KXmlGuiWindow*)self, (QPoint*)offset);
}

void k_xmlguiwindow_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KXmlGuiWindow_OnRedirected((KXmlGuiWindow*)self, (intptr_t)callback);
}

QPainter* k_xmlguiwindow_shared_painter(void* self) {
    return KXmlGuiWindow_SharedPainter((KXmlGuiWindow*)self);
}

QPainter* k_xmlguiwindow_qbase_shared_painter(void* self) {
    return KXmlGuiWindow_QBaseSharedPainter((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_shared_painter(void* self, QPainter* (*callback)()) {
    KXmlGuiWindow_OnSharedPainter((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_input_method_event(void* self, void* param1) {
    KXmlGuiWindow_InputMethodEvent((KXmlGuiWindow*)self, (QInputMethodEvent*)param1);
}

void k_xmlguiwindow_qbase_input_method_event(void* self, void* param1) {
    KXmlGuiWindow_QBaseInputMethodEvent((KXmlGuiWindow*)self, (QInputMethodEvent*)param1);
}

void k_xmlguiwindow_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnInputMethodEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

QVariant* k_xmlguiwindow_input_method_query(void* self, int64_t param1) {
    return KXmlGuiWindow_InputMethodQuery((KXmlGuiWindow*)self, param1);
}

QVariant* k_xmlguiwindow_qbase_input_method_query(void* self, int64_t param1) {
    return KXmlGuiWindow_QBaseInputMethodQuery((KXmlGuiWindow*)self, param1);
}

void k_xmlguiwindow_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KXmlGuiWindow_OnInputMethodQuery((KXmlGuiWindow*)self, (intptr_t)callback);
}

bool k_xmlguiwindow_focus_next_prev_child(void* self, bool next) {
    return KXmlGuiWindow_FocusNextPrevChild((KXmlGuiWindow*)self, next);
}

bool k_xmlguiwindow_qbase_focus_next_prev_child(void* self, bool next) {
    return KXmlGuiWindow_QBaseFocusNextPrevChild((KXmlGuiWindow*)self, next);
}

void k_xmlguiwindow_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KXmlGuiWindow_OnFocusNextPrevChild((KXmlGuiWindow*)self, (intptr_t)callback);
}

bool k_xmlguiwindow_event_filter(void* self, void* watched, void* event) {
    return KXmlGuiWindow_EventFilter((KXmlGuiWindow*)self, (QObject*)watched, (QEvent*)event);
}

bool k_xmlguiwindow_qbase_event_filter(void* self, void* watched, void* event) {
    return KXmlGuiWindow_QBaseEventFilter((KXmlGuiWindow*)self, (QObject*)watched, (QEvent*)event);
}

void k_xmlguiwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KXmlGuiWindow_OnEventFilter((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_timer_event(void* self, void* event) {
    KXmlGuiWindow_TimerEvent((KXmlGuiWindow*)self, (QTimerEvent*)event);
}

void k_xmlguiwindow_qbase_timer_event(void* self, void* event) {
    KXmlGuiWindow_QBaseTimerEvent((KXmlGuiWindow*)self, (QTimerEvent*)event);
}

void k_xmlguiwindow_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnTimerEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_child_event(void* self, void* event) {
    KXmlGuiWindow_ChildEvent((KXmlGuiWindow*)self, (QChildEvent*)event);
}

void k_xmlguiwindow_qbase_child_event(void* self, void* event) {
    KXmlGuiWindow_QBaseChildEvent((KXmlGuiWindow*)self, (QChildEvent*)event);
}

void k_xmlguiwindow_on_child_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnChildEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_custom_event(void* self, void* event) {
    KXmlGuiWindow_CustomEvent((KXmlGuiWindow*)self, (QEvent*)event);
}

void k_xmlguiwindow_qbase_custom_event(void* self, void* event) {
    KXmlGuiWindow_QBaseCustomEvent((KXmlGuiWindow*)self, (QEvent*)event);
}

void k_xmlguiwindow_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnCustomEvent((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_connect_notify(void* self, void* signal) {
    KXmlGuiWindow_ConnectNotify((KXmlGuiWindow*)self, (QMetaMethod*)signal);
}

void k_xmlguiwindow_qbase_connect_notify(void* self, void* signal) {
    KXmlGuiWindow_QBaseConnectNotify((KXmlGuiWindow*)self, (QMetaMethod*)signal);
}

void k_xmlguiwindow_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnConnectNotify((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_disconnect_notify(void* self, void* signal) {
    KXmlGuiWindow_DisconnectNotify((KXmlGuiWindow*)self, (QMetaMethod*)signal);
}

void k_xmlguiwindow_qbase_disconnect_notify(void* self, void* signal) {
    KXmlGuiWindow_QBaseDisconnectNotify((KXmlGuiWindow*)self, (QMetaMethod*)signal);
}

void k_xmlguiwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KXmlGuiWindow_OnDisconnectNotify((KXmlGuiWindow*)self, (intptr_t)callback);
}

const char** k_xmlguiwindow_container_tags(void* self) {
    libqt_list _arr = KXmlGuiWindow_ContainerTags((KXmlGuiWindow*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_xmlguiwindow_container_tags");
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

const char** k_xmlguiwindow_qbase_container_tags(void* self) {
    libqt_list _arr = KXmlGuiWindow_QBaseContainerTags((KXmlGuiWindow*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_xmlguiwindow_container_tags");
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

void k_xmlguiwindow_on_container_tags(void* self, const char** (*callback)()) {
    KXmlGuiWindow_OnContainerTags((KXmlGuiWindow*)self, (intptr_t)callback);
}

QWidget* k_xmlguiwindow_create_container(void* self, void* parent, int index, void* element, void** containerAction) {
    return KXmlGuiWindow_CreateContainer((KXmlGuiWindow*)self, (QWidget*)parent, index, (QDomElement*)element, (QAction**)containerAction);
}

QWidget* k_xmlguiwindow_qbase_create_container(void* self, void* parent, int index, void* element, void** containerAction) {
    return KXmlGuiWindow_QBaseCreateContainer((KXmlGuiWindow*)self, (QWidget*)parent, index, (QDomElement*)element, (QAction**)containerAction);
}

void k_xmlguiwindow_on_create_container(void* self, QWidget* (*callback)(void*, void*, int, void*, void**)) {
    KXmlGuiWindow_OnCreateContainer((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_remove_container(void* self, void* container, void* parent, void* element, void* containerAction) {
    KXmlGuiWindow_RemoveContainer((KXmlGuiWindow*)self, (QWidget*)container, (QWidget*)parent, (QDomElement*)element, (QAction*)containerAction);
}

void k_xmlguiwindow_qbase_remove_container(void* self, void* container, void* parent, void* element, void* containerAction) {
    KXmlGuiWindow_QBaseRemoveContainer((KXmlGuiWindow*)self, (QWidget*)container, (QWidget*)parent, (QDomElement*)element, (QAction*)containerAction);
}

void k_xmlguiwindow_on_remove_container(void* self, void (*callback)(void*, void*, void*, void*, void*)) {
    KXmlGuiWindow_OnRemoveContainer((KXmlGuiWindow*)self, (intptr_t)callback);
}

const char** k_xmlguiwindow_custom_tags(void* self) {
    libqt_list _arr = KXmlGuiWindow_CustomTags((KXmlGuiWindow*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_xmlguiwindow_custom_tags");
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

const char** k_xmlguiwindow_qbase_custom_tags(void* self) {
    libqt_list _arr = KXmlGuiWindow_QBaseCustomTags((KXmlGuiWindow*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_xmlguiwindow_custom_tags");
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

void k_xmlguiwindow_on_custom_tags(void* self, const char** (*callback)()) {
    KXmlGuiWindow_OnCustomTags((KXmlGuiWindow*)self, (intptr_t)callback);
}

QAction* k_xmlguiwindow_create_custom_element(void* self, void* parent, int index, void* element) {
    return KXmlGuiWindow_CreateCustomElement((KXmlGuiWindow*)self, (QWidget*)parent, index, (QDomElement*)element);
}

QAction* k_xmlguiwindow_qbase_create_custom_element(void* self, void* parent, int index, void* element) {
    return KXmlGuiWindow_QBaseCreateCustomElement((KXmlGuiWindow*)self, (QWidget*)parent, index, (QDomElement*)element);
}

void k_xmlguiwindow_on_create_custom_element(void* self, QAction* (*callback)(void*, void*, int, void*)) {
    KXmlGuiWindow_OnCreateCustomElement((KXmlGuiWindow*)self, (intptr_t)callback);
}

QAction* k_xmlguiwindow_action2(void* self, void* element) {
    return KXmlGuiWindow_Action2((KXmlGuiWindow*)self, (QDomElement*)element);
}

QAction* k_xmlguiwindow_qbase_action2(void* self, void* element) {
    return KXmlGuiWindow_QBaseAction2((KXmlGuiWindow*)self, (QDomElement*)element);
}

void k_xmlguiwindow_on_action2(void* self, QAction* (*callback)(void*, void*)) {
    KXmlGuiWindow_OnAction2((KXmlGuiWindow*)self, (intptr_t)callback);
}

KActionCollection* k_xmlguiwindow_action_collection(void* self) {
    return KXmlGuiWindow_ActionCollection((KXmlGuiWindow*)self);
}

KActionCollection* k_xmlguiwindow_qbase_action_collection(void* self) {
    return KXmlGuiWindow_QBaseActionCollection((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_action_collection(void* self, KActionCollection* (*callback)()) {
    KXmlGuiWindow_OnActionCollection((KXmlGuiWindow*)self, (intptr_t)callback);
}

const char* k_xmlguiwindow_component_name(void* self) {
    libqt_string _str = KXmlGuiWindow_ComponentName((KXmlGuiWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xmlguiwindow_qbase_component_name(void* self) {
    libqt_string _str = KXmlGuiWindow_QBaseComponentName((KXmlGuiWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_on_component_name(void* self, const char* (*callback)()) {
    KXmlGuiWindow_OnComponentName((KXmlGuiWindow*)self, (intptr_t)callback);
}

QDomDocument* k_xmlguiwindow_dom_document(void* self) {
    return KXmlGuiWindow_DomDocument((KXmlGuiWindow*)self);
}

QDomDocument* k_xmlguiwindow_qbase_dom_document(void* self) {
    return KXmlGuiWindow_QBaseDomDocument((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_dom_document(void* self, QDomDocument* (*callback)()) {
    KXmlGuiWindow_OnDomDocument((KXmlGuiWindow*)self, (intptr_t)callback);
}

const char* k_xmlguiwindow_xml_file(void* self) {
    libqt_string _str = KXmlGuiWindow_XmlFile((KXmlGuiWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xmlguiwindow_qbase_xml_file(void* self) {
    libqt_string _str = KXmlGuiWindow_QBaseXmlFile((KXmlGuiWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_on_xml_file(void* self, const char* (*callback)()) {
    KXmlGuiWindow_OnXmlFile((KXmlGuiWindow*)self, (intptr_t)callback);
}

const char* k_xmlguiwindow_local_x_m_l_file(void* self) {
    libqt_string _str = KXmlGuiWindow_LocalXMLFile((KXmlGuiWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xmlguiwindow_qbase_local_x_m_l_file(void* self) {
    libqt_string _str = KXmlGuiWindow_QBaseLocalXMLFile((KXmlGuiWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_on_local_x_m_l_file(void* self, const char* (*callback)()) {
    KXmlGuiWindow_OnLocalXMLFile((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_set_component_name(void* self, const char* componentName, const char* componentDisplayName) {
    KXmlGuiWindow_SetComponentName((KXmlGuiWindow*)self, qstring(componentName), qstring(componentDisplayName));
}

void k_xmlguiwindow_qbase_set_component_name(void* self, const char* componentName, const char* componentDisplayName) {
    KXmlGuiWindow_QBaseSetComponentName((KXmlGuiWindow*)self, qstring(componentName), qstring(componentDisplayName));
}

void k_xmlguiwindow_on_set_component_name(void* self, void (*callback)(void*, const char*, const char*)) {
    KXmlGuiWindow_OnSetComponentName((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc) {
    KXmlGuiWindow_SetXMLFile((KXmlGuiWindow*)self, qstring(file), merge, setXMLDoc);
}

void k_xmlguiwindow_qbase_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc) {
    KXmlGuiWindow_QBaseSetXMLFile((KXmlGuiWindow*)self, qstring(file), merge, setXMLDoc);
}

void k_xmlguiwindow_on_set_x_m_l_file(void* self, void (*callback)(void*, const char*, bool, bool)) {
    KXmlGuiWindow_OnSetXMLFile((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_set_local_x_m_l_file(void* self, const char* file) {
    KXmlGuiWindow_SetLocalXMLFile((KXmlGuiWindow*)self, qstring(file));
}

void k_xmlguiwindow_qbase_set_local_x_m_l_file(void* self, const char* file) {
    KXmlGuiWindow_QBaseSetLocalXMLFile((KXmlGuiWindow*)self, qstring(file));
}

void k_xmlguiwindow_on_set_local_x_m_l_file(void* self, void (*callback)(void*, const char*)) {
    KXmlGuiWindow_OnSetLocalXMLFile((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_set_x_m_l(void* self, const char* document, bool merge) {
    KXmlGuiWindow_SetXML((KXmlGuiWindow*)self, qstring(document), merge);
}

void k_xmlguiwindow_qbase_set_x_m_l(void* self, const char* document, bool merge) {
    KXmlGuiWindow_QBaseSetXML((KXmlGuiWindow*)self, qstring(document), merge);
}

void k_xmlguiwindow_on_set_x_m_l(void* self, void (*callback)(void*, const char*, bool)) {
    KXmlGuiWindow_OnSetXML((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_set_d_o_m_document(void* self, void* document, bool merge) {
    KXmlGuiWindow_SetDOMDocument((KXmlGuiWindow*)self, (QDomDocument*)document, merge);
}

void k_xmlguiwindow_qbase_set_d_o_m_document(void* self, void* document, bool merge) {
    KXmlGuiWindow_QBaseSetDOMDocument((KXmlGuiWindow*)self, (QDomDocument*)document, merge);
}

void k_xmlguiwindow_on_set_d_o_m_document(void* self, void (*callback)(void*, void*, bool)) {
    KXmlGuiWindow_OnSetDOMDocument((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_state_changed(void* self, const char* newstate, int32_t reverse) {
    KXmlGuiWindow_StateChanged((KXmlGuiWindow*)self, qstring(newstate), reverse);
}

void k_xmlguiwindow_qbase_state_changed(void* self, const char* newstate, int32_t reverse) {
    KXmlGuiWindow_QBaseStateChanged((KXmlGuiWindow*)self, qstring(newstate), reverse);
}

void k_xmlguiwindow_on_state_changed(void* self, void (*callback)(void*, const char*, int32_t)) {
    KXmlGuiWindow_OnStateChanged((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_save_properties_internal(void* self, void* param1, int param2) {
    KXmlGuiWindow_SavePropertiesInternal((KXmlGuiWindow*)self, (KConfig*)param1, param2);
}

void k_xmlguiwindow_qbase_save_properties_internal(void* self, void* param1, int param2) {
    KXmlGuiWindow_QBaseSavePropertiesInternal((KXmlGuiWindow*)self, (KConfig*)param1, param2);
}

void k_xmlguiwindow_on_save_properties_internal(void* self, void (*callback)(void*, void*, int)) {
    KXmlGuiWindow_OnSavePropertiesInternal((KXmlGuiWindow*)self, (intptr_t)callback);
}

bool k_xmlguiwindow_read_properties_internal(void* self, void* param1, int param2) {
    return KXmlGuiWindow_ReadPropertiesInternal((KXmlGuiWindow*)self, (KConfig*)param1, param2);
}

bool k_xmlguiwindow_qbase_read_properties_internal(void* self, void* param1, int param2) {
    return KXmlGuiWindow_QBaseReadPropertiesInternal((KXmlGuiWindow*)self, (KConfig*)param1, param2);
}

void k_xmlguiwindow_on_read_properties_internal(void* self, bool (*callback)(void*, void*, int)) {
    KXmlGuiWindow_OnReadPropertiesInternal((KXmlGuiWindow*)self, (intptr_t)callback);
}

bool k_xmlguiwindow_settings_dirty(void* self) {
    return KXmlGuiWindow_SettingsDirty((KXmlGuiWindow*)self);
}

bool k_xmlguiwindow_qbase_settings_dirty(void* self) {
    return KXmlGuiWindow_QBaseSettingsDirty((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_settings_dirty(void* self, bool (*callback)()) {
    KXmlGuiWindow_OnSettingsDirty((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_save_auto_save_settings(void* self) {
    KXmlGuiWindow_SaveAutoSaveSettings((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_qbase_save_auto_save_settings(void* self) {
    KXmlGuiWindow_QBaseSaveAutoSaveSettings((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_save_auto_save_settings(void* self, void (*callback)()) {
    KXmlGuiWindow_OnSaveAutoSaveSettings((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_update_micro_focus(void* self) {
    KXmlGuiWindow_UpdateMicroFocus((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_qbase_update_micro_focus(void* self) {
    KXmlGuiWindow_QBaseUpdateMicroFocus((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_update_micro_focus(void* self, void (*callback)()) {
    KXmlGuiWindow_OnUpdateMicroFocus((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_create(void* self) {
    KXmlGuiWindow_Create((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_qbase_create(void* self) {
    KXmlGuiWindow_QBaseCreate((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_create(void* self, void (*callback)()) {
    KXmlGuiWindow_OnCreate((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_destroy(void* self) {
    KXmlGuiWindow_Destroy((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_qbase_destroy(void* self) {
    KXmlGuiWindow_QBaseDestroy((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_destroy(void* self, void (*callback)()) {
    KXmlGuiWindow_OnDestroy((KXmlGuiWindow*)self, (intptr_t)callback);
}

bool k_xmlguiwindow_focus_next_child(void* self) {
    return KXmlGuiWindow_FocusNextChild((KXmlGuiWindow*)self);
}

bool k_xmlguiwindow_qbase_focus_next_child(void* self) {
    return KXmlGuiWindow_QBaseFocusNextChild((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_focus_next_child(void* self, bool (*callback)()) {
    KXmlGuiWindow_OnFocusNextChild((KXmlGuiWindow*)self, (intptr_t)callback);
}

bool k_xmlguiwindow_focus_previous_child(void* self) {
    return KXmlGuiWindow_FocusPreviousChild((KXmlGuiWindow*)self);
}

bool k_xmlguiwindow_qbase_focus_previous_child(void* self) {
    return KXmlGuiWindow_QBaseFocusPreviousChild((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_focus_previous_child(void* self, bool (*callback)()) {
    KXmlGuiWindow_OnFocusPreviousChild((KXmlGuiWindow*)self, (intptr_t)callback);
}

QObject* k_xmlguiwindow_sender(void* self) {
    return KXmlGuiWindow_Sender((KXmlGuiWindow*)self);
}

QObject* k_xmlguiwindow_qbase_sender(void* self) {
    return KXmlGuiWindow_QBaseSender((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_sender(void* self, QObject* (*callback)()) {
    KXmlGuiWindow_OnSender((KXmlGuiWindow*)self, (intptr_t)callback);
}

int32_t k_xmlguiwindow_sender_signal_index(void* self) {
    return KXmlGuiWindow_SenderSignalIndex((KXmlGuiWindow*)self);
}

int32_t k_xmlguiwindow_qbase_sender_signal_index(void* self) {
    return KXmlGuiWindow_QBaseSenderSignalIndex((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KXmlGuiWindow_OnSenderSignalIndex((KXmlGuiWindow*)self, (intptr_t)callback);
}

int32_t k_xmlguiwindow_receivers(void* self, const char* signal) {
    return KXmlGuiWindow_Receivers((KXmlGuiWindow*)self, signal);
}

int32_t k_xmlguiwindow_qbase_receivers(void* self, const char* signal) {
    return KXmlGuiWindow_QBaseReceivers((KXmlGuiWindow*)self, signal);
}

void k_xmlguiwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KXmlGuiWindow_OnReceivers((KXmlGuiWindow*)self, (intptr_t)callback);
}

bool k_xmlguiwindow_is_signal_connected(void* self, void* signal) {
    return KXmlGuiWindow_IsSignalConnected((KXmlGuiWindow*)self, (QMetaMethod*)signal);
}

bool k_xmlguiwindow_qbase_is_signal_connected(void* self, void* signal) {
    return KXmlGuiWindow_QBaseIsSignalConnected((KXmlGuiWindow*)self, (QMetaMethod*)signal);
}

void k_xmlguiwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KXmlGuiWindow_OnIsSignalConnected((KXmlGuiWindow*)self, (intptr_t)callback);
}

double k_xmlguiwindow_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KXmlGuiWindow_GetDecodedMetricF((KXmlGuiWindow*)self, metricA, metricB);
}

double k_xmlguiwindow_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KXmlGuiWindow_QBaseGetDecodedMetricF((KXmlGuiWindow*)self, metricA, metricB);
}

void k_xmlguiwindow_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KXmlGuiWindow_OnGetDecodedMetricF((KXmlGuiWindow*)self, (intptr_t)callback);
}

const char* k_xmlguiwindow_standards_xml_file_location(void* self) {
    libqt_string _str = KXmlGuiWindow_StandardsXmlFileLocation((KXmlGuiWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xmlguiwindow_qbase_standards_xml_file_location(void* self) {
    libqt_string _str = KXmlGuiWindow_QBaseStandardsXmlFileLocation((KXmlGuiWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiwindow_on_standards_xml_file_location(void* self, const char* (*callback)()) {
    KXmlGuiWindow_OnStandardsXmlFileLocation((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_load_standards_xml_file(void* self) {
    KXmlGuiWindow_LoadStandardsXmlFile((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_qbase_load_standards_xml_file(void* self) {
    KXmlGuiWindow_QBaseLoadStandardsXmlFile((KXmlGuiWindow*)self);
}

void k_xmlguiwindow_on_load_standards_xml_file(void* self, void (*callback)()) {
    KXmlGuiWindow_OnLoadStandardsXmlFile((KXmlGuiWindow*)self, (intptr_t)callback);
}

void k_xmlguiwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_xmlguiwindow_delete(void* self) {
    KXmlGuiWindow_Delete((KXmlGuiWindow*)(self));
}

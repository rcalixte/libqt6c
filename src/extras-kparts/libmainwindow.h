#pragma once
#ifndef SRC_EXTRAS_KPARTS_QT6C_LIBMAINWINDOW_H
#define SRC_EXTRAS_KPARTS_QT6C_LIBMAINWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html)

/// k_parts__mainwindow_new constructs a new KParts::MainWindow object.
///
/// @param parent QWidget*
///
KParts__MainWindow* k_parts__mainwindow_new(void* parent);

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html)

/// k_parts__mainwindow_new2 constructs a new KParts::MainWindow object.
///
KParts__MainWindow* k_parts__mainwindow_new2();

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html)

/// k_parts__mainwindow_new3 constructs a new KParts::MainWindow object.
///
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
KParts__MainWindow* k_parts__mainwindow_new3(void* parent, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KParts__MainWindow*
///
const QMetaObject* k_parts__mainwindow_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KParts__MainWindow*
/// @param callback const QMetaObject* func()
///
void k_parts__mainwindow_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KParts__MainWindow*
///
const QMetaObject* k_parts__mainwindow_qbase_meta_object(void* self);

/// @param self KParts__MainWindow*
/// @param param1 const char*
///
void* k_parts__mainwindow_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KParts__MainWindow*
/// @param callback void* func(KParts__MainWindow* self, const char* param1)
///
void k_parts__mainwindow_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KParts__MainWindow*
/// @param param1 const char*
///
void* k_parts__mainwindow_qbase_metacast(void* self, const char* param1);

/// @param self KParts__MainWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_parts__mainwindow_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KParts__MainWindow*
/// @param callback int32_t func(KParts__MainWindow* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_parts__mainwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KParts__MainWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_parts__mainwindow_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_parts__mainwindow_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#configureToolbars)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_configure_toolbars(void* self);

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#configureToolbars)
///
/// Allows for overriding the related default method
///
/// @param self KParts__MainWindow*
/// @param callback void func()
///
void k_parts__mainwindow_on_configure_toolbars(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#configureToolbars)
///
/// Base class method implementation
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_qbase_configure_toolbars(void* self);

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#createGUI)
///
/// @param self KParts__MainWindow*
/// @param part KParts__Part*
///
void k_parts__mainwindow_create_g_u_i(void* self, void* part);

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#createGUI)
///
/// Allows for overriding the related default method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, KParts__Part* part)
///
void k_parts__mainwindow_on_create_g_u_i(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#createGUI)
///
/// Base class method implementation
///
/// @param self KParts__MainWindow*
/// @param part KParts__Part*
///
void k_parts__mainwindow_qbase_create_g_u_i(void* self, void* part);

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#setWindowTitleHandling)
///
/// @param self KParts__MainWindow*
/// @param enabled bool
///
void k_parts__mainwindow_set_window_title_handling(void* self, bool enabled);

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#setWindowTitleHandling)
///
/// Allows for overriding the related default method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, bool enabled)
///
void k_parts__mainwindow_on_set_window_title_handling(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#setWindowTitleHandling)
///
/// Base class method implementation
///
/// @param self KParts__MainWindow*
/// @param enabled bool
///
void k_parts__mainwindow_qbase_set_window_title_handling(void* self, bool enabled);

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#slotSetStatusBarText)
///
/// @param self KParts__MainWindow*
/// @param param1 const char*
///
void k_parts__mainwindow_slot_set_status_bar_text(void* self, const char* param1);

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#slotSetStatusBarText)
///
/// Allows for overriding the related default method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, const char* param1)
///
void k_parts__mainwindow_on_slot_set_status_bar_text(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#slotSetStatusBarText)
///
/// Base class method implementation
///
/// @param self KParts__MainWindow*
/// @param param1 const char*
///
void k_parts__mainwindow_qbase_slot_set_status_bar_text(void* self, const char* param1);

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#saveNewToolbarConfig)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_save_new_toolbar_config(void* self);

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#saveNewToolbarConfig)
///
/// Allows for overriding the related default method
///
/// @param self KParts__MainWindow*
/// @param callback void func()
///
void k_parts__mainwindow_on_save_new_toolbar_config(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#saveNewToolbarConfig)
///
/// Base class method implementation
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_qbase_save_new_toolbar_config(void* self);

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#createShellGUI)
///
/// @param self KParts__MainWindow*
/// @param create bool
///
void k_parts__mainwindow_create_shell_g_u_i(void* self, bool create);

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#createShellGUI)
///
/// Allows for overriding the related default method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, bool create)
///
void k_parts__mainwindow_on_create_shell_g_u_i(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kparts-mainwindow.html#createShellGUI)
///
/// Base class method implementation
///
/// @param self KParts__MainWindow*
/// @param create bool
///
void k_parts__mainwindow_qbase_create_shell_g_u_i(void* self, bool create);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_parts__mainwindow_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_parts__mainwindow_tr3(const char* s, const char* c, int n);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setHelpMenuEnabled)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_set_help_menu_enabled(void* self);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isHelpMenuEnabled)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_help_menu_enabled(void* self);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setStandardToolBarMenuEnabled)
///
/// @param self KParts__MainWindow*
/// @param showToolBarMenu bool
///
void k_parts__mainwindow_set_standard_tool_bar_menu_enabled(void* self, bool showToolBarMenu);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isStandardToolBarMenuEnabled)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_standard_tool_bar_menu_enabled(void* self);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#createStandardStatusBarAction)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_create_standard_status_bar_action(void* self);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_setup_g_u_i(void* self);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KParts__MainWindow*
/// @param defaultSize QSize*
///
void k_parts__mainwindow_setup_g_u_i2(void* self, void* defaultSize);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#toolBarMenuAction)
///
/// @param self KParts__MainWindow*
///
QAction* k_parts__mainwindow_tool_bar_menu_action(void* self);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupToolbarMenuActions)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_setup_toolbar_menu_actions(void* self);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#toolBarNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KParts__MainWindow*
///
const char** k_parts__mainwindow_tool_bar_names(void* self);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setCommandBarEnabled)
///
/// @param self KParts__MainWindow*
/// @param showCommandBar bool
///
void k_parts__mainwindow_set_command_bar_enabled(void* self, bool showCommandBar);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isCommandBarEnabled)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_command_bar_enabled(void* self);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
///
/// @param self KParts__MainWindow*
/// @param newstate const char*
/// @param reverse bool
///
void k_parts__mainwindow_slot_state_changed2(void* self, const char* newstate, bool reverse);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isToolBarVisible)
///
/// @param self KParts__MainWindow*
/// @param name const char*
///
bool k_parts__mainwindow_is_tool_bar_visible(void* self, const char* name);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setToolBarVisible)
///
/// @param self KParts__MainWindow*
/// @param name const char*
/// @param visible bool
///
void k_parts__mainwindow_set_tool_bar_visible(void* self, const char* name, bool visible);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setHelpMenuEnabled)
///
/// @param self KParts__MainWindow*
/// @param showHelpMenu bool
///
void k_parts__mainwindow_set_help_menu_enabled1(void* self, bool showHelpMenu);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#createGUI)
///
/// @param self KParts__MainWindow*
/// @param xmlfile const char*
///
void k_parts__mainwindow_create_g_u_i1(void* self, const char* xmlfile);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KParts__MainWindow*
/// @param options flag of enum KXmlGuiWindow__StandardWindowOption
///
void k_parts__mainwindow_setup_g_u_i1(void* self, int32_t options);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KParts__MainWindow*
/// @param options flag of enum KXmlGuiWindow__StandardWindowOption
/// @param xmlfile const char*
///
void k_parts__mainwindow_setup_g_u_i22(void* self, int32_t options, const char* xmlfile);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KParts__MainWindow*
/// @param defaultSize QSize*
/// @param options flag of enum KXmlGuiWindow__StandardWindowOption
///
void k_parts__mainwindow_setup_g_u_i23(void* self, void* defaultSize, int32_t options);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KParts__MainWindow*
/// @param defaultSize QSize*
/// @param options flag of enum KXmlGuiWindow__StandardWindowOption
/// @param xmlfile const char*
///
void k_parts__mainwindow_setup_g_u_i3(void* self, void* defaultSize, int32_t options, const char* xmlfile);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#canBeRestored)
///
/// @param numberOfInstances int
///
bool k_parts__mainwindow_can_be_restored(int numberOfInstances);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#classNameOfToplevel)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param instanceNumber int
///
const char* k_parts__mainwindow_class_name_of_toplevel(int instanceNumber);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#restore)
///
/// @param self KParts__MainWindow*
/// @param numberOfInstances int
///
bool k_parts__mainwindow_restore(void* self, int numberOfInstances);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#hasMenuBar)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_has_menu_bar(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#memberList)
///
/// @return libqt_list of KMainWindow*
///
libqt_list k_parts__mainwindow_member_list();

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#toolBar)
///
/// @param self KParts__MainWindow*
///
KToolBar* k_parts__mainwindow_tool_bar(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#toolBars)
///
/// @param self KParts__MainWindow*
///
/// @return libqt_list of KToolBar*
///
libqt_list k_parts__mainwindow_tool_bars(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_set_auto_save_settings(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KParts__MainWindow*
/// @param group KConfigGroup*
///
void k_parts__mainwindow_set_auto_save_settings2(void* self, void* group);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#resetAutoSaveSettings)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_reset_auto_save_settings(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveSettings)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_auto_save_settings(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveGroup)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_auto_save_group(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveConfigGroup)
///
/// @param self KParts__MainWindow*
///
KConfigGroup* k_parts__mainwindow_auto_save_config_group(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setStateConfigGroup)
///
/// @param self KParts__MainWindow*
/// @param configGroup const char*
///
void k_parts__mainwindow_set_state_config_group(void* self, const char* configGroup);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#stateConfigGroup)
///
/// @param self KParts__MainWindow*
///
KConfigGroup* k_parts__mainwindow_state_config_group(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveMainWindowSettings)
///
/// @param self KParts__MainWindow*
/// @param config KConfigGroup*
///
void k_parts__mainwindow_save_main_window_settings(void* self, void* config);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#dbusName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_dbus_name(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
///
/// @param self KParts__MainWindow*
/// @param caption const char*
/// @param modified bool
///
void k_parts__mainwindow_set_caption2(void* self, const char* caption, bool modified);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Allows for overriding the related default method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, const char* caption, bool modified)
///
void k_parts__mainwindow_on_set_caption2(void* self, void (*callback)(void*, const char*, bool));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Base class method implementation
///
/// @param self KParts__MainWindow*
/// @param caption const char*
/// @param modified bool
///
void k_parts__mainwindow_qbase_set_caption2(void* self, const char* caption, bool modified);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#appHelpActivated)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_app_help_activated(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setSettingsDirty)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_set_settings_dirty(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#restore)
///
/// @param self KParts__MainWindow*
/// @param numberOfInstances int
/// @param show bool
///
bool k_parts__mainwindow_restore2(void* self, int numberOfInstances, bool show);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#toolBar)
///
/// @param self KParts__MainWindow*
/// @param name const char*
///
KToolBar* k_parts__mainwindow_tool_bar1(void* self, const char* name);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KParts__MainWindow*
/// @param groupName const char*
///
void k_parts__mainwindow_set_auto_save_settings1(void* self, const char* groupName);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KParts__MainWindow*
/// @param groupName const char*
/// @param saveWindowSize bool
///
void k_parts__mainwindow_set_auto_save_settings22(void* self, const char* groupName, bool saveWindowSize);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KParts__MainWindow*
/// @param group KConfigGroup*
/// @param saveWindowSize bool
///
void k_parts__mainwindow_set_auto_save_settings23(void* self, void* group, bool saveWindowSize);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#iconSize)
///
/// @param self KParts__MainWindow*
///
QSize* k_parts__mainwindow_icon_size(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setIconSize)
///
/// @param self KParts__MainWindow*
/// @param iconSize QSize*
///
void k_parts__mainwindow_set_icon_size(void* self, void* iconSize);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyle)
///
/// @param self KParts__MainWindow*
///
/// @return enum Qt__ToolButtonStyle
///
int32_t k_parts__mainwindow_tool_button_style(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setToolButtonStyle)
///
/// @param self KParts__MainWindow*
/// @param toolButtonStyle enum Qt__ToolButtonStyle
///
void k_parts__mainwindow_set_tool_button_style(void* self, int32_t toolButtonStyle);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isAnimated)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_animated(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isDockNestingEnabled)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_dock_nesting_enabled(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#documentMode)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_document_mode(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setDocumentMode)
///
/// @param self KParts__MainWindow*
/// @param enabled bool
///
void k_parts__mainwindow_set_document_mode(void* self, bool enabled);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabShape)
///
/// @param self KParts__MainWindow*
///
/// @return enum QTabWidget__TabShape
///
int32_t k_parts__mainwindow_tab_shape(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setTabShape)
///
/// @param self KParts__MainWindow*
/// @param tabShape enum QTabWidget__TabShape
///
void k_parts__mainwindow_set_tab_shape(void* self, int32_t tabShape);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabPosition)
///
/// @param self KParts__MainWindow*
/// @param area enum Qt__DockWidgetArea
///
/// @return enum QTabWidget__TabPosition
///
int32_t k_parts__mainwindow_tab_position(void* self, int32_t area);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setTabPosition)
///
/// @param self KParts__MainWindow*
/// @param areas flag of enum Qt__DockWidgetArea
/// @param tabPosition enum QTabWidget__TabPosition
///
void k_parts__mainwindow_set_tab_position(void* self, int32_t areas, int32_t tabPosition);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setDockOptions)
///
/// @param self KParts__MainWindow*
/// @param options flag of enum QMainWindow__DockOption
///
void k_parts__mainwindow_set_dock_options(void* self, int32_t options);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#dockOptions)
///
/// @param self KParts__MainWindow*
///
/// @return flag of enum QMainWindow__DockOption
///
int32_t k_parts__mainwindow_dock_options(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isSeparator)
///
/// @param self KParts__MainWindow*
/// @param pos QPoint*
///
bool k_parts__mainwindow_is_separator(void* self, void* pos);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#menuBar)
///
/// @param self KParts__MainWindow*
///
QMenuBar* k_parts__mainwindow_menu_bar(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setMenuBar)
///
/// @param self KParts__MainWindow*
/// @param menubar QMenuBar*
///
void k_parts__mainwindow_set_menu_bar(void* self, void* menubar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#menuWidget)
///
/// @param self KParts__MainWindow*
///
QWidget* k_parts__mainwindow_menu_widget(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setMenuWidget)
///
/// @param self KParts__MainWindow*
/// @param menubar QWidget*
///
void k_parts__mainwindow_set_menu_widget(void* self, void* menubar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#statusBar)
///
/// @param self KParts__MainWindow*
///
QStatusBar* k_parts__mainwindow_status_bar(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setStatusBar)
///
/// @param self KParts__MainWindow*
/// @param statusbar QStatusBar*
///
void k_parts__mainwindow_set_status_bar(void* self, void* statusbar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#centralWidget)
///
/// @param self KParts__MainWindow*
///
QWidget* k_parts__mainwindow_central_widget(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setCentralWidget)
///
/// @param self KParts__MainWindow*
/// @param widget QWidget*
///
void k_parts__mainwindow_set_central_widget(void* self, void* widget);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#takeCentralWidget)
///
/// @param self KParts__MainWindow*
///
QWidget* k_parts__mainwindow_take_central_widget(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setCorner)
///
/// @param self KParts__MainWindow*
/// @param corner enum Qt__Corner
/// @param area enum Qt__DockWidgetArea
///
void k_parts__mainwindow_set_corner(void* self, int32_t corner, int32_t area);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#corner)
///
/// @param self KParts__MainWindow*
/// @param corner enum Qt__Corner
///
/// @return enum Qt__DockWidgetArea
///
int32_t k_parts__mainwindow_corner(void* self, int32_t corner);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_add_tool_bar_break(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBarBreak)
///
/// @param self KParts__MainWindow*
/// @param before QToolBar*
///
void k_parts__mainwindow_insert_tool_bar_break(void* self, void* before);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// @param self KParts__MainWindow*
/// @param area enum Qt__ToolBarArea
/// @param toolbar QToolBar*
///
void k_parts__mainwindow_add_tool_bar(void* self, int32_t area, void* toolbar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// @param self KParts__MainWindow*
/// @param toolbar QToolBar*
///
void k_parts__mainwindow_add_tool_bar2(void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// @param self KParts__MainWindow*
/// @param title const char*
///
QToolBar* k_parts__mainwindow_add_tool_bar3(void* self, const char* title);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBar)
///
/// @param self KParts__MainWindow*
/// @param before QToolBar*
/// @param toolbar QToolBar*
///
void k_parts__mainwindow_insert_tool_bar(void* self, void* before, void* toolbar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBar)
///
/// @param self KParts__MainWindow*
/// @param toolbar QToolBar*
///
void k_parts__mainwindow_remove_tool_bar(void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBarBreak)
///
/// @param self KParts__MainWindow*
/// @param before QToolBar*
///
void k_parts__mainwindow_remove_tool_bar_break(void* self, void* before);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#unifiedTitleAndToolBarOnMac)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_unified_title_and_tool_bar_on_mac(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolBarArea)
///
/// @param self KParts__MainWindow*
/// @param toolbar QToolBar*
///
/// @return enum Qt__ToolBarArea
///
int32_t k_parts__mainwindow_tool_bar_area(void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolBarBreak)
///
/// @param self KParts__MainWindow*
/// @param toolbar QToolBar*
///
bool k_parts__mainwindow_tool_bar_break(void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
///
/// @param self KParts__MainWindow*
/// @param area enum Qt__DockWidgetArea
/// @param dockwidget QDockWidget*
///
void k_parts__mainwindow_add_dock_widget(void* self, int32_t area, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
///
/// @param self KParts__MainWindow*
/// @param area enum Qt__DockWidgetArea
/// @param dockwidget QDockWidget*
/// @param orientation enum Qt__Orientation
///
void k_parts__mainwindow_add_dock_widget2(void* self, int32_t area, void* dockwidget, int32_t orientation);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#splitDockWidget)
///
/// @param self KParts__MainWindow*
/// @param after QDockWidget*
/// @param dockwidget QDockWidget*
/// @param orientation enum Qt__Orientation
///
void k_parts__mainwindow_split_dock_widget(void* self, void* after, void* dockwidget, int32_t orientation);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabifyDockWidget)
///
/// @param self KParts__MainWindow*
/// @param first QDockWidget*
/// @param second QDockWidget*
///
void k_parts__mainwindow_tabify_dock_widget(void* self, void* first, void* second);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgets)
///
/// @param self KParts__MainWindow*
/// @param dockwidget QDockWidget*
///
/// @return libqt_list of QDockWidget*
///
libqt_list k_parts__mainwindow_tabified_dock_widgets(void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#removeDockWidget)
///
/// @param self KParts__MainWindow*
/// @param dockwidget QDockWidget*
///
void k_parts__mainwindow_remove_dock_widget(void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#restoreDockWidget)
///
/// @param self KParts__MainWindow*
/// @param dockwidget QDockWidget*
///
bool k_parts__mainwindow_restore_dock_widget(void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#dockWidgetArea)
///
/// @param self KParts__MainWindow*
/// @param dockwidget QDockWidget*
///
/// @return enum Qt__DockWidgetArea
///
int32_t k_parts__mainwindow_dock_widget_area(void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#resizeDocks)
///
/// @param self KParts__MainWindow*
/// @param docks libqt_list of QDockWidget*
/// @param sizes libqt_list of int
/// @param orientation enum Qt__Orientation
///
void k_parts__mainwindow_resize_docks(void* self, libqt_list /* of QDockWidget* */ docks, libqt_list /* of int */ sizes, int32_t orientation);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KParts__MainWindow*
///
char* k_parts__mainwindow_save_state(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
///
/// @param self KParts__MainWindow*
/// @param state const char*
///
bool k_parts__mainwindow_restore_state(void* self, const char* state);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setAnimated)
///
/// @param self KParts__MainWindow*
/// @param enabled bool
///
void k_parts__mainwindow_set_animated(void* self, bool enabled);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setDockNestingEnabled)
///
/// @param self KParts__MainWindow*
/// @param enabled bool
///
void k_parts__mainwindow_set_dock_nesting_enabled(void* self, bool enabled);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setUnifiedTitleAndToolBarOnMac)
///
/// @param self KParts__MainWindow*
/// @param set bool
///
void k_parts__mainwindow_set_unified_title_and_tool_bar_on_mac(void* self, bool set);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
///
/// @param self KParts__MainWindow*
/// @param iconSize QSize*
///
void k_parts__mainwindow_icon_size_changed(void* self, void* iconSize);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QSize* iconSize)
///
void k_parts__mainwindow_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
///
/// @param self KParts__MainWindow*
/// @param toolButtonStyle enum Qt__ToolButtonStyle
///
void k_parts__mainwindow_tool_button_style_changed(void* self, int32_t toolButtonStyle);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, enum Qt__ToolButtonStyle toolButtonStyle)
///
void k_parts__mainwindow_on_tool_button_style_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
///
/// @param self KParts__MainWindow*
/// @param dockWidget QDockWidget*
///
void k_parts__mainwindow_tabified_dock_widget_activated(void* self, void* dockWidget);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QDockWidget* dockWidget)
///
void k_parts__mainwindow_on_tabified_dock_widget_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
///
/// @param self KParts__MainWindow*
/// @param area enum Qt__ToolBarArea
///
void k_parts__mainwindow_add_tool_bar_break1(void* self, int32_t area);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KParts__MainWindow*
/// @param version int
///
char* k_parts__mainwindow_save_state1(void* self, int version);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
///
/// @param self KParts__MainWindow*
/// @param state const char*
/// @param version int
///
bool k_parts__mainwindow_restore_state2(void* self, const char* state, int version);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KParts__MainWindow*
///
uintptr_t k_parts__mainwindow_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KParts__MainWindow*
///
uintptr_t k_parts__mainwindow_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KParts__MainWindow*
///
uintptr_t k_parts__mainwindow_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KParts__MainWindow*
///
QStyle* k_parts__mainwindow_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KParts__MainWindow*
/// @param style QStyle*
///
void k_parts__mainwindow_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KParts__MainWindow*
///
/// @return enum Qt__WindowModality
///
int32_t k_parts__mainwindow_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KParts__MainWindow*
/// @param windowModality enum Qt__WindowModality
///
void k_parts__mainwindow_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KParts__MainWindow*
/// @param param1 QWidget*
///
bool k_parts__mainwindow_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KParts__MainWindow*
/// @param enabled bool
///
void k_parts__mainwindow_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KParts__MainWindow*
/// @param disabled bool
///
void k_parts__mainwindow_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KParts__MainWindow*
/// @param windowModified bool
///
void k_parts__mainwindow_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KParts__MainWindow*
///
QRect* k_parts__mainwindow_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KParts__MainWindow*
///
const QRect* k_parts__mainwindow_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KParts__MainWindow*
///
QRect* k_parts__mainwindow_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KParts__MainWindow*
///
QPoint* k_parts__mainwindow_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KParts__MainWindow*
///
QSize* k_parts__mainwindow_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KParts__MainWindow*
///
QSize* k_parts__mainwindow_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KParts__MainWindow*
///
QRect* k_parts__mainwindow_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KParts__MainWindow*
///
QRect* k_parts__mainwindow_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KParts__MainWindow*
///
QRegion* k_parts__mainwindow_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KParts__MainWindow*
///
QSize* k_parts__mainwindow_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KParts__MainWindow*
///
QSize* k_parts__mainwindow_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KParts__MainWindow*
/// @param minimumSize QSize*
///
void k_parts__mainwindow_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KParts__MainWindow*
/// @param minw int
/// @param minh int
///
void k_parts__mainwindow_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KParts__MainWindow*
/// @param maximumSize QSize*
///
void k_parts__mainwindow_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KParts__MainWindow*
/// @param maxw int
/// @param maxh int
///
void k_parts__mainwindow_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KParts__MainWindow*
/// @param minw int
///
void k_parts__mainwindow_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KParts__MainWindow*
/// @param minh int
///
void k_parts__mainwindow_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KParts__MainWindow*
/// @param maxw int
///
void k_parts__mainwindow_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KParts__MainWindow*
/// @param maxh int
///
void k_parts__mainwindow_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KParts__MainWindow*
///
QSize* k_parts__mainwindow_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KParts__MainWindow*
/// @param sizeIncrement QSize*
///
void k_parts__mainwindow_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KParts__MainWindow*
/// @param w int
/// @param h int
///
void k_parts__mainwindow_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KParts__MainWindow*
///
QSize* k_parts__mainwindow_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KParts__MainWindow*
/// @param baseSize QSize*
///
void k_parts__mainwindow_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KParts__MainWindow*
/// @param basew int
/// @param baseh int
///
void k_parts__mainwindow_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KParts__MainWindow*
/// @param fixedSize QSize*
///
void k_parts__mainwindow_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KParts__MainWindow*
/// @param w int
/// @param h int
///
void k_parts__mainwindow_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KParts__MainWindow*
/// @param w int
///
void k_parts__mainwindow_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KParts__MainWindow*
/// @param h int
///
void k_parts__mainwindow_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KParts__MainWindow*
/// @param param1 QPointF*
///
QPointF* k_parts__mainwindow_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KParts__MainWindow*
/// @param param1 QPoint*
///
QPoint* k_parts__mainwindow_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KParts__MainWindow*
/// @param param1 QPointF*
///
QPointF* k_parts__mainwindow_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KParts__MainWindow*
/// @param param1 QPoint*
///
QPoint* k_parts__mainwindow_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KParts__MainWindow*
/// @param param1 QPointF*
///
QPointF* k_parts__mainwindow_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KParts__MainWindow*
/// @param param1 QPoint*
///
QPoint* k_parts__mainwindow_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KParts__MainWindow*
/// @param param1 QPointF*
///
QPointF* k_parts__mainwindow_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KParts__MainWindow*
/// @param param1 QPoint*
///
QPoint* k_parts__mainwindow_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KParts__MainWindow*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_parts__mainwindow_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KParts__MainWindow*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_parts__mainwindow_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KParts__MainWindow*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_parts__mainwindow_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KParts__MainWindow*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_parts__mainwindow_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KParts__MainWindow*
///
QWidget* k_parts__mainwindow_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KParts__MainWindow*
///
QWidget* k_parts__mainwindow_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KParts__MainWindow*
///
QWidget* k_parts__mainwindow_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KParts__MainWindow*
///
const QPalette* k_parts__mainwindow_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KParts__MainWindow*
/// @param palette QPalette*
///
void k_parts__mainwindow_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KParts__MainWindow*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_parts__mainwindow_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KParts__MainWindow*
///
/// @return enum QPalette__ColorRole
///
int32_t k_parts__mainwindow_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KParts__MainWindow*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_parts__mainwindow_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KParts__MainWindow*
///
/// @return enum QPalette__ColorRole
///
int32_t k_parts__mainwindow_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KParts__MainWindow*
///
const QFont* k_parts__mainwindow_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KParts__MainWindow*
/// @param font QFont*
///
void k_parts__mainwindow_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KParts__MainWindow*
///
QFontMetrics* k_parts__mainwindow_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KParts__MainWindow*
///
QFontInfo* k_parts__mainwindow_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KParts__MainWindow*
///
QCursor* k_parts__mainwindow_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KParts__MainWindow*
/// @param cursor QCursor*
///
void k_parts__mainwindow_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KParts__MainWindow*
/// @param enable bool
///
void k_parts__mainwindow_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KParts__MainWindow*
/// @param enable bool
///
void k_parts__mainwindow_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KParts__MainWindow*
/// @param mask QBitmap*
///
void k_parts__mainwindow_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KParts__MainWindow*
/// @param mask QRegion*
///
void k_parts__mainwindow_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KParts__MainWindow*
///
QRegion* k_parts__mainwindow_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KParts__MainWindow*
/// @param target QPaintDevice*
///
void k_parts__mainwindow_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KParts__MainWindow*
/// @param painter QPainter*
///
void k_parts__mainwindow_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KParts__MainWindow*
///
QPixmap* k_parts__mainwindow_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KParts__MainWindow*
///
QGraphicsEffect* k_parts__mainwindow_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KParts__MainWindow*
/// @param effect QGraphicsEffect*
///
void k_parts__mainwindow_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KParts__MainWindow*
/// @param type enum Qt__GestureType
///
void k_parts__mainwindow_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KParts__MainWindow*
/// @param type enum Qt__GestureType
///
void k_parts__mainwindow_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KParts__MainWindow*
/// @param windowTitle const char*
///
void k_parts__mainwindow_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KParts__MainWindow*
/// @param styleSheet const char*
///
void k_parts__mainwindow_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KParts__MainWindow*
/// @param icon QIcon*
///
void k_parts__mainwindow_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KParts__MainWindow*
///
QIcon* k_parts__mainwindow_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KParts__MainWindow*
/// @param windowIconText const char*
///
void k_parts__mainwindow_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KParts__MainWindow*
/// @param windowRole const char*
///
void k_parts__mainwindow_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KParts__MainWindow*
/// @param filePath const char*
///
void k_parts__mainwindow_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KParts__MainWindow*
/// @param level double
///
void k_parts__mainwindow_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KParts__MainWindow*
///
double k_parts__mainwindow_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KParts__MainWindow*
/// @param toolTip const char*
///
void k_parts__mainwindow_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KParts__MainWindow*
/// @param msec int
///
void k_parts__mainwindow_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KParts__MainWindow*
/// @param statusTip const char*
///
void k_parts__mainwindow_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KParts__MainWindow*
/// @param whatsThis const char*
///
void k_parts__mainwindow_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KParts__MainWindow*
/// @param name const char*
///
void k_parts__mainwindow_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KParts__MainWindow*
/// @param description const char*
///
void k_parts__mainwindow_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KParts__MainWindow*
/// @param direction enum Qt__LayoutDirection
///
void k_parts__mainwindow_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KParts__MainWindow*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_parts__mainwindow_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KParts__MainWindow*
/// @param locale QLocale*
///
void k_parts__mainwindow_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KParts__MainWindow*
///
QLocale* k_parts__mainwindow_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KParts__MainWindow*
/// @param reason enum Qt__FocusReason
///
void k_parts__mainwindow_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KParts__MainWindow*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_parts__mainwindow_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KParts__MainWindow*
/// @param policy enum Qt__FocusPolicy
///
void k_parts__mainwindow_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_parts__mainwindow_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KParts__MainWindow*
/// @param focusProxy QWidget*
///
void k_parts__mainwindow_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KParts__MainWindow*
///
QWidget* k_parts__mainwindow_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KParts__MainWindow*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_parts__mainwindow_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KParts__MainWindow*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_parts__mainwindow_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KParts__MainWindow*
/// @param param1 QCursor*
///
void k_parts__mainwindow_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KParts__MainWindow*
/// @param key QKeySequence*
///
int32_t k_parts__mainwindow_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KParts__MainWindow*
/// @param id int
///
void k_parts__mainwindow_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KParts__MainWindow*
/// @param id int
///
void k_parts__mainwindow_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KParts__MainWindow*
/// @param id int
///
void k_parts__mainwindow_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_parts__mainwindow_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_parts__mainwindow_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KParts__MainWindow*
/// @param enable bool
///
void k_parts__mainwindow_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KParts__MainWindow*
///
QGraphicsProxyWidget* k_parts__mainwindow_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KParts__MainWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_parts__mainwindow_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KParts__MainWindow*
/// @param param1 QRect*
///
void k_parts__mainwindow_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KParts__MainWindow*
/// @param param1 QRegion*
///
void k_parts__mainwindow_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KParts__MainWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_parts__mainwindow_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KParts__MainWindow*
/// @param param1 QRect*
///
void k_parts__mainwindow_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KParts__MainWindow*
/// @param param1 QRegion*
///
void k_parts__mainwindow_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KParts__MainWindow*
/// @param hidden bool
///
void k_parts__mainwindow_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KParts__MainWindow*
/// @param param1 QWidget*
///
void k_parts__mainwindow_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KParts__MainWindow*
/// @param x int
/// @param y int
///
void k_parts__mainwindow_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KParts__MainWindow*
/// @param param1 QPoint*
///
void k_parts__mainwindow_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KParts__MainWindow*
/// @param w int
/// @param h int
///
void k_parts__mainwindow_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KParts__MainWindow*
/// @param param1 QSize*
///
void k_parts__mainwindow_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KParts__MainWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_parts__mainwindow_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KParts__MainWindow*
/// @param geometry QRect*
///
void k_parts__mainwindow_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KParts__MainWindow*
///
char* k_parts__mainwindow_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KParts__MainWindow*
/// @param geometry const char*
///
bool k_parts__mainwindow_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KParts__MainWindow*
/// @param param1 QWidget*
///
bool k_parts__mainwindow_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KParts__MainWindow*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_parts__mainwindow_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KParts__MainWindow*
/// @param state flag of enum Qt__WindowState
///
void k_parts__mainwindow_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KParts__MainWindow*
/// @param state flag of enum Qt__WindowState
///
void k_parts__mainwindow_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KParts__MainWindow*
///
QSizePolicy* k_parts__mainwindow_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KParts__MainWindow*
/// @param sizePolicy QSizePolicy*
///
void k_parts__mainwindow_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KParts__MainWindow*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_parts__mainwindow_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KParts__MainWindow*
///
QRegion* k_parts__mainwindow_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KParts__MainWindow*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_parts__mainwindow_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KParts__MainWindow*
/// @param margins QMargins*
///
void k_parts__mainwindow_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KParts__MainWindow*
///
QMargins* k_parts__mainwindow_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KParts__MainWindow*
///
QRect* k_parts__mainwindow_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KParts__MainWindow*
///
QLayout* k_parts__mainwindow_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KParts__MainWindow*
/// @param layout QLayout*
///
void k_parts__mainwindow_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KParts__MainWindow*
/// @param parent QWidget*
///
void k_parts__mainwindow_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KParts__MainWindow*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_parts__mainwindow_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KParts__MainWindow*
/// @param dx int
/// @param dy int
///
void k_parts__mainwindow_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KParts__MainWindow*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_parts__mainwindow_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KParts__MainWindow*
///
QWidget* k_parts__mainwindow_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KParts__MainWindow*
///
QWidget* k_parts__mainwindow_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KParts__MainWindow*
///
QWidget* k_parts__mainwindow_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KParts__MainWindow*
/// @param on bool
///
void k_parts__mainwindow_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KParts__MainWindow*
/// @param action QAction*
///
void k_parts__mainwindow_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KParts__MainWindow*
/// @param actions libqt_list of QAction*
///
void k_parts__mainwindow_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KParts__MainWindow*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_parts__mainwindow_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KParts__MainWindow*
/// @param before QAction*
/// @param action QAction*
///
void k_parts__mainwindow_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KParts__MainWindow*
/// @param action QAction*
///
void k_parts__mainwindow_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KParts__MainWindow*
///
/// @return libqt_list of QAction*
///
libqt_list k_parts__mainwindow_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KParts__MainWindow*
/// @param text const char*
///
QAction* k_parts__mainwindow_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KParts__MainWindow*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_parts__mainwindow_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KParts__MainWindow*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_parts__mainwindow_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KParts__MainWindow*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_parts__mainwindow_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KParts__MainWindow*
///
QWidget* k_parts__mainwindow_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KParts__MainWindow*
/// @param type flag of enum Qt__WindowType
///
void k_parts__mainwindow_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KParts__MainWindow*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_parts__mainwindow_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KParts__MainWindow*
/// @param param1 enum Qt__WindowType
///
void k_parts__mainwindow_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KParts__MainWindow*
/// @param type flag of enum Qt__WindowType
///
void k_parts__mainwindow_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KParts__MainWindow*
///
/// @return enum Qt__WindowType
///
int32_t k_parts__mainwindow_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_parts__mainwindow_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KParts__MainWindow*
/// @param x int
/// @param y int
///
QWidget* k_parts__mainwindow_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KParts__MainWindow*
/// @param p QPoint*
///
QWidget* k_parts__mainwindow_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KParts__MainWindow*
/// @param p QPointF*
///
QWidget* k_parts__mainwindow_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KParts__MainWindow*
/// @param param1 enum Qt__WidgetAttribute
///
void k_parts__mainwindow_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KParts__MainWindow*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_parts__mainwindow_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KParts__MainWindow*
/// @param child QWidget*
///
bool k_parts__mainwindow_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KParts__MainWindow*
/// @param enabled bool
///
void k_parts__mainwindow_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KParts__MainWindow*
///
QBackingStore* k_parts__mainwindow_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KParts__MainWindow*
///
QWindow* k_parts__mainwindow_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KParts__MainWindow*
///
QScreen* k_parts__mainwindow_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KParts__MainWindow*
/// @param screen QScreen*
///
void k_parts__mainwindow_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_parts__mainwindow_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KParts__MainWindow*
/// @param title const char*
///
void k_parts__mainwindow_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, const char* title)
///
void k_parts__mainwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KParts__MainWindow*
/// @param icon QIcon*
///
void k_parts__mainwindow_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QIcon* icon)
///
void k_parts__mainwindow_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KParts__MainWindow*
/// @param iconText const char*
///
void k_parts__mainwindow_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, const char* iconText)
///
void k_parts__mainwindow_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KParts__MainWindow*
/// @param pos QPoint*
///
void k_parts__mainwindow_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QPoint* pos)
///
void k_parts__mainwindow_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KParts__MainWindow*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_parts__mainwindow_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KParts__MainWindow*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_parts__mainwindow_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KParts__MainWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_parts__mainwindow_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KParts__MainWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_parts__mainwindow_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KParts__MainWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_parts__mainwindow_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KParts__MainWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_parts__mainwindow_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KParts__MainWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_parts__mainwindow_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KParts__MainWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_parts__mainwindow_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KParts__MainWindow*
/// @param rectangle QRect*
///
QPixmap* k_parts__mainwindow_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KParts__MainWindow*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_parts__mainwindow_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KParts__MainWindow*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_parts__mainwindow_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KParts__MainWindow*
/// @param id int
/// @param enable bool
///
void k_parts__mainwindow_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KParts__MainWindow*
/// @param id int
/// @param enable bool
///
void k_parts__mainwindow_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KParts__MainWindow*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_parts__mainwindow_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KParts__MainWindow*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_parts__mainwindow_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_parts__mainwindow_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_parts__mainwindow_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KParts__MainWindow*
/// @param name char*
///
void k_parts__mainwindow_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KParts__MainWindow*
/// @param b bool
///
bool k_parts__mainwindow_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KParts__MainWindow*
///
QThread* k_parts__mainwindow_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__MainWindow*
/// @param thread QThread*
///
bool k_parts__mainwindow_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__MainWindow*
/// @param interval int
///
int32_t k_parts__mainwindow_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__MainWindow*
/// @param time int64_t of nanoseconds
///
int32_t k_parts__mainwindow_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__MainWindow*
/// @param id int
///
void k_parts__mainwindow_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__MainWindow*
/// @param id enum Qt__TimerId
///
void k_parts__mainwindow_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KParts__MainWindow*
///
/// @return libqt_list of QObject*
///
libqt_list k_parts__mainwindow_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KParts__MainWindow*
/// @param filterObj QObject*
///
void k_parts__mainwindow_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KParts__MainWindow*
/// @param obj QObject*
///
void k_parts__mainwindow_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_parts__mainwindow_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__MainWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_parts__mainwindow_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_parts__mainwindow_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_parts__mainwindow_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KParts__MainWindow*
/// @param name const char*
/// @param value QVariant*
///
bool k_parts__mainwindow_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KParts__MainWindow*
/// @param name const char*
///
QVariant* k_parts__mainwindow_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KParts__MainWindow*
///
const char** k_parts__mainwindow_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__MainWindow*
///
QBindingStorage* k_parts__mainwindow_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__MainWindow*
///
const QBindingStorage* k_parts__mainwindow_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self)
///
void k_parts__mainwindow_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KParts__MainWindow*
///
QObject* k_parts__mainwindow_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KParts__MainWindow*
/// @param classname const char*
///
bool k_parts__mainwindow_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__MainWindow*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_parts__mainwindow_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__MainWindow*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_parts__mainwindow_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__MainWindow*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_parts__mainwindow_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_parts__mainwindow_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__MainWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_parts__mainwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__MainWindow*
/// @param param1 QObject*
///
void k_parts__mainwindow_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QObject* param1)
///
void k_parts__mainwindow_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KParts__MainWindow*
///
double k_parts__mainwindow_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KParts__MainWindow*
///
double k_parts__mainwindow_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_parts__mainwindow_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_parts__mainwindow_encode_metric_f(int32_t metric, double value);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#builderClient)
///
/// @param self KParts__MainWindow*
///
KXMLGUIClient* k_parts__mainwindow_builder_client(void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#setBuilderClient)
///
/// @param self KParts__MainWindow*
/// @param client KXMLGUIClient*
///
void k_parts__mainwindow_set_builder_client(void* self, void* client);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#widget)
///
/// @param self KParts__MainWindow*
///
QWidget* k_parts__mainwindow_widget(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// @param self KParts__MainWindow*
/// @param name const char*
///
QAction* k_parts__mainwindow_action(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
///
/// @param self KParts__MainWindow*
/// @param doc QDomDocument*
///
void k_parts__mainwindow_set_x_m_l_g_u_i_build_document(void* self, void* doc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
///
/// @param self KParts__MainWindow*
///
QDomDocument* k_parts__mainwindow_xmlgui_build_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
///
/// @param self KParts__MainWindow*
/// @param factory KXMLGUIFactory*
///
void k_parts__mainwindow_set_factory(void* self, void* factory);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
///
/// @param self KParts__MainWindow*
///
KXMLGUIFactory* k_parts__mainwindow_factory(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
///
/// @param self KParts__MainWindow*
///
KXMLGUIClient* k_parts__mainwindow_parent_client(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
///
/// @param self KParts__MainWindow*
/// @param child KXMLGUIClient*
///
void k_parts__mainwindow_insert_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
///
/// @param self KParts__MainWindow*
/// @param child KXMLGUIClient*
///
void k_parts__mainwindow_remove_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
///
/// @param self KParts__MainWindow*
///
/// @return libqt_list of KXMLGUIClient*
///
libqt_list k_parts__mainwindow_child_clients(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
///
/// @param self KParts__MainWindow*
/// @param builder KXMLGUIBuilder*
///
void k_parts__mainwindow_set_client_builder(void* self, void* builder);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
///
/// @param self KParts__MainWindow*
///
KXMLGUIBuilder* k_parts__mainwindow_client_builder(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_reload_x_m_l(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
///
/// @param self KParts__MainWindow*
/// @param name const char*
/// @param actionList libqt_list of QAction*
///
void k_parts__mainwindow_plug_action_list(void* self, const char* name, libqt_list /* of QAction* */ actionList);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
///
/// @param self KParts__MainWindow*
/// @param name const char*
///
void k_parts__mainwindow_unplug_action_list(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param files const char**
/// @param doc const char*
///
const char* k_parts__mainwindow_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
///
/// @param self KParts__MainWindow*
/// @param state const char*
/// @param action const char*
///
void k_parts__mainwindow_add_state_action_enabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
///
/// @param self KParts__MainWindow*
/// @param state const char*
/// @param action const char*
///
void k_parts__mainwindow_add_state_action_disabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
///
/// @param self KParts__MainWindow*
/// @param state const char*
///
KXMLGUIClient__StateChange* k_parts__mainwindow_get_actions_to_change_for_state(void* self, const char* state);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
///
/// @param self KParts__MainWindow*
/// @param param1 QWidget*
///
void k_parts__mainwindow_begin_x_m_l_plug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_end_x_m_l_plug(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
///
/// @param self KParts__MainWindow*
/// @param param1 QWidget*
///
void k_parts__mainwindow_prepare_x_m_l_unplug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KParts__MainWindow*
/// @param xmlfile const char*
/// @param localxmlfile const char*
///
void k_parts__mainwindow_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param xml const char*
///
const char* k_parts__mainwindow_find_version_number(const char* xml);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KParts__MainWindow*
/// @param xmlfile const char*
/// @param localxmlfile const char*
/// @param merge bool
///
void k_parts__mainwindow_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge);

/// Inherited from KParts::PartBase
///
/// [Upstream resources](https://api.kde.org/kparts-partbase.html#setPartObject)
///
/// @param self KParts__MainWindow*
/// @param object QObject*
///
void k_parts__mainwindow_set_part_object(void* self, void* object);

/// Inherited from KParts::PartBase
///
/// [Upstream resources](https://api.kde.org/kparts-partbase.html#partObject)
///
/// @param self KParts__MainWindow*
///
QObject* k_parts__mainwindow_part_object(void* self);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#guiFactory)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
KXMLGUIFactory* k_parts__mainwindow_gui_factory(void* self);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#guiFactory)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
KXMLGUIFactory* k_parts__mainwindow_qbase_gui_factory(void* self);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#guiFactory)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback KXMLGUIFactory* func()
///
void k_parts__mainwindow_on_gui_factory(void* self, KXMLGUIFactory* (*callback)());

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param config KConfigGroup*
///
void k_parts__mainwindow_apply_main_window_settings(void* self, void* config);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param config KConfigGroup*
///
void k_parts__mainwindow_qbase_apply_main_window_settings(void* self, void* config);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, KConfigGroup* config)
///
void k_parts__mainwindow_on_apply_main_window_settings(void* self, void (*callback)(void*, void*));

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param newstate const char*
///
void k_parts__mainwindow_slot_state_changed(void* self, const char* newstate);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param newstate const char*
///
void k_parts__mainwindow_qbase_slot_state_changed(void* self, const char* newstate);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, const char* newstate)
///
void k_parts__mainwindow_on_slot_state_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QEvent*
///
bool k_parts__mainwindow_event(void* self, void* event);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QEvent*
///
bool k_parts__mainwindow_qbase_event(void* self, void* event);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback bool func(KParts__MainWindow* self, QEvent* event)
///
void k_parts__mainwindow_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param caption const char*
///
void k_parts__mainwindow_set_caption(void* self, const char* caption);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param caption const char*
///
void k_parts__mainwindow_qbase_set_caption(void* self, const char* caption);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, const char* caption)
///
void k_parts__mainwindow_on_set_caption(void* self, void (*callback)(void*, const char*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setPlainCaption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param caption const char*
///
void k_parts__mainwindow_set_plain_caption(void* self, const char* caption);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setPlainCaption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param caption const char*
///
void k_parts__mainwindow_qbase_set_plain_caption(void* self, const char* caption);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setPlainCaption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, const char* caption)
///
void k_parts__mainwindow_on_set_plain_caption(void* self, void (*callback)(void*, const char*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param keyEvent QKeyEvent*
///
void k_parts__mainwindow_key_press_event(void* self, void* keyEvent);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param keyEvent QKeyEvent*
///
void k_parts__mainwindow_qbase_key_press_event(void* self, void* keyEvent);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QKeyEvent* keyEvent)
///
void k_parts__mainwindow_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 QCloseEvent*
///
void k_parts__mainwindow_close_event(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 QCloseEvent*
///
void k_parts__mainwindow_qbase_close_event(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QCloseEvent* param1)
///
void k_parts__mainwindow_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#queryClose)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_query_close(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#queryClose)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_qbase_query_close(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#queryClose)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback bool func()
///
void k_parts__mainwindow_on_query_close(void* self, bool (*callback)());

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 KConfigGroup*
///
void k_parts__mainwindow_save_properties(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveProperties)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 KConfigGroup*
///
void k_parts__mainwindow_qbase_save_properties(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveProperties)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, KConfigGroup* param1)
///
void k_parts__mainwindow_on_save_properties(void* self, void (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 KConfigGroup*
///
void k_parts__mainwindow_read_properties(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readProperties)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 KConfigGroup*
///
void k_parts__mainwindow_qbase_read_properties(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readProperties)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, KConfigGroup* param1)
///
void k_parts__mainwindow_on_read_properties(void* self, void (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param sessionConfig KConfig*
///
void k_parts__mainwindow_save_global_properties(void* self, void* sessionConfig);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param sessionConfig KConfig*
///
void k_parts__mainwindow_qbase_save_global_properties(void* self, void* sessionConfig);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, KConfig* sessionConfig)
///
void k_parts__mainwindow_on_save_global_properties(void* self, void (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readGlobalProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param sessionConfig KConfig*
///
void k_parts__mainwindow_read_global_properties(void* self, void* sessionConfig);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readGlobalProperties)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param sessionConfig KConfig*
///
void k_parts__mainwindow_qbase_read_global_properties(void* self, void* sessionConfig);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readGlobalProperties)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, KConfig* sessionConfig)
///
void k_parts__mainwindow_on_read_global_properties(void* self, void (*callback)(void*, void*));

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
QMenu* k_parts__mainwindow_create_popup_menu(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
QMenu* k_parts__mainwindow_qbase_create_popup_menu(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback QMenu* func()
///
void k_parts__mainwindow_on_create_popup_menu(void* self, QMenu* (*callback)());

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QContextMenuEvent*
///
void k_parts__mainwindow_context_menu_event(void* self, void* event);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QContextMenuEvent*
///
void k_parts__mainwindow_qbase_context_menu_event(void* self, void* event);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QContextMenuEvent* event)
///
void k_parts__mainwindow_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback int32_t func()
///
void k_parts__mainwindow_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param visible bool
///
void k_parts__mainwindow_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param visible bool
///
void k_parts__mainwindow_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, bool visible)
///
void k_parts__mainwindow_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
QSize* k_parts__mainwindow_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
QSize* k_parts__mainwindow_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback QSize* func()
///
void k_parts__mainwindow_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
QSize* k_parts__mainwindow_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
QSize* k_parts__mainwindow_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback QSize* func()
///
void k_parts__mainwindow_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 int
///
int32_t k_parts__mainwindow_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 int
///
int32_t k_parts__mainwindow_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback int32_t func(KParts__MainWindow* self, int param1)
///
void k_parts__mainwindow_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback bool func()
///
void k_parts__mainwindow_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
QPaintEngine* k_parts__mainwindow_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
QPaintEngine* k_parts__mainwindow_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback QPaintEngine* func()
///
void k_parts__mainwindow_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QMouseEvent*
///
void k_parts__mainwindow_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QMouseEvent*
///
void k_parts__mainwindow_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QMouseEvent* event)
///
void k_parts__mainwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QMouseEvent*
///
void k_parts__mainwindow_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QMouseEvent*
///
void k_parts__mainwindow_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QMouseEvent* event)
///
void k_parts__mainwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QMouseEvent*
///
void k_parts__mainwindow_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QMouseEvent*
///
void k_parts__mainwindow_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QMouseEvent* event)
///
void k_parts__mainwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QMouseEvent*
///
void k_parts__mainwindow_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QMouseEvent*
///
void k_parts__mainwindow_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QMouseEvent* event)
///
void k_parts__mainwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QWheelEvent*
///
void k_parts__mainwindow_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QWheelEvent*
///
void k_parts__mainwindow_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QWheelEvent* event)
///
void k_parts__mainwindow_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QKeyEvent*
///
void k_parts__mainwindow_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QKeyEvent*
///
void k_parts__mainwindow_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QKeyEvent* event)
///
void k_parts__mainwindow_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QFocusEvent*
///
void k_parts__mainwindow_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QFocusEvent*
///
void k_parts__mainwindow_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QFocusEvent* event)
///
void k_parts__mainwindow_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QFocusEvent*
///
void k_parts__mainwindow_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QFocusEvent*
///
void k_parts__mainwindow_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QFocusEvent* event)
///
void k_parts__mainwindow_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QEnterEvent*
///
void k_parts__mainwindow_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QEnterEvent*
///
void k_parts__mainwindow_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QEnterEvent* event)
///
void k_parts__mainwindow_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QEvent*
///
void k_parts__mainwindow_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QEvent*
///
void k_parts__mainwindow_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QEvent* event)
///
void k_parts__mainwindow_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QPaintEvent*
///
void k_parts__mainwindow_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QPaintEvent*
///
void k_parts__mainwindow_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QPaintEvent* event)
///
void k_parts__mainwindow_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QMoveEvent*
///
void k_parts__mainwindow_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QMoveEvent*
///
void k_parts__mainwindow_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QMoveEvent* event)
///
void k_parts__mainwindow_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QResizeEvent*
///
void k_parts__mainwindow_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QResizeEvent*
///
void k_parts__mainwindow_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QResizeEvent* event)
///
void k_parts__mainwindow_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QTabletEvent*
///
void k_parts__mainwindow_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QTabletEvent*
///
void k_parts__mainwindow_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QTabletEvent* event)
///
void k_parts__mainwindow_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QActionEvent*
///
void k_parts__mainwindow_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QActionEvent*
///
void k_parts__mainwindow_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QActionEvent* event)
///
void k_parts__mainwindow_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QDragEnterEvent*
///
void k_parts__mainwindow_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QDragEnterEvent*
///
void k_parts__mainwindow_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QDragEnterEvent* event)
///
void k_parts__mainwindow_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QDragMoveEvent*
///
void k_parts__mainwindow_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QDragMoveEvent*
///
void k_parts__mainwindow_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QDragMoveEvent* event)
///
void k_parts__mainwindow_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QDragLeaveEvent*
///
void k_parts__mainwindow_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QDragLeaveEvent*
///
void k_parts__mainwindow_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QDragLeaveEvent* event)
///
void k_parts__mainwindow_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QDropEvent*
///
void k_parts__mainwindow_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QDropEvent*
///
void k_parts__mainwindow_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QDropEvent* event)
///
void k_parts__mainwindow_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QShowEvent*
///
void k_parts__mainwindow_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QShowEvent*
///
void k_parts__mainwindow_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QShowEvent* event)
///
void k_parts__mainwindow_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QHideEvent*
///
void k_parts__mainwindow_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QHideEvent*
///
void k_parts__mainwindow_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QHideEvent* event)
///
void k_parts__mainwindow_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_parts__mainwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_parts__mainwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback bool func(KParts__MainWindow* self, const char* eventType, void* message, intptr_t* result)
///
void k_parts__mainwindow_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 QEvent*
///
void k_parts__mainwindow_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 QEvent*
///
void k_parts__mainwindow_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QEvent* param1)
///
void k_parts__mainwindow_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_parts__mainwindow_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_parts__mainwindow_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback int32_t func(KParts__MainWindow* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_parts__mainwindow_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param painter QPainter*
///
void k_parts__mainwindow_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param painter QPainter*
///
void k_parts__mainwindow_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QPainter* painter)
///
void k_parts__mainwindow_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param offset QPoint*
///
QPaintDevice* k_parts__mainwindow_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param offset QPoint*
///
QPaintDevice* k_parts__mainwindow_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback QPaintDevice* func(KParts__MainWindow* self, QPoint* offset)
///
void k_parts__mainwindow_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
QPainter* k_parts__mainwindow_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
QPainter* k_parts__mainwindow_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback QPainter* func()
///
void k_parts__mainwindow_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 QInputMethodEvent*
///
void k_parts__mainwindow_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 QInputMethodEvent*
///
void k_parts__mainwindow_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QInputMethodEvent* param1)
///
void k_parts__mainwindow_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_parts__mainwindow_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_parts__mainwindow_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback QVariant* func(KParts__MainWindow* self, enum Qt__InputMethodQuery param1)
///
void k_parts__mainwindow_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param next bool
///
bool k_parts__mainwindow_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param next bool
///
bool k_parts__mainwindow_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback bool func(KParts__MainWindow* self, bool next)
///
void k_parts__mainwindow_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_parts__mainwindow_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_parts__mainwindow_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback bool func(KParts__MainWindow* self, QObject* watched, QEvent* event)
///
void k_parts__mainwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QTimerEvent*
///
void k_parts__mainwindow_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QTimerEvent*
///
void k_parts__mainwindow_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QTimerEvent* event)
///
void k_parts__mainwindow_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QChildEvent*
///
void k_parts__mainwindow_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QChildEvent*
///
void k_parts__mainwindow_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QChildEvent* event)
///
void k_parts__mainwindow_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QEvent*
///
void k_parts__mainwindow_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param event QEvent*
///
void k_parts__mainwindow_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QEvent* event)
///
void k_parts__mainwindow_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param signal QMetaMethod*
///
void k_parts__mainwindow_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param signal QMetaMethod*
///
void k_parts__mainwindow_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QMetaMethod* signal)
///
void k_parts__mainwindow_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param signal QMetaMethod*
///
void k_parts__mainwindow_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param signal QMetaMethod*
///
void k_parts__mainwindow_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QMetaMethod* signal)
///
void k_parts__mainwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
const char** k_parts__mainwindow_container_tags(void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
const char** k_parts__mainwindow_qbase_container_tags(void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback const char** func()
///
void k_parts__mainwindow_on_container_tags(void* self, const char** (*callback)());

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
/// @param containerAction QAction**
///
QWidget* k_parts__mainwindow_create_container(void* self, void* parent, int index, void* element, void** containerAction);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
/// @param containerAction QAction**
///
QWidget* k_parts__mainwindow_qbase_create_container(void* self, void* parent, int index, void* element, void** containerAction);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback QWidget* func(KParts__MainWindow* self, QWidget* parent, int index, QDomElement* element, QAction** containerAction)
///
void k_parts__mainwindow_on_create_container(void* self, QWidget* (*callback)(void*, void*, int, void*, void**));

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param container QWidget*
/// @param parent QWidget*
/// @param element QDomElement*
/// @param containerAction QAction*
///
void k_parts__mainwindow_remove_container(void* self, void* container, void* parent, void* element, void* containerAction);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param container QWidget*
/// @param parent QWidget*
/// @param element QDomElement*
/// @param containerAction QAction*
///
void k_parts__mainwindow_qbase_remove_container(void* self, void* container, void* parent, void* element, void* containerAction);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction)
///
void k_parts__mainwindow_on_remove_container(void* self, void (*callback)(void*, void*, void*, void*, void*));

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
const char** k_parts__mainwindow_custom_tags(void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
const char** k_parts__mainwindow_qbase_custom_tags(void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback const char** func()
///
void k_parts__mainwindow_on_custom_tags(void* self, const char** (*callback)());

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
///
QAction* k_parts__mainwindow_create_custom_element(void* self, void* parent, int index, void* element);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
///
QAction* k_parts__mainwindow_qbase_create_custom_element(void* self, void* parent, int index, void* element);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback QAction* func(KParts__MainWindow* self, QWidget* parent, int index, QDomElement* element)
///
void k_parts__mainwindow_on_create_custom_element(void* self, QAction* (*callback)(void*, void*, int, void*));

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param client KXMLGUIClient*
///
void k_parts__mainwindow_finalize_g_u_i(void* self, void* client);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param client KXMLGUIClient*
///
void k_parts__mainwindow_qbase_finalize_g_u_i(void* self, void* client);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, KXMLGUIClient* client)
///
void k_parts__mainwindow_on_finalize_g_u_i(void* self, void (*callback)(void*, void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param element QDomElement*
///
QAction* k_parts__mainwindow_action2(void* self, void* element);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param element QDomElement*
///
QAction* k_parts__mainwindow_qbase_action2(void* self, void* element);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback QAction* func(KParts__MainWindow* self, QDomElement* element)
///
void k_parts__mainwindow_on_action2(void* self, QAction* (*callback)(void*, void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
KActionCollection* k_parts__mainwindow_action_collection(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
KActionCollection* k_parts__mainwindow_qbase_action_collection(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback KActionCollection* func()
///
void k_parts__mainwindow_on_action_collection(void* self, KActionCollection* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_component_name(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_qbase_component_name(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback const char* func()
///
void k_parts__mainwindow_on_component_name(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
QDomDocument* k_parts__mainwindow_dom_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
QDomDocument* k_parts__mainwindow_qbase_dom_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback QDomDocument* func()
///
void k_parts__mainwindow_on_dom_document(void* self, QDomDocument* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_qbase_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback const char* func()
///
void k_parts__mainwindow_on_xml_file(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_local_x_m_l_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_qbase_local_x_m_l_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback const char* func()
///
void k_parts__mainwindow_on_local_x_m_l_file(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param componentName const char*
/// @param componentDisplayName const char*
///
void k_parts__mainwindow_set_component_name(void* self, const char* componentName, const char* componentDisplayName);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param componentName const char*
/// @param componentDisplayName const char*
///
void k_parts__mainwindow_qbase_set_component_name(void* self, const char* componentName, const char* componentDisplayName);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, const char* componentName, const char* componentDisplayName)
///
void k_parts__mainwindow_on_set_component_name(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param file const char*
/// @param merge bool
/// @param setXMLDoc bool
///
void k_parts__mainwindow_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param file const char*
/// @param merge bool
/// @param setXMLDoc bool
///
void k_parts__mainwindow_qbase_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, const char* file, bool merge, bool setXMLDoc)
///
void k_parts__mainwindow_on_set_x_m_l_file(void* self, void (*callback)(void*, const char*, bool, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param file const char*
///
void k_parts__mainwindow_set_local_x_m_l_file(void* self, const char* file);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param file const char*
///
void k_parts__mainwindow_qbase_set_local_x_m_l_file(void* self, const char* file);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, const char* file)
///
void k_parts__mainwindow_on_set_local_x_m_l_file(void* self, void (*callback)(void*, const char*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param document const char*
/// @param merge bool
///
void k_parts__mainwindow_set_x_m_l(void* self, const char* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param document const char*
/// @param merge bool
///
void k_parts__mainwindow_qbase_set_x_m_l(void* self, const char* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, const char* document, bool merge)
///
void k_parts__mainwindow_on_set_x_m_l(void* self, void (*callback)(void*, const char*, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param document QDomDocument*
/// @param merge bool
///
void k_parts__mainwindow_set_d_o_m_document(void* self, void* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param document QDomDocument*
/// @param merge bool
///
void k_parts__mainwindow_qbase_set_d_o_m_document(void* self, void* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, QDomDocument* document, bool merge)
///
void k_parts__mainwindow_on_set_d_o_m_document(void* self, void (*callback)(void*, void*, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param newstate const char*
/// @param reverse enum KXMLGUIClient__ReverseStateChange
///
void k_parts__mainwindow_state_changed(void* self, const char* newstate, int32_t reverse);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param newstate const char*
/// @param reverse enum KXMLGUIClient__ReverseStateChange
///
void k_parts__mainwindow_qbase_state_changed(void* self, const char* newstate, int32_t reverse);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, const char* newstate, enum KXMLGUIClient__ReverseStateChange reverse)
///
void k_parts__mainwindow_on_state_changed(void* self, void (*callback)(void*, const char*, int32_t));

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_check_ambiguous_shortcuts(void* self);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_qbase_check_ambiguous_shortcuts(void* self);

/// Inherited from KXmlGuiWindow
///
/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func()
///
void k_parts__mainwindow_on_check_ambiguous_shortcuts(void* self, void (*callback)());

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 KConfig*
/// @param param2 int
///
void k_parts__mainwindow_save_properties_internal(void* self, void* param1, int param2);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 KConfig*
/// @param param2 int
///
void k_parts__mainwindow_qbase_save_properties_internal(void* self, void* param1, int param2);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, KConfig* param1, int param2)
///
void k_parts__mainwindow_on_save_properties_internal(void* self, void (*callback)(void*, void*, int));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 KConfig*
/// @param param2 int
///
bool k_parts__mainwindow_read_properties_internal(void* self, void* param1, int param2);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param param1 KConfig*
/// @param param2 int
///
bool k_parts__mainwindow_qbase_read_properties_internal(void* self, void* param1, int param2);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback bool func(KParts__MainWindow* self, KConfig* param1, int param2)
///
void k_parts__mainwindow_on_read_properties_internal(void* self, bool (*callback)(void*, void*, int));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#settingsDirty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_settings_dirty(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#settingsDirty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_qbase_settings_dirty(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#settingsDirty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback bool func()
///
void k_parts__mainwindow_on_settings_dirty(void* self, bool (*callback)());

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_save_auto_save_settings(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_qbase_save_auto_save_settings(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func()
///
void k_parts__mainwindow_on_save_auto_save_settings(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func()
///
void k_parts__mainwindow_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func()
///
void k_parts__mainwindow_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func()
///
void k_parts__mainwindow_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback bool func()
///
void k_parts__mainwindow_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
bool k_parts__mainwindow_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback bool func()
///
void k_parts__mainwindow_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
QObject* k_parts__mainwindow_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
QObject* k_parts__mainwindow_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback QObject* func()
///
void k_parts__mainwindow_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
int32_t k_parts__mainwindow_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback int32_t func()
///
void k_parts__mainwindow_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param signal const char*
///
int32_t k_parts__mainwindow_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param signal const char*
///
int32_t k_parts__mainwindow_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback int32_t func(KParts__MainWindow* self, const char* signal)
///
void k_parts__mainwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param signal QMetaMethod*
///
bool k_parts__mainwindow_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param signal QMetaMethod*
///
bool k_parts__mainwindow_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback bool func(KParts__MainWindow* self, QMetaMethod* signal)
///
void k_parts__mainwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_parts__mainwindow_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_parts__mainwindow_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback double func(KParts__MainWindow* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_parts__mainwindow_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_standards_xml_file_location(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
const char* k_parts__mainwindow_qbase_standards_xml_file_location(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback const char* func()
///
void k_parts__mainwindow_on_standards_xml_file_location(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_load_standards_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_qbase_load_standards_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__MainWindow*
/// @param callback void func()
///
void k_parts__mainwindow_on_load_standards_xml_file(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KParts__MainWindow*
/// @param callback void func(KParts__MainWindow* self, const char* objectName)
///
void k_parts__mainwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KParts__MainWindow*
///
void k_parts__mainwindow_delete(void* self);

#endif

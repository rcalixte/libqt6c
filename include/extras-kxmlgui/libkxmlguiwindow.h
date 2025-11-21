#pragma once
#ifndef SRC_EXTRAS_KXMLGUI_QT6C_LIBKXMLGUIWINDOW_H
#define SRC_EXTRAS_KXMLGUI_QT6C_LIBKXMLGUIWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kxmlguiwindow.html

/// k_xmlguiwindow_new constructs a new KXmlGuiWindow object.
///
/// @param parent QWidget*
KXmlGuiWindow* k_xmlguiwindow_new(void* parent);

/// k_xmlguiwindow_new2 constructs a new KXmlGuiWindow object.
///
KXmlGuiWindow* k_xmlguiwindow_new2();

/// k_xmlguiwindow_new3 constructs a new KXmlGuiWindow object.
///
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
KXmlGuiWindow* k_xmlguiwindow_new3(void* parent, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KXmlGuiWindow*
const QMetaObject* k_xmlguiwindow_meta_object(void* self);

/// @param self KXmlGuiWindow*
/// @param param1 const char*
void* k_xmlguiwindow_metacast(void* self, const char* param1);

/// @param self KXmlGuiWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_xmlguiwindow_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback int32_t func(KXmlGuiWindow* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_xmlguiwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KXmlGuiWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_xmlguiwindow_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_xmlguiwindow_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setHelpMenuEnabled)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_set_help_menu_enabled(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#isHelpMenuEnabled)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_help_menu_enabled(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#guiFactory)
///
/// @param self KXmlGuiWindow*
KXMLGUIFactory* k_xmlguiwindow_gui_factory(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#guiFactory)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback KXMLGUIFactory* func()
void k_xmlguiwindow_on_gui_factory(void* self, KXMLGUIFactory* (*callback)());

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#guiFactory)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
KXMLGUIFactory* k_xmlguiwindow_qbase_gui_factory(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#createGUI)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_create_g_u_i(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setStandardToolBarMenuEnabled)
///
/// @param self KXmlGuiWindow*
/// @param showToolBarMenu bool
void k_xmlguiwindow_set_standard_tool_bar_menu_enabled(void* self, bool showToolBarMenu);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#isStandardToolBarMenuEnabled)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_standard_tool_bar_menu_enabled(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#createStandardStatusBarAction)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_create_standard_status_bar_action(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_setup_g_u_i(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KXmlGuiWindow*
/// @param defaultSize QSize*
void k_xmlguiwindow_setup_g_u_i2(void* self, void* defaultSize);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#toolBarMenuAction)
///
/// @param self KXmlGuiWindow*
QAction* k_xmlguiwindow_tool_bar_menu_action(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupToolbarMenuActions)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_setup_toolbar_menu_actions(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#toolBarNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char** k_xmlguiwindow_tool_bar_names(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#finalizeGUI)
///
/// @param self KXmlGuiWindow*
/// @param force bool
void k_xmlguiwindow_finalize_g_u_i(void* self, bool force);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
///
/// @param self KXmlGuiWindow*
/// @param config KConfigGroup*
void k_xmlguiwindow_apply_main_window_settings(void* self, void* config);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, KConfigGroup* config)
void k_xmlguiwindow_on_apply_main_window_settings(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
/// @param config KConfigGroup*
void k_xmlguiwindow_qbase_apply_main_window_settings(void* self, void* config);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setCommandBarEnabled)
///
/// @param self KXmlGuiWindow*
/// @param showCommandBar bool
void k_xmlguiwindow_set_command_bar_enabled(void* self, bool showCommandBar);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#isCommandBarEnabled)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_command_bar_enabled(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#configureToolbars)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_configure_toolbars(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#configureToolbars)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback void func()
void k_xmlguiwindow_on_configure_toolbars(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#configureToolbars)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_qbase_configure_toolbars(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
///
/// @param self KXmlGuiWindow*
/// @param newstate const char*
void k_xmlguiwindow_slot_state_changed(void* self, const char* newstate);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* newstate)
void k_xmlguiwindow_on_slot_state_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
/// @param newstate const char*
void k_xmlguiwindow_qbase_slot_state_changed(void* self, const char* newstate);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
///
/// @param self KXmlGuiWindow*
/// @param newstate const char*
/// @param reverse bool
void k_xmlguiwindow_slot_state_changed2(void* self, const char* newstate, bool reverse);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#isToolBarVisible)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
bool k_xmlguiwindow_is_tool_bar_visible(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setToolBarVisible)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
/// @param visible bool
void k_xmlguiwindow_set_tool_bar_visible(void* self, const char* name, bool visible);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#event)
///
/// @param self KXmlGuiWindow*
/// @param event QEvent*
bool k_xmlguiwindow_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self, QEvent* event)
void k_xmlguiwindow_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#event)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
/// @param event QEvent*
bool k_xmlguiwindow_qbase_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_check_ambiguous_shortcuts(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback void func()
void k_xmlguiwindow_on_check_ambiguous_shortcuts(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_qbase_check_ambiguous_shortcuts(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#saveNewToolbarConfig)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_save_new_toolbar_config(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#saveNewToolbarConfig)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback void func()
void k_xmlguiwindow_on_save_new_toolbar_config(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#saveNewToolbarConfig)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_qbase_save_new_toolbar_config(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_xmlguiwindow_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_xmlguiwindow_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setHelpMenuEnabled)
///
/// @param self KXmlGuiWindow*
/// @param showHelpMenu bool
void k_xmlguiwindow_set_help_menu_enabled1(void* self, bool showHelpMenu);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#createGUI)
///
/// @param self KXmlGuiWindow*
/// @param xmlfile const char*
void k_xmlguiwindow_create_g_u_i1(void* self, const char* xmlfile);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KXmlGuiWindow*
/// @param options flag of enum KXmlGuiWindow__StandardWindowOption
void k_xmlguiwindow_setup_g_u_i1(void* self, int32_t options);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KXmlGuiWindow*
/// @param options flag of enum KXmlGuiWindow__StandardWindowOption
/// @param xmlfile const char*
void k_xmlguiwindow_setup_g_u_i22(void* self, int32_t options, const char* xmlfile);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KXmlGuiWindow*
/// @param defaultSize QSize*
/// @param options flag of enum KXmlGuiWindow__StandardWindowOption
void k_xmlguiwindow_setup_g_u_i23(void* self, void* defaultSize, int32_t options);

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KXmlGuiWindow*
/// @param defaultSize QSize*
/// @param options flag of enum KXmlGuiWindow__StandardWindowOption
/// @param xmlfile const char*
void k_xmlguiwindow_setup_g_u_i3(void* self, void* defaultSize, int32_t options, const char* xmlfile);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#canBeRestored)
///
/// @param numberOfInstances int
bool k_xmlguiwindow_can_be_restored(int numberOfInstances);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#classNameOfToplevel)
///
/// Caller is responsible for freeing the returned memory
///
/// @param instanceNumber int
const char* k_xmlguiwindow_class_name_of_toplevel(int instanceNumber);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#restore)
///
/// @param self KXmlGuiWindow*
/// @param numberOfInstances int
bool k_xmlguiwindow_restore(void* self, int numberOfInstances);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#hasMenuBar)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_has_menu_bar(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#memberList)
///
libqt_list /* of KMainWindow* */ k_xmlguiwindow_member_list();

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#toolBar)
///
/// @param self KXmlGuiWindow*
KToolBar* k_xmlguiwindow_tool_bar(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#toolBars)
///
/// @param self KXmlGuiWindow*
libqt_list /* of KToolBar* */ k_xmlguiwindow_tool_bars(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_set_auto_save_settings(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KXmlGuiWindow*
/// @param group KConfigGroup*
void k_xmlguiwindow_set_auto_save_settings2(void* self, void* group);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#resetAutoSaveSettings)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_reset_auto_save_settings(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#autoSaveSettings)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_auto_save_settings(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#autoSaveGroup)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_auto_save_group(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#autoSaveConfigGroup)
///
/// @param self KXmlGuiWindow*
KConfigGroup* k_xmlguiwindow_auto_save_config_group(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setStateConfigGroup)
///
/// @param self KXmlGuiWindow*
/// @param configGroup const char*
void k_xmlguiwindow_set_state_config_group(void* self, const char* configGroup);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#stateConfigGroup)
///
/// @param self KXmlGuiWindow*
KConfigGroup* k_xmlguiwindow_state_config_group(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveMainWindowSettings)
///
/// @param self KXmlGuiWindow*
/// @param config KConfigGroup*
void k_xmlguiwindow_save_main_window_settings(void* self, void* config);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#dbusName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_dbus_name(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
///
/// @param self KXmlGuiWindow*
/// @param caption const char*
/// @param modified bool
void k_xmlguiwindow_set_caption2(void* self, const char* caption, bool modified);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* caption, bool modified)
void k_xmlguiwindow_on_set_caption2(void* self, void (*callback)(void*, const char*, bool));

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
/// @param caption const char*
/// @param modified bool
void k_xmlguiwindow_qbase_set_caption2(void* self, const char* caption, bool modified);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#appHelpActivated)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_app_help_activated(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setSettingsDirty)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_set_settings_dirty(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#restore)
///
/// @param self KXmlGuiWindow*
/// @param numberOfInstances int
/// @param show bool
bool k_xmlguiwindow_restore2(void* self, int numberOfInstances, bool show);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#toolBar)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
KToolBar* k_xmlguiwindow_tool_bar1(void* self, const char* name);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KXmlGuiWindow*
/// @param groupName const char*
void k_xmlguiwindow_set_auto_save_settings1(void* self, const char* groupName);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KXmlGuiWindow*
/// @param groupName const char*
/// @param saveWindowSize bool
void k_xmlguiwindow_set_auto_save_settings22(void* self, const char* groupName, bool saveWindowSize);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KXmlGuiWindow*
/// @param group KConfigGroup*
/// @param saveWindowSize bool
void k_xmlguiwindow_set_auto_save_settings23(void* self, void* group, bool saveWindowSize);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#iconSize)
///
/// @param self KXmlGuiWindow*
QSize* k_xmlguiwindow_icon_size(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setIconSize)
///
/// @param self KXmlGuiWindow*
/// @param iconSize QSize*
void k_xmlguiwindow_set_icon_size(void* self, void* iconSize);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyle)
///
/// @param self KXmlGuiWindow*
///
/// @return enum Qt__ToolButtonStyle
int32_t k_xmlguiwindow_tool_button_style(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setToolButtonStyle)
///
/// @param self KXmlGuiWindow*
/// @param toolButtonStyle enum Qt__ToolButtonStyle
void k_xmlguiwindow_set_tool_button_style(void* self, int32_t toolButtonStyle);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isAnimated)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_animated(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isDockNestingEnabled)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_dock_nesting_enabled(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#documentMode)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_document_mode(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDocumentMode)
///
/// @param self KXmlGuiWindow*
/// @param enabled bool
void k_xmlguiwindow_set_document_mode(void* self, bool enabled);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabShape)
///
/// @param self KXmlGuiWindow*
///
/// @return enum QTabWidget__TabShape
int32_t k_xmlguiwindow_tab_shape(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setTabShape)
///
/// @param self KXmlGuiWindow*
/// @param tabShape enum QTabWidget__TabShape
void k_xmlguiwindow_set_tab_shape(void* self, int32_t tabShape);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabPosition)
///
/// @param self KXmlGuiWindow*
/// @param area enum Qt__DockWidgetArea
///
/// @return enum QTabWidget__TabPosition
int32_t k_xmlguiwindow_tab_position(void* self, int32_t area);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setTabPosition)
///
/// @param self KXmlGuiWindow*
/// @param areas flag of enum Qt__DockWidgetArea
/// @param tabPosition enum QTabWidget__TabPosition
void k_xmlguiwindow_set_tab_position(void* self, int32_t areas, int32_t tabPosition);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDockOptions)
///
/// @param self KXmlGuiWindow*
/// @param options flag of enum QMainWindow__DockOption
void k_xmlguiwindow_set_dock_options(void* self, int32_t options);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#dockOptions)
///
/// @param self KXmlGuiWindow*
///
/// @return flag of enum QMainWindow__DockOption
int32_t k_xmlguiwindow_dock_options(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isSeparator)
///
/// @param self KXmlGuiWindow*
/// @param pos QPoint*
bool k_xmlguiwindow_is_separator(void* self, void* pos);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#menuBar)
///
/// @param self KXmlGuiWindow*
QMenuBar* k_xmlguiwindow_menu_bar(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setMenuBar)
///
/// @param self KXmlGuiWindow*
/// @param menubar QMenuBar*
void k_xmlguiwindow_set_menu_bar(void* self, void* menubar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#menuWidget)
///
/// @param self KXmlGuiWindow*
QWidget* k_xmlguiwindow_menu_widget(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setMenuWidget)
///
/// @param self KXmlGuiWindow*
/// @param menubar QWidget*
void k_xmlguiwindow_set_menu_widget(void* self, void* menubar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#statusBar)
///
/// @param self KXmlGuiWindow*
QStatusBar* k_xmlguiwindow_status_bar(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setStatusBar)
///
/// @param self KXmlGuiWindow*
/// @param statusbar QStatusBar*
void k_xmlguiwindow_set_status_bar(void* self, void* statusbar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#centralWidget)
///
/// @param self KXmlGuiWindow*
QWidget* k_xmlguiwindow_central_widget(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setCentralWidget)
///
/// @param self KXmlGuiWindow*
/// @param widget QWidget*
void k_xmlguiwindow_set_central_widget(void* self, void* widget);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#takeCentralWidget)
///
/// @param self KXmlGuiWindow*
QWidget* k_xmlguiwindow_take_central_widget(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setCorner)
///
/// @param self KXmlGuiWindow*
/// @param corner enum Qt__Corner
/// @param area enum Qt__DockWidgetArea
void k_xmlguiwindow_set_corner(void* self, int32_t corner, int32_t area);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#corner)
///
/// @param self KXmlGuiWindow*
/// @param corner enum Qt__Corner
///
/// @return enum Qt__DockWidgetArea
int32_t k_xmlguiwindow_corner(void* self, int32_t corner);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_add_tool_bar_break(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBarBreak)
///
/// @param self KXmlGuiWindow*
/// @param before QToolBar*
void k_xmlguiwindow_insert_tool_bar_break(void* self, void* before);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// @param self KXmlGuiWindow*
/// @param area enum Qt__ToolBarArea
/// @param toolbar QToolBar*
void k_xmlguiwindow_add_tool_bar(void* self, int32_t area, void* toolbar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// @param self KXmlGuiWindow*
/// @param toolbar QToolBar*
void k_xmlguiwindow_add_tool_bar2(void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// @param self KXmlGuiWindow*
/// @param title const char*
QToolBar* k_xmlguiwindow_add_tool_bar3(void* self, const char* title);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBar)
///
/// @param self KXmlGuiWindow*
/// @param before QToolBar*
/// @param toolbar QToolBar*
void k_xmlguiwindow_insert_tool_bar(void* self, void* before, void* toolbar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBar)
///
/// @param self KXmlGuiWindow*
/// @param toolbar QToolBar*
void k_xmlguiwindow_remove_tool_bar(void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBarBreak)
///
/// @param self KXmlGuiWindow*
/// @param before QToolBar*
void k_xmlguiwindow_remove_tool_bar_break(void* self, void* before);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#unifiedTitleAndToolBarOnMac)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_unified_title_and_tool_bar_on_mac(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolBarArea)
///
/// @param self KXmlGuiWindow*
/// @param toolbar QToolBar*
///
/// @return enum Qt__ToolBarArea
int32_t k_xmlguiwindow_tool_bar_area(void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolBarBreak)
///
/// @param self KXmlGuiWindow*
/// @param toolbar QToolBar*
bool k_xmlguiwindow_tool_bar_break(void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
///
/// @param self KXmlGuiWindow*
/// @param area enum Qt__DockWidgetArea
/// @param dockwidget QDockWidget*
void k_xmlguiwindow_add_dock_widget(void* self, int32_t area, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
///
/// @param self KXmlGuiWindow*
/// @param area enum Qt__DockWidgetArea
/// @param dockwidget QDockWidget*
/// @param orientation enum Qt__Orientation
void k_xmlguiwindow_add_dock_widget2(void* self, int32_t area, void* dockwidget, int32_t orientation);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#splitDockWidget)
///
/// @param self KXmlGuiWindow*
/// @param after QDockWidget*
/// @param dockwidget QDockWidget*
/// @param orientation enum Qt__Orientation
void k_xmlguiwindow_split_dock_widget(void* self, void* after, void* dockwidget, int32_t orientation);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifyDockWidget)
///
/// @param self KXmlGuiWindow*
/// @param first QDockWidget*
/// @param second QDockWidget*
void k_xmlguiwindow_tabify_dock_widget(void* self, void* first, void* second);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgets)
///
/// @param self KXmlGuiWindow*
/// @param dockwidget QDockWidget*
libqt_list /* of QDockWidget* */ k_xmlguiwindow_tabified_dock_widgets(void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeDockWidget)
///
/// @param self KXmlGuiWindow*
/// @param dockwidget QDockWidget*
void k_xmlguiwindow_remove_dock_widget(void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreDockWidget)
///
/// @param self KXmlGuiWindow*
/// @param dockwidget QDockWidget*
bool k_xmlguiwindow_restore_dock_widget(void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#dockWidgetArea)
///
/// @param self KXmlGuiWindow*
/// @param dockwidget QDockWidget*
///
/// @return enum Qt__DockWidgetArea
int32_t k_xmlguiwindow_dock_widget_area(void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#resizeDocks)
///
/// @param self KXmlGuiWindow*
/// @param docks libqt_list /* of QDockWidget* */
/// @param sizes libqt_list /* of int */
/// @param orientation enum Qt__Orientation
void k_xmlguiwindow_resize_docks(void* self, libqt_list docks, libqt_list sizes, int32_t orientation);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
char* k_xmlguiwindow_save_state(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
///
/// @param self KXmlGuiWindow*
/// @param state const char*
bool k_xmlguiwindow_restore_state(void* self, const char* state);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setAnimated)
///
/// @param self KXmlGuiWindow*
/// @param enabled bool
void k_xmlguiwindow_set_animated(void* self, bool enabled);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDockNestingEnabled)
///
/// @param self KXmlGuiWindow*
/// @param enabled bool
void k_xmlguiwindow_set_dock_nesting_enabled(void* self, bool enabled);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setUnifiedTitleAndToolBarOnMac)
///
/// @param self KXmlGuiWindow*
/// @param set bool
void k_xmlguiwindow_set_unified_title_and_tool_bar_on_mac(void* self, bool set);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
///
/// @param self KXmlGuiWindow*
/// @param iconSize QSize*
void k_xmlguiwindow_icon_size_changed(void* self, void* iconSize);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QSize* iconSize)
void k_xmlguiwindow_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
///
/// @param self KXmlGuiWindow*
/// @param toolButtonStyle enum Qt__ToolButtonStyle
void k_xmlguiwindow_tool_button_style_changed(void* self, int32_t toolButtonStyle);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, enum Qt__ToolButtonStyle toolButtonStyle)
void k_xmlguiwindow_on_tool_button_style_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
///
/// @param self KXmlGuiWindow*
/// @param dockWidget QDockWidget*
void k_xmlguiwindow_tabified_dock_widget_activated(void* self, void* dockWidget);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QDockWidget* dockWidget)
void k_xmlguiwindow_on_tabified_dock_widget_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
///
/// @param self KXmlGuiWindow*
/// @param area enum Qt__ToolBarArea
void k_xmlguiwindow_add_tool_bar_break1(void* self, int32_t area);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
/// @param version int
char* k_xmlguiwindow_save_state1(void* self, int version);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
///
/// @param self KXmlGuiWindow*
/// @param state const char*
/// @param version int
bool k_xmlguiwindow_restore_state2(void* self, const char* state, int version);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KXmlGuiWindow*
uintptr_t k_xmlguiwindow_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KXmlGuiWindow*
uintptr_t k_xmlguiwindow_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KXmlGuiWindow*
uintptr_t k_xmlguiwindow_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KXmlGuiWindow*
QStyle* k_xmlguiwindow_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KXmlGuiWindow*
/// @param style QStyle*
void k_xmlguiwindow_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KXmlGuiWindow*
///
/// @return enum Qt__WindowModality
int32_t k_xmlguiwindow_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KXmlGuiWindow*
/// @param windowModality enum Qt__WindowModality
void k_xmlguiwindow_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KXmlGuiWindow*
/// @param param1 QWidget*
bool k_xmlguiwindow_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KXmlGuiWindow*
/// @param enabled bool
void k_xmlguiwindow_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KXmlGuiWindow*
/// @param disabled bool
void k_xmlguiwindow_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KXmlGuiWindow*
/// @param windowModified bool
void k_xmlguiwindow_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KXmlGuiWindow*
QRect* k_xmlguiwindow_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KXmlGuiWindow*
const QRect* k_xmlguiwindow_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KXmlGuiWindow*
QRect* k_xmlguiwindow_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KXmlGuiWindow*
QPoint* k_xmlguiwindow_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KXmlGuiWindow*
QSize* k_xmlguiwindow_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KXmlGuiWindow*
QSize* k_xmlguiwindow_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KXmlGuiWindow*
QRect* k_xmlguiwindow_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KXmlGuiWindow*
QRect* k_xmlguiwindow_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KXmlGuiWindow*
QRegion* k_xmlguiwindow_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KXmlGuiWindow*
QSize* k_xmlguiwindow_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KXmlGuiWindow*
QSize* k_xmlguiwindow_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KXmlGuiWindow*
/// @param minimumSize QSize*
void k_xmlguiwindow_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KXmlGuiWindow*
/// @param minw int
/// @param minh int
void k_xmlguiwindow_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KXmlGuiWindow*
/// @param maximumSize QSize*
void k_xmlguiwindow_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KXmlGuiWindow*
/// @param maxw int
/// @param maxh int
void k_xmlguiwindow_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KXmlGuiWindow*
/// @param minw int
void k_xmlguiwindow_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KXmlGuiWindow*
/// @param minh int
void k_xmlguiwindow_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KXmlGuiWindow*
/// @param maxw int
void k_xmlguiwindow_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KXmlGuiWindow*
/// @param maxh int
void k_xmlguiwindow_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KXmlGuiWindow*
QSize* k_xmlguiwindow_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KXmlGuiWindow*
/// @param sizeIncrement QSize*
void k_xmlguiwindow_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KXmlGuiWindow*
/// @param w int
/// @param h int
void k_xmlguiwindow_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KXmlGuiWindow*
QSize* k_xmlguiwindow_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KXmlGuiWindow*
/// @param baseSize QSize*
void k_xmlguiwindow_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KXmlGuiWindow*
/// @param basew int
/// @param baseh int
void k_xmlguiwindow_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KXmlGuiWindow*
/// @param fixedSize QSize*
void k_xmlguiwindow_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KXmlGuiWindow*
/// @param w int
/// @param h int
void k_xmlguiwindow_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KXmlGuiWindow*
/// @param w int
void k_xmlguiwindow_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KXmlGuiWindow*
/// @param h int
void k_xmlguiwindow_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KXmlGuiWindow*
/// @param param1 QPointF*
QPointF* k_xmlguiwindow_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KXmlGuiWindow*
/// @param param1 QPoint*
QPoint* k_xmlguiwindow_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KXmlGuiWindow*
/// @param param1 QPointF*
QPointF* k_xmlguiwindow_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KXmlGuiWindow*
/// @param param1 QPoint*
QPoint* k_xmlguiwindow_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KXmlGuiWindow*
/// @param param1 QPointF*
QPointF* k_xmlguiwindow_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KXmlGuiWindow*
/// @param param1 QPoint*
QPoint* k_xmlguiwindow_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KXmlGuiWindow*
/// @param param1 QPointF*
QPointF* k_xmlguiwindow_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KXmlGuiWindow*
/// @param param1 QPoint*
QPoint* k_xmlguiwindow_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KXmlGuiWindow*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_xmlguiwindow_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KXmlGuiWindow*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_xmlguiwindow_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KXmlGuiWindow*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_xmlguiwindow_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KXmlGuiWindow*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_xmlguiwindow_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KXmlGuiWindow*
QWidget* k_xmlguiwindow_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KXmlGuiWindow*
QWidget* k_xmlguiwindow_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KXmlGuiWindow*
QWidget* k_xmlguiwindow_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KXmlGuiWindow*
const QPalette* k_xmlguiwindow_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KXmlGuiWindow*
/// @param palette QPalette*
void k_xmlguiwindow_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KXmlGuiWindow*
/// @param backgroundRole enum QPalette__ColorRole
void k_xmlguiwindow_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KXmlGuiWindow*
///
/// @return enum QPalette__ColorRole
int32_t k_xmlguiwindow_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KXmlGuiWindow*
/// @param foregroundRole enum QPalette__ColorRole
void k_xmlguiwindow_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KXmlGuiWindow*
///
/// @return enum QPalette__ColorRole
int32_t k_xmlguiwindow_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KXmlGuiWindow*
const QFont* k_xmlguiwindow_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KXmlGuiWindow*
/// @param font QFont*
void k_xmlguiwindow_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KXmlGuiWindow*
QFontMetrics* k_xmlguiwindow_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KXmlGuiWindow*
QFontInfo* k_xmlguiwindow_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KXmlGuiWindow*
QCursor* k_xmlguiwindow_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KXmlGuiWindow*
/// @param cursor QCursor*
void k_xmlguiwindow_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KXmlGuiWindow*
/// @param enable bool
void k_xmlguiwindow_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KXmlGuiWindow*
/// @param enable bool
void k_xmlguiwindow_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KXmlGuiWindow*
/// @param mask QBitmap*
void k_xmlguiwindow_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KXmlGuiWindow*
/// @param mask QRegion*
void k_xmlguiwindow_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KXmlGuiWindow*
QRegion* k_xmlguiwindow_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param target QPaintDevice*
void k_xmlguiwindow_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param painter QPainter*
void k_xmlguiwindow_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KXmlGuiWindow*
QPixmap* k_xmlguiwindow_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KXmlGuiWindow*
QGraphicsEffect* k_xmlguiwindow_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KXmlGuiWindow*
/// @param effect QGraphicsEffect*
void k_xmlguiwindow_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KXmlGuiWindow*
/// @param type enum Qt__GestureType
void k_xmlguiwindow_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KXmlGuiWindow*
/// @param type enum Qt__GestureType
void k_xmlguiwindow_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KXmlGuiWindow*
/// @param windowTitle const char*
void k_xmlguiwindow_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KXmlGuiWindow*
/// @param styleSheet const char*
void k_xmlguiwindow_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KXmlGuiWindow*
/// @param icon QIcon*
void k_xmlguiwindow_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KXmlGuiWindow*
QIcon* k_xmlguiwindow_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KXmlGuiWindow*
/// @param windowIconText const char*
void k_xmlguiwindow_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KXmlGuiWindow*
/// @param windowRole const char*
void k_xmlguiwindow_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KXmlGuiWindow*
/// @param filePath const char*
void k_xmlguiwindow_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KXmlGuiWindow*
/// @param level double
void k_xmlguiwindow_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KXmlGuiWindow*
double k_xmlguiwindow_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KXmlGuiWindow*
/// @param toolTip const char*
void k_xmlguiwindow_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KXmlGuiWindow*
/// @param msec int
void k_xmlguiwindow_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KXmlGuiWindow*
/// @param statusTip const char*
void k_xmlguiwindow_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KXmlGuiWindow*
/// @param whatsThis const char*
void k_xmlguiwindow_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
void k_xmlguiwindow_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KXmlGuiWindow*
/// @param description const char*
void k_xmlguiwindow_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KXmlGuiWindow*
/// @param direction enum Qt__LayoutDirection
void k_xmlguiwindow_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KXmlGuiWindow*
///
/// @return enum Qt__LayoutDirection
int32_t k_xmlguiwindow_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KXmlGuiWindow*
/// @param locale QLocale*
void k_xmlguiwindow_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KXmlGuiWindow*
QLocale* k_xmlguiwindow_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KXmlGuiWindow*
/// @param reason enum Qt__FocusReason
void k_xmlguiwindow_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KXmlGuiWindow*
///
/// @return enum Qt__FocusPolicy
int32_t k_xmlguiwindow_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KXmlGuiWindow*
/// @param policy enum Qt__FocusPolicy
void k_xmlguiwindow_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_xmlguiwindow_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KXmlGuiWindow*
/// @param focusProxy QWidget*
void k_xmlguiwindow_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KXmlGuiWindow*
QWidget* k_xmlguiwindow_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KXmlGuiWindow*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_xmlguiwindow_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KXmlGuiWindow*
/// @param policy enum Qt__ContextMenuPolicy
void k_xmlguiwindow_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KXmlGuiWindow*
/// @param param1 QCursor*
void k_xmlguiwindow_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KXmlGuiWindow*
/// @param key QKeySequence*
int32_t k_xmlguiwindow_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KXmlGuiWindow*
/// @param id int
void k_xmlguiwindow_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KXmlGuiWindow*
/// @param id int
void k_xmlguiwindow_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KXmlGuiWindow*
/// @param id int
void k_xmlguiwindow_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_xmlguiwindow_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_xmlguiwindow_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KXmlGuiWindow*
/// @param enable bool
void k_xmlguiwindow_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KXmlGuiWindow*
QGraphicsProxyWidget* k_xmlguiwindow_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KXmlGuiWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_xmlguiwindow_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KXmlGuiWindow*
/// @param param1 QRect*
void k_xmlguiwindow_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KXmlGuiWindow*
/// @param param1 QRegion*
void k_xmlguiwindow_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KXmlGuiWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_xmlguiwindow_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KXmlGuiWindow*
/// @param param1 QRect*
void k_xmlguiwindow_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KXmlGuiWindow*
/// @param param1 QRegion*
void k_xmlguiwindow_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KXmlGuiWindow*
/// @param hidden bool
void k_xmlguiwindow_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KXmlGuiWindow*
/// @param param1 QWidget*
void k_xmlguiwindow_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KXmlGuiWindow*
/// @param x int
/// @param y int
void k_xmlguiwindow_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KXmlGuiWindow*
/// @param param1 QPoint*
void k_xmlguiwindow_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KXmlGuiWindow*
/// @param w int
/// @param h int
void k_xmlguiwindow_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KXmlGuiWindow*
/// @param param1 QSize*
void k_xmlguiwindow_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KXmlGuiWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_xmlguiwindow_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KXmlGuiWindow*
/// @param geometry QRect*
void k_xmlguiwindow_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
char* k_xmlguiwindow_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KXmlGuiWindow*
/// @param geometry const char*
bool k_xmlguiwindow_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KXmlGuiWindow*
/// @param param1 QWidget*
bool k_xmlguiwindow_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KXmlGuiWindow*
///
/// @return flag of enum Qt__WindowState
int32_t k_xmlguiwindow_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KXmlGuiWindow*
/// @param state flag of enum Qt__WindowState
void k_xmlguiwindow_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KXmlGuiWindow*
/// @param state flag of enum Qt__WindowState
void k_xmlguiwindow_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KXmlGuiWindow*
QSizePolicy* k_xmlguiwindow_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KXmlGuiWindow*
/// @param sizePolicy QSizePolicy*
void k_xmlguiwindow_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KXmlGuiWindow*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_xmlguiwindow_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KXmlGuiWindow*
QRegion* k_xmlguiwindow_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KXmlGuiWindow*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_xmlguiwindow_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KXmlGuiWindow*
/// @param margins QMargins*
void k_xmlguiwindow_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KXmlGuiWindow*
QMargins* k_xmlguiwindow_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KXmlGuiWindow*
QRect* k_xmlguiwindow_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KXmlGuiWindow*
QLayout* k_xmlguiwindow_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KXmlGuiWindow*
/// @param layout QLayout*
void k_xmlguiwindow_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KXmlGuiWindow*
/// @param parent QWidget*
void k_xmlguiwindow_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KXmlGuiWindow*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_xmlguiwindow_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KXmlGuiWindow*
/// @param dx int
/// @param dy int
void k_xmlguiwindow_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KXmlGuiWindow*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_xmlguiwindow_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KXmlGuiWindow*
QWidget* k_xmlguiwindow_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KXmlGuiWindow*
QWidget* k_xmlguiwindow_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KXmlGuiWindow*
QWidget* k_xmlguiwindow_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KXmlGuiWindow*
/// @param on bool
void k_xmlguiwindow_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KXmlGuiWindow*
/// @param action QAction*
void k_xmlguiwindow_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KXmlGuiWindow*
/// @param actions libqt_list /* of QAction* */
void k_xmlguiwindow_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KXmlGuiWindow*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_xmlguiwindow_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KXmlGuiWindow*
/// @param before QAction*
/// @param action QAction*
void k_xmlguiwindow_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KXmlGuiWindow*
/// @param action QAction*
void k_xmlguiwindow_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KXmlGuiWindow*
libqt_list /* of QAction* */ k_xmlguiwindow_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KXmlGuiWindow*
/// @param text const char*
QAction* k_xmlguiwindow_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KXmlGuiWindow*
/// @param icon QIcon*
/// @param text const char*
QAction* k_xmlguiwindow_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KXmlGuiWindow*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_xmlguiwindow_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KXmlGuiWindow*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_xmlguiwindow_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KXmlGuiWindow*
QWidget* k_xmlguiwindow_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KXmlGuiWindow*
/// @param type flag of enum Qt__WindowType
void k_xmlguiwindow_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KXmlGuiWindow*
///
/// @return flag of enum Qt__WindowType
int64_t k_xmlguiwindow_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KXmlGuiWindow*
/// @param param1 enum Qt__WindowType
void k_xmlguiwindow_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KXmlGuiWindow*
/// @param type flag of enum Qt__WindowType
void k_xmlguiwindow_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KXmlGuiWindow*
///
/// @return enum Qt__WindowType
int64_t k_xmlguiwindow_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_xmlguiwindow_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KXmlGuiWindow*
/// @param x int
/// @param y int
QWidget* k_xmlguiwindow_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KXmlGuiWindow*
/// @param p QPoint*
QWidget* k_xmlguiwindow_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KXmlGuiWindow*
/// @param p QPointF*
QWidget* k_xmlguiwindow_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KXmlGuiWindow*
/// @param param1 enum Qt__WidgetAttribute
void k_xmlguiwindow_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KXmlGuiWindow*
/// @param param1 enum Qt__WidgetAttribute
bool k_xmlguiwindow_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KXmlGuiWindow*
/// @param child QWidget*
bool k_xmlguiwindow_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KXmlGuiWindow*
/// @param enabled bool
void k_xmlguiwindow_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KXmlGuiWindow*
QBackingStore* k_xmlguiwindow_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KXmlGuiWindow*
QWindow* k_xmlguiwindow_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KXmlGuiWindow*
QScreen* k_xmlguiwindow_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KXmlGuiWindow*
/// @param screen QScreen*
void k_xmlguiwindow_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_xmlguiwindow_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KXmlGuiWindow*
/// @param title const char*
void k_xmlguiwindow_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* title)
void k_xmlguiwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KXmlGuiWindow*
/// @param icon QIcon*
void k_xmlguiwindow_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QIcon* icon)
void k_xmlguiwindow_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KXmlGuiWindow*
/// @param iconText const char*
void k_xmlguiwindow_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* iconText)
void k_xmlguiwindow_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KXmlGuiWindow*
/// @param pos QPoint*
void k_xmlguiwindow_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QPoint* pos)
void k_xmlguiwindow_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KXmlGuiWindow*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_xmlguiwindow_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KXmlGuiWindow*
/// @param hints flag of enum Qt__InputMethodHint
void k_xmlguiwindow_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_xmlguiwindow_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_xmlguiwindow_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_xmlguiwindow_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_xmlguiwindow_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_xmlguiwindow_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_xmlguiwindow_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KXmlGuiWindow*
/// @param rectangle QRect*
QPixmap* k_xmlguiwindow_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KXmlGuiWindow*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_xmlguiwindow_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KXmlGuiWindow*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_xmlguiwindow_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KXmlGuiWindow*
/// @param id int
/// @param enable bool
void k_xmlguiwindow_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KXmlGuiWindow*
/// @param id int
/// @param enable bool
void k_xmlguiwindow_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KXmlGuiWindow*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_xmlguiwindow_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KXmlGuiWindow*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_xmlguiwindow_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_xmlguiwindow_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_xmlguiwindow_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KXmlGuiWindow*
/// @param name char*
void k_xmlguiwindow_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KXmlGuiWindow*
/// @param b bool
bool k_xmlguiwindow_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KXmlGuiWindow*
QThread* k_xmlguiwindow_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KXmlGuiWindow*
/// @param thread QThread*
bool k_xmlguiwindow_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KXmlGuiWindow*
/// @param interval int
int32_t k_xmlguiwindow_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KXmlGuiWindow*
/// @param id int
void k_xmlguiwindow_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KXmlGuiWindow*
/// @param id enum Qt__TimerId
void k_xmlguiwindow_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KXmlGuiWindow*
libqt_list /* of QObject* */ k_xmlguiwindow_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KXmlGuiWindow*
/// @param filterObj QObject*
void k_xmlguiwindow_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KXmlGuiWindow*
/// @param obj QObject*
void k_xmlguiwindow_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_xmlguiwindow_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KXmlGuiWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_xmlguiwindow_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_xmlguiwindow_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_xmlguiwindow_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
/// @param value QVariant*
bool k_xmlguiwindow_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
QVariant* k_xmlguiwindow_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXmlGuiWindow*
const char** k_xmlguiwindow_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KXmlGuiWindow*
QBindingStorage* k_xmlguiwindow_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KXmlGuiWindow*
const QBindingStorage* k_xmlguiwindow_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self)
void k_xmlguiwindow_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KXmlGuiWindow*
QObject* k_xmlguiwindow_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KXmlGuiWindow*
/// @param classname const char*
bool k_xmlguiwindow_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KXmlGuiWindow*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_xmlguiwindow_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KXmlGuiWindow*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_xmlguiwindow_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_xmlguiwindow_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KXmlGuiWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_xmlguiwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXmlGuiWindow*
/// @param param1 QObject*
void k_xmlguiwindow_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QObject* param1)
void k_xmlguiwindow_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KXmlGuiWindow*
double k_xmlguiwindow_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KXmlGuiWindow*
double k_xmlguiwindow_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_xmlguiwindow_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_xmlguiwindow_encode_metric_f(int32_t metric, double value);

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#builderClient)
///
/// @param self KXmlGuiWindow*
KXMLGUIClient* k_xmlguiwindow_builder_client(void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#setBuilderClient)
///
/// @param self KXmlGuiWindow*
/// @param client KXMLGUIClient*
void k_xmlguiwindow_set_builder_client(void* self, void* client);

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#widget)
///
/// @param self KXmlGuiWindow*
QWidget* k_xmlguiwindow_widget(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
QAction* k_xmlguiwindow_action(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
///
/// @param self KXmlGuiWindow*
/// @param doc QDomDocument*
void k_xmlguiwindow_set_x_m_l_g_u_i_build_document(void* self, void* doc);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
///
/// @param self KXmlGuiWindow*
QDomDocument* k_xmlguiwindow_xmlgui_build_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setFactory)
///
/// @param self KXmlGuiWindow*
/// @param factory KXMLGUIFactory*
void k_xmlguiwindow_set_factory(void* self, void* factory);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#factory)
///
/// @param self KXmlGuiWindow*
KXMLGUIFactory* k_xmlguiwindow_factory(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#parentClient)
///
/// @param self KXmlGuiWindow*
KXMLGUIClient* k_xmlguiwindow_parent_client(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#insertChildClient)
///
/// @param self KXmlGuiWindow*
/// @param child KXMLGUIClient*
void k_xmlguiwindow_insert_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#removeChildClient)
///
/// @param self KXmlGuiWindow*
/// @param child KXMLGUIClient*
void k_xmlguiwindow_remove_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#childClients)
///
/// @param self KXmlGuiWindow*
libqt_list /* of KXMLGUIClient* */ k_xmlguiwindow_child_clients(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
///
/// @param self KXmlGuiWindow*
/// @param builder KXMLGUIBuilder*
void k_xmlguiwindow_set_client_builder(void* self, void* builder);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#clientBuilder)
///
/// @param self KXmlGuiWindow*
KXMLGUIBuilder* k_xmlguiwindow_client_builder(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#reloadXML)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_reload_x_m_l(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#plugActionList)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
/// @param actionList libqt_list /* of QAction* */
void k_xmlguiwindow_plug_action_list(void* self, const char* name, libqt_list actionList);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#unplugActionList)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
void k_xmlguiwindow_unplug_action_list(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
///
/// Caller is responsible for freeing the returned memory
///
/// @param files const char**
/// @param doc const char*
const char* k_xmlguiwindow_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
///
/// @param self KXmlGuiWindow*
/// @param state const char*
/// @param action const char*
void k_xmlguiwindow_add_state_action_enabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
///
/// @param self KXmlGuiWindow*
/// @param state const char*
/// @param action const char*
void k_xmlguiwindow_add_state_action_disabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
///
/// @param self KXmlGuiWindow*
/// @param state const char*
KXMLGUIClient__StateChange* k_xmlguiwindow_get_actions_to_change_for_state(void* self, const char* state);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
///
/// @param self KXmlGuiWindow*
/// @param param1 QWidget*
void k_xmlguiwindow_begin_x_m_l_plug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_end_x_m_l_plug(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
///
/// @param self KXmlGuiWindow*
/// @param param1 QWidget*
void k_xmlguiwindow_prepare_x_m_l_unplug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KXmlGuiWindow*
/// @param xmlfile const char*
/// @param localxmlfile const char*
void k_xmlguiwindow_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
///
/// Caller is responsible for freeing the returned memory
///
/// @param xml const char*
const char* k_xmlguiwindow_find_version_number(const char* xml);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KXmlGuiWindow*
/// @param xmlfile const char*
/// @param localxmlfile const char*
/// @param merge bool
void k_xmlguiwindow_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param caption const char*
void k_xmlguiwindow_set_caption(void* self, const char* caption);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param caption const char*
void k_xmlguiwindow_qbase_set_caption(void* self, const char* caption);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* caption)
void k_xmlguiwindow_on_set_caption(void* self, void (*callback)(void*, const char*));

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setPlainCaption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param caption const char*
void k_xmlguiwindow_set_plain_caption(void* self, const char* caption);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setPlainCaption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param caption const char*
void k_xmlguiwindow_qbase_set_plain_caption(void* self, const char* caption);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#setPlainCaption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* caption)
void k_xmlguiwindow_on_set_plain_caption(void* self, void (*callback)(void*, const char*));

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param keyEvent QKeyEvent*
void k_xmlguiwindow_key_press_event(void* self, void* keyEvent);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param keyEvent QKeyEvent*
void k_xmlguiwindow_qbase_key_press_event(void* self, void* keyEvent);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QKeyEvent* keyEvent)
void k_xmlguiwindow_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 QCloseEvent*
void k_xmlguiwindow_close_event(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 QCloseEvent*
void k_xmlguiwindow_qbase_close_event(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QCloseEvent* param1)
void k_xmlguiwindow_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#queryClose)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_query_close(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#queryClose)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_qbase_query_close(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#queryClose)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func()
void k_xmlguiwindow_on_query_close(void* self, bool (*callback)());

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfigGroup*
void k_xmlguiwindow_save_properties(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveProperties)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfigGroup*
void k_xmlguiwindow_qbase_save_properties(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveProperties)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, KConfigGroup* param1)
void k_xmlguiwindow_on_save_properties(void* self, void (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfigGroup*
void k_xmlguiwindow_read_properties(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#readProperties)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfigGroup*
void k_xmlguiwindow_qbase_read_properties(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#readProperties)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, KConfigGroup* param1)
void k_xmlguiwindow_on_read_properties(void* self, void (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param sessionConfig KConfig*
void k_xmlguiwindow_save_global_properties(void* self, void* sessionConfig);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param sessionConfig KConfig*
void k_xmlguiwindow_qbase_save_global_properties(void* self, void* sessionConfig);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, KConfig* sessionConfig)
void k_xmlguiwindow_on_save_global_properties(void* self, void (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#readGlobalProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param sessionConfig KConfig*
void k_xmlguiwindow_read_global_properties(void* self, void* sessionConfig);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#readGlobalProperties)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param sessionConfig KConfig*
void k_xmlguiwindow_qbase_read_global_properties(void* self, void* sessionConfig);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#readGlobalProperties)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, KConfig* sessionConfig)
void k_xmlguiwindow_on_read_global_properties(void* self, void (*callback)(void*, void*));

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
QMenu* k_xmlguiwindow_create_popup_menu(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
QMenu* k_xmlguiwindow_qbase_create_popup_menu(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QMenu* func()
void k_xmlguiwindow_on_create_popup_menu(void* self, QMenu* (*callback)());

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QContextMenuEvent*
void k_xmlguiwindow_context_menu_event(void* self, void* event);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QContextMenuEvent*
void k_xmlguiwindow_qbase_context_menu_event(void* self, void* event);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QContextMenuEvent* event)
void k_xmlguiwindow_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback int32_t func()
void k_xmlguiwindow_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param visible bool
void k_xmlguiwindow_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param visible bool
void k_xmlguiwindow_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, bool visible)
void k_xmlguiwindow_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
QSize* k_xmlguiwindow_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
QSize* k_xmlguiwindow_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QSize* func()
void k_xmlguiwindow_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
QSize* k_xmlguiwindow_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
QSize* k_xmlguiwindow_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QSize* func()
void k_xmlguiwindow_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 int
int32_t k_xmlguiwindow_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 int
int32_t k_xmlguiwindow_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback int32_t func(KXmlGuiWindow* self, int param1)
void k_xmlguiwindow_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func()
void k_xmlguiwindow_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
QPaintEngine* k_xmlguiwindow_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
QPaintEngine* k_xmlguiwindow_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QPaintEngine* func()
void k_xmlguiwindow_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
void k_xmlguiwindow_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
void k_xmlguiwindow_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QMouseEvent* event)
void k_xmlguiwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
void k_xmlguiwindow_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
void k_xmlguiwindow_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QMouseEvent* event)
void k_xmlguiwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
void k_xmlguiwindow_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
void k_xmlguiwindow_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QMouseEvent* event)
void k_xmlguiwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
void k_xmlguiwindow_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
void k_xmlguiwindow_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QMouseEvent* event)
void k_xmlguiwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QWheelEvent*
void k_xmlguiwindow_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QWheelEvent*
void k_xmlguiwindow_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QWheelEvent* event)
void k_xmlguiwindow_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QKeyEvent*
void k_xmlguiwindow_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QKeyEvent*
void k_xmlguiwindow_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QKeyEvent* event)
void k_xmlguiwindow_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QFocusEvent*
void k_xmlguiwindow_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QFocusEvent*
void k_xmlguiwindow_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QFocusEvent* event)
void k_xmlguiwindow_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QFocusEvent*
void k_xmlguiwindow_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QFocusEvent*
void k_xmlguiwindow_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QFocusEvent* event)
void k_xmlguiwindow_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QEnterEvent*
void k_xmlguiwindow_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QEnterEvent*
void k_xmlguiwindow_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QEnterEvent* event)
void k_xmlguiwindow_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QEvent*
void k_xmlguiwindow_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QEvent*
void k_xmlguiwindow_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QEvent* event)
void k_xmlguiwindow_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QPaintEvent*
void k_xmlguiwindow_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QPaintEvent*
void k_xmlguiwindow_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QPaintEvent* event)
void k_xmlguiwindow_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMoveEvent*
void k_xmlguiwindow_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMoveEvent*
void k_xmlguiwindow_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QMoveEvent* event)
void k_xmlguiwindow_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QResizeEvent*
void k_xmlguiwindow_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QResizeEvent*
void k_xmlguiwindow_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QResizeEvent* event)
void k_xmlguiwindow_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QTabletEvent*
void k_xmlguiwindow_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QTabletEvent*
void k_xmlguiwindow_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QTabletEvent* event)
void k_xmlguiwindow_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QActionEvent*
void k_xmlguiwindow_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QActionEvent*
void k_xmlguiwindow_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QActionEvent* event)
void k_xmlguiwindow_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDragEnterEvent*
void k_xmlguiwindow_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDragEnterEvent*
void k_xmlguiwindow_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QDragEnterEvent* event)
void k_xmlguiwindow_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDragMoveEvent*
void k_xmlguiwindow_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDragMoveEvent*
void k_xmlguiwindow_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QDragMoveEvent* event)
void k_xmlguiwindow_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDragLeaveEvent*
void k_xmlguiwindow_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDragLeaveEvent*
void k_xmlguiwindow_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QDragLeaveEvent* event)
void k_xmlguiwindow_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDropEvent*
void k_xmlguiwindow_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDropEvent*
void k_xmlguiwindow_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QDropEvent* event)
void k_xmlguiwindow_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QShowEvent*
void k_xmlguiwindow_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QShowEvent*
void k_xmlguiwindow_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QShowEvent* event)
void k_xmlguiwindow_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QHideEvent*
void k_xmlguiwindow_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QHideEvent*
void k_xmlguiwindow_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QHideEvent* event)
void k_xmlguiwindow_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_xmlguiwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_xmlguiwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self, const char* eventType, void* message, intptr_t* result)
void k_xmlguiwindow_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 QEvent*
void k_xmlguiwindow_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 QEvent*
void k_xmlguiwindow_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QEvent* param1)
void k_xmlguiwindow_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_xmlguiwindow_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_xmlguiwindow_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback int32_t func(KXmlGuiWindow* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_xmlguiwindow_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param painter QPainter*
void k_xmlguiwindow_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param painter QPainter*
void k_xmlguiwindow_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QPainter* painter)
void k_xmlguiwindow_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param offset QPoint*
QPaintDevice* k_xmlguiwindow_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param offset QPoint*
QPaintDevice* k_xmlguiwindow_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QPaintDevice* func(KXmlGuiWindow* self, QPoint* offset)
void k_xmlguiwindow_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
QPainter* k_xmlguiwindow_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
QPainter* k_xmlguiwindow_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QPainter* func()
void k_xmlguiwindow_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 QInputMethodEvent*
void k_xmlguiwindow_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 QInputMethodEvent*
void k_xmlguiwindow_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QInputMethodEvent* param1)
void k_xmlguiwindow_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_xmlguiwindow_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_xmlguiwindow_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QVariant* func(KXmlGuiWindow* self, enum Qt__InputMethodQuery param1)
void k_xmlguiwindow_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param next bool
bool k_xmlguiwindow_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param next bool
bool k_xmlguiwindow_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self, bool next)
void k_xmlguiwindow_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param watched QObject*
/// @param event QEvent*
bool k_xmlguiwindow_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param watched QObject*
/// @param event QEvent*
bool k_xmlguiwindow_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self, QObject* watched, QEvent* event)
void k_xmlguiwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QTimerEvent*
void k_xmlguiwindow_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QTimerEvent*
void k_xmlguiwindow_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QTimerEvent* event)
void k_xmlguiwindow_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QChildEvent*
void k_xmlguiwindow_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QChildEvent*
void k_xmlguiwindow_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QChildEvent* event)
void k_xmlguiwindow_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QEvent*
void k_xmlguiwindow_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QEvent*
void k_xmlguiwindow_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QEvent* event)
void k_xmlguiwindow_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param signal QMetaMethod*
void k_xmlguiwindow_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param signal QMetaMethod*
void k_xmlguiwindow_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QMetaMethod* signal)
void k_xmlguiwindow_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param signal QMetaMethod*
void k_xmlguiwindow_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param signal QMetaMethod*
void k_xmlguiwindow_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QMetaMethod* signal)
void k_xmlguiwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#containerTags)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
const char** k_xmlguiwindow_container_tags(void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#containerTags)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
const char** k_xmlguiwindow_qbase_container_tags(void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#containerTags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback const char** func()
void k_xmlguiwindow_on_container_tags(void* self, const char** (*callback)());

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createContainer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
/// @param containerAction QAction**
QWidget* k_xmlguiwindow_create_container(void* self, void* parent, int index, void* element, void** containerAction);

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createContainer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
/// @param containerAction QAction**
QWidget* k_xmlguiwindow_qbase_create_container(void* self, void* parent, int index, void* element, void** containerAction);

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createContainer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QWidget* func(KXmlGuiWindow* self, QWidget* parent, int index, QDomElement* element, QAction** containerAction)
void k_xmlguiwindow_on_create_container(void* self, QWidget* (*callback)(void*, void*, int, void*, void**));

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#removeContainer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param container QWidget*
/// @param parent QWidget*
/// @param element QDomElement*
/// @param containerAction QAction*
void k_xmlguiwindow_remove_container(void* self, void* container, void* parent, void* element, void* containerAction);

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#removeContainer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param container QWidget*
/// @param parent QWidget*
/// @param element QDomElement*
/// @param containerAction QAction*
void k_xmlguiwindow_qbase_remove_container(void* self, void* container, void* parent, void* element, void* containerAction);

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#removeContainer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction)
void k_xmlguiwindow_on_remove_container(void* self, void (*callback)(void*, void*, void*, void*, void*));

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#customTags)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
const char** k_xmlguiwindow_custom_tags(void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#customTags)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
const char** k_xmlguiwindow_qbase_custom_tags(void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#customTags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback const char** func()
void k_xmlguiwindow_on_custom_tags(void* self, const char** (*callback)());

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
QAction* k_xmlguiwindow_create_custom_element(void* self, void* parent, int index, void* element);

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
QAction* k_xmlguiwindow_qbase_create_custom_element(void* self, void* parent, int index, void* element);

/// Inherited from KXMLGUIBuilder
///
/// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QAction* func(KXmlGuiWindow* self, QWidget* parent, int index, QDomElement* element)
void k_xmlguiwindow_on_create_custom_element(void* self, QAction* (*callback)(void*, void*, int, void*));

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param element QDomElement*
QAction* k_xmlguiwindow_action2(void* self, void* element);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param element QDomElement*
QAction* k_xmlguiwindow_qbase_action2(void* self, void* element);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QAction* func(KXmlGuiWindow* self, QDomElement* element)
void k_xmlguiwindow_on_action2(void* self, QAction* (*callback)(void*, void*));

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
KActionCollection* k_xmlguiwindow_action_collection(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
KActionCollection* k_xmlguiwindow_qbase_action_collection(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback KActionCollection* func()
void k_xmlguiwindow_on_action_collection(void* self, KActionCollection* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_component_name(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_qbase_component_name(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback const char* func()
void k_xmlguiwindow_on_component_name(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
QDomDocument* k_xmlguiwindow_dom_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
QDomDocument* k_xmlguiwindow_qbase_dom_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QDomDocument* func()
void k_xmlguiwindow_on_dom_document(void* self, QDomDocument* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_qbase_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback const char* func()
void k_xmlguiwindow_on_xml_file(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_local_x_m_l_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_qbase_local_x_m_l_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback const char* func()
void k_xmlguiwindow_on_local_x_m_l_file(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param componentName const char*
/// @param componentDisplayName const char*
void k_xmlguiwindow_set_component_name(void* self, const char* componentName, const char* componentDisplayName);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param componentName const char*
/// @param componentDisplayName const char*
void k_xmlguiwindow_qbase_set_component_name(void* self, const char* componentName, const char* componentDisplayName);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* componentName, const char* componentDisplayName)
void k_xmlguiwindow_on_set_component_name(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param file const char*
/// @param merge bool
/// @param setXMLDoc bool
void k_xmlguiwindow_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param file const char*
/// @param merge bool
/// @param setXMLDoc bool
void k_xmlguiwindow_qbase_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* file, bool merge, bool setXMLDoc)
void k_xmlguiwindow_on_set_x_m_l_file(void* self, void (*callback)(void*, const char*, bool, bool));

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param file const char*
void k_xmlguiwindow_set_local_x_m_l_file(void* self, const char* file);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param file const char*
void k_xmlguiwindow_qbase_set_local_x_m_l_file(void* self, const char* file);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* file)
void k_xmlguiwindow_on_set_local_x_m_l_file(void* self, void (*callback)(void*, const char*));

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param document const char*
/// @param merge bool
void k_xmlguiwindow_set_x_m_l(void* self, const char* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param document const char*
/// @param merge bool
void k_xmlguiwindow_qbase_set_x_m_l(void* self, const char* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* document, bool merge)
void k_xmlguiwindow_on_set_x_m_l(void* self, void (*callback)(void*, const char*, bool));

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param document QDomDocument*
/// @param merge bool
void k_xmlguiwindow_set_d_o_m_document(void* self, void* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param document QDomDocument*
/// @param merge bool
void k_xmlguiwindow_qbase_set_d_o_m_document(void* self, void* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QDomDocument* document, bool merge)
void k_xmlguiwindow_on_set_d_o_m_document(void* self, void (*callback)(void*, void*, bool));

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param newstate const char*
/// @param reverse enum KXMLGUIClient__ReverseStateChange
void k_xmlguiwindow_state_changed(void* self, const char* newstate, int32_t reverse);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param newstate const char*
/// @param reverse enum KXMLGUIClient__ReverseStateChange
void k_xmlguiwindow_qbase_state_changed(void* self, const char* newstate, int32_t reverse);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* newstate, enum KXMLGUIClient__ReverseStateChange reverse)
void k_xmlguiwindow_on_state_changed(void* self, void (*callback)(void*, const char*, int32_t));

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfig*
/// @param param2 int
void k_xmlguiwindow_save_properties_internal(void* self, void* param1, int param2);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfig*
/// @param param2 int
void k_xmlguiwindow_qbase_save_properties_internal(void* self, void* param1, int param2);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, KConfig* param1, int param2)
void k_xmlguiwindow_on_save_properties_internal(void* self, void (*callback)(void*, void*, int));

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfig*
/// @param param2 int
bool k_xmlguiwindow_read_properties_internal(void* self, void* param1, int param2);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfig*
/// @param param2 int
bool k_xmlguiwindow_qbase_read_properties_internal(void* self, void* param1, int param2);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self, KConfig* param1, int param2)
void k_xmlguiwindow_on_read_properties_internal(void* self, bool (*callback)(void*, void*, int));

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#settingsDirty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_settings_dirty(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#settingsDirty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_qbase_settings_dirty(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#settingsDirty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func()
void k_xmlguiwindow_on_settings_dirty(void* self, bool (*callback)());

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_save_auto_save_settings(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_qbase_save_auto_save_settings(void* self);

/// Inherited from KMainWindow
///
/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func()
void k_xmlguiwindow_on_save_auto_save_settings(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func()
void k_xmlguiwindow_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func()
void k_xmlguiwindow_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func()
void k_xmlguiwindow_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func()
void k_xmlguiwindow_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
bool k_xmlguiwindow_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func()
void k_xmlguiwindow_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
QObject* k_xmlguiwindow_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
QObject* k_xmlguiwindow_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QObject* func()
void k_xmlguiwindow_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
int32_t k_xmlguiwindow_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback int32_t func()
void k_xmlguiwindow_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param signal const char*
int32_t k_xmlguiwindow_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param signal const char*
int32_t k_xmlguiwindow_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback int32_t func(KXmlGuiWindow* self, const char* signal)
void k_xmlguiwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param signal QMetaMethod*
bool k_xmlguiwindow_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param signal QMetaMethod*
bool k_xmlguiwindow_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self, QMetaMethod* signal)
void k_xmlguiwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_xmlguiwindow_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_xmlguiwindow_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback double func(KXmlGuiWindow* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_xmlguiwindow_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_standards_xml_file_location(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
const char* k_xmlguiwindow_qbase_standards_xml_file_location(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback const char* func()
void k_xmlguiwindow_on_standards_xml_file_location(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_load_standards_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_qbase_load_standards_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func()
void k_xmlguiwindow_on_load_standards_xml_file(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* objectName)
void k_xmlguiwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#dtor.KXmlGuiWindow)
///
/// Delete this object from C++ memory.
///
/// @param self KXmlGuiWindow*
void k_xmlguiwindow_delete(void* self);

/// https://api.kde.org/kxmlguiwindow.html#types

typedef enum {
    KXMLGUIWINDOW_STANDARDWINDOWOPTION_TOOLBAR = 1,
    KXMLGUIWINDOW_STANDARDWINDOWOPTION_KEYS = 2,
    KXMLGUIWINDOW_STANDARDWINDOWOPTION_STATUSBAR = 4,
    KXMLGUIWINDOW_STANDARDWINDOWOPTION_SAVE = 8,
    KXMLGUIWINDOW_STANDARDWINDOWOPTION_CREATE = 16,
    KXMLGUIWINDOW_STANDARDWINDOWOPTION_DEFAULT = 31
} KXmlGuiWindow__StandardWindowOption;

#endif

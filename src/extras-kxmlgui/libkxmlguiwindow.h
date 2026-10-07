#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKXMLGUIWINDOW_H
#define EXTRAS_KXMLGUI_LIBKXMLGUIWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html)

/// k_xmlguiwindow_new constructs a new KXmlGuiWindow object.
///
/// @param parent QWidget*
///
KXmlGuiWindow* k_xmlguiwindow_new(void* parent);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html)

/// k_xmlguiwindow_new2 constructs a new KXmlGuiWindow object.
///
KXmlGuiWindow* k_xmlguiwindow_new2();

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html)

/// k_xmlguiwindow_new3 constructs a new KXmlGuiWindow object.
///
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
KXmlGuiWindow* k_xmlguiwindow_new3(void* parent, int32_t flags);

/// Upcasts to a KXMLGUIBuilder object
///
/// @param self const KXmlGuiWindow*
///
KXMLGUIBuilder* k_xmlguiwindow_as_k_x_m_l_g_u_i_builder(const void* self);

/// Downcasts to a KXmlGuiWindow object
///
/// @param _kxmlguibuilder KXMLGUIBuilder*
///
KXmlGuiWindow* k_xmlguiwindow_from_k_x_m_l_g_u_i_builder(const void* _kxmlguibuilder);

/// Upcasts to a KXMLGUIClient object
///
/// @param self const KXmlGuiWindow*
///
KXMLGUIClient* k_xmlguiwindow_as_k_x_m_l_g_u_i_client(const void* self);

/// Downcasts to a KXmlGuiWindow object
///
/// @param _kxmlguiclient KXMLGUIClient*
///
KXmlGuiWindow* k_xmlguiwindow_from_k_x_m_l_g_u_i_client(const void* _kxmlguiclient);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KXmlGuiWindow*
///
const QMetaObject* k_xmlguiwindow_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback const QMetaObject* func(const KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KXmlGuiWindow*
///
const QMetaObject* k_xmlguiwindow_super_meta_object(const void* self);

/// @param self KXmlGuiWindow*
/// @param param1 const char*
///
void* k_xmlguiwindow_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback void* func(KXmlGuiWindow* self, const char* param1)
///
void k_xmlguiwindow_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KXmlGuiWindow*
/// @param param1 const char*
///
void* k_xmlguiwindow_super_metacast(void* self, const char* param1);

/// @param self KXmlGuiWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_xmlguiwindow_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback int32_t func(KXmlGuiWindow* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_xmlguiwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KXmlGuiWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_xmlguiwindow_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_xmlguiwindow_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setHelpMenuEnabled)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_set_help_menu_enabled(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isHelpMenuEnabled)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_help_menu_enabled(const void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#guiFactory)
///
/// @param self KXmlGuiWindow*
///
KXMLGUIFactory* k_xmlguiwindow_gui_factory(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#guiFactory)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback KXMLGUIFactory* func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_gui_factory(void* self, KXMLGUIFactory* (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#guiFactory)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
///
KXMLGUIFactory* k_xmlguiwindow_super_gui_factory(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#createGUI)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_create_g_u_i(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setStandardToolBarMenuEnabled)
///
/// @param self KXmlGuiWindow*
/// @param showToolBarMenu bool
///
void k_xmlguiwindow_set_standard_tool_bar_menu_enabled(void* self, bool showToolBarMenu);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isStandardToolBarMenuEnabled)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_standard_tool_bar_menu_enabled(const void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#createStandardStatusBarAction)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_create_standard_status_bar_action(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_setup_g_u_i(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KXmlGuiWindow*
/// @param defaultSize QSize*
///
void k_xmlguiwindow_setup_g_u_i2(void* self, const void* defaultSize);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#toolBarMenuAction)
///
/// @param self KXmlGuiWindow*
///
QAction* k_xmlguiwindow_tool_bar_menu_action(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupToolbarMenuActions)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_setup_toolbar_menu_actions(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#toolBarNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KXmlGuiWindow*
///
const char** k_xmlguiwindow_tool_bar_names(const void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#finalizeGUI)
///
/// @param self KXmlGuiWindow*
/// @param force bool
///
void k_xmlguiwindow_finalize_g_u_i(void* self, bool force);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
///
/// @param self KXmlGuiWindow*
/// @param config KConfigGroup*
///
void k_xmlguiwindow_apply_main_window_settings(void* self, const void* config);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, KConfigGroup* config)
///
void k_xmlguiwindow_on_apply_main_window_settings(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
/// @param config KConfigGroup*
///
void k_xmlguiwindow_super_apply_main_window_settings(void* self, const void* config);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setCommandBarEnabled)
///
/// @param self KXmlGuiWindow*
/// @param showCommandBar bool
///
void k_xmlguiwindow_set_command_bar_enabled(void* self, bool showCommandBar);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isCommandBarEnabled)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_command_bar_enabled(const void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#configureToolbars)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_configure_toolbars(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#configureToolbars)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_configure_toolbars(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#configureToolbars)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_super_configure_toolbars(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
///
/// @param self KXmlGuiWindow*
/// @param newstate const char*
///
void k_xmlguiwindow_slot_state_changed(void* self, const char* newstate);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* newstate)
///
void k_xmlguiwindow_on_slot_state_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
/// @param newstate const char*
///
void k_xmlguiwindow_super_slot_state_changed(void* self, const char* newstate);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
///
/// @param self KXmlGuiWindow*
/// @param newstate const char*
/// @param reverse bool
///
void k_xmlguiwindow_slot_state_changed2(void* self, const char* newstate, bool reverse);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#isToolBarVisible)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
///
bool k_xmlguiwindow_is_tool_bar_visible(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setToolBarVisible)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
/// @param visible bool
///
void k_xmlguiwindow_set_tool_bar_visible(void* self, const char* name, bool visible);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#event)
///
/// @param self KXmlGuiWindow*
/// @param event QEvent*
///
bool k_xmlguiwindow_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self, QEvent* event)
///
void k_xmlguiwindow_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#event)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
/// @param event QEvent*
///
bool k_xmlguiwindow_super_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_check_ambiguous_shortcuts(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#saveNewToolbarConfig)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_save_new_toolbar_config(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#saveNewToolbarConfig)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_save_new_toolbar_config(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#saveNewToolbarConfig)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_super_save_new_toolbar_config(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_xmlguiwindow_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_xmlguiwindow_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setHelpMenuEnabled)
///
/// @param self KXmlGuiWindow*
/// @param showHelpMenu bool
///
void k_xmlguiwindow_set_help_menu_enabled1(void* self, bool showHelpMenu);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#createGUI)
///
/// @param self KXmlGuiWindow*
/// @param xmlfile const char*
///
void k_xmlguiwindow_create_g_u_i1(void* self, const char* xmlfile);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KXmlGuiWindow*
/// @param options flag of enum KXmlGuiWindow__StandardWindowOption
///
void k_xmlguiwindow_setup_g_u_i1(void* self, int32_t options);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KXmlGuiWindow*
/// @param options flag of enum KXmlGuiWindow__StandardWindowOption
/// @param xmlfile const char*
///
void k_xmlguiwindow_setup_g_u_i22(void* self, int32_t options, const char* xmlfile);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KXmlGuiWindow*
/// @param defaultSize QSize*
/// @param options flag of enum KXmlGuiWindow__StandardWindowOption
///
void k_xmlguiwindow_setup_g_u_i23(void* self, const void* defaultSize, int32_t options);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#setupGUI)
///
/// @param self KXmlGuiWindow*
/// @param defaultSize QSize*
/// @param options flag of enum KXmlGuiWindow__StandardWindowOption
/// @param xmlfile const char*
///
void k_xmlguiwindow_setup_g_u_i3(void* self, const void* defaultSize, int32_t options, const char* xmlfile);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#canBeRestored)
///
/// @param numberOfInstances int
///
bool k_xmlguiwindow_can_be_restored(int numberOfInstances);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#classNameOfToplevel)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param instanceNumber int
///
const char* k_xmlguiwindow_class_name_of_toplevel(int instanceNumber);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#restore)
///
/// @param self KXmlGuiWindow*
/// @param numberOfInstances int
///
bool k_xmlguiwindow_restore(void* self, int numberOfInstances);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#hasMenuBar)
///
/// @param self KXmlGuiWindow*
///
bool k_xmlguiwindow_has_menu_bar(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#memberList)
///
/// @return libqt_list of KMainWindow*
///
libqt_list k_xmlguiwindow_member_list();

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#toolBar)
///
/// @param self KXmlGuiWindow*
///
KToolBar* k_xmlguiwindow_tool_bar(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#toolBars)
///
/// @param self const KXmlGuiWindow*
///
/// @return libqt_list of KToolBar*
///
libqt_list k_xmlguiwindow_tool_bars(const void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_set_auto_save_settings(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KXmlGuiWindow*
/// @param group KConfigGroup*
///
void k_xmlguiwindow_set_auto_save_settings2(void* self, const void* group);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#resetAutoSaveSettings)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_reset_auto_save_settings(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveSettings)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_auto_save_settings(const void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveGroup)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_auto_save_group(const void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#autoSaveConfigGroup)
///
/// @param self const KXmlGuiWindow*
///
KConfigGroup* k_xmlguiwindow_auto_save_config_group(const void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setStateConfigGroup)
///
/// @param self KXmlGuiWindow*
/// @param configGroup const char*
///
void k_xmlguiwindow_set_state_config_group(void* self, const char* configGroup);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#stateConfigGroup)
///
/// @param self const KXmlGuiWindow*
///
KConfigGroup* k_xmlguiwindow_state_config_group(const void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveMainWindowSettings)
///
/// @param self KXmlGuiWindow*
/// @param config KConfigGroup*
///
void k_xmlguiwindow_save_main_window_settings(void* self, void* config);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#dbusName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_dbus_name(const void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
///
/// @param self KXmlGuiWindow*
/// @param caption const char*
/// @param modified bool
///
void k_xmlguiwindow_set_caption2(void* self, const char* caption, bool modified);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Allows for overriding the related default method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* caption, bool modified)
///
void k_xmlguiwindow_on_set_caption2(void* self, void (*callback)(void*, const char*, bool));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Base class method implementation
///
/// @param self KXmlGuiWindow*
/// @param caption const char*
/// @param modified bool
///
void k_xmlguiwindow_super_set_caption2(void* self, const char* caption, bool modified);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#appHelpActivated)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_app_help_activated(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setSettingsDirty)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_set_settings_dirty(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#restore)
///
/// @param self KXmlGuiWindow*
/// @param numberOfInstances int
/// @param show bool
///
bool k_xmlguiwindow_restore2(void* self, int numberOfInstances, bool show);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#toolBar)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
///
KToolBar* k_xmlguiwindow_tool_bar1(void* self, const char* name);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KXmlGuiWindow*
/// @param groupName const char*
///
void k_xmlguiwindow_set_auto_save_settings1(void* self, const char* groupName);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KXmlGuiWindow*
/// @param groupName const char*
/// @param saveWindowSize bool
///
void k_xmlguiwindow_set_auto_save_settings22(void* self, const char* groupName, bool saveWindowSize);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KXmlGuiWindow*
/// @param group KConfigGroup*
/// @param saveWindowSize bool
///
void k_xmlguiwindow_set_auto_save_settings23(void* self, const void* group, bool saveWindowSize);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#iconSize)
///
/// @param self const KXmlGuiWindow*
///
QSize* k_xmlguiwindow_icon_size(const void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setIconSize)
///
/// @param self KXmlGuiWindow*
/// @param iconSize QSize*
///
void k_xmlguiwindow_set_icon_size(void* self, const void* iconSize);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyle)
///
/// @param self const KXmlGuiWindow*
///
/// @return enum Qt__ToolButtonStyle
///
int32_t k_xmlguiwindow_tool_button_style(const void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setToolButtonStyle)
///
/// @param self KXmlGuiWindow*
/// @param toolButtonStyle enum Qt__ToolButtonStyle
///
void k_xmlguiwindow_set_tool_button_style(void* self, int32_t toolButtonStyle);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isAnimated)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_animated(const void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isDockNestingEnabled)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_dock_nesting_enabled(const void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#documentMode)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_document_mode(const void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setDocumentMode)
///
/// @param self KXmlGuiWindow*
/// @param enabled bool
///
void k_xmlguiwindow_set_document_mode(void* self, bool enabled);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabShape)
///
/// @param self const KXmlGuiWindow*
///
/// @return enum QTabWidget__TabShape
///
int32_t k_xmlguiwindow_tab_shape(const void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setTabShape)
///
/// @param self KXmlGuiWindow*
/// @param tabShape enum QTabWidget__TabShape
///
void k_xmlguiwindow_set_tab_shape(void* self, int32_t tabShape);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabPosition)
///
/// @param self const KXmlGuiWindow*
/// @param area enum Qt__DockWidgetArea
///
/// @return enum QTabWidget__TabPosition
///
int32_t k_xmlguiwindow_tab_position(const void* self, int32_t area);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setTabPosition)
///
/// @param self KXmlGuiWindow*
/// @param areas flag of enum Qt__DockWidgetArea
/// @param tabPosition enum QTabWidget__TabPosition
///
void k_xmlguiwindow_set_tab_position(void* self, int32_t areas, int32_t tabPosition);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setDockOptions)
///
/// @param self KXmlGuiWindow*
/// @param options flag of enum QMainWindow__DockOption
///
void k_xmlguiwindow_set_dock_options(void* self, int32_t options);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#dockOptions)
///
/// @param self const KXmlGuiWindow*
///
/// @return flag of enum QMainWindow__DockOption
///
int32_t k_xmlguiwindow_dock_options(const void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#isSeparator)
///
/// @param self const KXmlGuiWindow*
/// @param pos QPoint*
///
bool k_xmlguiwindow_is_separator(const void* self, const void* pos);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#menuBar)
///
/// @param self const KXmlGuiWindow*
///
QMenuBar* k_xmlguiwindow_menu_bar(const void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setMenuBar)
///
/// @param self KXmlGuiWindow*
/// @param menubar QMenuBar*
///
void k_xmlguiwindow_set_menu_bar(void* self, void* menubar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#menuWidget)
///
/// @param self const KXmlGuiWindow*
///
QWidget* k_xmlguiwindow_menu_widget(const void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setMenuWidget)
///
/// @param self KXmlGuiWindow*
/// @param menubar QWidget*
///
void k_xmlguiwindow_set_menu_widget(void* self, void* menubar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#statusBar)
///
/// @param self const KXmlGuiWindow*
///
QStatusBar* k_xmlguiwindow_status_bar(const void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setStatusBar)
///
/// @param self KXmlGuiWindow*
/// @param statusbar QStatusBar*
///
void k_xmlguiwindow_set_status_bar(void* self, void* statusbar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#centralWidget)
///
/// @param self const KXmlGuiWindow*
///
QWidget* k_xmlguiwindow_central_widget(const void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setCentralWidget)
///
/// @param self KXmlGuiWindow*
/// @param widget QWidget*
///
void k_xmlguiwindow_set_central_widget(void* self, void* widget);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#takeCentralWidget)
///
/// @param self KXmlGuiWindow*
///
QWidget* k_xmlguiwindow_take_central_widget(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setCorner)
///
/// @param self KXmlGuiWindow*
/// @param corner enum Qt__Corner
/// @param area enum Qt__DockWidgetArea
///
void k_xmlguiwindow_set_corner(void* self, int32_t corner, int32_t area);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#corner)
///
/// @param self const KXmlGuiWindow*
/// @param corner enum Qt__Corner
///
/// @return enum Qt__DockWidgetArea
///
int32_t k_xmlguiwindow_corner(const void* self, int32_t corner);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_add_tool_bar_break(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBarBreak)
///
/// @param self KXmlGuiWindow*
/// @param before QToolBar*
///
void k_xmlguiwindow_insert_tool_bar_break(void* self, void* before);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// @param self KXmlGuiWindow*
/// @param area enum Qt__ToolBarArea
/// @param toolbar QToolBar*
///
void k_xmlguiwindow_add_tool_bar(void* self, int32_t area, void* toolbar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// @param self KXmlGuiWindow*
/// @param toolbar QToolBar*
///
void k_xmlguiwindow_add_tool_bar2(void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// @param self KXmlGuiWindow*
/// @param title const char*
///
QToolBar* k_xmlguiwindow_add_tool_bar3(void* self, const char* title);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBar)
///
/// @param self KXmlGuiWindow*
/// @param before QToolBar*
/// @param toolbar QToolBar*
///
void k_xmlguiwindow_insert_tool_bar(void* self, void* before, void* toolbar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBar)
///
/// @param self KXmlGuiWindow*
/// @param toolbar QToolBar*
///
void k_xmlguiwindow_remove_tool_bar(void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBarBreak)
///
/// @param self KXmlGuiWindow*
/// @param before QToolBar*
///
void k_xmlguiwindow_remove_tool_bar_break(void* self, void* before);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#unifiedTitleAndToolBarOnMac)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_unified_title_and_tool_bar_on_mac(const void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolBarArea)
///
/// @param self const KXmlGuiWindow*
/// @param toolbar QToolBar*
///
/// @return enum Qt__ToolBarArea
///
int32_t k_xmlguiwindow_tool_bar_area(const void* self, const void* toolbar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolBarBreak)
///
/// @param self const KXmlGuiWindow*
/// @param toolbar QToolBar*
///
bool k_xmlguiwindow_tool_bar_break(const void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
///
/// @param self KXmlGuiWindow*
/// @param area enum Qt__DockWidgetArea
/// @param dockwidget QDockWidget*
///
void k_xmlguiwindow_add_dock_widget(void* self, int32_t area, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
///
/// @param self KXmlGuiWindow*
/// @param area enum Qt__DockWidgetArea
/// @param dockwidget QDockWidget*
/// @param orientation enum Qt__Orientation
///
void k_xmlguiwindow_add_dock_widget2(void* self, int32_t area, void* dockwidget, int32_t orientation);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#splitDockWidget)
///
/// @param self KXmlGuiWindow*
/// @param after QDockWidget*
/// @param dockwidget QDockWidget*
/// @param orientation enum Qt__Orientation
///
void k_xmlguiwindow_split_dock_widget(void* self, void* after, void* dockwidget, int32_t orientation);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabifyDockWidget)
///
/// @param self KXmlGuiWindow*
/// @param first QDockWidget*
/// @param second QDockWidget*
///
void k_xmlguiwindow_tabify_dock_widget(void* self, void* first, void* second);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgets)
///
/// @param self const KXmlGuiWindow*
/// @param dockwidget QDockWidget*
///
/// @return libqt_list of QDockWidget*
///
libqt_list k_xmlguiwindow_tabified_dock_widgets(const void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#removeDockWidget)
///
/// @param self KXmlGuiWindow*
/// @param dockwidget QDockWidget*
///
void k_xmlguiwindow_remove_dock_widget(void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#restoreDockWidget)
///
/// @param self KXmlGuiWindow*
/// @param dockwidget QDockWidget*
///
bool k_xmlguiwindow_restore_dock_widget(void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#dockWidgetArea)
///
/// @param self const KXmlGuiWindow*
/// @param dockwidget QDockWidget*
///
/// @return enum Qt__DockWidgetArea
///
int32_t k_xmlguiwindow_dock_widget_area(const void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#resizeDocks)
///
/// @param self KXmlGuiWindow*
/// @param docks libqt_list of QDockWidget*
/// @param sizes libqt_list of int
/// @param orientation enum Qt__Orientation
///
void k_xmlguiwindow_resize_docks(void* self, libqt_list docks, libqt_list sizes, int32_t orientation);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_save_state(const void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
///
/// @param self KXmlGuiWindow*
/// @param state const char*
///
bool k_xmlguiwindow_restore_state(void* self, const char* state);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setAnimated)
///
/// @param self KXmlGuiWindow*
/// @param enabled bool
///
void k_xmlguiwindow_set_animated(void* self, bool enabled);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setDockNestingEnabled)
///
/// @param self KXmlGuiWindow*
/// @param enabled bool
///
void k_xmlguiwindow_set_dock_nesting_enabled(void* self, bool enabled);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#setUnifiedTitleAndToolBarOnMac)
///
/// @param self KXmlGuiWindow*
/// @param set bool
///
void k_xmlguiwindow_set_unified_title_and_tool_bar_on_mac(void* self, bool set);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
///
/// @param self KXmlGuiWindow*
/// @param iconSize QSize*
///
void k_xmlguiwindow_icon_size_changed(void* self, const void* iconSize);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QSize* iconSize)
///
void k_xmlguiwindow_on_icon_size_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
///
/// @param self KXmlGuiWindow*
/// @param toolButtonStyle enum Qt__ToolButtonStyle
///
void k_xmlguiwindow_tool_button_style_changed(void* self, int32_t toolButtonStyle);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, enum Qt__ToolButtonStyle toolButtonStyle)
///
void k_xmlguiwindow_on_tool_button_style_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
///
/// @param self KXmlGuiWindow*
/// @param dockWidget QDockWidget*
///
void k_xmlguiwindow_tabified_dock_widget_activated(void* self, void* dockWidget);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QDockWidget* dockWidget)
///
void k_xmlguiwindow_on_tabified_dock_widget_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
///
/// @param self KXmlGuiWindow*
/// @param area enum Qt__ToolBarArea
///
void k_xmlguiwindow_add_tool_bar_break1(void* self, int32_t area);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
/// @param version int
///
const char* k_xmlguiwindow_save_state1(const void* self, int version);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
///
/// @param self KXmlGuiWindow*
/// @param state const char*
/// @param version int
///
bool k_xmlguiwindow_restore_state2(void* self, const char* state, int version);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const KXmlGuiWindow*
///
QPaintDevice* k_xmlguiwindow_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a KXmlGuiWindow object
///
/// @param _qpaintdevice QPaintDevice*
///
KXmlGuiWindow* k_xmlguiwindow_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const KXmlGuiWindow*
///
uintptr_t k_xmlguiwindow_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const KXmlGuiWindow*
///
uintptr_t k_xmlguiwindow_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const KXmlGuiWindow*
///
uintptr_t k_xmlguiwindow_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const KXmlGuiWindow*
///
QStyle* k_xmlguiwindow_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KXmlGuiWindow*
/// @param style QStyle*
///
void k_xmlguiwindow_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const KXmlGuiWindow*
///
/// @return enum Qt__WindowModality
///
int32_t k_xmlguiwindow_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KXmlGuiWindow*
/// @param windowModality enum Qt__WindowModality
///
void k_xmlguiwindow_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const KXmlGuiWindow*
/// @param param1 QWidget*
///
bool k_xmlguiwindow_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KXmlGuiWindow*
/// @param enabled bool
///
void k_xmlguiwindow_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KXmlGuiWindow*
/// @param disabled bool
///
void k_xmlguiwindow_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KXmlGuiWindow*
/// @param windowModified bool
///
void k_xmlguiwindow_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const KXmlGuiWindow*
///
QRect* k_xmlguiwindow_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const KXmlGuiWindow*
///
const QRect* k_xmlguiwindow_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const KXmlGuiWindow*
///
QRect* k_xmlguiwindow_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const KXmlGuiWindow*
///
QPoint* k_xmlguiwindow_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const KXmlGuiWindow*
///
QSize* k_xmlguiwindow_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const KXmlGuiWindow*
///
QSize* k_xmlguiwindow_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const KXmlGuiWindow*
///
QRect* k_xmlguiwindow_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const KXmlGuiWindow*
///
QRect* k_xmlguiwindow_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const KXmlGuiWindow*
///
QRegion* k_xmlguiwindow_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const KXmlGuiWindow*
///
QSize* k_xmlguiwindow_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const KXmlGuiWindow*
///
QSize* k_xmlguiwindow_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KXmlGuiWindow*
/// @param minimumSize QSize*
///
void k_xmlguiwindow_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KXmlGuiWindow*
/// @param minw int
/// @param minh int
///
void k_xmlguiwindow_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KXmlGuiWindow*
/// @param maximumSize QSize*
///
void k_xmlguiwindow_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KXmlGuiWindow*
/// @param maxw int
/// @param maxh int
///
void k_xmlguiwindow_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KXmlGuiWindow*
/// @param minw int
///
void k_xmlguiwindow_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KXmlGuiWindow*
/// @param minh int
///
void k_xmlguiwindow_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KXmlGuiWindow*
/// @param maxw int
///
void k_xmlguiwindow_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KXmlGuiWindow*
/// @param maxh int
///
void k_xmlguiwindow_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const KXmlGuiWindow*
///
QSize* k_xmlguiwindow_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KXmlGuiWindow*
/// @param sizeIncrement QSize*
///
void k_xmlguiwindow_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KXmlGuiWindow*
/// @param w int
/// @param h int
///
void k_xmlguiwindow_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const KXmlGuiWindow*
///
QSize* k_xmlguiwindow_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KXmlGuiWindow*
/// @param baseSize QSize*
///
void k_xmlguiwindow_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KXmlGuiWindow*
/// @param basew int
/// @param baseh int
///
void k_xmlguiwindow_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KXmlGuiWindow*
/// @param fixedSize QSize*
///
void k_xmlguiwindow_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KXmlGuiWindow*
/// @param w int
/// @param h int
///
void k_xmlguiwindow_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KXmlGuiWindow*
/// @param w int
///
void k_xmlguiwindow_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KXmlGuiWindow*
/// @param h int
///
void k_xmlguiwindow_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KXmlGuiWindow*
/// @param param1 QPointF*
///
QPointF* k_xmlguiwindow_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KXmlGuiWindow*
/// @param param1 QPoint*
///
QPoint* k_xmlguiwindow_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KXmlGuiWindow*
/// @param param1 QPointF*
///
QPointF* k_xmlguiwindow_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KXmlGuiWindow*
/// @param param1 QPoint*
///
QPoint* k_xmlguiwindow_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KXmlGuiWindow*
/// @param param1 QPointF*
///
QPointF* k_xmlguiwindow_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KXmlGuiWindow*
/// @param param1 QPoint*
///
QPoint* k_xmlguiwindow_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KXmlGuiWindow*
/// @param param1 QPointF*
///
QPointF* k_xmlguiwindow_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KXmlGuiWindow*
/// @param param1 QPoint*
///
QPoint* k_xmlguiwindow_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KXmlGuiWindow*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_xmlguiwindow_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KXmlGuiWindow*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_xmlguiwindow_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KXmlGuiWindow*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_xmlguiwindow_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KXmlGuiWindow*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_xmlguiwindow_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const KXmlGuiWindow*
///
QWidget* k_xmlguiwindow_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const KXmlGuiWindow*
///
QWidget* k_xmlguiwindow_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const KXmlGuiWindow*
///
QWidget* k_xmlguiwindow_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const KXmlGuiWindow*
///
const QPalette* k_xmlguiwindow_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KXmlGuiWindow*
/// @param palette QPalette*
///
void k_xmlguiwindow_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KXmlGuiWindow*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_xmlguiwindow_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const KXmlGuiWindow*
///
/// @return enum QPalette__ColorRole
///
int32_t k_xmlguiwindow_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KXmlGuiWindow*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_xmlguiwindow_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const KXmlGuiWindow*
///
/// @return enum QPalette__ColorRole
///
int32_t k_xmlguiwindow_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const KXmlGuiWindow*
///
const QFont* k_xmlguiwindow_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KXmlGuiWindow*
/// @param font QFont*
///
void k_xmlguiwindow_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const KXmlGuiWindow*
///
QFontMetrics* k_xmlguiwindow_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const KXmlGuiWindow*
///
QFontInfo* k_xmlguiwindow_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const KXmlGuiWindow*
///
QCursor* k_xmlguiwindow_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KXmlGuiWindow*
/// @param cursor QCursor*
///
void k_xmlguiwindow_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KXmlGuiWindow*
/// @param enable bool
///
void k_xmlguiwindow_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KXmlGuiWindow*
/// @param enable bool
///
void k_xmlguiwindow_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KXmlGuiWindow*
/// @param mask QBitmap*
///
void k_xmlguiwindow_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KXmlGuiWindow*
/// @param mask QRegion*
///
void k_xmlguiwindow_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const KXmlGuiWindow*
///
QRegion* k_xmlguiwindow_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param target QPaintDevice*
///
void k_xmlguiwindow_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param painter QPainter*
///
void k_xmlguiwindow_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KXmlGuiWindow*
///
QPixmap* k_xmlguiwindow_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const KXmlGuiWindow*
///
QGraphicsEffect* k_xmlguiwindow_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KXmlGuiWindow*
/// @param effect QGraphicsEffect*
///
void k_xmlguiwindow_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KXmlGuiWindow*
/// @param type enum Qt__GestureType
///
void k_xmlguiwindow_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KXmlGuiWindow*
/// @param type enum Qt__GestureType
///
void k_xmlguiwindow_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KXmlGuiWindow*
/// @param windowTitle const char*
///
void k_xmlguiwindow_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KXmlGuiWindow*
/// @param styleSheet const char*
///
void k_xmlguiwindow_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KXmlGuiWindow*
/// @param icon QIcon*
///
void k_xmlguiwindow_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const KXmlGuiWindow*
///
QIcon* k_xmlguiwindow_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KXmlGuiWindow*
/// @param windowIconText const char*
///
void k_xmlguiwindow_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KXmlGuiWindow*
/// @param windowRole const char*
///
void k_xmlguiwindow_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KXmlGuiWindow*
/// @param filePath const char*
///
void k_xmlguiwindow_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KXmlGuiWindow*
/// @param level double
///
void k_xmlguiwindow_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const KXmlGuiWindow*
///
double k_xmlguiwindow_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KXmlGuiWindow*
/// @param toolTip const char*
///
void k_xmlguiwindow_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KXmlGuiWindow*
/// @param msec int
///
void k_xmlguiwindow_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KXmlGuiWindow*
/// @param statusTip const char*
///
void k_xmlguiwindow_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KXmlGuiWindow*
/// @param whatsThis const char*
///
void k_xmlguiwindow_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
///
void k_xmlguiwindow_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KXmlGuiWindow*
/// @param description const char*
///
void k_xmlguiwindow_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KXmlGuiWindow*
/// @param direction enum Qt__LayoutDirection
///
void k_xmlguiwindow_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const KXmlGuiWindow*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_xmlguiwindow_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KXmlGuiWindow*
/// @param locale QLocale*
///
void k_xmlguiwindow_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const KXmlGuiWindow*
///
QLocale* k_xmlguiwindow_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KXmlGuiWindow*
/// @param reason enum Qt__FocusReason
///
void k_xmlguiwindow_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const KXmlGuiWindow*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_xmlguiwindow_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KXmlGuiWindow*
/// @param policy enum Qt__FocusPolicy
///
void k_xmlguiwindow_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_xmlguiwindow_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KXmlGuiWindow*
/// @param focusProxy QWidget*
///
void k_xmlguiwindow_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const KXmlGuiWindow*
///
QWidget* k_xmlguiwindow_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const KXmlGuiWindow*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_xmlguiwindow_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KXmlGuiWindow*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_xmlguiwindow_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KXmlGuiWindow*
/// @param param1 QCursor*
///
void k_xmlguiwindow_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KXmlGuiWindow*
/// @param key QKeySequence*
///
int32_t k_xmlguiwindow_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KXmlGuiWindow*
/// @param id int
///
void k_xmlguiwindow_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KXmlGuiWindow*
/// @param id int
///
void k_xmlguiwindow_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KXmlGuiWindow*
/// @param id int
///
void k_xmlguiwindow_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_xmlguiwindow_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_xmlguiwindow_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KXmlGuiWindow*
/// @param enable bool
///
void k_xmlguiwindow_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const KXmlGuiWindow*
///
QGraphicsProxyWidget* k_xmlguiwindow_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KXmlGuiWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_xmlguiwindow_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KXmlGuiWindow*
/// @param param1 QRect*
///
void k_xmlguiwindow_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KXmlGuiWindow*
/// @param param1 QRegion*
///
void k_xmlguiwindow_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KXmlGuiWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_xmlguiwindow_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KXmlGuiWindow*
/// @param param1 QRect*
///
void k_xmlguiwindow_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KXmlGuiWindow*
/// @param param1 QRegion*
///
void k_xmlguiwindow_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KXmlGuiWindow*
/// @param hidden bool
///
void k_xmlguiwindow_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KXmlGuiWindow*
///
bool k_xmlguiwindow_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KXmlGuiWindow*
/// @param param1 QWidget*
///
void k_xmlguiwindow_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KXmlGuiWindow*
/// @param x int
/// @param y int
///
void k_xmlguiwindow_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KXmlGuiWindow*
/// @param param1 QPoint*
///
void k_xmlguiwindow_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KXmlGuiWindow*
/// @param w int
/// @param h int
///
void k_xmlguiwindow_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KXmlGuiWindow*
/// @param param1 QSize*
///
void k_xmlguiwindow_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KXmlGuiWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_xmlguiwindow_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KXmlGuiWindow*
/// @param geometry QRect*
///
void k_xmlguiwindow_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KXmlGuiWindow*
/// @param geometry const char*
///
bool k_xmlguiwindow_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const KXmlGuiWindow*
/// @param param1 QWidget*
///
bool k_xmlguiwindow_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const KXmlGuiWindow*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_xmlguiwindow_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KXmlGuiWindow*
/// @param state flag of enum Qt__WindowState
///
void k_xmlguiwindow_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KXmlGuiWindow*
/// @param state flag of enum Qt__WindowState
///
void k_xmlguiwindow_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const KXmlGuiWindow*
///
QSizePolicy* k_xmlguiwindow_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KXmlGuiWindow*
/// @param sizePolicy QSizePolicy*
///
void k_xmlguiwindow_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KXmlGuiWindow*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_xmlguiwindow_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const KXmlGuiWindow*
///
QRegion* k_xmlguiwindow_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KXmlGuiWindow*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_xmlguiwindow_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KXmlGuiWindow*
/// @param margins QMargins*
///
void k_xmlguiwindow_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const KXmlGuiWindow*
///
QMargins* k_xmlguiwindow_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const KXmlGuiWindow*
///
QRect* k_xmlguiwindow_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const KXmlGuiWindow*
///
QLayout* k_xmlguiwindow_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KXmlGuiWindow*
/// @param layout QLayout*
///
void k_xmlguiwindow_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KXmlGuiWindow*
/// @param parent QWidget*
///
void k_xmlguiwindow_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KXmlGuiWindow*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_xmlguiwindow_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KXmlGuiWindow*
/// @param dx int
/// @param dy int
///
void k_xmlguiwindow_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KXmlGuiWindow*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_xmlguiwindow_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const KXmlGuiWindow*
///
QWidget* k_xmlguiwindow_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const KXmlGuiWindow*
///
QWidget* k_xmlguiwindow_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const KXmlGuiWindow*
///
QWidget* k_xmlguiwindow_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KXmlGuiWindow*
/// @param on bool
///
void k_xmlguiwindow_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KXmlGuiWindow*
/// @param action QAction*
///
void k_xmlguiwindow_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KXmlGuiWindow*
/// @param actions libqt_list of QAction*
///
void k_xmlguiwindow_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KXmlGuiWindow*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_xmlguiwindow_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KXmlGuiWindow*
/// @param before QAction*
/// @param action QAction*
///
void k_xmlguiwindow_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KXmlGuiWindow*
/// @param action QAction*
///
void k_xmlguiwindow_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const KXmlGuiWindow*
///
/// @return libqt_list of QAction*
///
libqt_list k_xmlguiwindow_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KXmlGuiWindow*
/// @param text const char*
///
QAction* k_xmlguiwindow_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KXmlGuiWindow*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_xmlguiwindow_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KXmlGuiWindow*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_xmlguiwindow_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KXmlGuiWindow*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_xmlguiwindow_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const KXmlGuiWindow*
///
QWidget* k_xmlguiwindow_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KXmlGuiWindow*
/// @param type flag of enum Qt__WindowType
///
void k_xmlguiwindow_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const KXmlGuiWindow*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_xmlguiwindow_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KXmlGuiWindow*
/// @param param1 enum Qt__WindowType
///
void k_xmlguiwindow_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KXmlGuiWindow*
/// @param type flag of enum Qt__WindowType
///
void k_xmlguiwindow_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const KXmlGuiWindow*
///
/// @return enum Qt__WindowType
///
int32_t k_xmlguiwindow_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_xmlguiwindow_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KXmlGuiWindow*
/// @param x int
/// @param y int
///
QWidget* k_xmlguiwindow_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KXmlGuiWindow*
/// @param p QPoint*
///
QWidget* k_xmlguiwindow_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KXmlGuiWindow*
/// @param p QPointF*
///
QWidget* k_xmlguiwindow_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KXmlGuiWindow*
/// @param param1 enum Qt__WidgetAttribute
///
void k_xmlguiwindow_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const KXmlGuiWindow*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_xmlguiwindow_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const KXmlGuiWindow*
///
void k_xmlguiwindow_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const KXmlGuiWindow*
/// @param child QWidget*
///
bool k_xmlguiwindow_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KXmlGuiWindow*
/// @param enabled bool
///
void k_xmlguiwindow_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const KXmlGuiWindow*
///
QBackingStore* k_xmlguiwindow_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const KXmlGuiWindow*
///
QWindow* k_xmlguiwindow_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const KXmlGuiWindow*
///
QScreen* k_xmlguiwindow_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KXmlGuiWindow*
/// @param screen QScreen*
///
void k_xmlguiwindow_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_xmlguiwindow_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KXmlGuiWindow*
/// @param title const char*
///
void k_xmlguiwindow_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* title)
///
void k_xmlguiwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KXmlGuiWindow*
/// @param icon QIcon*
///
void k_xmlguiwindow_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QIcon* icon)
///
void k_xmlguiwindow_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KXmlGuiWindow*
/// @param iconText const char*
///
void k_xmlguiwindow_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* iconText)
///
void k_xmlguiwindow_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KXmlGuiWindow*
/// @param pos QPoint*
///
void k_xmlguiwindow_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QPoint* pos)
///
void k_xmlguiwindow_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const KXmlGuiWindow*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_xmlguiwindow_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KXmlGuiWindow*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_xmlguiwindow_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_xmlguiwindow_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_xmlguiwindow_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_xmlguiwindow_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_xmlguiwindow_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_xmlguiwindow_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KXmlGuiWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_xmlguiwindow_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KXmlGuiWindow*
/// @param rectangle QRect*
///
QPixmap* k_xmlguiwindow_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KXmlGuiWindow*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_xmlguiwindow_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KXmlGuiWindow*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_xmlguiwindow_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KXmlGuiWindow*
/// @param id int
/// @param enable bool
///
void k_xmlguiwindow_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KXmlGuiWindow*
/// @param id int
/// @param enable bool
///
void k_xmlguiwindow_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KXmlGuiWindow*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_xmlguiwindow_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KXmlGuiWindow*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_xmlguiwindow_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_xmlguiwindow_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_xmlguiwindow_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
///
void k_xmlguiwindow_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KXmlGuiWindow*
/// @param b bool
///
bool k_xmlguiwindow_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KXmlGuiWindow*
///
QThread* k_xmlguiwindow_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KXmlGuiWindow*
/// @param thread QThread*
///
bool k_xmlguiwindow_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KXmlGuiWindow*
/// @param interval int
///
int32_t k_xmlguiwindow_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KXmlGuiWindow*
/// @param time int64_t of nanoseconds
///
int32_t k_xmlguiwindow_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KXmlGuiWindow*
/// @param id int
///
void k_xmlguiwindow_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KXmlGuiWindow*
/// @param id enum Qt__TimerId
///
void k_xmlguiwindow_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KXmlGuiWindow*
///
/// @return libqt_list of QObject*
///
libqt_list k_xmlguiwindow_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KXmlGuiWindow*
/// @param filterObj QObject*
///
void k_xmlguiwindow_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KXmlGuiWindow*
/// @param obj QObject*
///
void k_xmlguiwindow_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_xmlguiwindow_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_xmlguiwindow_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KXmlGuiWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_xmlguiwindow_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_xmlguiwindow_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_xmlguiwindow_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KXmlGuiWindow*
/// @param receiver QObject*
///
bool k_xmlguiwindow_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_xmlguiwindow_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KXmlGuiWindow*
///
void k_xmlguiwindow_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KXmlGuiWindow*
///
void k_xmlguiwindow_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
/// @param value QVariant*
///
bool k_xmlguiwindow_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KXmlGuiWindow*
/// @param name const char*
///
QVariant* k_xmlguiwindow_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KXmlGuiWindow*
///
const char** k_xmlguiwindow_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KXmlGuiWindow*
///
QBindingStorage* k_xmlguiwindow_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KXmlGuiWindow*
///
const QBindingStorage* k_xmlguiwindow_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KXmlGuiWindow*
///
QObject* k_xmlguiwindow_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KXmlGuiWindow*
/// @param classname const char*
///
bool k_xmlguiwindow_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KXmlGuiWindow*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_xmlguiwindow_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KXmlGuiWindow*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_xmlguiwindow_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_xmlguiwindow_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_xmlguiwindow_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KXmlGuiWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_xmlguiwindow_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KXmlGuiWindow*
/// @param signal const char*
///
bool k_xmlguiwindow_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KXmlGuiWindow*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_xmlguiwindow_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KXmlGuiWindow*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_xmlguiwindow_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KXmlGuiWindow*
/// @param receiver QObject*
/// @param member const char*
///
bool k_xmlguiwindow_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXmlGuiWindow*
/// @param param1 QObject*
///
void k_xmlguiwindow_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QObject* param1)
///
void k_xmlguiwindow_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const KXmlGuiWindow*
///
double k_xmlguiwindow_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const KXmlGuiWindow*
///
double k_xmlguiwindow_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_xmlguiwindow_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_xmlguiwindow_encode_metric_f(int32_t metric, double value);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#builderClient)
///
/// @param self const KXmlGuiWindow*
///
KXMLGUIClient* k_xmlguiwindow_builder_client(const void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#setBuilderClient)
///
/// @param self KXmlGuiWindow*
/// @param client KXMLGUIClient*
///
void k_xmlguiwindow_set_builder_client(void* self, void* client);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#widget)
///
/// @param self KXmlGuiWindow*
///
QWidget* k_xmlguiwindow_widget(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// @param self const KXmlGuiWindow*
/// @param name const char*
///
QAction* k_xmlguiwindow_action(const void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
///
/// @param self KXmlGuiWindow*
/// @param doc QDomDocument*
///
void k_xmlguiwindow_set_x_m_l_g_u_i_build_document(void* self, const void* doc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
///
/// @param self const KXmlGuiWindow*
///
QDomDocument* k_xmlguiwindow_xmlgui_build_document(const void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
///
/// @param self KXmlGuiWindow*
/// @param factory KXMLGUIFactory*
///
void k_xmlguiwindow_set_factory(void* self, void* factory);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
///
/// @param self const KXmlGuiWindow*
///
KXMLGUIFactory* k_xmlguiwindow_factory(const void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
///
/// @param self const KXmlGuiWindow*
///
KXMLGUIClient* k_xmlguiwindow_parent_client(const void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
///
/// @param self KXmlGuiWindow*
/// @param child KXMLGUIClient*
///
void k_xmlguiwindow_insert_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
///
/// @param self KXmlGuiWindow*
/// @param child KXMLGUIClient*
///
void k_xmlguiwindow_remove_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
///
/// @param self KXmlGuiWindow*
///
/// @return libqt_list of KXMLGUIClient*
///
libqt_list k_xmlguiwindow_child_clients(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
///
/// @param self KXmlGuiWindow*
/// @param builder KXMLGUIBuilder*
///
void k_xmlguiwindow_set_client_builder(void* self, void* builder);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
///
/// @param self const KXmlGuiWindow*
///
KXMLGUIBuilder* k_xmlguiwindow_client_builder(const void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_reload_x_m_l(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
/// @param actionList libqt_list of QAction*
///
void k_xmlguiwindow_plug_action_list(void* self, const char* name, libqt_list actionList);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
///
/// @param self KXmlGuiWindow*
/// @param name const char*
///
void k_xmlguiwindow_unplug_action_list(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param files const char**
/// @param doc const char*
///
const char* k_xmlguiwindow_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
///
/// @param self KXmlGuiWindow*
/// @param state const char*
/// @param action const char*
///
void k_xmlguiwindow_add_state_action_enabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
///
/// @param self KXmlGuiWindow*
/// @param state const char*
/// @param action const char*
///
void k_xmlguiwindow_add_state_action_disabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
///
/// @param self KXmlGuiWindow*
/// @param state const char*
///
KXMLGUIClient__StateChange* k_xmlguiwindow_get_actions_to_change_for_state(void* self, const char* state);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
///
/// @param self KXmlGuiWindow*
/// @param param1 QWidget*
///
void k_xmlguiwindow_begin_x_m_l_plug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_end_x_m_l_plug(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
///
/// @param self KXmlGuiWindow*
/// @param param1 QWidget*
///
void k_xmlguiwindow_prepare_x_m_l_unplug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KXmlGuiWindow*
/// @param xmlfile const char*
/// @param localxmlfile const char*
///
void k_xmlguiwindow_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param xml const char*
///
const char* k_xmlguiwindow_find_version_number(const char* xml);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KXmlGuiWindow*
/// @param xmlfile const char*
/// @param localxmlfile const char*
/// @param merge bool
///
void k_xmlguiwindow_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param caption const char*
///
void k_xmlguiwindow_set_caption(void* self, const char* caption);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param caption const char*
///
void k_xmlguiwindow_super_set_caption(void* self, const char* caption);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* caption)
///
void k_xmlguiwindow_on_set_caption(void* self, void (*callback)(void*, const char*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setPlainCaption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param caption const char*
///
void k_xmlguiwindow_set_plain_caption(void* self, const char* caption);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setPlainCaption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param caption const char*
///
void k_xmlguiwindow_super_set_plain_caption(void* self, const char* caption);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#setPlainCaption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* caption)
///
void k_xmlguiwindow_on_set_plain_caption(void* self, void (*callback)(void*, const char*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param keyEvent QKeyEvent*
///
void k_xmlguiwindow_key_press_event(void* self, void* keyEvent);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param keyEvent QKeyEvent*
///
void k_xmlguiwindow_super_key_press_event(void* self, void* keyEvent);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QKeyEvent* keyEvent)
///
void k_xmlguiwindow_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 QCloseEvent*
///
void k_xmlguiwindow_close_event(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 QCloseEvent*
///
void k_xmlguiwindow_super_close_event(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QCloseEvent* param1)
///
void k_xmlguiwindow_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#queryClose)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
///
bool k_xmlguiwindow_query_close(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#queryClose)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
///
bool k_xmlguiwindow_super_query_close(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#queryClose)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_query_close(void* self, bool (*callback)(void*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfigGroup*
///
void k_xmlguiwindow_save_properties(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveProperties)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfigGroup*
///
void k_xmlguiwindow_super_save_properties(void* self, void* param1);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveProperties)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, KConfigGroup* param1)
///
void k_xmlguiwindow_on_save_properties(void* self, void (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfigGroup*
///
void k_xmlguiwindow_read_properties(void* self, const void* param1);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readProperties)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfigGroup*
///
void k_xmlguiwindow_super_read_properties(void* self, const void* param1);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readProperties)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, KConfigGroup* param1)
///
void k_xmlguiwindow_on_read_properties(void* self, void (*callback)(void*, const void*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param sessionConfig KConfig*
///
void k_xmlguiwindow_save_global_properties(void* self, void* sessionConfig);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param sessionConfig KConfig*
///
void k_xmlguiwindow_super_save_global_properties(void* self, void* sessionConfig);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, KConfig* sessionConfig)
///
void k_xmlguiwindow_on_save_global_properties(void* self, void (*callback)(void*, void*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readGlobalProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param sessionConfig KConfig*
///
void k_xmlguiwindow_read_global_properties(void* self, void* sessionConfig);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readGlobalProperties)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param sessionConfig KConfig*
///
void k_xmlguiwindow_super_read_global_properties(void* self, void* sessionConfig);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readGlobalProperties)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, KConfig* sessionConfig)
///
void k_xmlguiwindow_on_read_global_properties(void* self, void (*callback)(void*, void*));

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
///
QMenu* k_xmlguiwindow_create_popup_menu(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
///
QMenu* k_xmlguiwindow_super_create_popup_menu(void* self);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QMenu* func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_create_popup_menu(void* self, QMenu* (*callback)(void*));

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QContextMenuEvent*
///
void k_xmlguiwindow_context_menu_event(void* self, void* event);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QContextMenuEvent*
///
void k_xmlguiwindow_super_context_menu_event(void* self, void* event);

/// Inherited from QMainWindow
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QContextMenuEvent* event)
///
void k_xmlguiwindow_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback int32_t func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param visible bool
///
void k_xmlguiwindow_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param visible bool
///
void k_xmlguiwindow_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, bool visible)
///
void k_xmlguiwindow_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
QSize* k_xmlguiwindow_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
QSize* k_xmlguiwindow_super_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QSize* func(KXmlGuiWindow* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_xmlguiwindow_on_size_hint(void* self, QSize* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
QSize* k_xmlguiwindow_minimum_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
QSize* k_xmlguiwindow_super_minimum_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QSize* func(KXmlGuiWindow* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_xmlguiwindow_on_minimum_size_hint(void* self, QSize* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param param1 int
///
int32_t k_xmlguiwindow_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param param1 int
///
int32_t k_xmlguiwindow_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback int32_t func(KXmlGuiWindow* self, int param1)
///
void k_xmlguiwindow_on_height_for_width(void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_has_height_for_width(void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
QPaintEngine* k_xmlguiwindow_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
QPaintEngine* k_xmlguiwindow_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QPaintEngine* func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
///
void k_xmlguiwindow_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
///
void k_xmlguiwindow_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QMouseEvent* event)
///
void k_xmlguiwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
///
void k_xmlguiwindow_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
///
void k_xmlguiwindow_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QMouseEvent* event)
///
void k_xmlguiwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
///
void k_xmlguiwindow_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
///
void k_xmlguiwindow_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QMouseEvent* event)
///
void k_xmlguiwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
///
void k_xmlguiwindow_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMouseEvent*
///
void k_xmlguiwindow_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QMouseEvent* event)
///
void k_xmlguiwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QWheelEvent*
///
void k_xmlguiwindow_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QWheelEvent*
///
void k_xmlguiwindow_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QWheelEvent* event)
///
void k_xmlguiwindow_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QKeyEvent*
///
void k_xmlguiwindow_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QKeyEvent*
///
void k_xmlguiwindow_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QKeyEvent* event)
///
void k_xmlguiwindow_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QFocusEvent*
///
void k_xmlguiwindow_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QFocusEvent*
///
void k_xmlguiwindow_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QFocusEvent* event)
///
void k_xmlguiwindow_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QFocusEvent*
///
void k_xmlguiwindow_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QFocusEvent*
///
void k_xmlguiwindow_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QFocusEvent* event)
///
void k_xmlguiwindow_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QEnterEvent*
///
void k_xmlguiwindow_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QEnterEvent*
///
void k_xmlguiwindow_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QEnterEvent* event)
///
void k_xmlguiwindow_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QEvent*
///
void k_xmlguiwindow_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QEvent*
///
void k_xmlguiwindow_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QEvent* event)
///
void k_xmlguiwindow_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QPaintEvent*
///
void k_xmlguiwindow_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QPaintEvent*
///
void k_xmlguiwindow_super_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QPaintEvent* event)
///
void k_xmlguiwindow_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMoveEvent*
///
void k_xmlguiwindow_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QMoveEvent*
///
void k_xmlguiwindow_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QMoveEvent* event)
///
void k_xmlguiwindow_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QResizeEvent*
///
void k_xmlguiwindow_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QResizeEvent*
///
void k_xmlguiwindow_super_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QResizeEvent* event)
///
void k_xmlguiwindow_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QTabletEvent*
///
void k_xmlguiwindow_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QTabletEvent*
///
void k_xmlguiwindow_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QTabletEvent* event)
///
void k_xmlguiwindow_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QActionEvent*
///
void k_xmlguiwindow_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QActionEvent*
///
void k_xmlguiwindow_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QActionEvent* event)
///
void k_xmlguiwindow_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDragEnterEvent*
///
void k_xmlguiwindow_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDragEnterEvent*
///
void k_xmlguiwindow_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QDragEnterEvent* event)
///
void k_xmlguiwindow_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDragMoveEvent*
///
void k_xmlguiwindow_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDragMoveEvent*
///
void k_xmlguiwindow_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QDragMoveEvent* event)
///
void k_xmlguiwindow_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDragLeaveEvent*
///
void k_xmlguiwindow_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDragLeaveEvent*
///
void k_xmlguiwindow_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QDragLeaveEvent* event)
///
void k_xmlguiwindow_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDropEvent*
///
void k_xmlguiwindow_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QDropEvent*
///
void k_xmlguiwindow_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QDropEvent* event)
///
void k_xmlguiwindow_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QShowEvent*
///
void k_xmlguiwindow_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QShowEvent*
///
void k_xmlguiwindow_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QShowEvent* event)
///
void k_xmlguiwindow_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QHideEvent*
///
void k_xmlguiwindow_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QHideEvent*
///
void k_xmlguiwindow_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QHideEvent* event)
///
void k_xmlguiwindow_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_xmlguiwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_xmlguiwindow_super_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_xmlguiwindow_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 QEvent*
///
void k_xmlguiwindow_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 QEvent*
///
void k_xmlguiwindow_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QEvent* param1)
///
void k_xmlguiwindow_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_xmlguiwindow_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_xmlguiwindow_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback int32_t func(KXmlGuiWindow* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_xmlguiwindow_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param painter QPainter*
///
void k_xmlguiwindow_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param painter QPainter*
///
void k_xmlguiwindow_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QPainter* painter)
///
void k_xmlguiwindow_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param offset QPoint*
///
QPaintDevice* k_xmlguiwindow_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param offset QPoint*
///
QPaintDevice* k_xmlguiwindow_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QPaintDevice* func(KXmlGuiWindow* self, QPoint* offset)
///
void k_xmlguiwindow_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
QPainter* k_xmlguiwindow_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
QPainter* k_xmlguiwindow_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QPainter* func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 QInputMethodEvent*
///
void k_xmlguiwindow_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 QInputMethodEvent*
///
void k_xmlguiwindow_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QInputMethodEvent* param1)
///
void k_xmlguiwindow_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_xmlguiwindow_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_xmlguiwindow_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QVariant* func(KXmlGuiWindow* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_xmlguiwindow_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param next bool
///
bool k_xmlguiwindow_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param next bool
///
bool k_xmlguiwindow_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self, bool next)
///
void k_xmlguiwindow_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_xmlguiwindow_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_xmlguiwindow_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self, QObject* watched, QEvent* event)
///
void k_xmlguiwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QTimerEvent*
///
void k_xmlguiwindow_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QTimerEvent*
///
void k_xmlguiwindow_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QTimerEvent* event)
///
void k_xmlguiwindow_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QChildEvent*
///
void k_xmlguiwindow_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QChildEvent*
///
void k_xmlguiwindow_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QChildEvent* event)
///
void k_xmlguiwindow_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QEvent*
///
void k_xmlguiwindow_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param event QEvent*
///
void k_xmlguiwindow_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QEvent* event)
///
void k_xmlguiwindow_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param signal QMetaMethod*
///
void k_xmlguiwindow_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param signal QMetaMethod*
///
void k_xmlguiwindow_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QMetaMethod* signal)
///
void k_xmlguiwindow_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param signal QMetaMethod*
///
void k_xmlguiwindow_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param signal QMetaMethod*
///
void k_xmlguiwindow_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QMetaMethod* signal)
///
void k_xmlguiwindow_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
const char** k_xmlguiwindow_container_tags(const void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
const char** k_xmlguiwindow_super_container_tags(const void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback const char** func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_container_tags(void* self, const char** (*callback)(const void*));

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
/// @param containerAction QAction**
///
QWidget* k_xmlguiwindow_create_container(void* self, void* parent, int index, const void* element, void** containerAction);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
/// @param containerAction QAction**
///
QWidget* k_xmlguiwindow_super_create_container(void* self, void* parent, int index, const void* element, void** containerAction);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QWidget* func(KXmlGuiWindow* self, QWidget* parent, int index, QDomElement* element, QAction** containerAction)
///
void k_xmlguiwindow_on_create_container(void* self, QWidget* (*callback)(void*, void*, int, const void*, void**));

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param container QWidget*
/// @param parent QWidget*
/// @param element QDomElement*
/// @param containerAction QAction*
///
void k_xmlguiwindow_remove_container(void* self, void* container, void* parent, void* element, void* containerAction);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param container QWidget*
/// @param parent QWidget*
/// @param element QDomElement*
/// @param containerAction QAction*
///
void k_xmlguiwindow_super_remove_container(void* self, void* container, void* parent, void* element, void* containerAction);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction)
///
void k_xmlguiwindow_on_remove_container(void* self, void (*callback)(void*, void*, void*, void*, void*));

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
const char** k_xmlguiwindow_custom_tags(const void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
const char** k_xmlguiwindow_super_custom_tags(const void* self);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback const char** func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_custom_tags(void* self, const char** (*callback)(const void*));

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
///
QAction* k_xmlguiwindow_create_custom_element(void* self, void* parent, int index, const void* element);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
///
QAction* k_xmlguiwindow_super_create_custom_element(void* self, void* parent, int index, const void* element);

/// Inherited from KXMLGUIBuilder
///
/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QAction* func(KXmlGuiWindow* self, QWidget* parent, int index, QDomElement* element)
///
void k_xmlguiwindow_on_create_custom_element(void* self, QAction* (*callback)(void*, void*, int, const void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param element QDomElement*
///
QAction* k_xmlguiwindow_action2(const void* self, const void* element);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param element QDomElement*
///
QAction* k_xmlguiwindow_super_action2(const void* self, const void* element);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QAction* func(KXmlGuiWindow* self, QDomElement* element)
///
void k_xmlguiwindow_on_action2(void* self, QAction* (*callback)(const void*, const void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
KActionCollection* k_xmlguiwindow_action_collection(const void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
KActionCollection* k_xmlguiwindow_super_action_collection(const void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback KActionCollection* func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_action_collection(void* self, KActionCollection* (*callback)(const void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_component_name(const void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_super_component_name(const void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback const char* func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_component_name(void* self, const char* (*callback)(const void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
QDomDocument* k_xmlguiwindow_dom_document(const void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
QDomDocument* k_xmlguiwindow_super_dom_document(const void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QDomDocument* func(KXmlGuiWindow* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_xmlguiwindow_on_dom_document(void* self, QDomDocument* (*callback)(const void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_xml_file(const void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_super_xml_file(const void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback const char* func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_xml_file(void* self, const char* (*callback)(const void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_local_x_m_l_file(const void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
const char* k_xmlguiwindow_super_local_x_m_l_file(const void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback const char* func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_local_x_m_l_file(void* self, const char* (*callback)(const void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param componentName const char*
/// @param componentDisplayName const char*
///
void k_xmlguiwindow_set_component_name(void* self, const char* componentName, const char* componentDisplayName);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param componentName const char*
/// @param componentDisplayName const char*
///
void k_xmlguiwindow_super_set_component_name(void* self, const char* componentName, const char* componentDisplayName);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* componentName, const char* componentDisplayName)
///
void k_xmlguiwindow_on_set_component_name(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param file const char*
/// @param merge bool
/// @param setXMLDoc bool
///
void k_xmlguiwindow_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param file const char*
/// @param merge bool
/// @param setXMLDoc bool
///
void k_xmlguiwindow_super_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* file, bool merge, bool setXMLDoc)
///
void k_xmlguiwindow_on_set_x_m_l_file(void* self, void (*callback)(void*, const char*, bool, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param file const char*
///
void k_xmlguiwindow_set_local_x_m_l_file(void* self, const char* file);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param file const char*
///
void k_xmlguiwindow_super_set_local_x_m_l_file(void* self, const char* file);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* file)
///
void k_xmlguiwindow_on_set_local_x_m_l_file(void* self, void (*callback)(void*, const char*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param document const char*
/// @param merge bool
///
void k_xmlguiwindow_set_x_m_l(void* self, const char* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param document const char*
/// @param merge bool
///
void k_xmlguiwindow_super_set_x_m_l(void* self, const char* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* document, bool merge)
///
void k_xmlguiwindow_on_set_x_m_l(void* self, void (*callback)(void*, const char*, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param document QDomDocument*
/// @param merge bool
///
void k_xmlguiwindow_set_d_o_m_document(void* self, const void* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param document QDomDocument*
/// @param merge bool
///
void k_xmlguiwindow_super_set_d_o_m_document(void* self, const void* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, QDomDocument* document, bool merge)
///
void k_xmlguiwindow_on_set_d_o_m_document(void* self, void (*callback)(void*, const void*, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param newstate const char*
/// @param reverse enum KXMLGUIClient__ReverseStateChange
///
void k_xmlguiwindow_state_changed(void* self, const char* newstate, int32_t reverse);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param newstate const char*
/// @param reverse enum KXMLGUIClient__ReverseStateChange
///
void k_xmlguiwindow_super_state_changed(void* self, const char* newstate, int32_t reverse);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* newstate, enum KXMLGUIClient__ReverseStateChange reverse)
///
void k_xmlguiwindow_on_state_changed(void* self, void (*callback)(void*, const char*, int32_t));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfig*
/// @param param2 int
///
void k_xmlguiwindow_save_properties_internal(void* self, void* param1, int param2);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfig*
/// @param param2 int
///
void k_xmlguiwindow_super_save_properties_internal(void* self, void* param1, int param2);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, KConfig* param1, int param2)
///
void k_xmlguiwindow_on_save_properties_internal(void* self, void (*callback)(void*, void*, int));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfig*
/// @param param2 int
///
bool k_xmlguiwindow_read_properties_internal(void* self, void* param1, int param2);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param param1 KConfig*
/// @param param2 int
///
bool k_xmlguiwindow_super_read_properties_internal(void* self, void* param1, int param2);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self, KConfig* param1, int param2)
///
void k_xmlguiwindow_on_read_properties_internal(void* self, bool (*callback)(void*, void*, int));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#settingsDirty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_settings_dirty(const void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#settingsDirty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
bool k_xmlguiwindow_super_settings_dirty(const void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#settingsDirty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_settings_dirty(void* self, bool (*callback)(const void*));

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_save_auto_save_settings(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_super_save_auto_save_settings(void* self);

/// Inherited from KMainWindow
///
/// [Upstream resources](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_save_auto_save_settings(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
///
bool k_xmlguiwindow_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
///
bool k_xmlguiwindow_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
///
bool k_xmlguiwindow_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
///
bool k_xmlguiwindow_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
QObject* k_xmlguiwindow_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
QObject* k_xmlguiwindow_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback QObject* func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
///
int32_t k_xmlguiwindow_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback int32_t func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param signal const char*
///
int32_t k_xmlguiwindow_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param signal const char*
///
int32_t k_xmlguiwindow_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback int32_t func(KXmlGuiWindow* self, const char* signal)
///
void k_xmlguiwindow_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param signal QMetaMethod*
///
bool k_xmlguiwindow_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param signal QMetaMethod*
///
bool k_xmlguiwindow_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback bool func(KXmlGuiWindow* self, QMetaMethod* signal)
///
void k_xmlguiwindow_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_xmlguiwindow_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KXmlGuiWindow*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_xmlguiwindow_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback double func(KXmlGuiWindow* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_xmlguiwindow_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
///
const char* k_xmlguiwindow_standards_xml_file_location(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
///
const char* k_xmlguiwindow_super_standards_xml_file_location(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback const char* func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_standards_xml_file_location(void* self, const char* (*callback)(void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_load_standards_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_super_load_standards_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self)
///
void k_xmlguiwindow_on_load_standards_xml_file(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KXmlGuiWindow*
/// @param callback void func(KXmlGuiWindow* self, const char* objectName)
///
void k_xmlguiwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#dtor.KXmlGuiWindow)
///
/// Delete this object from C++ memory.
///
/// @param self KXmlGuiWindow*
///
void k_xmlguiwindow_delete(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguiwindow.html#public-types)

typedef enum {
    KXMLGUIWINDOW_STANDARDWINDOWOPTION_TOOLBAR = 1,
    KXMLGUIWINDOW_STANDARDWINDOWOPTION_KEYS = 2,
    KXMLGUIWINDOW_STANDARDWINDOWOPTION_STATUSBAR = 4,
    KXMLGUIWINDOW_STANDARDWINDOWOPTION_SAVE = 8,
    KXMLGUIWINDOW_STANDARDWINDOWOPTION_CREATE = 16,
    KXMLGUIWINDOW_STANDARDWINDOWOPTION_DEFAULT = 31
} KXmlGuiWindow__StandardWindowOption;

#endif

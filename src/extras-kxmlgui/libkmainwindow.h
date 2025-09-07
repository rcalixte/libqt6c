#pragma once
#ifndef SRC_EXTRAS_KXMLGUIQT6C_LIBKMAINWINDOW_H
#define SRC_EXTRAS_KXMLGUIQT6C_LIBKMAINWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kmainwindow.html

/// k_mainwindow_new constructs a new KMainWindow object.
///
/// @param parent QWidget*
KMainWindow* k_mainwindow_new(void* parent);

/// k_mainwindow_new2 constructs a new KMainWindow object.
///
KMainWindow* k_mainwindow_new2();

/// k_mainwindow_new3 constructs a new KMainWindow object.
///
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
KMainWindow* k_mainwindow_new3(void* parent, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KMainWindow*
const QMetaObject* k_mainwindow_meta_object(void* self);

/// @param self KMainWindow*
/// @param param1 const char*
void* k_mainwindow_metacast(void* self, const char* param1);

/// @param self KMainWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_mainwindow_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback int32_t func(KMainWindow* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_mainwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KMainWindow*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_mainwindow_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_mainwindow_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#canBeRestored)
///
/// @param numberOfInstances int
bool k_mainwindow_can_be_restored(int numberOfInstances);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#classNameOfToplevel)
///
/// Caller is responsible for freeing the returned memory
///
/// @param instanceNumber int
const char* k_mainwindow_class_name_of_toplevel(int instanceNumber);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#restore)
///
/// @param self KMainWindow*
/// @param numberOfInstances int
bool k_mainwindow_restore(void* self, int numberOfInstances);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#hasMenuBar)
///
/// @param self KMainWindow*
bool k_mainwindow_has_menu_bar(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#memberList)
///
libqt_list /* of KMainWindow* */ k_mainwindow_member_list();

/// [Qt documentation](https://api.kde.org/kmainwindow.html#toolBar)
///
/// @param self KMainWindow*
KToolBar* k_mainwindow_tool_bar(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#toolBars)
///
/// @param self KMainWindow*
libqt_list /* of KToolBar* */ k_mainwindow_tool_bars(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KMainWindow*
void k_mainwindow_set_auto_save_settings(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KMainWindow*
/// @param group KConfigGroup*
void k_mainwindow_set_auto_save_settings2(void* self, void* group);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#resetAutoSaveSettings)
///
/// @param self KMainWindow*
void k_mainwindow_reset_auto_save_settings(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#autoSaveSettings)
///
/// @param self KMainWindow*
bool k_mainwindow_auto_save_settings(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#autoSaveGroup)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
const char* k_mainwindow_auto_save_group(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#autoSaveConfigGroup)
///
/// @param self KMainWindow*
KConfigGroup* k_mainwindow_auto_save_config_group(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setStateConfigGroup)
///
/// @param self KMainWindow*
/// @param configGroup const char*
void k_mainwindow_set_state_config_group(void* self, const char* configGroup);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#stateConfigGroup)
///
/// @param self KMainWindow*
KConfigGroup* k_mainwindow_state_config_group(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#applyMainWindowSettings)
///
/// @param self KMainWindow*
/// @param config KConfigGroup*
void k_mainwindow_apply_main_window_settings(void* self, void* config);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#applyMainWindowSettings)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, KConfigGroup* config)
void k_mainwindow_on_apply_main_window_settings(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kmainwindow.html#applyMainWindowSettings)
///
/// Base class method implementation
///
/// @param self KMainWindow*
/// @param config KConfigGroup*
void k_mainwindow_qbase_apply_main_window_settings(void* self, void* config);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveMainWindowSettings)
///
/// @param self KMainWindow*
/// @param config KConfigGroup*
void k_mainwindow_save_main_window_settings(void* self, void* config);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#dbusName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
const char* k_mainwindow_dbus_name(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
///
/// @param self KMainWindow*
/// @param caption const char*
void k_mainwindow_set_caption(void* self, const char* caption);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, const char* caption)
void k_mainwindow_on_set_caption(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Base class method implementation
///
/// @param self KMainWindow*
/// @param caption const char*
void k_mainwindow_qbase_set_caption(void* self, const char* caption);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
///
/// @param self KMainWindow*
/// @param caption const char*
/// @param modified bool
void k_mainwindow_set_caption2(void* self, const char* caption, bool modified);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, const char* caption, bool modified)
void k_mainwindow_on_set_caption2(void* self, void (*callback)(void*, const char*, bool));

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
///
/// Base class method implementation
///
/// @param self KMainWindow*
/// @param caption const char*
/// @param modified bool
void k_mainwindow_qbase_set_caption2(void* self, const char* caption, bool modified);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setPlainCaption)
///
/// @param self KMainWindow*
/// @param caption const char*
void k_mainwindow_set_plain_caption(void* self, const char* caption);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setPlainCaption)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, const char* caption)
void k_mainwindow_on_set_plain_caption(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setPlainCaption)
///
/// Base class method implementation
///
/// @param self KMainWindow*
/// @param caption const char*
void k_mainwindow_qbase_set_plain_caption(void* self, const char* caption);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#appHelpActivated)
///
/// @param self KMainWindow*
void k_mainwindow_app_help_activated(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setSettingsDirty)
///
/// @param self KMainWindow*
void k_mainwindow_set_settings_dirty(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#event)
///
/// @param self KMainWindow*
/// @param event QEvent*
bool k_mainwindow_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback bool func(KMainWindow* self, QEvent* event)
void k_mainwindow_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kmainwindow.html#event)
///
/// Base class method implementation
///
/// @param self KMainWindow*
/// @param event QEvent*
bool k_mainwindow_qbase_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#keyPressEvent)
///
/// @param self KMainWindow*
/// @param keyEvent QKeyEvent*
void k_mainwindow_key_press_event(void* self, void* keyEvent);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QKeyEvent* keyEvent)
void k_mainwindow_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kmainwindow.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self KMainWindow*
/// @param keyEvent QKeyEvent*
void k_mainwindow_qbase_key_press_event(void* self, void* keyEvent);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#closeEvent)
///
/// @param self KMainWindow*
/// @param param1 QCloseEvent*
void k_mainwindow_close_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#closeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QCloseEvent* param1)
void k_mainwindow_on_close_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kmainwindow.html#closeEvent)
///
/// Base class method implementation
///
/// @param self KMainWindow*
/// @param param1 QCloseEvent*
void k_mainwindow_qbase_close_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#queryClose)
///
/// @param self KMainWindow*
bool k_mainwindow_query_close(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#queryClose)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback bool func()
void k_mainwindow_on_query_close(void* self, bool (*callback)());

/// [Qt documentation](https://api.kde.org/kmainwindow.html#queryClose)
///
/// Base class method implementation
///
/// @param self KMainWindow*
bool k_mainwindow_qbase_query_close(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveProperties)
///
/// @param self KMainWindow*
/// @param param1 KConfigGroup*
void k_mainwindow_save_properties(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveProperties)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, KConfigGroup* param1)
void k_mainwindow_on_save_properties(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveProperties)
///
/// Base class method implementation
///
/// @param self KMainWindow*
/// @param param1 KConfigGroup*
void k_mainwindow_qbase_save_properties(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#readProperties)
///
/// @param self KMainWindow*
/// @param param1 KConfigGroup*
void k_mainwindow_read_properties(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#readProperties)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, KConfigGroup* param1)
void k_mainwindow_on_read_properties(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kmainwindow.html#readProperties)
///
/// Base class method implementation
///
/// @param self KMainWindow*
/// @param param1 KConfigGroup*
void k_mainwindow_qbase_read_properties(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
///
/// @param self KMainWindow*
/// @param sessionConfig KConfig*
void k_mainwindow_save_global_properties(void* self, void* sessionConfig);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, KConfig* sessionConfig)
void k_mainwindow_on_save_global_properties(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
///
/// Base class method implementation
///
/// @param self KMainWindow*
/// @param sessionConfig KConfig*
void k_mainwindow_qbase_save_global_properties(void* self, void* sessionConfig);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#readGlobalProperties)
///
/// @param self KMainWindow*
/// @param sessionConfig KConfig*
void k_mainwindow_read_global_properties(void* self, void* sessionConfig);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#readGlobalProperties)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, KConfig* sessionConfig)
void k_mainwindow_on_read_global_properties(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kmainwindow.html#readGlobalProperties)
///
/// Base class method implementation
///
/// @param self KMainWindow*
/// @param sessionConfig KConfig*
void k_mainwindow_qbase_read_global_properties(void* self, void* sessionConfig);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
///
/// @param self KMainWindow*
/// @param param1 KConfig*
/// @param param2 int
void k_mainwindow_save_properties_internal(void* self, void* param1, int param2);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, KConfig* param1, int param2)
void k_mainwindow_on_save_properties_internal(void* self, void (*callback)(void*, void*, int));

/// [Qt documentation](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
///
/// Base class method implementation
///
/// @param self KMainWindow*
/// @param param1 KConfig*
/// @param param2 int
void k_mainwindow_qbase_save_properties_internal(void* self, void* param1, int param2);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
///
/// @param self KMainWindow*
/// @param param1 KConfig*
/// @param param2 int
bool k_mainwindow_read_properties_internal(void* self, void* param1, int param2);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback bool func(KMainWindow* self, KConfig* param1, int param2)
void k_mainwindow_on_read_properties_internal(void* self, bool (*callback)(void*, void*, int));

/// [Qt documentation](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
///
/// Base class method implementation
///
/// @param self KMainWindow*
/// @param param1 KConfig*
/// @param param2 int
bool k_mainwindow_qbase_read_properties_internal(void* self, void* param1, int param2);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#settingsDirty)
///
/// @param self KMainWindow*
bool k_mainwindow_settings_dirty(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#settingsDirty)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback bool func()
void k_mainwindow_on_settings_dirty(void* self, bool (*callback)());

/// [Qt documentation](https://api.kde.org/kmainwindow.html#settingsDirty)
///
/// Base class method implementation
///
/// @param self KMainWindow*
bool k_mainwindow_qbase_settings_dirty(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
///
/// @param self KMainWindow*
void k_mainwindow_save_auto_save_settings(void* self);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
///
/// Allows for overriding the related default method
///
/// @param self KMainWindow*
/// @param callback void func()
void k_mainwindow_on_save_auto_save_settings(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
///
/// Base class method implementation
///
/// @param self KMainWindow*
void k_mainwindow_qbase_save_auto_save_settings(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_mainwindow_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_mainwindow_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#restore)
///
/// @param self KMainWindow*
/// @param numberOfInstances int
/// @param show bool
bool k_mainwindow_restore2(void* self, int numberOfInstances, bool show);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#toolBar)
///
/// @param self KMainWindow*
/// @param name const char*
KToolBar* k_mainwindow_tool_bar1(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KMainWindow*
/// @param groupName const char*
void k_mainwindow_set_auto_save_settings1(void* self, const char* groupName);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KMainWindow*
/// @param groupName const char*
/// @param saveWindowSize bool
void k_mainwindow_set_auto_save_settings22(void* self, const char* groupName, bool saveWindowSize);

/// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
///
/// @param self KMainWindow*
/// @param group KConfigGroup*
/// @param saveWindowSize bool
void k_mainwindow_set_auto_save_settings23(void* self, void* group, bool saveWindowSize);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#iconSize)
///
/// @param self KMainWindow*
QSize* k_mainwindow_icon_size(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setIconSize)
///
/// @param self KMainWindow*
/// @param iconSize QSize*
void k_mainwindow_set_icon_size(void* self, void* iconSize);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyle)
///
/// @param self KMainWindow*
///
/// @return enum Qt__ToolButtonStyle
int32_t k_mainwindow_tool_button_style(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setToolButtonStyle)
///
/// @param self KMainWindow*
/// @param toolButtonStyle enum Qt__ToolButtonStyle
void k_mainwindow_set_tool_button_style(void* self, int32_t toolButtonStyle);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isAnimated)
///
/// @param self KMainWindow*
bool k_mainwindow_is_animated(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isDockNestingEnabled)
///
/// @param self KMainWindow*
bool k_mainwindow_is_dock_nesting_enabled(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#documentMode)
///
/// @param self KMainWindow*
bool k_mainwindow_document_mode(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDocumentMode)
///
/// @param self KMainWindow*
/// @param enabled bool
void k_mainwindow_set_document_mode(void* self, bool enabled);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabShape)
///
/// @param self KMainWindow*
///
/// @return enum QTabWidget__TabShape
int32_t k_mainwindow_tab_shape(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setTabShape)
///
/// @param self KMainWindow*
/// @param tabShape enum QTabWidget__TabShape
void k_mainwindow_set_tab_shape(void* self, int32_t tabShape);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabPosition)
///
/// @param self KMainWindow*
/// @param area enum Qt__DockWidgetArea
///
/// @return enum QTabWidget__TabPosition
int32_t k_mainwindow_tab_position(void* self, int32_t area);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setTabPosition)
///
/// @param self KMainWindow*
/// @param areas flag of enum Qt__DockWidgetArea
/// @param tabPosition enum QTabWidget__TabPosition
void k_mainwindow_set_tab_position(void* self, int32_t areas, int32_t tabPosition);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDockOptions)
///
/// @param self KMainWindow*
/// @param options flag of enum QMainWindow__DockOption
void k_mainwindow_set_dock_options(void* self, int32_t options);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#dockOptions)
///
/// @param self KMainWindow*
///
/// @return flag of enum QMainWindow__DockOption
int32_t k_mainwindow_dock_options(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isSeparator)
///
/// @param self KMainWindow*
/// @param pos QPoint*
bool k_mainwindow_is_separator(void* self, void* pos);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#menuBar)
///
/// @param self KMainWindow*
QMenuBar* k_mainwindow_menu_bar(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setMenuBar)
///
/// @param self KMainWindow*
/// @param menubar QMenuBar*
void k_mainwindow_set_menu_bar(void* self, void* menubar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#menuWidget)
///
/// @param self KMainWindow*
QWidget* k_mainwindow_menu_widget(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setMenuWidget)
///
/// @param self KMainWindow*
/// @param menubar QWidget*
void k_mainwindow_set_menu_widget(void* self, void* menubar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#statusBar)
///
/// @param self KMainWindow*
QStatusBar* k_mainwindow_status_bar(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setStatusBar)
///
/// @param self KMainWindow*
/// @param statusbar QStatusBar*
void k_mainwindow_set_status_bar(void* self, void* statusbar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#centralWidget)
///
/// @param self KMainWindow*
QWidget* k_mainwindow_central_widget(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setCentralWidget)
///
/// @param self KMainWindow*
/// @param widget QWidget*
void k_mainwindow_set_central_widget(void* self, void* widget);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#takeCentralWidget)
///
/// @param self KMainWindow*
QWidget* k_mainwindow_take_central_widget(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setCorner)
///
/// @param self KMainWindow*
/// @param corner enum Qt__Corner
/// @param area enum Qt__DockWidgetArea
void k_mainwindow_set_corner(void* self, int32_t corner, int32_t area);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#corner)
///
/// @param self KMainWindow*
/// @param corner enum Qt__Corner
///
/// @return enum Qt__DockWidgetArea
int32_t k_mainwindow_corner(void* self, int32_t corner);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
///
/// @param self KMainWindow*
void k_mainwindow_add_tool_bar_break(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBarBreak)
///
/// @param self KMainWindow*
/// @param before QToolBar*
void k_mainwindow_insert_tool_bar_break(void* self, void* before);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// @param self KMainWindow*
/// @param area enum Qt__ToolBarArea
/// @param toolbar QToolBar*
void k_mainwindow_add_tool_bar(void* self, int32_t area, void* toolbar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// @param self KMainWindow*
/// @param toolbar QToolBar*
void k_mainwindow_add_tool_bar2(void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// @param self KMainWindow*
/// @param title const char*
QToolBar* k_mainwindow_add_tool_bar3(void* self, const char* title);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBar)
///
/// @param self KMainWindow*
/// @param before QToolBar*
/// @param toolbar QToolBar*
void k_mainwindow_insert_tool_bar(void* self, void* before, void* toolbar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBar)
///
/// @param self KMainWindow*
/// @param toolbar QToolBar*
void k_mainwindow_remove_tool_bar(void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBarBreak)
///
/// @param self KMainWindow*
/// @param before QToolBar*
void k_mainwindow_remove_tool_bar_break(void* self, void* before);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#unifiedTitleAndToolBarOnMac)
///
/// @param self KMainWindow*
bool k_mainwindow_unified_title_and_tool_bar_on_mac(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolBarArea)
///
/// @param self KMainWindow*
/// @param toolbar QToolBar*
///
/// @return enum Qt__ToolBarArea
int32_t k_mainwindow_tool_bar_area(void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolBarBreak)
///
/// @param self KMainWindow*
/// @param toolbar QToolBar*
bool k_mainwindow_tool_bar_break(void* self, void* toolbar);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
///
/// @param self KMainWindow*
/// @param area enum Qt__DockWidgetArea
/// @param dockwidget QDockWidget*
void k_mainwindow_add_dock_widget(void* self, int32_t area, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
///
/// @param self KMainWindow*
/// @param area enum Qt__DockWidgetArea
/// @param dockwidget QDockWidget*
/// @param orientation enum Qt__Orientation
void k_mainwindow_add_dock_widget2(void* self, int32_t area, void* dockwidget, int32_t orientation);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#splitDockWidget)
///
/// @param self KMainWindow*
/// @param after QDockWidget*
/// @param dockwidget QDockWidget*
/// @param orientation enum Qt__Orientation
void k_mainwindow_split_dock_widget(void* self, void* after, void* dockwidget, int32_t orientation);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifyDockWidget)
///
/// @param self KMainWindow*
/// @param first QDockWidget*
/// @param second QDockWidget*
void k_mainwindow_tabify_dock_widget(void* self, void* first, void* second);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgets)
///
/// @param self KMainWindow*
/// @param dockwidget QDockWidget*
libqt_list /* of QDockWidget* */ k_mainwindow_tabified_dock_widgets(void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeDockWidget)
///
/// @param self KMainWindow*
/// @param dockwidget QDockWidget*
void k_mainwindow_remove_dock_widget(void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreDockWidget)
///
/// @param self KMainWindow*
/// @param dockwidget QDockWidget*
bool k_mainwindow_restore_dock_widget(void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#dockWidgetArea)
///
/// @param self KMainWindow*
/// @param dockwidget QDockWidget*
///
/// @return enum Qt__DockWidgetArea
int32_t k_mainwindow_dock_widget_area(void* self, void* dockwidget);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#resizeDocks)
///
/// @param self KMainWindow*
/// @param docks libqt_list /* of QDockWidget* */
/// @param sizes libqt_list /* of int */
/// @param orientation enum Qt__Orientation
void k_mainwindow_resize_docks(void* self, libqt_list docks, libqt_list sizes, int32_t orientation);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
char* k_mainwindow_save_state(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
///
/// @param self KMainWindow*
/// @param state const char*
bool k_mainwindow_restore_state(void* self, const char* state);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setAnimated)
///
/// @param self KMainWindow*
/// @param enabled bool
void k_mainwindow_set_animated(void* self, bool enabled);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDockNestingEnabled)
///
/// @param self KMainWindow*
/// @param enabled bool
void k_mainwindow_set_dock_nesting_enabled(void* self, bool enabled);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setUnifiedTitleAndToolBarOnMac)
///
/// @param self KMainWindow*
/// @param set bool
void k_mainwindow_set_unified_title_and_tool_bar_on_mac(void* self, bool set);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
///
/// @param self KMainWindow*
/// @param iconSize QSize*
void k_mainwindow_icon_size_changed(void* self, void* iconSize);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QSize* iconSize)
void k_mainwindow_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
///
/// @param self KMainWindow*
/// @param toolButtonStyle enum Qt__ToolButtonStyle
void k_mainwindow_tool_button_style_changed(void* self, int32_t toolButtonStyle);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, enum Qt__ToolButtonStyle toolButtonStyle)
void k_mainwindow_on_tool_button_style_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
///
/// @param self KMainWindow*
/// @param dockWidget QDockWidget*
void k_mainwindow_tabified_dock_widget_activated(void* self, void* dockWidget);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QDockWidget* dockWidget)
void k_mainwindow_on_tabified_dock_widget_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
///
/// @param self KMainWindow*
/// @param area enum Qt__ToolBarArea
void k_mainwindow_add_tool_bar_break1(void* self, int32_t area);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
/// @param version int
char* k_mainwindow_save_state1(void* self, int version);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
///
/// @param self KMainWindow*
/// @param state const char*
/// @param version int
bool k_mainwindow_restore_state2(void* self, const char* state, int version);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KMainWindow*
uintptr_t k_mainwindow_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KMainWindow*
void k_mainwindow_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KMainWindow*
uintptr_t k_mainwindow_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KMainWindow*
uintptr_t k_mainwindow_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KMainWindow*
QStyle* k_mainwindow_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KMainWindow*
/// @param style QStyle*
void k_mainwindow_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KMainWindow*
bool k_mainwindow_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KMainWindow*
bool k_mainwindow_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KMainWindow*
bool k_mainwindow_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KMainWindow*
///
/// @return enum Qt__WindowModality
int32_t k_mainwindow_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KMainWindow*
/// @param windowModality enum Qt__WindowModality
void k_mainwindow_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KMainWindow*
bool k_mainwindow_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KMainWindow*
/// @param param1 QWidget*
bool k_mainwindow_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KMainWindow*
/// @param enabled bool
void k_mainwindow_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KMainWindow*
/// @param disabled bool
void k_mainwindow_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KMainWindow*
/// @param windowModified bool
void k_mainwindow_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KMainWindow*
QRect* k_mainwindow_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KMainWindow*
const QRect* k_mainwindow_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KMainWindow*
QRect* k_mainwindow_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KMainWindow*
int32_t k_mainwindow_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KMainWindow*
int32_t k_mainwindow_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KMainWindow*
QPoint* k_mainwindow_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KMainWindow*
QSize* k_mainwindow_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KMainWindow*
QSize* k_mainwindow_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KMainWindow*
int32_t k_mainwindow_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KMainWindow*
int32_t k_mainwindow_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KMainWindow*
QRect* k_mainwindow_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KMainWindow*
QRect* k_mainwindow_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KMainWindow*
QRegion* k_mainwindow_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KMainWindow*
QSize* k_mainwindow_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KMainWindow*
QSize* k_mainwindow_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KMainWindow*
int32_t k_mainwindow_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KMainWindow*
int32_t k_mainwindow_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KMainWindow*
int32_t k_mainwindow_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KMainWindow*
int32_t k_mainwindow_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KMainWindow*
/// @param minimumSize QSize*
void k_mainwindow_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KMainWindow*
/// @param minw int
/// @param minh int
void k_mainwindow_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KMainWindow*
/// @param maximumSize QSize*
void k_mainwindow_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KMainWindow*
/// @param maxw int
/// @param maxh int
void k_mainwindow_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KMainWindow*
/// @param minw int
void k_mainwindow_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KMainWindow*
/// @param minh int
void k_mainwindow_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KMainWindow*
/// @param maxw int
void k_mainwindow_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KMainWindow*
/// @param maxh int
void k_mainwindow_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KMainWindow*
QSize* k_mainwindow_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KMainWindow*
/// @param sizeIncrement QSize*
void k_mainwindow_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KMainWindow*
/// @param w int
/// @param h int
void k_mainwindow_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KMainWindow*
QSize* k_mainwindow_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KMainWindow*
/// @param baseSize QSize*
void k_mainwindow_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KMainWindow*
/// @param basew int
/// @param baseh int
void k_mainwindow_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KMainWindow*
/// @param fixedSize QSize*
void k_mainwindow_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KMainWindow*
/// @param w int
/// @param h int
void k_mainwindow_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KMainWindow*
/// @param w int
void k_mainwindow_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KMainWindow*
/// @param h int
void k_mainwindow_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KMainWindow*
/// @param param1 QPointF*
QPointF* k_mainwindow_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KMainWindow*
/// @param param1 QPoint*
QPoint* k_mainwindow_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KMainWindow*
/// @param param1 QPointF*
QPointF* k_mainwindow_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KMainWindow*
/// @param param1 QPoint*
QPoint* k_mainwindow_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KMainWindow*
/// @param param1 QPointF*
QPointF* k_mainwindow_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KMainWindow*
/// @param param1 QPoint*
QPoint* k_mainwindow_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KMainWindow*
/// @param param1 QPointF*
QPointF* k_mainwindow_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KMainWindow*
/// @param param1 QPoint*
QPoint* k_mainwindow_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KMainWindow*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_mainwindow_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KMainWindow*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_mainwindow_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KMainWindow*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_mainwindow_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KMainWindow*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_mainwindow_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KMainWindow*
QWidget* k_mainwindow_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KMainWindow*
QWidget* k_mainwindow_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KMainWindow*
QWidget* k_mainwindow_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KMainWindow*
const QPalette* k_mainwindow_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KMainWindow*
/// @param palette QPalette*
void k_mainwindow_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KMainWindow*
/// @param backgroundRole enum QPalette__ColorRole
void k_mainwindow_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KMainWindow*
///
/// @return enum QPalette__ColorRole
int32_t k_mainwindow_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KMainWindow*
/// @param foregroundRole enum QPalette__ColorRole
void k_mainwindow_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KMainWindow*
///
/// @return enum QPalette__ColorRole
int32_t k_mainwindow_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KMainWindow*
const QFont* k_mainwindow_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KMainWindow*
/// @param font QFont*
void k_mainwindow_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KMainWindow*
QFontMetrics* k_mainwindow_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KMainWindow*
QFontInfo* k_mainwindow_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KMainWindow*
QCursor* k_mainwindow_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KMainWindow*
/// @param cursor QCursor*
void k_mainwindow_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KMainWindow*
void k_mainwindow_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KMainWindow*
/// @param enable bool
void k_mainwindow_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KMainWindow*
bool k_mainwindow_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KMainWindow*
bool k_mainwindow_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KMainWindow*
/// @param enable bool
void k_mainwindow_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KMainWindow*
bool k_mainwindow_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KMainWindow*
/// @param mask QBitmap*
void k_mainwindow_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KMainWindow*
/// @param mask QRegion*
void k_mainwindow_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KMainWindow*
QRegion* k_mainwindow_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KMainWindow*
void k_mainwindow_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMainWindow*
/// @param target QPaintDevice*
void k_mainwindow_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMainWindow*
/// @param painter QPainter*
void k_mainwindow_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KMainWindow*
QPixmap* k_mainwindow_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KMainWindow*
QGraphicsEffect* k_mainwindow_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KMainWindow*
/// @param effect QGraphicsEffect*
void k_mainwindow_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KMainWindow*
/// @param typeVal enum Qt__GestureType
void k_mainwindow_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KMainWindow*
/// @param typeVal enum Qt__GestureType
void k_mainwindow_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KMainWindow*
/// @param windowTitle const char*
void k_mainwindow_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KMainWindow*
/// @param styleSheet const char*
void k_mainwindow_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
const char* k_mainwindow_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
const char* k_mainwindow_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KMainWindow*
/// @param icon QIcon*
void k_mainwindow_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KMainWindow*
QIcon* k_mainwindow_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KMainWindow*
/// @param windowIconText const char*
void k_mainwindow_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
const char* k_mainwindow_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KMainWindow*
/// @param windowRole const char*
void k_mainwindow_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
const char* k_mainwindow_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KMainWindow*
/// @param filePath const char*
void k_mainwindow_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
const char* k_mainwindow_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KMainWindow*
/// @param level double
void k_mainwindow_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KMainWindow*
double k_mainwindow_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KMainWindow*
bool k_mainwindow_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KMainWindow*
/// @param toolTip const char*
void k_mainwindow_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
const char* k_mainwindow_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KMainWindow*
/// @param msec int
void k_mainwindow_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KMainWindow*
int32_t k_mainwindow_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KMainWindow*
/// @param statusTip const char*
void k_mainwindow_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
const char* k_mainwindow_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KMainWindow*
/// @param whatsThis const char*
void k_mainwindow_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
const char* k_mainwindow_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
const char* k_mainwindow_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KMainWindow*
/// @param name const char*
void k_mainwindow_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
const char* k_mainwindow_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KMainWindow*
/// @param description const char*
void k_mainwindow_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KMainWindow*
/// @param direction enum Qt__LayoutDirection
void k_mainwindow_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KMainWindow*
///
/// @return enum Qt__LayoutDirection
int32_t k_mainwindow_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KMainWindow*
void k_mainwindow_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KMainWindow*
/// @param locale QLocale*
void k_mainwindow_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KMainWindow*
QLocale* k_mainwindow_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KMainWindow*
void k_mainwindow_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KMainWindow*
bool k_mainwindow_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KMainWindow*
bool k_mainwindow_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KMainWindow*
void k_mainwindow_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KMainWindow*
bool k_mainwindow_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KMainWindow*
void k_mainwindow_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KMainWindow*
void k_mainwindow_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KMainWindow*
/// @param reason enum Qt__FocusReason
void k_mainwindow_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KMainWindow*
///
/// @return enum Qt__FocusPolicy
int32_t k_mainwindow_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KMainWindow*
/// @param policy enum Qt__FocusPolicy
void k_mainwindow_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KMainWindow*
bool k_mainwindow_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_mainwindow_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KMainWindow*
/// @param focusProxy QWidget*
void k_mainwindow_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KMainWindow*
QWidget* k_mainwindow_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KMainWindow*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_mainwindow_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KMainWindow*
/// @param policy enum Qt__ContextMenuPolicy
void k_mainwindow_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KMainWindow*
void k_mainwindow_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KMainWindow*
/// @param param1 QCursor*
void k_mainwindow_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KMainWindow*
void k_mainwindow_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KMainWindow*
void k_mainwindow_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KMainWindow*
void k_mainwindow_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KMainWindow*
/// @param key QKeySequence*
int32_t k_mainwindow_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KMainWindow*
/// @param id int
void k_mainwindow_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KMainWindow*
/// @param id int
void k_mainwindow_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KMainWindow*
/// @param id int
void k_mainwindow_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_mainwindow_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_mainwindow_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KMainWindow*
bool k_mainwindow_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KMainWindow*
/// @param enable bool
void k_mainwindow_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KMainWindow*
QGraphicsProxyWidget* k_mainwindow_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KMainWindow*
void k_mainwindow_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KMainWindow*
void k_mainwindow_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KMainWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_mainwindow_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KMainWindow*
/// @param param1 QRect*
void k_mainwindow_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KMainWindow*
/// @param param1 QRegion*
void k_mainwindow_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KMainWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_mainwindow_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KMainWindow*
/// @param param1 QRect*
void k_mainwindow_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KMainWindow*
/// @param param1 QRegion*
void k_mainwindow_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KMainWindow*
/// @param hidden bool
void k_mainwindow_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KMainWindow*
void k_mainwindow_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KMainWindow*
void k_mainwindow_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KMainWindow*
void k_mainwindow_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KMainWindow*
void k_mainwindow_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KMainWindow*
void k_mainwindow_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KMainWindow*
void k_mainwindow_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KMainWindow*
bool k_mainwindow_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KMainWindow*
void k_mainwindow_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KMainWindow*
void k_mainwindow_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KMainWindow*
/// @param param1 QWidget*
void k_mainwindow_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KMainWindow*
/// @param x int
/// @param y int
void k_mainwindow_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KMainWindow*
/// @param param1 QPoint*
void k_mainwindow_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KMainWindow*
/// @param w int
/// @param h int
void k_mainwindow_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KMainWindow*
/// @param param1 QSize*
void k_mainwindow_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KMainWindow*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_mainwindow_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KMainWindow*
/// @param geometry QRect*
void k_mainwindow_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
char* k_mainwindow_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KMainWindow*
/// @param geometry const char*
bool k_mainwindow_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KMainWindow*
void k_mainwindow_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KMainWindow*
bool k_mainwindow_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KMainWindow*
/// @param param1 QWidget*
bool k_mainwindow_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KMainWindow*
bool k_mainwindow_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KMainWindow*
bool k_mainwindow_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KMainWindow*
bool k_mainwindow_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KMainWindow*
bool k_mainwindow_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KMainWindow*
///
/// @return flag of enum Qt__WindowState
int32_t k_mainwindow_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KMainWindow*
/// @param state flag of enum Qt__WindowState
void k_mainwindow_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KMainWindow*
/// @param state flag of enum Qt__WindowState
void k_mainwindow_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KMainWindow*
QSizePolicy* k_mainwindow_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KMainWindow*
/// @param sizePolicy QSizePolicy*
void k_mainwindow_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KMainWindow*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_mainwindow_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KMainWindow*
QRegion* k_mainwindow_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KMainWindow*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_mainwindow_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KMainWindow*
/// @param margins QMargins*
void k_mainwindow_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KMainWindow*
QMargins* k_mainwindow_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KMainWindow*
QRect* k_mainwindow_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KMainWindow*
QLayout* k_mainwindow_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KMainWindow*
/// @param layout QLayout*
void k_mainwindow_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KMainWindow*
void k_mainwindow_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KMainWindow*
/// @param parent QWidget*
void k_mainwindow_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KMainWindow*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_mainwindow_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KMainWindow*
/// @param dx int
/// @param dy int
void k_mainwindow_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KMainWindow*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_mainwindow_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KMainWindow*
QWidget* k_mainwindow_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KMainWindow*
QWidget* k_mainwindow_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KMainWindow*
QWidget* k_mainwindow_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KMainWindow*
bool k_mainwindow_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KMainWindow*
/// @param on bool
void k_mainwindow_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMainWindow*
/// @param action QAction*
void k_mainwindow_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KMainWindow*
/// @param actions libqt_list /* of QAction* */
void k_mainwindow_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KMainWindow*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_mainwindow_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KMainWindow*
/// @param before QAction*
/// @param action QAction*
void k_mainwindow_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KMainWindow*
/// @param action QAction*
void k_mainwindow_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KMainWindow*
libqt_list /* of QAction* */ k_mainwindow_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMainWindow*
/// @param text const char*
QAction* k_mainwindow_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMainWindow*
/// @param icon QIcon*
/// @param text const char*
QAction* k_mainwindow_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMainWindow*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_mainwindow_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMainWindow*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_mainwindow_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KMainWindow*
QWidget* k_mainwindow_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KMainWindow*
/// @param typeVal flag of enum Qt__WindowType
void k_mainwindow_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KMainWindow*
///
/// @return flag of enum Qt__WindowType
int64_t k_mainwindow_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KMainWindow*
/// @param param1 enum Qt__WindowType
void k_mainwindow_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KMainWindow*
/// @param typeVal flag of enum Qt__WindowType
void k_mainwindow_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KMainWindow*
///
/// @return enum Qt__WindowType
int64_t k_mainwindow_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_mainwindow_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KMainWindow*
/// @param x int
/// @param y int
QWidget* k_mainwindow_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KMainWindow*
/// @param p QPoint*
QWidget* k_mainwindow_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KMainWindow*
/// @param p QPointF*
QWidget* k_mainwindow_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KMainWindow*
/// @param param1 enum Qt__WidgetAttribute
void k_mainwindow_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KMainWindow*
/// @param param1 enum Qt__WidgetAttribute
bool k_mainwindow_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KMainWindow*
void k_mainwindow_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KMainWindow*
/// @param child QWidget*
bool k_mainwindow_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KMainWindow*
bool k_mainwindow_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KMainWindow*
/// @param enabled bool
void k_mainwindow_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KMainWindow*
QBackingStore* k_mainwindow_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KMainWindow*
QWindow* k_mainwindow_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KMainWindow*
QScreen* k_mainwindow_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KMainWindow*
/// @param screen QScreen*
void k_mainwindow_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_mainwindow_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KMainWindow*
/// @param title const char*
void k_mainwindow_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, const char* title)
void k_mainwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KMainWindow*
/// @param icon QIcon*
void k_mainwindow_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QIcon* icon)
void k_mainwindow_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KMainWindow*
/// @param iconText const char*
void k_mainwindow_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, const char* iconText)
void k_mainwindow_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KMainWindow*
/// @param pos QPoint*
void k_mainwindow_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QPoint* pos)
void k_mainwindow_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KMainWindow*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_mainwindow_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KMainWindow*
/// @param hints flag of enum Qt__InputMethodHint
void k_mainwindow_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMainWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_mainwindow_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMainWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_mainwindow_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMainWindow*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_mainwindow_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMainWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_mainwindow_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMainWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_mainwindow_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMainWindow*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_mainwindow_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KMainWindow*
/// @param rectangle QRect*
QPixmap* k_mainwindow_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KMainWindow*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_mainwindow_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KMainWindow*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_mainwindow_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KMainWindow*
/// @param id int
/// @param enable bool
void k_mainwindow_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KMainWindow*
/// @param id int
/// @param enable bool
void k_mainwindow_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KMainWindow*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_mainwindow_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KMainWindow*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_mainwindow_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_mainwindow_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_mainwindow_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
const char* k_mainwindow_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KMainWindow*
/// @param name char*
void k_mainwindow_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KMainWindow*
bool k_mainwindow_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KMainWindow*
bool k_mainwindow_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KMainWindow*
bool k_mainwindow_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KMainWindow*
bool k_mainwindow_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KMainWindow*
/// @param b bool
bool k_mainwindow_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KMainWindow*
QThread* k_mainwindow_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KMainWindow*
/// @param thread QThread*
bool k_mainwindow_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KMainWindow*
/// @param interval int
int32_t k_mainwindow_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KMainWindow*
/// @param id int
void k_mainwindow_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KMainWindow*
/// @param id enum Qt__TimerId
void k_mainwindow_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KMainWindow*
libqt_list /* of QObject* */ k_mainwindow_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KMainWindow*
/// @param filterObj QObject*
void k_mainwindow_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KMainWindow*
/// @param obj QObject*
void k_mainwindow_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_mainwindow_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KMainWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_mainwindow_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_mainwindow_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_mainwindow_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KMainWindow*
void k_mainwindow_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KMainWindow*
void k_mainwindow_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KMainWindow*
/// @param name const char*
/// @param value QVariant*
bool k_mainwindow_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KMainWindow*
/// @param name const char*
QVariant* k_mainwindow_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMainWindow*
const char** k_mainwindow_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KMainWindow*
QBindingStorage* k_mainwindow_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KMainWindow*
const QBindingStorage* k_mainwindow_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KMainWindow*
void k_mainwindow_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self)
void k_mainwindow_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KMainWindow*
QObject* k_mainwindow_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KMainWindow*
/// @param classname const char*
bool k_mainwindow_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KMainWindow*
void k_mainwindow_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KMainWindow*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_mainwindow_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KMainWindow*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_mainwindow_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_mainwindow_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KMainWindow*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_mainwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KMainWindow*
/// @param param1 QObject*
void k_mainwindow_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QObject* param1)
void k_mainwindow_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KMainWindow*
bool k_mainwindow_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KMainWindow*
int32_t k_mainwindow_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KMainWindow*
int32_t k_mainwindow_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KMainWindow*
int32_t k_mainwindow_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KMainWindow*
int32_t k_mainwindow_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KMainWindow*
int32_t k_mainwindow_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KMainWindow*
int32_t k_mainwindow_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KMainWindow*
double k_mainwindow_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KMainWindow*
double k_mainwindow_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KMainWindow*
int32_t k_mainwindow_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KMainWindow*
int32_t k_mainwindow_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_mainwindow_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_mainwindow_encode_metric_f(int32_t metric, double value);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
QMenu* k_mainwindow_create_popup_menu(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
QMenu* k_mainwindow_qbase_create_popup_menu(void* self);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback QMenu* func()
void k_mainwindow_on_create_popup_menu(void* self, QMenu* (*callback)());

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QContextMenuEvent*
void k_mainwindow_context_menu_event(void* self, void* event);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QContextMenuEvent*
void k_mainwindow_qbase_context_menu_event(void* self, void* event);

/// Inherited from QMainWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QContextMenuEvent* event)
void k_mainwindow_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
int32_t k_mainwindow_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
int32_t k_mainwindow_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback int32_t func()
void k_mainwindow_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param visible bool
void k_mainwindow_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param visible bool
void k_mainwindow_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, bool visible)
void k_mainwindow_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
QSize* k_mainwindow_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
QSize* k_mainwindow_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback QSize* func()
void k_mainwindow_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
QSize* k_mainwindow_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
QSize* k_mainwindow_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback QSize* func()
void k_mainwindow_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param param1 int
int32_t k_mainwindow_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param param1 int
int32_t k_mainwindow_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback int32_t func(KMainWindow* self, int param1)
void k_mainwindow_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
bool k_mainwindow_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
bool k_mainwindow_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback bool func()
void k_mainwindow_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
QPaintEngine* k_mainwindow_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
QPaintEngine* k_mainwindow_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback QPaintEngine* func()
void k_mainwindow_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QMouseEvent*
void k_mainwindow_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QMouseEvent*
void k_mainwindow_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QMouseEvent* event)
void k_mainwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QMouseEvent*
void k_mainwindow_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QMouseEvent*
void k_mainwindow_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QMouseEvent* event)
void k_mainwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QMouseEvent*
void k_mainwindow_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QMouseEvent*
void k_mainwindow_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QMouseEvent* event)
void k_mainwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QMouseEvent*
void k_mainwindow_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QMouseEvent*
void k_mainwindow_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QMouseEvent* event)
void k_mainwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QWheelEvent*
void k_mainwindow_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QWheelEvent*
void k_mainwindow_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QWheelEvent* event)
void k_mainwindow_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QKeyEvent*
void k_mainwindow_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QKeyEvent*
void k_mainwindow_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QKeyEvent* event)
void k_mainwindow_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QFocusEvent*
void k_mainwindow_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QFocusEvent*
void k_mainwindow_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QFocusEvent* event)
void k_mainwindow_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QFocusEvent*
void k_mainwindow_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QFocusEvent*
void k_mainwindow_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QFocusEvent* event)
void k_mainwindow_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QEnterEvent*
void k_mainwindow_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QEnterEvent*
void k_mainwindow_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QEnterEvent* event)
void k_mainwindow_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QEvent*
void k_mainwindow_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QEvent*
void k_mainwindow_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QEvent* event)
void k_mainwindow_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QPaintEvent*
void k_mainwindow_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QPaintEvent*
void k_mainwindow_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QPaintEvent* event)
void k_mainwindow_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QMoveEvent*
void k_mainwindow_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QMoveEvent*
void k_mainwindow_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QMoveEvent* event)
void k_mainwindow_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QResizeEvent*
void k_mainwindow_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QResizeEvent*
void k_mainwindow_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QResizeEvent* event)
void k_mainwindow_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QTabletEvent*
void k_mainwindow_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QTabletEvent*
void k_mainwindow_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QTabletEvent* event)
void k_mainwindow_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QActionEvent*
void k_mainwindow_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QActionEvent*
void k_mainwindow_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QActionEvent* event)
void k_mainwindow_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QDragEnterEvent*
void k_mainwindow_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QDragEnterEvent*
void k_mainwindow_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QDragEnterEvent* event)
void k_mainwindow_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QDragMoveEvent*
void k_mainwindow_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QDragMoveEvent*
void k_mainwindow_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QDragMoveEvent* event)
void k_mainwindow_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QDragLeaveEvent*
void k_mainwindow_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QDragLeaveEvent*
void k_mainwindow_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QDragLeaveEvent* event)
void k_mainwindow_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QDropEvent*
void k_mainwindow_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QDropEvent*
void k_mainwindow_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QDropEvent* event)
void k_mainwindow_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QShowEvent*
void k_mainwindow_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QShowEvent*
void k_mainwindow_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QShowEvent* event)
void k_mainwindow_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QHideEvent*
void k_mainwindow_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QHideEvent*
void k_mainwindow_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QHideEvent* event)
void k_mainwindow_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_mainwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_mainwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback bool func(KMainWindow* self, const char* eventType, void* message, intptr_t* result)
void k_mainwindow_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param param1 QEvent*
void k_mainwindow_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param param1 QEvent*
void k_mainwindow_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QEvent* param1)
void k_mainwindow_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_mainwindow_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_mainwindow_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback int32_t func(KMainWindow* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_mainwindow_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param painter QPainter*
void k_mainwindow_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param painter QPainter*
void k_mainwindow_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QPainter* painter)
void k_mainwindow_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param offset QPoint*
QPaintDevice* k_mainwindow_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param offset QPoint*
QPaintDevice* k_mainwindow_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback QPaintDevice* func(KMainWindow* self, QPoint* offset)
void k_mainwindow_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
QPainter* k_mainwindow_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
QPainter* k_mainwindow_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback QPainter* func()
void k_mainwindow_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param param1 QInputMethodEvent*
void k_mainwindow_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param param1 QInputMethodEvent*
void k_mainwindow_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QInputMethodEvent* param1)
void k_mainwindow_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_mainwindow_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_mainwindow_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback QVariant* func(KMainWindow* self, enum Qt__InputMethodQuery param1)
void k_mainwindow_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param next bool
bool k_mainwindow_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param next bool
bool k_mainwindow_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback bool func(KMainWindow* self, bool next)
void k_mainwindow_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param watched QObject*
/// @param event QEvent*
bool k_mainwindow_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param watched QObject*
/// @param event QEvent*
bool k_mainwindow_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback bool func(KMainWindow* self, QObject* watched, QEvent* event)
void k_mainwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QTimerEvent*
void k_mainwindow_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QTimerEvent*
void k_mainwindow_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QTimerEvent* event)
void k_mainwindow_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QChildEvent*
void k_mainwindow_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QChildEvent*
void k_mainwindow_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QChildEvent* event)
void k_mainwindow_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param event QEvent*
void k_mainwindow_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param event QEvent*
void k_mainwindow_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QEvent* event)
void k_mainwindow_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param signal QMetaMethod*
void k_mainwindow_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param signal QMetaMethod*
void k_mainwindow_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QMetaMethod* signal)
void k_mainwindow_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param signal QMetaMethod*
void k_mainwindow_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param signal QMetaMethod*
void k_mainwindow_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, QMetaMethod* signal)
void k_mainwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
void k_mainwindow_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
void k_mainwindow_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func()
void k_mainwindow_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
void k_mainwindow_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
void k_mainwindow_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func()
void k_mainwindow_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
void k_mainwindow_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
void k_mainwindow_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback void func()
void k_mainwindow_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
bool k_mainwindow_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
bool k_mainwindow_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback bool func()
void k_mainwindow_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
bool k_mainwindow_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
bool k_mainwindow_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback bool func()
void k_mainwindow_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
QObject* k_mainwindow_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
QObject* k_mainwindow_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback QObject* func()
void k_mainwindow_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
int32_t k_mainwindow_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
int32_t k_mainwindow_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback int32_t func()
void k_mainwindow_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param signal const char*
int32_t k_mainwindow_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param signal const char*
int32_t k_mainwindow_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback int32_t func(KMainWindow* self, const char* signal)
void k_mainwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param signal QMetaMethod*
bool k_mainwindow_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param signal QMetaMethod*
bool k_mainwindow_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback bool func(KMainWindow* self, QMetaMethod* signal)
void k_mainwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMainWindow*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_mainwindow_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMainWindow*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_mainwindow_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMainWindow*
/// @param callback double func(KMainWindow* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_mainwindow_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KMainWindow*
/// @param callback void func(KMainWindow* self, const char* objectName)
void k_mainwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kmainwindow.html#dtor.KMainWindow)
///
/// Delete this object from C++ memory.
///
/// @param self KMainWindow*
void k_mainwindow_delete(void* self);

#endif

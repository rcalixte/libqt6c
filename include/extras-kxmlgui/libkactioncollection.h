#pragma once
#ifndef SRC_EXTRAS_KXMLGUI_QT6C_LIBKACTIONCOLLECTION_H
#define SRC_EXTRAS_KXMLGUI_QT6C_LIBKACTIONCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kactioncollection.html

/// k_actioncollection_new constructs a new KActionCollection object.
///
/// @param parent QObject*
KActionCollection* k_actioncollection_new(void* parent);

/// k_actioncollection_new2 constructs a new KActionCollection object.
///
/// @param parent QObject*
/// @param cName const char*
KActionCollection* k_actioncollection_new2(void* parent, const char* cName);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KActionCollection*
const QMetaObject* k_actioncollection_meta_object(void* self);

/// @param self KActionCollection*
/// @param param1 const char*
void* k_actioncollection_metacast(void* self, const char* param1);

/// @param self KActionCollection*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_actioncollection_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KActionCollection*
/// @param callback int32_t func(KActionCollection* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_actioncollection_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KActionCollection*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_actioncollection_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_actioncollection_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#allCollections)
///
libqt_list /* of KActionCollection* */ k_actioncollection_all_collections();

/// [Qt documentation](https://api.kde.org/kactioncollection.html#clear)
///
/// @param self KActionCollection*
void k_actioncollection_clear(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#associateWidget)
///
/// @param self KActionCollection*
/// @param widget QWidget*
void k_actioncollection_associate_widget(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#addAssociatedWidget)
///
/// @param self KActionCollection*
/// @param widget QWidget*
void k_actioncollection_add_associated_widget(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#removeAssociatedWidget)
///
/// @param self KActionCollection*
/// @param widget QWidget*
void k_actioncollection_remove_associated_widget(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#associatedWidgets)
///
/// @param self KActionCollection*
libqt_list /* of QWidget* */ k_actioncollection_associated_widgets(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#clearAssociatedWidgets)
///
/// @param self KActionCollection*
void k_actioncollection_clear_associated_widgets(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#configGroup)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KActionCollection*
const char* k_actioncollection_config_group(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#configIsGlobal)
///
/// @param self KActionCollection*
bool k_actioncollection_config_is_global(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#setConfigGroup)
///
/// @param self KActionCollection*
/// @param group const char*
void k_actioncollection_set_config_group(void* self, const char* group);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#setConfigGlobal)
///
/// @param self KActionCollection*
/// @param global bool
void k_actioncollection_set_config_global(void* self, bool global);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#readSettings)
///
/// @param self KActionCollection*
void k_actioncollection_read_settings(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#importGlobalShortcuts)
///
/// @param self KActionCollection*
/// @param config KConfigGroup*
void k_actioncollection_import_global_shortcuts(void* self, void* config);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#exportGlobalShortcuts)
///
/// @param self KActionCollection*
/// @param config KConfigGroup*
void k_actioncollection_export_global_shortcuts(void* self, void* config);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#writeSettings)
///
/// @param self KActionCollection*
void k_actioncollection_write_settings(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#count)
///
/// @param self KActionCollection*
int32_t k_actioncollection_count(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#isEmpty)
///
/// @param self KActionCollection*
bool k_actioncollection_is_empty(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#action)
///
/// @param self KActionCollection*
/// @param index int
QAction* k_actioncollection_action(void* self, int index);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#action)
///
/// @param self KActionCollection*
/// @param name const char*
QAction* k_actioncollection_action2(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#actions)
///
/// @param self KActionCollection*
libqt_list /* of QAction* */ k_actioncollection_actions(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#actionsWithoutGroup)
///
/// @param self KActionCollection*
libqt_list /* of QAction* */ k_actioncollection_actions_without_group(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#actionGroups)
///
/// @param self KActionCollection*
libqt_list /* of QActionGroup* */ k_actioncollection_action_groups(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#setComponentName)
///
/// @param self KActionCollection*
/// @param componentName const char*
void k_actioncollection_set_component_name(void* self, const char* componentName);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#componentName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KActionCollection*
const char* k_actioncollection_component_name(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#setComponentDisplayName)
///
/// @param self KActionCollection*
/// @param displayName const char*
void k_actioncollection_set_component_display_name(void* self, const char* displayName);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#componentDisplayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KActionCollection*
const char* k_actioncollection_component_display_name(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#parentGUIClient)
///
/// @param self KActionCollection*
const KXMLGUIClient* k_actioncollection_parent_g_u_i_client(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#inserted)
///
/// @param self KActionCollection*
/// @param action QAction*
void k_actioncollection_inserted(void* self, void* action);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#inserted)
///
/// @param self KActionCollection*
/// @param callback void func(KActionCollection* self, QAction* action)
void k_actioncollection_on_inserted(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kactioncollection.html#changed)
///
/// @param self KActionCollection*
void k_actioncollection_changed(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#changed)
///
/// @param self KActionCollection*
/// @param callback void func(KActionCollection* self)
void k_actioncollection_on_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/kactioncollection.html#actionHovered)
///
/// @param self KActionCollection*
/// @param action QAction*
void k_actioncollection_action_hovered(void* self, void* action);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#actionHovered)
///
/// @param self KActionCollection*
/// @param callback void func(KActionCollection* self, QAction* action)
void k_actioncollection_on_action_hovered(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kactioncollection.html#actionTriggered)
///
/// @param self KActionCollection*
/// @param action QAction*
void k_actioncollection_action_triggered(void* self, void* action);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#actionTriggered)
///
/// @param self KActionCollection*
/// @param callback void func(KActionCollection* self, QAction* action)
void k_actioncollection_on_action_triggered(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kactioncollection.html#connectNotify)
///
/// @param self KActionCollection*
/// @param signal QMetaMethod*
void k_actioncollection_connect_notify(void* self, void* signal);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#connectNotify)
///
/// Allows for overriding the related default method
///
/// @param self KActionCollection*
/// @param callback void func(KActionCollection* self, QMetaMethod* signal)
void k_actioncollection_on_connect_notify(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kactioncollection.html#connectNotify)
///
/// Base class method implementation
///
/// @param self KActionCollection*
/// @param signal QMetaMethod*
void k_actioncollection_qbase_connect_notify(void* self, void* signal);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#slotActionTriggered)
///
/// @param self KActionCollection*
void k_actioncollection_slot_action_triggered(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#slotActionTriggered)
///
/// Allows for overriding the related default method
///
/// @param self KActionCollection*
/// @param callback void func()
void k_actioncollection_on_slot_action_triggered(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kactioncollection.html#slotActionTriggered)
///
/// Base class method implementation
///
/// @param self KActionCollection*
void k_actioncollection_qbase_slot_action_triggered(void* self);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#addAction)
///
/// @param self KActionCollection*
/// @param name const char*
/// @param action QAction*
QAction* k_actioncollection_add_action(void* self, const char* name, void* action);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#addActions)
///
/// @param self KActionCollection*
/// @param actions libqt_list /* of QAction* */
void k_actioncollection_add_actions(void* self, libqt_list actions);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#removeAction)
///
/// @param self KActionCollection*
/// @param action QAction*
void k_actioncollection_remove_action(void* self, void* action);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#takeAction)
///
/// @param self KActionCollection*
/// @param action QAction*
QAction* k_actioncollection_take_action(void* self, void* action);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#addAction)
///
/// @param self KActionCollection*
/// @param actionType enum KStandardActions__StandardAction
QAction* k_actioncollection_add_action2(void* self, int32_t actionType);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#defaultShortcut)
///
/// @param action QAction*
QKeySequence* k_actioncollection_default_shortcut(void* action);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#defaultShortcuts)
///
/// @param action QAction*
libqt_list /* of QKeySequence* */ k_actioncollection_default_shortcuts(void* action);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#setDefaultShortcut)
///
/// @param action QAction*
/// @param shortcut QKeySequence*
void k_actioncollection_set_default_shortcut(void* action, void* shortcut);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#setDefaultShortcuts)
///
/// @param action QAction*
/// @param shortcuts libqt_list /* of QKeySequence* */
void k_actioncollection_set_default_shortcuts(void* action, libqt_list shortcuts);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#isShortcutsConfigurable)
///
/// @param action QAction*
bool k_actioncollection_is_shortcuts_configurable(void* action);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#setShortcutsConfigurable)
///
/// @param action QAction*
/// @param configurable bool
void k_actioncollection_set_shortcuts_configurable(void* action, bool configurable);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_actioncollection_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_actioncollection_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#readSettings)
///
/// @param self KActionCollection*
/// @param config KConfigGroup*
void k_actioncollection_read_settings1(void* self, void* config);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#exportGlobalShortcuts)
///
/// @param self KActionCollection*
/// @param config KConfigGroup*
/// @param writeDefaults bool
void k_actioncollection_export_global_shortcuts2(void* self, void* config, bool writeDefaults);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#writeSettings)
///
/// @param self KActionCollection*
/// @param config KConfigGroup*
void k_actioncollection_write_settings1(void* self, void* config);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#writeSettings)
///
/// @param self KActionCollection*
/// @param config KConfigGroup*
/// @param writeDefaults bool
void k_actioncollection_write_settings2(void* self, void* config, bool writeDefaults);

/// [Qt documentation](https://api.kde.org/kactioncollection.html#writeSettings)
///
/// @param self KActionCollection*
/// @param config KConfigGroup*
/// @param writeDefaults bool
/// @param oneAction QAction*
void k_actioncollection_write_settings3(void* self, void* config, bool writeDefaults, void* oneAction);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KActionCollection*
const char* k_actioncollection_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KActionCollection*
/// @param name char*
void k_actioncollection_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KActionCollection*
bool k_actioncollection_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KActionCollection*
bool k_actioncollection_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KActionCollection*
bool k_actioncollection_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KActionCollection*
bool k_actioncollection_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KActionCollection*
/// @param b bool
bool k_actioncollection_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KActionCollection*
QThread* k_actioncollection_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KActionCollection*
/// @param thread QThread*
bool k_actioncollection_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KActionCollection*
/// @param interval int
int32_t k_actioncollection_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KActionCollection*
/// @param id int
void k_actioncollection_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KActionCollection*
/// @param id enum Qt__TimerId
void k_actioncollection_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KActionCollection*
libqt_list /* of QObject* */ k_actioncollection_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KActionCollection*
/// @param parent QObject*
void k_actioncollection_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KActionCollection*
/// @param filterObj QObject*
void k_actioncollection_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KActionCollection*
/// @param obj QObject*
void k_actioncollection_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_actioncollection_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KActionCollection*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_actioncollection_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_actioncollection_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_actioncollection_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KActionCollection*
void k_actioncollection_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KActionCollection*
void k_actioncollection_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KActionCollection*
/// @param name const char*
/// @param value QVariant*
bool k_actioncollection_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KActionCollection*
/// @param name const char*
QVariant* k_actioncollection_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KActionCollection*
const char** k_actioncollection_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KActionCollection*
QBindingStorage* k_actioncollection_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KActionCollection*
const QBindingStorage* k_actioncollection_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionCollection*
void k_actioncollection_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionCollection*
/// @param callback void func(KActionCollection* self)
void k_actioncollection_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KActionCollection*
QObject* k_actioncollection_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KActionCollection*
/// @param classname const char*
bool k_actioncollection_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KActionCollection*
void k_actioncollection_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KActionCollection*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_actioncollection_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KActionCollection*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_actioncollection_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_actioncollection_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KActionCollection*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_actioncollection_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionCollection*
/// @param param1 QObject*
void k_actioncollection_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionCollection*
/// @param callback void func(KActionCollection* self, QObject* param1)
void k_actioncollection_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCollection*
/// @param event QEvent*
bool k_actioncollection_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCollection*
/// @param event QEvent*
bool k_actioncollection_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCollection*
/// @param callback bool func(KActionCollection* self, QEvent* event)
void k_actioncollection_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCollection*
/// @param watched QObject*
/// @param event QEvent*
bool k_actioncollection_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCollection*
/// @param watched QObject*
/// @param event QEvent*
bool k_actioncollection_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCollection*
/// @param callback bool func(KActionCollection* self, QObject* watched, QEvent* event)
void k_actioncollection_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCollection*
/// @param event QTimerEvent*
void k_actioncollection_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCollection*
/// @param event QTimerEvent*
void k_actioncollection_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCollection*
/// @param callback void func(KActionCollection* self, QTimerEvent* event)
void k_actioncollection_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCollection*
/// @param event QChildEvent*
void k_actioncollection_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCollection*
/// @param event QChildEvent*
void k_actioncollection_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCollection*
/// @param callback void func(KActionCollection* self, QChildEvent* event)
void k_actioncollection_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCollection*
/// @param event QEvent*
void k_actioncollection_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCollection*
/// @param event QEvent*
void k_actioncollection_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCollection*
/// @param callback void func(KActionCollection* self, QEvent* event)
void k_actioncollection_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCollection*
/// @param signal QMetaMethod*
void k_actioncollection_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCollection*
/// @param signal QMetaMethod*
void k_actioncollection_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCollection*
/// @param callback void func(KActionCollection* self, QMetaMethod* signal)
void k_actioncollection_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCollection*
QObject* k_actioncollection_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCollection*
QObject* k_actioncollection_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCollection*
/// @param callback QObject* func()
void k_actioncollection_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCollection*
int32_t k_actioncollection_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCollection*
int32_t k_actioncollection_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCollection*
/// @param callback int32_t func()
void k_actioncollection_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCollection*
/// @param signal const char*
int32_t k_actioncollection_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCollection*
/// @param signal const char*
int32_t k_actioncollection_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCollection*
/// @param callback int32_t func(KActionCollection* self, const char* signal)
void k_actioncollection_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionCollection*
/// @param signal QMetaMethod*
bool k_actioncollection_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionCollection*
/// @param signal QMetaMethod*
bool k_actioncollection_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionCollection*
/// @param callback bool func(KActionCollection* self, QMetaMethod* signal)
void k_actioncollection_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KActionCollection*
/// @param callback void func(KActionCollection* self, const char* objectName)
void k_actioncollection_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kactioncollection.html#dtor.KActionCollection)
///
/// Delete this object from C++ memory.
///
/// @param self KActionCollection*
void k_actioncollection_delete(void* self);

#endif

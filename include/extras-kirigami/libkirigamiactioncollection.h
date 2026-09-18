#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBKIRIGAMIACTIONCOLLECTION_H
#define EXTRAS_KIRIGAMI_LIBKIRIGAMIACTIONCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html)

/// k_kirigamiactioncollection_new constructs a new KirigamiActionCollection object.
///
/// @param parent QObject*
///
KirigamiActionCollection* k_kirigamiactioncollection_new(void* parent);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html)

/// k_kirigamiactioncollection_new2 constructs a new KirigamiActionCollection object.
///
/// @param parent QObject*
/// @param cName const char*
///
KirigamiActionCollection* k_kirigamiactioncollection_new2(void* parent, const char* cName);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KirigamiActionCollection*
///
const QMetaObject* k_kirigamiactioncollection_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KirigamiActionCollection*
/// @param callback const QMetaObject* func()
///
void k_kirigamiactioncollection_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KirigamiActionCollection*
///
const QMetaObject* k_kirigamiactioncollection_super_meta_object(void* self);

/// @param self KirigamiActionCollection*
/// @param param1 const char*
///
void* k_kirigamiactioncollection_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KirigamiActionCollection*
/// @param callback void* func(KirigamiActionCollection* self, const char* param1)
///
void k_kirigamiactioncollection_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KirigamiActionCollection*
/// @param param1 const char*
///
void* k_kirigamiactioncollection_super_metacast(void* self, const char* param1);

/// @param self KirigamiActionCollection*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_kirigamiactioncollection_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KirigamiActionCollection*
/// @param callback int32_t func(KirigamiActionCollection* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_kirigamiactioncollection_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KirigamiActionCollection*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_kirigamiactioncollection_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_kirigamiactioncollection_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#allCollections)
///
/// @return libqt_list of KirigamiActionCollection*
///
libqt_list k_kirigamiactioncollection_all_collections();

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#clear)
///
/// @param self KirigamiActionCollection*
///
void k_kirigamiactioncollection_clear(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#configGroup)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KirigamiActionCollection*
///
const char* k_kirigamiactioncollection_config_group(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#configIsGlobal)
///
/// @param self KirigamiActionCollection*
///
bool k_kirigamiactioncollection_config_is_global(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#setConfigGroup)
///
/// @param self KirigamiActionCollection*
/// @param group const char*
///
void k_kirigamiactioncollection_set_config_group(void* self, const char* group);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#setConfigGlobal)
///
/// @param self KirigamiActionCollection*
/// @param global bool
///
void k_kirigamiactioncollection_set_config_global(void* self, bool global);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#readSettings)
///
/// @param self KirigamiActionCollection*
///
void k_kirigamiactioncollection_read_settings(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#writeSettings)
///
/// @param self KirigamiActionCollection*
///
void k_kirigamiactioncollection_write_settings(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#count)
///
/// @param self KirigamiActionCollection*
///
int32_t k_kirigamiactioncollection_count(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#isEmpty)
///
/// @param self KirigamiActionCollection*
///
bool k_kirigamiactioncollection_is_empty(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#action)
///
/// @param self KirigamiActionCollection*
/// @param index int
///
QAction* k_kirigamiactioncollection_action(void* self, int index);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#action)
///
/// @param self KirigamiActionCollection*
/// @param name const char*
///
QAction* k_kirigamiactioncollection_action2(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#actions)
///
/// @param self KirigamiActionCollection*
///
/// @return libqt_list of QAction*
///
libqt_list k_kirigamiactioncollection_actions(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#actionsWithoutGroup)
///
/// @param self KirigamiActionCollection*
///
/// @return libqt_list of QAction*
///
libqt_list k_kirigamiactioncollection_actions_without_group(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#actionGroups)
///
/// @param self KirigamiActionCollection*
///
/// @return libqt_list of QActionGroup*
///
libqt_list k_kirigamiactioncollection_action_groups(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#setComponentName)
///
/// @param self KirigamiActionCollection*
/// @param componentName const char*
///
void k_kirigamiactioncollection_set_component_name(void* self, const char* componentName);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#componentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KirigamiActionCollection*
///
const char* k_kirigamiactioncollection_component_name(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#setComponentDisplayName)
///
/// @param self KirigamiActionCollection*
/// @param displayName const char*
///
void k_kirigamiactioncollection_set_component_display_name(void* self, const char* displayName);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#componentDisplayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KirigamiActionCollection*
///
const char* k_kirigamiactioncollection_component_display_name(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#inserted)
///
/// @param self KirigamiActionCollection*
/// @param action QAction*
///
void k_kirigamiactioncollection_inserted(void* self, void* action);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#inserted)
///
/// @param self KirigamiActionCollection*
/// @param callback void func(KirigamiActionCollection* self, QAction* action)
///
void k_kirigamiactioncollection_on_inserted(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#changed)
///
/// @param self KirigamiActionCollection*
///
void k_kirigamiactioncollection_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#changed)
///
/// @param self KirigamiActionCollection*
/// @param callback void func(KirigamiActionCollection* self)
///
void k_kirigamiactioncollection_on_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#actionHovered)
///
/// @param self KirigamiActionCollection*
/// @param action QAction*
///
void k_kirigamiactioncollection_action_hovered(void* self, void* action);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#actionHovered)
///
/// @param self KirigamiActionCollection*
/// @param callback void func(KirigamiActionCollection* self, QAction* action)
///
void k_kirigamiactioncollection_on_action_hovered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#actionTriggered)
///
/// @param self KirigamiActionCollection*
/// @param action QAction*
///
void k_kirigamiactioncollection_action_triggered(void* self, void* action);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#actionTriggered)
///
/// @param self KirigamiActionCollection*
/// @param callback void func(KirigamiActionCollection* self, QAction* action)
///
void k_kirigamiactioncollection_on_action_triggered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#connectNotify)
///
/// @param self KirigamiActionCollection*
/// @param signal QMetaMethod*
///
void k_kirigamiactioncollection_connect_notify(void* self, void* signal);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#connectNotify)
///
/// Allows for overriding the related default method
///
/// @param self KirigamiActionCollection*
/// @param callback void func(KirigamiActionCollection* self, QMetaMethod* signal)
///
void k_kirigamiactioncollection_on_connect_notify(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#connectNotify)
///
/// Base class method implementation
///
/// @param self KirigamiActionCollection*
/// @param signal QMetaMethod*
///
void k_kirigamiactioncollection_super_connect_notify(void* self, void* signal);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#slotActionTriggered)
///
/// @param self KirigamiActionCollection*
///
void k_kirigamiactioncollection_slot_action_triggered(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#slotActionTriggered)
///
/// Allows for overriding the related default method
///
/// @param self KirigamiActionCollection*
/// @param callback void func()
///
void k_kirigamiactioncollection_on_slot_action_triggered(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#slotActionTriggered)
///
/// Base class method implementation
///
/// @param self KirigamiActionCollection*
///
void k_kirigamiactioncollection_super_slot_action_triggered(void* self);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#addAction)
///
/// @param self KirigamiActionCollection*
/// @param name const char*
/// @param action QAction*
///
QAction* k_kirigamiactioncollection_add_action(void* self, const char* name, void* action);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#addActions)
///
/// @param self KirigamiActionCollection*
/// @param actions libqt_list of QAction*
///
void k_kirigamiactioncollection_add_actions(void* self, libqt_list actions);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#removeAction)
///
/// @param self KirigamiActionCollection*
/// @param action QAction*
///
void k_kirigamiactioncollection_remove_action(void* self, void* action);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#takeAction)
///
/// @param self KirigamiActionCollection*
/// @param action QAction*
///
QAction* k_kirigamiactioncollection_take_action(void* self, void* action);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#defaultShortcut)
///
/// @param action QAction*
///
QKeySequence* k_kirigamiactioncollection_default_shortcut(void* action);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#defaultShortcuts)
///
/// @param action QAction*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_kirigamiactioncollection_default_shortcuts(void* action);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#setDefaultShortcut)
///
/// @param action QAction*
/// @param shortcut QKeySequence*
///
void k_kirigamiactioncollection_set_default_shortcut(void* action, void* shortcut);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#setDefaultShortcuts)
///
/// @param action QAction*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_kirigamiactioncollection_set_default_shortcuts(void* action, libqt_list shortcuts);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#isShortcutsConfigurable)
///
/// @param action QAction*
///
bool k_kirigamiactioncollection_is_shortcuts_configurable(void* action);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#setShortcutsConfigurable)
///
/// @param action QAction*
/// @param configurable bool
///
void k_kirigamiactioncollection_set_shortcuts_configurable(void* action, bool configurable);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_kirigamiactioncollection_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_kirigamiactioncollection_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#readSettings)
///
/// @param self KirigamiActionCollection*
/// @param config KConfigGroup*
///
void k_kirigamiactioncollection_read_settings1(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#writeSettings)
///
/// @param self KirigamiActionCollection*
/// @param config KConfigGroup*
///
void k_kirigamiactioncollection_write_settings1(void* self, void* config);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#writeSettings)
///
/// @param self KirigamiActionCollection*
/// @param config KConfigGroup*
/// @param writeDefaults bool
///
void k_kirigamiactioncollection_write_settings2(void* self, void* config, bool writeDefaults);

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#writeSettings)
///
/// @param self KirigamiActionCollection*
/// @param config KConfigGroup*
/// @param writeDefaults bool
/// @param oneAction QAction*
///
void k_kirigamiactioncollection_write_settings3(void* self, void* config, bool writeDefaults, void* oneAction);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KirigamiActionCollection*
///
const char* k_kirigamiactioncollection_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KirigamiActionCollection*
/// @param name const char*
///
void k_kirigamiactioncollection_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KirigamiActionCollection*
///
bool k_kirigamiactioncollection_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KirigamiActionCollection*
///
bool k_kirigamiactioncollection_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KirigamiActionCollection*
///
bool k_kirigamiactioncollection_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KirigamiActionCollection*
///
bool k_kirigamiactioncollection_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KirigamiActionCollection*
/// @param b bool
///
bool k_kirigamiactioncollection_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KirigamiActionCollection*
///
QThread* k_kirigamiactioncollection_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KirigamiActionCollection*
/// @param thread QThread*
///
bool k_kirigamiactioncollection_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KirigamiActionCollection*
/// @param interval int
///
int32_t k_kirigamiactioncollection_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KirigamiActionCollection*
/// @param time int64_t of nanoseconds
///
int32_t k_kirigamiactioncollection_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KirigamiActionCollection*
/// @param id int
///
void k_kirigamiactioncollection_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KirigamiActionCollection*
/// @param id enum Qt__TimerId
///
void k_kirigamiactioncollection_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KirigamiActionCollection*
///
/// @return libqt_list of QObject*
///
libqt_list k_kirigamiactioncollection_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KirigamiActionCollection*
/// @param parent QObject*
///
void k_kirigamiactioncollection_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KirigamiActionCollection*
/// @param filterObj QObject*
///
void k_kirigamiactioncollection_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KirigamiActionCollection*
/// @param obj QObject*
///
void k_kirigamiactioncollection_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_kirigamiactioncollection_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_kirigamiactioncollection_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KirigamiActionCollection*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_kirigamiactioncollection_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigamiactioncollection_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_kirigamiactioncollection_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KirigamiActionCollection*
///
bool k_kirigamiactioncollection_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KirigamiActionCollection*
/// @param receiver QObject*
///
bool k_kirigamiactioncollection_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_kirigamiactioncollection_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KirigamiActionCollection*
///
void k_kirigamiactioncollection_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KirigamiActionCollection*
///
void k_kirigamiactioncollection_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KirigamiActionCollection*
/// @param name const char*
/// @param value QVariant*
///
bool k_kirigamiactioncollection_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KirigamiActionCollection*
/// @param name const char*
///
QVariant* k_kirigamiactioncollection_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KirigamiActionCollection*
///
const char** k_kirigamiactioncollection_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KirigamiActionCollection*
///
QBindingStorage* k_kirigamiactioncollection_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KirigamiActionCollection*
///
const QBindingStorage* k_kirigamiactioncollection_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KirigamiActionCollection*
///
void k_kirigamiactioncollection_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KirigamiActionCollection*
/// @param callback void func(KirigamiActionCollection* self)
///
void k_kirigamiactioncollection_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KirigamiActionCollection*
///
QObject* k_kirigamiactioncollection_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KirigamiActionCollection*
/// @param classname const char*
///
bool k_kirigamiactioncollection_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KirigamiActionCollection*
///
void k_kirigamiactioncollection_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KirigamiActionCollection*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_kirigamiactioncollection_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KirigamiActionCollection*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_kirigamiactioncollection_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_kirigamiactioncollection_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_kirigamiactioncollection_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KirigamiActionCollection*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_kirigamiactioncollection_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KirigamiActionCollection*
/// @param signal const char*
///
bool k_kirigamiactioncollection_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KirigamiActionCollection*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_kirigamiactioncollection_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KirigamiActionCollection*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigamiactioncollection_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KirigamiActionCollection*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigamiactioncollection_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KirigamiActionCollection*
/// @param param1 QObject*
///
void k_kirigamiactioncollection_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KirigamiActionCollection*
/// @param callback void func(KirigamiActionCollection* self, QObject* param1)
///
void k_kirigamiactioncollection_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param event QEvent*
///
bool k_kirigamiactioncollection_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param event QEvent*
///
bool k_kirigamiactioncollection_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param callback bool func(KirigamiActionCollection* self, QEvent* event)
///
void k_kirigamiactioncollection_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_kirigamiactioncollection_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_kirigamiactioncollection_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param callback bool func(KirigamiActionCollection* self, QObject* watched, QEvent* event)
///
void k_kirigamiactioncollection_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param event QTimerEvent*
///
void k_kirigamiactioncollection_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param event QTimerEvent*
///
void k_kirigamiactioncollection_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param callback void func(KirigamiActionCollection* self, QTimerEvent* event)
///
void k_kirigamiactioncollection_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param event QChildEvent*
///
void k_kirigamiactioncollection_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param event QChildEvent*
///
void k_kirigamiactioncollection_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param callback void func(KirigamiActionCollection* self, QChildEvent* event)
///
void k_kirigamiactioncollection_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param event QEvent*
///
void k_kirigamiactioncollection_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param event QEvent*
///
void k_kirigamiactioncollection_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param callback void func(KirigamiActionCollection* self, QEvent* event)
///
void k_kirigamiactioncollection_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param signal QMetaMethod*
///
void k_kirigamiactioncollection_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param signal QMetaMethod*
///
void k_kirigamiactioncollection_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param callback void func(KirigamiActionCollection* self, QMetaMethod* signal)
///
void k_kirigamiactioncollection_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KirigamiActionCollection*
///
QObject* k_kirigamiactioncollection_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KirigamiActionCollection*
///
QObject* k_kirigamiactioncollection_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param callback QObject* func()
///
void k_kirigamiactioncollection_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KirigamiActionCollection*
///
int32_t k_kirigamiactioncollection_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KirigamiActionCollection*
///
int32_t k_kirigamiactioncollection_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param callback int32_t func()
///
void k_kirigamiactioncollection_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param signal const char*
///
int32_t k_kirigamiactioncollection_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param signal const char*
///
int32_t k_kirigamiactioncollection_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param callback int32_t func(KirigamiActionCollection* self, const char* signal)
///
void k_kirigamiactioncollection_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param signal QMetaMethod*
///
bool k_kirigamiactioncollection_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param signal QMetaMethod*
///
bool k_kirigamiactioncollection_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KirigamiActionCollection*
/// @param callback bool func(KirigamiActionCollection* self, QMetaMethod* signal)
///
void k_kirigamiactioncollection_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KirigamiActionCollection*
/// @param callback void func(KirigamiActionCollection* self, const char* objectName)
///
void k_kirigamiactioncollection_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kirigamiactioncollection.html#dtor.KirigamiActionCollection)
///
/// Delete this object from C++ memory.
///
/// @param self KirigamiActionCollection*
///
void k_kirigamiactioncollection_delete(void* self);

#endif

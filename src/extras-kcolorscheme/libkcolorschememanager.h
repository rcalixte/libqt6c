#pragma once
#ifndef EXTRAS_KCOLORSCHEME_LIBKCOLORSCHEMEMANAGER_H
#define EXTRAS_KCOLORSCHEME_LIBKCOLORSCHEMEMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcolorschememanager.html)

/// k_colorschememanager_new constructs a new KColorSchemeManager object.
///
KColorSchemeManager* k_colorschememanager_new();

/// [Upstream resources](https://api.kde.org/kcolorschememanager.html)

/// k_colorschememanager_new2 constructs a new KColorSchemeManager object.
///
/// @param parent QObject*
///
KColorSchemeManager* k_colorschememanager_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KColorSchemeManager*
///
const QMetaObject* k_colorschememanager_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KColorSchemeManager*
/// @param callback const QMetaObject* func(const KColorSchemeManager* self)
///
void k_colorschememanager_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KColorSchemeManager*
///
const QMetaObject* k_colorschememanager_super_meta_object(const void* self);

/// @param self KColorSchemeManager*
/// @param param1 const char*
///
void* k_colorschememanager_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KColorSchemeManager*
/// @param callback void* func(KColorSchemeManager* self, const char* param1)
///
void k_colorschememanager_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KColorSchemeManager*
/// @param param1 const char*
///
void* k_colorschememanager_super_metacast(void* self, const char* param1);

/// @param self KColorSchemeManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_colorschememanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KColorSchemeManager*
/// @param callback int32_t func(KColorSchemeManager* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_colorschememanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KColorSchemeManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_colorschememanager_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_colorschememanager_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kcolorschememanager.html#model)
///
/// @param self const KColorSchemeManager*
///
QAbstractItemModel* k_colorschememanager_model(const void* self);

/// [Upstream resources](https://api.kde.org/kcolorschememanager.html#indexForSchemeId)
///
/// @param self const KColorSchemeManager*
/// @param id const char*
///
QModelIndex* k_colorschememanager_index_for_scheme_id(const void* self, const char* id);

/// [Upstream resources](https://api.kde.org/kcolorschememanager.html#indexForScheme)
///
/// @param self const KColorSchemeManager*
/// @param name const char*
///
QModelIndex* k_colorschememanager_index_for_scheme(const void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kcolorschememanager.html#saveSchemeToConfigFile)
///
/// @param self const KColorSchemeManager*
/// @param schemeName const char*
///
void k_colorschememanager_save_scheme_to_config_file(const void* self, const char* schemeName);

/// [Upstream resources](https://api.kde.org/kcolorschememanager.html#setAutosaveChanges)
///
/// @param self KColorSchemeManager*
/// @param autosaveChanges bool
///
void k_colorschememanager_set_autosave_changes(void* self, bool autosaveChanges);

/// [Upstream resources](https://api.kde.org/kcolorschememanager.html#activeSchemeId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KColorSchemeManager*
///
const char* k_colorschememanager_active_scheme_id(const void* self);

/// [Upstream resources](https://api.kde.org/kcolorschememanager.html#activeSchemeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KColorSchemeManager*
///
const char* k_colorschememanager_active_scheme_name(const void* self);

/// [Upstream resources](https://api.kde.org/kcolorschememanager.html#instance)
///
KColorSchemeManager* k_colorschememanager_instance();

/// [Upstream resources](https://api.kde.org/kcolorschememanager.html#activateScheme)
///
/// @param self KColorSchemeManager*
/// @param index QModelIndex*
///
void k_colorschememanager_activate_scheme(void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_colorschememanager_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_colorschememanager_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KColorSchemeManager*
///
const char* k_colorschememanager_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KColorSchemeManager*
/// @param name const char*
///
void k_colorschememanager_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KColorSchemeManager*
///
bool k_colorschememanager_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KColorSchemeManager*
///
bool k_colorschememanager_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KColorSchemeManager*
///
bool k_colorschememanager_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KColorSchemeManager*
///
bool k_colorschememanager_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KColorSchemeManager*
/// @param b bool
///
bool k_colorschememanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KColorSchemeManager*
///
QThread* k_colorschememanager_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KColorSchemeManager*
/// @param thread QThread*
///
bool k_colorschememanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColorSchemeManager*
/// @param interval int
///
int32_t k_colorschememanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColorSchemeManager*
/// @param time int64_t of nanoseconds
///
int32_t k_colorschememanager_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KColorSchemeManager*
/// @param id int
///
void k_colorschememanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KColorSchemeManager*
/// @param id enum Qt__TimerId
///
void k_colorschememanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KColorSchemeManager*
///
/// @return libqt_list of QObject*
///
libqt_list k_colorschememanager_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KColorSchemeManager*
/// @param parent QObject*
///
void k_colorschememanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KColorSchemeManager*
/// @param filterObj QObject*
///
void k_colorschememanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KColorSchemeManager*
/// @param obj QObject*
///
void k_colorschememanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_colorschememanager_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_colorschememanager_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KColorSchemeManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_colorschememanager_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_colorschememanager_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_colorschememanager_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeManager*
///
bool k_colorschememanager_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeManager*
/// @param receiver QObject*
///
bool k_colorschememanager_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_colorschememanager_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KColorSchemeManager*
///
void k_colorschememanager_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KColorSchemeManager*
///
void k_colorschememanager_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KColorSchemeManager*
/// @param name const char*
/// @param value QVariant*
///
bool k_colorschememanager_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KColorSchemeManager*
/// @param name const char*
///
QVariant* k_colorschememanager_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KColorSchemeManager*
///
const char** k_colorschememanager_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KColorSchemeManager*
///
QBindingStorage* k_colorschememanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KColorSchemeManager*
///
const QBindingStorage* k_colorschememanager_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColorSchemeManager*
///
void k_colorschememanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColorSchemeManager*
/// @param callback void func(KColorSchemeManager* self)
///
void k_colorschememanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KColorSchemeManager*
///
QObject* k_colorschememanager_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KColorSchemeManager*
/// @param classname const char*
///
bool k_colorschememanager_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KColorSchemeManager*
///
void k_colorschememanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColorSchemeManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_colorschememanager_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColorSchemeManager*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_colorschememanager_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_colorschememanager_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_colorschememanager_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KColorSchemeManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_colorschememanager_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeManager*
/// @param signal const char*
///
bool k_colorschememanager_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeManager*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_colorschememanager_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeManager*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_colorschememanager_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeManager*
/// @param receiver QObject*
/// @param member const char*
///
bool k_colorschememanager_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColorSchemeManager*
/// @param param1 QObject*
///
void k_colorschememanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColorSchemeManager*
/// @param callback void func(KColorSchemeManager* self, QObject* param1)
///
void k_colorschememanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param event QEvent*
///
bool k_colorschememanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param event QEvent*
///
bool k_colorschememanager_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param callback bool func(KColorSchemeManager* self, QEvent* event)
///
void k_colorschememanager_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_colorschememanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_colorschememanager_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param callback bool func(KColorSchemeManager* self, QObject* watched, QEvent* event)
///
void k_colorschememanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param event QTimerEvent*
///
void k_colorschememanager_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param event QTimerEvent*
///
void k_colorschememanager_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param callback void func(KColorSchemeManager* self, QTimerEvent* event)
///
void k_colorschememanager_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param event QChildEvent*
///
void k_colorschememanager_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param event QChildEvent*
///
void k_colorschememanager_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param callback void func(KColorSchemeManager* self, QChildEvent* event)
///
void k_colorschememanager_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param event QEvent*
///
void k_colorschememanager_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param event QEvent*
///
void k_colorschememanager_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param callback void func(KColorSchemeManager* self, QEvent* event)
///
void k_colorschememanager_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param signal QMetaMethod*
///
void k_colorschememanager_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param signal QMetaMethod*
///
void k_colorschememanager_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param callback void func(KColorSchemeManager* self, QMetaMethod* signal)
///
void k_colorschememanager_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param signal QMetaMethod*
///
void k_colorschememanager_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param signal QMetaMethod*
///
void k_colorschememanager_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeManager*
/// @param callback void func(KColorSchemeManager* self, QMetaMethod* signal)
///
void k_colorschememanager_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeManager*
///
QObject* k_colorschememanager_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeManager*
///
QObject* k_colorschememanager_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KColorSchemeManager*
/// @param callback QObject* func(KColorSchemeManager* self)
///
void k_colorschememanager_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeManager*
///
int32_t k_colorschememanager_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeManager*
///
int32_t k_colorschememanager_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KColorSchemeManager*
/// @param callback int32_t func(KColorSchemeManager* self)
///
void k_colorschememanager_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeManager*
/// @param signal const char*
///
int32_t k_colorschememanager_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeManager*
/// @param signal const char*
///
int32_t k_colorschememanager_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KColorSchemeManager*
/// @param callback int32_t func(KColorSchemeManager* self, const char* signal)
///
void k_colorschememanager_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeManager*
/// @param signal QMetaMethod*
///
bool k_colorschememanager_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeManager*
/// @param signal QMetaMethod*
///
bool k_colorschememanager_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KColorSchemeManager*
/// @param callback bool func(KColorSchemeManager* self, QMetaMethod* signal)
///
void k_colorschememanager_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeManager*
/// @param callback void func(KColorSchemeManager* self, const char* objectName)
///
void k_colorschememanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcolorschememanager.html#dtor.KColorSchemeManager)
///
/// Delete this object from C++ memory.
///
/// @param self KColorSchemeManager*
///
void k_colorschememanager_delete(void* self);

#endif

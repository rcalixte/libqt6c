#pragma once
#ifndef EXTRAS_KGUIADDONS_LIBKCOLORSCHEMEWATCHER_H
#define EXTRAS_KGUIADDONS_LIBKCOLORSCHEMEWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcolorschemewatcher.html)

/// k_colorschemewatcher_new constructs a new KColorSchemeWatcher object.
///
KColorSchemeWatcher* k_colorschemewatcher_new();

/// [Upstream resources](https://api.kde.org/kcolorschemewatcher.html)

/// k_colorschemewatcher_new2 constructs a new KColorSchemeWatcher object.
///
/// @param parent QObject*
///
KColorSchemeWatcher* k_colorschemewatcher_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KColorSchemeWatcher*
///
const QMetaObject* k_colorschemewatcher_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KColorSchemeWatcher*
/// @param callback const QMetaObject* func(const KColorSchemeWatcher* self)
///
void k_colorschemewatcher_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KColorSchemeWatcher*
///
const QMetaObject* k_colorschemewatcher_super_meta_object(const void* self);

/// @param self KColorSchemeWatcher*
/// @param param1 const char*
///
void* k_colorschemewatcher_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KColorSchemeWatcher*
/// @param callback void* func(KColorSchemeWatcher* self, const char* param1)
///
void k_colorschemewatcher_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KColorSchemeWatcher*
/// @param param1 const char*
///
void* k_colorschemewatcher_super_metacast(void* self, const char* param1);

/// @param self KColorSchemeWatcher*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_colorschemewatcher_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KColorSchemeWatcher*
/// @param callback int32_t func(KColorSchemeWatcher* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_colorschemewatcher_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KColorSchemeWatcher*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_colorschemewatcher_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_colorschemewatcher_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kcolorschemewatcher.html#systemPreference)
///
/// @param self const KColorSchemeWatcher*
///
/// @return enum KColorSchemeWatcher__ColorPreference
///
int32_t k_colorschemewatcher_system_preference(const void* self);

/// [Upstream resources](https://api.kde.org/kcolorschemewatcher.html#systemPreferenceChanged)
///
/// @param self KColorSchemeWatcher*
///
void k_colorschemewatcher_system_preference_changed(void* self);

/// [Upstream resources](https://api.kde.org/kcolorschemewatcher.html#systemPreferenceChanged)
///
/// @param self KColorSchemeWatcher*
/// @param callback void func(KColorSchemeWatcher* self)
///
void k_colorschemewatcher_on_system_preference_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_colorschemewatcher_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_colorschemewatcher_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KColorSchemeWatcher*
///
const char* k_colorschemewatcher_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KColorSchemeWatcher*
/// @param name const char*
///
void k_colorschemewatcher_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KColorSchemeWatcher*
///
bool k_colorschemewatcher_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KColorSchemeWatcher*
///
bool k_colorschemewatcher_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KColorSchemeWatcher*
///
bool k_colorschemewatcher_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KColorSchemeWatcher*
///
bool k_colorschemewatcher_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KColorSchemeWatcher*
/// @param b bool
///
bool k_colorschemewatcher_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KColorSchemeWatcher*
///
QThread* k_colorschemewatcher_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KColorSchemeWatcher*
/// @param thread QThread*
///
bool k_colorschemewatcher_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColorSchemeWatcher*
/// @param interval int
///
int32_t k_colorschemewatcher_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColorSchemeWatcher*
/// @param time int64_t of nanoseconds
///
int32_t k_colorschemewatcher_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KColorSchemeWatcher*
/// @param id int
///
void k_colorschemewatcher_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KColorSchemeWatcher*
/// @param id enum Qt__TimerId
///
void k_colorschemewatcher_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KColorSchemeWatcher*
///
/// @return libqt_list of QObject*
///
libqt_list k_colorschemewatcher_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KColorSchemeWatcher*
/// @param parent QObject*
///
void k_colorschemewatcher_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KColorSchemeWatcher*
/// @param filterObj QObject*
///
void k_colorschemewatcher_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KColorSchemeWatcher*
/// @param obj QObject*
///
void k_colorschemewatcher_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_colorschemewatcher_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_colorschemewatcher_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KColorSchemeWatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_colorschemewatcher_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_colorschemewatcher_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_colorschemewatcher_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeWatcher*
///
bool k_colorschemewatcher_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeWatcher*
/// @param receiver QObject*
///
bool k_colorschemewatcher_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_colorschemewatcher_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KColorSchemeWatcher*
///
void k_colorschemewatcher_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KColorSchemeWatcher*
///
void k_colorschemewatcher_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KColorSchemeWatcher*
/// @param name const char*
/// @param value QVariant*
///
bool k_colorschemewatcher_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KColorSchemeWatcher*
/// @param name const char*
///
QVariant* k_colorschemewatcher_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KColorSchemeWatcher*
///
const char** k_colorschemewatcher_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KColorSchemeWatcher*
///
QBindingStorage* k_colorschemewatcher_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KColorSchemeWatcher*
///
const QBindingStorage* k_colorschemewatcher_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColorSchemeWatcher*
///
void k_colorschemewatcher_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColorSchemeWatcher*
/// @param callback void func(KColorSchemeWatcher* self)
///
void k_colorschemewatcher_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KColorSchemeWatcher*
///
QObject* k_colorschemewatcher_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KColorSchemeWatcher*
/// @param classname const char*
///
bool k_colorschemewatcher_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KColorSchemeWatcher*
///
void k_colorschemewatcher_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColorSchemeWatcher*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_colorschemewatcher_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColorSchemeWatcher*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_colorschemewatcher_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_colorschemewatcher_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_colorschemewatcher_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KColorSchemeWatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_colorschemewatcher_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeWatcher*
/// @param signal const char*
///
bool k_colorschemewatcher_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeWatcher*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_colorschemewatcher_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeWatcher*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_colorschemewatcher_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeWatcher*
/// @param receiver QObject*
/// @param member const char*
///
bool k_colorschemewatcher_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColorSchemeWatcher*
/// @param param1 QObject*
///
void k_colorschemewatcher_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColorSchemeWatcher*
/// @param callback void func(KColorSchemeWatcher* self, QObject* param1)
///
void k_colorschemewatcher_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param event QEvent*
///
bool k_colorschemewatcher_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param event QEvent*
///
bool k_colorschemewatcher_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param callback bool func(KColorSchemeWatcher* self, QEvent* event)
///
void k_colorschemewatcher_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_colorschemewatcher_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_colorschemewatcher_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param callback bool func(KColorSchemeWatcher* self, QObject* watched, QEvent* event)
///
void k_colorschemewatcher_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param event QTimerEvent*
///
void k_colorschemewatcher_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param event QTimerEvent*
///
void k_colorschemewatcher_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param callback void func(KColorSchemeWatcher* self, QTimerEvent* event)
///
void k_colorschemewatcher_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param event QChildEvent*
///
void k_colorschemewatcher_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param event QChildEvent*
///
void k_colorschemewatcher_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param callback void func(KColorSchemeWatcher* self, QChildEvent* event)
///
void k_colorschemewatcher_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param event QEvent*
///
void k_colorschemewatcher_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param event QEvent*
///
void k_colorschemewatcher_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param callback void func(KColorSchemeWatcher* self, QEvent* event)
///
void k_colorschemewatcher_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param signal QMetaMethod*
///
void k_colorschemewatcher_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param signal QMetaMethod*
///
void k_colorschemewatcher_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param callback void func(KColorSchemeWatcher* self, QMetaMethod* signal)
///
void k_colorschemewatcher_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param signal QMetaMethod*
///
void k_colorschemewatcher_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param signal QMetaMethod*
///
void k_colorschemewatcher_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param callback void func(KColorSchemeWatcher* self, QMetaMethod* signal)
///
void k_colorschemewatcher_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeWatcher*
///
QObject* k_colorschemewatcher_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeWatcher*
///
QObject* k_colorschemewatcher_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param callback QObject* func(KColorSchemeWatcher* self)
///
void k_colorschemewatcher_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeWatcher*
///
int32_t k_colorschemewatcher_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeWatcher*
///
int32_t k_colorschemewatcher_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param callback int32_t func(KColorSchemeWatcher* self)
///
void k_colorschemewatcher_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeWatcher*
/// @param signal const char*
///
int32_t k_colorschemewatcher_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeWatcher*
/// @param signal const char*
///
int32_t k_colorschemewatcher_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param callback int32_t func(KColorSchemeWatcher* self, const char* signal)
///
void k_colorschemewatcher_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeWatcher*
/// @param signal QMetaMethod*
///
bool k_colorschemewatcher_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeWatcher*
/// @param signal QMetaMethod*
///
bool k_colorschemewatcher_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeWatcher*
/// @param callback bool func(KColorSchemeWatcher* self, QMetaMethod* signal)
///
void k_colorschemewatcher_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeWatcher*
/// @param callback void func(KColorSchemeWatcher* self, const char* objectName)
///
void k_colorschemewatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcolorschemewatcher.html#dtor.KColorSchemeWatcher)
///
/// Delete this object from C++ memory.
///
/// @param self KColorSchemeWatcher*
///
void k_colorschemewatcher_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcolorschemewatcher.html#public-types)

typedef enum {
    KCOLORSCHEMEWATCHER_COLORPREFERENCE_NOPREFERENCE = 0,
    KCOLORSCHEMEWATCHER_COLORPREFERENCE_PREFERDARK = 1,
    KCOLORSCHEMEWATCHER_COLORPREFERENCE_PREFERLIGHT = 2,
    KCOLORSCHEMEWATCHER_COLORPREFERENCE_PREFERHIGHCONTRAST = 3
} KColorSchemeWatcher__ColorPreference;

#endif

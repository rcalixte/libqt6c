#pragma once
#ifndef LIBQOBJECTCLEANUPHANDLER_H
#define LIBQOBJECTCLEANUPHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectcleanuphandler.html)

/// q_objectcleanuphandler_new constructs a new QObjectCleanupHandler object.
///
QObjectCleanupHandler* q_objectcleanuphandler_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QObjectCleanupHandler*
///
const QMetaObject* q_objectcleanuphandler_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QObjectCleanupHandler*
/// @param callback const QMetaObject* func(const QObjectCleanupHandler* self)
///
void q_objectcleanuphandler_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QObjectCleanupHandler*
///
const QMetaObject* q_objectcleanuphandler_super_meta_object(const void* self);

/// @param self QObjectCleanupHandler*
/// @param param1 const char*
///
void* q_objectcleanuphandler_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QObjectCleanupHandler*
/// @param callback void* func(QObjectCleanupHandler* self, const char* param1)
///
void q_objectcleanuphandler_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QObjectCleanupHandler*
/// @param param1 const char*
///
void* q_objectcleanuphandler_super_metacast(void* self, const char* param1);

/// @param self QObjectCleanupHandler*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_objectcleanuphandler_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QObjectCleanupHandler*
/// @param callback int32_t func(QObjectCleanupHandler* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_objectcleanuphandler_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QObjectCleanupHandler*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_objectcleanuphandler_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_objectcleanuphandler_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#add)
///
/// @param self QObjectCleanupHandler*
/// @param object QObject*
///
QObject* q_objectcleanuphandler_add(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#remove)
///
/// @param self QObjectCleanupHandler*
/// @param object QObject*
///
void q_objectcleanuphandler_remove(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#isEmpty)
///
/// @param self const QObjectCleanupHandler*
///
bool q_objectcleanuphandler_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#clear)
///
/// @param self QObjectCleanupHandler*
///
void q_objectcleanuphandler_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_objectcleanuphandler_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_objectcleanuphandler_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QObjectCleanupHandler*
///
const char* q_objectcleanuphandler_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QObjectCleanupHandler*
/// @param name const char*
///
void q_objectcleanuphandler_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QObjectCleanupHandler*
///
bool q_objectcleanuphandler_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QObjectCleanupHandler*
///
bool q_objectcleanuphandler_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QObjectCleanupHandler*
///
bool q_objectcleanuphandler_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QObjectCleanupHandler*
///
bool q_objectcleanuphandler_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QObjectCleanupHandler*
/// @param b bool
///
bool q_objectcleanuphandler_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QObjectCleanupHandler*
///
QThread* q_objectcleanuphandler_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QObjectCleanupHandler*
/// @param thread QThread*
///
bool q_objectcleanuphandler_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QObjectCleanupHandler*
/// @param interval int
///
int32_t q_objectcleanuphandler_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QObjectCleanupHandler*
/// @param time int64_t of nanoseconds
///
int32_t q_objectcleanuphandler_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QObjectCleanupHandler*
/// @param id int
///
void q_objectcleanuphandler_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QObjectCleanupHandler*
/// @param id enum Qt__TimerId
///
void q_objectcleanuphandler_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QObjectCleanupHandler*
///
/// @return libqt_list of QObject*
///
libqt_list q_objectcleanuphandler_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QObjectCleanupHandler*
/// @param parent QObject*
///
void q_objectcleanuphandler_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QObjectCleanupHandler*
/// @param filterObj QObject*
///
void q_objectcleanuphandler_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QObjectCleanupHandler*
/// @param obj QObject*
///
void q_objectcleanuphandler_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_objectcleanuphandler_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_objectcleanuphandler_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QObjectCleanupHandler*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_objectcleanuphandler_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_objectcleanuphandler_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_objectcleanuphandler_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QObjectCleanupHandler*
///
bool q_objectcleanuphandler_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QObjectCleanupHandler*
/// @param receiver QObject*
///
bool q_objectcleanuphandler_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_objectcleanuphandler_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QObjectCleanupHandler*
///
void q_objectcleanuphandler_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QObjectCleanupHandler*
///
void q_objectcleanuphandler_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QObjectCleanupHandler*
/// @param name const char*
/// @param value QVariant*
///
bool q_objectcleanuphandler_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QObjectCleanupHandler*
/// @param name const char*
///
QVariant* q_objectcleanuphandler_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QObjectCleanupHandler*
///
const char** q_objectcleanuphandler_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QObjectCleanupHandler*
///
QBindingStorage* q_objectcleanuphandler_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QObjectCleanupHandler*
///
const QBindingStorage* q_objectcleanuphandler_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObjectCleanupHandler*
///
void q_objectcleanuphandler_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObjectCleanupHandler*
/// @param callback void func(QObjectCleanupHandler* self)
///
void q_objectcleanuphandler_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QObjectCleanupHandler*
///
QObject* q_objectcleanuphandler_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QObjectCleanupHandler*
/// @param classname const char*
///
bool q_objectcleanuphandler_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QObjectCleanupHandler*
///
void q_objectcleanuphandler_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QObjectCleanupHandler*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_objectcleanuphandler_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QObjectCleanupHandler*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_objectcleanuphandler_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_objectcleanuphandler_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_objectcleanuphandler_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QObjectCleanupHandler*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_objectcleanuphandler_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QObjectCleanupHandler*
/// @param signal const char*
///
bool q_objectcleanuphandler_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QObjectCleanupHandler*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_objectcleanuphandler_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QObjectCleanupHandler*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_objectcleanuphandler_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QObjectCleanupHandler*
/// @param receiver QObject*
/// @param member const char*
///
bool q_objectcleanuphandler_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObjectCleanupHandler*
/// @param param1 QObject*
///
void q_objectcleanuphandler_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QObjectCleanupHandler*
/// @param callback void func(QObjectCleanupHandler* self, QObject* param1)
///
void q_objectcleanuphandler_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QEvent*
///
bool q_objectcleanuphandler_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QEvent*
///
bool q_objectcleanuphandler_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback bool func(QObjectCleanupHandler* self, QEvent* event)
///
void q_objectcleanuphandler_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_objectcleanuphandler_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_objectcleanuphandler_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback bool func(QObjectCleanupHandler* self, QObject* watched, QEvent* event)
///
void q_objectcleanuphandler_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QTimerEvent*
///
void q_objectcleanuphandler_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QTimerEvent*
///
void q_objectcleanuphandler_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback void func(QObjectCleanupHandler* self, QTimerEvent* event)
///
void q_objectcleanuphandler_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QChildEvent*
///
void q_objectcleanuphandler_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QChildEvent*
///
void q_objectcleanuphandler_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback void func(QObjectCleanupHandler* self, QChildEvent* event)
///
void q_objectcleanuphandler_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QEvent*
///
void q_objectcleanuphandler_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param event QEvent*
///
void q_objectcleanuphandler_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback void func(QObjectCleanupHandler* self, QEvent* event)
///
void q_objectcleanuphandler_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param signal QMetaMethod*
///
void q_objectcleanuphandler_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param signal QMetaMethod*
///
void q_objectcleanuphandler_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback void func(QObjectCleanupHandler* self, QMetaMethod* signal)
///
void q_objectcleanuphandler_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param signal QMetaMethod*
///
void q_objectcleanuphandler_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param signal QMetaMethod*
///
void q_objectcleanuphandler_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QObjectCleanupHandler*
/// @param callback void func(QObjectCleanupHandler* self, QMetaMethod* signal)
///
void q_objectcleanuphandler_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QObjectCleanupHandler*
///
QObject* q_objectcleanuphandler_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QObjectCleanupHandler*
///
QObject* q_objectcleanuphandler_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QObjectCleanupHandler*
/// @param callback QObject* func(QObjectCleanupHandler* self)
///
void q_objectcleanuphandler_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QObjectCleanupHandler*
///
int32_t q_objectcleanuphandler_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QObjectCleanupHandler*
///
int32_t q_objectcleanuphandler_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QObjectCleanupHandler*
/// @param callback int32_t func(QObjectCleanupHandler* self)
///
void q_objectcleanuphandler_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QObjectCleanupHandler*
/// @param signal const char*
///
int32_t q_objectcleanuphandler_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QObjectCleanupHandler*
/// @param signal const char*
///
int32_t q_objectcleanuphandler_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QObjectCleanupHandler*
/// @param callback int32_t func(QObjectCleanupHandler* self, const char* signal)
///
void q_objectcleanuphandler_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QObjectCleanupHandler*
/// @param signal QMetaMethod*
///
bool q_objectcleanuphandler_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QObjectCleanupHandler*
/// @param signal QMetaMethod*
///
bool q_objectcleanuphandler_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QObjectCleanupHandler*
/// @param callback bool func(QObjectCleanupHandler* self, QMetaMethod* signal)
///
void q_objectcleanuphandler_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QObjectCleanupHandler*
/// @param callback void func(QObjectCleanupHandler* self, const char* objectName)
///
void q_objectcleanuphandler_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobjectcleanuphandler.html#dtor.QObjectCleanupHandler)
///
/// Delete this object from C++ memory.
///
/// @param self QObjectCleanupHandler*
///
void q_objectcleanuphandler_delete(void* self);

#endif

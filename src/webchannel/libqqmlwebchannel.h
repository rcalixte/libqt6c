#pragma once
#ifndef WEBCHANNEL_LIBQQMLWEBCHANNEL_H
#define WEBCHANNEL_LIBQQMLWEBCHANNEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlwebchannel.html)

/// q_qmlwebchannel_new constructs a new QQmlWebChannel object.
///
QQmlWebChannel* q_qmlwebchannel_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlwebchannel.html)

/// q_qmlwebchannel_new2 constructs a new QQmlWebChannel object.
///
/// @param parent QObject*
///
QQmlWebChannel* q_qmlwebchannel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QQmlWebChannel*
///
const QMetaObject* q_qmlwebchannel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQmlWebChannel*
/// @param callback const QMetaObject* func(const QQmlWebChannel* self)
///
void q_qmlwebchannel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QQmlWebChannel*
///
const QMetaObject* q_qmlwebchannel_super_meta_object(const void* self);

/// @param self QQmlWebChannel*
/// @param param1 const char*
///
void* q_qmlwebchannel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQmlWebChannel*
/// @param callback void* func(QQmlWebChannel* self, const char* param1)
///
void q_qmlwebchannel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQmlWebChannel*
/// @param param1 const char*
///
void* q_qmlwebchannel_super_metacast(void* self, const char* param1);

/// @param self QQmlWebChannel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlwebchannel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQmlWebChannel*
/// @param callback int32_t func(QQmlWebChannel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_qmlwebchannel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQmlWebChannel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlwebchannel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_qmlwebchannel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlwebchannel.html#registerObjects)
///
/// @param self QQmlWebChannel*
/// @param objects libqt_map of const char* to QVariant*
///
void q_qmlwebchannel_register_objects(void* self, libqt_map objects);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlwebchannel.html#connectTo)
///
/// @param self QQmlWebChannel*
/// @param transport QObject*
///
void q_qmlwebchannel_connect_to(void* self, void* transport);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlwebchannel.html#disconnectFrom)
///
/// @param self QQmlWebChannel*
/// @param transport QObject*
///
void q_qmlwebchannel_disconnect_from(void* self, void* transport);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_qmlwebchannel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_qmlwebchannel_tr3(const char* s, const char* c, int n);

/// Inherited from QWebChannel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#registeredObjects)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to QObject*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QObject*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const QQmlWebChannel*
///
/// @return libqt_map of const char* to QObject*
///
libqt_map q_qmlwebchannel_registered_objects(const void* self);

/// Inherited from QWebChannel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#registerObject)
///
/// @param self QQmlWebChannel*
/// @param id const char*
/// @param object QObject*
///
void q_qmlwebchannel_register_object(void* self, const char* id, void* object);

/// Inherited from QWebChannel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#deregisterObject)
///
/// @param self QQmlWebChannel*
/// @param object QObject*
///
void q_qmlwebchannel_deregister_object(void* self, void* object);

/// Inherited from QWebChannel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#blockUpdates)
///
/// @param self const QQmlWebChannel*
///
bool q_qmlwebchannel_block_updates(const void* self);

/// Inherited from QWebChannel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#setBlockUpdates)
///
/// @param self QQmlWebChannel*
/// @param block bool
///
void q_qmlwebchannel_set_block_updates(void* self, bool block);

/// Inherited from QWebChannel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#propertyUpdateInterval)
///
/// @param self const QQmlWebChannel*
///
int32_t q_qmlwebchannel_property_update_interval(const void* self);

/// Inherited from QWebChannel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#setPropertyUpdateInterval)
///
/// @param self QQmlWebChannel*
/// @param ms int
///
void q_qmlwebchannel_set_property_update_interval(void* self, int ms);

/// Inherited from QWebChannel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#blockUpdatesChanged)
///
/// @param self QQmlWebChannel*
/// @param block bool
///
void q_qmlwebchannel_block_updates_changed(void* self, bool block);

/// Inherited from QWebChannel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#blockUpdatesChanged)
///
/// @param self QQmlWebChannel*
/// @param callback void func(QQmlWebChannel* self, bool block)
///
void q_qmlwebchannel_on_block_updates_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQmlWebChannel*
///
const char* q_qmlwebchannel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQmlWebChannel*
/// @param name const char*
///
void q_qmlwebchannel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QQmlWebChannel*
///
bool q_qmlwebchannel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QQmlWebChannel*
///
bool q_qmlwebchannel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QQmlWebChannel*
///
bool q_qmlwebchannel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QQmlWebChannel*
///
bool q_qmlwebchannel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQmlWebChannel*
/// @param b bool
///
bool q_qmlwebchannel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QQmlWebChannel*
///
QThread* q_qmlwebchannel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQmlWebChannel*
/// @param thread QThread*
///
bool q_qmlwebchannel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlWebChannel*
/// @param interval int
///
int32_t q_qmlwebchannel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlWebChannel*
/// @param time int64_t of nanoseconds
///
int32_t q_qmlwebchannel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlWebChannel*
/// @param id int
///
void q_qmlwebchannel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlWebChannel*
/// @param id enum Qt__TimerId
///
void q_qmlwebchannel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QQmlWebChannel*
///
/// @return libqt_list of QObject*
///
libqt_list q_qmlwebchannel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQmlWebChannel*
/// @param parent QObject*
///
void q_qmlwebchannel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQmlWebChannel*
/// @param filterObj QObject*
///
void q_qmlwebchannel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQmlWebChannel*
/// @param obj QObject*
///
void q_qmlwebchannel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_qmlwebchannel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_qmlwebchannel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQmlWebChannel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_qmlwebchannel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlwebchannel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_qmlwebchannel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlWebChannel*
///
bool q_qmlwebchannel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlWebChannel*
/// @param receiver QObject*
///
bool q_qmlwebchannel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_qmlwebchannel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QQmlWebChannel*
///
void q_qmlwebchannel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QQmlWebChannel*
///
void q_qmlwebchannel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQmlWebChannel*
/// @param name const char*
/// @param value QVariant*
///
bool q_qmlwebchannel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QQmlWebChannel*
/// @param name const char*
///
QVariant* q_qmlwebchannel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQmlWebChannel*
///
const char** q_qmlwebchannel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlWebChannel*
///
QBindingStorage* q_qmlwebchannel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QQmlWebChannel*
///
const QBindingStorage* q_qmlwebchannel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlWebChannel*
///
void q_qmlwebchannel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlWebChannel*
/// @param callback void func(QQmlWebChannel* self)
///
void q_qmlwebchannel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QQmlWebChannel*
///
QObject* q_qmlwebchannel_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QQmlWebChannel*
/// @param classname const char*
///
bool q_qmlwebchannel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQmlWebChannel*
///
void q_qmlwebchannel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlWebChannel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlwebchannel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlWebChannel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlwebchannel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_qmlwebchannel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_qmlwebchannel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQmlWebChannel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_qmlwebchannel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlWebChannel*
/// @param signal const char*
///
bool q_qmlwebchannel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlWebChannel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_qmlwebchannel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlWebChannel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlwebchannel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlWebChannel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlwebchannel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlWebChannel*
/// @param param1 QObject*
///
void q_qmlwebchannel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlWebChannel*
/// @param callback void func(QQmlWebChannel* self, QObject* param1)
///
void q_qmlwebchannel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param event QEvent*
///
bool q_qmlwebchannel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param event QEvent*
///
bool q_qmlwebchannel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param callback bool func(QQmlWebChannel* self, QEvent* event)
///
void q_qmlwebchannel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlwebchannel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlwebchannel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param callback bool func(QQmlWebChannel* self, QObject* watched, QEvent* event)
///
void q_qmlwebchannel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param event QTimerEvent*
///
void q_qmlwebchannel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param event QTimerEvent*
///
void q_qmlwebchannel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param callback void func(QQmlWebChannel* self, QTimerEvent* event)
///
void q_qmlwebchannel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param event QChildEvent*
///
void q_qmlwebchannel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param event QChildEvent*
///
void q_qmlwebchannel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param callback void func(QQmlWebChannel* self, QChildEvent* event)
///
void q_qmlwebchannel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param event QEvent*
///
void q_qmlwebchannel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param event QEvent*
///
void q_qmlwebchannel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param callback void func(QQmlWebChannel* self, QEvent* event)
///
void q_qmlwebchannel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param signal QMetaMethod*
///
void q_qmlwebchannel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param signal QMetaMethod*
///
void q_qmlwebchannel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param callback void func(QQmlWebChannel* self, QMetaMethod* signal)
///
void q_qmlwebchannel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param signal QMetaMethod*
///
void q_qmlwebchannel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param signal QMetaMethod*
///
void q_qmlwebchannel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param callback void func(QQmlWebChannel* self, QMetaMethod* signal)
///
void q_qmlwebchannel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlWebChannel*
///
QObject* q_qmlwebchannel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlWebChannel*
///
QObject* q_qmlwebchannel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param callback QObject* func(QQmlWebChannel* self)
///
void q_qmlwebchannel_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlWebChannel*
///
int32_t q_qmlwebchannel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlWebChannel*
///
int32_t q_qmlwebchannel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param callback int32_t func(QQmlWebChannel* self)
///
void q_qmlwebchannel_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlWebChannel*
/// @param signal const char*
///
int32_t q_qmlwebchannel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlWebChannel*
/// @param signal const char*
///
int32_t q_qmlwebchannel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param callback int32_t func(QQmlWebChannel* self, const char* signal)
///
void q_qmlwebchannel_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlWebChannel*
/// @param signal QMetaMethod*
///
bool q_qmlwebchannel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlWebChannel*
/// @param signal QMetaMethod*
///
bool q_qmlwebchannel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlWebChannel*
/// @param callback bool func(QQmlWebChannel* self, QMetaMethod* signal)
///
void q_qmlwebchannel_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQmlWebChannel*
/// @param callback void func(QQmlWebChannel* self, const char* objectName)
///
void q_qmlwebchannel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlwebchannel.html#dtor.QQmlWebChannel)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlWebChannel*
///
void q_qmlwebchannel_delete(void* self);

#endif

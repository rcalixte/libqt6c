#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSQT6C_LIBQDBUSVIRTUALOBJECT_H
#define SRC_POSIX_EXTRAS_DBUSQT6C_LIBQDBUSVIRTUALOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qdbusvirtualobject.html

/// q_dbusvirtualobject_new constructs a new QDBusVirtualObject object.
///
QDBusVirtualObject* q_dbusvirtualobject_new();

/// q_dbusvirtualobject_new2 constructs a new QDBusVirtualObject object.
///
/// @param parent QObject*
QDBusVirtualObject* q_dbusvirtualobject_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDBusVirtualObject*
const QMetaObject* q_dbusvirtualobject_meta_object(void* self);

/// @param self QDBusVirtualObject*
/// @param param1 const char*
void* q_dbusvirtualobject_metacast(void* self, const char* param1);

/// @param self QDBusVirtualObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_dbusvirtualobject_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDBusVirtualObject*
/// @param callback int32_t func(QDBusVirtualObject* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_dbusvirtualobject_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDBusVirtualObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_dbusvirtualobject_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_dbusvirtualobject_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusvirtualobject.html#introspect)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusVirtualObject*
/// @param path const char*
const char* q_dbusvirtualobject_introspect(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusvirtualobject.html#introspect)
///
/// Allows for overriding the related default method
///
/// @param self QDBusVirtualObject*
/// @param callback const char* func(QDBusVirtualObject* self, const char* path)
void q_dbusvirtualobject_on_introspect(void* self, const char* (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusvirtualobject.html#introspect)
///
/// Base class method implementation
///
/// @param self QDBusVirtualObject*
/// @param path const char*
const char* q_dbusvirtualobject_qbase_introspect(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusvirtualobject.html#handleMessage)
///
/// @param self QDBusVirtualObject*
/// @param message QDBusMessage*
/// @param connection QDBusConnection*
bool q_dbusvirtualobject_handle_message(void* self, void* message, void* connection);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusvirtualobject.html#handleMessage)
///
/// Allows for overriding the related default method
///
/// @param self QDBusVirtualObject*
/// @param callback bool func(QDBusVirtualObject* self, QDBusMessage* message, QDBusConnection* connection)
void q_dbusvirtualobject_on_handle_message(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusvirtualobject.html#handleMessage)
///
/// Base class method implementation
///
/// @param self QDBusVirtualObject*
/// @param message QDBusMessage*
/// @param connection QDBusConnection*
bool q_dbusvirtualobject_qbase_handle_message(void* self, void* message, void* connection);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_dbusvirtualobject_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_dbusvirtualobject_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusVirtualObject*
const char* q_dbusvirtualobject_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDBusVirtualObject*
/// @param name char*
void q_dbusvirtualobject_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDBusVirtualObject*
bool q_dbusvirtualobject_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDBusVirtualObject*
bool q_dbusvirtualobject_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDBusVirtualObject*
bool q_dbusvirtualobject_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDBusVirtualObject*
bool q_dbusvirtualobject_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDBusVirtualObject*
/// @param b bool
bool q_dbusvirtualobject_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDBusVirtualObject*
QThread* q_dbusvirtualobject_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusVirtualObject*
/// @param thread QThread*
bool q_dbusvirtualobject_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusVirtualObject*
/// @param interval int
int32_t q_dbusvirtualobject_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusVirtualObject*
/// @param id int
void q_dbusvirtualobject_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusVirtualObject*
/// @param id enum Qt__TimerId
void q_dbusvirtualobject_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDBusVirtualObject*
libqt_list /* of QObject* */ q_dbusvirtualobject_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDBusVirtualObject*
/// @param parent QObject*
void q_dbusvirtualobject_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDBusVirtualObject*
/// @param filterObj QObject*
void q_dbusvirtualobject_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDBusVirtualObject*
/// @param obj QObject*
void q_dbusvirtualobject_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_dbusvirtualobject_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusVirtualObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_dbusvirtualobject_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_dbusvirtualobject_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_dbusvirtualobject_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDBusVirtualObject*
void q_dbusvirtualobject_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDBusVirtualObject*
void q_dbusvirtualobject_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDBusVirtualObject*
/// @param name const char*
/// @param value QVariant*
bool q_dbusvirtualobject_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDBusVirtualObject*
/// @param name const char*
QVariant* q_dbusvirtualobject_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusVirtualObject*
const char** q_dbusvirtualobject_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusVirtualObject*
QBindingStorage* q_dbusvirtualobject_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusVirtualObject*
const QBindingStorage* q_dbusvirtualobject_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusVirtualObject*
void q_dbusvirtualobject_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusVirtualObject*
/// @param callback void func(QDBusVirtualObject* self)
void q_dbusvirtualobject_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDBusVirtualObject*
QObject* q_dbusvirtualobject_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDBusVirtualObject*
/// @param classname const char*
bool q_dbusvirtualobject_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDBusVirtualObject*
void q_dbusvirtualobject_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusVirtualObject*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_dbusvirtualobject_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusVirtualObject*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_dbusvirtualobject_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_dbusvirtualobject_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusVirtualObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_dbusvirtualobject_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusVirtualObject*
/// @param param1 QObject*
void q_dbusvirtualobject_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusVirtualObject*
/// @param callback void func(QDBusVirtualObject* self, QObject* param1)
void q_dbusvirtualobject_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param event QEvent*
bool q_dbusvirtualobject_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param event QEvent*
bool q_dbusvirtualobject_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param callback bool func(QDBusVirtualObject* self, QEvent* event)
void q_dbusvirtualobject_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param watched QObject*
/// @param event QEvent*
bool q_dbusvirtualobject_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param watched QObject*
/// @param event QEvent*
bool q_dbusvirtualobject_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param callback bool func(QDBusVirtualObject* self, QObject* watched, QEvent* event)
void q_dbusvirtualobject_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param event QTimerEvent*
void q_dbusvirtualobject_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param event QTimerEvent*
void q_dbusvirtualobject_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param callback void func(QDBusVirtualObject* self, QTimerEvent* event)
void q_dbusvirtualobject_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param event QChildEvent*
void q_dbusvirtualobject_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param event QChildEvent*
void q_dbusvirtualobject_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param callback void func(QDBusVirtualObject* self, QChildEvent* event)
void q_dbusvirtualobject_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param event QEvent*
void q_dbusvirtualobject_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param event QEvent*
void q_dbusvirtualobject_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param callback void func(QDBusVirtualObject* self, QEvent* event)
void q_dbusvirtualobject_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param signal QMetaMethod*
void q_dbusvirtualobject_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param signal QMetaMethod*
void q_dbusvirtualobject_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param callback void func(QDBusVirtualObject* self, QMetaMethod* signal)
void q_dbusvirtualobject_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param signal QMetaMethod*
void q_dbusvirtualobject_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param signal QMetaMethod*
void q_dbusvirtualobject_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param callback void func(QDBusVirtualObject* self, QMetaMethod* signal)
void q_dbusvirtualobject_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusVirtualObject*
QObject* q_dbusvirtualobject_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusVirtualObject*
QObject* q_dbusvirtualobject_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param callback QObject* func()
void q_dbusvirtualobject_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusVirtualObject*
int32_t q_dbusvirtualobject_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusVirtualObject*
int32_t q_dbusvirtualobject_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param callback int32_t func()
void q_dbusvirtualobject_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param signal const char*
int32_t q_dbusvirtualobject_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param signal const char*
int32_t q_dbusvirtualobject_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param callback int32_t func(QDBusVirtualObject* self, const char* signal)
void q_dbusvirtualobject_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param signal QMetaMethod*
bool q_dbusvirtualobject_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param signal QMetaMethod*
bool q_dbusvirtualobject_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusVirtualObject*
/// @param callback bool func(QDBusVirtualObject* self, QMetaMethod* signal)
void q_dbusvirtualobject_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDBusVirtualObject*
/// @param callback void func(QDBusVirtualObject* self, const char* objectName)
void q_dbusvirtualobject_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusvirtualobject.html#dtor.QDBusVirtualObject)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusVirtualObject*
void q_dbusvirtualobject_delete(void* self);

#endif

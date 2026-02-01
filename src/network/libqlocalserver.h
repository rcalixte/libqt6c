#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQLOCALSERVER_H
#define SRC_NETWORK_QT6C_LIBQLOCALSERVER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html)

/// q_localserver_new constructs a new QLocalServer object.
///
QLocalServer* q_localserver_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html)

/// q_localserver_new2 constructs a new QLocalServer object.
///
/// @param parent QObject*
///
QLocalServer* q_localserver_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QLocalServer*
///
const QMetaObject* q_localserver_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QLocalServer*
/// @param callback const QMetaObject* func()
///
void q_localserver_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QLocalServer*
///
const QMetaObject* q_localserver_qbase_meta_object(void* self);

/// @param self QLocalServer*
/// @param param1 const char*
///
void* q_localserver_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QLocalServer*
/// @param callback void* func(QLocalServer* self, const char* param1)
///
void q_localserver_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QLocalServer*
/// @param param1 const char*
///
void* q_localserver_qbase_metacast(void* self, const char* param1);

/// @param self QLocalServer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_localserver_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QLocalServer*
/// @param callback int32_t func(QLocalServer* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_localserver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QLocalServer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_localserver_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_localserver_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#newConnection)
///
/// @param self QLocalServer*
///
void q_localserver_new_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#newConnection)
///
/// @param self QLocalServer*
/// @param callback void func(QLocalServer* self)
///
void q_localserver_on_new_connection(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#close)
///
/// @param self QLocalServer*
///
void q_localserver_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLocalServer*
///
const char* q_localserver_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#hasPendingConnections)
///
/// @param self QLocalServer*
///
bool q_localserver_has_pending_connections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#hasPendingConnections)
///
/// Allows for overriding the related default method
///
/// @param self QLocalServer*
/// @param callback bool func()
///
void q_localserver_on_has_pending_connections(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#hasPendingConnections)
///
/// Base class method implementation
///
/// @param self QLocalServer*
///
bool q_localserver_qbase_has_pending_connections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#isListening)
///
/// @param self QLocalServer*
///
bool q_localserver_is_listening(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#listen)
///
/// @param self QLocalServer*
/// @param name const char*
///
bool q_localserver_listen(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#listen)
///
/// @param self QLocalServer*
/// @param socketDescriptor intptr_t
///
bool q_localserver_listen2(void* self, intptr_t socketDescriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#maxPendingConnections)
///
/// @param self QLocalServer*
///
int32_t q_localserver_max_pending_connections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#nextPendingConnection)
///
/// @param self QLocalServer*
///
QLocalSocket* q_localserver_next_pending_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#nextPendingConnection)
///
/// Allows for overriding the related default method
///
/// @param self QLocalServer*
/// @param callback QLocalSocket* func()
///
void q_localserver_on_next_pending_connection(void* self, QLocalSocket* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#nextPendingConnection)
///
/// Base class method implementation
///
/// @param self QLocalServer*
///
QLocalSocket* q_localserver_qbase_next_pending_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#serverName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLocalServer*
///
const char* q_localserver_server_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#fullServerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLocalServer*
///
const char* q_localserver_full_server_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#removeServer)
///
/// @param name const char*
///
bool q_localserver_remove_server(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#serverError)
///
/// @param self QLocalServer*
///
/// @return enum QAbstractSocket__SocketError
///
int32_t q_localserver_server_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#setMaxPendingConnections)
///
/// @param self QLocalServer*
/// @param numConnections int
///
void q_localserver_set_max_pending_connections(void* self, int numConnections);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#waitForNewConnection)
///
/// @param self QLocalServer*
///
bool q_localserver_wait_for_new_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#setListenBacklogSize)
///
/// @param self QLocalServer*
/// @param size int
///
void q_localserver_set_listen_backlog_size(void* self, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#listenBacklogSize)
///
/// @param self QLocalServer*
///
int32_t q_localserver_listen_backlog_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#setSocketOptions)
///
/// @param self QLocalServer*
/// @param options flag of enum QLocalServer__SocketOption
///
void q_localserver_set_socket_options(void* self, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#socketOptions)
///
/// @param self QLocalServer*
///
/// @return flag of enum QLocalServer__SocketOption
///
int32_t q_localserver_socket_options(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#socketDescriptor)
///
/// @param self QLocalServer*
///
intptr_t q_localserver_socket_descriptor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#incomingConnection)
///
/// @param self QLocalServer*
/// @param socketDescriptor uintptr_t
///
void q_localserver_incoming_connection(void* self, uintptr_t socketDescriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#incomingConnection)
///
/// Allows for overriding the related default method
///
/// @param self QLocalServer*
/// @param callback void func(QLocalServer* self, uintptr_t socketDescriptor)
///
void q_localserver_on_incoming_connection(void* self, void (*callback)(void*, uintptr_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#incomingConnection)
///
/// Base class method implementation
///
/// @param self QLocalServer*
/// @param socketDescriptor uintptr_t
///
void q_localserver_qbase_incoming_connection(void* self, uintptr_t socketDescriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#addPendingConnection)
///
/// @param self QLocalServer*
/// @param socket QLocalSocket*
///
void q_localserver_add_pending_connection(void* self, void* socket);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#addPendingConnection)
///
/// Allows for overriding the related default method
///
/// @param self QLocalServer*
/// @param callback void func(QLocalServer* self, QLocalSocket* socket)
///
void q_localserver_on_add_pending_connection(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#addPendingConnection)
///
/// Base class method implementation
///
/// @param self QLocalServer*
/// @param socket QLocalSocket*
///
void q_localserver_qbase_add_pending_connection(void* self, void* socket);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_localserver_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_localserver_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#waitForNewConnection)
///
/// @param self QLocalServer*
/// @param msec int
///
bool q_localserver_wait_for_new_connection1(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#waitForNewConnection)
///
/// @param self QLocalServer*
/// @param msec int
/// @param timedOut bool*
///
bool q_localserver_wait_for_new_connection2(void* self, int msec, bool* timedOut);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLocalServer*
///
const char* q_localserver_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLocalServer*
/// @param name char*
///
void q_localserver_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QLocalServer*
///
bool q_localserver_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QLocalServer*
///
bool q_localserver_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QLocalServer*
///
bool q_localserver_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QLocalServer*
///
bool q_localserver_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLocalServer*
/// @param b bool
///
bool q_localserver_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QLocalServer*
///
QThread* q_localserver_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLocalServer*
/// @param thread QThread*
///
bool q_localserver_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLocalServer*
/// @param interval int
///
int32_t q_localserver_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLocalServer*
/// @param time int64_t of nanoseconds
///
int32_t q_localserver_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLocalServer*
/// @param id int
///
void q_localserver_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLocalServer*
/// @param id enum Qt__TimerId
///
void q_localserver_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QLocalServer*
///
/// @return libqt_list of QObject*
///
libqt_list q_localserver_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QLocalServer*
/// @param parent QObject*
///
void q_localserver_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLocalServer*
/// @param filterObj QObject*
///
void q_localserver_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLocalServer*
/// @param obj QObject*
///
void q_localserver_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_localserver_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_localserver_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLocalServer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_localserver_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_localserver_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_localserver_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLocalServer*
///
bool q_localserver_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLocalServer*
/// @param receiver QObject*
///
bool q_localserver_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_localserver_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QLocalServer*
///
void q_localserver_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QLocalServer*
///
void q_localserver_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLocalServer*
/// @param name const char*
/// @param value QVariant*
///
bool q_localserver_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QLocalServer*
/// @param name const char*
///
QVariant* q_localserver_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLocalServer*
///
const char** q_localserver_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLocalServer*
///
QBindingStorage* q_localserver_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLocalServer*
///
const QBindingStorage* q_localserver_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLocalServer*
///
void q_localserver_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLocalServer*
/// @param callback void func(QLocalServer* self)
///
void q_localserver_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QLocalServer*
///
QObject* q_localserver_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QLocalServer*
/// @param classname const char*
///
bool q_localserver_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLocalServer*
///
void q_localserver_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLocalServer*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_localserver_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLocalServer*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_localserver_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_localserver_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_localserver_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLocalServer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_localserver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLocalServer*
/// @param signal const char*
///
bool q_localserver_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLocalServer*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_localserver_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLocalServer*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_localserver_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLocalServer*
/// @param receiver QObject*
/// @param member const char*
///
bool q_localserver_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLocalServer*
/// @param param1 QObject*
///
void q_localserver_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLocalServer*
/// @param callback void func(QLocalServer* self, QObject* param1)
///
void q_localserver_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalServer*
/// @param event QEvent*
///
bool q_localserver_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalServer*
/// @param event QEvent*
///
bool q_localserver_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalServer*
/// @param callback bool func(QLocalServer* self, QEvent* event)
///
void q_localserver_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalServer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_localserver_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalServer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_localserver_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalServer*
/// @param callback bool func(QLocalServer* self, QObject* watched, QEvent* event)
///
void q_localserver_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalServer*
/// @param event QTimerEvent*
///
void q_localserver_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalServer*
/// @param event QTimerEvent*
///
void q_localserver_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalServer*
/// @param callback void func(QLocalServer* self, QTimerEvent* event)
///
void q_localserver_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalServer*
/// @param event QChildEvent*
///
void q_localserver_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalServer*
/// @param event QChildEvent*
///
void q_localserver_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalServer*
/// @param callback void func(QLocalServer* self, QChildEvent* event)
///
void q_localserver_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalServer*
/// @param event QEvent*
///
void q_localserver_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalServer*
/// @param event QEvent*
///
void q_localserver_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalServer*
/// @param callback void func(QLocalServer* self, QEvent* event)
///
void q_localserver_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalServer*
/// @param signal QMetaMethod*
///
void q_localserver_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalServer*
/// @param signal QMetaMethod*
///
void q_localserver_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalServer*
/// @param callback void func(QLocalServer* self, QMetaMethod* signal)
///
void q_localserver_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalServer*
/// @param signal QMetaMethod*
///
void q_localserver_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalServer*
/// @param signal QMetaMethod*
///
void q_localserver_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalServer*
/// @param callback void func(QLocalServer* self, QMetaMethod* signal)
///
void q_localserver_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalServer*
///
QObject* q_localserver_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalServer*
///
QObject* q_localserver_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalServer*
/// @param callback QObject* func()
///
void q_localserver_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalServer*
///
int32_t q_localserver_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalServer*
///
int32_t q_localserver_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalServer*
/// @param callback int32_t func()
///
void q_localserver_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalServer*
/// @param signal const char*
///
int32_t q_localserver_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalServer*
/// @param signal const char*
///
int32_t q_localserver_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalServer*
/// @param callback int32_t func(QLocalServer* self, const char* signal)
///
void q_localserver_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalServer*
/// @param signal QMetaMethod*
///
bool q_localserver_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalServer*
/// @param signal QMetaMethod*
///
bool q_localserver_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalServer*
/// @param callback bool func(QLocalServer* self, QMetaMethod* signal)
///
void q_localserver_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLocalServer*
/// @param callback void func(QLocalServer* self, const char* objectName)
///
void q_localserver_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#dtor.QLocalServer)
///
/// Delete this object from C++ memory.
///
/// @param self QLocalServer*
///
void q_localserver_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#public-types)

typedef enum {
    QLOCALSERVER_SOCKETOPTION_NOOPTIONS = 0,
    QLOCALSERVER_SOCKETOPTION_USERACCESSOPTION = 1,
    QLOCALSERVER_SOCKETOPTION_GROUPACCESSOPTION = 2,
    QLOCALSERVER_SOCKETOPTION_OTHERACCESSOPTION = 4,
    QLOCALSERVER_SOCKETOPTION_WORLDACCESSOPTION = 7,
    QLOCALSERVER_SOCKETOPTION_ABSTRACTNAMESPACEOPTION = 8
} QLocalServer__SocketOption;

#endif

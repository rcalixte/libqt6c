#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQTCPSERVER_H
#define SRC_NETWORK_QT6C_LIBQTCPSERVER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html)

/// q_tcpserver_new constructs a new QTcpServer object.
///
QTcpServer* q_tcpserver_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html)

/// q_tcpserver_new2 constructs a new QTcpServer object.
///
/// @param parent QObject*
///
QTcpServer* q_tcpserver_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTcpServer*
///
const QMetaObject* q_tcpserver_meta_object(void* self);

/// @param self QTcpServer*
/// @param param1 const char*
///
void* q_tcpserver_metacast(void* self, const char* param1);

/// @param self QTcpServer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_tcpserver_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTcpServer*
/// @param callback int32_t func(QTcpServer* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_tcpserver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTcpServer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_tcpserver_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_tcpserver_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// @param self QTcpServer*
///
bool q_tcpserver_listen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#close)
///
/// @param self QTcpServer*
///
void q_tcpserver_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
///
/// @param self QTcpServer*
///
bool q_tcpserver_is_listening(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
///
/// @param self QTcpServer*
/// @param numConnections int
///
void q_tcpserver_set_max_pending_connections(void* self, int numConnections);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
///
/// @param self QTcpServer*
///
int32_t q_tcpserver_max_pending_connections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
///
/// @param self QTcpServer*
/// @param size int
///
void q_tcpserver_set_listen_backlog_size(void* self, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
///
/// @param self QTcpServer*
///
int32_t q_tcpserver_listen_backlog_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
///
/// @param self QTcpServer*
///
unsigned short q_tcpserver_server_port(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
///
/// @param self QTcpServer*
///
QHostAddress* q_tcpserver_server_address(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
///
/// @param self QTcpServer*
///
intptr_t q_tcpserver_socket_descriptor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
///
/// @param self QTcpServer*
/// @param socketDescriptor intptr_t
///
bool q_tcpserver_set_socket_descriptor(void* self, intptr_t socketDescriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// @param self QTcpServer*
///
bool q_tcpserver_wait_for_new_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// @param self QTcpServer*
///
bool q_tcpserver_has_pending_connections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Allows for overriding the related default method
///
/// @param self QTcpServer*
/// @param callback bool func()
///
void q_tcpserver_on_has_pending_connections(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Base class method implementation
///
/// @param self QTcpServer*
///
bool q_tcpserver_qbase_has_pending_connections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// @param self QTcpServer*
///
QTcpSocket* q_tcpserver_next_pending_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Allows for overriding the related default method
///
/// @param self QTcpServer*
/// @param callback QTcpSocket* func()
///
void q_tcpserver_on_next_pending_connection(void* self, QTcpSocket* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Base class method implementation
///
/// @param self QTcpServer*
///
QTcpSocket* q_tcpserver_qbase_next_pending_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
///
/// @param self QTcpServer*
///
/// @return enum QAbstractSocket__SocketError
///
int32_t q_tcpserver_server_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTcpServer*
///
const char* q_tcpserver_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
///
/// @param self QTcpServer*
///
void q_tcpserver_pause_accepting(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
///
/// @param self QTcpServer*
///
void q_tcpserver_resume_accepting(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
///
/// @param self QTcpServer*
/// @param networkProxy QNetworkProxy*
///
void q_tcpserver_set_proxy(void* self, void* networkProxy);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
///
/// @param self QTcpServer*
///
QNetworkProxy* q_tcpserver_proxy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#incomingConnection)
///
/// @param self QTcpServer*
/// @param handle intptr_t
///
void q_tcpserver_incoming_connection(void* self, intptr_t handle);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#incomingConnection)
///
/// Allows for overriding the related default method
///
/// @param self QTcpServer*
/// @param callback void func(QTcpServer* self, intptr_t handle)
///
void q_tcpserver_on_incoming_connection(void* self, void (*callback)(void*, intptr_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#incomingConnection)
///
/// Base class method implementation
///
/// @param self QTcpServer*
/// @param handle intptr_t
///
void q_tcpserver_qbase_incoming_connection(void* self, intptr_t handle);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// @param self QTcpServer*
/// @param socket QTcpSocket*
///
void q_tcpserver_add_pending_connection(void* self, void* socket);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Allows for overriding the related default method
///
/// @param self QTcpServer*
/// @param callback void func(QTcpServer* self, QTcpSocket* socket)
///
void q_tcpserver_on_add_pending_connection(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Base class method implementation
///
/// @param self QTcpServer*
/// @param socket QTcpSocket*
///
void q_tcpserver_qbase_add_pending_connection(void* self, void* socket);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
///
/// @param self QTcpServer*
///
void q_tcpserver_new_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
///
/// @param self QTcpServer*
/// @param callback void func(QTcpServer* self)
///
void q_tcpserver_on_new_connection(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
///
/// @param self QTcpServer*
/// @param socketError enum QAbstractSocket__SocketError
///
void q_tcpserver_accept_error(void* self, int32_t socketError);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
///
/// @param self QTcpServer*
/// @param callback void func(QTcpServer* self, enum QAbstractSocket__SocketError socketError)
///
void q_tcpserver_on_accept_error(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_tcpserver_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_tcpserver_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// @param self QTcpServer*
/// @param address QHostAddress*
///
bool q_tcpserver_listen1(void* self, void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// @param self QTcpServer*
/// @param address QHostAddress*
/// @param port unsigned short
///
bool q_tcpserver_listen2(void* self, void* address, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// @param self QTcpServer*
/// @param msec int
///
bool q_tcpserver_wait_for_new_connection1(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// @param self QTcpServer*
/// @param msec int
/// @param timedOut bool*
///
bool q_tcpserver_wait_for_new_connection2(void* self, int msec, bool* timedOut);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTcpServer*
///
const char* q_tcpserver_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTcpServer*
/// @param name char*
///
void q_tcpserver_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTcpServer*
///
bool q_tcpserver_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTcpServer*
///
bool q_tcpserver_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTcpServer*
///
bool q_tcpserver_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTcpServer*
///
bool q_tcpserver_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTcpServer*
/// @param b bool
///
bool q_tcpserver_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTcpServer*
///
QThread* q_tcpserver_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTcpServer*
/// @param thread QThread*
///
bool q_tcpserver_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTcpServer*
/// @param interval int
///
int32_t q_tcpserver_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTcpServer*
/// @param id int
///
void q_tcpserver_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTcpServer*
/// @param id enum Qt__TimerId
///
void q_tcpserver_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTcpServer*
///
libqt_list /* of QObject* */ q_tcpserver_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTcpServer*
/// @param parent QObject*
///
void q_tcpserver_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTcpServer*
/// @param filterObj QObject*
///
void q_tcpserver_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTcpServer*
/// @param obj QObject*
///
void q_tcpserver_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_tcpserver_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTcpServer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_tcpserver_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_tcpserver_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_tcpserver_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTcpServer*
///
void q_tcpserver_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTcpServer*
///
void q_tcpserver_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTcpServer*
/// @param name const char*
/// @param value QVariant*
///
bool q_tcpserver_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTcpServer*
/// @param name const char*
///
QVariant* q_tcpserver_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTcpServer*
///
const char** q_tcpserver_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTcpServer*
///
QBindingStorage* q_tcpserver_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTcpServer*
///
const QBindingStorage* q_tcpserver_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTcpServer*
///
void q_tcpserver_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTcpServer*
/// @param callback void func(QTcpServer* self)
///
void q_tcpserver_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTcpServer*
///
QObject* q_tcpserver_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTcpServer*
/// @param classname const char*
///
bool q_tcpserver_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTcpServer*
///
void q_tcpserver_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTcpServer*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_tcpserver_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTcpServer*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_tcpserver_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_tcpserver_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTcpServer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_tcpserver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTcpServer*
/// @param param1 QObject*
///
void q_tcpserver_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTcpServer*
/// @param callback void func(QTcpServer* self, QObject* param1)
///
void q_tcpserver_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTcpServer*
/// @param event QEvent*
///
bool q_tcpserver_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTcpServer*
/// @param event QEvent*
///
bool q_tcpserver_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTcpServer*
/// @param callback bool func(QTcpServer* self, QEvent* event)
///
void q_tcpserver_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTcpServer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_tcpserver_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTcpServer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_tcpserver_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTcpServer*
/// @param callback bool func(QTcpServer* self, QObject* watched, QEvent* event)
///
void q_tcpserver_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTcpServer*
/// @param event QTimerEvent*
///
void q_tcpserver_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTcpServer*
/// @param event QTimerEvent*
///
void q_tcpserver_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTcpServer*
/// @param callback void func(QTcpServer* self, QTimerEvent* event)
///
void q_tcpserver_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTcpServer*
/// @param event QChildEvent*
///
void q_tcpserver_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTcpServer*
/// @param event QChildEvent*
///
void q_tcpserver_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTcpServer*
/// @param callback void func(QTcpServer* self, QChildEvent* event)
///
void q_tcpserver_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTcpServer*
/// @param event QEvent*
///
void q_tcpserver_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTcpServer*
/// @param event QEvent*
///
void q_tcpserver_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTcpServer*
/// @param callback void func(QTcpServer* self, QEvent* event)
///
void q_tcpserver_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTcpServer*
/// @param signal QMetaMethod*
///
void q_tcpserver_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTcpServer*
/// @param signal QMetaMethod*
///
void q_tcpserver_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTcpServer*
/// @param callback void func(QTcpServer* self, QMetaMethod* signal)
///
void q_tcpserver_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTcpServer*
/// @param signal QMetaMethod*
///
void q_tcpserver_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTcpServer*
/// @param signal QMetaMethod*
///
void q_tcpserver_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTcpServer*
/// @param callback void func(QTcpServer* self, QMetaMethod* signal)
///
void q_tcpserver_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTcpServer*
///
QObject* q_tcpserver_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTcpServer*
///
QObject* q_tcpserver_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTcpServer*
/// @param callback QObject* func()
///
void q_tcpserver_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTcpServer*
///
int32_t q_tcpserver_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTcpServer*
///
int32_t q_tcpserver_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTcpServer*
/// @param callback int32_t func()
///
void q_tcpserver_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTcpServer*
/// @param signal const char*
///
int32_t q_tcpserver_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTcpServer*
/// @param signal const char*
///
int32_t q_tcpserver_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTcpServer*
/// @param callback int32_t func(QTcpServer* self, const char* signal)
///
void q_tcpserver_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTcpServer*
/// @param signal QMetaMethod*
///
bool q_tcpserver_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTcpServer*
/// @param signal QMetaMethod*
///
bool q_tcpserver_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTcpServer*
/// @param callback bool func(QTcpServer* self, QMetaMethod* signal)
///
void q_tcpserver_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#pendingConnectionAvailable)
///
/// Wrapper to allow calling private signal
///
/// @param self QTcpServer*
/// @param callback void func(QTcpServer* self)
///
void q_tcpserver_on_pending_connection_available(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTcpServer*
/// @param callback void func(QTcpServer* self, const char* objectName)
///
void q_tcpserver_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#dtor.QTcpServer)
///
/// Delete this object from C++ memory.
///
/// @param self QTcpServer*
///
void q_tcpserver_delete(void* self);

#endif

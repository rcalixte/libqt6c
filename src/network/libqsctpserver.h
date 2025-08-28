#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSCTPSERVER_H
#define SRC_NETWORKQT6C_LIBQSCTPSERVER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsctpserver.html

/// q_sctpserver_new constructs a new QSctpServer object.
///
QSctpServer* q_sctpserver_new();

/// q_sctpserver_new2 constructs a new QSctpServer object.
///
/// @param parent QObject*
QSctpServer* q_sctpserver_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSctpServer*
const QMetaObject* q_sctpserver_meta_object(void* self);

/// @param self QSctpServer*
/// @param param1 const char*
void* q_sctpserver_metacast(void* self, const char* param1);

/// @param self QSctpServer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_sctpserver_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSctpServer*
/// @param callback int32_t func(QSctpServer* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_sctpserver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSctpServer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_sctpserver_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_sctpserver_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#setMaximumChannelCount)
///
/// @param self QSctpServer*
/// @param count int
void q_sctpserver_set_maximum_channel_count(void* self, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#maximumChannelCount)
///
/// @param self QSctpServer*
int32_t q_sctpserver_maximum_channel_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#nextPendingDatagramConnection)
///
/// @param self QSctpServer*
QSctpSocket* q_sctpserver_next_pending_datagram_connection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
///
/// @param self QSctpServer*
/// @param handle intptr_t
void q_sctpserver_incoming_connection(void* self, intptr_t handle);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
///
/// Allows for overriding the related default method
///
/// @param self QSctpServer*
/// @param callback void func(QSctpServer* self, intptr_t handle)
void q_sctpserver_on_incoming_connection(void* self, void (*callback)(void*, intptr_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
///
/// Base class method implementation
///
/// @param self QSctpServer*
/// @param handle intptr_t
void q_sctpserver_qbase_incoming_connection(void* self, intptr_t handle);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_sctpserver_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_sctpserver_tr3(const char* s, const char* c, int n);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// @param self QSctpServer*
bool q_sctpserver_listen(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#close)
///
/// @param self QSctpServer*
void q_sctpserver_close(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
///
/// @param self QSctpServer*
bool q_sctpserver_is_listening(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
///
/// @param self QSctpServer*
/// @param numConnections int
void q_sctpserver_set_max_pending_connections(void* self, int numConnections);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
///
/// @param self QSctpServer*
int32_t q_sctpserver_max_pending_connections(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
///
/// @param self QSctpServer*
/// @param size int
void q_sctpserver_set_listen_backlog_size(void* self, int size);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
///
/// @param self QSctpServer*
int32_t q_sctpserver_listen_backlog_size(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
///
/// @param self QSctpServer*
unsigned short q_sctpserver_server_port(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
///
/// @param self QSctpServer*
QHostAddress* q_sctpserver_server_address(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
///
/// @param self QSctpServer*
intptr_t q_sctpserver_socket_descriptor(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
///
/// @param self QSctpServer*
/// @param socketDescriptor intptr_t
bool q_sctpserver_set_socket_descriptor(void* self, intptr_t socketDescriptor);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// @param self QSctpServer*
bool q_sctpserver_wait_for_new_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
///
/// @param self QSctpServer*
///
/// @return enum QAbstractSocket__SocketError
int32_t q_sctpserver_server_error(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSctpServer*
const char* q_sctpserver_error_string(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
///
/// @param self QSctpServer*
void q_sctpserver_pause_accepting(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
///
/// @param self QSctpServer*
void q_sctpserver_resume_accepting(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
///
/// @param self QSctpServer*
/// @param networkProxy QNetworkProxy*
void q_sctpserver_set_proxy(void* self, void* networkProxy);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
///
/// @param self QSctpServer*
QNetworkProxy* q_sctpserver_proxy(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
///
/// @param self QSctpServer*
void q_sctpserver_new_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
///
/// @param self QSctpServer*
/// @param callback void func(QSctpServer* self)
void q_sctpserver_on_new_connection(void* self, void (*callback)(void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
///
/// @param self QSctpServer*
/// @param socketError enum QAbstractSocket__SocketError
void q_sctpserver_accept_error(void* self, int32_t socketError);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
///
/// @param self QSctpServer*
/// @param callback void func(QSctpServer* self, enum QAbstractSocket__SocketError socketError)
void q_sctpserver_on_accept_error(void* self, void (*callback)(void*, int32_t));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// @param self QSctpServer*
/// @param address QHostAddress*
bool q_sctpserver_listen1(void* self, void* address);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// @param self QSctpServer*
/// @param address QHostAddress*
/// @param port unsigned short
bool q_sctpserver_listen2(void* self, void* address, unsigned short port);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// @param self QSctpServer*
/// @param msec int
bool q_sctpserver_wait_for_new_connection1(void* self, int msec);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// @param self QSctpServer*
/// @param msec int
/// @param timedOut bool*
bool q_sctpserver_wait_for_new_connection2(void* self, int msec, bool* timedOut);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSctpServer*
const char* q_sctpserver_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSctpServer*
/// @param name char*
void q_sctpserver_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSctpServer*
bool q_sctpserver_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSctpServer*
bool q_sctpserver_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSctpServer*
bool q_sctpserver_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSctpServer*
bool q_sctpserver_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSctpServer*
/// @param b bool
bool q_sctpserver_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSctpServer*
QThread* q_sctpserver_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSctpServer*
/// @param thread QThread*
bool q_sctpserver_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSctpServer*
/// @param interval int
int32_t q_sctpserver_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSctpServer*
/// @param id int
void q_sctpserver_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSctpServer*
/// @param id enum Qt__TimerId
void q_sctpserver_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSctpServer*
libqt_list /* of QObject* */ q_sctpserver_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSctpServer*
/// @param parent QObject*
void q_sctpserver_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSctpServer*
/// @param filterObj QObject*
void q_sctpserver_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSctpServer*
/// @param obj QObject*
void q_sctpserver_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_sctpserver_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSctpServer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_sctpserver_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_sctpserver_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_sctpserver_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSctpServer*
void q_sctpserver_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSctpServer*
void q_sctpserver_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSctpServer*
/// @param name const char*
/// @param value QVariant*
bool q_sctpserver_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSctpServer*
/// @param name const char*
QVariant* q_sctpserver_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSctpServer*
const char** q_sctpserver_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSctpServer*
QBindingStorage* q_sctpserver_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSctpServer*
const QBindingStorage* q_sctpserver_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSctpServer*
void q_sctpserver_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSctpServer*
/// @param callback void func(QSctpServer* self)
void q_sctpserver_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSctpServer*
QObject* q_sctpserver_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSctpServer*
/// @param classname const char*
bool q_sctpserver_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSctpServer*
void q_sctpserver_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSctpServer*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_sctpserver_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSctpServer*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_sctpserver_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_sctpserver_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSctpServer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_sctpserver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSctpServer*
/// @param param1 QObject*
void q_sctpserver_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSctpServer*
/// @param callback void func(QSctpServer* self, QObject* param1)
void q_sctpserver_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpServer*
bool q_sctpserver_has_pending_connections(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpServer*
bool q_sctpserver_qbase_has_pending_connections(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpServer*
/// @param callback bool func()
void q_sctpserver_on_has_pending_connections(void* self, bool (*callback)());

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpServer*
QTcpSocket* q_sctpserver_next_pending_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpServer*
QTcpSocket* q_sctpserver_qbase_next_pending_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpServer*
/// @param callback QTcpSocket* func()
void q_sctpserver_on_next_pending_connection(void* self, QTcpSocket* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpServer*
/// @param event QEvent*
bool q_sctpserver_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpServer*
/// @param event QEvent*
bool q_sctpserver_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpServer*
/// @param callback bool func(QSctpServer* self, QEvent* event)
void q_sctpserver_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpServer*
/// @param watched QObject*
/// @param event QEvent*
bool q_sctpserver_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpServer*
/// @param watched QObject*
/// @param event QEvent*
bool q_sctpserver_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpServer*
/// @param callback bool func(QSctpServer* self, QObject* watched, QEvent* event)
void q_sctpserver_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpServer*
/// @param event QTimerEvent*
void q_sctpserver_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpServer*
/// @param event QTimerEvent*
void q_sctpserver_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpServer*
/// @param callback void func(QSctpServer* self, QTimerEvent* event)
void q_sctpserver_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpServer*
/// @param event QChildEvent*
void q_sctpserver_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpServer*
/// @param event QChildEvent*
void q_sctpserver_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpServer*
/// @param callback void func(QSctpServer* self, QChildEvent* event)
void q_sctpserver_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpServer*
/// @param event QEvent*
void q_sctpserver_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpServer*
/// @param event QEvent*
void q_sctpserver_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpServer*
/// @param callback void func(QSctpServer* self, QEvent* event)
void q_sctpserver_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpServer*
/// @param signal QMetaMethod*
void q_sctpserver_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpServer*
/// @param signal QMetaMethod*
void q_sctpserver_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpServer*
/// @param callback void func(QSctpServer* self, QMetaMethod* signal)
void q_sctpserver_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpServer*
/// @param signal QMetaMethod*
void q_sctpserver_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpServer*
/// @param signal QMetaMethod*
void q_sctpserver_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpServer*
/// @param callback void func(QSctpServer* self, QMetaMethod* signal)
void q_sctpserver_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpServer*
/// @param socket QTcpSocket*
void q_sctpserver_add_pending_connection(void* self, void* socket);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpServer*
/// @param socket QTcpSocket*
void q_sctpserver_qbase_add_pending_connection(void* self, void* socket);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpServer*
/// @param callback void func(QSctpServer* self, QTcpSocket* socket)
void q_sctpserver_on_add_pending_connection(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpServer*
QObject* q_sctpserver_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpServer*
QObject* q_sctpserver_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpServer*
/// @param callback QObject* func()
void q_sctpserver_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpServer*
int32_t q_sctpserver_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpServer*
int32_t q_sctpserver_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpServer*
/// @param callback int32_t func()
void q_sctpserver_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpServer*
/// @param signal const char*
int32_t q_sctpserver_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpServer*
/// @param signal const char*
int32_t q_sctpserver_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpServer*
/// @param callback int32_t func(QSctpServer* self, const char* signal)
void q_sctpserver_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpServer*
/// @param signal QMetaMethod*
bool q_sctpserver_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpServer*
/// @param signal QMetaMethod*
bool q_sctpserver_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpServer*
/// @param callback bool func(QSctpServer* self, QMetaMethod* signal)
void q_sctpserver_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pendingConnectionAvailable)
///
/// Wrapper to allow calling private signal
///
/// @param self QSctpServer*
/// @param callback void func(QSctpServer* self)
void q_sctpserver_on_pending_connection_available(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSctpServer*
/// @param callback void func(QSctpServer* self, const char* objectName)
void q_sctpserver_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#dtor.QSctpServer)
///
/// Delete this object from C++ memory.
///
/// @param self QSctpServer*
void q_sctpserver_delete(void* self);

#endif

#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSCTPSERVER_H
#define SRC_NETWORKQT6C_LIBQSCTPSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsctpserver.html

/// q_sctpserver_new constructs a new QSctpServer object.
///
///
QSctpServer* q_sctpserver_new();

/// q_sctpserver_new2 constructs a new QSctpServer object.
///
/// ``` QObject* parent ```
QSctpServer* q_sctpserver_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSctpServer* self ```
const QMetaObject* q_sctpserver_meta_object(void* self);

/// ``` QSctpServer* self, const char* param1 ```
void* q_sctpserver_metacast(void* self, const char* param1);

/// ``` QSctpServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sctpserver_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSctpServer* self, int32_t (*slot)(QSctpServer*, enum QMetaObject__Call, int, void*) ```
void q_sctpserver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSctpServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sctpserver_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sctpserver_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#setMaximumChannelCount)
///
/// ``` QSctpServer* self, int count ```
void q_sctpserver_set_maximum_channel_count(void* self, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#maximumChannelCount)
///
/// ``` QSctpServer* self ```
int32_t q_sctpserver_maximum_channel_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#nextPendingDatagramConnection)
///
/// ``` QSctpServer* self ```
QSctpSocket* q_sctpserver_next_pending_datagram_connection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
///
/// ``` QSctpServer* self, intptr_t handle ```
void q_sctpserver_incoming_connection(void* self, intptr_t handle);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
///
/// Allows for overriding the related default method
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, intptr_t) ```
void q_sctpserver_on_incoming_connection(void* self, void (*slot)(void*, intptr_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
///
/// Base class method implementation
///
/// ``` QSctpServer* self, intptr_t handle ```
void q_sctpserver_qbase_incoming_connection(void* self, intptr_t handle);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sctpserver_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sctpserver_tr3(const char* s, const char* c, int n);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QSctpServer* self ```
bool q_sctpserver_listen(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#close)
///
/// ``` QSctpServer* self ```
void q_sctpserver_close(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
///
/// ``` QSctpServer* self ```
bool q_sctpserver_is_listening(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
///
/// ``` QSctpServer* self, int numConnections ```
void q_sctpserver_set_max_pending_connections(void* self, int numConnections);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
///
/// ``` QSctpServer* self ```
int32_t q_sctpserver_max_pending_connections(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
///
/// ``` QSctpServer* self, int size ```
void q_sctpserver_set_listen_backlog_size(void* self, int size);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
///
/// ``` QSctpServer* self ```
int32_t q_sctpserver_listen_backlog_size(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
///
/// ``` QSctpServer* self ```
unsigned short q_sctpserver_server_port(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
///
/// ``` QSctpServer* self ```
QHostAddress* q_sctpserver_server_address(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
///
/// ``` QSctpServer* self ```
intptr_t q_sctpserver_socket_descriptor(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
///
/// ``` QSctpServer* self, intptr_t socketDescriptor ```
bool q_sctpserver_set_socket_descriptor(void* self, intptr_t socketDescriptor);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QSctpServer* self ```
bool q_sctpserver_wait_for_new_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
///
/// ``` QSctpServer* self ```
int64_t q_sctpserver_server_error(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
///
/// ``` QSctpServer* self ```
const char* q_sctpserver_error_string(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
///
/// ``` QSctpServer* self ```
void q_sctpserver_pause_accepting(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
///
/// ``` QSctpServer* self ```
void q_sctpserver_resume_accepting(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
///
/// ``` QSctpServer* self, QNetworkProxy* networkProxy ```
void q_sctpserver_set_proxy(void* self, void* networkProxy);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
///
/// ``` QSctpServer* self ```
QNetworkProxy* q_sctpserver_proxy(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
///
/// ``` QSctpServer* self ```
void q_sctpserver_new_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*) ```
void q_sctpserver_on_new_connection(void* self, void (*slot)(void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
///
/// ``` QSctpServer* self, enum QAbstractSocket__SocketError socketError ```
void q_sctpserver_accept_error(void* self, int64_t socketError);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, enum QAbstractSocket__SocketError) ```
void q_sctpserver_on_accept_error(void* self, void (*slot)(void*, int64_t));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QSctpServer* self, QHostAddress* address ```
bool q_sctpserver_listen1(void* self, void* address);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QSctpServer* self, QHostAddress* address, unsigned short port ```
bool q_sctpserver_listen2(void* self, void* address, unsigned short port);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QSctpServer* self, int msec ```
bool q_sctpserver_wait_for_new_connection1(void* self, int msec);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QSctpServer* self, int msec, bool* timedOut ```
bool q_sctpserver_wait_for_new_connection2(void* self, int msec, bool* timedOut);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSctpServer* self ```
const char* q_sctpserver_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSctpServer* self, char* name ```
void q_sctpserver_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSctpServer* self ```
bool q_sctpserver_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSctpServer* self ```
bool q_sctpserver_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSctpServer* self ```
bool q_sctpserver_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSctpServer* self ```
bool q_sctpserver_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSctpServer* self, bool b ```
bool q_sctpserver_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSctpServer* self ```
QThread* q_sctpserver_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSctpServer* self, QThread* thread ```
bool q_sctpserver_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSctpServer* self, int interval ```
int32_t q_sctpserver_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSctpServer* self, int id ```
void q_sctpserver_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSctpServer* self, enum Qt__TimerId id ```
void q_sctpserver_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSctpServer* self ```
libqt_list /* of QObject* */ q_sctpserver_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSctpServer* self, QObject* parent ```
void q_sctpserver_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSctpServer* self, QObject* filterObj ```
void q_sctpserver_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSctpServer* self, QObject* obj ```
void q_sctpserver_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sctpserver_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSctpServer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sctpserver_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sctpserver_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sctpserver_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSctpServer* self ```
void q_sctpserver_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSctpServer* self ```
void q_sctpserver_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSctpServer* self, const char* name, QVariant* value ```
bool q_sctpserver_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSctpServer* self, const char* name ```
QVariant* q_sctpserver_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSctpServer* self ```
const char** q_sctpserver_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSctpServer* self ```
QBindingStorage* q_sctpserver_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSctpServer* self ```
const QBindingStorage* q_sctpserver_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSctpServer* self ```
void q_sctpserver_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*) ```
void q_sctpserver_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSctpServer* self ```
QObject* q_sctpserver_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSctpServer* self, const char* classname ```
bool q_sctpserver_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSctpServer* self ```
void q_sctpserver_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSctpServer* self, QThread* thread, Disambiguated_t* param2 ```
bool q_sctpserver_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSctpServer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sctpserver_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sctpserver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSctpServer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sctpserver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSctpServer* self, QObject* param1 ```
void q_sctpserver_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, QObject*) ```
void q_sctpserver_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self ```
bool q_sctpserver_has_pending_connections(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self ```
bool q_sctpserver_qbase_has_pending_connections(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, bool (*slot)() ```
void q_sctpserver_on_has_pending_connections(void* self, bool (*slot)());

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self ```
QTcpSocket* q_sctpserver_next_pending_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self ```
QTcpSocket* q_sctpserver_qbase_next_pending_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, QTcpSocket* (*slot)() ```
void q_sctpserver_on_next_pending_connection(void* self, QTcpSocket* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QEvent* event ```
bool q_sctpserver_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QEvent* event ```
bool q_sctpserver_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, bool (*slot)(QSctpServer*, QEvent*) ```
void q_sctpserver_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QObject* watched, QEvent* event ```
bool q_sctpserver_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QObject* watched, QEvent* event ```
bool q_sctpserver_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, bool (*slot)(QSctpServer*, QObject*, QEvent*) ```
void q_sctpserver_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QTimerEvent* event ```
void q_sctpserver_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QTimerEvent* event ```
void q_sctpserver_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, QTimerEvent*) ```
void q_sctpserver_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QChildEvent* event ```
void q_sctpserver_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QChildEvent* event ```
void q_sctpserver_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, QChildEvent*) ```
void q_sctpserver_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QEvent* event ```
void q_sctpserver_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QEvent* event ```
void q_sctpserver_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, QEvent*) ```
void q_sctpserver_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QMetaMethod* signal ```
void q_sctpserver_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QMetaMethod* signal ```
void q_sctpserver_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, QMetaMethod*) ```
void q_sctpserver_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QMetaMethod* signal ```
void q_sctpserver_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QMetaMethod* signal ```
void q_sctpserver_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, QMetaMethod*) ```
void q_sctpserver_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QTcpSocket* socket ```
void q_sctpserver_add_pending_connection(void* self, void* socket);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QTcpSocket* socket ```
void q_sctpserver_qbase_add_pending_connection(void* self, void* socket);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, QTcpSocket*) ```
void q_sctpserver_on_add_pending_connection(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self ```
QObject* q_sctpserver_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self ```
QObject* q_sctpserver_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, QObject* (*slot)() ```
void q_sctpserver_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self ```
int32_t q_sctpserver_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self ```
int32_t q_sctpserver_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, int32_t (*slot)() ```
void q_sctpserver_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, const char* signal ```
int32_t q_sctpserver_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, const char* signal ```
int32_t q_sctpserver_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, int32_t (*slot)(QSctpServer*, const char*) ```
void q_sctpserver_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpServer* self, QMetaMethod* signal ```
bool q_sctpserver_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpServer* self, QMetaMethod* signal ```
bool q_sctpserver_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpServer* self, bool (*slot)(QSctpServer*, QMetaMethod*) ```
void q_sctpserver_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pendingConnectionAvailable)
///
/// Wrapper to allow calling private signal
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*) ```
void q_sctpserver_on_pending_connection_available(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QSctpServer* self, void (*slot)(QSctpServer*, const char*) ```
void q_sctpserver_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#dtor.QSctpServer)
///
/// Delete this object from C++ memory.
///
/// ``` QSctpServer* self ```
void q_sctpserver_delete(void* self);

#endif

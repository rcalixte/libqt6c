#pragma once
#ifndef SRC_NETWORKQT6C_LIBQTCPSERVER_H
#define SRC_NETWORKQT6C_LIBQTCPSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "libqhostaddress.h"
#include "../libqmetaobject.h"
#include "libqnetworkproxy.h"
#include "../libqobject.h"
#include <string.h>
#include "libqtcpsocket.h"
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qtcpserver.html

/// q_tcpserver_new constructs a new QTcpServer object.
///
///
QTcpServer* q_tcpserver_new();

/// q_tcpserver_new2 constructs a new QTcpServer object.
///
/// ``` QObject* parent ```
QTcpServer* q_tcpserver_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTcpServer* self ```
QMetaObject* q_tcpserver_meta_object(void* self);

/// ``` QTcpServer* self, const char* param1 ```
void* q_tcpserver_metacast(void* self, const char* param1);

/// ``` QTcpServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tcpserver_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTcpServer* self, int32_t (*slot)(QTcpServer*, enum QMetaObject__Call, int, void*) ```
void q_tcpserver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTcpServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tcpserver_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_tcpserver_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_listen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#close)
///
/// ``` QTcpServer* self ```
void q_tcpserver_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_is_listening(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
///
/// ``` QTcpServer* self, int numConnections ```
void q_tcpserver_set_max_pending_connections(void* self, int numConnections);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
///
/// ``` QTcpServer* self ```
int32_t q_tcpserver_max_pending_connections(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
///
/// ``` QTcpServer* self, int size ```
void q_tcpserver_set_listen_backlog_size(void* self, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
///
/// ``` QTcpServer* self ```
int32_t q_tcpserver_listen_backlog_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
///
/// ``` QTcpServer* self ```
unsigned short q_tcpserver_server_port(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
///
/// ``` QTcpServer* self ```
QHostAddress* q_tcpserver_server_address(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
///
/// ``` QTcpServer* self ```
intptr_t q_tcpserver_socket_descriptor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
///
/// ``` QTcpServer* self, intptr_t socketDescriptor ```
bool q_tcpserver_set_socket_descriptor(void* self, intptr_t socketDescriptor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_wait_for_new_connection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_has_pending_connections(void* self);

/// Allows for overriding the related default method
///
/// ``` QTcpServer* self, bool (*slot)() ```
void q_tcpserver_on_has_pending_connections(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QTcpServer* self ```
bool q_tcpserver_qbase_has_pending_connections(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// ``` QTcpServer* self ```
QTcpSocket* q_tcpserver_next_pending_connection(void* self);

/// Allows for overriding the related default method
///
/// ``` QTcpServer* self, QTcpSocket* (*slot)() ```
void q_tcpserver_on_next_pending_connection(void* self, QTcpSocket* (*slot)());

/// Base class method implementation
///
/// ``` QTcpServer* self ```
QTcpSocket* q_tcpserver_qbase_next_pending_connection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
///
/// ``` QTcpServer* self ```
int64_t q_tcpserver_server_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
///
/// ``` QTcpServer* self ```
const char* q_tcpserver_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
///
/// ``` QTcpServer* self ```
void q_tcpserver_pause_accepting(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
///
/// ``` QTcpServer* self ```
void q_tcpserver_resume_accepting(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
///
/// ``` QTcpServer* self, QNetworkProxy* networkProxy ```
void q_tcpserver_set_proxy(void* self, void* networkProxy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
///
/// ``` QTcpServer* self ```
QNetworkProxy* q_tcpserver_proxy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#incomingConnection)
///
/// ``` QTcpServer* self, intptr_t handle ```
void q_tcpserver_incoming_connection(void* self, intptr_t handle);

/// Allows for overriding the related default method
///
/// ``` QTcpServer* self, void (*slot)(QTcpServer*, intptr_t) ```
void q_tcpserver_on_incoming_connection(void* self, void (*slot)(void*, intptr_t));

/// Base class method implementation
///
/// ``` QTcpServer* self, intptr_t handle ```
void q_tcpserver_qbase_incoming_connection(void* self, intptr_t handle);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// ``` QTcpServer* self, QTcpSocket* socket ```
void q_tcpserver_add_pending_connection(void* self, void* socket);

/// Allows for overriding the related default method
///
/// ``` QTcpServer* self, void (*slot)(QTcpServer*, QTcpSocket*) ```
void q_tcpserver_on_add_pending_connection(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QTcpServer* self, QTcpSocket* socket ```
void q_tcpserver_qbase_add_pending_connection(void* self, void* socket);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
///
/// ``` QTcpServer* self ```
void q_tcpserver_new_connection(void* self);

/// ``` QTcpServer* self, void (*slot)(QTcpServer*) ```
void q_tcpserver_on_new_connection(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
///
/// ``` QTcpServer* self, enum QAbstractSocket__SocketError socketError ```
void q_tcpserver_accept_error(void* self, int64_t socketError);

/// ``` QTcpServer* self, void (*slot)(QTcpServer*, enum QAbstractSocket__SocketError) ```
void q_tcpserver_on_accept_error(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_tcpserver_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_tcpserver_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QTcpServer* self, QHostAddress* address ```
bool q_tcpserver_listen1(void* self, void* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QTcpServer* self, QHostAddress* address, unsigned short port ```
bool q_tcpserver_listen2(void* self, void* address, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QTcpServer* self, int msec ```
bool q_tcpserver_wait_for_new_connection1(void* self, int msec);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QTcpServer* self, int msec, bool* timedOut ```
bool q_tcpserver_wait_for_new_connection2(void* self, int msec, bool* timedOut);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTcpServer* self ```
const char* q_tcpserver_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTcpServer* self, const char* name ```
void q_tcpserver_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTcpServer* self ```
bool q_tcpserver_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTcpServer* self, bool b ```
bool q_tcpserver_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTcpServer* self ```
QThread* q_tcpserver_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTcpServer* self, QThread* thread ```
void q_tcpserver_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTcpServer* self, int interval ```
int32_t q_tcpserver_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTcpServer* self, int id ```
void q_tcpserver_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTcpServer* self ```
libqt_list /* of QObject* */ q_tcpserver_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTcpServer* self, QObject* parent ```
void q_tcpserver_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTcpServer* self, QObject* filterObj ```
void q_tcpserver_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTcpServer* self, QObject* obj ```
void q_tcpserver_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_tcpserver_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTcpServer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_tcpserver_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_tcpserver_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_tcpserver_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTcpServer* self ```
void q_tcpserver_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTcpServer* self ```
void q_tcpserver_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTcpServer* self, const char* name, QVariant* value ```
bool q_tcpserver_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTcpServer* self, const char* name ```
QVariant* q_tcpserver_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTcpServer* self ```
const char** q_tcpserver_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTcpServer* self ```
QBindingStorage* q_tcpserver_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTcpServer* self ```
QBindingStorage* q_tcpserver_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTcpServer* self ```
void q_tcpserver_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QTcpServer* self, void (*slot)(QObject*) ```
void q_tcpserver_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTcpServer* self ```
QObject* q_tcpserver_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTcpServer* self, const char* classname ```
bool q_tcpserver_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTcpServer* self ```
void q_tcpserver_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTcpServer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_tcpserver_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tcpserver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTcpServer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tcpserver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTcpServer* self, QObject* param1 ```
void q_tcpserver_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QTcpServer* self, void (*slot)(QObject*, QObject*) ```
void q_tcpserver_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QEvent* event ```
bool q_tcpserver_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QEvent* event ```
bool q_tcpserver_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, bool (*slot)(QTcpServer*, QEvent*) ```
void q_tcpserver_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QObject* watched, QEvent* event ```
bool q_tcpserver_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QObject* watched, QEvent* event ```
bool q_tcpserver_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, bool (*slot)(QTcpServer*, QObject*, QEvent*) ```
void q_tcpserver_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QTimerEvent* event ```
void q_tcpserver_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QTimerEvent* event ```
void q_tcpserver_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, void (*slot)(QTcpServer*, QTimerEvent*) ```
void q_tcpserver_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QChildEvent* event ```
void q_tcpserver_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QChildEvent* event ```
void q_tcpserver_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, void (*slot)(QTcpServer*, QChildEvent*) ```
void q_tcpserver_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QEvent* event ```
void q_tcpserver_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QEvent* event ```
void q_tcpserver_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, void (*slot)(QTcpServer*, QEvent*) ```
void q_tcpserver_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QMetaMethod* signal ```
void q_tcpserver_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QMetaMethod* signal ```
void q_tcpserver_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, void (*slot)(QTcpServer*, QMetaMethod*) ```
void q_tcpserver_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QMetaMethod* signal ```
void q_tcpserver_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QMetaMethod* signal ```
void q_tcpserver_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, void (*slot)(QTcpServer*, QMetaMethod*) ```
void q_tcpserver_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self ```
QObject* q_tcpserver_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self ```
QObject* q_tcpserver_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, QObject* (*slot)() ```
void q_tcpserver_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self ```
int32_t q_tcpserver_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self ```
int32_t q_tcpserver_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, int32_t (*slot)() ```
void q_tcpserver_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, const char* signal ```
int32_t q_tcpserver_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, const char* signal ```
int32_t q_tcpserver_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, int32_t (*slot)(QTcpServer*, const char*) ```
void q_tcpserver_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpServer* self, QMetaMethod* signal ```
bool q_tcpserver_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpServer* self, QMetaMethod* signal ```
bool q_tcpserver_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpServer* self, bool (*slot)(QTcpServer*, QMetaMethod*) ```
void q_tcpserver_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QTcpServer* self ```
void q_tcpserver_delete(void* self);

#endif

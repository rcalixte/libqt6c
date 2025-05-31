#pragma once
#ifndef SRC_NETWORKQT6C_LIBQLOCALSERVER_H
#define SRC_NETWORKQT6C_LIBQLOCALSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqevent.h"
#include "libqlocalsocket.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qlocalserver.html

/// q_localserver_new constructs a new QLocalServer object.
///
///
QLocalServer* q_localserver_new();

/// q_localserver_new2 constructs a new QLocalServer object.
///
/// ``` QObject* parent ```
QLocalServer* q_localserver_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLocalServer* self ```
const QMetaObject* q_localserver_meta_object(void* self);

/// ``` QLocalServer* self, const char* param1 ```
void* q_localserver_metacast(void* self, const char* param1);

/// ``` QLocalServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_localserver_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QLocalServer* self, int32_t (*slot)(QLocalServer*, enum QMetaObject__Call, int, void*) ```
void q_localserver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QLocalServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_localserver_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_localserver_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#newConnection)
///
/// ``` QLocalServer* self ```
void q_localserver_new_connection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#newConnection)
///
/// ``` QLocalServer* self, void (*slot)(QLocalServer*) ```
void q_localserver_on_new_connection(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#close)
///
/// ``` QLocalServer* self ```
void q_localserver_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#errorString)
///
/// ``` QLocalServer* self ```
const char* q_localserver_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#hasPendingConnections)
///
/// ``` QLocalServer* self ```
bool q_localserver_has_pending_connections(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#hasPendingConnections)
///
/// Allows for overriding the related default method
///
/// ``` QLocalServer* self, bool (*slot)() ```
void q_localserver_on_has_pending_connections(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#hasPendingConnections)
///
/// Base class method implementation
///
/// ``` QLocalServer* self ```
bool q_localserver_qbase_has_pending_connections(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#isListening)
///
/// ``` QLocalServer* self ```
bool q_localserver_is_listening(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#listen)
///
/// ``` QLocalServer* self, const char* name ```
bool q_localserver_listen(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#listen)
///
/// ``` QLocalServer* self, intptr_t socketDescriptor ```
bool q_localserver_listen_with_socket_descriptor(void* self, intptr_t socketDescriptor);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#maxPendingConnections)
///
/// ``` QLocalServer* self ```
int32_t q_localserver_max_pending_connections(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#nextPendingConnection)
///
/// ``` QLocalServer* self ```
QLocalSocket* q_localserver_next_pending_connection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#nextPendingConnection)
///
/// Allows for overriding the related default method
///
/// ``` QLocalServer* self, QLocalSocket* (*slot)() ```
void q_localserver_on_next_pending_connection(void* self, QLocalSocket* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#nextPendingConnection)
///
/// Base class method implementation
///
/// ``` QLocalServer* self ```
QLocalSocket* q_localserver_qbase_next_pending_connection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#serverName)
///
/// ``` QLocalServer* self ```
const char* q_localserver_server_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#fullServerName)
///
/// ``` QLocalServer* self ```
const char* q_localserver_full_server_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#removeServer)
///
/// ``` const char* name ```
bool q_localserver_remove_server(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#serverError)
///
/// ``` QLocalServer* self ```
int64_t q_localserver_server_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#setMaxPendingConnections)
///
/// ``` QLocalServer* self, int numConnections ```
void q_localserver_set_max_pending_connections(void* self, int numConnections);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#waitForNewConnection)
///
/// ``` QLocalServer* self ```
bool q_localserver_wait_for_new_connection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#setListenBacklogSize)
///
/// ``` QLocalServer* self, int size ```
void q_localserver_set_listen_backlog_size(void* self, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#listenBacklogSize)
///
/// ``` QLocalServer* self ```
int32_t q_localserver_listen_backlog_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#setSocketOptions)
///
/// ``` QLocalServer* self, int options ```
void q_localserver_set_socket_options(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#socketOptions)
///
/// ``` QLocalServer* self ```
int64_t q_localserver_socket_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#socketDescriptor)
///
/// ``` QLocalServer* self ```
intptr_t q_localserver_socket_descriptor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#incomingConnection)
///
/// ``` QLocalServer* self, uintptr_t socketDescriptor ```
void q_localserver_incoming_connection(void* self, uintptr_t socketDescriptor);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#incomingConnection)
///
/// Allows for overriding the related default method
///
/// ``` QLocalServer* self, void (*slot)(QLocalServer*, uintptr_t) ```
void q_localserver_on_incoming_connection(void* self, void (*slot)(void*, uintptr_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#incomingConnection)
///
/// Base class method implementation
///
/// ``` QLocalServer* self, uintptr_t socketDescriptor ```
void q_localserver_qbase_incoming_connection(void* self, uintptr_t socketDescriptor);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_localserver_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_localserver_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#waitForNewConnection)
///
/// ``` QLocalServer* self, int msec ```
bool q_localserver_wait_for_new_connection1(void* self, int msec);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#waitForNewConnection)
///
/// ``` QLocalServer* self, int msec, bool* timedOut ```
bool q_localserver_wait_for_new_connection2(void* self, int msec, bool* timedOut);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLocalServer* self ```
const char* q_localserver_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLocalServer* self, char* name ```
void q_localserver_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLocalServer* self ```
bool q_localserver_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLocalServer* self ```
bool q_localserver_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLocalServer* self ```
bool q_localserver_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLocalServer* self ```
bool q_localserver_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLocalServer* self, bool b ```
bool q_localserver_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLocalServer* self ```
QThread* q_localserver_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLocalServer* self, QThread* thread ```
void q_localserver_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLocalServer* self, int interval ```
int32_t q_localserver_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLocalServer* self, int id ```
void q_localserver_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLocalServer* self ```
const libqt_list /* of QObject* */ q_localserver_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QLocalServer* self, QObject* parent ```
void q_localserver_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLocalServer* self, QObject* filterObj ```
void q_localserver_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLocalServer* self, QObject* obj ```
void q_localserver_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_localserver_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLocalServer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_localserver_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_localserver_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_localserver_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLocalServer* self ```
void q_localserver_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLocalServer* self ```
void q_localserver_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLocalServer* self, const char* name, QVariant* value ```
bool q_localserver_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLocalServer* self, const char* name ```
QVariant* q_localserver_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLocalServer* self ```
const char** q_localserver_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLocalServer* self ```
QBindingStorage* q_localserver_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLocalServer* self ```
const QBindingStorage* q_localserver_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLocalServer* self ```
void q_localserver_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLocalServer* self, void (*slot)(QObject*) ```
void q_localserver_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLocalServer* self ```
QObject* q_localserver_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLocalServer* self, const char* classname ```
bool q_localserver_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLocalServer* self ```
void q_localserver_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLocalServer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_localserver_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_localserver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLocalServer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_localserver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLocalServer* self, QObject* param1 ```
void q_localserver_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLocalServer* self, void (*slot)(QObject*, QObject*) ```
void q_localserver_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QEvent* event ```
bool q_localserver_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QEvent* event ```
bool q_localserver_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, bool (*slot)(QLocalServer*, QEvent*) ```
void q_localserver_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QObject* watched, QEvent* event ```
bool q_localserver_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QObject* watched, QEvent* event ```
bool q_localserver_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, bool (*slot)(QLocalServer*, QObject*, QEvent*) ```
void q_localserver_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QTimerEvent* event ```
void q_localserver_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QTimerEvent* event ```
void q_localserver_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, void (*slot)(QLocalServer*, QTimerEvent*) ```
void q_localserver_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QChildEvent* event ```
void q_localserver_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QChildEvent* event ```
void q_localserver_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, void (*slot)(QLocalServer*, QChildEvent*) ```
void q_localserver_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QEvent* event ```
void q_localserver_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QEvent* event ```
void q_localserver_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, void (*slot)(QLocalServer*, QEvent*) ```
void q_localserver_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QMetaMethod* signal ```
void q_localserver_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QMetaMethod* signal ```
void q_localserver_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, void (*slot)(QLocalServer*, QMetaMethod*) ```
void q_localserver_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QMetaMethod* signal ```
void q_localserver_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QMetaMethod* signal ```
void q_localserver_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, void (*slot)(QLocalServer*, QMetaMethod*) ```
void q_localserver_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self ```
QObject* q_localserver_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self ```
QObject* q_localserver_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, QObject* (*slot)() ```
void q_localserver_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self ```
int32_t q_localserver_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self ```
int32_t q_localserver_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, int32_t (*slot)() ```
void q_localserver_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, const char* signal ```
int32_t q_localserver_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, const char* signal ```
int32_t q_localserver_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, int32_t (*slot)(QLocalServer*, const char*) ```
void q_localserver_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalServer* self, QMetaMethod* signal ```
bool q_localserver_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalServer* self, QMetaMethod* signal ```
bool q_localserver_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalServer* self, bool (*slot)(QLocalServer*, QMetaMethod*) ```
void q_localserver_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QLocalServer* self, void (*slot)(QObject*, const char*) ```
void q_localserver_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalserver.html#dtor.QLocalServer)
///
/// Delete this object from C++ memory.
///
/// ``` QLocalServer* self ```
void q_localserver_delete(void* self);

/// https://doc.qt.io/qt-6/qlocalserver.html#types

typedef enum {
    QLOCALSERVER_SOCKETOPTION_NOOPTIONS = 0,
    QLOCALSERVER_SOCKETOPTION_USERACCESSOPTION = 1,
    QLOCALSERVER_SOCKETOPTION_GROUPACCESSOPTION = 2,
    QLOCALSERVER_SOCKETOPTION_OTHERACCESSOPTION = 4,
    QLOCALSERVER_SOCKETOPTION_WORLDACCESSOPTION = 7,
    QLOCALSERVER_SOCKETOPTION_ABSTRACTNAMESPACEOPTION = 8
} QLocalServer__SocketOption;

#endif

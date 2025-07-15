#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLSERVER_H
#define SRC_NETWORKQT6C_LIBQSSLSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsslserver.html

/// q_sslserver_new constructs a new QSslServer object.
///
///
QSslServer* q_sslserver_new();

/// q_sslserver_new2 constructs a new QSslServer object.
///
/// ``` QObject* parent ```
QSslServer* q_sslserver_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSslServer* self ```
const QMetaObject* q_sslserver_meta_object(void* self);

/// ``` QSslServer* self, const char* param1 ```
void* q_sslserver_metacast(void* self, const char* param1);

/// ``` QSslServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sslserver_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSslServer* self, int32_t (*slot)(QSslServer*, enum QMetaObject__Call, int, void*) ```
void q_sslserver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSslServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sslserver_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sslserver_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#setSslConfiguration)
///
/// ``` QSslServer* self, QSslConfiguration* sslConfiguration ```
void q_sslserver_set_ssl_configuration(void* self, void* sslConfiguration);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#sslConfiguration)
///
/// ``` QSslServer* self ```
QSslConfiguration* q_sslserver_ssl_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#setHandshakeTimeout)
///
/// ``` QSslServer* self, int timeout ```
void q_sslserver_set_handshake_timeout(void* self, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#handshakeTimeout)
///
/// ``` QSslServer* self ```
int32_t q_sslserver_handshake_timeout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#sslErrors)
///
/// ``` QSslServer* self, QSslSocket* socket, libqt_list /* of QSslError* */ errors ```
void q_sslserver_ssl_errors(void* self, void* socket, libqt_list errors);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#sslErrors)
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*, libqt_list /* of QSslError* */ errors ) ```
void q_sslserver_on_ssl_errors(void* self, void (*slot)(void*, void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#peerVerifyError)
///
/// ``` QSslServer* self, QSslSocket* socket, QSslError* errorVal ```
void q_sslserver_peer_verify_error(void* self, void* socket, void* errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#peerVerifyError)
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*, QSslError*) ```
void q_sslserver_on_peer_verify_error(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#errorOccurred)
///
/// ``` QSslServer* self, QSslSocket* socket, enum QAbstractSocket__SocketError errorVal ```
void q_sslserver_error_occurred(void* self, void* socket, int64_t errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#errorOccurred)
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*, enum QAbstractSocket__SocketError) ```
void q_sslserver_on_error_occurred(void* self, void (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#preSharedKeyAuthenticationRequired)
///
/// ``` QSslServer* self, QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator ```
void q_sslserver_pre_shared_key_authentication_required(void* self, void* socket, void* authenticator);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#preSharedKeyAuthenticationRequired)
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*, QSslPreSharedKeyAuthenticator*) ```
void q_sslserver_on_pre_shared_key_authentication_required(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertSent)
///
/// ``` QSslServer* self, QSslSocket* socket, enum QSsl__AlertLevel level, enum QSsl__AlertType typeVal, const char* description ```
void q_sslserver_alert_sent(void* self, void* socket, int64_t level, int64_t typeVal, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertSent)
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*, enum QSsl__AlertLevel, enum QSsl__AlertType, const char*) ```
void q_sslserver_on_alert_sent(void* self, void (*slot)(void*, void*, int64_t, int64_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertReceived)
///
/// ``` QSslServer* self, QSslSocket* socket, enum QSsl__AlertLevel level, enum QSsl__AlertType typeVal, const char* description ```
void q_sslserver_alert_received(void* self, void* socket, int64_t level, int64_t typeVal, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertReceived)
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*, enum QSsl__AlertLevel, enum QSsl__AlertType, const char*) ```
void q_sslserver_on_alert_received(void* self, void (*slot)(void*, void*, int64_t, int64_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#handshakeInterruptedOnError)
///
/// ``` QSslServer* self, QSslSocket* socket, QSslError* errorVal ```
void q_sslserver_handshake_interrupted_on_error(void* self, void* socket, void* errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#handshakeInterruptedOnError)
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*, QSslError*) ```
void q_sslserver_on_handshake_interrupted_on_error(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#startedEncryptionHandshake)
///
/// ``` QSslServer* self, QSslSocket* socket ```
void q_sslserver_started_encryption_handshake(void* self, void* socket);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#startedEncryptionHandshake)
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*) ```
void q_sslserver_on_started_encryption_handshake(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#incomingConnection)
///
/// ``` QSslServer* self, intptr_t socket ```
void q_sslserver_incoming_connection(void* self, intptr_t socket);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#incomingConnection)
///
/// Allows for overriding the related default method
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, intptr_t) ```
void q_sslserver_on_incoming_connection(void* self, void (*slot)(void*, intptr_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#incomingConnection)
///
/// Base class method implementation
///
/// ``` QSslServer* self, intptr_t socket ```
void q_sslserver_qbase_incoming_connection(void* self, intptr_t socket);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sslserver_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sslserver_tr3(const char* s, const char* c, int n);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QSslServer* self ```
bool q_sslserver_listen(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#close)
///
/// ``` QSslServer* self ```
void q_sslserver_close(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
///
/// ``` QSslServer* self ```
bool q_sslserver_is_listening(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
///
/// ``` QSslServer* self, int numConnections ```
void q_sslserver_set_max_pending_connections(void* self, int numConnections);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
///
/// ``` QSslServer* self ```
int32_t q_sslserver_max_pending_connections(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
///
/// ``` QSslServer* self, int size ```
void q_sslserver_set_listen_backlog_size(void* self, int size);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
///
/// ``` QSslServer* self ```
int32_t q_sslserver_listen_backlog_size(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
///
/// ``` QSslServer* self ```
unsigned short q_sslserver_server_port(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
///
/// ``` QSslServer* self ```
QHostAddress* q_sslserver_server_address(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
///
/// ``` QSslServer* self ```
intptr_t q_sslserver_socket_descriptor(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
///
/// ``` QSslServer* self, intptr_t socketDescriptor ```
bool q_sslserver_set_socket_descriptor(void* self, intptr_t socketDescriptor);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QSslServer* self ```
bool q_sslserver_wait_for_new_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
///
/// ``` QSslServer* self ```
int64_t q_sslserver_server_error(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
///
/// ``` QSslServer* self ```
const char* q_sslserver_error_string(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
///
/// ``` QSslServer* self ```
void q_sslserver_pause_accepting(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
///
/// ``` QSslServer* self ```
void q_sslserver_resume_accepting(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
///
/// ``` QSslServer* self, QNetworkProxy* networkProxy ```
void q_sslserver_set_proxy(void* self, void* networkProxy);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
///
/// ``` QSslServer* self ```
QNetworkProxy* q_sslserver_proxy(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
///
/// ``` QSslServer* self ```
void q_sslserver_new_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
///
/// ``` QSslServer* self, void (*slot)(QTcpServer*) ```
void q_sslserver_on_new_connection(void* self, void (*slot)(void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
///
/// ``` QSslServer* self, enum QAbstractSocket__SocketError socketError ```
void q_sslserver_accept_error(void* self, int64_t socketError);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
///
/// ``` QSslServer* self, void (*slot)(QTcpServer*, enum QAbstractSocket__SocketError) ```
void q_sslserver_on_accept_error(void* self, void (*slot)(void*, int64_t));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QSslServer* self, QHostAddress* address ```
bool q_sslserver_listen1(void* self, void* address);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QSslServer* self, QHostAddress* address, unsigned short port ```
bool q_sslserver_listen2(void* self, void* address, unsigned short port);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QSslServer* self, int msec ```
bool q_sslserver_wait_for_new_connection1(void* self, int msec);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QSslServer* self, int msec, bool* timedOut ```
bool q_sslserver_wait_for_new_connection2(void* self, int msec, bool* timedOut);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSslServer* self ```
const char* q_sslserver_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSslServer* self, char* name ```
void q_sslserver_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSslServer* self ```
bool q_sslserver_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSslServer* self ```
bool q_sslserver_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSslServer* self ```
bool q_sslserver_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSslServer* self ```
bool q_sslserver_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSslServer* self, bool b ```
bool q_sslserver_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSslServer* self ```
QThread* q_sslserver_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSslServer* self, QThread* thread ```
bool q_sslserver_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSslServer* self, int interval ```
int32_t q_sslserver_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSslServer* self, int id ```
void q_sslserver_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSslServer* self, enum Qt__TimerId id ```
void q_sslserver_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSslServer* self ```
libqt_list /* of QObject* */ q_sslserver_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSslServer* self, QObject* parent ```
void q_sslserver_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSslServer* self, QObject* filterObj ```
void q_sslserver_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSslServer* self, QObject* obj ```
void q_sslserver_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sslserver_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSslServer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sslserver_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sslserver_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sslserver_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSslServer* self ```
void q_sslserver_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSslServer* self ```
void q_sslserver_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSslServer* self, const char* name, QVariant* value ```
bool q_sslserver_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSslServer* self, const char* name ```
QVariant* q_sslserver_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSslServer* self ```
const char** q_sslserver_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSslServer* self ```
QBindingStorage* q_sslserver_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSslServer* self ```
const QBindingStorage* q_sslserver_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSslServer* self ```
void q_sslserver_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSslServer* self, void (*slot)(QObject*) ```
void q_sslserver_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSslServer* self ```
QObject* q_sslserver_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSslServer* self, const char* classname ```
bool q_sslserver_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSslServer* self ```
void q_sslserver_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSslServer* self, QThread* thread, Disambiguated_t* param2 ```
bool q_sslserver_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSslServer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sslserver_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sslserver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSslServer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sslserver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSslServer* self, QObject* param1 ```
void q_sslserver_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSslServer* self, void (*slot)(QObject*, QObject*) ```
void q_sslserver_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self ```
bool q_sslserver_has_pending_connections(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self ```
bool q_sslserver_qbase_has_pending_connections(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, bool (*slot)() ```
void q_sslserver_on_has_pending_connections(void* self, bool (*slot)());

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self ```
QTcpSocket* q_sslserver_next_pending_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self ```
QTcpSocket* q_sslserver_qbase_next_pending_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, QTcpSocket* (*slot)() ```
void q_sslserver_on_next_pending_connection(void* self, QTcpSocket* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QEvent* event ```
bool q_sslserver_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QEvent* event ```
bool q_sslserver_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, bool (*slot)(QSslServer*, QEvent*) ```
void q_sslserver_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QObject* watched, QEvent* event ```
bool q_sslserver_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QObject* watched, QEvent* event ```
bool q_sslserver_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, bool (*slot)(QSslServer*, QObject*, QEvent*) ```
void q_sslserver_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QTimerEvent* event ```
void q_sslserver_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QTimerEvent* event ```
void q_sslserver_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QTimerEvent*) ```
void q_sslserver_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QChildEvent* event ```
void q_sslserver_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QChildEvent* event ```
void q_sslserver_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QChildEvent*) ```
void q_sslserver_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QEvent* event ```
void q_sslserver_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QEvent* event ```
void q_sslserver_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QEvent*) ```
void q_sslserver_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QMetaMethod* signal ```
void q_sslserver_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QMetaMethod* signal ```
void q_sslserver_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QMetaMethod*) ```
void q_sslserver_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QMetaMethod* signal ```
void q_sslserver_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QMetaMethod* signal ```
void q_sslserver_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QMetaMethod*) ```
void q_sslserver_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QTcpSocket* socket ```
void q_sslserver_add_pending_connection(void* self, void* socket);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QTcpSocket* socket ```
void q_sslserver_qbase_add_pending_connection(void* self, void* socket);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QTcpSocket*) ```
void q_sslserver_on_add_pending_connection(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self ```
QObject* q_sslserver_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self ```
QObject* q_sslserver_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, QObject* (*slot)() ```
void q_sslserver_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self ```
int32_t q_sslserver_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self ```
int32_t q_sslserver_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, int32_t (*slot)() ```
void q_sslserver_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, const char* signal ```
int32_t q_sslserver_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, const char* signal ```
int32_t q_sslserver_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, int32_t (*slot)(QSslServer*, const char*) ```
void q_sslserver_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QMetaMethod* signal ```
bool q_sslserver_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QMetaMethod* signal ```
bool q_sslserver_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, bool (*slot)(QSslServer*, QMetaMethod*) ```
void q_sslserver_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pendingConnectionAvailable)
///
/// Wrapper to allow calling private signal
///
/// ``` QSslServer* self, void (*slot)(QTcpServer*) ```
void q_sslserver_on_pending_connection_available(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QSslServer* self, void (*slot)(QObject*, const char*) ```
void q_sslserver_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#dtor.QSslServer)
///
/// Delete this object from C++ memory.
///
/// ``` QSslServer* self ```
void q_sslserver_delete(void* self);

#endif

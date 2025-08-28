#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLSERVER_H
#define SRC_NETWORKQT6C_LIBQSSLSERVER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsslserver.html

/// q_sslserver_new constructs a new QSslServer object.
///
QSslServer* q_sslserver_new();

/// q_sslserver_new2 constructs a new QSslServer object.
///
/// @param parent QObject*
QSslServer* q_sslserver_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSslServer*
const QMetaObject* q_sslserver_meta_object(void* self);

/// @param self QSslServer*
/// @param param1 const char*
void* q_sslserver_metacast(void* self, const char* param1);

/// @param self QSslServer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_sslserver_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSslServer*
/// @param callback int32_t func(QSslServer* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_sslserver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSslServer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_sslserver_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_sslserver_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#setSslConfiguration)
///
/// @param self QSslServer*
/// @param sslConfiguration QSslConfiguration*
void q_sslserver_set_ssl_configuration(void* self, void* sslConfiguration);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#sslConfiguration)
///
/// @param self QSslServer*
QSslConfiguration* q_sslserver_ssl_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#setHandshakeTimeout)
///
/// @param self QSslServer*
/// @param timeout int
void q_sslserver_set_handshake_timeout(void* self, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#handshakeTimeout)
///
/// @param self QSslServer*
int32_t q_sslserver_handshake_timeout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#sslErrors)
///
/// @param self QSslServer*
/// @param socket QSslSocket*
/// @param errors libqt_list /* of QSslError* */
void q_sslserver_ssl_errors(void* self, void* socket, libqt_list errors);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#sslErrors)
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QSslSocket* socket, libqt_list /* of QSslError* */ /* of QSslError* */)
void q_sslserver_on_ssl_errors(void* self, void (*callback)(void*, void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#peerVerifyError)
///
/// @param self QSslServer*
/// @param socket QSslSocket*
/// @param errorVal QSslError*
void q_sslserver_peer_verify_error(void* self, void* socket, void* errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#peerVerifyError)
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QSslSocket* socket, QSslError* errorVal)
void q_sslserver_on_peer_verify_error(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#errorOccurred)
///
/// @param self QSslServer*
/// @param socket QSslSocket*
/// @param errorVal enum QAbstractSocket__SocketError
void q_sslserver_error_occurred(void* self, void* socket, int32_t errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#errorOccurred)
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QSslSocket* socket, enum QAbstractSocket__SocketError errorVal)
void q_sslserver_on_error_occurred(void* self, void (*callback)(void*, void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#preSharedKeyAuthenticationRequired)
///
/// @param self QSslServer*
/// @param socket QSslSocket*
/// @param authenticator QSslPreSharedKeyAuthenticator*
void q_sslserver_pre_shared_key_authentication_required(void* self, void* socket, void* authenticator);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#preSharedKeyAuthenticationRequired)
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator)
void q_sslserver_on_pre_shared_key_authentication_required(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertSent)
///
/// @param self QSslServer*
/// @param socket QSslSocket*
/// @param level enum QSsl__AlertLevel
/// @param typeVal enum QSsl__AlertType
/// @param description const char*
void q_sslserver_alert_sent(void* self, void* socket, int32_t level, int32_t typeVal, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertSent)
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QSslSocket* socket, enum QSsl__AlertLevel level, enum QSsl__AlertType typeVal, const char* description)
void q_sslserver_on_alert_sent(void* self, void (*callback)(void*, void*, int32_t, int32_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertReceived)
///
/// @param self QSslServer*
/// @param socket QSslSocket*
/// @param level enum QSsl__AlertLevel
/// @param typeVal enum QSsl__AlertType
/// @param description const char*
void q_sslserver_alert_received(void* self, void* socket, int32_t level, int32_t typeVal, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertReceived)
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QSslSocket* socket, enum QSsl__AlertLevel level, enum QSsl__AlertType typeVal, const char* description)
void q_sslserver_on_alert_received(void* self, void (*callback)(void*, void*, int32_t, int32_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#handshakeInterruptedOnError)
///
/// @param self QSslServer*
/// @param socket QSslSocket*
/// @param errorVal QSslError*
void q_sslserver_handshake_interrupted_on_error(void* self, void* socket, void* errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#handshakeInterruptedOnError)
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QSslSocket* socket, QSslError* errorVal)
void q_sslserver_on_handshake_interrupted_on_error(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#startedEncryptionHandshake)
///
/// @param self QSslServer*
/// @param socket QSslSocket*
void q_sslserver_started_encryption_handshake(void* self, void* socket);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#startedEncryptionHandshake)
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QSslSocket* socket)
void q_sslserver_on_started_encryption_handshake(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#incomingConnection)
///
/// @param self QSslServer*
/// @param socket intptr_t
void q_sslserver_incoming_connection(void* self, intptr_t socket);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#incomingConnection)
///
/// Allows for overriding the related default method
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, intptr_t socket)
void q_sslserver_on_incoming_connection(void* self, void (*callback)(void*, intptr_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#incomingConnection)
///
/// Base class method implementation
///
/// @param self QSslServer*
/// @param socket intptr_t
void q_sslserver_qbase_incoming_connection(void* self, intptr_t socket);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_sslserver_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_sslserver_tr3(const char* s, const char* c, int n);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// @param self QSslServer*
bool q_sslserver_listen(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#close)
///
/// @param self QSslServer*
void q_sslserver_close(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
///
/// @param self QSslServer*
bool q_sslserver_is_listening(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
///
/// @param self QSslServer*
/// @param numConnections int
void q_sslserver_set_max_pending_connections(void* self, int numConnections);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
///
/// @param self QSslServer*
int32_t q_sslserver_max_pending_connections(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
///
/// @param self QSslServer*
/// @param size int
void q_sslserver_set_listen_backlog_size(void* self, int size);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
///
/// @param self QSslServer*
int32_t q_sslserver_listen_backlog_size(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
///
/// @param self QSslServer*
unsigned short q_sslserver_server_port(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
///
/// @param self QSslServer*
QHostAddress* q_sslserver_server_address(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
///
/// @param self QSslServer*
intptr_t q_sslserver_socket_descriptor(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
///
/// @param self QSslServer*
/// @param socketDescriptor intptr_t
bool q_sslserver_set_socket_descriptor(void* self, intptr_t socketDescriptor);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// @param self QSslServer*
bool q_sslserver_wait_for_new_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
///
/// @param self QSslServer*
///
/// @return enum QAbstractSocket__SocketError
int32_t q_sslserver_server_error(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslServer*
const char* q_sslserver_error_string(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
///
/// @param self QSslServer*
void q_sslserver_pause_accepting(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
///
/// @param self QSslServer*
void q_sslserver_resume_accepting(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
///
/// @param self QSslServer*
/// @param networkProxy QNetworkProxy*
void q_sslserver_set_proxy(void* self, void* networkProxy);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
///
/// @param self QSslServer*
QNetworkProxy* q_sslserver_proxy(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
///
/// @param self QSslServer*
void q_sslserver_new_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self)
void q_sslserver_on_new_connection(void* self, void (*callback)(void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
///
/// @param self QSslServer*
/// @param socketError enum QAbstractSocket__SocketError
void q_sslserver_accept_error(void* self, int32_t socketError);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, enum QAbstractSocket__SocketError socketError)
void q_sslserver_on_accept_error(void* self, void (*callback)(void*, int32_t));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// @param self QSslServer*
/// @param address QHostAddress*
bool q_sslserver_listen1(void* self, void* address);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// @param self QSslServer*
/// @param address QHostAddress*
/// @param port unsigned short
bool q_sslserver_listen2(void* self, void* address, unsigned short port);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// @param self QSslServer*
/// @param msec int
bool q_sslserver_wait_for_new_connection1(void* self, int msec);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// @param self QSslServer*
/// @param msec int
/// @param timedOut bool*
bool q_sslserver_wait_for_new_connection2(void* self, int msec, bool* timedOut);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslServer*
const char* q_sslserver_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSslServer*
/// @param name char*
void q_sslserver_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSslServer*
bool q_sslserver_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSslServer*
bool q_sslserver_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSslServer*
bool q_sslserver_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSslServer*
bool q_sslserver_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSslServer*
/// @param b bool
bool q_sslserver_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSslServer*
QThread* q_sslserver_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSslServer*
/// @param thread QThread*
bool q_sslserver_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSslServer*
/// @param interval int
int32_t q_sslserver_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSslServer*
/// @param id int
void q_sslserver_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSslServer*
/// @param id enum Qt__TimerId
void q_sslserver_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSslServer*
libqt_list /* of QObject* */ q_sslserver_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSslServer*
/// @param parent QObject*
void q_sslserver_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSslServer*
/// @param filterObj QObject*
void q_sslserver_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSslServer*
/// @param obj QObject*
void q_sslserver_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_sslserver_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSslServer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_sslserver_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_sslserver_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_sslserver_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSslServer*
void q_sslserver_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSslServer*
void q_sslserver_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSslServer*
/// @param name const char*
/// @param value QVariant*
bool q_sslserver_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSslServer*
/// @param name const char*
QVariant* q_sslserver_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslServer*
const char** q_sslserver_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSslServer*
QBindingStorage* q_sslserver_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSslServer*
const QBindingStorage* q_sslserver_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSslServer*
void q_sslserver_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self)
void q_sslserver_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSslServer*
QObject* q_sslserver_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSslServer*
/// @param classname const char*
bool q_sslserver_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSslServer*
void q_sslserver_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSslServer*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_sslserver_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSslServer*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_sslserver_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_sslserver_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSslServer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_sslserver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSslServer*
/// @param param1 QObject*
void q_sslserver_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QObject* param1)
void q_sslserver_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslServer*
bool q_sslserver_has_pending_connections(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslServer*
bool q_sslserver_qbase_has_pending_connections(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslServer*
/// @param callback bool func()
void q_sslserver_on_has_pending_connections(void* self, bool (*callback)());

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslServer*
QTcpSocket* q_sslserver_next_pending_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslServer*
QTcpSocket* q_sslserver_qbase_next_pending_connection(void* self);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslServer*
/// @param callback QTcpSocket* func()
void q_sslserver_on_next_pending_connection(void* self, QTcpSocket* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslServer*
/// @param event QEvent*
bool q_sslserver_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslServer*
/// @param event QEvent*
bool q_sslserver_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslServer*
/// @param callback bool func(QSslServer* self, QEvent* event)
void q_sslserver_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslServer*
/// @param watched QObject*
/// @param event QEvent*
bool q_sslserver_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslServer*
/// @param watched QObject*
/// @param event QEvent*
bool q_sslserver_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslServer*
/// @param callback bool func(QSslServer* self, QObject* watched, QEvent* event)
void q_sslserver_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslServer*
/// @param event QTimerEvent*
void q_sslserver_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslServer*
/// @param event QTimerEvent*
void q_sslserver_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QTimerEvent* event)
void q_sslserver_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslServer*
/// @param event QChildEvent*
void q_sslserver_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslServer*
/// @param event QChildEvent*
void q_sslserver_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QChildEvent* event)
void q_sslserver_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslServer*
/// @param event QEvent*
void q_sslserver_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslServer*
/// @param event QEvent*
void q_sslserver_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QEvent* event)
void q_sslserver_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslServer*
/// @param signal QMetaMethod*
void q_sslserver_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslServer*
/// @param signal QMetaMethod*
void q_sslserver_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QMetaMethod* signal)
void q_sslserver_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslServer*
/// @param signal QMetaMethod*
void q_sslserver_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslServer*
/// @param signal QMetaMethod*
void q_sslserver_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QMetaMethod* signal)
void q_sslserver_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslServer*
/// @param socket QTcpSocket*
void q_sslserver_add_pending_connection(void* self, void* socket);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslServer*
/// @param socket QTcpSocket*
void q_sslserver_qbase_add_pending_connection(void* self, void* socket);

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, QTcpSocket* socket)
void q_sslserver_on_add_pending_connection(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslServer*
QObject* q_sslserver_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslServer*
QObject* q_sslserver_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslServer*
/// @param callback QObject* func()
void q_sslserver_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslServer*
int32_t q_sslserver_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslServer*
int32_t q_sslserver_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslServer*
/// @param callback int32_t func()
void q_sslserver_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslServer*
/// @param signal const char*
int32_t q_sslserver_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslServer*
/// @param signal const char*
int32_t q_sslserver_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslServer*
/// @param callback int32_t func(QSslServer* self, const char* signal)
void q_sslserver_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslServer*
/// @param signal QMetaMethod*
bool q_sslserver_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslServer*
/// @param signal QMetaMethod*
bool q_sslserver_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslServer*
/// @param callback bool func(QSslServer* self, QMetaMethod* signal)
void q_sslserver_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pendingConnectionAvailable)
///
/// Wrapper to allow calling private signal
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self)
void q_sslserver_on_pending_connection_available(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSslServer*
/// @param callback void func(QSslServer* self, const char* objectName)
void q_sslserver_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#dtor.QSslServer)
///
/// Delete this object from C++ memory.
///
/// @param self QSslServer*
void q_sslserver_delete(void* self);

#endif

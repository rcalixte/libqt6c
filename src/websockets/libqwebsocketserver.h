#pragma once
#ifndef WEBSOCKETS_LIBQWEBSOCKETSERVER_H
#define WEBSOCKETS_LIBQWEBSOCKETSERVER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html)

/// q_websocketserver_new constructs a new QWebSocketServer object.
///
/// @param serverName const char*
/// @param secureMode enum QWebSocketServer__SslMode
///
QWebSocketServer* q_websocketserver_new(const char* serverName, int32_t secureMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html)

/// q_websocketserver_new2 constructs a new QWebSocketServer object.
///
/// @param serverName const char*
/// @param secureMode enum QWebSocketServer__SslMode
/// @param parent QObject*
///
QWebSocketServer* q_websocketserver_new2(const char* serverName, int32_t secureMode, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QWebSocketServer*
///
const QMetaObject* q_websocketserver_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QWebSocketServer*
/// @param callback const QMetaObject* func(const QWebSocketServer* self)
///
void q_websocketserver_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QWebSocketServer*
///
const QMetaObject* q_websocketserver_super_meta_object(const void* self);

/// @param self QWebSocketServer*
/// @param param1 const char*
///
void* q_websocketserver_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QWebSocketServer*
/// @param callback void* func(QWebSocketServer* self, const char* param1)
///
void q_websocketserver_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QWebSocketServer*
/// @param param1 const char*
///
void* q_websocketserver_super_metacast(void* self, const char* param1);

/// @param self QWebSocketServer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_websocketserver_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWebSocketServer*
/// @param callback int32_t func(QWebSocketServer* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_websocketserver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWebSocketServer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_websocketserver_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_websocketserver_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#listen)
///
/// @param self QWebSocketServer*
///
bool q_websocketserver_listen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#close)
///
/// @param self QWebSocketServer*
///
void q_websocketserver_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#isListening)
///
/// @param self const QWebSocketServer*
///
bool q_websocketserver_is_listening(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setMaxPendingConnections)
///
/// @param self QWebSocketServer*
/// @param numConnections int
///
void q_websocketserver_set_max_pending_connections(void* self, int numConnections);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#maxPendingConnections)
///
/// @param self const QWebSocketServer*
///
int32_t q_websocketserver_max_pending_connections(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setHandshakeTimeout)
///
/// @param self QWebSocketServer*
/// @param msec int64_t of milliseconds
///
void q_websocketserver_set_handshake_timeout(void* self, int64_t msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeTimeout)
///
/// @param self const QWebSocketServer*
///
/// @return int64_t of milliseconds
///
int64_t q_websocketserver_handshake_timeout(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setHandshakeTimeout)
///
/// @param self QWebSocketServer*
/// @param msec int
///
void q_websocketserver_set_handshake_timeout2(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeTimeoutMS)
///
/// @param self const QWebSocketServer*
///
int32_t q_websocketserver_handshake_timeout_m_s(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverPort)
///
/// @param self const QWebSocketServer*
///
uint16_t q_websocketserver_server_port(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverAddress)
///
/// @param self const QWebSocketServer*
///
QHostAddress* q_websocketserver_server_address(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverUrl)
///
/// @param self const QWebSocketServer*
///
QUrl* q_websocketserver_server_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#secureMode)
///
/// @param self const QWebSocketServer*
///
/// @return enum QWebSocketServer__SslMode
///
int32_t q_websocketserver_secure_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setSocketDescriptor)
///
/// @param self QWebSocketServer*
/// @param socketDescriptor intptr_t
///
bool q_websocketserver_set_socket_descriptor(void* self, intptr_t socketDescriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#socketDescriptor)
///
/// @param self const QWebSocketServer*
///
intptr_t q_websocketserver_socket_descriptor(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setNativeDescriptor)
///
/// @param self QWebSocketServer*
/// @param descriptor intptr_t
///
bool q_websocketserver_set_native_descriptor(void* self, intptr_t descriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nativeDescriptor)
///
/// @param self const QWebSocketServer*
///
intptr_t q_websocketserver_native_descriptor(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#hasPendingConnections)
///
/// @param self const QWebSocketServer*
///
bool q_websocketserver_has_pending_connections(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nextPendingConnection)
///
/// @param self QWebSocketServer*
///
QWebSocket* q_websocketserver_next_pending_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nextPendingConnection)
///
/// Allows for overriding the related default method
///
/// @param self QWebSocketServer*
/// @param callback QWebSocket* func(QWebSocketServer* self)
///
void q_websocketserver_on_next_pending_connection(void* self, QWebSocket* (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nextPendingConnection)
///
/// Base class method implementation
///
/// @param self QWebSocketServer*
///
QWebSocket* q_websocketserver_super_next_pending_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#error)
///
/// @param self const QWebSocketServer*
///
/// @return enum QWebSocketProtocol__CloseCode
///
int32_t q_websocketserver_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebSocketServer*
///
const char* q_websocketserver_error_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#pauseAccepting)
///
/// @param self QWebSocketServer*
///
void q_websocketserver_pause_accepting(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#resumeAccepting)
///
/// @param self QWebSocketServer*
///
void q_websocketserver_resume_accepting(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setServerName)
///
/// @param self QWebSocketServer*
/// @param serverName const char*
///
void q_websocketserver_set_server_name(void* self, const char* serverName);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebSocketServer*
///
const char* q_websocketserver_server_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setSupportedSubprotocols)
///
/// @param self QWebSocketServer*
/// @param protocols const char**
///
void q_websocketserver_set_supported_subprotocols(void* self, const char* protocols[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#supportedSubprotocols)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebSocketServer*
///
const char** q_websocketserver_supported_subprotocols(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setProxy)
///
/// @param self QWebSocketServer*
/// @param networkProxy QNetworkProxy*
///
void q_websocketserver_set_proxy(void* self, const void* networkProxy);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#proxy)
///
/// @param self const QWebSocketServer*
///
QNetworkProxy* q_websocketserver_proxy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setSslConfiguration)
///
/// @param self QWebSocketServer*
/// @param sslConfiguration QSslConfiguration*
///
void q_websocketserver_set_ssl_configuration(void* self, const void* sslConfiguration);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslConfiguration)
///
/// @param self const QWebSocketServer*
///
QSslConfiguration* q_websocketserver_ssl_configuration(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#supportedVersions)
///
/// @param self const QWebSocketServer*
///
/// @return libqt_list of enum QWebSocketProtocol__Version
///
libqt_list q_websocketserver_supported_versions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handleConnection)
///
/// @param self const QWebSocketServer*
/// @param socket QTcpSocket*
///
void q_websocketserver_handle_connection(const void* self, void* socket);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#acceptError)
///
/// @param self QWebSocketServer*
/// @param socketError enum QAbstractSocket__SocketError
///
void q_websocketserver_accept_error(void* self, int32_t socketError);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#acceptError)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, enum QAbstractSocket__SocketError socketError)
///
void q_websocketserver_on_accept_error(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverError)
///
/// @param self QWebSocketServer*
/// @param closeCode enum QWebSocketProtocol__CloseCode
///
void q_websocketserver_server_error(void* self, int32_t closeCode);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverError)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, enum QWebSocketProtocol__CloseCode closeCode)
///
void q_websocketserver_on_server_error(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#originAuthenticationRequired)
///
/// @param self QWebSocketServer*
/// @param pAuthenticator QWebSocketCorsAuthenticator*
///
void q_websocketserver_origin_authentication_required(void* self, void* pAuthenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#originAuthenticationRequired)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QWebSocketCorsAuthenticator* pAuthenticator)
///
void q_websocketserver_on_origin_authentication_required(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#newConnection)
///
/// @param self QWebSocketServer*
///
void q_websocketserver_new_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#newConnection)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self)
///
void q_websocketserver_on_new_connection(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#peerVerifyError)
///
/// @param self QWebSocketServer*
/// @param error QSslError*
///
void q_websocketserver_peer_verify_error(void* self, const void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#peerVerifyError)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QSslError* error)
///
void q_websocketserver_on_peer_verify_error(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslErrors)
///
/// @param self QWebSocketServer*
/// @param errors libqt_list of QSslError*
///
void q_websocketserver_ssl_errors(void* self, libqt_list errors);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslErrors)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, libqt_list of QSslError* errors)
///
void q_websocketserver_on_ssl_errors(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#preSharedKeyAuthenticationRequired)
///
/// @param self QWebSocketServer*
/// @param authenticator QSslPreSharedKeyAuthenticator*
///
void q_websocketserver_pre_shared_key_authentication_required(void* self, void* authenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#preSharedKeyAuthenticationRequired)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QSslPreSharedKeyAuthenticator* authenticator)
///
void q_websocketserver_on_pre_shared_key_authentication_required(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#alertSent)
///
/// @param self QWebSocketServer*
/// @param level enum QSsl__AlertLevel
/// @param type enum QSsl__AlertType
/// @param description const char*
///
void q_websocketserver_alert_sent(void* self, int32_t level, int32_t type, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#alertSent)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, enum QSsl__AlertLevel level, enum QSsl__AlertType type, const char* description)
///
void q_websocketserver_on_alert_sent(void* self, void (*callback)(void*, int32_t, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#alertReceived)
///
/// @param self QWebSocketServer*
/// @param level enum QSsl__AlertLevel
/// @param type enum QSsl__AlertType
/// @param description const char*
///
void q_websocketserver_alert_received(void* self, int32_t level, int32_t type, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#alertReceived)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, enum QSsl__AlertLevel level, enum QSsl__AlertType type, const char* description)
///
void q_websocketserver_on_alert_received(void* self, void (*callback)(void*, int32_t, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeInterruptedOnError)
///
/// @param self QWebSocketServer*
/// @param error QSslError*
///
void q_websocketserver_handshake_interrupted_on_error(void* self, const void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeInterruptedOnError)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QSslError* error)
///
void q_websocketserver_on_handshake_interrupted_on_error(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#closed)
///
/// @param self QWebSocketServer*
///
void q_websocketserver_closed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#closed)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self)
///
void q_websocketserver_on_closed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_websocketserver_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_websocketserver_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#listen)
///
/// @param self QWebSocketServer*
/// @param address QHostAddress*
///
bool q_websocketserver_listen1(void* self, const void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#listen)
///
/// @param self QWebSocketServer*
/// @param address QHostAddress*
/// @param port uint16_t
///
bool q_websocketserver_listen2(void* self, const void* address, uint16_t port);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebSocketServer*
///
const char* q_websocketserver_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebSocketServer*
/// @param name const char*
///
void q_websocketserver_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QWebSocketServer*
///
bool q_websocketserver_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QWebSocketServer*
///
bool q_websocketserver_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QWebSocketServer*
///
bool q_websocketserver_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QWebSocketServer*
///
bool q_websocketserver_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebSocketServer*
/// @param b bool
///
bool q_websocketserver_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QWebSocketServer*
///
QThread* q_websocketserver_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebSocketServer*
/// @param thread QThread*
///
bool q_websocketserver_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebSocketServer*
/// @param interval int
///
int32_t q_websocketserver_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebSocketServer*
/// @param time int64_t of nanoseconds
///
int32_t q_websocketserver_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebSocketServer*
/// @param id int
///
void q_websocketserver_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebSocketServer*
/// @param id enum Qt__TimerId
///
void q_websocketserver_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QWebSocketServer*
///
/// @return libqt_list of QObject*
///
libqt_list q_websocketserver_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebSocketServer*
/// @param parent QObject*
///
void q_websocketserver_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebSocketServer*
/// @param filterObj QObject*
///
void q_websocketserver_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebSocketServer*
/// @param obj QObject*
///
void q_websocketserver_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_websocketserver_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_websocketserver_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebSocketServer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_websocketserver_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_websocketserver_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_websocketserver_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebSocketServer*
///
bool q_websocketserver_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebSocketServer*
/// @param receiver QObject*
///
bool q_websocketserver_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_websocketserver_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QWebSocketServer*
///
void q_websocketserver_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QWebSocketServer*
///
void q_websocketserver_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebSocketServer*
/// @param name const char*
/// @param value QVariant*
///
bool q_websocketserver_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QWebSocketServer*
/// @param name const char*
///
QVariant* q_websocketserver_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebSocketServer*
///
const char** q_websocketserver_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebSocketServer*
///
QBindingStorage* q_websocketserver_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QWebSocketServer*
///
const QBindingStorage* q_websocketserver_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebSocketServer*
///
void q_websocketserver_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self)
///
void q_websocketserver_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QWebSocketServer*
///
QObject* q_websocketserver_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QWebSocketServer*
/// @param classname const char*
///
bool q_websocketserver_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebSocketServer*
///
void q_websocketserver_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebSocketServer*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_websocketserver_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebSocketServer*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_websocketserver_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_websocketserver_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_websocketserver_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebSocketServer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_websocketserver_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebSocketServer*
/// @param signal const char*
///
bool q_websocketserver_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebSocketServer*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_websocketserver_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebSocketServer*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_websocketserver_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebSocketServer*
/// @param receiver QObject*
/// @param member const char*
///
bool q_websocketserver_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebSocketServer*
/// @param param1 QObject*
///
void q_websocketserver_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QObject* param1)
///
void q_websocketserver_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocketServer*
/// @param event QEvent*
///
bool q_websocketserver_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param event QEvent*
///
bool q_websocketserver_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback bool func(QWebSocketServer* self, QEvent* event)
///
void q_websocketserver_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocketServer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_websocketserver_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_websocketserver_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback bool func(QWebSocketServer* self, QObject* watched, QEvent* event)
///
void q_websocketserver_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocketServer*
/// @param event QTimerEvent*
///
void q_websocketserver_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param event QTimerEvent*
///
void q_websocketserver_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QTimerEvent* event)
///
void q_websocketserver_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocketServer*
/// @param event QChildEvent*
///
void q_websocketserver_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param event QChildEvent*
///
void q_websocketserver_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QChildEvent* event)
///
void q_websocketserver_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocketServer*
/// @param event QEvent*
///
void q_websocketserver_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param event QEvent*
///
void q_websocketserver_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QEvent* event)
///
void q_websocketserver_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocketServer*
/// @param signal QMetaMethod*
///
void q_websocketserver_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param signal QMetaMethod*
///
void q_websocketserver_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QMetaMethod* signal)
///
void q_websocketserver_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocketServer*
/// @param signal QMetaMethod*
///
void q_websocketserver_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param signal QMetaMethod*
///
void q_websocketserver_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QMetaMethod* signal)
///
void q_websocketserver_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWebSocketServer*
///
QObject* q_websocketserver_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWebSocketServer*
///
QObject* q_websocketserver_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback QObject* func(QWebSocketServer* self)
///
void q_websocketserver_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWebSocketServer*
///
int32_t q_websocketserver_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWebSocketServer*
///
int32_t q_websocketserver_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback int32_t func(QWebSocketServer* self)
///
void q_websocketserver_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWebSocketServer*
/// @param signal const char*
///
int32_t q_websocketserver_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWebSocketServer*
/// @param signal const char*
///
int32_t q_websocketserver_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback int32_t func(QWebSocketServer* self, const char* signal)
///
void q_websocketserver_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWebSocketServer*
/// @param signal QMetaMethod*
///
bool q_websocketserver_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWebSocketServer*
/// @param signal QMetaMethod*
///
bool q_websocketserver_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback bool func(QWebSocketServer* self, QMetaMethod* signal)
///
void q_websocketserver_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, const char* objectName)
///
void q_websocketserver_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#dtor.QWebSocketServer)
///
/// Delete this object from C++ memory.
///
/// @param self QWebSocketServer*
///
void q_websocketserver_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#public-types)

typedef enum {
    QWEBSOCKETSERVER_SSLMODE_SECUREMODE = 0,
    QWEBSOCKETSERVER_SSLMODE_NONSECUREMODE = 1
} QWebSocketServer__SslMode;

#endif

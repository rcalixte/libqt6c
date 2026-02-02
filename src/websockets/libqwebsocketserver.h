#pragma once
#ifndef SRC_WEBSOCKETS_QT6C_LIBQWEBSOCKETSERVER_H
#define SRC_WEBSOCKETS_QT6C_LIBQWEBSOCKETSERVER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self QWebSocketServer*
///
const QMetaObject* q_websocketserver_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QWebSocketServer*
/// @param callback const QMetaObject* func()
///
void q_websocketserver_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QWebSocketServer*
///
const QMetaObject* q_websocketserver_qbase_meta_object(void* self);

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
void* q_websocketserver_qbase_metacast(void* self, const char* param1);

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
int32_t q_websocketserver_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

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
/// @param self QWebSocketServer*
///
bool q_websocketserver_is_listening(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setMaxPendingConnections)
///
/// @param self QWebSocketServer*
/// @param numConnections int
///
void q_websocketserver_set_max_pending_connections(void* self, int numConnections);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#maxPendingConnections)
///
/// @param self QWebSocketServer*
///
int32_t q_websocketserver_max_pending_connections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setHandshakeTimeout)
///
/// @param self QWebSocketServer*
/// @param msec int64_t of milliseconds
///
void q_websocketserver_set_handshake_timeout(void* self, int64_t msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeTimeout)
///
/// @param self QWebSocketServer*
///
/// @return int64_t of milliseconds
///
int64_t q_websocketserver_handshake_timeout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setHandshakeTimeout)
///
/// @param self QWebSocketServer*
/// @param msec int
///
void q_websocketserver_set_handshake_timeout2(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeTimeoutMS)
///
/// @param self QWebSocketServer*
///
int32_t q_websocketserver_handshake_timeout_m_s(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverPort)
///
/// @param self QWebSocketServer*
///
unsigned short q_websocketserver_server_port(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverAddress)
///
/// @param self QWebSocketServer*
///
QHostAddress* q_websocketserver_server_address(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverUrl)
///
/// @param self QWebSocketServer*
///
QUrl* q_websocketserver_server_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#secureMode)
///
/// @param self QWebSocketServer*
///
/// @return enum QWebSocketServer__SslMode
///
int32_t q_websocketserver_secure_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setSocketDescriptor)
///
/// @param self QWebSocketServer*
/// @param socketDescriptor intptr_t
///
bool q_websocketserver_set_socket_descriptor(void* self, intptr_t socketDescriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#socketDescriptor)
///
/// @param self QWebSocketServer*
///
intptr_t q_websocketserver_socket_descriptor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setNativeDescriptor)
///
/// @param self QWebSocketServer*
/// @param descriptor intptr_t
///
bool q_websocketserver_set_native_descriptor(void* self, intptr_t descriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nativeDescriptor)
///
/// @param self QWebSocketServer*
///
intptr_t q_websocketserver_native_descriptor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#hasPendingConnections)
///
/// @param self QWebSocketServer*
///
bool q_websocketserver_has_pending_connections(void* self);

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
/// @param callback QWebSocket* func()
///
void q_websocketserver_on_next_pending_connection(void* self, QWebSocket* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nextPendingConnection)
///
/// Base class method implementation
///
/// @param self QWebSocketServer*
///
QWebSocket* q_websocketserver_qbase_next_pending_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#error)
///
/// @param self QWebSocketServer*
///
/// @return enum QWebSocketProtocol__CloseCode
///
int32_t q_websocketserver_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebSocketServer*
///
const char* q_websocketserver_error_string(void* self);

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
/// @param self QWebSocketServer*
///
const char* q_websocketserver_server_name(void* self);

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
/// @param self QWebSocketServer*
///
const char** q_websocketserver_supported_subprotocols(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setProxy)
///
/// @param self QWebSocketServer*
/// @param networkProxy QNetworkProxy*
///
void q_websocketserver_set_proxy(void* self, void* networkProxy);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#proxy)
///
/// @param self QWebSocketServer*
///
QNetworkProxy* q_websocketserver_proxy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setSslConfiguration)
///
/// @param self QWebSocketServer*
/// @param sslConfiguration QSslConfiguration*
///
void q_websocketserver_set_ssl_configuration(void* self, void* sslConfiguration);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslConfiguration)
///
/// @param self QWebSocketServer*
///
QSslConfiguration* q_websocketserver_ssl_configuration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#supportedVersions)
///
/// @param self QWebSocketServer*
///
/// @return libqt_list of enum QWebSocketProtocol__Version
///
libqt_list q_websocketserver_supported_versions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handleConnection)
///
/// @param self QWebSocketServer*
/// @param socket QTcpSocket*
///
void q_websocketserver_handle_connection(void* self, void* socket);

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
void q_websocketserver_peer_verify_error(void* self, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#peerVerifyError)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QSslError* error)
///
void q_websocketserver_on_peer_verify_error(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslErrors)
///
/// @param self QWebSocketServer*
/// @param errors libqt_list of QSslError*
///
void q_websocketserver_ssl_errors(void* self, libqt_list /* of QSslError* */ errors);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslErrors)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QSslError** errors)
///
void q_websocketserver_on_ssl_errors(void* self, void (*callback)(void*, QSslError**));

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
void q_websocketserver_handshake_interrupted_on_error(void* self, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeInterruptedOnError)
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QSslError* error)
///
void q_websocketserver_on_handshake_interrupted_on_error(void* self, void (*callback)(void*, void*));

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
bool q_websocketserver_listen1(void* self, void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#listen)
///
/// @param self QWebSocketServer*
/// @param address QHostAddress*
/// @param port unsigned short
///
bool q_websocketserver_listen2(void* self, void* address, unsigned short port);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebSocketServer*
///
const char* q_websocketserver_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebSocketServer*
/// @param name char*
///
void q_websocketserver_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebSocketServer*
///
bool q_websocketserver_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebSocketServer*
///
bool q_websocketserver_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebSocketServer*
///
bool q_websocketserver_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebSocketServer*
///
bool q_websocketserver_signals_blocked(void* self);

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
/// @param self QWebSocketServer*
///
QThread* q_websocketserver_thread(void* self);

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
/// @param self QWebSocketServer*
///
/// @return libqt_list of QObject*
///
libqt_list q_websocketserver_children(void* self);

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
QMetaObject__Connection* q_websocketserver_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_websocketserver_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebSocketServer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_websocketserver_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_websocketserver_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_websocketserver_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QWebSocketServer*
///
bool q_websocketserver_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QWebSocketServer*
/// @param receiver QObject*
///
bool q_websocketserver_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_websocketserver_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebSocketServer*
///
void q_websocketserver_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebSocketServer*
///
void q_websocketserver_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebSocketServer*
/// @param name const char*
/// @param value QVariant*
///
bool q_websocketserver_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebSocketServer*
/// @param name const char*
///
QVariant* q_websocketserver_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QWebSocketServer*
///
const char** q_websocketserver_dynamic_property_names(void* self);

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
/// @param self QWebSocketServer*
///
const QBindingStorage* q_websocketserver_binding_storage2(void* self);

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
/// @param self QWebSocketServer*
///
QObject* q_websocketserver_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebSocketServer*
/// @param classname const char*
///
bool q_websocketserver_inherits(void* self, const char* classname);

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
QMetaObject__Connection* q_websocketserver_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_websocketserver_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebSocketServer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_websocketserver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QWebSocketServer*
/// @param signal const char*
///
bool q_websocketserver_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QWebSocketServer*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_websocketserver_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QWebSocketServer*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_websocketserver_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QWebSocketServer*
/// @param receiver QObject*
/// @param member const char*
///
bool q_websocketserver_disconnect23(void* self, void* receiver, const char* member);

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
bool q_websocketserver_qbase_event(void* self, void* event);

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
bool q_websocketserver_qbase_event_filter(void* self, void* watched, void* event);

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
void q_websocketserver_qbase_timer_event(void* self, void* event);

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
void q_websocketserver_qbase_child_event(void* self, void* event);

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
void q_websocketserver_qbase_custom_event(void* self, void* event);

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
void q_websocketserver_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param signal QMetaMethod*
///
void q_websocketserver_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QMetaMethod* signal)
///
void q_websocketserver_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocketServer*
/// @param signal QMetaMethod*
///
void q_websocketserver_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param signal QMetaMethod*
///
void q_websocketserver_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback void func(QWebSocketServer* self, QMetaMethod* signal)
///
void q_websocketserver_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocketServer*
///
QObject* q_websocketserver_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocketServer*
///
QObject* q_websocketserver_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback QObject* func()
///
void q_websocketserver_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocketServer*
///
int32_t q_websocketserver_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocketServer*
///
int32_t q_websocketserver_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback int32_t func()
///
void q_websocketserver_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocketServer*
/// @param signal const char*
///
int32_t q_websocketserver_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param signal const char*
///
int32_t q_websocketserver_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback int32_t func(QWebSocketServer* self, const char* signal)
///
void q_websocketserver_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocketServer*
/// @param signal QMetaMethod*
///
bool q_websocketserver_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param signal QMetaMethod*
///
bool q_websocketserver_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocketServer*
/// @param callback bool func(QWebSocketServer* self, QMetaMethod* signal)
///
void q_websocketserver_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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

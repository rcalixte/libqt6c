#pragma once
#ifndef WEBSOCKETS_LIBQWEBSOCKET_H
#define WEBSOCKETS_LIBQWEBSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html)

/// q_websocket_new constructs a new QWebSocket object.
///
QWebSocket* q_websocket_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html)

/// q_websocket_new2 constructs a new QWebSocket object.
///
/// @param origin const char*
///
QWebSocket* q_websocket_new2(const char* origin);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html)

/// q_websocket_new3 constructs a new QWebSocket object.
///
/// @param origin const char*
/// @param version enum QWebSocketProtocol__Version
///
QWebSocket* q_websocket_new3(const char* origin, int32_t version);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html)

/// q_websocket_new4 constructs a new QWebSocket object.
///
/// @param origin const char*
/// @param version enum QWebSocketProtocol__Version
/// @param parent QObject*
///
QWebSocket* q_websocket_new4(const char* origin, int32_t version, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QWebSocket*
///
const QMetaObject* q_websocket_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QWebSocket*
/// @param callback const QMetaObject* func(const QWebSocket* self)
///
void q_websocket_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QWebSocket*
///
const QMetaObject* q_websocket_super_meta_object(const void* self);

/// @param self QWebSocket*
/// @param param1 const char*
///
void* q_websocket_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QWebSocket*
/// @param callback void* func(QWebSocket* self, const char* param1)
///
void q_websocket_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QWebSocket*
/// @param param1 const char*
///
void* q_websocket_super_metacast(void* self, const char* param1);

/// @param self QWebSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_websocket_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWebSocket*
/// @param callback int32_t func(QWebSocket* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_websocket_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWebSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_websocket_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_websocket_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#abort)
///
/// @param self QWebSocket*
///
void q_websocket_abort(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#error)
///
/// @param self const QWebSocket*
///
/// @return enum QAbstractSocket__SocketError
///
int32_t q_websocket_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebSocket*
///
const char* q_websocket_error_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#flush)
///
/// @param self QWebSocket*
///
bool q_websocket_flush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#isValid)
///
/// @param self const QWebSocket*
///
bool q_websocket_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#localAddress)
///
/// @param self const QWebSocket*
///
QHostAddress* q_websocket_local_address(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#localPort)
///
/// @param self const QWebSocket*
///
uint16_t q_websocket_local_port(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#pauseMode)
///
/// @param self const QWebSocket*
///
/// @return flag of enum QAbstractSocket__PauseMode
///
int32_t q_websocket_pause_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerAddress)
///
/// @param self const QWebSocket*
///
QHostAddress* q_websocket_peer_address(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebSocket*
///
const char* q_websocket_peer_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerPort)
///
/// @param self const QWebSocket*
///
uint16_t q_websocket_peer_port(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#proxy)
///
/// @param self const QWebSocket*
///
QNetworkProxy* q_websocket_proxy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setProxy)
///
/// @param self QWebSocket*
/// @param networkProxy QNetworkProxy*
///
void q_websocket_set_proxy(void* self, const void* networkProxy);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setMaskGenerator)
///
/// @param self QWebSocket*
/// @param maskGenerator QMaskGenerator*
///
void q_websocket_set_mask_generator(void* self, const void* maskGenerator);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maskGenerator)
///
/// @param self const QWebSocket*
///
const QMaskGenerator* q_websocket_mask_generator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#readBufferSize)
///
/// @param self const QWebSocket*
///
int64_t q_websocket_read_buffer_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setReadBufferSize)
///
/// @param self QWebSocket*
/// @param size int64_t
///
void q_websocket_set_read_buffer_size(void* self, int64_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#resume)
///
/// @param self QWebSocket*
///
void q_websocket_resume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setPauseMode)
///
/// @param self QWebSocket*
/// @param pauseMode flag of enum QAbstractSocket__PauseMode
///
void q_websocket_set_pause_mode(void* self, int32_t pauseMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#state)
///
/// @param self const QWebSocket*
///
/// @return enum QAbstractSocket__SocketState
///
int32_t q_websocket_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#version)
///
/// @param self const QWebSocket*
///
/// @return enum QWebSocketProtocol__Version
///
int32_t q_websocket_version(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#resourceName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebSocket*
///
const char* q_websocket_resource_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#requestUrl)
///
/// @param self const QWebSocket*
///
QUrl* q_websocket_request_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#request)
///
/// @param self const QWebSocket*
///
QNetworkRequest* q_websocket_request(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#handshakeOptions)
///
/// @param self const QWebSocket*
///
QWebSocketHandshakeOptions* q_websocket_handshake_options(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#origin)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebSocket*
///
const char* q_websocket_origin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#subprotocol)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebSocket*
///
const char* q_websocket_subprotocol(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#closeCode)
///
/// @param self const QWebSocket*
///
/// @return enum QWebSocketProtocol__CloseCode
///
int32_t q_websocket_close_code(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#closeReason)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebSocket*
///
const char* q_websocket_close_reason(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sendTextMessage)
///
/// @param self QWebSocket*
/// @param message const char*
///
int64_t q_websocket_send_text_message(void* self, const char* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sendBinaryMessage)
///
/// @param self QWebSocket*
/// @param data char*
///
int64_t q_websocket_send_binary_message(void* self, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ignoreSslErrors)
///
/// @param self QWebSocket*
/// @param errors libqt_list of QSslError*
///
void q_websocket_ignore_ssl_errors(void* self, libqt_list errors);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#continueInterruptedHandshake)
///
/// @param self QWebSocket*
///
void q_websocket_continue_interrupted_handshake(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setSslConfiguration)
///
/// @param self QWebSocket*
/// @param sslConfiguration QSslConfiguration*
///
void q_websocket_set_ssl_configuration(void* self, const void* sslConfiguration);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sslConfiguration)
///
/// @param self const QWebSocket*
///
QSslConfiguration* q_websocket_ssl_configuration(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#bytesToWrite)
///
/// @param self const QWebSocket*
///
int64_t q_websocket_bytes_to_write(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setMaxAllowedIncomingFrameSize)
///
/// @param self QWebSocket*
/// @param maxAllowedIncomingFrameSize uint64_t
///
void q_websocket_set_max_allowed_incoming_frame_size(void* self, uint64_t maxAllowedIncomingFrameSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxAllowedIncomingFrameSize)
///
/// @param self const QWebSocket*
///
uint64_t q_websocket_max_allowed_incoming_frame_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setMaxAllowedIncomingMessageSize)
///
/// @param self QWebSocket*
/// @param maxAllowedIncomingMessageSize uint64_t
///
void q_websocket_set_max_allowed_incoming_message_size(void* self, uint64_t maxAllowedIncomingMessageSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxAllowedIncomingMessageSize)
///
/// @param self const QWebSocket*
///
uint64_t q_websocket_max_allowed_incoming_message_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxIncomingMessageSize)
///
uint64_t q_websocket_max_incoming_message_size();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxIncomingFrameSize)
///
uint64_t q_websocket_max_incoming_frame_size();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setOutgoingFrameSize)
///
/// @param self QWebSocket*
/// @param outgoingFrameSize uint64_t
///
void q_websocket_set_outgoing_frame_size(void* self, uint64_t outgoingFrameSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#outgoingFrameSize)
///
/// @param self const QWebSocket*
///
uint64_t q_websocket_outgoing_frame_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxOutgoingFrameSize)
///
uint64_t q_websocket_max_outgoing_frame_size();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#close)
///
/// @param self QWebSocket*
///
void q_websocket_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
///
/// @param self QWebSocket*
/// @param url QUrl*
///
void q_websocket_open(void* self, const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
///
/// @param self QWebSocket*
/// @param request QNetworkRequest*
///
void q_websocket_open2(void* self, const void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
///
/// @param self QWebSocket*
/// @param url QUrl*
/// @param options QWebSocketHandshakeOptions*
///
void q_websocket_open3(void* self, const void* url, const void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
///
/// @param self QWebSocket*
/// @param request QNetworkRequest*
/// @param options QWebSocketHandshakeOptions*
///
void q_websocket_open4(void* self, const void* request, const void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ping)
///
/// @param self QWebSocket*
///
void q_websocket_ping(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ignoreSslErrors)
///
/// @param self QWebSocket*
///
void q_websocket_ignore_ssl_errors2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#aboutToClose)
///
/// @param self QWebSocket*
///
void q_websocket_about_to_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#aboutToClose)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self)
///
void q_websocket_on_about_to_close(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#connected)
///
/// @param self QWebSocket*
///
void q_websocket_connected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#connected)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self)
///
void q_websocket_on_connected(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#disconnected)
///
/// @param self QWebSocket*
///
void q_websocket_disconnected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#disconnected)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self)
///
void q_websocket_on_disconnected(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#stateChanged)
///
/// @param self QWebSocket*
/// @param state enum QAbstractSocket__SocketState
///
void q_websocket_state_changed(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#stateChanged)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, enum QAbstractSocket__SocketState state)
///
void q_websocket_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#proxyAuthenticationRequired)
///
/// @param self QWebSocket*
/// @param proxy QNetworkProxy*
/// @param pAuthenticator QAuthenticator*
///
void q_websocket_proxy_authentication_required(void* self, const void* proxy, void* pAuthenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#proxyAuthenticationRequired)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, QNetworkProxy* proxy, QAuthenticator* pAuthenticator)
///
void q_websocket_on_proxy_authentication_required(void* self, void (*callback)(void*, const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#authenticationRequired)
///
/// @param self QWebSocket*
/// @param authenticator QAuthenticator*
///
void q_websocket_authentication_required(void* self, void* authenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#authenticationRequired)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, QAuthenticator* authenticator)
///
void q_websocket_on_authentication_required(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#readChannelFinished)
///
/// @param self QWebSocket*
///
void q_websocket_read_channel_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#readChannelFinished)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self)
///
void q_websocket_on_read_channel_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textFrameReceived)
///
/// @param self QWebSocket*
/// @param frame const char*
/// @param isLastFrame bool
///
void q_websocket_text_frame_received(void* self, const char* frame, bool isLastFrame);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textFrameReceived)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, const char* frame, bool isLastFrame)
///
void q_websocket_on_text_frame_received(void* self, void (*callback)(void*, const char*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryFrameReceived)
///
/// @param self QWebSocket*
/// @param frame char*
/// @param isLastFrame bool
///
void q_websocket_binary_frame_received(void* self, char* frame, bool isLastFrame);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryFrameReceived)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, libqt_string frame, bool isLastFrame)
///
void q_websocket_on_binary_frame_received(void* self, void (*callback)(void*, libqt_string, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textMessageReceived)
///
/// @param self QWebSocket*
/// @param message const char*
///
void q_websocket_text_message_received(void* self, const char* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textMessageReceived)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, const char* message)
///
void q_websocket_on_text_message_received(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryMessageReceived)
///
/// @param self QWebSocket*
/// @param message char*
///
void q_websocket_binary_message_received(void* self, char* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryMessageReceived)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, libqt_string message)
///
void q_websocket_on_binary_message_received(void* self, void (*callback)(void*, libqt_string));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#error)
///
/// @param self QWebSocket*
/// @param error enum QAbstractSocket__SocketError
///
void q_websocket_error2(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#error)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, enum QAbstractSocket__SocketError error)
///
void q_websocket_on_error2(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#errorOccurred)
///
/// @param self QWebSocket*
/// @param error enum QAbstractSocket__SocketError
///
void q_websocket_error_occurred(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#errorOccurred)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, enum QAbstractSocket__SocketError error)
///
void q_websocket_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#pong)
///
/// @param self QWebSocket*
/// @param elapsedTime uint64_t
/// @param payload char*
///
void q_websocket_pong(void* self, uint64_t elapsedTime, char* payload);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#pong)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, uint64_t elapsedTime, libqt_string payload)
///
void q_websocket_on_pong(void* self, void (*callback)(void*, uint64_t, libqt_string));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#bytesWritten)
///
/// @param self QWebSocket*
/// @param bytes int64_t
///
void q_websocket_bytes_written(void* self, int64_t bytes);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#bytesWritten)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, int64_t bytes)
///
void q_websocket_on_bytes_written(void* self, void (*callback)(void*, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerVerifyError)
///
/// @param self QWebSocket*
/// @param error QSslError*
///
void q_websocket_peer_verify_error(void* self, const void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerVerifyError)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, QSslError* error)
///
void q_websocket_on_peer_verify_error(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sslErrors)
///
/// @param self QWebSocket*
/// @param errors libqt_list of QSslError*
///
void q_websocket_ssl_errors(void* self, libqt_list errors);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sslErrors)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, libqt_list of QSslError* errors)
///
void q_websocket_on_ssl_errors(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#preSharedKeyAuthenticationRequired)
///
/// @param self QWebSocket*
/// @param authenticator QSslPreSharedKeyAuthenticator*
///
void q_websocket_pre_shared_key_authentication_required(void* self, void* authenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#preSharedKeyAuthenticationRequired)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, QSslPreSharedKeyAuthenticator* authenticator)
///
void q_websocket_on_pre_shared_key_authentication_required(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#alertSent)
///
/// @param self QWebSocket*
/// @param level enum QSsl__AlertLevel
/// @param type enum QSsl__AlertType
/// @param description const char*
///
void q_websocket_alert_sent(void* self, int32_t level, int32_t type, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#alertSent)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, enum QSsl__AlertLevel level, enum QSsl__AlertType type, const char* description)
///
void q_websocket_on_alert_sent(void* self, void (*callback)(void*, int32_t, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#alertReceived)
///
/// @param self QWebSocket*
/// @param level enum QSsl__AlertLevel
/// @param type enum QSsl__AlertType
/// @param description const char*
///
void q_websocket_alert_received(void* self, int32_t level, int32_t type, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#alertReceived)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, enum QSsl__AlertLevel level, enum QSsl__AlertType type, const char* description)
///
void q_websocket_on_alert_received(void* self, void (*callback)(void*, int32_t, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#handshakeInterruptedOnError)
///
/// @param self QWebSocket*
/// @param error QSslError*
///
void q_websocket_handshake_interrupted_on_error(void* self, const void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#handshakeInterruptedOnError)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, QSslError* error)
///
void q_websocket_on_handshake_interrupted_on_error(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_websocket_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_websocket_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#close)
///
/// @param self QWebSocket*
/// @param closeCode enum QWebSocketProtocol__CloseCode
///
void q_websocket_close1(void* self, int32_t closeCode);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#close)
///
/// @param self QWebSocket*
/// @param closeCode enum QWebSocketProtocol__CloseCode
/// @param reason const char*
///
void q_websocket_close2(void* self, int32_t closeCode, const char* reason);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ping)
///
/// @param self QWebSocket*
/// @param payload char*
///
void q_websocket_ping1(void* self, char* payload);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebSocket*
///
const char* q_websocket_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebSocket*
/// @param name const char*
///
void q_websocket_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QWebSocket*
///
bool q_websocket_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QWebSocket*
///
bool q_websocket_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QWebSocket*
///
bool q_websocket_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QWebSocket*
///
bool q_websocket_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebSocket*
/// @param b bool
///
bool q_websocket_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QWebSocket*
///
QThread* q_websocket_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebSocket*
/// @param thread QThread*
///
bool q_websocket_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebSocket*
/// @param interval int
///
int32_t q_websocket_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebSocket*
/// @param time int64_t of nanoseconds
///
int32_t q_websocket_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebSocket*
/// @param id int
///
void q_websocket_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebSocket*
/// @param id enum Qt__TimerId
///
void q_websocket_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QWebSocket*
///
/// @return libqt_list of QObject*
///
libqt_list q_websocket_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebSocket*
/// @param parent QObject*
///
void q_websocket_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebSocket*
/// @param filterObj QObject*
///
void q_websocket_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebSocket*
/// @param obj QObject*
///
void q_websocket_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_websocket_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_websocket_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_websocket_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_websocket_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_websocket_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebSocket*
///
bool q_websocket_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebSocket*
/// @param receiver QObject*
///
bool q_websocket_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_websocket_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QWebSocket*
///
void q_websocket_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QWebSocket*
///
void q_websocket_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebSocket*
/// @param name const char*
/// @param value QVariant*
///
bool q_websocket_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QWebSocket*
/// @param name const char*
///
QVariant* q_websocket_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWebSocket*
///
const char** q_websocket_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebSocket*
///
QBindingStorage* q_websocket_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QWebSocket*
///
const QBindingStorage* q_websocket_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebSocket*
///
void q_websocket_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self)
///
void q_websocket_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QWebSocket*
///
QObject* q_websocket_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QWebSocket*
/// @param classname const char*
///
bool q_websocket_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebSocket*
///
void q_websocket_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebSocket*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_websocket_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebSocket*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_websocket_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_websocket_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_websocket_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWebSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_websocket_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebSocket*
/// @param signal const char*
///
bool q_websocket_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebSocket*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_websocket_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebSocket*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_websocket_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWebSocket*
/// @param receiver QObject*
/// @param member const char*
///
bool q_websocket_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebSocket*
/// @param param1 QObject*
///
void q_websocket_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, QObject* param1)
///
void q_websocket_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocket*
/// @param event QEvent*
///
bool q_websocket_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocket*
/// @param event QEvent*
///
bool q_websocket_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocket*
/// @param callback bool func(QWebSocket* self, QEvent* event)
///
void q_websocket_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocket*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_websocket_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocket*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_websocket_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocket*
/// @param callback bool func(QWebSocket* self, QObject* watched, QEvent* event)
///
void q_websocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocket*
/// @param event QTimerEvent*
///
void q_websocket_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocket*
/// @param event QTimerEvent*
///
void q_websocket_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, QTimerEvent* event)
///
void q_websocket_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocket*
/// @param event QChildEvent*
///
void q_websocket_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocket*
/// @param event QChildEvent*
///
void q_websocket_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, QChildEvent* event)
///
void q_websocket_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocket*
/// @param event QEvent*
///
void q_websocket_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocket*
/// @param event QEvent*
///
void q_websocket_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, QEvent* event)
///
void q_websocket_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocket*
/// @param signal QMetaMethod*
///
void q_websocket_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocket*
/// @param signal QMetaMethod*
///
void q_websocket_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, QMetaMethod* signal)
///
void q_websocket_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebSocket*
/// @param signal QMetaMethod*
///
void q_websocket_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebSocket*
/// @param signal QMetaMethod*
///
void q_websocket_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, QMetaMethod* signal)
///
void q_websocket_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWebSocket*
///
QObject* q_websocket_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWebSocket*
///
QObject* q_websocket_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QWebSocket*
/// @param callback QObject* func(QWebSocket* self)
///
void q_websocket_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWebSocket*
///
int32_t q_websocket_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWebSocket*
///
int32_t q_websocket_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QWebSocket*
/// @param callback int32_t func(QWebSocket* self)
///
void q_websocket_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWebSocket*
/// @param signal const char*
///
int32_t q_websocket_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWebSocket*
/// @param signal const char*
///
int32_t q_websocket_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QWebSocket*
/// @param callback int32_t func(QWebSocket* self, const char* signal)
///
void q_websocket_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWebSocket*
/// @param signal QMetaMethod*
///
bool q_websocket_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWebSocket*
/// @param signal QMetaMethod*
///
bool q_websocket_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QWebSocket*
/// @param callback bool func(QWebSocket* self, QMetaMethod* signal)
///
void q_websocket_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebSocket*
/// @param callback void func(QWebSocket* self, const char* objectName)
///
void q_websocket_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#dtor.QWebSocket)
///
/// Delete this object from C++ memory.
///
/// @param self QWebSocket*
///
void q_websocket_delete(void* self);

#endif

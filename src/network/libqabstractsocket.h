#pragma once
#ifndef SRC_NETWORKQT6C_LIBQABSTRACTSOCKET_H
#define SRC_NETWORKQT6C_LIBQABSTRACTSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractsocket.html

/// q_abstractsocket_new constructs a new QAbstractSocket object.
///
/// ``` enum QAbstractSocket__SocketType socketType, QObject* parent ```
QAbstractSocket* q_abstractsocket_new(int64_t socketType, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractSocket* self ```
const QMetaObject* q_abstractsocket_meta_object(void* self);

/// ``` QAbstractSocket* self, const char* param1 ```
void* q_abstractsocket_metacast(void* self, const char* param1);

/// ``` QAbstractSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractsocket_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, int32_t (*slot)(QAbstractSocket*, enum QMetaObject__Call, int, void*) ```
void q_abstractsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAbstractSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractsocket_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)() ```
void q_abstractsocket_on_resume(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_qbase_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
///
/// ``` QAbstractSocket* self ```
int64_t q_abstractsocket_pause_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
///
/// ``` QAbstractSocket* self, int pauseMode ```
void q_abstractsocket_set_pause_mode(void* self, int64_t pauseMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QAbstractSocket* self, QHostAddress* address, unsigned short port, int mode ```
bool q_abstractsocket_bind(void* self, void* address, unsigned short port, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, QHostAddress*, unsigned short, int) ```
void q_abstractsocket_on_bind(void* self, bool (*slot)(void*, void*, unsigned short, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, QHostAddress* address, unsigned short port, int mode ```
bool q_abstractsocket_qbase_bind(void* self, void* address, unsigned short port, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_bind2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QAbstractSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_abstractsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, const char*, unsigned short, int, enum QAbstractSocket__NetworkLayerProtocol) ```
void q_abstractsocket_on_connect_to_host(void* self, void (*slot)(void*, const char*, unsigned short, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_abstractsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QAbstractSocket* self, QHostAddress* address, unsigned short port ```
void q_abstractsocket_connect_to_host2(void* self, void* address, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_disconnect_from_host(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)() ```
void q_abstractsocket_on_disconnect_from_host(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_qbase_disconnect_from_host(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, long long (*slot)() ```
void q_abstractsocket_on_bytes_available(void* self, long long (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_qbase_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, long long (*slot)() ```
void q_abstractsocket_on_bytes_to_write(void* self, long long (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_qbase_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
///
/// ``` QAbstractSocket* self ```
unsigned short q_abstractsocket_local_port(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
///
/// ``` QAbstractSocket* self ```
QHostAddress* q_abstractsocket_local_address(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
///
/// ``` QAbstractSocket* self ```
unsigned short q_abstractsocket_peer_port(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
///
/// ``` QAbstractSocket* self ```
QHostAddress* q_abstractsocket_peer_address(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
///
/// ``` QAbstractSocket* self ```
const char* q_abstractsocket_peer_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_read_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// ``` QAbstractSocket* self, long long size ```
void q_abstractsocket_set_read_buffer_size(void* self, long long size);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, long long) ```
void q_abstractsocket_on_set_read_buffer_size(void* self, void (*slot)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, long long size ```
void q_abstractsocket_qbase_set_read_buffer_size(void* self, long long size);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_abort(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// ``` QAbstractSocket* self ```
intptr_t q_abstractsocket_socket_descriptor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, intptr_t (*slot)() ```
void q_abstractsocket_on_socket_descriptor(void* self, intptr_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self ```
intptr_t q_abstractsocket_qbase_socket_descriptor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// ``` QAbstractSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_abstractsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, intptr_t, enum QAbstractSocket__SocketState, int) ```
void q_abstractsocket_on_set_socket_descriptor(void* self, bool (*slot)(void*, intptr_t, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_abstractsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_abstractsocket_set_socket_option(void* self, int64_t option, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketOption, QVariant*) ```
void q_abstractsocket_on_set_socket_option(void* self, void (*slot)(void*, int64_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_abstractsocket_qbase_set_socket_option(void* self, int64_t option, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_abstractsocket_socket_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, QVariant* (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketOption) ```
void q_abstractsocket_on_socket_option(void* self, QVariant* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_abstractsocket_qbase_socket_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
///
/// ``` QAbstractSocket* self ```
int64_t q_abstractsocket_socket_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
///
/// ``` QAbstractSocket* self ```
int64_t q_abstractsocket_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
///
/// ``` QAbstractSocket* self ```
int64_t q_abstractsocket_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)() ```
void q_abstractsocket_on_close(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_qbase_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, bool (*slot)() ```
void q_abstractsocket_on_is_sequential(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_qbase_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_flush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_wait_for_connected(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, int) ```
void q_abstractsocket_on_wait_for_connected(void* self, bool (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_qbase_wait_for_connected(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, int) ```
void q_abstractsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_qbase_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, int) ```
void q_abstractsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_qbase_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_wait_for_disconnected(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, int) ```
void q_abstractsocket_on_wait_for_disconnected(void* self, bool (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_qbase_wait_for_disconnected(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
///
/// ``` QAbstractSocket* self, QNetworkProxy* networkProxy ```
void q_abstractsocket_set_proxy(void* self, void* networkProxy);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
///
/// ``` QAbstractSocket* self ```
QNetworkProxy* q_abstractsocket_proxy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
///
/// ``` QAbstractSocket* self ```
const char* q_abstractsocket_protocol_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
///
/// ``` QAbstractSocket* self, const char* tag ```
void q_abstractsocket_set_protocol_tag(void* self, const char* tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_host_found(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*) ```
void q_abstractsocket_on_host_found(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_connected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*) ```
void q_abstractsocket_on_connected(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_disconnected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*) ```
void q_abstractsocket_on_disconnected(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketState param1 ```
void q_abstractsocket_state_changed(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketState) ```
void q_abstractsocket_on_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketError param1 ```
void q_abstractsocket_error_occurred(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketError) ```
void q_abstractsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// ``` QAbstractSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator ```
void q_abstractsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QNetworkProxy*, QAuthenticator*) ```
void q_abstractsocket_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// ``` QAbstractSocket* self, char* data, long long maxlen ```
long long q_abstractsocket_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, long long (*slot)(QAbstractSocket*, char*, long long) ```
void q_abstractsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, char* data, long long maxlen ```
long long q_abstractsocket_qbase_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// ``` QAbstractSocket* self, char* data, long long maxlen ```
long long q_abstractsocket_read_line_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, long long (*slot)(QAbstractSocket*, char*, long long) ```
void q_abstractsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, char* data, long long maxlen ```
long long q_abstractsocket_qbase_read_line_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// ``` QAbstractSocket* self, long long maxSize ```
long long q_abstractsocket_skip_data(void* self, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, long long (*slot)(QAbstractSocket*, long long) ```
void q_abstractsocket_on_skip_data(void* self, long long (*slot)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, long long maxSize ```
long long q_abstractsocket_qbase_skip_data(void* self, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// ``` QAbstractSocket* self, const char* data, long long lenVal ```
long long q_abstractsocket_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, long long (*slot)(QAbstractSocket*, const char*, long long) ```
void q_abstractsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, const char* data, long long lenVal ```
long long q_abstractsocket_qbase_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketState state ```
void q_abstractsocket_set_socket_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketState) ```
void q_abstractsocket_on_set_socket_state(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketState state ```
void q_abstractsocket_qbase_set_socket_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_abstractsocket_set_socket_error(void* self, int64_t socketError);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketError) ```
void q_abstractsocket_on_set_socket_error(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_abstractsocket_qbase_set_socket_error(void* self, int64_t socketError);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// ``` QAbstractSocket* self, unsigned short port ```
void q_abstractsocket_set_local_port(void* self, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, unsigned short) ```
void q_abstractsocket_on_set_local_port(void* self, void (*slot)(void*, unsigned short));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, unsigned short port ```
void q_abstractsocket_qbase_set_local_port(void* self, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// ``` QAbstractSocket* self, QHostAddress* address ```
void q_abstractsocket_set_local_address(void* self, void* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QHostAddress*) ```
void q_abstractsocket_on_set_local_address(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, QHostAddress* address ```
void q_abstractsocket_qbase_set_local_address(void* self, void* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// ``` QAbstractSocket* self, unsigned short port ```
void q_abstractsocket_set_peer_port(void* self, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, unsigned short) ```
void q_abstractsocket_on_set_peer_port(void* self, void (*slot)(void*, unsigned short));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, unsigned short port ```
void q_abstractsocket_qbase_set_peer_port(void* self, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// ``` QAbstractSocket* self, QHostAddress* address ```
void q_abstractsocket_set_peer_address(void* self, void* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QHostAddress*) ```
void q_abstractsocket_on_set_peer_address(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, QHostAddress* address ```
void q_abstractsocket_qbase_set_peer_address(void* self, void* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// ``` QAbstractSocket* self, const char* name ```
void q_abstractsocket_set_peer_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, const char*) ```
void q_abstractsocket_on_set_peer_name(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Base class method implementation
///
/// ``` QAbstractSocket* self, const char* name ```
void q_abstractsocket_qbase_set_peer_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractsocket_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractsocket_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QAbstractSocket* self, unsigned short port ```
bool q_abstractsocket_bind1(void* self, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QAbstractSocket* self, unsigned short port, int mode ```
bool q_abstractsocket_bind22(void* self, unsigned short port, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QAbstractSocket* self, QHostAddress* address, unsigned short port, int mode ```
void q_abstractsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QAbstractSocket* self ```
int64_t q_abstractsocket_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QAbstractSocket* self, bool enabled ```
void q_abstractsocket_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QAbstractSocket* self ```
int32_t q_abstractsocket_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QAbstractSocket* self ```
int32_t q_abstractsocket_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QAbstractSocket* self ```
int32_t q_abstractsocket_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QAbstractSocket* self, int channel ```
void q_abstractsocket_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QAbstractSocket* self ```
int32_t q_abstractsocket_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QAbstractSocket* self, int channel ```
void q_abstractsocket_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QAbstractSocket* self, char* data, long long maxlen ```
long long q_abstractsocket_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QAbstractSocket* self, long long maxlen ```
char* q_abstractsocket_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QAbstractSocket* self ```
char* q_abstractsocket_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QAbstractSocket* self, char* data, long long maxlen ```
long long q_abstractsocket_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QAbstractSocket* self ```
char* q_abstractsocket_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QAbstractSocket* self, const char* data, long long lenVal ```
long long q_abstractsocket_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QAbstractSocket* self, const char* data ```
long long q_abstractsocket_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QAbstractSocket* self, const char* data ```
long long q_abstractsocket_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QAbstractSocket* self, char* data, long long maxlen ```
long long q_abstractsocket_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QAbstractSocket* self, long long maxlen ```
char* q_abstractsocket_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QAbstractSocket* self, long long maxSize ```
long long q_abstractsocket_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QAbstractSocket* self, char c ```
void q_abstractsocket_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QAbstractSocket* self, char c ```
bool q_abstractsocket_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QAbstractSocket* self, char* c ```
bool q_abstractsocket_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QAbstractSocket* self ```
const char* q_abstractsocket_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*) ```
void q_abstractsocket_on_ready_read(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QAbstractSocket* self, int channel ```
void q_abstractsocket_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, int) ```
void q_abstractsocket_on_channel_ready_read(void* self, void (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QAbstractSocket* self, long long bytes ```
void q_abstractsocket_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, long long) ```
void q_abstractsocket_on_bytes_written(void* self, void (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QAbstractSocket* self, int channel, long long bytes ```
void q_abstractsocket_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, int, long long) ```
void q_abstractsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*) ```
void q_abstractsocket_on_about_to_close(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*) ```
void q_abstractsocket_on_read_channel_finished(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QAbstractSocket* self, long long maxlen ```
char* q_abstractsocket_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractSocket* self ```
const char* q_abstractsocket_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractSocket* self, char* name ```
void q_abstractsocket_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractSocket* self, bool b ```
bool q_abstractsocket_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractSocket* self ```
QThread* q_abstractsocket_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractSocket* self, QThread* thread ```
bool q_abstractsocket_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractSocket* self, int interval ```
int32_t q_abstractsocket_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractSocket* self, int id ```
void q_abstractsocket_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractSocket* self, enum Qt__TimerId id ```
void q_abstractsocket_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractSocket* self ```
libqt_list /* of QObject* */ q_abstractsocket_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractSocket* self, QObject* parent ```
void q_abstractsocket_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractSocket* self, QObject* filterObj ```
void q_abstractsocket_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractSocket* self, QObject* obj ```
void q_abstractsocket_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractsocket_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractSocket* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractsocket_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractsocket_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractsocket_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractSocket* self, const char* name, QVariant* value ```
bool q_abstractsocket_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractSocket* self, const char* name ```
QVariant* q_abstractsocket_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractSocket* self ```
const char** q_abstractsocket_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractSocket* self ```
QBindingStorage* q_abstractsocket_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractSocket* self ```
const QBindingStorage* q_abstractsocket_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*) ```
void q_abstractsocket_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractSocket* self ```
QObject* q_abstractsocket_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractSocket* self, const char* classname ```
bool q_abstractsocket_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractSocket* self, QThread* thread, Disambiguated_t* param2 ```
bool q_abstractsocket_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractSocket* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractsocket_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractSocket* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractSocket* self, QObject* param1 ```
void q_abstractsocket_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QObject*) ```
void q_abstractsocket_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, int mode ```
bool q_abstractsocket_open(void* self, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, int mode ```
bool q_abstractsocket_qbase_open(void* self, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, int) ```
void q_abstractsocket_on_open(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_qbase_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, long long (*slot)() ```
void q_abstractsocket_on_pos(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_qbase_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, long long (*slot)() ```
void q_abstractsocket_on_size(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, long long pos ```
bool q_abstractsocket_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, long long pos ```
bool q_abstractsocket_qbase_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, long long) ```
void q_abstractsocket_on_seek(void* self, bool (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_qbase_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)() ```
void q_abstractsocket_on_at_end(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)() ```
void q_abstractsocket_on_reset(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)() ```
void q_abstractsocket_on_can_read_line(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QEvent* event ```
bool q_abstractsocket_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QEvent* event ```
bool q_abstractsocket_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, QEvent*) ```
void q_abstractsocket_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QObject* watched, QEvent* event ```
bool q_abstractsocket_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QObject* watched, QEvent* event ```
bool q_abstractsocket_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, QObject*, QEvent*) ```
void q_abstractsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QTimerEvent* event ```
void q_abstractsocket_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QTimerEvent* event ```
void q_abstractsocket_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QTimerEvent*) ```
void q_abstractsocket_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QChildEvent* event ```
void q_abstractsocket_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QChildEvent* event ```
void q_abstractsocket_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QChildEvent*) ```
void q_abstractsocket_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QEvent* event ```
void q_abstractsocket_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QEvent* event ```
void q_abstractsocket_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QEvent*) ```
void q_abstractsocket_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QMetaMethod* signal ```
void q_abstractsocket_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QMetaMethod* signal ```
void q_abstractsocket_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QMetaMethod*) ```
void q_abstractsocket_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QMetaMethod* signal ```
void q_abstractsocket_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QMetaMethod* signal ```
void q_abstractsocket_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QMetaMethod*) ```
void q_abstractsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, int openMode ```
void q_abstractsocket_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, int openMode ```
void q_abstractsocket_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, int) ```
void q_abstractsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, const char* errorString ```
void q_abstractsocket_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, const char* errorString ```
void q_abstractsocket_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, const char*) ```
void q_abstractsocket_on_set_error_string(void* self, void (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self ```
QObject* q_abstractsocket_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self ```
QObject* q_abstractsocket_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, QObject* (*slot)() ```
void q_abstractsocket_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self ```
int32_t q_abstractsocket_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self ```
int32_t q_abstractsocket_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, int32_t (*slot)() ```
void q_abstractsocket_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, const char* signal ```
int32_t q_abstractsocket_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, const char* signal ```
int32_t q_abstractsocket_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, int32_t (*slot)(QAbstractSocket*, const char*) ```
void q_abstractsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QMetaMethod* signal ```
bool q_abstractsocket_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QMetaMethod* signal ```
bool q_abstractsocket_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, QMetaMethod*) ```
void q_abstractsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, const char*) ```
void q_abstractsocket_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#dtor.QAbstractSocket)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractsocket.html#types

typedef enum {
    QABSTRACTSOCKET_SOCKETTYPE_TCPSOCKET = 0,
    QABSTRACTSOCKET_SOCKETTYPE_UDPSOCKET = 1,
    QABSTRACTSOCKET_SOCKETTYPE_SCTPSOCKET = 2,
    QABSTRACTSOCKET_SOCKETTYPE_UNKNOWNSOCKETTYPE = -1
} QAbstractSocket__SocketType;

typedef enum {
    QABSTRACTSOCKET_NETWORKLAYERPROTOCOL_IPV4PROTOCOL = 0,
    QABSTRACTSOCKET_NETWORKLAYERPROTOCOL_IPV6PROTOCOL = 1,
    QABSTRACTSOCKET_NETWORKLAYERPROTOCOL_ANYIPPROTOCOL = 2,
    QABSTRACTSOCKET_NETWORKLAYERPROTOCOL_UNKNOWNNETWORKLAYERPROTOCOL = -1
} QAbstractSocket__NetworkLayerProtocol;

typedef enum {
    QABSTRACTSOCKET_SOCKETERROR_CONNECTIONREFUSEDERROR = 0,
    QABSTRACTSOCKET_SOCKETERROR_REMOTEHOSTCLOSEDERROR = 1,
    QABSTRACTSOCKET_SOCKETERROR_HOSTNOTFOUNDERROR = 2,
    QABSTRACTSOCKET_SOCKETERROR_SOCKETACCESSERROR = 3,
    QABSTRACTSOCKET_SOCKETERROR_SOCKETRESOURCEERROR = 4,
    QABSTRACTSOCKET_SOCKETERROR_SOCKETTIMEOUTERROR = 5,
    QABSTRACTSOCKET_SOCKETERROR_DATAGRAMTOOLARGEERROR = 6,
    QABSTRACTSOCKET_SOCKETERROR_NETWORKERROR = 7,
    QABSTRACTSOCKET_SOCKETERROR_ADDRESSINUSEERROR = 8,
    QABSTRACTSOCKET_SOCKETERROR_SOCKETADDRESSNOTAVAILABLEERROR = 9,
    QABSTRACTSOCKET_SOCKETERROR_UNSUPPORTEDSOCKETOPERATIONERROR = 10,
    QABSTRACTSOCKET_SOCKETERROR_UNFINISHEDSOCKETOPERATIONERROR = 11,
    QABSTRACTSOCKET_SOCKETERROR_PROXYAUTHENTICATIONREQUIREDERROR = 12,
    QABSTRACTSOCKET_SOCKETERROR_SSLHANDSHAKEFAILEDERROR = 13,
    QABSTRACTSOCKET_SOCKETERROR_PROXYCONNECTIONREFUSEDERROR = 14,
    QABSTRACTSOCKET_SOCKETERROR_PROXYCONNECTIONCLOSEDERROR = 15,
    QABSTRACTSOCKET_SOCKETERROR_PROXYCONNECTIONTIMEOUTERROR = 16,
    QABSTRACTSOCKET_SOCKETERROR_PROXYNOTFOUNDERROR = 17,
    QABSTRACTSOCKET_SOCKETERROR_PROXYPROTOCOLERROR = 18,
    QABSTRACTSOCKET_SOCKETERROR_OPERATIONERROR = 19,
    QABSTRACTSOCKET_SOCKETERROR_SSLINTERNALERROR = 20,
    QABSTRACTSOCKET_SOCKETERROR_SSLINVALIDUSERDATAERROR = 21,
    QABSTRACTSOCKET_SOCKETERROR_TEMPORARYERROR = 22,
    QABSTRACTSOCKET_SOCKETERROR_UNKNOWNSOCKETERROR = -1
} QAbstractSocket__SocketError;

typedef enum {
    QABSTRACTSOCKET_SOCKETSTATE_UNCONNECTEDSTATE = 0,
    QABSTRACTSOCKET_SOCKETSTATE_HOSTLOOKUPSTATE = 1,
    QABSTRACTSOCKET_SOCKETSTATE_CONNECTINGSTATE = 2,
    QABSTRACTSOCKET_SOCKETSTATE_CONNECTEDSTATE = 3,
    QABSTRACTSOCKET_SOCKETSTATE_BOUNDSTATE = 4,
    QABSTRACTSOCKET_SOCKETSTATE_LISTENINGSTATE = 5,
    QABSTRACTSOCKET_SOCKETSTATE_CLOSINGSTATE = 6
} QAbstractSocket__SocketState;

typedef enum {
    QABSTRACTSOCKET_SOCKETOPTION_LOWDELAYOPTION = 0,
    QABSTRACTSOCKET_SOCKETOPTION_KEEPALIVEOPTION = 1,
    QABSTRACTSOCKET_SOCKETOPTION_MULTICASTTTLOPTION = 2,
    QABSTRACTSOCKET_SOCKETOPTION_MULTICASTLOOPBACKOPTION = 3,
    QABSTRACTSOCKET_SOCKETOPTION_TYPEOFSERVICEOPTION = 4,
    QABSTRACTSOCKET_SOCKETOPTION_SENDBUFFERSIZESOCKETOPTION = 5,
    QABSTRACTSOCKET_SOCKETOPTION_RECEIVEBUFFERSIZESOCKETOPTION = 6,
    QABSTRACTSOCKET_SOCKETOPTION_PATHMTUSOCKETOPTION = 7
} QAbstractSocket__SocketOption;

typedef enum {
    QABSTRACTSOCKET_BINDFLAG_DEFAULTFORPLATFORM = 0,
    QABSTRACTSOCKET_BINDFLAG_SHAREADDRESS = 1,
    QABSTRACTSOCKET_BINDFLAG_DONTSHAREADDRESS = 2,
    QABSTRACTSOCKET_BINDFLAG_REUSEADDRESSHINT = 4
} QAbstractSocket__BindFlag;

typedef enum {
    QABSTRACTSOCKET_PAUSEMODE_PAUSENEVER = 0,
    QABSTRACTSOCKET_PAUSEMODE_PAUSEONSSLERRORS = 1
} QAbstractSocket__PauseMode;

#endif

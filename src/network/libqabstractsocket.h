#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQABSTRACTSOCKET_H
#define SRC_NETWORK_QT6C_LIBQABSTRACTSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html)

/// q_abstractsocket_new constructs a new QAbstractSocket object.
///
/// @param socketType enum QAbstractSocket__SocketType
/// @param parent QObject*
///
QAbstractSocket* q_abstractsocket_new(int32_t socketType, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAbstractSocket*
///
const QMetaObject* q_abstractsocket_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback const QMetaObject* func()
///
void q_abstractsocket_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_abstractsocket_super_meta_object` instead
///
#define q_abstractsocket_qbase_meta_object q_abstractsocket_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
///
const QMetaObject* q_abstractsocket_super_meta_object(void* self);

/// @param self QAbstractSocket*
/// @param param1 const char*
///
void* q_abstractsocket_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback void* func(QAbstractSocket* self, const char* param1)
///
void q_abstractsocket_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_abstractsocket_super_metacast` instead
///
#define q_abstractsocket_qbase_metacast q_abstractsocket_super_metacast

/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param param1 const char*
///
void* q_abstractsocket_super_metacast(void* self, const char* param1);

/// @param self QAbstractSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractsocket_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback int32_t func(QAbstractSocket* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_abstractsocket_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_abstractsocket_super_metacall` instead
///
#define q_abstractsocket_qbase_metacall q_abstractsocket_super_metacall

/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractsocket_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstractsocket_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_resume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback void func()
///
void q_abstractsocket_on_resume(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_abstractsocket_super_resume` instead
///
#define q_abstractsocket_qbase_resume q_abstractsocket_super_resume

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_super_resume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
///
/// @param self QAbstractSocket*
///
/// @return flag of enum QAbstractSocket__PauseMode
///
int32_t q_abstractsocket_pause_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
///
/// @param self QAbstractSocket*
/// @param pauseMode flag of enum QAbstractSocket__PauseMode
///
void q_abstractsocket_set_pause_mode(void* self, int32_t pauseMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// @param self QAbstractSocket*
/// @param address QHostAddress*
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
///
bool q_abstractsocket_bind(void* self, void* address, unsigned short port, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback bool func(QAbstractSocket* self, QHostAddress* address, unsigned short port, flag of enum QAbstractSocket__BindFlag mode)
///
void q_abstractsocket_on_bind(void* self, bool (*callback)(void*, void*, unsigned short, int32_t));

/// @warning DEPRECATED: Use `q_abstractsocket_super_bind` instead
///
#define q_abstractsocket_qbase_bind q_abstractsocket_super_bind

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param address QHostAddress*
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
///
bool q_abstractsocket_super_bind(void* self, void* address, unsigned short port, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_bind2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// @param self QAbstractSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
/// @param protocol enum QAbstractSocket__NetworkLayerProtocol
///
void q_abstractsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int32_t mode, int32_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, const char* hostName, unsigned short port, flag of enum QIODeviceBase__OpenModeFlag mode, enum QAbstractSocket__NetworkLayerProtocol protocol)
///
void q_abstractsocket_on_connect_to_host(void* self, void (*callback)(void*, const char*, unsigned short, int32_t, int32_t));

/// @warning DEPRECATED: Use `q_abstractsocket_super_connect_to_host` instead
///
#define q_abstractsocket_qbase_connect_to_host q_abstractsocket_super_connect_to_host

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
/// @param protocol enum QAbstractSocket__NetworkLayerProtocol
///
void q_abstractsocket_super_connect_to_host(void* self, const char* hostName, unsigned short port, int32_t mode, int32_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// @param self QAbstractSocket*
/// @param address QHostAddress*
/// @param port unsigned short
///
void q_abstractsocket_connect_to_host2(void* self, void* address, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_disconnect_from_host(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback void func()
///
void q_abstractsocket_on_disconnect_from_host(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_abstractsocket_super_disconnect_from_host` instead
///
#define q_abstractsocket_qbase_disconnect_from_host q_abstractsocket_super_disconnect_from_host

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_super_disconnect_from_host(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// @param self QAbstractSocket*
///
long long q_abstractsocket_bytes_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback long long func()
///
void q_abstractsocket_on_bytes_available(void* self, long long (*callback)());

/// @warning DEPRECATED: Use `q_abstractsocket_super_bytes_available` instead
///
#define q_abstractsocket_qbase_bytes_available q_abstractsocket_super_bytes_available

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
///
long long q_abstractsocket_super_bytes_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// @param self QAbstractSocket*
///
long long q_abstractsocket_bytes_to_write(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback long long func()
///
void q_abstractsocket_on_bytes_to_write(void* self, long long (*callback)());

/// @warning DEPRECATED: Use `q_abstractsocket_super_bytes_to_write` instead
///
#define q_abstractsocket_qbase_bytes_to_write q_abstractsocket_super_bytes_to_write

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
///
long long q_abstractsocket_super_bytes_to_write(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
///
/// @param self QAbstractSocket*
///
unsigned short q_abstractsocket_local_port(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
///
/// @param self QAbstractSocket*
///
QHostAddress* q_abstractsocket_local_address(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
///
/// @param self QAbstractSocket*
///
unsigned short q_abstractsocket_peer_port(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
///
/// @param self QAbstractSocket*
///
QHostAddress* q_abstractsocket_peer_address(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractSocket*
///
const char* q_abstractsocket_peer_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
///
/// @param self QAbstractSocket*
///
long long q_abstractsocket_read_buffer_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// @param self QAbstractSocket*
/// @param size long long
///
void q_abstractsocket_set_read_buffer_size(void* self, long long size);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, long long size)
///
void q_abstractsocket_on_set_read_buffer_size(void* self, void (*callback)(void*, long long));

/// @warning DEPRECATED: Use `q_abstractsocket_super_set_read_buffer_size` instead
///
#define q_abstractsocket_qbase_set_read_buffer_size q_abstractsocket_super_set_read_buffer_size

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param size long long
///
void q_abstractsocket_super_set_read_buffer_size(void* self, long long size);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_abort(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// @param self QAbstractSocket*
///
intptr_t q_abstractsocket_socket_descriptor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback intptr_t func()
///
void q_abstractsocket_on_socket_descriptor(void* self, intptr_t (*callback)());

/// @warning DEPRECATED: Use `q_abstractsocket_super_socket_descriptor` instead
///
#define q_abstractsocket_qbase_socket_descriptor q_abstractsocket_super_socket_descriptor

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
///
intptr_t q_abstractsocket_super_socket_descriptor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// @param self QAbstractSocket*
/// @param socketDescriptor intptr_t
/// @param state enum QAbstractSocket__SocketState
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_abstractsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int32_t state, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback bool func(QAbstractSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_abstractsocket_on_set_socket_descriptor(void* self, bool (*callback)(void*, intptr_t, int32_t, int32_t));

/// @warning DEPRECATED: Use `q_abstractsocket_super_set_socket_descriptor` instead
///
#define q_abstractsocket_qbase_set_socket_descriptor q_abstractsocket_super_set_socket_descriptor

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param socketDescriptor intptr_t
/// @param state enum QAbstractSocket__SocketState
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_abstractsocket_super_set_socket_descriptor(void* self, intptr_t socketDescriptor, int32_t state, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// @param self QAbstractSocket*
/// @param option enum QAbstractSocket__SocketOption
/// @param value QVariant*
///
void q_abstractsocket_set_socket_option(void* self, int32_t option, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value)
///
void q_abstractsocket_on_set_socket_option(void* self, void (*callback)(void*, int32_t, void*));

/// @warning DEPRECATED: Use `q_abstractsocket_super_set_socket_option` instead
///
#define q_abstractsocket_qbase_set_socket_option q_abstractsocket_super_set_socket_option

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param option enum QAbstractSocket__SocketOption
/// @param value QVariant*
///
void q_abstractsocket_super_set_socket_option(void* self, int32_t option, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// @param self QAbstractSocket*
/// @param option enum QAbstractSocket__SocketOption
///
QVariant* q_abstractsocket_socket_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback QVariant* func(QAbstractSocket* self, enum QAbstractSocket__SocketOption option)
///
void q_abstractsocket_on_socket_option(void* self, QVariant* (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `q_abstractsocket_super_socket_option` instead
///
#define q_abstractsocket_qbase_socket_option q_abstractsocket_super_socket_option

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param option enum QAbstractSocket__SocketOption
///
QVariant* q_abstractsocket_super_socket_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
///
/// @param self QAbstractSocket*
///
/// @return enum QAbstractSocket__SocketType
///
int32_t q_abstractsocket_socket_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#state)
///
/// @param self QAbstractSocket*
///
/// @return enum QAbstractSocket__SocketState
///
int32_t q_abstractsocket_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#error)
///
/// @param self QAbstractSocket*
///
/// @return enum QAbstractSocket__SocketError
///
int32_t q_abstractsocket_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback void func()
///
void q_abstractsocket_on_close(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_abstractsocket_super_close` instead
///
#define q_abstractsocket_qbase_close q_abstractsocket_super_close

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_super_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_is_sequential(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback bool func()
///
void q_abstractsocket_on_is_sequential(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `q_abstractsocket_super_is_sequential` instead
///
#define q_abstractsocket_qbase_is_sequential q_abstractsocket_super_is_sequential

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_super_is_sequential(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_flush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// @param self QAbstractSocket*
/// @param msecs int
///
bool q_abstractsocket_wait_for_connected(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback bool func(QAbstractSocket* self, int msecs)
///
void q_abstractsocket_on_wait_for_connected(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_abstractsocket_super_wait_for_connected` instead
///
#define q_abstractsocket_qbase_wait_for_connected q_abstractsocket_super_wait_for_connected

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param msecs int
///
bool q_abstractsocket_super_wait_for_connected(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// @param self QAbstractSocket*
/// @param msecs int
///
bool q_abstractsocket_wait_for_ready_read(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback bool func(QAbstractSocket* self, int msecs)
///
void q_abstractsocket_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_abstractsocket_super_wait_for_ready_read` instead
///
#define q_abstractsocket_qbase_wait_for_ready_read q_abstractsocket_super_wait_for_ready_read

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param msecs int
///
bool q_abstractsocket_super_wait_for_ready_read(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// @param self QAbstractSocket*
/// @param msecs int
///
bool q_abstractsocket_wait_for_bytes_written(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback bool func(QAbstractSocket* self, int msecs)
///
void q_abstractsocket_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_abstractsocket_super_wait_for_bytes_written` instead
///
#define q_abstractsocket_qbase_wait_for_bytes_written q_abstractsocket_super_wait_for_bytes_written

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param msecs int
///
bool q_abstractsocket_super_wait_for_bytes_written(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// @param self QAbstractSocket*
/// @param msecs int
///
bool q_abstractsocket_wait_for_disconnected(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback bool func(QAbstractSocket* self, int msecs)
///
void q_abstractsocket_on_wait_for_disconnected(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_abstractsocket_super_wait_for_disconnected` instead
///
#define q_abstractsocket_qbase_wait_for_disconnected q_abstractsocket_super_wait_for_disconnected

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param msecs int
///
bool q_abstractsocket_super_wait_for_disconnected(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
///
/// @param self QAbstractSocket*
/// @param networkProxy QNetworkProxy*
///
void q_abstractsocket_set_proxy(void* self, void* networkProxy);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
///
/// @param self QAbstractSocket*
///
QNetworkProxy* q_abstractsocket_proxy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractSocket*
///
const char* q_abstractsocket_protocol_tag(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
///
/// @param self QAbstractSocket*
/// @param tag const char*
///
void q_abstractsocket_set_protocol_tag(void* self, const char* tag);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_host_found(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self)
///
void q_abstractsocket_on_host_found(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_connected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self)
///
void q_abstractsocket_on_connected(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_disconnected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self)
///
void q_abstractsocket_on_disconnected(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// @param self QAbstractSocket*
/// @param param1 enum QAbstractSocket__SocketState
///
void q_abstractsocket_state_changed(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, enum QAbstractSocket__SocketState param1)
///
void q_abstractsocket_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// @param self QAbstractSocket*
/// @param param1 enum QAbstractSocket__SocketError
///
void q_abstractsocket_error_occurred(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, enum QAbstractSocket__SocketError param1)
///
void q_abstractsocket_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// @param self QAbstractSocket*
/// @param proxy QNetworkProxy*
/// @param authenticator QAuthenticator*
///
void q_abstractsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator)
///
void q_abstractsocket_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// @param self QAbstractSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_abstractsocket_read_data(void* self, char* data, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback long long func(QAbstractSocket* self, char* data, long long maxlen)
///
void q_abstractsocket_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// @warning DEPRECATED: Use `q_abstractsocket_super_read_data` instead
///
#define q_abstractsocket_qbase_read_data q_abstractsocket_super_read_data

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_abstractsocket_super_read_data(void* self, char* data, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// @param self QAbstractSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_abstractsocket_read_line_data(void* self, char* data, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback long long func(QAbstractSocket* self, char* data, long long maxlen)
///
void q_abstractsocket_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// @warning DEPRECATED: Use `q_abstractsocket_super_read_line_data` instead
///
#define q_abstractsocket_qbase_read_line_data q_abstractsocket_super_read_line_data

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_abstractsocket_super_read_line_data(void* self, char* data, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// @param self QAbstractSocket*
/// @param maxSize long long
///
long long q_abstractsocket_skip_data(void* self, long long maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback long long func(QAbstractSocket* self, long long maxSize)
///
void q_abstractsocket_on_skip_data(void* self, long long (*callback)(void*, long long));

/// @warning DEPRECATED: Use `q_abstractsocket_super_skip_data` instead
///
#define q_abstractsocket_qbase_skip_data q_abstractsocket_super_skip_data

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param maxSize long long
///
long long q_abstractsocket_super_skip_data(void* self, long long maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// @param self QAbstractSocket*
/// @param data const char*
/// @param lenVal long long
///
long long q_abstractsocket_write_data(void* self, const char* data, long long lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback long long func(QAbstractSocket* self, const char* data, long long lenVal)
///
void q_abstractsocket_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// @warning DEPRECATED: Use `q_abstractsocket_super_write_data` instead
///
#define q_abstractsocket_qbase_write_data q_abstractsocket_super_write_data

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param data const char*
/// @param lenVal long long
///
long long q_abstractsocket_super_write_data(void* self, const char* data, long long lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// @param self QAbstractSocket*
/// @param state enum QAbstractSocket__SocketState
///
void q_abstractsocket_set_socket_state(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, enum QAbstractSocket__SocketState state)
///
void q_abstractsocket_on_set_socket_state(void* self, void (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `q_abstractsocket_super_set_socket_state` instead
///
#define q_abstractsocket_qbase_set_socket_state q_abstractsocket_super_set_socket_state

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param state enum QAbstractSocket__SocketState
///
void q_abstractsocket_super_set_socket_state(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// @param self QAbstractSocket*
/// @param socketError enum QAbstractSocket__SocketError
///
void q_abstractsocket_set_socket_error(void* self, int32_t socketError);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, enum QAbstractSocket__SocketError socketError)
///
void q_abstractsocket_on_set_socket_error(void* self, void (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `q_abstractsocket_super_set_socket_error` instead
///
#define q_abstractsocket_qbase_set_socket_error q_abstractsocket_super_set_socket_error

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param socketError enum QAbstractSocket__SocketError
///
void q_abstractsocket_super_set_socket_error(void* self, int32_t socketError);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// @param self QAbstractSocket*
/// @param port unsigned short
///
void q_abstractsocket_set_local_port(void* self, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, unsigned short port)
///
void q_abstractsocket_on_set_local_port(void* self, void (*callback)(void*, unsigned short));

/// @warning DEPRECATED: Use `q_abstractsocket_super_set_local_port` instead
///
#define q_abstractsocket_qbase_set_local_port q_abstractsocket_super_set_local_port

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param port unsigned short
///
void q_abstractsocket_super_set_local_port(void* self, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// @param self QAbstractSocket*
/// @param address QHostAddress*
///
void q_abstractsocket_set_local_address(void* self, void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, QHostAddress* address)
///
void q_abstractsocket_on_set_local_address(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_abstractsocket_super_set_local_address` instead
///
#define q_abstractsocket_qbase_set_local_address q_abstractsocket_super_set_local_address

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param address QHostAddress*
///
void q_abstractsocket_super_set_local_address(void* self, void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// @param self QAbstractSocket*
/// @param port unsigned short
///
void q_abstractsocket_set_peer_port(void* self, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, unsigned short port)
///
void q_abstractsocket_on_set_peer_port(void* self, void (*callback)(void*, unsigned short));

/// @warning DEPRECATED: Use `q_abstractsocket_super_set_peer_port` instead
///
#define q_abstractsocket_qbase_set_peer_port q_abstractsocket_super_set_peer_port

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param port unsigned short
///
void q_abstractsocket_super_set_peer_port(void* self, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// @param self QAbstractSocket*
/// @param address QHostAddress*
///
void q_abstractsocket_set_peer_address(void* self, void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, QHostAddress* address)
///
void q_abstractsocket_on_set_peer_address(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_abstractsocket_super_set_peer_address` instead
///
#define q_abstractsocket_qbase_set_peer_address q_abstractsocket_super_set_peer_address

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param address QHostAddress*
///
void q_abstractsocket_super_set_peer_address(void* self, void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// @param self QAbstractSocket*
/// @param name const char*
///
void q_abstractsocket_set_peer_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, const char* name)
///
void q_abstractsocket_on_set_peer_name(void* self, void (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_abstractsocket_super_set_peer_name` instead
///
#define q_abstractsocket_qbase_set_peer_name q_abstractsocket_super_set_peer_name

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Base class method implementation
///
/// @param self QAbstractSocket*
/// @param name const char*
///
void q_abstractsocket_super_set_peer_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstractsocket_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstractsocket_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// @param self QAbstractSocket*
/// @param port unsigned short
///
bool q_abstractsocket_bind1(void* self, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// @param self QAbstractSocket*
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
///
bool q_abstractsocket_bind22(void* self, unsigned short port, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// @param self QAbstractSocket*
/// @param address QHostAddress*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
void q_abstractsocket_connect_to_host3(void* self, void* address, unsigned short port, int32_t mode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QAbstractSocket*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_abstractsocket_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QAbstractSocket*
/// @param enabled bool
///
void q_abstractsocket_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_is_open(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QAbstractSocket*
///
int32_t q_abstractsocket_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QAbstractSocket*
///
int32_t q_abstractsocket_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QAbstractSocket*
///
int32_t q_abstractsocket_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QAbstractSocket*
/// @param channel int
///
void q_abstractsocket_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QAbstractSocket*
///
int32_t q_abstractsocket_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QAbstractSocket*
/// @param channel int
///
void q_abstractsocket_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QAbstractSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_abstractsocket_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractSocket*
/// @param maxlen long long
///
char* q_abstractsocket_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractSocket*
///
char* q_abstractsocket_read_all(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QAbstractSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_abstractsocket_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractSocket*
///
char* q_abstractsocket_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QAbstractSocket*
/// @param data const char*
/// @param lenVal long long
///
long long q_abstractsocket_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QAbstractSocket*
/// @param data const char*
///
long long q_abstractsocket_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QAbstractSocket*
/// @param data char*
///
long long q_abstractsocket_write3(void* self, char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QAbstractSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_abstractsocket_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractSocket*
/// @param maxlen long long
///
char* q_abstractsocket_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QAbstractSocket*
/// @param maxSize long long
///
long long q_abstractsocket_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QAbstractSocket*
/// @param c char
///
void q_abstractsocket_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QAbstractSocket*
/// @param c char
///
bool q_abstractsocket_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QAbstractSocket*
/// @param c char*
///
bool q_abstractsocket_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractSocket*
///
const char* q_abstractsocket_error_string(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self)
///
void q_abstractsocket_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QAbstractSocket*
/// @param channel int
///
void q_abstractsocket_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, int channel)
///
void q_abstractsocket_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QAbstractSocket*
/// @param bytes long long
///
void q_abstractsocket_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, long long bytes)
///
void q_abstractsocket_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QAbstractSocket*
/// @param channel int
/// @param bytes long long
///
void q_abstractsocket_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, int channel, long long bytes)
///
void q_abstractsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self)
///
void q_abstractsocket_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self)
///
void q_abstractsocket_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractSocket*
/// @param maxlen long long
///
char* q_abstractsocket_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractSocket*
///
const char* q_abstractsocket_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractSocket*
/// @param name const char*
///
void q_abstractsocket_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractSocket*
/// @param b bool
///
bool q_abstractsocket_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAbstractSocket*
///
QThread* q_abstractsocket_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractSocket*
/// @param thread QThread*
///
bool q_abstractsocket_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractSocket*
/// @param interval int
///
int32_t q_abstractsocket_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractSocket*
/// @param time int64_t of nanoseconds
///
int32_t q_abstractsocket_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractSocket*
/// @param id int
///
void q_abstractsocket_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractSocket*
/// @param id enum Qt__TimerId
///
void q_abstractsocket_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAbstractSocket*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstractsocket_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractSocket*
/// @param parent QObject*
///
void q_abstractsocket_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractSocket*
/// @param filterObj QObject*
///
void q_abstractsocket_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractSocket*
/// @param obj QObject*
///
void q_abstractsocket_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstractsocket_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstractsocket_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstractsocket_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractsocket_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstractsocket_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractSocket*
/// @param receiver QObject*
///
bool q_abstractsocket_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstractsocket_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractSocket*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstractsocket_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractSocket*
/// @param name const char*
///
QVariant* q_abstractsocket_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractSocket*
///
const char** q_abstractsocket_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractSocket*
///
QBindingStorage* q_abstractsocket_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractSocket*
///
const QBindingStorage* q_abstractsocket_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self)
///
void q_abstractsocket_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAbstractSocket*
///
QObject* q_abstractsocket_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAbstractSocket*
/// @param classname const char*
///
bool q_abstractsocket_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractSocket*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractsocket_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractSocket*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractsocket_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_abstractsocket_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstractsocket_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractsocket_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractSocket*
/// @param signal const char*
///
bool q_abstractsocket_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractSocket*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstractsocket_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractSocket*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractsocket_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractSocket*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractsocket_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSocket*
/// @param param1 QObject*
///
void q_abstractsocket_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, QObject* param1)
///
void q_abstractsocket_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_abstractsocket_open(void* self, int32_t mode);

/// @warning DEPRECATED: Use `q_abstractsocket_super_open` instead
///
#define q_abstractsocket_qbase_open q_abstractsocket_super_open

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_abstractsocket_super_open(void* self, int32_t mode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback bool func(QAbstractSocket* self, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void q_abstractsocket_on_open(void* self, bool (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
///
long long q_abstractsocket_pos(void* self);

/// @warning DEPRECATED: Use `q_abstractsocket_super_pos` instead
///
#define q_abstractsocket_qbase_pos q_abstractsocket_super_pos

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
///
long long q_abstractsocket_super_pos(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback long long func()
///
void q_abstractsocket_on_pos(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
///
long long q_abstractsocket_size(void* self);

/// @warning DEPRECATED: Use `q_abstractsocket_super_size` instead
///
#define q_abstractsocket_qbase_size q_abstractsocket_super_size

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
///
long long q_abstractsocket_super_size(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback long long func()
///
void q_abstractsocket_on_size(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
/// @param pos long long
///
bool q_abstractsocket_seek(void* self, long long pos);

/// @warning DEPRECATED: Use `q_abstractsocket_super_seek` instead
///
#define q_abstractsocket_qbase_seek q_abstractsocket_super_seek

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param pos long long
///
bool q_abstractsocket_super_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback bool func(QAbstractSocket* self, long long pos)
///
void q_abstractsocket_on_seek(void* self, bool (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_at_end(void* self);

/// @warning DEPRECATED: Use `q_abstractsocket_super_at_end` instead
///
#define q_abstractsocket_qbase_at_end q_abstractsocket_super_at_end

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_super_at_end(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback bool func()
///
void q_abstractsocket_on_at_end(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_reset(void* self);

/// @warning DEPRECATED: Use `q_abstractsocket_super_reset` instead
///
#define q_abstractsocket_qbase_reset q_abstractsocket_super_reset

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_super_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback bool func()
///
void q_abstractsocket_on_reset(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_can_read_line(void* self);

/// @warning DEPRECATED: Use `q_abstractsocket_super_can_read_line` instead
///
#define q_abstractsocket_qbase_can_read_line q_abstractsocket_super_can_read_line

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
///
bool q_abstractsocket_super_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback bool func()
///
void q_abstractsocket_on_can_read_line(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
/// @param event QEvent*
///
bool q_abstractsocket_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_abstractsocket_super_event` instead
///
#define q_abstractsocket_qbase_event q_abstractsocket_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param event QEvent*
///
bool q_abstractsocket_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback bool func(QAbstractSocket* self, QEvent* event)
///
void q_abstractsocket_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractsocket_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_abstractsocket_super_event_filter` instead
///
#define q_abstractsocket_qbase_event_filter q_abstractsocket_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractsocket_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback bool func(QAbstractSocket* self, QObject* watched, QEvent* event)
///
void q_abstractsocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
/// @param event QTimerEvent*
///
void q_abstractsocket_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_abstractsocket_super_timer_event` instead
///
#define q_abstractsocket_qbase_timer_event q_abstractsocket_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param event QTimerEvent*
///
void q_abstractsocket_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, QTimerEvent* event)
///
void q_abstractsocket_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
/// @param event QChildEvent*
///
void q_abstractsocket_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_abstractsocket_super_child_event` instead
///
#define q_abstractsocket_qbase_child_event q_abstractsocket_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param event QChildEvent*
///
void q_abstractsocket_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, QChildEvent* event)
///
void q_abstractsocket_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
/// @param event QEvent*
///
void q_abstractsocket_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_abstractsocket_super_custom_event` instead
///
#define q_abstractsocket_qbase_custom_event q_abstractsocket_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param event QEvent*
///
void q_abstractsocket_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, QEvent* event)
///
void q_abstractsocket_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
/// @param signal QMetaMethod*
///
void q_abstractsocket_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_abstractsocket_super_connect_notify` instead
///
#define q_abstractsocket_qbase_connect_notify q_abstractsocket_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param signal QMetaMethod*
///
void q_abstractsocket_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, QMetaMethod* signal)
///
void q_abstractsocket_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
/// @param signal QMetaMethod*
///
void q_abstractsocket_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_abstractsocket_super_disconnect_notify` instead
///
#define q_abstractsocket_qbase_disconnect_notify q_abstractsocket_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param signal QMetaMethod*
///
void q_abstractsocket_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, QMetaMethod* signal)
///
void q_abstractsocket_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_abstractsocket_set_open_mode(void* self, int32_t openMode);

/// @warning DEPRECATED: Use `q_abstractsocket_super_set_open_mode` instead
///
#define q_abstractsocket_qbase_set_open_mode q_abstractsocket_super_set_open_mode

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_abstractsocket_super_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_abstractsocket_on_set_open_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
/// @param errorString const char*
///
void q_abstractsocket_set_error_string(void* self, const char* errorString);

/// @warning DEPRECATED: Use `q_abstractsocket_super_set_error_string` instead
///
#define q_abstractsocket_qbase_set_error_string q_abstractsocket_super_set_error_string

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param errorString const char*
///
void q_abstractsocket_super_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, const char* errorString)
///
void q_abstractsocket_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
///
QObject* q_abstractsocket_sender(void* self);

/// @warning DEPRECATED: Use `q_abstractsocket_super_sender` instead
///
#define q_abstractsocket_qbase_sender q_abstractsocket_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
///
QObject* q_abstractsocket_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback QObject* func()
///
void q_abstractsocket_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
///
int32_t q_abstractsocket_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_abstractsocket_super_sender_signal_index` instead
///
#define q_abstractsocket_qbase_sender_signal_index q_abstractsocket_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
///
int32_t q_abstractsocket_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback int32_t func()
///
void q_abstractsocket_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
/// @param signal const char*
///
int32_t q_abstractsocket_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_abstractsocket_super_receivers` instead
///
#define q_abstractsocket_qbase_receivers q_abstractsocket_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param signal const char*
///
int32_t q_abstractsocket_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback int32_t func(QAbstractSocket* self, const char* signal)
///
void q_abstractsocket_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSocket*
/// @param signal QMetaMethod*
///
bool q_abstractsocket_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_abstractsocket_super_is_signal_connected` instead
///
#define q_abstractsocket_qbase_is_signal_connected q_abstractsocket_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param signal QMetaMethod*
///
bool q_abstractsocket_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSocket*
/// @param callback bool func(QAbstractSocket* self, QMetaMethod* signal)
///
void q_abstractsocket_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractSocket*
/// @param callback void func(QAbstractSocket* self, const char* objectName)
///
void q_abstractsocket_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#dtor.QAbstractSocket)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractSocket*
///
void q_abstractsocket_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#public-types)

typedef enum {
    QABSTRACTSOCKET_SOCKETTYPE_TCPSOCKET = 0,
    QABSTRACTSOCKET_SOCKETTYPE_UDPSOCKET = 1,
    QABSTRACTSOCKET_SOCKETTYPE_SCTPSOCKET = 2,
    QABSTRACTSOCKET_SOCKETTYPE_UNKNOWNSOCKETTYPE = -1
} QAbstractSocket__SocketType;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#public-types)

typedef enum {
    QABSTRACTSOCKET_NETWORKLAYERPROTOCOL_IPV4PROTOCOL = 0,
    QABSTRACTSOCKET_NETWORKLAYERPROTOCOL_IPV6PROTOCOL = 1,
    QABSTRACTSOCKET_NETWORKLAYERPROTOCOL_ANYIPPROTOCOL = 2,
    QABSTRACTSOCKET_NETWORKLAYERPROTOCOL_UNKNOWNNETWORKLAYERPROTOCOL = -1
} QAbstractSocket__NetworkLayerProtocol;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#public-types)

typedef enum {
    QABSTRACTSOCKET_SOCKETSTATE_UNCONNECTEDSTATE = 0,
    QABSTRACTSOCKET_SOCKETSTATE_HOSTLOOKUPSTATE = 1,
    QABSTRACTSOCKET_SOCKETSTATE_CONNECTINGSTATE = 2,
    QABSTRACTSOCKET_SOCKETSTATE_CONNECTEDSTATE = 3,
    QABSTRACTSOCKET_SOCKETSTATE_BOUNDSTATE = 4,
    QABSTRACTSOCKET_SOCKETSTATE_LISTENINGSTATE = 5,
    QABSTRACTSOCKET_SOCKETSTATE_CLOSINGSTATE = 6
} QAbstractSocket__SocketState;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#public-types)

typedef enum {
    QABSTRACTSOCKET_BINDFLAG_DEFAULTFORPLATFORM = 0,
    QABSTRACTSOCKET_BINDFLAG_SHAREADDRESS = 1,
    QABSTRACTSOCKET_BINDFLAG_DONTSHAREADDRESS = 2,
    QABSTRACTSOCKET_BINDFLAG_REUSEADDRESSHINT = 4
} QAbstractSocket__BindFlag;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#public-types)

typedef enum {
    QABSTRACTSOCKET_PAUSEMODE_PAUSENEVER = 0,
    QABSTRACTSOCKET_PAUSEMODE_PAUSEONSSLERRORS = 1
} QAbstractSocket__PauseMode;

#endif

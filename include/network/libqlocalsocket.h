#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQLOCALSOCKET_H
#define SRC_NETWORK_QT6C_LIBQLOCALSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html)

/// q_localsocket_new constructs a new QLocalSocket object.
///
QLocalSocket* q_localsocket_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html)

/// q_localsocket_new2 constructs a new QLocalSocket object.
///
/// @param parent QObject*
///
QLocalSocket* q_localsocket_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QLocalSocket*
///
const QMetaObject* q_localsocket_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback const QMetaObject* func()
///
void q_localsocket_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_localsocket_super_meta_object` instead
///
#define q_localsocket_qbase_meta_object q_localsocket_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
///
const QMetaObject* q_localsocket_super_meta_object(void* self);

/// @param self QLocalSocket*
/// @param param1 const char*
///
void* q_localsocket_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback void* func(QLocalSocket* self, const char* param1)
///
void q_localsocket_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_localsocket_super_metacast` instead
///
#define q_localsocket_qbase_metacast q_localsocket_super_metacast

/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param param1 const char*
///
void* q_localsocket_super_metacast(void* self, const char* param1);

/// @param self QLocalSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_localsocket_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback int32_t func(QLocalSocket* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_localsocket_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_localsocket_super_metacall` instead
///
#define q_localsocket_qbase_metacall q_localsocket_super_metacall

/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_localsocket_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_localsocket_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// @param self QLocalSocket*
///
void q_localsocket_connect_to_server(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// @param self QLocalSocket*
/// @param name const char*
///
void q_localsocket_connect_to_server2(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#disconnectFromServer)
///
/// @param self QLocalSocket*
///
void q_localsocket_disconnect_from_server(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setServerName)
///
/// @param self QLocalSocket*
/// @param name const char*
///
void q_localsocket_set_server_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#serverName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLocalSocket*
///
const char* q_localsocket_server_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#fullServerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLocalSocket*
///
const char* q_localsocket_full_server_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#abort)
///
/// @param self QLocalSocket*
///
void q_localsocket_abort(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
///
/// @param self QLocalSocket*
///
bool q_localsocket_is_sequential(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback bool func()
///
void q_localsocket_on_is_sequential(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `q_localsocket_super_is_sequential` instead
///
#define q_localsocket_qbase_is_sequential q_localsocket_super_is_sequential

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
///
bool q_localsocket_super_is_sequential(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
///
/// @param self QLocalSocket*
///
long long q_localsocket_bytes_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback long long func()
///
void q_localsocket_on_bytes_available(void* self, long long (*callback)());

/// @warning DEPRECATED: Use `q_localsocket_super_bytes_available` instead
///
#define q_localsocket_qbase_bytes_available q_localsocket_super_bytes_available

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
///
long long q_localsocket_super_bytes_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
///
/// @param self QLocalSocket*
///
long long q_localsocket_bytes_to_write(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback long long func()
///
void q_localsocket_on_bytes_to_write(void* self, long long (*callback)());

/// @warning DEPRECATED: Use `q_localsocket_super_bytes_to_write` instead
///
#define q_localsocket_qbase_bytes_to_write q_localsocket_super_bytes_to_write

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
///
long long q_localsocket_super_bytes_to_write(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
///
/// @param self QLocalSocket*
///
bool q_localsocket_can_read_line(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback bool func()
///
void q_localsocket_on_can_read_line(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `q_localsocket_super_can_read_line` instead
///
#define q_localsocket_qbase_can_read_line q_localsocket_super_can_read_line

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
///
bool q_localsocket_super_can_read_line(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#open)
///
/// @param self QLocalSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_localsocket_open(void* self, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#open)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback bool func(QLocalSocket* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_localsocket_on_open(void* self, bool (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `q_localsocket_super_open` instead
///
#define q_localsocket_qbase_open q_localsocket_super_open

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#open)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_localsocket_super_open(void* self, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#close)
///
/// @param self QLocalSocket*
///
void q_localsocket_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#close)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback void func()
///
void q_localsocket_on_close(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_localsocket_super_close` instead
///
#define q_localsocket_qbase_close q_localsocket_super_close

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#close)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
///
void q_localsocket_super_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#error)
///
/// @param self QLocalSocket*
///
/// @return enum QLocalSocket__LocalSocketError
///
int32_t q_localsocket_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#flush)
///
/// @param self QLocalSocket*
///
bool q_localsocket_flush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#isValid)
///
/// @param self QLocalSocket*
///
bool q_localsocket_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readBufferSize)
///
/// @param self QLocalSocket*
///
long long q_localsocket_read_buffer_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setReadBufferSize)
///
/// @param self QLocalSocket*
/// @param size long long
///
void q_localsocket_set_read_buffer_size(void* self, long long size);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
///
/// @param self QLocalSocket*
/// @param socketDescriptor intptr_t
///
bool q_localsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#socketDescriptor)
///
/// @param self QLocalSocket*
///
intptr_t q_localsocket_socket_descriptor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketOptions)
///
/// @param self QLocalSocket*
/// @param option flag of enum QLocalSocket__SocketOption
///
void q_localsocket_set_socket_options(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#socketOptions)
///
/// @param self QLocalSocket*
///
/// @return flag of enum QLocalSocket__SocketOption
///
int32_t q_localsocket_socket_options(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#state)
///
/// @param self QLocalSocket*
///
/// @return enum QLocalSocket__LocalSocketState
///
int32_t q_localsocket_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForBytesWritten)
///
/// @param self QLocalSocket*
/// @param msecs int
///
bool q_localsocket_wait_for_bytes_written(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForBytesWritten)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback bool func(QLocalSocket* self, int msecs)
///
void q_localsocket_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_localsocket_super_wait_for_bytes_written` instead
///
#define q_localsocket_qbase_wait_for_bytes_written q_localsocket_super_wait_for_bytes_written

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForBytesWritten)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param msecs int
///
bool q_localsocket_super_wait_for_bytes_written(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForConnected)
///
/// @param self QLocalSocket*
///
bool q_localsocket_wait_for_connected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForDisconnected)
///
/// @param self QLocalSocket*
///
bool q_localsocket_wait_for_disconnected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForReadyRead)
///
/// @param self QLocalSocket*
/// @param msecs int
///
bool q_localsocket_wait_for_ready_read(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForReadyRead)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback bool func(QLocalSocket* self, int msecs)
///
void q_localsocket_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_localsocket_super_wait_for_ready_read` instead
///
#define q_localsocket_qbase_wait_for_ready_read q_localsocket_super_wait_for_ready_read

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForReadyRead)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param msecs int
///
bool q_localsocket_super_wait_for_ready_read(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#connected)
///
/// @param self QLocalSocket*
///
void q_localsocket_connected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#connected)
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self)
///
void q_localsocket_on_connected(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#disconnected)
///
/// @param self QLocalSocket*
///
void q_localsocket_disconnected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#disconnected)
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self)
///
void q_localsocket_on_disconnected(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#errorOccurred)
///
/// @param self QLocalSocket*
/// @param socketError enum QLocalSocket__LocalSocketError
///
void q_localsocket_error_occurred(void* self, int32_t socketError);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#errorOccurred)
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, enum QLocalSocket__LocalSocketError socketError)
///
void q_localsocket_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#stateChanged)
///
/// @param self QLocalSocket*
/// @param socketState enum QLocalSocket__LocalSocketState
///
void q_localsocket_state_changed(void* self, int32_t socketState);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#stateChanged)
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, enum QLocalSocket__LocalSocketState socketState)
///
void q_localsocket_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
///
/// @param self QLocalSocket*
/// @param param1 char*
/// @param param2 long long
///
long long q_localsocket_read_data(void* self, char* param1, long long param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback long long func(QLocalSocket* self, char* param1, long long param2)
///
void q_localsocket_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// @warning DEPRECATED: Use `q_localsocket_super_read_data` instead
///
#define q_localsocket_qbase_read_data q_localsocket_super_read_data

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param param1 char*
/// @param param2 long long
///
long long q_localsocket_super_read_data(void* self, char* param1, long long param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
///
/// @param self QLocalSocket*
/// @param data char*
/// @param maxSize long long
///
long long q_localsocket_read_line_data(void* self, char* data, long long maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback long long func(QLocalSocket* self, char* data, long long maxSize)
///
void q_localsocket_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// @warning DEPRECATED: Use `q_localsocket_super_read_line_data` instead
///
#define q_localsocket_qbase_read_line_data q_localsocket_super_read_line_data

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param data char*
/// @param maxSize long long
///
long long q_localsocket_super_read_line_data(void* self, char* data, long long maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
///
/// @param self QLocalSocket*
/// @param maxSize long long
///
long long q_localsocket_skip_data(void* self, long long maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback long long func(QLocalSocket* self, long long maxSize)
///
void q_localsocket_on_skip_data(void* self, long long (*callback)(void*, long long));

/// @warning DEPRECATED: Use `q_localsocket_super_skip_data` instead
///
#define q_localsocket_qbase_skip_data q_localsocket_super_skip_data

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param maxSize long long
///
long long q_localsocket_super_skip_data(void* self, long long maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
///
/// @param self QLocalSocket*
/// @param param1 const char*
/// @param param2 long long
///
long long q_localsocket_write_data(void* self, const char* param1, long long param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback long long func(QLocalSocket* self, const char* param1, long long param2)
///
void q_localsocket_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// @warning DEPRECATED: Use `q_localsocket_super_write_data` instead
///
#define q_localsocket_qbase_write_data q_localsocket_super_write_data

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param param1 const char*
/// @param param2 long long
///
long long q_localsocket_super_write_data(void* self, const char* param1, long long param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_localsocket_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_localsocket_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// @param self QLocalSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_localsocket_connect_to_server1(void* self, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// @param self QLocalSocket*
/// @param name const char*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_localsocket_connect_to_server22(void* self, const char* name, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
///
/// @param self QLocalSocket*
/// @param socketDescriptor intptr_t
/// @param socketState enum QLocalSocket__LocalSocketState
///
bool q_localsocket_set_socket_descriptor2(void* self, intptr_t socketDescriptor, int32_t socketState);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
///
/// @param self QLocalSocket*
/// @param socketDescriptor intptr_t
/// @param socketState enum QLocalSocket__LocalSocketState
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_localsocket_set_socket_descriptor3(void* self, intptr_t socketDescriptor, int32_t socketState, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForConnected)
///
/// @param self QLocalSocket*
/// @param msecs int
///
bool q_localsocket_wait_for_connected1(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForDisconnected)
///
/// @param self QLocalSocket*
/// @param msecs int
///
bool q_localsocket_wait_for_disconnected1(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QLocalSocket*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_localsocket_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QLocalSocket*
/// @param enabled bool
///
void q_localsocket_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QLocalSocket*
///
bool q_localsocket_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QLocalSocket*
///
bool q_localsocket_is_open(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QLocalSocket*
///
bool q_localsocket_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QLocalSocket*
///
bool q_localsocket_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QLocalSocket*
///
int32_t q_localsocket_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QLocalSocket*
///
int32_t q_localsocket_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QLocalSocket*
///
int32_t q_localsocket_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QLocalSocket*
/// @param channel int
///
void q_localsocket_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QLocalSocket*
///
int32_t q_localsocket_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QLocalSocket*
/// @param channel int
///
void q_localsocket_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QLocalSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_localsocket_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLocalSocket*
/// @param maxlen long long
///
char* q_localsocket_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLocalSocket*
///
char* q_localsocket_read_all(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QLocalSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_localsocket_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLocalSocket*
///
char* q_localsocket_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QLocalSocket*
///
void q_localsocket_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QLocalSocket*
///
void q_localsocket_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QLocalSocket*
///
void q_localsocket_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QLocalSocket*
///
bool q_localsocket_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QLocalSocket*
/// @param data const char*
/// @param lenVal long long
///
long long q_localsocket_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QLocalSocket*
/// @param data const char*
///
long long q_localsocket_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QLocalSocket*
/// @param data char*
///
long long q_localsocket_write3(void* self, char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QLocalSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_localsocket_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLocalSocket*
/// @param maxlen long long
///
char* q_localsocket_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QLocalSocket*
/// @param maxSize long long
///
long long q_localsocket_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QLocalSocket*
/// @param c char
///
void q_localsocket_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QLocalSocket*
/// @param c char
///
bool q_localsocket_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QLocalSocket*
/// @param c char*
///
bool q_localsocket_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLocalSocket*
///
const char* q_localsocket_error_string(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QLocalSocket*
///
void q_localsocket_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self)
///
void q_localsocket_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QLocalSocket*
/// @param channel int
///
void q_localsocket_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, int channel)
///
void q_localsocket_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QLocalSocket*
/// @param bytes long long
///
void q_localsocket_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, long long bytes)
///
void q_localsocket_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QLocalSocket*
/// @param channel int
/// @param bytes long long
///
void q_localsocket_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, int channel, long long bytes)
///
void q_localsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QLocalSocket*
///
void q_localsocket_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self)
///
void q_localsocket_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QLocalSocket*
///
void q_localsocket_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self)
///
void q_localsocket_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLocalSocket*
/// @param maxlen long long
///
char* q_localsocket_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLocalSocket*
///
const char* q_localsocket_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLocalSocket*
/// @param name const char*
///
void q_localsocket_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QLocalSocket*
///
bool q_localsocket_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QLocalSocket*
///
bool q_localsocket_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QLocalSocket*
///
bool q_localsocket_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QLocalSocket*
///
bool q_localsocket_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLocalSocket*
/// @param b bool
///
bool q_localsocket_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QLocalSocket*
///
QThread* q_localsocket_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLocalSocket*
/// @param thread QThread*
///
bool q_localsocket_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLocalSocket*
/// @param interval int
///
int32_t q_localsocket_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLocalSocket*
/// @param time int64_t of nanoseconds
///
int32_t q_localsocket_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLocalSocket*
/// @param id int
///
void q_localsocket_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLocalSocket*
/// @param id enum Qt__TimerId
///
void q_localsocket_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QLocalSocket*
///
/// @return libqt_list of QObject*
///
libqt_list q_localsocket_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QLocalSocket*
/// @param parent QObject*
///
void q_localsocket_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLocalSocket*
/// @param filterObj QObject*
///
void q_localsocket_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLocalSocket*
/// @param obj QObject*
///
void q_localsocket_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_localsocket_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_localsocket_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLocalSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_localsocket_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_localsocket_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_localsocket_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLocalSocket*
///
bool q_localsocket_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLocalSocket*
/// @param receiver QObject*
///
bool q_localsocket_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_localsocket_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QLocalSocket*
///
void q_localsocket_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QLocalSocket*
///
void q_localsocket_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLocalSocket*
/// @param name const char*
/// @param value QVariant*
///
bool q_localsocket_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QLocalSocket*
/// @param name const char*
///
QVariant* q_localsocket_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLocalSocket*
///
const char** q_localsocket_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLocalSocket*
///
QBindingStorage* q_localsocket_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLocalSocket*
///
const QBindingStorage* q_localsocket_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLocalSocket*
///
void q_localsocket_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self)
///
void q_localsocket_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QLocalSocket*
///
QObject* q_localsocket_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QLocalSocket*
/// @param classname const char*
///
bool q_localsocket_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLocalSocket*
///
void q_localsocket_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLocalSocket*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_localsocket_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLocalSocket*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_localsocket_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_localsocket_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_localsocket_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLocalSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_localsocket_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLocalSocket*
/// @param signal const char*
///
bool q_localsocket_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLocalSocket*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_localsocket_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLocalSocket*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_localsocket_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLocalSocket*
/// @param receiver QObject*
/// @param member const char*
///
bool q_localsocket_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLocalSocket*
/// @param param1 QObject*
///
void q_localsocket_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, QObject* param1)
///
void q_localsocket_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
///
long long q_localsocket_pos(void* self);

/// @warning DEPRECATED: Use `q_localsocket_super_pos` instead
///
#define q_localsocket_qbase_pos q_localsocket_super_pos

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
///
long long q_localsocket_super_pos(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback long long func()
///
void q_localsocket_on_pos(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
///
long long q_localsocket_size(void* self);

/// @warning DEPRECATED: Use `q_localsocket_super_size` instead
///
#define q_localsocket_qbase_size q_localsocket_super_size

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
///
long long q_localsocket_super_size(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback long long func()
///
void q_localsocket_on_size(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param pos long long
///
bool q_localsocket_seek(void* self, long long pos);

/// @warning DEPRECATED: Use `q_localsocket_super_seek` instead
///
#define q_localsocket_qbase_seek q_localsocket_super_seek

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param pos long long
///
bool q_localsocket_super_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool func(QLocalSocket* self, long long pos)
///
void q_localsocket_on_seek(void* self, bool (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
///
bool q_localsocket_at_end(void* self);

/// @warning DEPRECATED: Use `q_localsocket_super_at_end` instead
///
#define q_localsocket_qbase_at_end q_localsocket_super_at_end

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
///
bool q_localsocket_super_at_end(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool func()
///
void q_localsocket_on_at_end(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
///
bool q_localsocket_reset(void* self);

/// @warning DEPRECATED: Use `q_localsocket_super_reset` instead
///
#define q_localsocket_qbase_reset q_localsocket_super_reset

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
///
bool q_localsocket_super_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool func()
///
void q_localsocket_on_reset(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QEvent*
///
bool q_localsocket_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_localsocket_super_event` instead
///
#define q_localsocket_qbase_event q_localsocket_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QEvent*
///
bool q_localsocket_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool func(QLocalSocket* self, QEvent* event)
///
void q_localsocket_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_localsocket_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_localsocket_super_event_filter` instead
///
#define q_localsocket_qbase_event_filter q_localsocket_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_localsocket_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool func(QLocalSocket* self, QObject* watched, QEvent* event)
///
void q_localsocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QTimerEvent*
///
void q_localsocket_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_localsocket_super_timer_event` instead
///
#define q_localsocket_qbase_timer_event q_localsocket_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QTimerEvent*
///
void q_localsocket_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, QTimerEvent* event)
///
void q_localsocket_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QChildEvent*
///
void q_localsocket_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_localsocket_super_child_event` instead
///
#define q_localsocket_qbase_child_event q_localsocket_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QChildEvent*
///
void q_localsocket_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, QChildEvent* event)
///
void q_localsocket_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QEvent*
///
void q_localsocket_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_localsocket_super_custom_event` instead
///
#define q_localsocket_qbase_custom_event q_localsocket_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QEvent*
///
void q_localsocket_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, QEvent* event)
///
void q_localsocket_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
///
void q_localsocket_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_localsocket_super_connect_notify` instead
///
#define q_localsocket_qbase_connect_notify q_localsocket_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
///
void q_localsocket_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, QMetaMethod* signal)
///
void q_localsocket_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
///
void q_localsocket_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_localsocket_super_disconnect_notify` instead
///
#define q_localsocket_qbase_disconnect_notify q_localsocket_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
///
void q_localsocket_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, QMetaMethod* signal)
///
void q_localsocket_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_localsocket_set_open_mode(void* self, int32_t openMode);

/// @warning DEPRECATED: Use `q_localsocket_super_set_open_mode` instead
///
#define q_localsocket_qbase_set_open_mode q_localsocket_super_set_open_mode

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_localsocket_super_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_localsocket_on_set_open_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param errorString const char*
///
void q_localsocket_set_error_string(void* self, const char* errorString);

/// @warning DEPRECATED: Use `q_localsocket_super_set_error_string` instead
///
#define q_localsocket_qbase_set_error_string q_localsocket_super_set_error_string

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param errorString const char*
///
void q_localsocket_super_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, const char* errorString)
///
void q_localsocket_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
///
QObject* q_localsocket_sender(void* self);

/// @warning DEPRECATED: Use `q_localsocket_super_sender` instead
///
#define q_localsocket_qbase_sender q_localsocket_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
///
QObject* q_localsocket_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback QObject* func()
///
void q_localsocket_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
///
int32_t q_localsocket_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_localsocket_super_sender_signal_index` instead
///
#define q_localsocket_qbase_sender_signal_index q_localsocket_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
///
int32_t q_localsocket_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback int32_t func()
///
void q_localsocket_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal const char*
///
int32_t q_localsocket_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_localsocket_super_receivers` instead
///
#define q_localsocket_qbase_receivers q_localsocket_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal const char*
///
int32_t q_localsocket_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback int32_t func(QLocalSocket* self, const char* signal)
///
void q_localsocket_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
///
bool q_localsocket_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_localsocket_super_is_signal_connected` instead
///
#define q_localsocket_qbase_is_signal_connected q_localsocket_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
///
bool q_localsocket_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool func(QLocalSocket* self, QMetaMethod* signal)
///
void q_localsocket_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, const char* objectName)
///
void q_localsocket_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#dtor.QLocalSocket)
///
/// Delete this object from C++ memory.
///
/// @param self QLocalSocket*
///
void q_localsocket_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#public-types)

typedef enum {
    QLOCALSOCKET_LOCALSOCKETERROR_CONNECTIONREFUSEDERROR = 0,
    QLOCALSOCKET_LOCALSOCKETERROR_PEERCLOSEDERROR = 1,
    QLOCALSOCKET_LOCALSOCKETERROR_SERVERNOTFOUNDERROR = 2,
    QLOCALSOCKET_LOCALSOCKETERROR_SOCKETACCESSERROR = 3,
    QLOCALSOCKET_LOCALSOCKETERROR_SOCKETRESOURCEERROR = 4,
    QLOCALSOCKET_LOCALSOCKETERROR_SOCKETTIMEOUTERROR = 5,
    QLOCALSOCKET_LOCALSOCKETERROR_DATAGRAMTOOLARGEERROR = 6,
    QLOCALSOCKET_LOCALSOCKETERROR_CONNECTIONERROR = 7,
    QLOCALSOCKET_LOCALSOCKETERROR_UNSUPPORTEDSOCKETOPERATIONERROR = 10,
    QLOCALSOCKET_LOCALSOCKETERROR_UNKNOWNSOCKETERROR = -1,
    QLOCALSOCKET_LOCALSOCKETERROR_OPERATIONERROR = 19
} QLocalSocket__LocalSocketError;

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#public-types)

typedef enum {
    QLOCALSOCKET_LOCALSOCKETSTATE_UNCONNECTEDSTATE = 0,
    QLOCALSOCKET_LOCALSOCKETSTATE_CONNECTINGSTATE = 2,
    QLOCALSOCKET_LOCALSOCKETSTATE_CONNECTEDSTATE = 3,
    QLOCALSOCKET_LOCALSOCKETSTATE_CLOSINGSTATE = 6
} QLocalSocket__LocalSocketState;

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#public-types)

typedef enum {
    QLOCALSOCKET_SOCKETOPTION_NOOPTIONS = 0,
    QLOCALSOCKET_SOCKETOPTION_ABSTRACTNAMESPACEOPTION = 1
} QLocalSocket__SocketOption;

#endif

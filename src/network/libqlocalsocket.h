#pragma once
#ifndef SRC_NETWORKQT6C_LIBQLOCALSOCKET_H
#define SRC_NETWORKQT6C_LIBQLOCALSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qlocalsocket.html

/// q_localsocket_new constructs a new QLocalSocket object.
///
QLocalSocket* q_localsocket_new();

/// q_localsocket_new2 constructs a new QLocalSocket object.
///
/// @param parent QObject*
QLocalSocket* q_localsocket_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QLocalSocket*
const QMetaObject* q_localsocket_meta_object(void* self);

/// @param self QLocalSocket*
/// @param param1 const char*
void* q_localsocket_metacast(void* self, const char* param1);

/// @param self QLocalSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_localsocket_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback int32_t fn(QLocalSocket*, enum QMetaObject__Call, int, void*)
void q_localsocket_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_localsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_localsocket_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// @param self QLocalSocket*
void q_localsocket_connect_to_server(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// @param self QLocalSocket*
/// @param name const char*
void q_localsocket_connect_to_server2(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#disconnectFromServer)
///
/// @param self QLocalSocket*
void q_localsocket_disconnect_from_server(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setServerName)
///
/// @param self QLocalSocket*
/// @param name const char*
void q_localsocket_set_server_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#serverName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocalSocket*
const char* q_localsocket_server_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#fullServerName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocalSocket*
const char* q_localsocket_full_server_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#abort)
///
/// @param self QLocalSocket*
void q_localsocket_abort(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
///
/// @param self QLocalSocket*
bool q_localsocket_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback bool fn()
void q_localsocket_on_is_sequential(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
bool q_localsocket_qbase_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
///
/// @param self QLocalSocket*
long long q_localsocket_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback long long fn()
void q_localsocket_on_bytes_available(void* self, long long (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
long long q_localsocket_qbase_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
///
/// @param self QLocalSocket*
long long q_localsocket_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback long long fn()
void q_localsocket_on_bytes_to_write(void* self, long long (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
long long q_localsocket_qbase_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
///
/// @param self QLocalSocket*
bool q_localsocket_can_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback bool fn()
void q_localsocket_on_can_read_line(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
bool q_localsocket_qbase_can_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#open)
///
/// @param self QLocalSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
bool q_localsocket_open(void* self, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#open)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback bool fn(QLocalSocket*, flag of enum QIODeviceBase__OpenModeFlag)
void q_localsocket_on_open(void* self, bool (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#open)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
bool q_localsocket_qbase_open(void* self, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#close)
///
/// @param self QLocalSocket*
void q_localsocket_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#close)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback void fn()
void q_localsocket_on_close(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#close)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
void q_localsocket_qbase_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#error)
///
/// @param self QLocalSocket*
///
/// @return enum QLocalSocket__LocalSocketError
int64_t q_localsocket_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#flush)
///
/// @param self QLocalSocket*
bool q_localsocket_flush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#isValid)
///
/// @param self QLocalSocket*
bool q_localsocket_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readBufferSize)
///
/// @param self QLocalSocket*
long long q_localsocket_read_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setReadBufferSize)
///
/// @param self QLocalSocket*
/// @param size long long
void q_localsocket_set_read_buffer_size(void* self, long long size);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
///
/// @param self QLocalSocket*
/// @param socketDescriptor intptr_t
bool q_localsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#socketDescriptor)
///
/// @param self QLocalSocket*
intptr_t q_localsocket_socket_descriptor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketOptions)
///
/// @param self QLocalSocket*
/// @param option flag of enum QLocalSocket__SocketOption
void q_localsocket_set_socket_options(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#socketOptions)
///
/// @param self QLocalSocket*
///
/// @return flag of enum QLocalSocket__SocketOption
int64_t q_localsocket_socket_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#state)
///
/// @param self QLocalSocket*
///
/// @return enum QLocalSocket__LocalSocketState
int64_t q_localsocket_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForBytesWritten)
///
/// @param self QLocalSocket*
/// @param msecs int
bool q_localsocket_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForBytesWritten)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback bool fn(QLocalSocket*, int)
void q_localsocket_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForBytesWritten)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param msecs int
bool q_localsocket_qbase_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForConnected)
///
/// @param self QLocalSocket*
bool q_localsocket_wait_for_connected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForDisconnected)
///
/// @param self QLocalSocket*
bool q_localsocket_wait_for_disconnected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForReadyRead)
///
/// @param self QLocalSocket*
/// @param msecs int
bool q_localsocket_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForReadyRead)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback bool fn(QLocalSocket*, int)
void q_localsocket_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForReadyRead)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param msecs int
bool q_localsocket_qbase_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connected)
///
/// @param self QLocalSocket*
void q_localsocket_connected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connected)
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*)
void q_localsocket_on_connected(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#disconnected)
///
/// @param self QLocalSocket*
void q_localsocket_disconnected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#disconnected)
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*)
void q_localsocket_on_disconnected(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#errorOccurred)
///
/// @param self QLocalSocket*
/// @param socketError enum QLocalSocket__LocalSocketError
void q_localsocket_error_occurred(void* self, int64_t socketError);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#errorOccurred)
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*, enum QLocalSocket__LocalSocketError)
void q_localsocket_on_error_occurred(void* self, void (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#stateChanged)
///
/// @param self QLocalSocket*
/// @param socketState enum QLocalSocket__LocalSocketState
void q_localsocket_state_changed(void* self, int64_t socketState);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#stateChanged)
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*, enum QLocalSocket__LocalSocketState)
void q_localsocket_on_state_changed(void* self, void (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
///
/// @param self QLocalSocket*
/// @param param1 char*
/// @param param2 long long
long long q_localsocket_read_data(void* self, char* param1, long long param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback long long fn(QLocalSocket*, char*, long long)
void q_localsocket_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param param1 char*
/// @param param2 long long
long long q_localsocket_qbase_read_data(void* self, char* param1, long long param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
///
/// @param self QLocalSocket*
/// @param data char*
/// @param maxSize long long
long long q_localsocket_read_line_data(void* self, char* data, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback long long fn(QLocalSocket*, char*, long long)
void q_localsocket_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param data char*
/// @param maxSize long long
long long q_localsocket_qbase_read_line_data(void* self, char* data, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
///
/// @param self QLocalSocket*
/// @param maxSize long long
long long q_localsocket_skip_data(void* self, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback long long fn(QLocalSocket*, long long)
void q_localsocket_on_skip_data(void* self, long long (*callback)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param maxSize long long
long long q_localsocket_qbase_skip_data(void* self, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
///
/// @param self QLocalSocket*
/// @param param1 const char*
/// @param param2 long long
long long q_localsocket_write_data(void* self, const char* param1, long long param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback long long fn(QLocalSocket*, const char*, long long)
void q_localsocket_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param param1 const char*
/// @param param2 long long
long long q_localsocket_qbase_write_data(void* self, const char* param1, long long param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_localsocket_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_localsocket_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// @param self QLocalSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_localsocket_connect_to_server1(void* self, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// @param self QLocalSocket*
/// @param name const char*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_localsocket_connect_to_server22(void* self, const char* name, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
///
/// @param self QLocalSocket*
/// @param socketDescriptor intptr_t
/// @param socketState enum QLocalSocket__LocalSocketState
bool q_localsocket_set_socket_descriptor2(void* self, intptr_t socketDescriptor, int64_t socketState);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
///
/// @param self QLocalSocket*
/// @param socketDescriptor intptr_t
/// @param socketState enum QLocalSocket__LocalSocketState
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
bool q_localsocket_set_socket_descriptor3(void* self, intptr_t socketDescriptor, int64_t socketState, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForConnected)
///
/// @param self QLocalSocket*
/// @param msecs int
bool q_localsocket_wait_for_connected1(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForDisconnected)
///
/// @param self QLocalSocket*
/// @param msecs int
bool q_localsocket_wait_for_disconnected1(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QLocalSocket*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
int64_t q_localsocket_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QLocalSocket*
/// @param enabled bool
void q_localsocket_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QLocalSocket*
bool q_localsocket_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QLocalSocket*
bool q_localsocket_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QLocalSocket*
bool q_localsocket_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QLocalSocket*
bool q_localsocket_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QLocalSocket*
int32_t q_localsocket_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QLocalSocket*
int32_t q_localsocket_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QLocalSocket*
int32_t q_localsocket_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QLocalSocket*
/// @param channel int
void q_localsocket_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QLocalSocket*
int32_t q_localsocket_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QLocalSocket*
/// @param channel int
void q_localsocket_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QLocalSocket*
/// @param data char*
/// @param maxlen long long
long long q_localsocket_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocalSocket*
/// @param maxlen long long
char* q_localsocket_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocalSocket*
char* q_localsocket_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QLocalSocket*
/// @param data char*
/// @param maxlen long long
long long q_localsocket_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocalSocket*
char* q_localsocket_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QLocalSocket*
void q_localsocket_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QLocalSocket*
void q_localsocket_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QLocalSocket*
void q_localsocket_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QLocalSocket*
bool q_localsocket_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QLocalSocket*
/// @param data const char*
/// @param lenVal long long
long long q_localsocket_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QLocalSocket*
/// @param data const char*
long long q_localsocket_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QLocalSocket*
/// @param data const char*
long long q_localsocket_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QLocalSocket*
/// @param data char*
/// @param maxlen long long
long long q_localsocket_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocalSocket*
/// @param maxlen long long
char* q_localsocket_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QLocalSocket*
/// @param maxSize long long
long long q_localsocket_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QLocalSocket*
/// @param c char
void q_localsocket_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QLocalSocket*
/// @param c char
bool q_localsocket_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QLocalSocket*
/// @param c char*
bool q_localsocket_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocalSocket*
const char* q_localsocket_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QLocalSocket*
void q_localsocket_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*)
void q_localsocket_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QLocalSocket*
/// @param channel int
void q_localsocket_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*, int)
void q_localsocket_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QLocalSocket*
/// @param bytes long long
void q_localsocket_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*, long long)
void q_localsocket_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QLocalSocket*
/// @param channel int
/// @param bytes long long
void q_localsocket_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*, int, long long)
void q_localsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QLocalSocket*
void q_localsocket_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*)
void q_localsocket_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QLocalSocket*
void q_localsocket_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*)
void q_localsocket_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocalSocket*
/// @param maxlen long long
char* q_localsocket_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocalSocket*
const char* q_localsocket_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLocalSocket*
/// @param name char*
void q_localsocket_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QLocalSocket*
bool q_localsocket_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QLocalSocket*
bool q_localsocket_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QLocalSocket*
bool q_localsocket_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QLocalSocket*
bool q_localsocket_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLocalSocket*
/// @param b bool
bool q_localsocket_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QLocalSocket*
QThread* q_localsocket_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLocalSocket*
/// @param thread QThread*
bool q_localsocket_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLocalSocket*
/// @param interval int
int32_t q_localsocket_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLocalSocket*
/// @param id int
void q_localsocket_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLocalSocket*
/// @param id enum Qt__TimerId
void q_localsocket_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QLocalSocket*
libqt_list /* of QObject* */ q_localsocket_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QLocalSocket*
/// @param parent QObject*
void q_localsocket_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLocalSocket*
/// @param filterObj QObject*
void q_localsocket_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLocalSocket*
/// @param obj QObject*
void q_localsocket_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_localsocket_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLocalSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_localsocket_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_localsocket_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_localsocket_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QLocalSocket*
void q_localsocket_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QLocalSocket*
void q_localsocket_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLocalSocket*
/// @param name const char*
/// @param value QVariant*
bool q_localsocket_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QLocalSocket*
/// @param name const char*
QVariant* q_localsocket_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLocalSocket*
const char** q_localsocket_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLocalSocket*
QBindingStorage* q_localsocket_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLocalSocket*
const QBindingStorage* q_localsocket_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLocalSocket*
void q_localsocket_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*)
void q_localsocket_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QLocalSocket*
QObject* q_localsocket_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QLocalSocket*
/// @param classname const char*
bool q_localsocket_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLocalSocket*
void q_localsocket_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLocalSocket*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_localsocket_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLocalSocket*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_localsocket_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_localsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLocalSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_localsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLocalSocket*
/// @param param1 QObject*
void q_localsocket_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*, QObject*)
void q_localsocket_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
long long q_localsocket_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
long long q_localsocket_qbase_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback long long fn()
void q_localsocket_on_pos(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
long long q_localsocket_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
long long q_localsocket_qbase_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback long long fn()
void q_localsocket_on_size(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param pos long long
bool q_localsocket_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param pos long long
bool q_localsocket_qbase_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool fn(QLocalSocket*, long long)
void q_localsocket_on_seek(void* self, bool (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
bool q_localsocket_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
bool q_localsocket_qbase_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool fn()
void q_localsocket_on_at_end(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
bool q_localsocket_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
bool q_localsocket_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool fn()
void q_localsocket_on_reset(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QEvent*
bool q_localsocket_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QEvent*
bool q_localsocket_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool fn(QLocalSocket*, QEvent*)
void q_localsocket_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param watched QObject*
/// @param event QEvent*
bool q_localsocket_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param watched QObject*
/// @param event QEvent*
bool q_localsocket_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool fn(QLocalSocket*, QObject*, QEvent*)
void q_localsocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QTimerEvent*
void q_localsocket_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QTimerEvent*
void q_localsocket_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*, QTimerEvent*)
void q_localsocket_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QChildEvent*
void q_localsocket_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QChildEvent*
void q_localsocket_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*, QChildEvent*)
void q_localsocket_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QEvent*
void q_localsocket_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param event QEvent*
void q_localsocket_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*, QEvent*)
void q_localsocket_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
void q_localsocket_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
void q_localsocket_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*, QMetaMethod*)
void q_localsocket_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
void q_localsocket_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
void q_localsocket_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*, QMetaMethod*)
void q_localsocket_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_localsocket_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_localsocket_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*, flag of enum QIODeviceBase__OpenModeFlag)
void q_localsocket_on_set_open_mode(void* self, void (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param errorString const char*
void q_localsocket_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param errorString const char*
void q_localsocket_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*, const char*)
void q_localsocket_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
QObject* q_localsocket_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
QObject* q_localsocket_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback QObject* fn()
void q_localsocket_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
int32_t q_localsocket_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
int32_t q_localsocket_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback int32_t fn()
void q_localsocket_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal const char*
int32_t q_localsocket_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal const char*
int32_t q_localsocket_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback int32_t fn(QLocalSocket*, const char*)
void q_localsocket_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
bool q_localsocket_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
bool q_localsocket_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool fn(QLocalSocket*, QMetaMethod*)
void q_localsocket_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLocalSocket*
/// @param callback void fn(QLocalSocket*, const char*)
void q_localsocket_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#dtor.QLocalSocket)
///
/// Delete this object from C++ memory.
///
/// @param self QLocalSocket*
void q_localsocket_delete(void* self);

/// https://doc.qt.io/qt-6/qlocalsocket.html#types

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

typedef enum {
    QLOCALSOCKET_LOCALSOCKETSTATE_UNCONNECTEDSTATE = 0,
    QLOCALSOCKET_LOCALSOCKETSTATE_CONNECTINGSTATE = 2,
    QLOCALSOCKET_LOCALSOCKETSTATE_CONNECTEDSTATE = 3,
    QLOCALSOCKET_LOCALSOCKETSTATE_CLOSINGSTATE = 6
} QLocalSocket__LocalSocketState;

typedef enum {
    QLOCALSOCKET_SOCKETOPTION_NOOPTIONS = 0,
    QLOCALSOCKET_SOCKETOPTION_ABSTRACTNAMESPACEOPTION = 1
} QLocalSocket__SocketOption;

#endif

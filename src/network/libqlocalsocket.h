#pragma once
#ifndef NETWORK_LIBQLOCALSOCKET_H
#define NETWORK_LIBQLOCALSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
/// @param self const QLocalSocket*
///
const QMetaObject* q_localsocket_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback const QMetaObject* func(const QLocalSocket* self)
///
void q_localsocket_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QLocalSocket*
///
const QMetaObject* q_localsocket_super_meta_object(const void* self);

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
/// @param self const QLocalSocket*
///
const char* q_localsocket_server_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#fullServerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLocalSocket*
///
const char* q_localsocket_full_server_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#abort)
///
/// @param self QLocalSocket*
///
void q_localsocket_abort(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
///
/// @param self const QLocalSocket*
///
bool q_localsocket_is_sequential(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback bool func(const QLocalSocket* self)
///
void q_localsocket_on_is_sequential(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
///
/// Base class method implementation
///
/// @param self const QLocalSocket*
///
bool q_localsocket_super_is_sequential(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
///
/// @param self const QLocalSocket*
///
int64_t q_localsocket_bytes_available(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback int64_t func(const QLocalSocket* self)
///
void q_localsocket_on_bytes_available(void* self, int64_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
///
/// Base class method implementation
///
/// @param self const QLocalSocket*
///
int64_t q_localsocket_super_bytes_available(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
///
/// @param self const QLocalSocket*
///
int64_t q_localsocket_bytes_to_write(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback int64_t func(const QLocalSocket* self)
///
void q_localsocket_on_bytes_to_write(void* self, int64_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
///
/// Base class method implementation
///
/// @param self const QLocalSocket*
///
int64_t q_localsocket_super_bytes_to_write(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
///
/// @param self const QLocalSocket*
///
bool q_localsocket_can_read_line(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback bool func(const QLocalSocket* self)
///
void q_localsocket_on_can_read_line(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
///
/// Base class method implementation
///
/// @param self const QLocalSocket*
///
bool q_localsocket_super_can_read_line(const void* self);

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
/// @param callback void func(QLocalSocket* self)
///
void q_localsocket_on_close(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#close)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
///
void q_localsocket_super_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#error)
///
/// @param self const QLocalSocket*
///
/// @return enum QLocalSocket__LocalSocketError
///
int32_t q_localsocket_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#flush)
///
/// @param self QLocalSocket*
///
bool q_localsocket_flush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#isValid)
///
/// @param self const QLocalSocket*
///
bool q_localsocket_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readBufferSize)
///
/// @param self const QLocalSocket*
///
int64_t q_localsocket_read_buffer_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setReadBufferSize)
///
/// @param self QLocalSocket*
/// @param size int64_t
///
void q_localsocket_set_read_buffer_size(void* self, int64_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
///
/// @param self QLocalSocket*
/// @param socketDescriptor intptr_t
///
bool q_localsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#socketDescriptor)
///
/// @param self const QLocalSocket*
///
intptr_t q_localsocket_socket_descriptor(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketOptions)
///
/// @param self QLocalSocket*
/// @param option flag of enum QLocalSocket__SocketOption
///
void q_localsocket_set_socket_options(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#socketOptions)
///
/// @param self const QLocalSocket*
///
/// @return flag of enum QLocalSocket__SocketOption
///
int32_t q_localsocket_socket_options(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#state)
///
/// @param self const QLocalSocket*
///
/// @return enum QLocalSocket__LocalSocketState
///
int32_t q_localsocket_state(const void* self);

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
/// @param param2 int64_t
///
int64_t q_localsocket_read_data(void* self, char* param1, int64_t param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback int64_t func(QLocalSocket* self, char* param1, int64_t param2)
///
void q_localsocket_on_read_data(void* self, int64_t (*callback)(void*, char*, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param param1 char*
/// @param param2 int64_t
///
int64_t q_localsocket_super_read_data(void* self, char* param1, int64_t param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
///
/// @param self QLocalSocket*
/// @param data char*
/// @param maxSize int64_t
///
int64_t q_localsocket_read_line_data(void* self, char* data, int64_t maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback int64_t func(QLocalSocket* self, char* data, int64_t maxSize)
///
void q_localsocket_on_read_line_data(void* self, int64_t (*callback)(void*, char*, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param data char*
/// @param maxSize int64_t
///
int64_t q_localsocket_super_read_line_data(void* self, char* data, int64_t maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
///
/// @param self QLocalSocket*
/// @param maxSize int64_t
///
int64_t q_localsocket_skip_data(void* self, int64_t maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback int64_t func(QLocalSocket* self, int64_t maxSize)
///
void q_localsocket_on_skip_data(void* self, int64_t (*callback)(void*, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param maxSize int64_t
///
int64_t q_localsocket_super_skip_data(void* self, int64_t maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
///
/// @param self QLocalSocket*
/// @param param1 const char*
/// @param param2 int64_t
///
int64_t q_localsocket_write_data(void* self, const char* param1, int64_t param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
///
/// Allows for overriding the related default method
///
/// @param self QLocalSocket*
/// @param callback int64_t func(QLocalSocket* self, const char* param1, int64_t param2)
///
void q_localsocket_on_write_data(void* self, int64_t (*callback)(void*, const char*, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
///
/// Base class method implementation
///
/// @param self QLocalSocket*
/// @param param1 const char*
/// @param param2 int64_t
///
int64_t q_localsocket_super_write_data(void* self, const char* param1, int64_t param2);

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
/// Upcasts to a QIODeviceBase object
///
/// @param self const QLocalSocket*
///
QIODeviceBase* q_localsocket_as_q_i_o_device_base(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self const QLocalSocket*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_localsocket_open_mode(const void* self);

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
/// @param self const QLocalSocket*
///
bool q_localsocket_is_text_mode_enabled(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self const QLocalSocket*
///
bool q_localsocket_is_open(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self const QLocalSocket*
///
bool q_localsocket_is_readable(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self const QLocalSocket*
///
bool q_localsocket_is_writable(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self const QLocalSocket*
///
int32_t q_localsocket_read_channel_count(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self const QLocalSocket*
///
int32_t q_localsocket_write_channel_count(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self const QLocalSocket*
///
int32_t q_localsocket_current_read_channel(const void* self);

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
/// @param self const QLocalSocket*
///
int32_t q_localsocket_current_write_channel(const void* self);

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
/// @param maxlen int64_t
///
int64_t q_localsocket_read(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLocalSocket*
/// @param maxlen int64_t
///
char* q_localsocket_read2(void* self, int64_t maxlen);

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
/// @param maxlen int64_t
///
int64_t q_localsocket_read_line(void* self, char* data, int64_t maxlen);

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
/// @param self const QLocalSocket*
///
bool q_localsocket_is_transaction_started(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QLocalSocket*
/// @param data const char*
/// @param lenVal int64_t
///
int64_t q_localsocket_write(void* self, const char* data, int64_t lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QLocalSocket*
/// @param data const char*
///
int64_t q_localsocket_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QLocalSocket*
/// @param data char*
///
int64_t q_localsocket_write3(void* self, char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QLocalSocket*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_localsocket_peek(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLocalSocket*
/// @param maxlen int64_t
///
char* q_localsocket_peek2(void* self, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QLocalSocket*
/// @param maxSize int64_t
///
int64_t q_localsocket_skip(void* self, int64_t maxSize);

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
/// @param self const QLocalSocket*
///
const char* q_localsocket_error_string(const void* self);

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
/// @param bytes int64_t
///
void q_localsocket_bytes_written(void* self, int64_t bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, int64_t bytes)
///
void q_localsocket_on_bytes_written(void* self, void (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QLocalSocket*
/// @param channel int
/// @param bytes int64_t
///
void q_localsocket_channel_bytes_written(void* self, int channel, int64_t bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, int channel, int64_t bytes)
///
void q_localsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, int64_t));

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
/// @param maxlen int64_t
///
char* q_localsocket_read_line1(void* self, int64_t maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLocalSocket*
///
const char* q_localsocket_object_name(const void* self);

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
/// @param self const QLocalSocket*
///
bool q_localsocket_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QLocalSocket*
///
bool q_localsocket_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QLocalSocket*
///
bool q_localsocket_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QLocalSocket*
///
bool q_localsocket_signals_blocked(const void* self);

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
/// @param self const QLocalSocket*
///
QThread* q_localsocket_thread(const void* self);

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
/// @param self const QLocalSocket*
///
/// @return libqt_list of QObject*
///
libqt_list q_localsocket_children(const void* self);

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
QMetaObject__Connection* q_localsocket_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_localsocket_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QLocalSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_localsocket_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_localsocket_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_localsocket_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLocalSocket*
///
bool q_localsocket_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLocalSocket*
/// @param receiver QObject*
///
bool q_localsocket_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_localsocket_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QLocalSocket*
///
void q_localsocket_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QLocalSocket*
///
void q_localsocket_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLocalSocket*
/// @param name const char*
/// @param value QVariant*
///
bool q_localsocket_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QLocalSocket*
/// @param name const char*
///
QVariant* q_localsocket_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QLocalSocket*
///
const char** q_localsocket_dynamic_property_names(const void* self);

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
/// @param self const QLocalSocket*
///
const QBindingStorage* q_localsocket_binding_storage2(const void* self);

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
/// @param self const QLocalSocket*
///
QObject* q_localsocket_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QLocalSocket*
/// @param classname const char*
///
bool q_localsocket_inherits(const void* self, const char* classname);

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
QMetaObject__Connection* q_localsocket_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_localsocket_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QLocalSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_localsocket_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLocalSocket*
/// @param signal const char*
///
bool q_localsocket_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLocalSocket*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_localsocket_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLocalSocket*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_localsocket_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLocalSocket*
/// @param receiver QObject*
/// @param member const char*
///
bool q_localsocket_disconnect23(const void* self, const void* receiver, const char* member);

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
/// @param self const QLocalSocket*
///
int64_t q_localsocket_pos(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLocalSocket*
///
int64_t q_localsocket_super_pos(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback int64_t func(QLocalSocket* self)
///
void q_localsocket_on_pos(void* self, int64_t (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLocalSocket*
///
int64_t q_localsocket_size(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLocalSocket*
///
int64_t q_localsocket_super_size(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback int64_t func(QLocalSocket* self)
///
void q_localsocket_on_size(void* self, int64_t (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param pos int64_t
///
bool q_localsocket_seek(void* self, int64_t pos);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param pos int64_t
///
bool q_localsocket_super_seek(void* self, int64_t pos);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool func(QLocalSocket* self, int64_t pos)
///
void q_localsocket_on_seek(void* self, bool (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLocalSocket*
///
bool q_localsocket_at_end(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLocalSocket*
///
bool q_localsocket_super_at_end(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool func(QLocalSocket* self)
///
void q_localsocket_on_at_end(void* self, bool (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
///
bool q_localsocket_reset(void* self);

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
/// @param callback bool func(QLocalSocket* self)
///
void q_localsocket_on_reset(void* self, bool (*callback)(void*));

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
void q_localsocket_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
///
void q_localsocket_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, QMetaMethod* signal)
///
void q_localsocket_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
///
void q_localsocket_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param signal QMetaMethod*
///
void q_localsocket_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback void func(QLocalSocket* self, QMetaMethod* signal)
///
void q_localsocket_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

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
/// @param self const QLocalSocket*
///
QObject* q_localsocket_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLocalSocket*
///
QObject* q_localsocket_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback QObject* func(QLocalSocket* self)
///
void q_localsocket_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLocalSocket*
///
int32_t q_localsocket_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLocalSocket*
///
int32_t q_localsocket_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback int32_t func(QLocalSocket* self)
///
void q_localsocket_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLocalSocket*
/// @param signal const char*
///
int32_t q_localsocket_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLocalSocket*
/// @param signal const char*
///
int32_t q_localsocket_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback int32_t func(QLocalSocket* self, const char* signal)
///
void q_localsocket_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLocalSocket*
/// @param signal QMetaMethod*
///
bool q_localsocket_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLocalSocket*
/// @param signal QMetaMethod*
///
bool q_localsocket_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLocalSocket*
/// @param callback bool func(QLocalSocket* self, QMetaMethod* signal)
///
void q_localsocket_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

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

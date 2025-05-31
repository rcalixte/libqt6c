#pragma once
#ifndef SRC_NETWORKQT6C_LIBQLOCALSOCKET_H
#define SRC_NETWORKQT6C_LIBQLOCALSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqevent.h"
#include "../libqiodevice.h"
#include "../libqiodevicebase.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qlocalsocket.html

/// q_localsocket_new constructs a new QLocalSocket object.
///
///
QLocalSocket* q_localsocket_new();

/// q_localsocket_new2 constructs a new QLocalSocket object.
///
/// ``` QObject* parent ```
QLocalSocket* q_localsocket_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLocalSocket* self ```
const QMetaObject* q_localsocket_meta_object(void* self);

/// ``` QLocalSocket* self, const char* param1 ```
void* q_localsocket_metacast(void* self, const char* param1);

/// ``` QLocalSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_localsocket_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, int32_t (*slot)(QLocalSocket*, enum QMetaObject__Call, int, void*) ```
void q_localsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QLocalSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_localsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_localsocket_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// ``` QLocalSocket* self ```
void q_localsocket_connect_to_server(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// ``` QLocalSocket* self, const char* name ```
void q_localsocket_connect_to_server_with_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#disconnectFromServer)
///
/// ``` QLocalSocket* self ```
void q_localsocket_disconnect_from_server(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setServerName)
///
/// ``` QLocalSocket* self, const char* name ```
void q_localsocket_set_server_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#serverName)
///
/// ``` QLocalSocket* self ```
const char* q_localsocket_server_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#fullServerName)
///
/// ``` QLocalSocket* self ```
const char* q_localsocket_full_server_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#abort)
///
/// ``` QLocalSocket* self ```
void q_localsocket_abort(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
///
/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, bool (*slot)() ```
void q_localsocket_on_is_sequential(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
///
/// Base class method implementation
///
/// ``` QLocalSocket* self ```
bool q_localsocket_qbase_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
///
/// ``` QLocalSocket* self ```
long long q_localsocket_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
///
/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, long long (*slot)() ```
void q_localsocket_on_bytes_available(void* self, long long (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
///
/// Base class method implementation
///
/// ``` QLocalSocket* self ```
long long q_localsocket_qbase_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
///
/// ``` QLocalSocket* self ```
long long q_localsocket_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
///
/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, long long (*slot)() ```
void q_localsocket_on_bytes_to_write(void* self, long long (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
///
/// Base class method implementation
///
/// ``` QLocalSocket* self ```
long long q_localsocket_qbase_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_can_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
///
/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, bool (*slot)() ```
void q_localsocket_on_can_read_line(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
///
/// Base class method implementation
///
/// ``` QLocalSocket* self ```
bool q_localsocket_qbase_can_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#open)
///
/// ``` QLocalSocket* self, int openMode ```
bool q_localsocket_open(void* self, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#open)
///
/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, bool (*slot)(QLocalSocket*, int) ```
void q_localsocket_on_open(void* self, bool (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#open)
///
/// Base class method implementation
///
/// ``` QLocalSocket* self, int openMode ```
bool q_localsocket_qbase_open(void* self, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#close)
///
/// ``` QLocalSocket* self ```
void q_localsocket_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#close)
///
/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, void (*slot)() ```
void q_localsocket_on_close(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#close)
///
/// Base class method implementation
///
/// ``` QLocalSocket* self ```
void q_localsocket_qbase_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#error)
///
/// ``` QLocalSocket* self ```
int64_t q_localsocket_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#flush)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_flush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#isValid)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readBufferSize)
///
/// ``` QLocalSocket* self ```
long long q_localsocket_read_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setReadBufferSize)
///
/// ``` QLocalSocket* self, long long size ```
void q_localsocket_set_read_buffer_size(void* self, long long size);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
///
/// ``` QLocalSocket* self, intptr_t socketDescriptor ```
bool q_localsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#socketDescriptor)
///
/// ``` QLocalSocket* self ```
intptr_t q_localsocket_socket_descriptor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketOptions)
///
/// ``` QLocalSocket* self, int option ```
void q_localsocket_set_socket_options(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#socketOptions)
///
/// ``` QLocalSocket* self ```
int64_t q_localsocket_socket_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#state)
///
/// ``` QLocalSocket* self ```
int64_t q_localsocket_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForBytesWritten)
///
/// ``` QLocalSocket* self, int msecs ```
bool q_localsocket_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForBytesWritten)
///
/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, bool (*slot)(QLocalSocket*, int) ```
void q_localsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForBytesWritten)
///
/// Base class method implementation
///
/// ``` QLocalSocket* self, int msecs ```
bool q_localsocket_qbase_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForConnected)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_wait_for_connected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForDisconnected)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_wait_for_disconnected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForReadyRead)
///
/// ``` QLocalSocket* self, int msecs ```
bool q_localsocket_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForReadyRead)
///
/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, bool (*slot)(QLocalSocket*, int) ```
void q_localsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForReadyRead)
///
/// Base class method implementation
///
/// ``` QLocalSocket* self, int msecs ```
bool q_localsocket_qbase_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connected)
///
/// ``` QLocalSocket* self ```
void q_localsocket_connected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connected)
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*) ```
void q_localsocket_on_connected(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#disconnected)
///
/// ``` QLocalSocket* self ```
void q_localsocket_disconnected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#disconnected)
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*) ```
void q_localsocket_on_disconnected(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#errorOccurred)
///
/// ``` QLocalSocket* self, enum QLocalSocket__LocalSocketError socketError ```
void q_localsocket_error_occurred(void* self, int64_t socketError);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#errorOccurred)
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, enum QLocalSocket__LocalSocketError) ```
void q_localsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#stateChanged)
///
/// ``` QLocalSocket* self, enum QLocalSocket__LocalSocketState socketState ```
void q_localsocket_state_changed(void* self, int64_t socketState);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#stateChanged)
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, enum QLocalSocket__LocalSocketState) ```
void q_localsocket_on_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
///
/// ``` QLocalSocket* self, char* param1, long long param2 ```
long long q_localsocket_read_data(void* self, char* param1, long long param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
///
/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, long long (*slot)(QLocalSocket*, char*, long long) ```
void q_localsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
///
/// Base class method implementation
///
/// ``` QLocalSocket* self, char* param1, long long param2 ```
long long q_localsocket_qbase_read_data(void* self, char* param1, long long param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
///
/// ``` QLocalSocket* self, char* data, long long maxSize ```
long long q_localsocket_read_line_data(void* self, char* data, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
///
/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, long long (*slot)(QLocalSocket*, char*, long long) ```
void q_localsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
///
/// Base class method implementation
///
/// ``` QLocalSocket* self, char* data, long long maxSize ```
long long q_localsocket_qbase_read_line_data(void* self, char* data, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
///
/// ``` QLocalSocket* self, long long maxSize ```
long long q_localsocket_skip_data(void* self, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
///
/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, long long (*slot)(QLocalSocket*, long long) ```
void q_localsocket_on_skip_data(void* self, long long (*slot)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
///
/// Base class method implementation
///
/// ``` QLocalSocket* self, long long maxSize ```
long long q_localsocket_qbase_skip_data(void* self, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
///
/// ``` QLocalSocket* self, const char* param1, long long param2 ```
long long q_localsocket_write_data(void* self, const char* param1, long long param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
///
/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, long long (*slot)(QLocalSocket*, const char*, long long) ```
void q_localsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
///
/// Base class method implementation
///
/// ``` QLocalSocket* self, const char* param1, long long param2 ```
long long q_localsocket_qbase_write_data(void* self, const char* param1, long long param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_localsocket_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_localsocket_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// ``` QLocalSocket* self, int openMode ```
void q_localsocket_connect_to_server1(void* self, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// ``` QLocalSocket* self, const char* name, int openMode ```
void q_localsocket_connect_to_server2(void* self, const char* name, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
///
/// ``` QLocalSocket* self, intptr_t socketDescriptor, enum QLocalSocket__LocalSocketState socketState ```
bool q_localsocket_set_socket_descriptor2(void* self, intptr_t socketDescriptor, int64_t socketState);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
///
/// ``` QLocalSocket* self, intptr_t socketDescriptor, enum QLocalSocket__LocalSocketState socketState, int openMode ```
bool q_localsocket_set_socket_descriptor3(void* self, intptr_t socketDescriptor, int64_t socketState, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForConnected)
///
/// ``` QLocalSocket* self, int msecs ```
bool q_localsocket_wait_for_connected1(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForDisconnected)
///
/// ``` QLocalSocket* self, int msecs ```
bool q_localsocket_wait_for_disconnected1(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QLocalSocket* self ```
int64_t q_localsocket_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QLocalSocket* self, bool enabled ```
void q_localsocket_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QLocalSocket* self ```
int32_t q_localsocket_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QLocalSocket* self ```
int32_t q_localsocket_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QLocalSocket* self ```
int32_t q_localsocket_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QLocalSocket* self, int channel ```
void q_localsocket_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QLocalSocket* self ```
int32_t q_localsocket_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QLocalSocket* self, int channel ```
void q_localsocket_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QLocalSocket* self, char* data, long long maxlen ```
long long q_localsocket_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QLocalSocket* self, long long maxlen ```
char* q_localsocket_read_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QLocalSocket* self ```
char* q_localsocket_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QLocalSocket* self, char* data, long long maxlen ```
long long q_localsocket_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QLocalSocket* self ```
char* q_localsocket_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QLocalSocket* self ```
void q_localsocket_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QLocalSocket* self ```
void q_localsocket_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QLocalSocket* self ```
void q_localsocket_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QLocalSocket* self, const char* data, long long lenVal ```
long long q_localsocket_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QLocalSocket* self, const char* data ```
long long q_localsocket_write_with_data(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QLocalSocket* self, const char* data ```
long long q_localsocket_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QLocalSocket* self, char* data, long long maxlen ```
long long q_localsocket_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QLocalSocket* self, long long maxlen ```
char* q_localsocket_peek_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QLocalSocket* self, long long maxSize ```
long long q_localsocket_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QLocalSocket* self, char c ```
void q_localsocket_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QLocalSocket* self, char c ```
bool q_localsocket_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QLocalSocket* self, char* c ```
bool q_localsocket_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QLocalSocket* self ```
const char* q_localsocket_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QLocalSocket* self ```
void q_localsocket_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QLocalSocket* self, void (*slot)(QIODevice*) ```
void q_localsocket_on_ready_read(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QLocalSocket* self, int channel ```
void q_localsocket_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QLocalSocket* self, void (*slot)(QIODevice*, int) ```
void q_localsocket_on_channel_ready_read(void* self, void (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QLocalSocket* self, long long bytes ```
void q_localsocket_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QLocalSocket* self, void (*slot)(QIODevice*, long long) ```
void q_localsocket_on_bytes_written(void* self, void (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QLocalSocket* self, int channel, long long bytes ```
void q_localsocket_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QLocalSocket* self, void (*slot)(QIODevice*, int, long long) ```
void q_localsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QLocalSocket* self ```
void q_localsocket_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QLocalSocket* self, void (*slot)(QIODevice*) ```
void q_localsocket_on_about_to_close(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QLocalSocket* self ```
void q_localsocket_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QLocalSocket* self, void (*slot)(QIODevice*) ```
void q_localsocket_on_read_channel_finished(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QLocalSocket* self, long long maxlen ```
char* q_localsocket_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLocalSocket* self ```
const char* q_localsocket_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLocalSocket* self, char* name ```
void q_localsocket_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLocalSocket* self, bool b ```
bool q_localsocket_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLocalSocket* self ```
QThread* q_localsocket_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLocalSocket* self, QThread* thread ```
void q_localsocket_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLocalSocket* self, int interval ```
int32_t q_localsocket_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLocalSocket* self, int id ```
void q_localsocket_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLocalSocket* self ```
const libqt_list /* of QObject* */ q_localsocket_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QLocalSocket* self, QObject* parent ```
void q_localsocket_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLocalSocket* self, QObject* filterObj ```
void q_localsocket_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLocalSocket* self, QObject* obj ```
void q_localsocket_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_localsocket_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLocalSocket* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_localsocket_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_localsocket_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_localsocket_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLocalSocket* self ```
void q_localsocket_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLocalSocket* self ```
void q_localsocket_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLocalSocket* self, const char* name, QVariant* value ```
bool q_localsocket_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLocalSocket* self, const char* name ```
QVariant* q_localsocket_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLocalSocket* self ```
const char** q_localsocket_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLocalSocket* self ```
QBindingStorage* q_localsocket_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLocalSocket* self ```
const QBindingStorage* q_localsocket_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLocalSocket* self ```
void q_localsocket_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLocalSocket* self, void (*slot)(QObject*) ```
void q_localsocket_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLocalSocket* self ```
QObject* q_localsocket_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLocalSocket* self, const char* classname ```
bool q_localsocket_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLocalSocket* self ```
void q_localsocket_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLocalSocket* self, int interval, enum Qt__TimerType timerType ```
int32_t q_localsocket_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_localsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLocalSocket* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_localsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLocalSocket* self, QObject* param1 ```
void q_localsocket_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLocalSocket* self, void (*slot)(QObject*, QObject*) ```
void q_localsocket_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self ```
long long q_localsocket_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self ```
long long q_localsocket_qbase_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, long long (*slot)() ```
void q_localsocket_on_pos(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self ```
long long q_localsocket_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self ```
long long q_localsocket_qbase_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, long long (*slot)() ```
void q_localsocket_on_size(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, long long pos ```
bool q_localsocket_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, long long pos ```
bool q_localsocket_qbase_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, bool (*slot)(QLocalSocket*, long long) ```
void q_localsocket_on_seek(void* self, bool (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self ```
bool q_localsocket_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self ```
bool q_localsocket_qbase_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, bool (*slot)() ```
void q_localsocket_on_at_end(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self ```
bool q_localsocket_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self ```
bool q_localsocket_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, bool (*slot)() ```
void q_localsocket_on_reset(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QEvent* event ```
bool q_localsocket_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QEvent* event ```
bool q_localsocket_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, bool (*slot)(QLocalSocket*, QEvent*) ```
void q_localsocket_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QObject* watched, QEvent* event ```
bool q_localsocket_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QObject* watched, QEvent* event ```
bool q_localsocket_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, bool (*slot)(QLocalSocket*, QObject*, QEvent*) ```
void q_localsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QTimerEvent* event ```
void q_localsocket_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QTimerEvent* event ```
void q_localsocket_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, QTimerEvent*) ```
void q_localsocket_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QChildEvent* event ```
void q_localsocket_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QChildEvent* event ```
void q_localsocket_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, QChildEvent*) ```
void q_localsocket_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QEvent* event ```
void q_localsocket_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QEvent* event ```
void q_localsocket_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, QEvent*) ```
void q_localsocket_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QMetaMethod* signal ```
void q_localsocket_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QMetaMethod* signal ```
void q_localsocket_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, QMetaMethod*) ```
void q_localsocket_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QMetaMethod* signal ```
void q_localsocket_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QMetaMethod* signal ```
void q_localsocket_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, QMetaMethod*) ```
void q_localsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, int openMode ```
void q_localsocket_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, int openMode ```
void q_localsocket_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, int) ```
void q_localsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, const char* errorString ```
void q_localsocket_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, const char* errorString ```
void q_localsocket_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, const char*) ```
void q_localsocket_on_set_error_string(void* self, void (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self ```
QObject* q_localsocket_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self ```
QObject* q_localsocket_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, QObject* (*slot)() ```
void q_localsocket_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self ```
int32_t q_localsocket_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self ```
int32_t q_localsocket_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, int32_t (*slot)() ```
void q_localsocket_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, const char* signal ```
int32_t q_localsocket_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, const char* signal ```
int32_t q_localsocket_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, int32_t (*slot)(QLocalSocket*, const char*) ```
void q_localsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QMetaMethod* signal ```
bool q_localsocket_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QMetaMethod* signal ```
bool q_localsocket_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, bool (*slot)(QLocalSocket*, QMetaMethod*) ```
void q_localsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QLocalSocket* self, void (*slot)(QObject*, const char*) ```
void q_localsocket_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#dtor.QLocalSocket)
///
/// Delete this object from C++ memory.
///
/// ``` QLocalSocket* self ```
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

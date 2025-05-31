#pragma once
#ifndef SRCQT6C_LIBQIODEVICE_H
#define SRCQT6C_LIBQIODEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqiodevicebase.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qiodevice.html

/// q_iodevice_new constructs a new QIODevice object.
///
///
QIODevice* q_iodevice_new();

/// q_iodevice_new2 constructs a new QIODevice object.
///
/// ``` QObject* parent ```
QIODevice* q_iodevice_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QIODevice* self ```
const QMetaObject* q_iodevice_meta_object(void* self);

/// ``` QIODevice* self, const char* param1 ```
void* q_iodevice_metacast(void* self, const char* param1);

/// ``` QIODevice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_iodevice_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, int32_t (*slot)(QIODevice*, enum QMetaObject__Call, int, void*) ```
void q_iodevice_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QIODevice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_iodevice_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_iodevice_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QIODevice* self ```
int64_t q_iodevice_open_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QIODevice* self, bool enabled ```
void q_iodevice_set_text_mode_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_text_mode_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_open(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_readable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_writable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)() ```
void q_iodevice_on_is_sequential(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Base class method implementation
///
/// ``` QIODevice* self ```
bool q_iodevice_qbase_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QIODevice* self ```
int32_t q_iodevice_read_channel_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QIODevice* self ```
int32_t q_iodevice_write_channel_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QIODevice* self ```
int32_t q_iodevice_current_read_channel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QIODevice* self, int channel ```
void q_iodevice_set_current_read_channel(void* self, int channel);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QIODevice* self ```
int32_t q_iodevice_current_write_channel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QIODevice* self, int channel ```
void q_iodevice_set_current_write_channel(void* self, int channel);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// ``` QIODevice* self, int mode ```
bool q_iodevice_open(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)(QIODevice*, int) ```
void q_iodevice_on_open(void* self, bool (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Base class method implementation
///
/// ``` QIODevice* self, int mode ```
bool q_iodevice_qbase_open(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#close)
///
/// ``` QIODevice* self ```
void q_iodevice_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#close)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, void (*slot)() ```
void q_iodevice_on_close(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#close)
///
/// Base class method implementation
///
/// ``` QIODevice* self ```
void q_iodevice_qbase_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// ``` QIODevice* self ```
long long q_iodevice_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)() ```
void q_iodevice_on_pos(void* self, long long (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Base class method implementation
///
/// ``` QIODevice* self ```
long long q_iodevice_qbase_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// ``` QIODevice* self ```
long long q_iodevice_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)() ```
void q_iodevice_on_size(void* self, long long (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Base class method implementation
///
/// ``` QIODevice* self ```
long long q_iodevice_qbase_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// ``` QIODevice* self, long long pos ```
bool q_iodevice_seek(void* self, long long pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)(QIODevice*, long long) ```
void q_iodevice_on_seek(void* self, bool (*slot)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Base class method implementation
///
/// ``` QIODevice* self, long long pos ```
bool q_iodevice_qbase_seek(void* self, long long pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// ``` QIODevice* self ```
bool q_iodevice_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)() ```
void q_iodevice_on_at_end(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Base class method implementation
///
/// ``` QIODevice* self ```
bool q_iodevice_qbase_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// ``` QIODevice* self ```
bool q_iodevice_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)() ```
void q_iodevice_on_reset(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Base class method implementation
///
/// ``` QIODevice* self ```
bool q_iodevice_qbase_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// ``` QIODevice* self ```
long long q_iodevice_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)() ```
void q_iodevice_on_bytes_available(void* self, long long (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Base class method implementation
///
/// ``` QIODevice* self ```
long long q_iodevice_qbase_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// ``` QIODevice* self ```
long long q_iodevice_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)() ```
void q_iodevice_on_bytes_to_write(void* self, long long (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Base class method implementation
///
/// ``` QIODevice* self ```
long long q_iodevice_qbase_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QIODevice* self, char* data, long long maxlen ```
long long q_iodevice_read(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QIODevice* self, long long maxlen ```
char* q_iodevice_read_with_maxlen(void* self, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QIODevice* self ```
char* q_iodevice_read_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QIODevice* self, char* data, long long maxlen ```
long long q_iodevice_read_line(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QIODevice* self ```
char* q_iodevice_read_line2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// ``` QIODevice* self ```
bool q_iodevice_can_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)() ```
void q_iodevice_on_can_read_line(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Base class method implementation
///
/// ``` QIODevice* self ```
bool q_iodevice_qbase_can_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QIODevice* self ```
void q_iodevice_start_transaction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QIODevice* self ```
void q_iodevice_commit_transaction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QIODevice* self ```
void q_iodevice_rollback_transaction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_transaction_started(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QIODevice* self, const char* data, long long lenVal ```
long long q_iodevice_write(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QIODevice* self, const char* data ```
long long q_iodevice_write_with_data(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QIODevice* self, const char* data ```
long long q_iodevice_write2(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QIODevice* self, char* data, long long maxlen ```
long long q_iodevice_peek(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QIODevice* self, long long maxlen ```
char* q_iodevice_peek_with_maxlen(void* self, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QIODevice* self, long long maxSize ```
long long q_iodevice_skip(void* self, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// ``` QIODevice* self, int msecs ```
bool q_iodevice_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)(QIODevice*, int) ```
void q_iodevice_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Base class method implementation
///
/// ``` QIODevice* self, int msecs ```
bool q_iodevice_qbase_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// ``` QIODevice* self, int msecs ```
bool q_iodevice_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)(QIODevice*, int) ```
void q_iodevice_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Base class method implementation
///
/// ``` QIODevice* self, int msecs ```
bool q_iodevice_qbase_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QIODevice* self, char c ```
void q_iodevice_unget_char(void* self, char c);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QIODevice* self, char c ```
bool q_iodevice_put_char(void* self, char c);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QIODevice* self, char* c ```
bool q_iodevice_get_char(void* self, char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QIODevice* self ```
const char* q_iodevice_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QIODevice* self ```
void q_iodevice_ready_read(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QIODevice* self, void (*slot)(QIODevice*) ```
void q_iodevice_on_ready_read(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QIODevice* self, int channel ```
void q_iodevice_channel_ready_read(void* self, int channel);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, int) ```
void q_iodevice_on_channel_ready_read(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QIODevice* self, long long bytes ```
void q_iodevice_bytes_written(void* self, long long bytes);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, long long) ```
void q_iodevice_on_bytes_written(void* self, void (*slot)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QIODevice* self, int channel, long long bytes ```
void q_iodevice_channel_bytes_written(void* self, int channel, long long bytes);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, int, long long) ```
void q_iodevice_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QIODevice* self ```
void q_iodevice_about_to_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QIODevice* self, void (*slot)(QIODevice*) ```
void q_iodevice_on_about_to_close(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QIODevice* self ```
void q_iodevice_read_channel_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QIODevice* self, void (*slot)(QIODevice*) ```
void q_iodevice_on_read_channel_finished(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readData)
///
/// ``` QIODevice* self, char* data, long long maxlen ```
long long q_iodevice_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readData)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)(QIODevice*, char*, long long) ```
void q_iodevice_on_read_data(void* self, long long (*slot)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readData)
///
/// Base class method implementation
///
/// ``` QIODevice* self, char* data, long long maxlen ```
long long q_iodevice_qbase_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// ``` QIODevice* self, char* data, long long maxlen ```
long long q_iodevice_read_line_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)(QIODevice*, char*, long long) ```
void q_iodevice_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Base class method implementation
///
/// ``` QIODevice* self, char* data, long long maxlen ```
long long q_iodevice_qbase_read_line_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// ``` QIODevice* self, long long maxSize ```
long long q_iodevice_skip_data(void* self, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)(QIODevice*, long long) ```
void q_iodevice_on_skip_data(void* self, long long (*slot)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Base class method implementation
///
/// ``` QIODevice* self, long long maxSize ```
long long q_iodevice_qbase_skip_data(void* self, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeData)
///
/// ``` QIODevice* self, const char* data, long long lenVal ```
long long q_iodevice_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeData)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)(QIODevice*, const char*, long long) ```
void q_iodevice_on_write_data(void* self, long long (*slot)(void*, const char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeData)
///
/// Base class method implementation
///
/// ``` QIODevice* self, const char* data, long long lenVal ```
long long q_iodevice_qbase_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// ``` QIODevice* self, int openMode ```
void q_iodevice_set_open_mode(void* self, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, int) ```
void q_iodevice_on_set_open_mode(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Base class method implementation
///
/// ``` QIODevice* self, int openMode ```
void q_iodevice_qbase_set_open_mode(void* self, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// ``` QIODevice* self, const char* errorString ```
void q_iodevice_set_error_string(void* self, const char* errorString);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Allows for overriding the related default method
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, const char*) ```
void q_iodevice_on_set_error_string(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Base class method implementation
///
/// ``` QIODevice* self, const char* errorString ```
void q_iodevice_qbase_set_error_string(void* self, const char* errorString);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_iodevice_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_iodevice_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QIODevice* self, long long maxlen ```
char* q_iodevice_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QIODevice* self ```
const char* q_iodevice_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QIODevice* self, char* name ```
void q_iodevice_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QIODevice* self ```
bool q_iodevice_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QIODevice* self, bool b ```
bool q_iodevice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QIODevice* self ```
QThread* q_iodevice_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QIODevice* self, QThread* thread ```
void q_iodevice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QIODevice* self, int interval ```
int32_t q_iodevice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QIODevice* self, int id ```
void q_iodevice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QIODevice* self ```
const libqt_list /* of QObject* */ q_iodevice_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QIODevice* self, QObject* parent ```
void q_iodevice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QIODevice* self, QObject* filterObj ```
void q_iodevice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QIODevice* self, QObject* obj ```
void q_iodevice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_iodevice_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QIODevice* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_iodevice_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_iodevice_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_iodevice_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QIODevice* self ```
void q_iodevice_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QIODevice* self ```
void q_iodevice_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QIODevice* self, const char* name, QVariant* value ```
bool q_iodevice_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QIODevice* self, const char* name ```
QVariant* q_iodevice_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QIODevice* self ```
const char** q_iodevice_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QIODevice* self ```
QBindingStorage* q_iodevice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QIODevice* self ```
const QBindingStorage* q_iodevice_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QIODevice* self ```
void q_iodevice_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QIODevice* self, void (*slot)(QObject*) ```
void q_iodevice_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QIODevice* self ```
QObject* q_iodevice_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QIODevice* self, const char* classname ```
bool q_iodevice_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QIODevice* self ```
void q_iodevice_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QIODevice* self, int interval, enum Qt__TimerType timerType ```
int32_t q_iodevice_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_iodevice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QIODevice* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_iodevice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QIODevice* self, QObject* param1 ```
void q_iodevice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QIODevice* self, void (*slot)(QObject*, QObject*) ```
void q_iodevice_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QEvent* event ```
bool q_iodevice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QEvent* event ```
bool q_iodevice_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, bool (*slot)(QIODevice*, QEvent*) ```
void q_iodevice_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QObject* watched, QEvent* event ```
bool q_iodevice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QObject* watched, QEvent* event ```
bool q_iodevice_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, bool (*slot)(QIODevice*, QObject*, QEvent*) ```
void q_iodevice_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QTimerEvent* event ```
void q_iodevice_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QTimerEvent* event ```
void q_iodevice_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, QTimerEvent*) ```
void q_iodevice_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QChildEvent* event ```
void q_iodevice_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QChildEvent* event ```
void q_iodevice_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, QChildEvent*) ```
void q_iodevice_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QEvent* event ```
void q_iodevice_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QEvent* event ```
void q_iodevice_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, QEvent*) ```
void q_iodevice_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QMetaMethod* signal ```
void q_iodevice_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QMetaMethod* signal ```
void q_iodevice_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, QMetaMethod*) ```
void q_iodevice_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QMetaMethod* signal ```
void q_iodevice_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QMetaMethod* signal ```
void q_iodevice_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, QMetaMethod*) ```
void q_iodevice_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self ```
QObject* q_iodevice_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self ```
QObject* q_iodevice_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, QObject* (*slot)() ```
void q_iodevice_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self ```
int32_t q_iodevice_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self ```
int32_t q_iodevice_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, int32_t (*slot)() ```
void q_iodevice_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, const char* signal ```
int32_t q_iodevice_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, const char* signal ```
int32_t q_iodevice_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, int32_t (*slot)(QIODevice*, const char*) ```
void q_iodevice_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QMetaMethod* signal ```
bool q_iodevice_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QMetaMethod* signal ```
bool q_iodevice_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, bool (*slot)(QIODevice*, QMetaMethod*) ```
void q_iodevice_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QIODevice* self, void (*slot)(QObject*, const char*) ```
void q_iodevice_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#dtor.QIODevice)
///
/// Delete this object from C++ memory.
///
/// ``` QIODevice* self ```
void q_iodevice_delete(void* self);

#endif

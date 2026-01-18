#pragma once
#ifndef SRC_QT6C_LIBQIODEVICE_H
#define SRC_QT6C_LIBQIODEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html)

/// q_iodevice_new constructs a new QIODevice object.
///
QIODevice* q_iodevice_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html)

/// q_iodevice_new2 constructs a new QIODevice object.
///
/// @param parent QObject*
///
QIODevice* q_iodevice_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QIODevice*
///
const QMetaObject* q_iodevice_meta_object(void* self);

/// @param self QIODevice*
/// @param param1 const char*
///
void* q_iodevice_metacast(void* self, const char* param1);

/// @param self QIODevice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_iodevice_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback int32_t func(QIODevice* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_iodevice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QIODevice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_iodevice_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_iodevice_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QIODevice*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_iodevice_open_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QIODevice*
/// @param enabled bool
///
void q_iodevice_set_text_mode_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QIODevice*
///
bool q_iodevice_is_text_mode_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QIODevice*
///
bool q_iodevice_is_open(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QIODevice*
///
bool q_iodevice_is_readable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QIODevice*
///
bool q_iodevice_is_writable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// @param self QIODevice*
///
bool q_iodevice_is_sequential(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback bool func()
///
void q_iodevice_on_is_sequential(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Base class method implementation
///
/// @param self QIODevice*
///
bool q_iodevice_qbase_is_sequential(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QIODevice*
///
int32_t q_iodevice_read_channel_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QIODevice*
///
int32_t q_iodevice_write_channel_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QIODevice*
///
int32_t q_iodevice_current_read_channel(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QIODevice*
/// @param channel int
///
void q_iodevice_set_current_read_channel(void* self, int channel);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QIODevice*
///
int32_t q_iodevice_current_write_channel(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QIODevice*
/// @param channel int
///
void q_iodevice_set_current_write_channel(void* self, int channel);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// @param self QIODevice*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_iodevice_open(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback bool func(QIODevice* self, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void q_iodevice_on_open(void* self, bool (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Base class method implementation
///
/// @param self QIODevice*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_iodevice_qbase_open(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#close)
///
/// @param self QIODevice*
///
void q_iodevice_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#close)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback void func()
///
void q_iodevice_on_close(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#close)
///
/// Base class method implementation
///
/// @param self QIODevice*
///
void q_iodevice_qbase_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// @param self QIODevice*
///
long long q_iodevice_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback long long func()
///
void q_iodevice_on_pos(void* self, long long (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Base class method implementation
///
/// @param self QIODevice*
///
long long q_iodevice_qbase_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// @param self QIODevice*
///
long long q_iodevice_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback long long func()
///
void q_iodevice_on_size(void* self, long long (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Base class method implementation
///
/// @param self QIODevice*
///
long long q_iodevice_qbase_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// @param self QIODevice*
/// @param pos long long
///
bool q_iodevice_seek(void* self, long long pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback bool func(QIODevice* self, long long pos)
///
void q_iodevice_on_seek(void* self, bool (*callback)(void*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Base class method implementation
///
/// @param self QIODevice*
/// @param pos long long
///
bool q_iodevice_qbase_seek(void* self, long long pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// @param self QIODevice*
///
bool q_iodevice_at_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback bool func()
///
void q_iodevice_on_at_end(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Base class method implementation
///
/// @param self QIODevice*
///
bool q_iodevice_qbase_at_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// @param self QIODevice*
///
bool q_iodevice_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback bool func()
///
void q_iodevice_on_reset(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Base class method implementation
///
/// @param self QIODevice*
///
bool q_iodevice_qbase_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// @param self QIODevice*
///
long long q_iodevice_bytes_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback long long func()
///
void q_iodevice_on_bytes_available(void* self, long long (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Base class method implementation
///
/// @param self QIODevice*
///
long long q_iodevice_qbase_bytes_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// @param self QIODevice*
///
long long q_iodevice_bytes_to_write(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback long long func()
///
void q_iodevice_on_bytes_to_write(void* self, long long (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Base class method implementation
///
/// @param self QIODevice*
///
long long q_iodevice_qbase_bytes_to_write(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QIODevice*
/// @param data char*
/// @param maxlen long long
///
long long q_iodevice_read(void* self, char* data, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QIODevice*
/// @param maxlen long long
///
char* q_iodevice_read2(void* self, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QIODevice*
///
char* q_iodevice_read_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QIODevice*
/// @param data char*
/// @param maxlen long long
///
long long q_iodevice_read_line(void* self, char* data, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QIODevice*
///
char* q_iodevice_read_line2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// @param self QIODevice*
///
bool q_iodevice_can_read_line(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback bool func()
///
void q_iodevice_on_can_read_line(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Base class method implementation
///
/// @param self QIODevice*
///
bool q_iodevice_qbase_can_read_line(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QIODevice*
///
void q_iodevice_start_transaction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QIODevice*
///
void q_iodevice_commit_transaction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QIODevice*
///
void q_iodevice_rollback_transaction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QIODevice*
///
bool q_iodevice_is_transaction_started(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QIODevice*
/// @param data const char*
/// @param lenVal long long
///
long long q_iodevice_write(void* self, const char* data, long long lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QIODevice*
/// @param data const char*
///
long long q_iodevice_write2(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QIODevice*
/// @param data const char*
///
long long q_iodevice_write3(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QIODevice*
/// @param data char*
/// @param maxlen long long
///
long long q_iodevice_peek(void* self, char* data, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QIODevice*
/// @param maxlen long long
///
char* q_iodevice_peek2(void* self, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QIODevice*
/// @param maxSize long long
///
long long q_iodevice_skip(void* self, long long maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// @param self QIODevice*
/// @param msecs int
///
bool q_iodevice_wait_for_ready_read(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback bool func(QIODevice* self, int msecs)
///
void q_iodevice_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Base class method implementation
///
/// @param self QIODevice*
/// @param msecs int
///
bool q_iodevice_qbase_wait_for_ready_read(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// @param self QIODevice*
/// @param msecs int
///
bool q_iodevice_wait_for_bytes_written(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback bool func(QIODevice* self, int msecs)
///
void q_iodevice_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Base class method implementation
///
/// @param self QIODevice*
/// @param msecs int
///
bool q_iodevice_qbase_wait_for_bytes_written(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QIODevice*
/// @param c char
///
void q_iodevice_unget_char(void* self, char c);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QIODevice*
/// @param c char
///
bool q_iodevice_put_char(void* self, char c);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QIODevice*
/// @param c char*
///
bool q_iodevice_get_char(void* self, char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QIODevice*
///
const char* q_iodevice_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QIODevice*
///
void q_iodevice_ready_read(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self)
///
void q_iodevice_on_ready_read(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QIODevice*
/// @param channel int
///
void q_iodevice_channel_ready_read(void* self, int channel);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self, int channel)
///
void q_iodevice_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QIODevice*
/// @param bytes long long
///
void q_iodevice_bytes_written(void* self, long long bytes);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self, long long bytes)
///
void q_iodevice_on_bytes_written(void* self, void (*callback)(void*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QIODevice*
/// @param channel int
/// @param bytes long long
///
void q_iodevice_channel_bytes_written(void* self, int channel, long long bytes);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self, int channel, long long bytes)
///
void q_iodevice_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QIODevice*
///
void q_iodevice_about_to_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self)
///
void q_iodevice_on_about_to_close(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QIODevice*
///
void q_iodevice_read_channel_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self)
///
void q_iodevice_on_read_channel_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readData)
///
/// @param self QIODevice*
/// @param data char*
/// @param maxlen long long
///
long long q_iodevice_read_data(void* self, char* data, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readData)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback long long func(QIODevice* self, char* data, long long maxlen)
///
void q_iodevice_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readData)
///
/// Base class method implementation
///
/// @param self QIODevice*
/// @param data char*
/// @param maxlen long long
///
long long q_iodevice_qbase_read_data(void* self, char* data, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// @param self QIODevice*
/// @param data char*
/// @param maxlen long long
///
long long q_iodevice_read_line_data(void* self, char* data, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback long long func(QIODevice* self, char* data, long long maxlen)
///
void q_iodevice_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Base class method implementation
///
/// @param self QIODevice*
/// @param data char*
/// @param maxlen long long
///
long long q_iodevice_qbase_read_line_data(void* self, char* data, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// @param self QIODevice*
/// @param maxSize long long
///
long long q_iodevice_skip_data(void* self, long long maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback long long func(QIODevice* self, long long maxSize)
///
void q_iodevice_on_skip_data(void* self, long long (*callback)(void*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Base class method implementation
///
/// @param self QIODevice*
/// @param maxSize long long
///
long long q_iodevice_qbase_skip_data(void* self, long long maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeData)
///
/// @param self QIODevice*
/// @param data const char*
/// @param lenVal long long
///
long long q_iodevice_write_data(void* self, const char* data, long long lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeData)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback long long func(QIODevice* self, const char* data, long long lenVal)
///
void q_iodevice_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeData)
///
/// Base class method implementation
///
/// @param self QIODevice*
/// @param data const char*
/// @param lenVal long long
///
long long q_iodevice_qbase_write_data(void* self, const char* data, long long lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// @param self QIODevice*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_iodevice_set_open_mode(void* self, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_iodevice_on_set_open_mode(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Base class method implementation
///
/// @param self QIODevice*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_iodevice_qbase_set_open_mode(void* self, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// @param self QIODevice*
/// @param errorString const char*
///
void q_iodevice_set_error_string(void* self, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Allows for overriding the related default method
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self, const char* errorString)
///
void q_iodevice_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Base class method implementation
///
/// @param self QIODevice*
/// @param errorString const char*
///
void q_iodevice_qbase_set_error_string(void* self, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_iodevice_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_iodevice_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QIODevice*
/// @param maxlen long long
///
char* q_iodevice_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QIODevice*
///
const char* q_iodevice_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QIODevice*
/// @param name char*
///
void q_iodevice_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QIODevice*
///
bool q_iodevice_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QIODevice*
///
bool q_iodevice_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QIODevice*
///
bool q_iodevice_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QIODevice*
///
bool q_iodevice_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QIODevice*
/// @param b bool
///
bool q_iodevice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QIODevice*
///
QThread* q_iodevice_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QIODevice*
/// @param thread QThread*
///
bool q_iodevice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIODevice*
/// @param interval int
///
int32_t q_iodevice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QIODevice*
/// @param id int
///
void q_iodevice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QIODevice*
/// @param id enum Qt__TimerId
///
void q_iodevice_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QIODevice*
///
/// @return libqt_list of QObject*
///
libqt_list q_iodevice_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QIODevice*
/// @param parent QObject*
///
void q_iodevice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QIODevice*
/// @param filterObj QObject*
///
void q_iodevice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QIODevice*
/// @param obj QObject*
///
void q_iodevice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_iodevice_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QIODevice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_iodevice_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_iodevice_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_iodevice_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QIODevice*
///
void q_iodevice_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QIODevice*
///
void q_iodevice_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QIODevice*
/// @param name const char*
/// @param value QVariant*
///
bool q_iodevice_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QIODevice*
/// @param name const char*
///
QVariant* q_iodevice_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QIODevice*
///
const char** q_iodevice_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QIODevice*
///
QBindingStorage* q_iodevice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QIODevice*
///
const QBindingStorage* q_iodevice_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIODevice*
///
void q_iodevice_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self)
///
void q_iodevice_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QIODevice*
///
QObject* q_iodevice_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QIODevice*
/// @param classname const char*
///
bool q_iodevice_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QIODevice*
///
void q_iodevice_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QIODevice*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_iodevice_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIODevice*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_iodevice_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_iodevice_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QIODevice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_iodevice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIODevice*
/// @param param1 QObject*
///
void q_iodevice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self, QObject* param1)
///
void q_iodevice_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIODevice*
/// @param event QEvent*
///
bool q_iodevice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIODevice*
/// @param event QEvent*
///
bool q_iodevice_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIODevice*
/// @param callback bool func(QIODevice* self, QEvent* event)
///
void q_iodevice_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIODevice*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_iodevice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIODevice*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_iodevice_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIODevice*
/// @param callback bool func(QIODevice* self, QObject* watched, QEvent* event)
///
void q_iodevice_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIODevice*
/// @param event QTimerEvent*
///
void q_iodevice_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIODevice*
/// @param event QTimerEvent*
///
void q_iodevice_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self, QTimerEvent* event)
///
void q_iodevice_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIODevice*
/// @param event QChildEvent*
///
void q_iodevice_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIODevice*
/// @param event QChildEvent*
///
void q_iodevice_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self, QChildEvent* event)
///
void q_iodevice_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIODevice*
/// @param event QEvent*
///
void q_iodevice_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIODevice*
/// @param event QEvent*
///
void q_iodevice_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self, QEvent* event)
///
void q_iodevice_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIODevice*
/// @param signal QMetaMethod*
///
void q_iodevice_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIODevice*
/// @param signal QMetaMethod*
///
void q_iodevice_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self, QMetaMethod* signal)
///
void q_iodevice_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIODevice*
/// @param signal QMetaMethod*
///
void q_iodevice_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIODevice*
/// @param signal QMetaMethod*
///
void q_iodevice_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self, QMetaMethod* signal)
///
void q_iodevice_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIODevice*
///
QObject* q_iodevice_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIODevice*
///
QObject* q_iodevice_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIODevice*
/// @param callback QObject* func()
///
void q_iodevice_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIODevice*
///
int32_t q_iodevice_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIODevice*
///
int32_t q_iodevice_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIODevice*
/// @param callback int32_t func()
///
void q_iodevice_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIODevice*
/// @param signal const char*
///
int32_t q_iodevice_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIODevice*
/// @param signal const char*
///
int32_t q_iodevice_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIODevice*
/// @param callback int32_t func(QIODevice* self, const char* signal)
///
void q_iodevice_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIODevice*
/// @param signal QMetaMethod*
///
bool q_iodevice_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIODevice*
/// @param signal QMetaMethod*
///
bool q_iodevice_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIODevice*
/// @param callback bool func(QIODevice* self, QMetaMethod* signal)
///
void q_iodevice_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QIODevice*
/// @param callback void func(QIODevice* self, const char* objectName)
///
void q_iodevice_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#dtor.QIODevice)
///
/// Delete this object from C++ memory.
///
/// @param self QIODevice*
///
void q_iodevice_delete(void* self);

#endif

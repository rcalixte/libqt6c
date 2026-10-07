#pragma once
#ifndef LIBQBUFFER_H
#define LIBQBUFFER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html)

/// q_buffer_new constructs a new QBuffer object.
///
QBuffer* q_buffer_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html)

/// q_buffer_new2 constructs a new QBuffer object.
///
/// @param parent QObject*
///
QBuffer* q_buffer_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QBuffer*
///
const QMetaObject* q_buffer_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback const QMetaObject* func(const QBuffer* self)
///
void q_buffer_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QBuffer*
///
const QMetaObject* q_buffer_super_meta_object(const void* self);

/// @param self QBuffer*
/// @param param1 const char*
///
void* q_buffer_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback void* func(QBuffer* self, const char* param1)
///
void q_buffer_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QBuffer*
/// @param param1 const char*
///
void* q_buffer_super_metacast(void* self, const char* param1);

/// @param self QBuffer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_buffer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback int32_t func(QBuffer* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_buffer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QBuffer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_buffer_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_buffer_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#buffer)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBuffer*
///
const char* q_buffer_buffer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#buffer)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBuffer*
///
const char* q_buffer_buffer2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#setData)
///
/// @param self QBuffer*
/// @param data const char*
///
void q_buffer_set_data(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#setData)
///
/// @param self QBuffer*
/// @param data const char*
/// @param lenVal intptr_t
///
void q_buffer_set_data2(void* self, const char* data, intptr_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#data)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBuffer*
///
const char* q_buffer_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#open)
///
/// @param self QBuffer*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_buffer_open(void* self, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#open)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_buffer_on_open(void* self, bool (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#open)
///
/// Base class method implementation
///
/// @param self QBuffer*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_buffer_super_open(void* self, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#close)
///
/// @param self QBuffer*
///
void q_buffer_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#close)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self)
///
void q_buffer_on_close(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#close)
///
/// Base class method implementation
///
/// @param self QBuffer*
///
void q_buffer_super_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#size)
///
/// @param self const QBuffer*
///
int64_t q_buffer_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#size)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback int64_t func(const QBuffer* self)
///
void q_buffer_on_size(void* self, int64_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#size)
///
/// Base class method implementation
///
/// @param self const QBuffer*
///
int64_t q_buffer_super_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#pos)
///
/// @param self const QBuffer*
///
int64_t q_buffer_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#pos)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback int64_t func(const QBuffer* self)
///
void q_buffer_on_pos(void* self, int64_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#pos)
///
/// Base class method implementation
///
/// @param self const QBuffer*
///
int64_t q_buffer_super_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#seek)
///
/// @param self QBuffer*
/// @param off int64_t
///
bool q_buffer_seek(void* self, int64_t off);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#seek)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self, int64_t off)
///
void q_buffer_on_seek(void* self, bool (*callback)(void*, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#seek)
///
/// Base class method implementation
///
/// @param self QBuffer*
/// @param off int64_t
///
bool q_buffer_super_seek(void* self, int64_t off);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#atEnd)
///
/// @param self const QBuffer*
///
bool q_buffer_at_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#atEnd)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback bool func(const QBuffer* self)
///
void q_buffer_on_at_end(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#atEnd)
///
/// Base class method implementation
///
/// @param self const QBuffer*
///
bool q_buffer_super_at_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#canReadLine)
///
/// @param self const QBuffer*
///
bool q_buffer_can_read_line(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#canReadLine)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback bool func(const QBuffer* self)
///
void q_buffer_on_can_read_line(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#canReadLine)
///
/// Base class method implementation
///
/// @param self const QBuffer*
///
bool q_buffer_super_can_read_line(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#connectNotify)
///
/// @param self QBuffer*
/// @param param1 QMetaMethod*
///
void q_buffer_connect_notify(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#connectNotify)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, QMetaMethod* param1)
///
void q_buffer_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#connectNotify)
///
/// Base class method implementation
///
/// @param self QBuffer*
/// @param param1 QMetaMethod*
///
void q_buffer_super_connect_notify(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#disconnectNotify)
///
/// @param self QBuffer*
/// @param param1 QMetaMethod*
///
void q_buffer_disconnect_notify(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#disconnectNotify)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, QMetaMethod* param1)
///
void q_buffer_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#disconnectNotify)
///
/// Base class method implementation
///
/// @param self QBuffer*
/// @param param1 QMetaMethod*
///
void q_buffer_super_disconnect_notify(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#readData)
///
/// @param self QBuffer*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_buffer_read_data(void* self, char* data, int64_t maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#readData)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback int64_t func(QBuffer* self, char* data, int64_t maxlen)
///
void q_buffer_on_read_data(void* self, int64_t (*callback)(void*, char*, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#readData)
///
/// Base class method implementation
///
/// @param self QBuffer*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_buffer_super_read_data(void* self, char* data, int64_t maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#writeData)
///
/// @param self QBuffer*
/// @param data const char*
/// @param lenVal int64_t
///
int64_t q_buffer_write_data(void* self, const char* data, int64_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#writeData)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback int64_t func(QBuffer* self, const char* data, int64_t lenVal)
///
void q_buffer_on_write_data(void* self, int64_t (*callback)(void*, const char*, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#writeData)
///
/// Base class method implementation
///
/// @param self QBuffer*
/// @param data const char*
/// @param lenVal int64_t
///
int64_t q_buffer_super_write_data(void* self, const char* data, int64_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_buffer_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_buffer_tr3(const char* s, const char* c, int n);

/// Inherited from QIODevice
///
/// Upcasts to a QIODeviceBase object
///
/// @param self const QBuffer*
///
QIODeviceBase* q_buffer_as_q_i_o_device_base(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self const QBuffer*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_buffer_open_mode(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QBuffer*
/// @param enabled bool
///
void q_buffer_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self const QBuffer*
///
bool q_buffer_is_text_mode_enabled(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self const QBuffer*
///
bool q_buffer_is_open(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self const QBuffer*
///
bool q_buffer_is_readable(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self const QBuffer*
///
bool q_buffer_is_writable(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self const QBuffer*
///
int32_t q_buffer_read_channel_count(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self const QBuffer*
///
int32_t q_buffer_write_channel_count(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self const QBuffer*
///
int32_t q_buffer_current_read_channel(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QBuffer*
/// @param channel int
///
void q_buffer_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self const QBuffer*
///
int32_t q_buffer_current_write_channel(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QBuffer*
/// @param channel int
///
void q_buffer_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QBuffer*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_buffer_read(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBuffer*
/// @param maxlen int64_t
///
const char* q_buffer_read2(void* self, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBuffer*
///
const char* q_buffer_read_all(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QBuffer*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_buffer_read_line(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBuffer*
///
const char* q_buffer_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QBuffer*
///
void q_buffer_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QBuffer*
///
void q_buffer_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QBuffer*
///
void q_buffer_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self const QBuffer*
///
bool q_buffer_is_transaction_started(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QBuffer*
/// @param data const char*
/// @param lenVal int64_t
///
int64_t q_buffer_write(void* self, const char* data, int64_t lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QBuffer*
/// @param data const char*
///
int64_t q_buffer_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QBuffer*
/// @param data const char*
///
int64_t q_buffer_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QBuffer*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_buffer_peek(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBuffer*
/// @param maxlen int64_t
///
const char* q_buffer_peek2(void* self, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QBuffer*
/// @param maxSize int64_t
///
int64_t q_buffer_skip(void* self, int64_t maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QBuffer*
/// @param c char
///
void q_buffer_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QBuffer*
/// @param c char
///
bool q_buffer_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QBuffer*
/// @param c char*
///
bool q_buffer_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBuffer*
///
const char* q_buffer_error_string(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QBuffer*
///
void q_buffer_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self)
///
void q_buffer_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QBuffer*
/// @param channel int
///
void q_buffer_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, int channel)
///
void q_buffer_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QBuffer*
/// @param bytes int64_t
///
void q_buffer_bytes_written(void* self, int64_t bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, int64_t bytes)
///
void q_buffer_on_bytes_written(void* self, void (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QBuffer*
/// @param channel int
/// @param bytes int64_t
///
void q_buffer_channel_bytes_written(void* self, int channel, int64_t bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, int channel, int64_t bytes)
///
void q_buffer_on_channel_bytes_written(void* self, void (*callback)(void*, int, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QBuffer*
///
void q_buffer_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self)
///
void q_buffer_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QBuffer*
///
void q_buffer_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self)
///
void q_buffer_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBuffer*
/// @param maxlen int64_t
///
const char* q_buffer_read_line1(void* self, int64_t maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBuffer*
///
const char* q_buffer_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBuffer*
/// @param name const char*
///
void q_buffer_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QBuffer*
///
bool q_buffer_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QBuffer*
///
bool q_buffer_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QBuffer*
///
bool q_buffer_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QBuffer*
///
bool q_buffer_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBuffer*
/// @param b bool
///
bool q_buffer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QBuffer*
///
QThread* q_buffer_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBuffer*
/// @param thread QThread*
///
bool q_buffer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBuffer*
/// @param interval int
///
int32_t q_buffer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBuffer*
/// @param time int64_t of nanoseconds
///
int32_t q_buffer_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBuffer*
/// @param id int
///
void q_buffer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBuffer*
/// @param id enum Qt__TimerId
///
void q_buffer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QBuffer*
///
/// @return libqt_list of QObject*
///
libqt_list q_buffer_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBuffer*
/// @param parent QObject*
///
void q_buffer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBuffer*
/// @param filterObj QObject*
///
void q_buffer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBuffer*
/// @param obj QObject*
///
void q_buffer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_buffer_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_buffer_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QBuffer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_buffer_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_buffer_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_buffer_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBuffer*
///
bool q_buffer_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBuffer*
/// @param receiver QObject*
///
bool q_buffer_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_buffer_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QBuffer*
///
void q_buffer_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QBuffer*
///
void q_buffer_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBuffer*
/// @param name const char*
/// @param value QVariant*
///
bool q_buffer_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QBuffer*
/// @param name const char*
///
QVariant* q_buffer_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QBuffer*
///
const char** q_buffer_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBuffer*
///
QBindingStorage* q_buffer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QBuffer*
///
const QBindingStorage* q_buffer_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBuffer*
///
void q_buffer_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self)
///
void q_buffer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QBuffer*
///
QObject* q_buffer_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QBuffer*
/// @param classname const char*
///
bool q_buffer_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBuffer*
///
void q_buffer_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBuffer*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_buffer_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBuffer*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_buffer_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_buffer_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_buffer_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QBuffer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_buffer_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBuffer*
/// @param signal const char*
///
bool q_buffer_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBuffer*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_buffer_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBuffer*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_buffer_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBuffer*
/// @param receiver QObject*
/// @param member const char*
///
bool q_buffer_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBuffer*
/// @param param1 QObject*
///
void q_buffer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, QObject* param1)
///
void q_buffer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBuffer*
///
bool q_buffer_is_sequential(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBuffer*
///
bool q_buffer_super_is_sequential(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self)
///
void q_buffer_on_is_sequential(void* self, bool (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
///
bool q_buffer_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
///
bool q_buffer_super_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self)
///
void q_buffer_on_reset(void* self, bool (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBuffer*
///
int64_t q_buffer_bytes_available(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBuffer*
///
int64_t q_buffer_super_bytes_available(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback int64_t func(QBuffer* self)
///
void q_buffer_on_bytes_available(void* self, int64_t (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBuffer*
///
int64_t q_buffer_bytes_to_write(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBuffer*
///
int64_t q_buffer_super_bytes_to_write(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback int64_t func(QBuffer* self)
///
void q_buffer_on_bytes_to_write(void* self, int64_t (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param msecs int
///
bool q_buffer_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param msecs int
///
bool q_buffer_super_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self, int msecs)
///
void q_buffer_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param msecs int
///
bool q_buffer_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param msecs int
///
bool q_buffer_super_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self, int msecs)
///
void q_buffer_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_buffer_read_line_data(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_buffer_super_read_line_data(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback int64_t func(QBuffer* self, char* data, int64_t maxlen)
///
void q_buffer_on_read_line_data(void* self, int64_t (*callback)(void*, char*, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param maxSize int64_t
///
int64_t q_buffer_skip_data(void* self, int64_t maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param maxSize int64_t
///
int64_t q_buffer_super_skip_data(void* self, int64_t maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback int64_t func(QBuffer* self, int64_t maxSize)
///
void q_buffer_on_skip_data(void* self, int64_t (*callback)(void*, int64_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param event QEvent*
///
bool q_buffer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param event QEvent*
///
bool q_buffer_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self, QEvent* event)
///
void q_buffer_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_buffer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_buffer_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self, QObject* watched, QEvent* event)
///
void q_buffer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param event QTimerEvent*
///
void q_buffer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param event QTimerEvent*
///
void q_buffer_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, QTimerEvent* event)
///
void q_buffer_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param event QChildEvent*
///
void q_buffer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param event QChildEvent*
///
void q_buffer_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, QChildEvent* event)
///
void q_buffer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param event QEvent*
///
void q_buffer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param event QEvent*
///
void q_buffer_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, QEvent* event)
///
void q_buffer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_buffer_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_buffer_super_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_buffer_on_set_open_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param errorString const char*
///
void q_buffer_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param errorString const char*
///
void q_buffer_super_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, const char* errorString)
///
void q_buffer_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBuffer*
///
QObject* q_buffer_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBuffer*
///
QObject* q_buffer_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback QObject* func(QBuffer* self)
///
void q_buffer_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBuffer*
///
int32_t q_buffer_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBuffer*
///
int32_t q_buffer_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback int32_t func(QBuffer* self)
///
void q_buffer_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBuffer*
/// @param signal const char*
///
int32_t q_buffer_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBuffer*
/// @param signal const char*
///
int32_t q_buffer_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback int32_t func(QBuffer* self, const char* signal)
///
void q_buffer_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBuffer*
/// @param signal QMetaMethod*
///
bool q_buffer_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBuffer*
/// @param signal QMetaMethod*
///
bool q_buffer_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self, QMetaMethod* signal)
///
void q_buffer_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, const char* objectName)
///
void q_buffer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbuffer.html#dtor.QBuffer)
///
/// Delete this object from C++ memory.
///
/// @param self QBuffer*
///
void q_buffer_delete(void* self);

#endif

#pragma once
#ifndef SRCQT6C_LIBQBUFFER_H
#define SRCQT6C_LIBQBUFFER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbuffer.html

/// q_buffer_new constructs a new QBuffer object.
///
QBuffer* q_buffer_new();

/// q_buffer_new2 constructs a new QBuffer object.
///
/// @param parent QObject*
QBuffer* q_buffer_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QBuffer*
const QMetaObject* q_buffer_meta_object(void* self);

/// @param self QBuffer*
/// @param param1 const char*
void* q_buffer_metacast(void* self, const char* param1);

/// @param self QBuffer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_buffer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback int32_t func(QBuffer* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_buffer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QBuffer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_buffer_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_buffer_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#buffer)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBuffer*
char* q_buffer_buffer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#buffer)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBuffer*
const char* q_buffer_buffer2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#setData)
///
/// @param self QBuffer*
/// @param data const char*
void q_buffer_set_data(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#setData)
///
/// @param self QBuffer*
/// @param data const char*
/// @param lenVal int64_t
void q_buffer_set_data2(void* self, const char* data, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#data)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBuffer*
const char* q_buffer_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#open)
///
/// @param self QBuffer*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
bool q_buffer_open(void* self, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#open)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
void q_buffer_on_open(void* self, bool (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#open)
///
/// Base class method implementation
///
/// @param self QBuffer*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
bool q_buffer_qbase_open(void* self, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#close)
///
/// @param self QBuffer*
void q_buffer_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#close)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback void func()
void q_buffer_on_close(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#close)
///
/// Base class method implementation
///
/// @param self QBuffer*
void q_buffer_qbase_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#size)
///
/// @param self QBuffer*
long long q_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#size)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback long long func()
void q_buffer_on_size(void* self, long long (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#size)
///
/// Base class method implementation
///
/// @param self QBuffer*
long long q_buffer_qbase_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#pos)
///
/// @param self QBuffer*
long long q_buffer_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#pos)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback long long func()
void q_buffer_on_pos(void* self, long long (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#pos)
///
/// Base class method implementation
///
/// @param self QBuffer*
long long q_buffer_qbase_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#seek)
///
/// @param self QBuffer*
/// @param off long long
bool q_buffer_seek(void* self, long long off);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#seek)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self, long long off)
void q_buffer_on_seek(void* self, bool (*callback)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#seek)
///
/// Base class method implementation
///
/// @param self QBuffer*
/// @param off long long
bool q_buffer_qbase_seek(void* self, long long off);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#atEnd)
///
/// @param self QBuffer*
bool q_buffer_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#atEnd)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback bool func()
void q_buffer_on_at_end(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#atEnd)
///
/// Base class method implementation
///
/// @param self QBuffer*
bool q_buffer_qbase_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#canReadLine)
///
/// @param self QBuffer*
bool q_buffer_can_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#canReadLine)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback bool func()
void q_buffer_on_can_read_line(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#canReadLine)
///
/// Base class method implementation
///
/// @param self QBuffer*
bool q_buffer_qbase_can_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#connectNotify)
///
/// @param self QBuffer*
/// @param param1 QMetaMethod*
void q_buffer_connect_notify(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#connectNotify)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, QMetaMethod* param1)
void q_buffer_on_connect_notify(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#connectNotify)
///
/// Base class method implementation
///
/// @param self QBuffer*
/// @param param1 QMetaMethod*
void q_buffer_qbase_connect_notify(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#disconnectNotify)
///
/// @param self QBuffer*
/// @param param1 QMetaMethod*
void q_buffer_disconnect_notify(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#disconnectNotify)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, QMetaMethod* param1)
void q_buffer_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#disconnectNotify)
///
/// Base class method implementation
///
/// @param self QBuffer*
/// @param param1 QMetaMethod*
void q_buffer_qbase_disconnect_notify(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#readData)
///
/// @param self QBuffer*
/// @param data char*
/// @param maxlen long long
long long q_buffer_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#readData)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback long long func(QBuffer* self, char* data, long long maxlen)
void q_buffer_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#readData)
///
/// Base class method implementation
///
/// @param self QBuffer*
/// @param data char*
/// @param maxlen long long
long long q_buffer_qbase_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#writeData)
///
/// @param self QBuffer*
/// @param data const char*
/// @param lenVal long long
long long q_buffer_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#writeData)
///
/// Allows for overriding the related default method
///
/// @param self QBuffer*
/// @param callback long long func(QBuffer* self, const char* data, long long lenVal)
void q_buffer_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#writeData)
///
/// Base class method implementation
///
/// @param self QBuffer*
/// @param data const char*
/// @param lenVal long long
long long q_buffer_qbase_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_buffer_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_buffer_tr3(const char* s, const char* c, int n);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QBuffer*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
int64_t q_buffer_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QBuffer*
/// @param enabled bool
void q_buffer_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QBuffer*
bool q_buffer_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QBuffer*
bool q_buffer_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QBuffer*
bool q_buffer_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QBuffer*
bool q_buffer_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QBuffer*
int32_t q_buffer_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QBuffer*
int32_t q_buffer_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QBuffer*
int32_t q_buffer_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QBuffer*
/// @param channel int
void q_buffer_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QBuffer*
int32_t q_buffer_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QBuffer*
/// @param channel int
void q_buffer_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QBuffer*
/// @param data char*
/// @param maxlen long long
long long q_buffer_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBuffer*
/// @param maxlen long long
char* q_buffer_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBuffer*
char* q_buffer_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QBuffer*
/// @param data char*
/// @param maxlen long long
long long q_buffer_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBuffer*
char* q_buffer_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QBuffer*
void q_buffer_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QBuffer*
void q_buffer_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QBuffer*
void q_buffer_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QBuffer*
bool q_buffer_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QBuffer*
/// @param data const char*
/// @param lenVal long long
long long q_buffer_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QBuffer*
/// @param data const char*
long long q_buffer_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QBuffer*
/// @param data const char*
long long q_buffer_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QBuffer*
/// @param data char*
/// @param maxlen long long
long long q_buffer_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBuffer*
/// @param maxlen long long
char* q_buffer_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QBuffer*
/// @param maxSize long long
long long q_buffer_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QBuffer*
/// @param c char
void q_buffer_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QBuffer*
/// @param c char
bool q_buffer_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QBuffer*
/// @param c char*
bool q_buffer_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBuffer*
const char* q_buffer_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QBuffer*
void q_buffer_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self)
void q_buffer_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QBuffer*
/// @param channel int
void q_buffer_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, int channel)
void q_buffer_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QBuffer*
/// @param bytes long long
void q_buffer_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, long long bytes)
void q_buffer_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QBuffer*
/// @param channel int
/// @param bytes long long
void q_buffer_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, int channel, long long bytes)
void q_buffer_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QBuffer*
void q_buffer_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self)
void q_buffer_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QBuffer*
void q_buffer_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self)
void q_buffer_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBuffer*
/// @param maxlen long long
char* q_buffer_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBuffer*
const char* q_buffer_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBuffer*
/// @param name char*
void q_buffer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QBuffer*
bool q_buffer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QBuffer*
bool q_buffer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QBuffer*
bool q_buffer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QBuffer*
bool q_buffer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBuffer*
/// @param b bool
bool q_buffer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QBuffer*
QThread* q_buffer_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBuffer*
/// @param thread QThread*
bool q_buffer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBuffer*
/// @param interval int
int32_t q_buffer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBuffer*
/// @param id int
void q_buffer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBuffer*
/// @param id enum Qt__TimerId
void q_buffer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QBuffer*
libqt_list /* of QObject* */ q_buffer_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBuffer*
/// @param parent QObject*
void q_buffer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBuffer*
/// @param filterObj QObject*
void q_buffer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBuffer*
/// @param obj QObject*
void q_buffer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_buffer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBuffer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_buffer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_buffer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_buffer_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QBuffer*
void q_buffer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QBuffer*
void q_buffer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBuffer*
/// @param name const char*
/// @param value QVariant*
bool q_buffer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QBuffer*
/// @param name const char*
QVariant* q_buffer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBuffer*
const char** q_buffer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBuffer*
QBindingStorage* q_buffer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBuffer*
const QBindingStorage* q_buffer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBuffer*
void q_buffer_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self)
void q_buffer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QBuffer*
QObject* q_buffer_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QBuffer*
/// @param classname const char*
bool q_buffer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBuffer*
void q_buffer_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBuffer*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_buffer_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBuffer*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_buffer_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_buffer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBuffer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_buffer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBuffer*
/// @param param1 QObject*
void q_buffer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, QObject* param1)
void q_buffer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
bool q_buffer_is_sequential(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
bool q_buffer_qbase_is_sequential(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback bool func()
void q_buffer_on_is_sequential(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
bool q_buffer_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
bool q_buffer_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback bool func()
void q_buffer_on_reset(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
long long q_buffer_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
long long q_buffer_qbase_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback long long func()
void q_buffer_on_bytes_available(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
long long q_buffer_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
long long q_buffer_qbase_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback long long func()
void q_buffer_on_bytes_to_write(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param msecs int
bool q_buffer_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param msecs int
bool q_buffer_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self, int msecs)
void q_buffer_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param msecs int
bool q_buffer_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param msecs int
bool q_buffer_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self, int msecs)
void q_buffer_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param data char*
/// @param maxlen long long
long long q_buffer_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param data char*
/// @param maxlen long long
long long q_buffer_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback long long func(QBuffer* self, char* data, long long maxlen)
void q_buffer_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param maxSize long long
long long q_buffer_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param maxSize long long
long long q_buffer_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback long long func(QBuffer* self, long long maxSize)
void q_buffer_on_skip_data(void* self, long long (*callback)(void*, long long));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param event QEvent*
bool q_buffer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param event QEvent*
bool q_buffer_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self, QEvent* event)
void q_buffer_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param watched QObject*
/// @param event QEvent*
bool q_buffer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param watched QObject*
/// @param event QEvent*
bool q_buffer_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self, QObject* watched, QEvent* event)
void q_buffer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param event QTimerEvent*
void q_buffer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param event QTimerEvent*
void q_buffer_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, QTimerEvent* event)
void q_buffer_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param event QChildEvent*
void q_buffer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param event QChildEvent*
void q_buffer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, QChildEvent* event)
void q_buffer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param event QEvent*
void q_buffer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param event QEvent*
void q_buffer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, QEvent* event)
void q_buffer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_buffer_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_buffer_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
void q_buffer_on_set_open_mode(void* self, void (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param errorString const char*
void q_buffer_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param errorString const char*
void q_buffer_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, const char* errorString)
void q_buffer_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
QObject* q_buffer_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
QObject* q_buffer_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback QObject* func()
void q_buffer_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
int32_t q_buffer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
int32_t q_buffer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback int32_t func()
void q_buffer_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param signal const char*
int32_t q_buffer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param signal const char*
int32_t q_buffer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback int32_t func(QBuffer* self, const char* signal)
void q_buffer_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBuffer*
/// @param signal QMetaMethod*
bool q_buffer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBuffer*
/// @param signal QMetaMethod*
bool q_buffer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBuffer*
/// @param callback bool func(QBuffer* self, QMetaMethod* signal)
void q_buffer_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBuffer*
/// @param callback void func(QBuffer* self, const char* objectName)
void q_buffer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#dtor.QBuffer)
///
/// Delete this object from C++ memory.
///
/// @param self QBuffer*
void q_buffer_delete(void* self);

#endif

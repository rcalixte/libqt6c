#pragma once
#ifndef SRCQT6C_LIBQBUFFER_H
#define SRCQT6C_LIBQBUFFER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbuffer.html

/// q_buffer_new constructs a new QBuffer object.
///
///
QBuffer* q_buffer_new();

/// q_buffer_new2 constructs a new QBuffer object.
///
/// ``` QObject* parent ```
QBuffer* q_buffer_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QBuffer* self ```
const QMetaObject* q_buffer_meta_object(void* self);

/// ``` QBuffer* self, const char* param1 ```
void* q_buffer_metacast(void* self, const char* param1);

/// ``` QBuffer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_buffer_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QBuffer* self, int32_t (*slot)(QBuffer*, enum QMetaObject__Call, int, void*) ```
void q_buffer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QBuffer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_buffer_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_buffer_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#buffer)
///
/// ``` QBuffer* self ```
char* q_buffer_buffer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#buffer)
///
/// ``` QBuffer* self ```
const char* q_buffer_buffer2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#setData)
///
/// ``` QBuffer* self, const char* data ```
void q_buffer_set_data(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#setData)
///
/// ``` QBuffer* self, const char* data, int64_t lenVal ```
void q_buffer_set_data2(void* self, const char* data, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#data)
///
/// ``` QBuffer* self ```
const char* q_buffer_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#open)
///
/// ``` QBuffer* self, int openMode ```
bool q_buffer_open(void* self, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#open)
///
/// Allows for overriding the related default method
///
/// ``` QBuffer* self, bool (*slot)(QBuffer*, int) ```
void q_buffer_on_open(void* self, bool (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#open)
///
/// Base class method implementation
///
/// ``` QBuffer* self, int openMode ```
bool q_buffer_qbase_open(void* self, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#close)
///
/// ``` QBuffer* self ```
void q_buffer_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#close)
///
/// Allows for overriding the related default method
///
/// ``` QBuffer* self, void (*slot)() ```
void q_buffer_on_close(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#close)
///
/// Base class method implementation
///
/// ``` QBuffer* self ```
void q_buffer_qbase_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#size)
///
/// ``` QBuffer* self ```
long long q_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#size)
///
/// Allows for overriding the related default method
///
/// ``` QBuffer* self, long long (*slot)() ```
void q_buffer_on_size(void* self, long long (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#size)
///
/// Base class method implementation
///
/// ``` QBuffer* self ```
long long q_buffer_qbase_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#pos)
///
/// ``` QBuffer* self ```
long long q_buffer_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#pos)
///
/// Allows for overriding the related default method
///
/// ``` QBuffer* self, long long (*slot)() ```
void q_buffer_on_pos(void* self, long long (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#pos)
///
/// Base class method implementation
///
/// ``` QBuffer* self ```
long long q_buffer_qbase_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#seek)
///
/// ``` QBuffer* self, long long off ```
bool q_buffer_seek(void* self, long long off);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#seek)
///
/// Allows for overriding the related default method
///
/// ``` QBuffer* self, bool (*slot)(QBuffer*, long long) ```
void q_buffer_on_seek(void* self, bool (*slot)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#seek)
///
/// Base class method implementation
///
/// ``` QBuffer* self, long long off ```
bool q_buffer_qbase_seek(void* self, long long off);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#atEnd)
///
/// ``` QBuffer* self ```
bool q_buffer_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#atEnd)
///
/// Allows for overriding the related default method
///
/// ``` QBuffer* self, bool (*slot)() ```
void q_buffer_on_at_end(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#atEnd)
///
/// Base class method implementation
///
/// ``` QBuffer* self ```
bool q_buffer_qbase_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#canReadLine)
///
/// ``` QBuffer* self ```
bool q_buffer_can_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#canReadLine)
///
/// Allows for overriding the related default method
///
/// ``` QBuffer* self, bool (*slot)() ```
void q_buffer_on_can_read_line(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#canReadLine)
///
/// Base class method implementation
///
/// ``` QBuffer* self ```
bool q_buffer_qbase_can_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#connectNotify)
///
/// ``` QBuffer* self, QMetaMethod* param1 ```
void q_buffer_connect_notify(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#connectNotify)
///
/// Allows for overriding the related default method
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, QMetaMethod*) ```
void q_buffer_on_connect_notify(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#connectNotify)
///
/// Base class method implementation
///
/// ``` QBuffer* self, QMetaMethod* param1 ```
void q_buffer_qbase_connect_notify(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#disconnectNotify)
///
/// ``` QBuffer* self, QMetaMethod* param1 ```
void q_buffer_disconnect_notify(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#disconnectNotify)
///
/// Allows for overriding the related default method
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, QMetaMethod*) ```
void q_buffer_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#disconnectNotify)
///
/// Base class method implementation
///
/// ``` QBuffer* self, QMetaMethod* param1 ```
void q_buffer_qbase_disconnect_notify(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#readData)
///
/// ``` QBuffer* self, char* data, long long maxlen ```
long long q_buffer_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#readData)
///
/// Allows for overriding the related default method
///
/// ``` QBuffer* self, long long (*slot)(QBuffer*, char*, long long) ```
void q_buffer_on_read_data(void* self, long long (*slot)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#readData)
///
/// Base class method implementation
///
/// ``` QBuffer* self, char* data, long long maxlen ```
long long q_buffer_qbase_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#writeData)
///
/// ``` QBuffer* self, const char* data, long long lenVal ```
long long q_buffer_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#writeData)
///
/// Allows for overriding the related default method
///
/// ``` QBuffer* self, long long (*slot)(QBuffer*, const char*, long long) ```
void q_buffer_on_write_data(void* self, long long (*slot)(void*, const char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#writeData)
///
/// Base class method implementation
///
/// ``` QBuffer* self, const char* data, long long lenVal ```
long long q_buffer_qbase_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_buffer_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_buffer_tr3(const char* s, const char* c, int n);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QBuffer* self ```
int64_t q_buffer_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QBuffer* self, bool enabled ```
void q_buffer_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QBuffer* self ```
bool q_buffer_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QBuffer* self ```
bool q_buffer_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QBuffer* self ```
bool q_buffer_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QBuffer* self ```
bool q_buffer_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QBuffer* self ```
int32_t q_buffer_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QBuffer* self ```
int32_t q_buffer_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QBuffer* self ```
int32_t q_buffer_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QBuffer* self, int channel ```
void q_buffer_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QBuffer* self ```
int32_t q_buffer_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QBuffer* self, int channel ```
void q_buffer_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QBuffer* self, char* data, long long maxlen ```
long long q_buffer_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QBuffer* self, long long maxlen ```
char* q_buffer_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QBuffer* self ```
char* q_buffer_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QBuffer* self, char* data, long long maxlen ```
long long q_buffer_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QBuffer* self ```
char* q_buffer_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QBuffer* self ```
void q_buffer_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QBuffer* self ```
void q_buffer_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QBuffer* self ```
void q_buffer_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QBuffer* self ```
bool q_buffer_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QBuffer* self, const char* data, long long lenVal ```
long long q_buffer_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QBuffer* self, const char* data ```
long long q_buffer_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QBuffer* self, const char* data ```
long long q_buffer_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QBuffer* self, char* data, long long maxlen ```
long long q_buffer_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QBuffer* self, long long maxlen ```
char* q_buffer_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QBuffer* self, long long maxSize ```
long long q_buffer_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QBuffer* self, char c ```
void q_buffer_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QBuffer* self, char c ```
bool q_buffer_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QBuffer* self, char* c ```
bool q_buffer_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QBuffer* self ```
const char* q_buffer_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QBuffer* self ```
void q_buffer_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QBuffer* self, void (*slot)(QBuffer*) ```
void q_buffer_on_ready_read(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QBuffer* self, int channel ```
void q_buffer_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, int) ```
void q_buffer_on_channel_ready_read(void* self, void (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QBuffer* self, long long bytes ```
void q_buffer_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, long long) ```
void q_buffer_on_bytes_written(void* self, void (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QBuffer* self, int channel, long long bytes ```
void q_buffer_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, int, long long) ```
void q_buffer_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QBuffer* self ```
void q_buffer_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QBuffer* self, void (*slot)(QBuffer*) ```
void q_buffer_on_about_to_close(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QBuffer* self ```
void q_buffer_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QBuffer* self, void (*slot)(QBuffer*) ```
void q_buffer_on_read_channel_finished(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QBuffer* self, long long maxlen ```
char* q_buffer_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QBuffer* self ```
const char* q_buffer_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QBuffer* self, char* name ```
void q_buffer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QBuffer* self ```
bool q_buffer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QBuffer* self ```
bool q_buffer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QBuffer* self ```
bool q_buffer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QBuffer* self ```
bool q_buffer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QBuffer* self, bool b ```
bool q_buffer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QBuffer* self ```
QThread* q_buffer_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBuffer* self, QThread* thread ```
bool q_buffer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBuffer* self, int interval ```
int32_t q_buffer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBuffer* self, int id ```
void q_buffer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBuffer* self, enum Qt__TimerId id ```
void q_buffer_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QBuffer* self ```
libqt_list /* of QObject* */ q_buffer_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QBuffer* self, QObject* parent ```
void q_buffer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QBuffer* self, QObject* filterObj ```
void q_buffer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QBuffer* self, QObject* obj ```
void q_buffer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_buffer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBuffer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_buffer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_buffer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_buffer_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QBuffer* self ```
void q_buffer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QBuffer* self ```
void q_buffer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QBuffer* self, const char* name, QVariant* value ```
bool q_buffer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QBuffer* self, const char* name ```
QVariant* q_buffer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QBuffer* self ```
const char** q_buffer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBuffer* self ```
QBindingStorage* q_buffer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBuffer* self ```
const QBindingStorage* q_buffer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBuffer* self ```
void q_buffer_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBuffer* self, void (*slot)(QBuffer*) ```
void q_buffer_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QBuffer* self ```
QObject* q_buffer_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QBuffer* self, const char* classname ```
bool q_buffer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QBuffer* self ```
void q_buffer_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBuffer* self, QThread* thread, Disambiguated_t* param2 ```
bool q_buffer_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBuffer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_buffer_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_buffer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBuffer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_buffer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBuffer* self, QObject* param1 ```
void q_buffer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, QObject*) ```
void q_buffer_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self ```
bool q_buffer_is_sequential(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self ```
bool q_buffer_qbase_is_sequential(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, bool (*slot)() ```
void q_buffer_on_is_sequential(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self ```
bool q_buffer_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self ```
bool q_buffer_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, bool (*slot)() ```
void q_buffer_on_reset(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self ```
long long q_buffer_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self ```
long long q_buffer_qbase_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, long long (*slot)() ```
void q_buffer_on_bytes_available(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self ```
long long q_buffer_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self ```
long long q_buffer_qbase_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, long long (*slot)() ```
void q_buffer_on_bytes_to_write(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, int msecs ```
bool q_buffer_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, int msecs ```
bool q_buffer_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, bool (*slot)(QBuffer*, int) ```
void q_buffer_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, int msecs ```
bool q_buffer_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, int msecs ```
bool q_buffer_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, bool (*slot)(QBuffer*, int) ```
void q_buffer_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, char* data, long long maxlen ```
long long q_buffer_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, char* data, long long maxlen ```
long long q_buffer_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, long long (*slot)(QBuffer*, char*, long long) ```
void q_buffer_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, long long maxSize ```
long long q_buffer_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, long long maxSize ```
long long q_buffer_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, long long (*slot)(QBuffer*, long long) ```
void q_buffer_on_skip_data(void* self, long long (*slot)(void*, long long));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, QEvent* event ```
bool q_buffer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, QEvent* event ```
bool q_buffer_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, bool (*slot)(QBuffer*, QEvent*) ```
void q_buffer_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, QObject* watched, QEvent* event ```
bool q_buffer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, QObject* watched, QEvent* event ```
bool q_buffer_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, bool (*slot)(QBuffer*, QObject*, QEvent*) ```
void q_buffer_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, QTimerEvent* event ```
void q_buffer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, QTimerEvent* event ```
void q_buffer_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, QTimerEvent*) ```
void q_buffer_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, QChildEvent* event ```
void q_buffer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, QChildEvent* event ```
void q_buffer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, QChildEvent*) ```
void q_buffer_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, QEvent* event ```
void q_buffer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, QEvent* event ```
void q_buffer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, QEvent*) ```
void q_buffer_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, int openMode ```
void q_buffer_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, int openMode ```
void q_buffer_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, int) ```
void q_buffer_on_set_open_mode(void* self, void (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, const char* errorString ```
void q_buffer_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, const char* errorString ```
void q_buffer_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, const char*) ```
void q_buffer_on_set_error_string(void* self, void (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self ```
QObject* q_buffer_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self ```
QObject* q_buffer_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, QObject* (*slot)() ```
void q_buffer_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self ```
int32_t q_buffer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self ```
int32_t q_buffer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, int32_t (*slot)() ```
void q_buffer_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, const char* signal ```
int32_t q_buffer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, const char* signal ```
int32_t q_buffer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, int32_t (*slot)(QBuffer*, const char*) ```
void q_buffer_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, QMetaMethod* signal ```
bool q_buffer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, QMetaMethod* signal ```
bool q_buffer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, bool (*slot)(QBuffer*, QMetaMethod*) ```
void q_buffer_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, const char*) ```
void q_buffer_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#dtor.QBuffer)
///
/// Delete this object from C++ memory.
///
/// ``` QBuffer* self ```
void q_buffer_delete(void* self);

#endif

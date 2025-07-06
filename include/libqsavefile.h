#pragma once
#ifndef SRCQT6C_LIBQSAVEFILE_H
#define SRCQT6C_LIBQSAVEFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsavefile.html

/// q_savefile_new constructs a new QSaveFile object.
///
/// ``` const char* name ```
QSaveFile* q_savefile_new(const char* name);

/// q_savefile_new2 constructs a new QSaveFile object.
///
///
QSaveFile* q_savefile_new2();

/// q_savefile_new3 constructs a new QSaveFile object.
///
/// ``` const char* name, QObject* parent ```
QSaveFile* q_savefile_new3(const char* name, void* parent);

/// q_savefile_new4 constructs a new QSaveFile object.
///
/// ``` QObject* parent ```
QSaveFile* q_savefile_new4(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSaveFile* self ```
const QMetaObject* q_savefile_meta_object(void* self);

/// ``` QSaveFile* self, const char* param1 ```
void* q_savefile_metacast(void* self, const char* param1);

/// ``` QSaveFile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_savefile_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSaveFile* self, int32_t (*slot)(QSaveFile*, enum QMetaObject__Call, int, void*) ```
void q_savefile_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSaveFile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_savefile_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_savefile_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#fileName)
///
/// ``` QSaveFile* self ```
const char* q_savefile_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#fileName)
///
/// Allows for overriding the related default method
///
/// ``` QSaveFile* self, const char* (*slot)() ```
void q_savefile_on_file_name(void* self, const char* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#fileName)
///
/// Base class method implementation
///
/// ``` QSaveFile* self ```
const char* q_savefile_qbase_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#setFileName)
///
/// ``` QSaveFile* self, const char* name ```
void q_savefile_set_file_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#open)
///
/// ``` QSaveFile* self, int flags ```
bool q_savefile_open(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#open)
///
/// Allows for overriding the related default method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, int) ```
void q_savefile_on_open(void* self, bool (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#open)
///
/// Base class method implementation
///
/// ``` QSaveFile* self, int flags ```
bool q_savefile_qbase_open(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#commit)
///
/// ``` QSaveFile* self ```
bool q_savefile_commit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#cancelWriting)
///
/// ``` QSaveFile* self ```
void q_savefile_cancel_writing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#setDirectWriteFallback)
///
/// ``` QSaveFile* self, bool enabled ```
void q_savefile_set_direct_write_fallback(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#directWriteFallback)
///
/// ``` QSaveFile* self ```
bool q_savefile_direct_write_fallback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#writeData)
///
/// ``` QSaveFile* self, const char* data, long long lenVal ```
long long q_savefile_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#writeData)
///
/// Allows for overriding the related default method
///
/// ``` QSaveFile* self, long long (*slot)(QSaveFile*, const char*, long long) ```
void q_savefile_on_write_data(void* self, long long (*slot)(void*, const char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#writeData)
///
/// Base class method implementation
///
/// ``` QSaveFile* self, const char* data, long long lenVal ```
long long q_savefile_qbase_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_savefile_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_savefile_tr3(const char* s, const char* c, int n);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#error)
///
/// ``` QSaveFile* self ```
int64_t q_savefile_error(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
///
/// ``` QSaveFile* self ```
void q_savefile_unset_error(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// ``` QSaveFile* self ```
void q_savefile_close(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#handle)
///
/// ``` QSaveFile* self ```
int32_t q_savefile_handle(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#flush)
///
/// ``` QSaveFile* self ```
bool q_savefile_flush(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// ``` QSaveFile* self, long long offset, long long size ```
unsigned char* q_savefile_map(void* self, long long offset, long long size);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
///
/// ``` QSaveFile* self, unsigned char* address ```
bool q_savefile_unmap(void* self, unsigned char* address);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
///
/// ``` QSaveFile* self, enum QFileDevice__FileTime time ```
QDateTime* q_savefile_file_time(void* self, int64_t time);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
///
/// ``` QSaveFile* self, QDateTime* newDate, enum QFileDevice__FileTime fileTime ```
bool q_savefile_set_file_time(void* self, void* newDate, int64_t fileTime);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// ``` QSaveFile* self, long long offset, long long size, int flags ```
unsigned char* q_savefile_map3(void* self, long long offset, long long size, int64_t flags);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QSaveFile* self ```
int64_t q_savefile_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QSaveFile* self, bool enabled ```
void q_savefile_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QSaveFile* self ```
int32_t q_savefile_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QSaveFile* self ```
int32_t q_savefile_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QSaveFile* self ```
int32_t q_savefile_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QSaveFile* self, int channel ```
void q_savefile_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QSaveFile* self ```
int32_t q_savefile_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QSaveFile* self, int channel ```
void q_savefile_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QSaveFile* self, char* data, long long maxlen ```
long long q_savefile_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QSaveFile* self, long long maxlen ```
char* q_savefile_read_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QSaveFile* self ```
char* q_savefile_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSaveFile* self, char* data, long long maxlen ```
long long q_savefile_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSaveFile* self ```
char* q_savefile_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QSaveFile* self ```
void q_savefile_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QSaveFile* self ```
void q_savefile_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QSaveFile* self ```
void q_savefile_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSaveFile* self, const char* data, long long lenVal ```
long long q_savefile_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSaveFile* self, const char* data ```
long long q_savefile_write_with_data(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSaveFile* self, const char* data ```
long long q_savefile_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QSaveFile* self, char* data, long long maxlen ```
long long q_savefile_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QSaveFile* self, long long maxlen ```
char* q_savefile_peek_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QSaveFile* self, long long maxSize ```
long long q_savefile_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QSaveFile* self, char c ```
void q_savefile_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QSaveFile* self, char c ```
bool q_savefile_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QSaveFile* self, char* c ```
bool q_savefile_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QSaveFile* self ```
const char* q_savefile_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QSaveFile* self ```
void q_savefile_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QSaveFile* self, void (*slot)(QIODevice*) ```
void q_savefile_on_ready_read(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QSaveFile* self, int channel ```
void q_savefile_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QSaveFile* self, void (*slot)(QIODevice*, int) ```
void q_savefile_on_channel_ready_read(void* self, void (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QSaveFile* self, long long bytes ```
void q_savefile_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QSaveFile* self, void (*slot)(QIODevice*, long long) ```
void q_savefile_on_bytes_written(void* self, void (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QSaveFile* self, int channel, long long bytes ```
void q_savefile_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QSaveFile* self, void (*slot)(QIODevice*, int, long long) ```
void q_savefile_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QSaveFile* self ```
void q_savefile_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QSaveFile* self, void (*slot)(QIODevice*) ```
void q_savefile_on_about_to_close(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QSaveFile* self ```
void q_savefile_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QSaveFile* self, void (*slot)(QIODevice*) ```
void q_savefile_on_read_channel_finished(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSaveFile* self, long long maxlen ```
char* q_savefile_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSaveFile* self ```
const char* q_savefile_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSaveFile* self, char* name ```
void q_savefile_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSaveFile* self ```
bool q_savefile_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSaveFile* self, bool b ```
bool q_savefile_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSaveFile* self ```
QThread* q_savefile_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSaveFile* self, QThread* thread ```
bool q_savefile_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSaveFile* self, int interval ```
int32_t q_savefile_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSaveFile* self, int id ```
void q_savefile_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSaveFile* self, enum Qt__TimerId id ```
void q_savefile_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSaveFile* self ```
libqt_list /* of QObject* */ q_savefile_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSaveFile* self, QObject* parent ```
void q_savefile_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSaveFile* self, QObject* filterObj ```
void q_savefile_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSaveFile* self, QObject* obj ```
void q_savefile_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_savefile_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSaveFile* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_savefile_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_savefile_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_savefile_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSaveFile* self ```
void q_savefile_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSaveFile* self ```
void q_savefile_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSaveFile* self, const char* name, QVariant* value ```
bool q_savefile_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSaveFile* self, const char* name ```
QVariant* q_savefile_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSaveFile* self ```
const char** q_savefile_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSaveFile* self ```
QBindingStorage* q_savefile_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSaveFile* self ```
const QBindingStorage* q_savefile_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSaveFile* self ```
void q_savefile_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSaveFile* self, void (*slot)(QObject*) ```
void q_savefile_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSaveFile* self ```
QObject* q_savefile_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSaveFile* self, const char* classname ```
bool q_savefile_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSaveFile* self ```
void q_savefile_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSaveFile* self, QThread* thread, Disambiguated_t* param2 ```
bool q_savefile_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSaveFile* self, int interval, enum Qt__TimerType timerType ```
int32_t q_savefile_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_savefile_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSaveFile* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_savefile_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSaveFile* self, QObject* param1 ```
void q_savefile_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSaveFile* self, void (*slot)(QObject*, QObject*) ```
void q_savefile_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_is_sequential(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_qbase_is_sequential(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)() ```
void q_savefile_on_is_sequential(void* self, bool (*slot)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_pos(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_qbase_pos(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, long long (*slot)() ```
void q_savefile_on_pos(void* self, long long (*slot)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, long long offset ```
bool q_savefile_seek(void* self, long long offset);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, long long offset ```
bool q_savefile_qbase_seek(void* self, long long offset);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, long long) ```
void q_savefile_on_seek(void* self, bool (*slot)(void*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_at_end(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_qbase_at_end(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)() ```
void q_savefile_on_at_end(void* self, bool (*slot)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_size(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_qbase_size(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, long long (*slot)() ```
void q_savefile_on_size(void* self, long long (*slot)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#resize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, long long sz ```
bool q_savefile_resize(void* self, long long sz);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#resize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, long long sz ```
bool q_savefile_qbase_resize(void* self, long long sz);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#resize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, long long) ```
void q_savefile_on_resize(void* self, bool (*slot)(void*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
int64_t q_savefile_permissions(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
int64_t q_savefile_qbase_permissions(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, int64_t (*slot)() ```
void q_savefile_on_permissions(void* self, int64_t (*slot)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setPermissions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, int permissionSpec ```
bool q_savefile_set_permissions(void* self, int64_t permissionSpec);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setPermissions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, int permissionSpec ```
bool q_savefile_qbase_set_permissions(void* self, int64_t permissionSpec);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setPermissions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, int) ```
void q_savefile_on_set_permissions(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, char* data, long long maxlen ```
long long q_savefile_read_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, char* data, long long maxlen ```
long long q_savefile_qbase_read_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, long long (*slot)(QSaveFile*, char*, long long) ```
void q_savefile_on_read_data(void* self, long long (*slot)(void*, char*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, char* data, long long maxlen ```
long long q_savefile_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, char* data, long long maxlen ```
long long q_savefile_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, long long (*slot)(QSaveFile*, char*, long long) ```
void q_savefile_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)() ```
void q_savefile_on_reset(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_qbase_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, long long (*slot)() ```
void q_savefile_on_bytes_available(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_qbase_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, long long (*slot)() ```
void q_savefile_on_bytes_to_write(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)() ```
void q_savefile_on_can_read_line(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, int msecs ```
bool q_savefile_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, int msecs ```
bool q_savefile_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, int) ```
void q_savefile_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, int msecs ```
bool q_savefile_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, int msecs ```
bool q_savefile_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, int) ```
void q_savefile_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, long long maxSize ```
long long q_savefile_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, long long maxSize ```
long long q_savefile_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, long long (*slot)(QSaveFile*, long long) ```
void q_savefile_on_skip_data(void* self, long long (*slot)(void*, long long));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QEvent* event ```
bool q_savefile_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QEvent* event ```
bool q_savefile_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, QEvent*) ```
void q_savefile_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QObject* watched, QEvent* event ```
bool q_savefile_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QObject* watched, QEvent* event ```
bool q_savefile_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, QObject*, QEvent*) ```
void q_savefile_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QTimerEvent* event ```
void q_savefile_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QTimerEvent* event ```
void q_savefile_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, void (*slot)(QSaveFile*, QTimerEvent*) ```
void q_savefile_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QChildEvent* event ```
void q_savefile_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QChildEvent* event ```
void q_savefile_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, void (*slot)(QSaveFile*, QChildEvent*) ```
void q_savefile_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QEvent* event ```
void q_savefile_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QEvent* event ```
void q_savefile_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, void (*slot)(QSaveFile*, QEvent*) ```
void q_savefile_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QMetaMethod* signal ```
void q_savefile_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QMetaMethod* signal ```
void q_savefile_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, void (*slot)(QSaveFile*, QMetaMethod*) ```
void q_savefile_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QMetaMethod* signal ```
void q_savefile_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QMetaMethod* signal ```
void q_savefile_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, void (*slot)(QSaveFile*, QMetaMethod*) ```
void q_savefile_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, int openMode ```
void q_savefile_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, int openMode ```
void q_savefile_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, void (*slot)(QSaveFile*, int) ```
void q_savefile_on_set_open_mode(void* self, void (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, const char* errorString ```
void q_savefile_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, const char* errorString ```
void q_savefile_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, void (*slot)(QSaveFile*, const char*) ```
void q_savefile_on_set_error_string(void* self, void (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
QObject* q_savefile_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
QObject* q_savefile_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, QObject* (*slot)() ```
void q_savefile_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
int32_t q_savefile_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
int32_t q_savefile_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, int32_t (*slot)() ```
void q_savefile_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, const char* signal ```
int32_t q_savefile_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, const char* signal ```
int32_t q_savefile_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, int32_t (*slot)(QSaveFile*, const char*) ```
void q_savefile_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QMetaMethod* signal ```
bool q_savefile_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QMetaMethod* signal ```
bool q_savefile_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, QMetaMethod*) ```
void q_savefile_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QSaveFile* self, void (*slot)(QObject*, const char*) ```
void q_savefile_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#dtor.QSaveFile)
///
/// Delete this object from C++ memory.
///
/// ``` QSaveFile* self ```
void q_savefile_delete(void* self);

#endif

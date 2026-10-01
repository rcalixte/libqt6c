#pragma once
#ifndef LIBQSAVEFILE_H
#define LIBQSAVEFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html)

/// q_savefile_new constructs a new QSaveFile object.
///
/// @param name const char*
///
QSaveFile* q_savefile_new(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html)

/// q_savefile_new2 constructs a new QSaveFile object.
///
QSaveFile* q_savefile_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html)

/// q_savefile_new3 constructs a new QSaveFile object.
///
/// @param name const char*
/// @param parent QObject*
///
QSaveFile* q_savefile_new3(const char* name, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html)

/// q_savefile_new4 constructs a new QSaveFile object.
///
/// @param parent QObject*
///
QSaveFile* q_savefile_new4(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QSaveFile*
///
const QMetaObject* q_savefile_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QSaveFile*
/// @param callback const QMetaObject* func(const QSaveFile* self)
///
void q_savefile_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QSaveFile*
///
const QMetaObject* q_savefile_super_meta_object(const void* self);

/// @param self QSaveFile*
/// @param param1 const char*
///
void* q_savefile_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSaveFile*
/// @param callback void* func(QSaveFile* self, const char* param1)
///
void q_savefile_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QSaveFile*
/// @param param1 const char*
///
void* q_savefile_super_metacast(void* self, const char* param1);

/// @param self QSaveFile*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_savefile_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSaveFile*
/// @param callback int32_t func(QSaveFile* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_savefile_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSaveFile*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_savefile_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_savefile_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSaveFile*
///
const char* q_savefile_file_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#fileName)
///
/// Allows for overriding the related default method
///
/// @param self const QSaveFile*
/// @param callback const char* func(const QSaveFile* self)
///
void q_savefile_on_file_name(const void* self, const char* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#fileName)
///
/// Base class method implementation
///
/// @param self const QSaveFile*
///
const char* q_savefile_super_file_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#setFileName)
///
/// @param self QSaveFile*
/// @param name const char*
///
void q_savefile_set_file_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#open)
///
/// @param self QSaveFile*
/// @param flags flag of enum QIODeviceBase__OpenModeFlag
///
bool q_savefile_open(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#open)
///
/// Allows for overriding the related default method
///
/// @param self QSaveFile*
/// @param callback bool func(QSaveFile* self, flag of enum QIODeviceBase__OpenModeFlag flags)
///
void q_savefile_on_open(void* self, bool (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#open)
///
/// Base class method implementation
///
/// @param self QSaveFile*
/// @param flags flag of enum QIODeviceBase__OpenModeFlag
///
bool q_savefile_super_open(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#commit)
///
/// @param self QSaveFile*
///
bool q_savefile_commit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#cancelWriting)
///
/// @param self QSaveFile*
///
void q_savefile_cancel_writing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#setDirectWriteFallback)
///
/// @param self QSaveFile*
/// @param enabled bool
///
void q_savefile_set_direct_write_fallback(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#directWriteFallback)
///
/// @param self const QSaveFile*
///
bool q_savefile_direct_write_fallback(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#writeData)
///
/// @param self QSaveFile*
/// @param data const char*
/// @param lenVal int64_t
///
int64_t q_savefile_write_data(void* self, const char* data, int64_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#writeData)
///
/// Allows for overriding the related default method
///
/// @param self QSaveFile*
/// @param callback int64_t func(QSaveFile* self, const char* data, int64_t lenVal)
///
void q_savefile_on_write_data(void* self, int64_t (*callback)(void*, const char*, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#writeData)
///
/// Base class method implementation
///
/// @param self QSaveFile*
/// @param data const char*
/// @param lenVal int64_t
///
int64_t q_savefile_super_write_data(void* self, const char* data, int64_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_savefile_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_savefile_tr3(const char* s, const char* c, int n);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#error)
///
/// @param self const QSaveFile*
///
/// @return enum QFileDevice__FileError
///
int32_t q_savefile_error(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
///
/// @param self QSaveFile*
///
void q_savefile_unset_error(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// @param self QSaveFile*
///
void q_savefile_close(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#handle)
///
/// @param self const QSaveFile*
///
int32_t q_savefile_handle(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#flush)
///
/// @param self QSaveFile*
///
bool q_savefile_flush(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// @param self QSaveFile*
/// @param offset int64_t
/// @param size int64_t
///
unsigned char* q_savefile_map(void* self, int64_t offset, int64_t size);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
///
/// @param self QSaveFile*
/// @param address unsigned char*
///
bool q_savefile_unmap(void* self, unsigned char* address);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
///
/// @param self const QSaveFile*
/// @param time enum QFileDevice__FileTime
///
QDateTime* q_savefile_file_time(const void* self, int32_t time);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
///
/// @param self QSaveFile*
/// @param newDate QDateTime*
/// @param fileTime enum QFileDevice__FileTime
///
bool q_savefile_set_file_time(void* self, const void* newDate, int32_t fileTime);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// @param self QSaveFile*
/// @param offset int64_t
/// @param size int64_t
/// @param flags flag of enum QFileDevice__MemoryMapFlag
///
unsigned char* q_savefile_map3(void* self, int64_t offset, int64_t size, int32_t flags);

/// Inherited from QIODevice
///
/// Upcasts to a QIODeviceBase object
///
/// @param self QSaveFile*
///
QIODeviceBase* q_savefile_as_q_i_o_device_base(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self const QSaveFile*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_savefile_open_mode(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QSaveFile*
/// @param enabled bool
///
void q_savefile_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self const QSaveFile*
///
bool q_savefile_is_text_mode_enabled(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self const QSaveFile*
///
bool q_savefile_is_open(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self const QSaveFile*
///
bool q_savefile_is_readable(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self const QSaveFile*
///
bool q_savefile_is_writable(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self const QSaveFile*
///
int32_t q_savefile_read_channel_count(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self const QSaveFile*
///
int32_t q_savefile_write_channel_count(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self const QSaveFile*
///
int32_t q_savefile_current_read_channel(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QSaveFile*
/// @param channel int
///
void q_savefile_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self const QSaveFile*
///
int32_t q_savefile_current_write_channel(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QSaveFile*
/// @param channel int
///
void q_savefile_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QSaveFile*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_savefile_read(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSaveFile*
/// @param maxlen int64_t
///
char* q_savefile_read2(void* self, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSaveFile*
///
char* q_savefile_read_all(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QSaveFile*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_savefile_read_line(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSaveFile*
///
char* q_savefile_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QSaveFile*
///
void q_savefile_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QSaveFile*
///
void q_savefile_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QSaveFile*
///
void q_savefile_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self const QSaveFile*
///
bool q_savefile_is_transaction_started(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSaveFile*
/// @param data const char*
/// @param lenVal int64_t
///
int64_t q_savefile_write(void* self, const char* data, int64_t lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSaveFile*
/// @param data const char*
///
int64_t q_savefile_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSaveFile*
/// @param data char*
///
int64_t q_savefile_write3(void* self, char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QSaveFile*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_savefile_peek(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSaveFile*
/// @param maxlen int64_t
///
char* q_savefile_peek2(void* self, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QSaveFile*
/// @param maxSize int64_t
///
int64_t q_savefile_skip(void* self, int64_t maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QSaveFile*
/// @param c char
///
void q_savefile_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QSaveFile*
/// @param c char
///
bool q_savefile_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QSaveFile*
/// @param c char*
///
bool q_savefile_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSaveFile*
///
const char* q_savefile_error_string(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QSaveFile*
///
void q_savefile_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self)
///
void q_savefile_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QSaveFile*
/// @param channel int
///
void q_savefile_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, int channel)
///
void q_savefile_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QSaveFile*
/// @param bytes int64_t
///
void q_savefile_bytes_written(void* self, int64_t bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, int64_t bytes)
///
void q_savefile_on_bytes_written(void* self, void (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QSaveFile*
/// @param channel int
/// @param bytes int64_t
///
void q_savefile_channel_bytes_written(void* self, int channel, int64_t bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, int channel, int64_t bytes)
///
void q_savefile_on_channel_bytes_written(void* self, void (*callback)(void*, int, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QSaveFile*
///
void q_savefile_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self)
///
void q_savefile_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QSaveFile*
///
void q_savefile_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self)
///
void q_savefile_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSaveFile*
/// @param maxlen int64_t
///
char* q_savefile_read_line1(void* self, int64_t maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSaveFile*
///
const char* q_savefile_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSaveFile*
/// @param name const char*
///
void q_savefile_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QSaveFile*
///
bool q_savefile_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QSaveFile*
///
bool q_savefile_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QSaveFile*
///
bool q_savefile_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QSaveFile*
///
bool q_savefile_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSaveFile*
/// @param b bool
///
bool q_savefile_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QSaveFile*
///
QThread* q_savefile_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSaveFile*
/// @param thread QThread*
///
bool q_savefile_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSaveFile*
/// @param interval int
///
int32_t q_savefile_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSaveFile*
/// @param time int64_t of nanoseconds
///
int32_t q_savefile_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSaveFile*
/// @param id int
///
void q_savefile_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSaveFile*
/// @param id enum Qt__TimerId
///
void q_savefile_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QSaveFile*
///
/// @return libqt_list of QObject*
///
libqt_list q_savefile_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSaveFile*
/// @param parent QObject*
///
void q_savefile_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSaveFile*
/// @param filterObj QObject*
///
void q_savefile_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSaveFile*
/// @param obj QObject*
///
void q_savefile_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_savefile_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_savefile_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSaveFile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_savefile_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_savefile_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_savefile_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSaveFile*
///
bool q_savefile_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSaveFile*
/// @param receiver QObject*
///
bool q_savefile_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_savefile_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QSaveFile*
///
void q_savefile_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QSaveFile*
///
void q_savefile_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSaveFile*
/// @param name const char*
/// @param value QVariant*
///
bool q_savefile_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QSaveFile*
/// @param name const char*
///
QVariant* q_savefile_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSaveFile*
///
const char** q_savefile_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSaveFile*
///
QBindingStorage* q_savefile_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QSaveFile*
///
const QBindingStorage* q_savefile_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSaveFile*
///
void q_savefile_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self)
///
void q_savefile_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QSaveFile*
///
QObject* q_savefile_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QSaveFile*
/// @param classname const char*
///
bool q_savefile_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSaveFile*
///
void q_savefile_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSaveFile*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_savefile_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSaveFile*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_savefile_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_savefile_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_savefile_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSaveFile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_savefile_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSaveFile*
/// @param signal const char*
///
bool q_savefile_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSaveFile*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_savefile_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSaveFile*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_savefile_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSaveFile*
/// @param receiver QObject*
/// @param member const char*
///
bool q_savefile_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSaveFile*
/// @param param1 QObject*
///
void q_savefile_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, QObject* param1)
///
void q_savefile_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSaveFile*
///
bool q_savefile_is_sequential(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSaveFile*
///
bool q_savefile_super_is_sequential(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSaveFile*
/// @param callback bool func(QSaveFile* self)
///
void q_savefile_on_is_sequential(const void* self, bool (*callback)(const void*));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSaveFile*
///
int64_t q_savefile_pos(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSaveFile*
///
int64_t q_savefile_super_pos(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSaveFile*
/// @param callback int64_t func(QSaveFile* self)
///
void q_savefile_on_pos(const void* self, int64_t (*callback)(const void*));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param offset int64_t
///
bool q_savefile_seek(void* self, int64_t offset);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param offset int64_t
///
bool q_savefile_super_seek(void* self, int64_t offset);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func(QSaveFile* self, int64_t offset)
///
void q_savefile_on_seek(void* self, bool (*callback)(void*, int64_t));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSaveFile*
///
bool q_savefile_at_end(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSaveFile*
///
bool q_savefile_super_at_end(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSaveFile*
/// @param callback bool func(QSaveFile* self)
///
void q_savefile_on_at_end(const void* self, bool (*callback)(const void*));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSaveFile*
///
int64_t q_savefile_size(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSaveFile*
///
int64_t q_savefile_super_size(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSaveFile*
/// @param callback int64_t func(QSaveFile* self)
///
void q_savefile_on_size(const void* self, int64_t (*callback)(const void*));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#resize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param sz int64_t
///
bool q_savefile_resize(void* self, int64_t sz);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#resize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param sz int64_t
///
bool q_savefile_super_resize(void* self, int64_t sz);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#resize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func(QSaveFile* self, int64_t sz)
///
void q_savefile_on_resize(void* self, bool (*callback)(void*, int64_t));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSaveFile*
///
/// @return flag of enum QFileDevice__Permission
///
int32_t q_savefile_permissions(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSaveFile*
///
/// @return flag of enum QFileDevice__Permission
///
int32_t q_savefile_super_permissions(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSaveFile*
/// @param callback int32_t func(QSaveFile* self)
///
void q_savefile_on_permissions(const void* self, int32_t (*callback)(const void*));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#setPermissions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param permissionSpec flag of enum QFileDevice__Permission
///
bool q_savefile_set_permissions(void* self, int32_t permissionSpec);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#setPermissions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param permissionSpec flag of enum QFileDevice__Permission
///
bool q_savefile_super_set_permissions(void* self, int32_t permissionSpec);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#setPermissions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func(QSaveFile* self, flag of enum QFileDevice__Permission permissionSpec)
///
void q_savefile_on_set_permissions(void* self, bool (*callback)(void*, int32_t));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_savefile_read_data(void* self, char* data, int64_t maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_savefile_super_read_data(void* self, char* data, int64_t maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback int64_t func(QSaveFile* self, char* data, int64_t maxlen)
///
void q_savefile_on_read_data(void* self, int64_t (*callback)(void*, char*, int64_t));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_savefile_read_line_data(void* self, char* data, int64_t maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_savefile_super_read_line_data(void* self, char* data, int64_t maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback int64_t func(QSaveFile* self, char* data, int64_t maxlen)
///
void q_savefile_on_read_line_data(void* self, int64_t (*callback)(void*, char*, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
///
bool q_savefile_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
///
bool q_savefile_super_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func(QSaveFile* self)
///
void q_savefile_on_reset(void* self, bool (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSaveFile*
///
int64_t q_savefile_bytes_available(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSaveFile*
///
int64_t q_savefile_super_bytes_available(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSaveFile*
/// @param callback int64_t func(QSaveFile* self)
///
void q_savefile_on_bytes_available(const void* self, int64_t (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSaveFile*
///
int64_t q_savefile_bytes_to_write(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSaveFile*
///
int64_t q_savefile_super_bytes_to_write(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSaveFile*
/// @param callback int64_t func(QSaveFile* self)
///
void q_savefile_on_bytes_to_write(const void* self, int64_t (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSaveFile*
///
bool q_savefile_can_read_line(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSaveFile*
///
bool q_savefile_super_can_read_line(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSaveFile*
/// @param callback bool func(QSaveFile* self)
///
void q_savefile_on_can_read_line(const void* self, bool (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param msecs int
///
bool q_savefile_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param msecs int
///
bool q_savefile_super_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func(QSaveFile* self, int msecs)
///
void q_savefile_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param msecs int
///
bool q_savefile_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param msecs int
///
bool q_savefile_super_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func(QSaveFile* self, int msecs)
///
void q_savefile_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param maxSize int64_t
///
int64_t q_savefile_skip_data(void* self, int64_t maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param maxSize int64_t
///
int64_t q_savefile_super_skip_data(void* self, int64_t maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback int64_t func(QSaveFile* self, int64_t maxSize)
///
void q_savefile_on_skip_data(void* self, int64_t (*callback)(void*, int64_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param event QEvent*
///
bool q_savefile_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param event QEvent*
///
bool q_savefile_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func(QSaveFile* self, QEvent* event)
///
void q_savefile_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_savefile_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_savefile_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func(QSaveFile* self, QObject* watched, QEvent* event)
///
void q_savefile_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param event QTimerEvent*
///
void q_savefile_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param event QTimerEvent*
///
void q_savefile_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, QTimerEvent* event)
///
void q_savefile_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param event QChildEvent*
///
void q_savefile_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param event QChildEvent*
///
void q_savefile_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, QChildEvent* event)
///
void q_savefile_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param event QEvent*
///
void q_savefile_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param event QEvent*
///
void q_savefile_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, QEvent* event)
///
void q_savefile_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param signal QMetaMethod*
///
void q_savefile_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param signal QMetaMethod*
///
void q_savefile_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, QMetaMethod* signal)
///
void q_savefile_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param signal QMetaMethod*
///
void q_savefile_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param signal QMetaMethod*
///
void q_savefile_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, QMetaMethod* signal)
///
void q_savefile_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_savefile_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_savefile_super_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_savefile_on_set_open_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param errorString const char*
///
void q_savefile_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param errorString const char*
///
void q_savefile_super_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, const char* errorString)
///
void q_savefile_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSaveFile*
///
QObject* q_savefile_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSaveFile*
///
QObject* q_savefile_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSaveFile*
/// @param callback QObject* func(QSaveFile* self)
///
void q_savefile_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSaveFile*
///
int32_t q_savefile_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSaveFile*
///
int32_t q_savefile_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSaveFile*
/// @param callback int32_t func(QSaveFile* self)
///
void q_savefile_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSaveFile*
/// @param signal const char*
///
int32_t q_savefile_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSaveFile*
/// @param signal const char*
///
int32_t q_savefile_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSaveFile*
/// @param callback int32_t func(QSaveFile* self, const char* signal)
///
void q_savefile_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSaveFile*
/// @param signal QMetaMethod*
///
bool q_savefile_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSaveFile*
/// @param signal QMetaMethod*
///
bool q_savefile_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSaveFile*
/// @param callback bool func(QSaveFile* self, QMetaMethod* signal)
///
void q_savefile_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, const char* objectName)
///
void q_savefile_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#dtor.QSaveFile)
///
/// Delete this object from C++ memory.
///
/// @param self QSaveFile*
///
void q_savefile_delete(void* self);

#endif

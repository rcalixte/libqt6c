#pragma once
#ifndef SRC_QT6C_LIBQSAVEFILE_H
#define SRC_QT6C_LIBQSAVEFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self QSaveFile*
///
const QMetaObject* q_savefile_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QSaveFile*
/// @param callback const QMetaObject* func()
///
void q_savefile_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QSaveFile*
///
const QMetaObject* q_savefile_qbase_meta_object(void* self);

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
void* q_savefile_qbase_metacast(void* self, const char* param1);

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
int32_t q_savefile_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

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
/// @param self QSaveFile*
///
const char* q_savefile_file_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#fileName)
///
/// Allows for overriding the related default method
///
/// @param self QSaveFile*
/// @param callback const char* func()
///
void q_savefile_on_file_name(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#fileName)
///
/// Base class method implementation
///
/// @param self QSaveFile*
///
const char* q_savefile_qbase_file_name(void* self);

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
bool q_savefile_qbase_open(void* self, int32_t flags);

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
/// @param self QSaveFile*
///
bool q_savefile_direct_write_fallback(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#writeData)
///
/// @param self QSaveFile*
/// @param data const char*
/// @param lenVal long long
///
long long q_savefile_write_data(void* self, const char* data, long long lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#writeData)
///
/// Allows for overriding the related default method
///
/// @param self QSaveFile*
/// @param callback long long func(QSaveFile* self, const char* data, long long lenVal)
///
void q_savefile_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qsavefile.html#writeData)
///
/// Base class method implementation
///
/// @param self QSaveFile*
/// @param data const char*
/// @param lenVal long long
///
long long q_savefile_qbase_write_data(void* self, const char* data, long long lenVal);

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
/// @param self QSaveFile*
///
/// @return enum QFileDevice__FileError
///
int32_t q_savefile_error(void* self);

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
/// @param self QSaveFile*
///
int32_t q_savefile_handle(void* self);

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
/// @param offset long long
/// @param size long long
///
unsigned char* q_savefile_map(void* self, long long offset, long long size);

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
/// @param self QSaveFile*
/// @param time enum QFileDevice__FileTime
///
QDateTime* q_savefile_file_time(void* self, int32_t time);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
///
/// @param self QSaveFile*
/// @param newDate QDateTime*
/// @param fileTime enum QFileDevice__FileTime
///
bool q_savefile_set_file_time(void* self, void* newDate, int32_t fileTime);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// @param self QSaveFile*
/// @param offset long long
/// @param size long long
/// @param flags flag of enum QFileDevice__MemoryMapFlag
///
unsigned char* q_savefile_map3(void* self, long long offset, long long size, int32_t flags);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QSaveFile*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_savefile_open_mode(void* self);

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
/// @param self QSaveFile*
///
bool q_savefile_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QSaveFile*
///
bool q_savefile_is_open(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QSaveFile*
///
bool q_savefile_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QSaveFile*
///
bool q_savefile_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QSaveFile*
///
int32_t q_savefile_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QSaveFile*
///
int32_t q_savefile_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QSaveFile*
///
int32_t q_savefile_current_read_channel(void* self);

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
/// @param self QSaveFile*
///
int32_t q_savefile_current_write_channel(void* self);

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
/// @param maxlen long long
///
long long q_savefile_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSaveFile*
/// @param maxlen long long
///
char* q_savefile_read2(void* self, long long maxlen);

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
/// @param maxlen long long
///
long long q_savefile_read_line(void* self, char* data, long long maxlen);

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
/// @param self QSaveFile*
///
bool q_savefile_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSaveFile*
/// @param data const char*
/// @param lenVal long long
///
long long q_savefile_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSaveFile*
/// @param data const char*
///
long long q_savefile_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSaveFile*
/// @param data const char*
///
long long q_savefile_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QSaveFile*
/// @param data char*
/// @param maxlen long long
///
long long q_savefile_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSaveFile*
/// @param maxlen long long
///
char* q_savefile_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QSaveFile*
/// @param maxSize long long
///
long long q_savefile_skip(void* self, long long maxSize);

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
/// @param self QSaveFile*
///
const char* q_savefile_error_string(void* self);

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
/// @param bytes long long
///
void q_savefile_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, long long bytes)
///
void q_savefile_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QSaveFile*
/// @param channel int
/// @param bytes long long
///
void q_savefile_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, int channel, long long bytes)
///
void q_savefile_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

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
/// @param maxlen long long
///
char* q_savefile_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSaveFile*
///
const char* q_savefile_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSaveFile*
/// @param name char*
///
void q_savefile_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSaveFile*
///
bool q_savefile_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSaveFile*
///
bool q_savefile_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSaveFile*
///
bool q_savefile_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSaveFile*
///
bool q_savefile_signals_blocked(void* self);

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
/// @param self QSaveFile*
///
QThread* q_savefile_thread(void* self);

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
/// @param self QSaveFile*
///
/// @return libqt_list of QObject*
///
libqt_list q_savefile_children(void* self);

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
QMetaObject__Connection* q_savefile_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_savefile_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSaveFile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_savefile_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_savefile_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_savefile_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSaveFile*
///
bool q_savefile_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSaveFile*
/// @param receiver QObject*
///
bool q_savefile_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_savefile_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSaveFile*
///
void q_savefile_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSaveFile*
///
void q_savefile_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSaveFile*
/// @param name const char*
/// @param value QVariant*
///
bool q_savefile_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSaveFile*
/// @param name const char*
///
QVariant* q_savefile_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSaveFile*
///
const char** q_savefile_dynamic_property_names(void* self);

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
/// @param self QSaveFile*
///
const QBindingStorage* q_savefile_binding_storage2(void* self);

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
/// @param self QSaveFile*
///
QObject* q_savefile_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSaveFile*
/// @param classname const char*
///
bool q_savefile_inherits(void* self, const char* classname);

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
QMetaObject__Connection* q_savefile_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_savefile_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSaveFile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_savefile_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSaveFile*
/// @param signal const char*
///
bool q_savefile_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSaveFile*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_savefile_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSaveFile*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_savefile_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSaveFile*
/// @param receiver QObject*
/// @param member const char*
///
bool q_savefile_disconnect23(void* self, void* receiver, const char* member);

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
/// @param self QSaveFile*
///
bool q_savefile_is_sequential(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
///
bool q_savefile_qbase_is_sequential(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func()
///
void q_savefile_on_is_sequential(void* self, bool (*callback)());

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
///
long long q_savefile_pos(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
///
long long q_savefile_qbase_pos(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback long long func()
///
void q_savefile_on_pos(void* self, long long (*callback)());

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param offset long long
///
bool q_savefile_seek(void* self, long long offset);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param offset long long
///
bool q_savefile_qbase_seek(void* self, long long offset);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func(QSaveFile* self, long long offset)
///
void q_savefile_on_seek(void* self, bool (*callback)(void*, long long));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
///
bool q_savefile_at_end(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
///
bool q_savefile_qbase_at_end(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func()
///
void q_savefile_on_at_end(void* self, bool (*callback)());

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
///
long long q_savefile_size(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
///
long long q_savefile_qbase_size(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback long long func()
///
void q_savefile_on_size(void* self, long long (*callback)());

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#resize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param sz long long
///
bool q_savefile_resize(void* self, long long sz);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#resize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param sz long long
///
bool q_savefile_qbase_resize(void* self, long long sz);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#resize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func(QSaveFile* self, long long sz)
///
void q_savefile_on_resize(void* self, bool (*callback)(void*, long long));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
///
/// @return flag of enum QFileDevice__Permission
///
int32_t q_savefile_permissions(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
///
/// @return flag of enum QFileDevice__Permission
///
int32_t q_savefile_qbase_permissions(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback int32_t func()
///
void q_savefile_on_permissions(void* self, int32_t (*callback)());

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
bool q_savefile_qbase_set_permissions(void* self, int32_t permissionSpec);

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
/// @param maxlen long long
///
long long q_savefile_read_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param data char*
/// @param maxlen long long
///
long long q_savefile_qbase_read_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback long long func(QSaveFile* self, char* data, long long maxlen)
///
void q_savefile_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param data char*
/// @param maxlen long long
///
long long q_savefile_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param data char*
/// @param maxlen long long
///
long long q_savefile_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback long long func(QSaveFile* self, char* data, long long maxlen)
///
void q_savefile_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

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
bool q_savefile_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func()
///
void q_savefile_on_reset(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
///
long long q_savefile_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
///
long long q_savefile_qbase_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback long long func()
///
void q_savefile_on_bytes_available(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
///
long long q_savefile_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
///
long long q_savefile_qbase_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback long long func()
///
void q_savefile_on_bytes_to_write(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
///
bool q_savefile_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
///
bool q_savefile_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func()
///
void q_savefile_on_can_read_line(void* self, bool (*callback)());

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
bool q_savefile_qbase_wait_for_ready_read(void* self, int msecs);

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
bool q_savefile_qbase_wait_for_bytes_written(void* self, int msecs);

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
/// @param maxSize long long
///
long long q_savefile_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param maxSize long long
///
long long q_savefile_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback long long func(QSaveFile* self, long long maxSize)
///
void q_savefile_on_skip_data(void* self, long long (*callback)(void*, long long));

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
bool q_savefile_qbase_event(void* self, void* event);

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
bool q_savefile_qbase_event_filter(void* self, void* watched, void* event);

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
void q_savefile_qbase_timer_event(void* self, void* event);

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
void q_savefile_qbase_child_event(void* self, void* event);

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
void q_savefile_qbase_custom_event(void* self, void* event);

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
void q_savefile_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param signal QMetaMethod*
///
void q_savefile_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, QMetaMethod* signal)
///
void q_savefile_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param signal QMetaMethod*
///
void q_savefile_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param signal QMetaMethod*
///
void q_savefile_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback void func(QSaveFile* self, QMetaMethod* signal)
///
void q_savefile_on_disconnect_notify(void* self, void (*callback)(void*, void*));

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
void q_savefile_qbase_set_open_mode(void* self, int32_t openMode);

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
void q_savefile_qbase_set_error_string(void* self, const char* errorString);

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
/// @param self QSaveFile*
///
QObject* q_savefile_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
///
QObject* q_savefile_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback QObject* func()
///
void q_savefile_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
///
int32_t q_savefile_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
///
int32_t q_savefile_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback int32_t func()
///
void q_savefile_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param signal const char*
///
int32_t q_savefile_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param signal const char*
///
int32_t q_savefile_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback int32_t func(QSaveFile* self, const char* signal)
///
void q_savefile_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSaveFile*
/// @param signal QMetaMethod*
///
bool q_savefile_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSaveFile*
/// @param signal QMetaMethod*
///
bool q_savefile_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSaveFile*
/// @param callback bool func(QSaveFile* self, QMetaMethod* signal)
///
void q_savefile_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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

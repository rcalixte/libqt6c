#pragma once
#ifndef SRC_QT6C_LIBQFILEDEVICE_H
#define SRC_QT6C_LIBQFILEDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QFileDevice*
///
const QMetaObject* q_filedevice_meta_object(void* self);

/// @param self QFileDevice*
/// @param param1 const char*
///
void* q_filedevice_metacast(void* self, const char* param1);

/// @param self QFileDevice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_filedevice_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_filedevice_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#error)
///
/// @param self QFileDevice*
///
/// @return enum QFileDevice__FileError
///
int32_t q_filedevice_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
///
/// @param self QFileDevice*
///
void q_filedevice_unset_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// @param self QFileDevice*
///
void q_filedevice_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// @param self QFileDevice*
///
bool q_filedevice_is_sequential(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#handle)
///
/// @param self QFileDevice*
///
int32_t q_filedevice_handle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDevice*
///
const char* q_filedevice_file_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// @param self QFileDevice*
///
long long q_filedevice_pos(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// @param self QFileDevice*
/// @param offset long long
///
bool q_filedevice_seek(void* self, long long offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// @param self QFileDevice*
///
bool q_filedevice_at_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#flush)
///
/// @param self QFileDevice*
///
bool q_filedevice_flush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#size)
///
/// @param self QFileDevice*
///
long long q_filedevice_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#resize)
///
/// @param self QFileDevice*
/// @param sz long long
///
bool q_filedevice_resize(void* self, long long sz);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
///
/// @param self QFileDevice*
///
/// @return flag of enum QFileDevice__Permission
///
int32_t q_filedevice_permissions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#setPermissions)
///
/// @param self QFileDevice*
/// @param permissionSpec flag of enum QFileDevice__Permission
///
bool q_filedevice_set_permissions(void* self, int32_t permissionSpec);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// @param self QFileDevice*
/// @param offset long long
/// @param size long long
///
unsigned char* q_filedevice_map(void* self, long long offset, long long size);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
///
/// @param self QFileDevice*
/// @param address unsigned char*
///
bool q_filedevice_unmap(void* self, unsigned char* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
///
/// @param self QFileDevice*
/// @param time enum QFileDevice__FileTime
///
QDateTime* q_filedevice_file_time(void* self, int32_t time);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
///
/// @param self QFileDevice*
/// @param newDate QDateTime*
/// @param fileTime enum QFileDevice__FileTime
///
bool q_filedevice_set_file_time(void* self, void* newDate, int32_t fileTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_filedevice_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_filedevice_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// @param self QFileDevice*
/// @param offset long long
/// @param size long long
/// @param flags flag of enum QFileDevice__MemoryMapFlag
///
unsigned char* q_filedevice_map3(void* self, long long offset, long long size, int32_t flags);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QFileDevice*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_filedevice_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QFileDevice*
/// @param enabled bool
///
void q_filedevice_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QFileDevice*
///
bool q_filedevice_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QFileDevice*
///
bool q_filedevice_is_open(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QFileDevice*
///
bool q_filedevice_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QFileDevice*
///
bool q_filedevice_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QFileDevice*
///
int32_t q_filedevice_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QFileDevice*
///
int32_t q_filedevice_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QFileDevice*
///
int32_t q_filedevice_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QFileDevice*
/// @param channel int
///
void q_filedevice_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QFileDevice*
///
int32_t q_filedevice_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QFileDevice*
/// @param channel int
///
void q_filedevice_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// @param self QFileDevice*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_filedevice_open(void* self, int32_t mode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// @param self QFileDevice*
///
bool q_filedevice_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// @param self QFileDevice*
///
long long q_filedevice_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// @param self QFileDevice*
///
long long q_filedevice_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QFileDevice*
/// @param data char*
/// @param maxlen long long
///
long long q_filedevice_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFileDevice*
/// @param maxlen long long
///
char* q_filedevice_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFileDevice*
///
char* q_filedevice_read_all(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QFileDevice*
/// @param data char*
/// @param maxlen long long
///
long long q_filedevice_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFileDevice*
///
char* q_filedevice_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// @param self QFileDevice*
///
bool q_filedevice_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QFileDevice*
///
void q_filedevice_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QFileDevice*
///
void q_filedevice_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QFileDevice*
///
void q_filedevice_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QFileDevice*
///
bool q_filedevice_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QFileDevice*
/// @param data const char*
/// @param lenVal long long
///
long long q_filedevice_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QFileDevice*
/// @param data const char*
///
long long q_filedevice_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QFileDevice*
/// @param data const char*
///
long long q_filedevice_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QFileDevice*
/// @param data char*
/// @param maxlen long long
///
long long q_filedevice_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFileDevice*
/// @param maxlen long long
///
char* q_filedevice_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QFileDevice*
/// @param maxSize long long
///
long long q_filedevice_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// @param self QFileDevice*
/// @param msecs int
///
bool q_filedevice_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// @param self QFileDevice*
/// @param msecs int
///
bool q_filedevice_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QFileDevice*
/// @param c char
///
void q_filedevice_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QFileDevice*
/// @param c char
///
bool q_filedevice_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QFileDevice*
/// @param c char*
///
bool q_filedevice_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDevice*
///
const char* q_filedevice_error_string(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QFileDevice*
///
void q_filedevice_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QFileDevice*
/// @param callback void func(QFileDevice* self)
///
void q_filedevice_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QFileDevice*
/// @param channel int
///
void q_filedevice_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QFileDevice*
/// @param callback void func(QFileDevice* self, int channel)
///
void q_filedevice_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QFileDevice*
/// @param bytes long long
///
void q_filedevice_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QFileDevice*
/// @param callback void func(QFileDevice* self, long long bytes)
///
void q_filedevice_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QFileDevice*
/// @param channel int
/// @param bytes long long
///
void q_filedevice_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QFileDevice*
/// @param callback void func(QFileDevice* self, int channel, long long bytes)
///
void q_filedevice_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QFileDevice*
///
void q_filedevice_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QFileDevice*
/// @param callback void func(QFileDevice* self)
///
void q_filedevice_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QFileDevice*
///
void q_filedevice_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QFileDevice*
/// @param callback void func(QFileDevice* self)
///
void q_filedevice_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFileDevice*
/// @param maxlen long long
///
char* q_filedevice_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QFileDevice*
/// @param event QEvent*
///
bool q_filedevice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QFileDevice*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_filedevice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFileDevice*
///
const char* q_filedevice_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QFileDevice*
/// @param name char*
///
void q_filedevice_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QFileDevice*
///
bool q_filedevice_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QFileDevice*
///
bool q_filedevice_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QFileDevice*
///
bool q_filedevice_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QFileDevice*
///
bool q_filedevice_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QFileDevice*
/// @param b bool
///
bool q_filedevice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QFileDevice*
///
QThread* q_filedevice_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFileDevice*
/// @param thread QThread*
///
bool q_filedevice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFileDevice*
/// @param interval int
///
int32_t q_filedevice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFileDevice*
/// @param id int
///
void q_filedevice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFileDevice*
/// @param id enum Qt__TimerId
///
void q_filedevice_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QFileDevice*
///
libqt_list /* of QObject* */ q_filedevice_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QFileDevice*
/// @param parent QObject*
///
void q_filedevice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QFileDevice*
/// @param filterObj QObject*
///
void q_filedevice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QFileDevice*
/// @param obj QObject*
///
void q_filedevice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_filedevice_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFileDevice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_filedevice_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_filedevice_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_filedevice_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QFileDevice*
///
void q_filedevice_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QFileDevice*
///
void q_filedevice_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QFileDevice*
/// @param name const char*
/// @param value QVariant*
///
bool q_filedevice_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QFileDevice*
/// @param name const char*
///
QVariant* q_filedevice_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFileDevice*
///
const char** q_filedevice_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFileDevice*
///
QBindingStorage* q_filedevice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFileDevice*
///
const QBindingStorage* q_filedevice_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileDevice*
///
void q_filedevice_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileDevice*
/// @param callback void func(QFileDevice* self)
///
void q_filedevice_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QFileDevice*
///
QObject* q_filedevice_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QFileDevice*
/// @param classname const char*
///
bool q_filedevice_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QFileDevice*
///
void q_filedevice_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFileDevice*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_filedevice_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFileDevice*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_filedevice_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_filedevice_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFileDevice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_filedevice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileDevice*
/// @param param1 QObject*
///
void q_filedevice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFileDevice*
/// @param callback void func(QFileDevice* self, QObject* param1)
///
void q_filedevice_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QFileDevice*
/// @param callback void func(QFileDevice* self, const char* objectName)
///
void q_filedevice_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#dtor.QFileDevice)
///
/// Delete this object from C++ memory.
///
/// @param self QFileDevice*
///
void q_filedevice_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#public-types)

typedef enum {
    QFILEDEVICE_FILEERROR_NOERROR = 0,
    QFILEDEVICE_FILEERROR_READERROR = 1,
    QFILEDEVICE_FILEERROR_WRITEERROR = 2,
    QFILEDEVICE_FILEERROR_FATALERROR = 3,
    QFILEDEVICE_FILEERROR_RESOURCEERROR = 4,
    QFILEDEVICE_FILEERROR_OPENERROR = 5,
    QFILEDEVICE_FILEERROR_ABORTERROR = 6,
    QFILEDEVICE_FILEERROR_TIMEOUTERROR = 7,
    QFILEDEVICE_FILEERROR_UNSPECIFIEDERROR = 8,
    QFILEDEVICE_FILEERROR_REMOVEERROR = 9,
    QFILEDEVICE_FILEERROR_RENAMEERROR = 10,
    QFILEDEVICE_FILEERROR_POSITIONERROR = 11,
    QFILEDEVICE_FILEERROR_RESIZEERROR = 12,
    QFILEDEVICE_FILEERROR_PERMISSIONSERROR = 13,
    QFILEDEVICE_FILEERROR_COPYERROR = 14
} QFileDevice__FileError;

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#public-types)

typedef enum {
    QFILEDEVICE_FILETIME_FILEACCESSTIME = 0,
    QFILEDEVICE_FILETIME_FILEBIRTHTIME = 1,
    QFILEDEVICE_FILETIME_FILEMETADATACHANGETIME = 2,
    QFILEDEVICE_FILETIME_FILEMODIFICATIONTIME = 3
} QFileDevice__FileTime;

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#public-types)

typedef enum {
    QFILEDEVICE_PERMISSION_READOWNER = 16384,
    QFILEDEVICE_PERMISSION_WRITEOWNER = 8192,
    QFILEDEVICE_PERMISSION_EXEOWNER = 4096,
    QFILEDEVICE_PERMISSION_READUSER = 1024,
    QFILEDEVICE_PERMISSION_WRITEUSER = 512,
    QFILEDEVICE_PERMISSION_EXEUSER = 256,
    QFILEDEVICE_PERMISSION_READGROUP = 64,
    QFILEDEVICE_PERMISSION_WRITEGROUP = 32,
    QFILEDEVICE_PERMISSION_EXEGROUP = 16,
    QFILEDEVICE_PERMISSION_READOTHER = 4,
    QFILEDEVICE_PERMISSION_WRITEOTHER = 2,
    QFILEDEVICE_PERMISSION_EXEOTHER = 1
} QFileDevice__Permission;

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#public-types)

typedef enum {
    QFILEDEVICE_FILEHANDLEFLAG_AUTOCLOSEHANDLE = 1,
    QFILEDEVICE_FILEHANDLEFLAG_DONTCLOSEHANDLE = 0
} QFileDevice__FileHandleFlag;

/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#public-types)

typedef enum {
    QFILEDEVICE_MEMORYMAPFLAG_NOOPTIONS = 0,
    QFILEDEVICE_MEMORYMAPFLAG_MAPPRIVATEOPTION = 1
} QFileDevice__MemoryMapFlag;

#endif

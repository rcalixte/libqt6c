#pragma once
#ifndef SRCQT6C_LIBQFILEDEVICE_H
#define SRCQT6C_LIBQFILEDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfiledevice.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFileDevice* self ```
const QMetaObject* q_filedevice_meta_object(void* self);

/// ``` QFileDevice* self, const char* param1 ```
void* q_filedevice_metacast(void* self, const char* param1);

/// ``` QFileDevice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_filedevice_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_filedevice_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#error)
///
/// ``` QFileDevice* self ```
int64_t q_filedevice_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
///
/// ``` QFileDevice* self ```
void q_filedevice_unset_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// ``` QFileDevice* self ```
void q_filedevice_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#handle)
///
/// ``` QFileDevice* self ```
int32_t q_filedevice_handle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#fileName)
///
/// ``` QFileDevice* self ```
const char* q_filedevice_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// ``` QFileDevice* self ```
long long q_filedevice_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// ``` QFileDevice* self, long long offset ```
bool q_filedevice_seek(void* self, long long offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// ``` QFileDevice* self ```
bool q_filedevice_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#flush)
///
/// ``` QFileDevice* self ```
bool q_filedevice_flush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#size)
///
/// ``` QFileDevice* self ```
long long q_filedevice_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#resize)
///
/// ``` QFileDevice* self, long long sz ```
bool q_filedevice_resize(void* self, long long sz);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
///
/// ``` QFileDevice* self ```
int64_t q_filedevice_permissions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setPermissions)
///
/// ``` QFileDevice* self, int permissionSpec ```
bool q_filedevice_set_permissions(void* self, int64_t permissionSpec);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// ``` QFileDevice* self, long long offset, long long size ```
unsigned char* q_filedevice_map(void* self, long long offset, long long size);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
///
/// ``` QFileDevice* self, unsigned char* address ```
bool q_filedevice_unmap(void* self, unsigned char* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
///
/// ``` QFileDevice* self, enum QFileDevice__FileTime time ```
QDateTime* q_filedevice_file_time(void* self, int64_t time);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
///
/// ``` QFileDevice* self, QDateTime* newDate, enum QFileDevice__FileTime fileTime ```
bool q_filedevice_set_file_time(void* self, void* newDate, int64_t fileTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_filedevice_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_filedevice_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// ``` QFileDevice* self, long long offset, long long size, int flags ```
unsigned char* q_filedevice_map3(void* self, long long offset, long long size, int64_t flags);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QFileDevice* self ```
int64_t q_filedevice_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QFileDevice* self, bool enabled ```
void q_filedevice_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QFileDevice* self ```
int32_t q_filedevice_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QFileDevice* self ```
int32_t q_filedevice_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QFileDevice* self ```
int32_t q_filedevice_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QFileDevice* self, int channel ```
void q_filedevice_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QFileDevice* self ```
int32_t q_filedevice_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QFileDevice* self, int channel ```
void q_filedevice_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// ``` QFileDevice* self, int mode ```
bool q_filedevice_open(void* self, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// ``` QFileDevice* self ```
bool q_filedevice_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// ``` QFileDevice* self ```
long long q_filedevice_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// ``` QFileDevice* self ```
long long q_filedevice_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QFileDevice* self, char* data, long long maxlen ```
long long q_filedevice_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QFileDevice* self, long long maxlen ```
char* q_filedevice_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QFileDevice* self ```
char* q_filedevice_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QFileDevice* self, char* data, long long maxlen ```
long long q_filedevice_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QFileDevice* self ```
char* q_filedevice_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// ``` QFileDevice* self ```
bool q_filedevice_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QFileDevice* self ```
void q_filedevice_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QFileDevice* self ```
void q_filedevice_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QFileDevice* self ```
void q_filedevice_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QFileDevice* self, const char* data, long long lenVal ```
long long q_filedevice_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QFileDevice* self, const char* data ```
long long q_filedevice_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QFileDevice* self, const char* data ```
long long q_filedevice_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QFileDevice* self, char* data, long long maxlen ```
long long q_filedevice_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QFileDevice* self, long long maxlen ```
char* q_filedevice_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QFileDevice* self, long long maxSize ```
long long q_filedevice_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// ``` QFileDevice* self, int msecs ```
bool q_filedevice_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// ``` QFileDevice* self, int msecs ```
bool q_filedevice_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QFileDevice* self, char c ```
void q_filedevice_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QFileDevice* self, char c ```
bool q_filedevice_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QFileDevice* self, char* c ```
bool q_filedevice_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QFileDevice* self ```
const char* q_filedevice_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QFileDevice* self ```
void q_filedevice_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QFileDevice* self, void (*slot)(QFileDevice*) ```
void q_filedevice_on_ready_read(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QFileDevice* self, int channel ```
void q_filedevice_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QFileDevice* self, void (*slot)(QFileDevice*, int) ```
void q_filedevice_on_channel_ready_read(void* self, void (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QFileDevice* self, long long bytes ```
void q_filedevice_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QFileDevice* self, void (*slot)(QFileDevice*, long long) ```
void q_filedevice_on_bytes_written(void* self, void (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QFileDevice* self, int channel, long long bytes ```
void q_filedevice_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QFileDevice* self, void (*slot)(QFileDevice*, int, long long) ```
void q_filedevice_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QFileDevice* self ```
void q_filedevice_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QFileDevice* self, void (*slot)(QFileDevice*) ```
void q_filedevice_on_about_to_close(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QFileDevice* self ```
void q_filedevice_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QFileDevice* self, void (*slot)(QFileDevice*) ```
void q_filedevice_on_read_channel_finished(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QFileDevice* self, long long maxlen ```
char* q_filedevice_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QFileDevice* self, QEvent* event ```
bool q_filedevice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QFileDevice* self, QObject* watched, QEvent* event ```
bool q_filedevice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFileDevice* self ```
const char* q_filedevice_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFileDevice* self, char* name ```
void q_filedevice_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFileDevice* self ```
bool q_filedevice_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFileDevice* self, bool b ```
bool q_filedevice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFileDevice* self ```
QThread* q_filedevice_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFileDevice* self, QThread* thread ```
bool q_filedevice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileDevice* self, int interval ```
int32_t q_filedevice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFileDevice* self, int id ```
void q_filedevice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFileDevice* self, enum Qt__TimerId id ```
void q_filedevice_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFileDevice* self ```
libqt_list /* of QObject* */ q_filedevice_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QFileDevice* self, QObject* parent ```
void q_filedevice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFileDevice* self, QObject* filterObj ```
void q_filedevice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFileDevice* self, QObject* obj ```
void q_filedevice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_filedevice_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileDevice* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_filedevice_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_filedevice_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_filedevice_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFileDevice* self ```
void q_filedevice_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFileDevice* self ```
void q_filedevice_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFileDevice* self, const char* name, QVariant* value ```
bool q_filedevice_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFileDevice* self, const char* name ```
QVariant* q_filedevice_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFileDevice* self ```
const char** q_filedevice_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFileDevice* self ```
QBindingStorage* q_filedevice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFileDevice* self ```
const QBindingStorage* q_filedevice_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileDevice* self ```
void q_filedevice_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileDevice* self, void (*slot)(QFileDevice*) ```
void q_filedevice_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QFileDevice* self ```
QObject* q_filedevice_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFileDevice* self, const char* classname ```
bool q_filedevice_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFileDevice* self ```
void q_filedevice_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFileDevice* self, QThread* thread, Disambiguated_t* param2 ```
bool q_filedevice_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileDevice* self, int interval, enum Qt__TimerType timerType ```
int32_t q_filedevice_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filedevice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileDevice* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filedevice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileDevice* self, QObject* param1 ```
void q_filedevice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileDevice* self, void (*slot)(QFileDevice*, QObject*) ```
void q_filedevice_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QFileDevice* self, void (*slot)(QFileDevice*, const char*) ```
void q_filedevice_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#dtor.QFileDevice)
///
/// Delete this object from C++ memory.
///
/// ``` QFileDevice* self ```
void q_filedevice_delete(void* self);

/// https://doc.qt.io/qt-6/qfiledevice.html#types

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

typedef enum {
    QFILEDEVICE_FILETIME_FILEACCESSTIME = 0,
    QFILEDEVICE_FILETIME_FILEBIRTHTIME = 1,
    QFILEDEVICE_FILETIME_FILEMETADATACHANGETIME = 2,
    QFILEDEVICE_FILETIME_FILEMODIFICATIONTIME = 3
} QFileDevice__FileTime;

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

typedef enum {
    QFILEDEVICE_FILEHANDLEFLAG_AUTOCLOSEHANDLE = 1,
    QFILEDEVICE_FILEHANDLEFLAG_DONTCLOSEHANDLE = 0
} QFileDevice__FileHandleFlag;

typedef enum {
    QFILEDEVICE_MEMORYMAPFLAG_NOOPTIONS = 0,
    QFILEDEVICE_MEMORYMAPFLAG_MAPPRIVATEOPTION = 1
} QFileDevice__MemoryMapFlag;

#endif

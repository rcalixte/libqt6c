#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQWAVEDECODER_H
#define SRC_MULTIMEDIAQT6C_LIBQWAVEDECODER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwavedecoder.html

/// q_wavedecoder_new constructs a new QWaveDecoder object.
///
/// @param device QIODevice*
QWaveDecoder* q_wavedecoder_new(void* device);

/// q_wavedecoder_new2 constructs a new QWaveDecoder object.
///
/// @param device QIODevice*
/// @param format QAudioFormat*
QWaveDecoder* q_wavedecoder_new2(void* device, void* format);

/// q_wavedecoder_new3 constructs a new QWaveDecoder object.
///
/// @param device QIODevice*
/// @param parent QObject*
QWaveDecoder* q_wavedecoder_new3(void* device, void* parent);

/// q_wavedecoder_new4 constructs a new QWaveDecoder object.
///
/// @param device QIODevice*
/// @param format QAudioFormat*
/// @param parent QObject*
QWaveDecoder* q_wavedecoder_new4(void* device, void* format, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWaveDecoder*
const QMetaObject* q_wavedecoder_meta_object(void* self);

/// @param self QWaveDecoder*
/// @param param1 const char*
void* q_wavedecoder_metacast(void* self, const char* param1);

/// @param self QWaveDecoder*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_wavedecoder_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback int32_t func(QWaveDecoder* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_wavedecoder_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWaveDecoder*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_wavedecoder_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_wavedecoder_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#audioFormat)
///
/// @param self QWaveDecoder*
QAudioFormat* q_wavedecoder_audio_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#getDevice)
///
/// @param self QWaveDecoder*
QIODevice* q_wavedecoder_get_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#duration)
///
/// @param self QWaveDecoder*
int32_t q_wavedecoder_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#headerLength)
///
long long q_wavedecoder_header_length();

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#open)
///
/// @param self QWaveDecoder*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
bool q_wavedecoder_open(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#open)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self, flag of enum QIODeviceBase__OpenModeFlag mode)
void q_wavedecoder_on_open(void* self, bool (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#open)
///
/// Base class method implementation
///
/// @param self QWaveDecoder*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
bool q_wavedecoder_qbase_open(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#close)
///
/// @param self QWaveDecoder*
void q_wavedecoder_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#close)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback void func()
void q_wavedecoder_on_close(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#close)
///
/// Base class method implementation
///
/// @param self QWaveDecoder*
void q_wavedecoder_qbase_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#seek)
///
/// @param self QWaveDecoder*
/// @param pos long long
bool q_wavedecoder_seek(void* self, long long pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#seek)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self, long long pos)
void q_wavedecoder_on_seek(void* self, bool (*callback)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#seek)
///
/// Base class method implementation
///
/// @param self QWaveDecoder*
/// @param pos long long
bool q_wavedecoder_qbase_seek(void* self, long long pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#pos)
///
/// @param self QWaveDecoder*
long long q_wavedecoder_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#pos)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback long long func()
void q_wavedecoder_on_pos(void* self, long long (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#pos)
///
/// Base class method implementation
///
/// @param self QWaveDecoder*
long long q_wavedecoder_qbase_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#size)
///
/// @param self QWaveDecoder*
long long q_wavedecoder_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#size)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback long long func()
void q_wavedecoder_on_size(void* self, long long (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#size)
///
/// Base class method implementation
///
/// @param self QWaveDecoder*
long long q_wavedecoder_qbase_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#isSequential)
///
/// @param self QWaveDecoder*
bool q_wavedecoder_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#isSequential)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback bool func()
void q_wavedecoder_on_is_sequential(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#isSequential)
///
/// Base class method implementation
///
/// @param self QWaveDecoder*
bool q_wavedecoder_qbase_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#bytesAvailable)
///
/// @param self QWaveDecoder*
long long q_wavedecoder_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#bytesAvailable)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback long long func()
void q_wavedecoder_on_bytes_available(void* self, long long (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#bytesAvailable)
///
/// Base class method implementation
///
/// @param self QWaveDecoder*
long long q_wavedecoder_qbase_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#formatKnown)
///
/// @param self QWaveDecoder*
void q_wavedecoder_format_known(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#formatKnown)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self)
void q_wavedecoder_on_format_known(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#parsingError)
///
/// @param self QWaveDecoder*
void q_wavedecoder_parsing_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#parsingError)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self)
void q_wavedecoder_on_parsing_error(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_wavedecoder_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_wavedecoder_tr3(const char* s, const char* c, int n);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QWaveDecoder*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
int64_t q_wavedecoder_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QWaveDecoder*
/// @param enabled bool
void q_wavedecoder_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QWaveDecoder*
bool q_wavedecoder_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QWaveDecoder*
bool q_wavedecoder_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QWaveDecoder*
bool q_wavedecoder_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QWaveDecoder*
bool q_wavedecoder_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QWaveDecoder*
int32_t q_wavedecoder_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QWaveDecoder*
int32_t q_wavedecoder_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QWaveDecoder*
int32_t q_wavedecoder_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QWaveDecoder*
/// @param channel int
void q_wavedecoder_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QWaveDecoder*
int32_t q_wavedecoder_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QWaveDecoder*
/// @param channel int
void q_wavedecoder_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QWaveDecoder*
/// @param data char*
/// @param maxlen long long
long long q_wavedecoder_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWaveDecoder*
/// @param maxlen long long
char* q_wavedecoder_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWaveDecoder*
char* q_wavedecoder_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QWaveDecoder*
/// @param data char*
/// @param maxlen long long
long long q_wavedecoder_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWaveDecoder*
char* q_wavedecoder_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QWaveDecoder*
void q_wavedecoder_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QWaveDecoder*
void q_wavedecoder_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QWaveDecoder*
void q_wavedecoder_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QWaveDecoder*
bool q_wavedecoder_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QWaveDecoder*
/// @param data const char*
/// @param lenVal long long
long long q_wavedecoder_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QWaveDecoder*
/// @param data const char*
long long q_wavedecoder_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QWaveDecoder*
/// @param data const char*
long long q_wavedecoder_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QWaveDecoder*
/// @param data char*
/// @param maxlen long long
long long q_wavedecoder_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWaveDecoder*
/// @param maxlen long long
char* q_wavedecoder_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QWaveDecoder*
/// @param maxSize long long
long long q_wavedecoder_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QWaveDecoder*
/// @param c char
void q_wavedecoder_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QWaveDecoder*
/// @param c char
bool q_wavedecoder_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QWaveDecoder*
/// @param c char*
bool q_wavedecoder_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWaveDecoder*
const char* q_wavedecoder_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QWaveDecoder*
void q_wavedecoder_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self)
void q_wavedecoder_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QWaveDecoder*
/// @param channel int
void q_wavedecoder_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, int channel)
void q_wavedecoder_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QWaveDecoder*
/// @param bytes long long
void q_wavedecoder_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, long long bytes)
void q_wavedecoder_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QWaveDecoder*
/// @param channel int
/// @param bytes long long
void q_wavedecoder_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, int channel, long long bytes)
void q_wavedecoder_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QWaveDecoder*
void q_wavedecoder_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self)
void q_wavedecoder_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QWaveDecoder*
void q_wavedecoder_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self)
void q_wavedecoder_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWaveDecoder*
/// @param maxlen long long
char* q_wavedecoder_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWaveDecoder*
const char* q_wavedecoder_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWaveDecoder*
/// @param name char*
void q_wavedecoder_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWaveDecoder*
bool q_wavedecoder_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWaveDecoder*
bool q_wavedecoder_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWaveDecoder*
bool q_wavedecoder_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWaveDecoder*
bool q_wavedecoder_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWaveDecoder*
/// @param b bool
bool q_wavedecoder_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWaveDecoder*
QThread* q_wavedecoder_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWaveDecoder*
/// @param thread QThread*
bool q_wavedecoder_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWaveDecoder*
/// @param interval int
int32_t q_wavedecoder_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWaveDecoder*
/// @param id int
void q_wavedecoder_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWaveDecoder*
/// @param id enum Qt__TimerId
void q_wavedecoder_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWaveDecoder*
libqt_list /* of QObject* */ q_wavedecoder_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWaveDecoder*
/// @param parent QObject*
void q_wavedecoder_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWaveDecoder*
/// @param filterObj QObject*
void q_wavedecoder_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWaveDecoder*
/// @param obj QObject*
void q_wavedecoder_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_wavedecoder_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWaveDecoder*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_wavedecoder_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_wavedecoder_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_wavedecoder_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWaveDecoder*
void q_wavedecoder_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWaveDecoder*
void q_wavedecoder_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWaveDecoder*
/// @param name const char*
/// @param value QVariant*
bool q_wavedecoder_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWaveDecoder*
/// @param name const char*
QVariant* q_wavedecoder_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWaveDecoder*
const char** q_wavedecoder_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWaveDecoder*
QBindingStorage* q_wavedecoder_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWaveDecoder*
const QBindingStorage* q_wavedecoder_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWaveDecoder*
void q_wavedecoder_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self)
void q_wavedecoder_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWaveDecoder*
QObject* q_wavedecoder_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWaveDecoder*
/// @param classname const char*
bool q_wavedecoder_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWaveDecoder*
void q_wavedecoder_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWaveDecoder*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_wavedecoder_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWaveDecoder*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_wavedecoder_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_wavedecoder_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWaveDecoder*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_wavedecoder_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWaveDecoder*
/// @param param1 QObject*
void q_wavedecoder_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, QObject* param1)
void q_wavedecoder_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
bool q_wavedecoder_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
bool q_wavedecoder_qbase_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func()
void q_wavedecoder_on_at_end(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
bool q_wavedecoder_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
bool q_wavedecoder_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func()
void q_wavedecoder_on_reset(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
long long q_wavedecoder_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
long long q_wavedecoder_qbase_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback long long func()
void q_wavedecoder_on_bytes_to_write(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
bool q_wavedecoder_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
bool q_wavedecoder_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func()
void q_wavedecoder_on_can_read_line(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param msecs int
bool q_wavedecoder_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param msecs int
bool q_wavedecoder_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self, int msecs)
void q_wavedecoder_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param msecs int
bool q_wavedecoder_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param msecs int
bool q_wavedecoder_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self, int msecs)
void q_wavedecoder_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param data char*
/// @param maxlen long long
long long q_wavedecoder_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param data char*
/// @param maxlen long long
long long q_wavedecoder_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback long long func(QWaveDecoder* self, char* data, long long maxlen)
void q_wavedecoder_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param maxSize long long
long long q_wavedecoder_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param maxSize long long
long long q_wavedecoder_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback long long func(QWaveDecoder* self, long long maxSize)
void q_wavedecoder_on_skip_data(void* self, long long (*callback)(void*, long long));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QEvent*
bool q_wavedecoder_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QEvent*
bool q_wavedecoder_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self, QEvent* event)
void q_wavedecoder_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param watched QObject*
/// @param event QEvent*
bool q_wavedecoder_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param watched QObject*
/// @param event QEvent*
bool q_wavedecoder_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self, QObject* watched, QEvent* event)
void q_wavedecoder_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QTimerEvent*
void q_wavedecoder_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QTimerEvent*
void q_wavedecoder_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, QTimerEvent* event)
void q_wavedecoder_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QChildEvent*
void q_wavedecoder_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QChildEvent*
void q_wavedecoder_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, QChildEvent* event)
void q_wavedecoder_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QEvent*
void q_wavedecoder_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QEvent*
void q_wavedecoder_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, QEvent* event)
void q_wavedecoder_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param signal QMetaMethod*
void q_wavedecoder_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param signal QMetaMethod*
void q_wavedecoder_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, QMetaMethod* signal)
void q_wavedecoder_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param signal QMetaMethod*
void q_wavedecoder_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param signal QMetaMethod*
void q_wavedecoder_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, QMetaMethod* signal)
void q_wavedecoder_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_wavedecoder_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_wavedecoder_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
void q_wavedecoder_on_set_open_mode(void* self, void (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param errorString const char*
void q_wavedecoder_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param errorString const char*
void q_wavedecoder_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, const char* errorString)
void q_wavedecoder_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
QObject* q_wavedecoder_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
QObject* q_wavedecoder_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback QObject* func()
void q_wavedecoder_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
int32_t q_wavedecoder_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
int32_t q_wavedecoder_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback int32_t func()
void q_wavedecoder_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param signal const char*
int32_t q_wavedecoder_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param signal const char*
int32_t q_wavedecoder_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback int32_t func(QWaveDecoder* self, const char* signal)
void q_wavedecoder_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param signal QMetaMethod*
bool q_wavedecoder_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param signal QMetaMethod*
bool q_wavedecoder_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self, QMetaMethod* signal)
void q_wavedecoder_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, const char* objectName)
void q_wavedecoder_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#dtor.QWaveDecoder)
///
/// Delete this object from C++ memory.
///
/// @param self QWaveDecoder*
void q_wavedecoder_delete(void* self);

#endif

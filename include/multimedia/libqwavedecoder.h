#pragma once
#ifndef MULTIMEDIA_LIBQWAVEDECODER_H
#define MULTIMEDIA_LIBQWAVEDECODER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html)

/// q_wavedecoder_new constructs a new QWaveDecoder object.
///
/// @param device QIODevice*
///
QWaveDecoder* q_wavedecoder_new(void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html)

/// q_wavedecoder_new2 constructs a new QWaveDecoder object.
///
/// @param device QIODevice*
/// @param format QAudioFormat*
///
QWaveDecoder* q_wavedecoder_new2(void* device, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html)

/// q_wavedecoder_new3 constructs a new QWaveDecoder object.
///
/// @param device QIODevice*
/// @param parent QObject*
///
QWaveDecoder* q_wavedecoder_new3(void* device, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html)

/// q_wavedecoder_new4 constructs a new QWaveDecoder object.
///
/// @param device QIODevice*
/// @param format QAudioFormat*
/// @param parent QObject*
///
QWaveDecoder* q_wavedecoder_new4(void* device, const void* format, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QWaveDecoder*
///
const QMetaObject* q_wavedecoder_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback const QMetaObject* func(const QWaveDecoder* self)
///
void q_wavedecoder_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QWaveDecoder*
///
const QMetaObject* q_wavedecoder_super_meta_object(const void* self);

/// @param self QWaveDecoder*
/// @param param1 const char*
///
void* q_wavedecoder_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback void* func(QWaveDecoder* self, const char* param1)
///
void q_wavedecoder_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QWaveDecoder*
/// @param param1 const char*
///
void* q_wavedecoder_super_metacast(void* self, const char* param1);

/// @param self QWaveDecoder*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_wavedecoder_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback int32_t func(QWaveDecoder* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_wavedecoder_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWaveDecoder*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_wavedecoder_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_wavedecoder_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#audioFormat)
///
/// @param self const QWaveDecoder*
///
QAudioFormat* q_wavedecoder_audio_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#getDevice)
///
/// @param self QWaveDecoder*
///
QIODevice* q_wavedecoder_get_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#duration)
///
/// @param self const QWaveDecoder*
///
int32_t q_wavedecoder_duration(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#headerLength)
///
int64_t q_wavedecoder_header_length();

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#open)
///
/// @param self QWaveDecoder*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_wavedecoder_open(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#open)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void q_wavedecoder_on_open(void* self, bool (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#open)
///
/// Base class method implementation
///
/// @param self QWaveDecoder*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_wavedecoder_super_open(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#close)
///
/// @param self QWaveDecoder*
///
void q_wavedecoder_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#close)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self)
///
void q_wavedecoder_on_close(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#close)
///
/// Base class method implementation
///
/// @param self QWaveDecoder*
///
void q_wavedecoder_super_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#seek)
///
/// @param self QWaveDecoder*
/// @param pos int64_t
///
bool q_wavedecoder_seek(void* self, int64_t pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#seek)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self, int64_t pos)
///
void q_wavedecoder_on_seek(void* self, bool (*callback)(void*, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#seek)
///
/// Base class method implementation
///
/// @param self QWaveDecoder*
/// @param pos int64_t
///
bool q_wavedecoder_super_seek(void* self, int64_t pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#pos)
///
/// @param self const QWaveDecoder*
///
int64_t q_wavedecoder_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#pos)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback int64_t func(const QWaveDecoder* self)
///
void q_wavedecoder_on_pos(void* self, int64_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#pos)
///
/// Base class method implementation
///
/// @param self const QWaveDecoder*
///
int64_t q_wavedecoder_super_pos(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#setIODevice)
///
/// @param self QWaveDecoder*
/// @param device QIODevice*
///
void q_wavedecoder_set_i_o_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#size)
///
/// @param self const QWaveDecoder*
///
int64_t q_wavedecoder_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#size)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback int64_t func(const QWaveDecoder* self)
///
void q_wavedecoder_on_size(void* self, int64_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#size)
///
/// Base class method implementation
///
/// @param self const QWaveDecoder*
///
int64_t q_wavedecoder_super_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#isSequential)
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_is_sequential(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#isSequential)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback bool func(const QWaveDecoder* self)
///
void q_wavedecoder_on_is_sequential(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#isSequential)
///
/// Base class method implementation
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_super_is_sequential(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#bytesAvailable)
///
/// @param self const QWaveDecoder*
///
int64_t q_wavedecoder_bytes_available(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#bytesAvailable)
///
/// Allows for overriding the related default method
///
/// @param self QWaveDecoder*
/// @param callback int64_t func(const QWaveDecoder* self)
///
void q_wavedecoder_on_bytes_available(void* self, int64_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#bytesAvailable)
///
/// Base class method implementation
///
/// @param self const QWaveDecoder*
///
int64_t q_wavedecoder_super_bytes_available(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#formatKnown)
///
/// @param self QWaveDecoder*
///
void q_wavedecoder_format_known(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#formatKnown)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self)
///
void q_wavedecoder_on_format_known(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#parsingError)
///
/// @param self QWaveDecoder*
///
void q_wavedecoder_parsing_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#parsingError)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self)
///
void q_wavedecoder_on_parsing_error(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_wavedecoder_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_wavedecoder_tr3(const char* s, const char* c, int n);

/// Inherited from QIODevice
///
/// Upcasts to a QIODeviceBase object
///
/// @param self const QWaveDecoder*
///
QIODeviceBase* q_wavedecoder_as_q_i_o_device_base(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self const QWaveDecoder*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_wavedecoder_open_mode(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QWaveDecoder*
/// @param enabled bool
///
void q_wavedecoder_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_is_text_mode_enabled(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_is_open(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_is_readable(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_is_writable(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self const QWaveDecoder*
///
int32_t q_wavedecoder_read_channel_count(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self const QWaveDecoder*
///
int32_t q_wavedecoder_write_channel_count(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self const QWaveDecoder*
///
int32_t q_wavedecoder_current_read_channel(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QWaveDecoder*
/// @param channel int
///
void q_wavedecoder_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self const QWaveDecoder*
///
int32_t q_wavedecoder_current_write_channel(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QWaveDecoder*
/// @param channel int
///
void q_wavedecoder_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QWaveDecoder*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_wavedecoder_read(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWaveDecoder*
/// @param maxlen int64_t
///
const char* q_wavedecoder_read2(void* self, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWaveDecoder*
///
const char* q_wavedecoder_read_all(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QWaveDecoder*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_wavedecoder_read_line(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWaveDecoder*
///
const char* q_wavedecoder_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QWaveDecoder*
///
void q_wavedecoder_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QWaveDecoder*
///
void q_wavedecoder_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QWaveDecoder*
///
void q_wavedecoder_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_is_transaction_started(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QWaveDecoder*
/// @param data const char*
/// @param lenVal int64_t
///
int64_t q_wavedecoder_write(void* self, const char* data, int64_t lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QWaveDecoder*
/// @param data const char*
///
int64_t q_wavedecoder_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QWaveDecoder*
/// @param data const char*
///
int64_t q_wavedecoder_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QWaveDecoder*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_wavedecoder_peek(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWaveDecoder*
/// @param maxlen int64_t
///
const char* q_wavedecoder_peek2(void* self, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QWaveDecoder*
/// @param maxSize int64_t
///
int64_t q_wavedecoder_skip(void* self, int64_t maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QWaveDecoder*
/// @param c char
///
void q_wavedecoder_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QWaveDecoder*
/// @param c char
///
bool q_wavedecoder_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QWaveDecoder*
/// @param c char*
///
bool q_wavedecoder_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWaveDecoder*
///
const char* q_wavedecoder_error_string(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QWaveDecoder*
///
void q_wavedecoder_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self)
///
void q_wavedecoder_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QWaveDecoder*
/// @param channel int
///
void q_wavedecoder_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, int channel)
///
void q_wavedecoder_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QWaveDecoder*
/// @param bytes int64_t
///
void q_wavedecoder_bytes_written(void* self, int64_t bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, int64_t bytes)
///
void q_wavedecoder_on_bytes_written(void* self, void (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QWaveDecoder*
/// @param channel int
/// @param bytes int64_t
///
void q_wavedecoder_channel_bytes_written(void* self, int channel, int64_t bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, int channel, int64_t bytes)
///
void q_wavedecoder_on_channel_bytes_written(void* self, void (*callback)(void*, int, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QWaveDecoder*
///
void q_wavedecoder_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self)
///
void q_wavedecoder_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QWaveDecoder*
///
void q_wavedecoder_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self)
///
void q_wavedecoder_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWaveDecoder*
/// @param maxlen int64_t
///
const char* q_wavedecoder_read_line1(void* self, int64_t maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWaveDecoder*
///
const char* q_wavedecoder_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWaveDecoder*
/// @param name const char*
///
void q_wavedecoder_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWaveDecoder*
/// @param b bool
///
bool q_wavedecoder_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QWaveDecoder*
///
QThread* q_wavedecoder_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWaveDecoder*
/// @param thread QThread*
///
bool q_wavedecoder_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWaveDecoder*
/// @param interval int
///
int32_t q_wavedecoder_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWaveDecoder*
/// @param time int64_t of nanoseconds
///
int32_t q_wavedecoder_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWaveDecoder*
/// @param id int
///
void q_wavedecoder_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWaveDecoder*
/// @param id enum Qt__TimerId
///
void q_wavedecoder_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QWaveDecoder*
///
/// @return libqt_list of QObject*
///
libqt_list q_wavedecoder_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWaveDecoder*
/// @param parent QObject*
///
void q_wavedecoder_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWaveDecoder*
/// @param filterObj QObject*
///
void q_wavedecoder_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWaveDecoder*
/// @param obj QObject*
///
void q_wavedecoder_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_wavedecoder_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_wavedecoder_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWaveDecoder*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_wavedecoder_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_wavedecoder_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_wavedecoder_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWaveDecoder*
/// @param receiver QObject*
///
bool q_wavedecoder_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_wavedecoder_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QWaveDecoder*
///
void q_wavedecoder_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QWaveDecoder*
///
void q_wavedecoder_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWaveDecoder*
/// @param name const char*
/// @param value QVariant*
///
bool q_wavedecoder_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QWaveDecoder*
/// @param name const char*
///
QVariant* q_wavedecoder_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QWaveDecoder*
///
const char** q_wavedecoder_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWaveDecoder*
///
QBindingStorage* q_wavedecoder_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QWaveDecoder*
///
const QBindingStorage* q_wavedecoder_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWaveDecoder*
///
void q_wavedecoder_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self)
///
void q_wavedecoder_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QWaveDecoder*
///
QObject* q_wavedecoder_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QWaveDecoder*
/// @param classname const char*
///
bool q_wavedecoder_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWaveDecoder*
///
void q_wavedecoder_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWaveDecoder*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_wavedecoder_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWaveDecoder*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_wavedecoder_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_wavedecoder_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_wavedecoder_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QWaveDecoder*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_wavedecoder_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWaveDecoder*
/// @param signal const char*
///
bool q_wavedecoder_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWaveDecoder*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_wavedecoder_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWaveDecoder*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_wavedecoder_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QWaveDecoder*
/// @param receiver QObject*
/// @param member const char*
///
bool q_wavedecoder_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWaveDecoder*
/// @param param1 QObject*
///
void q_wavedecoder_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, QObject* param1)
///
void q_wavedecoder_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_at_end(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_super_at_end(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self)
///
void q_wavedecoder_on_at_end(void* self, bool (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
///
bool q_wavedecoder_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
///
bool q_wavedecoder_super_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self)
///
void q_wavedecoder_on_reset(void* self, bool (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWaveDecoder*
///
int64_t q_wavedecoder_bytes_to_write(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWaveDecoder*
///
int64_t q_wavedecoder_super_bytes_to_write(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback int64_t func(QWaveDecoder* self)
///
void q_wavedecoder_on_bytes_to_write(void* self, int64_t (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_can_read_line(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWaveDecoder*
///
bool q_wavedecoder_super_can_read_line(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self)
///
void q_wavedecoder_on_can_read_line(void* self, bool (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param msecs int
///
bool q_wavedecoder_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param msecs int
///
bool q_wavedecoder_super_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self, int msecs)
///
void q_wavedecoder_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param msecs int
///
bool q_wavedecoder_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param msecs int
///
bool q_wavedecoder_super_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self, int msecs)
///
void q_wavedecoder_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_wavedecoder_read_line_data(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_wavedecoder_super_read_line_data(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback int64_t func(QWaveDecoder* self, char* data, int64_t maxlen)
///
void q_wavedecoder_on_read_line_data(void* self, int64_t (*callback)(void*, char*, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param maxSize int64_t
///
int64_t q_wavedecoder_skip_data(void* self, int64_t maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param maxSize int64_t
///
int64_t q_wavedecoder_super_skip_data(void* self, int64_t maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback int64_t func(QWaveDecoder* self, int64_t maxSize)
///
void q_wavedecoder_on_skip_data(void* self, int64_t (*callback)(void*, int64_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QEvent*
///
bool q_wavedecoder_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QEvent*
///
bool q_wavedecoder_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self, QEvent* event)
///
void q_wavedecoder_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_wavedecoder_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_wavedecoder_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self, QObject* watched, QEvent* event)
///
void q_wavedecoder_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QTimerEvent*
///
void q_wavedecoder_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QTimerEvent*
///
void q_wavedecoder_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, QTimerEvent* event)
///
void q_wavedecoder_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QChildEvent*
///
void q_wavedecoder_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QChildEvent*
///
void q_wavedecoder_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, QChildEvent* event)
///
void q_wavedecoder_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QEvent*
///
void q_wavedecoder_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param event QEvent*
///
void q_wavedecoder_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, QEvent* event)
///
void q_wavedecoder_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param signal QMetaMethod*
///
void q_wavedecoder_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param signal QMetaMethod*
///
void q_wavedecoder_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, QMetaMethod* signal)
///
void q_wavedecoder_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param signal QMetaMethod*
///
void q_wavedecoder_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param signal QMetaMethod*
///
void q_wavedecoder_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, QMetaMethod* signal)
///
void q_wavedecoder_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_wavedecoder_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_wavedecoder_super_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_wavedecoder_on_set_open_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWaveDecoder*
/// @param errorString const char*
///
void q_wavedecoder_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param errorString const char*
///
void q_wavedecoder_super_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, const char* errorString)
///
void q_wavedecoder_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWaveDecoder*
///
QObject* q_wavedecoder_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWaveDecoder*
///
QObject* q_wavedecoder_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback QObject* func(QWaveDecoder* self)
///
void q_wavedecoder_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWaveDecoder*
///
int32_t q_wavedecoder_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWaveDecoder*
///
int32_t q_wavedecoder_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback int32_t func(QWaveDecoder* self)
///
void q_wavedecoder_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWaveDecoder*
/// @param signal const char*
///
int32_t q_wavedecoder_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWaveDecoder*
/// @param signal const char*
///
int32_t q_wavedecoder_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback int32_t func(QWaveDecoder* self, const char* signal)
///
void q_wavedecoder_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWaveDecoder*
/// @param signal QMetaMethod*
///
bool q_wavedecoder_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWaveDecoder*
/// @param signal QMetaMethod*
///
bool q_wavedecoder_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWaveDecoder*
/// @param callback bool func(QWaveDecoder* self, QMetaMethod* signal)
///
void q_wavedecoder_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWaveDecoder*
/// @param callback void func(QWaveDecoder* self, const char* objectName)
///
void q_wavedecoder_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwavedecoder.html#dtor.QWaveDecoder)
///
/// Delete this object from C++ memory.
///
/// @param self QWaveDecoder*
///
void q_wavedecoder_delete(void* self);

#endif

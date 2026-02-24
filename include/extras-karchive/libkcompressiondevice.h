#pragma once
#ifndef SRC_EXTRAS_KARCHIVE_QT6C_LIBKCOMPRESSIONDEVICE_H
#define SRC_EXTRAS_KARCHIVE_QT6C_LIBKCOMPRESSIONDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html)

/// k_compressiondevice_new constructs a new KCompressionDevice object.
///
/// @param inputDevice QIODevice*
/// @param autoDeleteInputDevice bool
/// @param type enum KCompressionDevice__CompressionType
///
KCompressionDevice* k_compressiondevice_new(void* inputDevice, bool autoDeleteInputDevice, int32_t type);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html)

/// k_compressiondevice_new2 constructs a new KCompressionDevice object.
///
/// @param fileName const char*
/// @param type enum KCompressionDevice__CompressionType
///
KCompressionDevice* k_compressiondevice_new2(const char* fileName, int32_t type);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html)

/// k_compressiondevice_new3 constructs a new KCompressionDevice object.
///
/// @param fileName const char*
///
KCompressionDevice* k_compressiondevice_new3(const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KCompressionDevice*
///
const QMetaObject* k_compressiondevice_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KCompressionDevice*
/// @param callback const QMetaObject* func()
///
void k_compressiondevice_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_compressiondevice_super_meta_object` instead
///
#define k_compressiondevice_qbase_meta_object k_compressiondevice_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KCompressionDevice*
///
const QMetaObject* k_compressiondevice_super_meta_object(void* self);

/// @param self KCompressionDevice*
/// @param param1 const char*
///
void* k_compressiondevice_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KCompressionDevice*
/// @param callback void* func(KCompressionDevice* self, const char* param1)
///
void k_compressiondevice_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_compressiondevice_super_metacast` instead
///
#define k_compressiondevice_qbase_metacast k_compressiondevice_super_metacast

/// Base class method implementation
///
/// @param self KCompressionDevice*
/// @param param1 const char*
///
void* k_compressiondevice_super_metacast(void* self, const char* param1);

/// @param self KCompressionDevice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_compressiondevice_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCompressionDevice*
/// @param callback int32_t func(KCompressionDevice* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_compressiondevice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_compressiondevice_super_metacall` instead
///
#define k_compressiondevice_qbase_metacall k_compressiondevice_super_metacall

/// Base class method implementation
///
/// @param self KCompressionDevice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_compressiondevice_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_compressiondevice_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#compressionType)
///
/// @param self KCompressionDevice*
///
/// @return enum KCompressionDevice__CompressionType
///
int32_t k_compressiondevice_compression_type(void* self);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#open)
///
/// @param self KCompressionDevice*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_compressiondevice_open(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#open)
///
/// Allows for overriding the related default method
///
/// @param self KCompressionDevice*
/// @param callback bool func(KCompressionDevice* self, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void k_compressiondevice_on_open(void* self, bool (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `k_compressiondevice_super_open` instead
///
#define k_compressiondevice_qbase_open k_compressiondevice_super_open

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#open)
///
/// Base class method implementation
///
/// @param self KCompressionDevice*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool k_compressiondevice_super_open(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#close)
///
/// @param self KCompressionDevice*
///
void k_compressiondevice_close(void* self);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#close)
///
/// Allows for overriding the related default method
///
/// @param self KCompressionDevice*
/// @param callback void func()
///
void k_compressiondevice_on_close(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_compressiondevice_super_close` instead
///
#define k_compressiondevice_qbase_close k_compressiondevice_super_close

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#close)
///
/// Base class method implementation
///
/// @param self KCompressionDevice*
///
void k_compressiondevice_super_close(void* self);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#setOrigFileName)
///
/// @param self KCompressionDevice*
/// @param fileName char*
///
void k_compressiondevice_set_orig_file_name(void* self, char* fileName);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#setSkipHeaders)
///
/// @param self KCompressionDevice*
///
void k_compressiondevice_set_skip_headers(void* self);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#seek)
///
/// @param self KCompressionDevice*
/// @param param1 long long
///
bool k_compressiondevice_seek(void* self, long long param1);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#seek)
///
/// Allows for overriding the related default method
///
/// @param self KCompressionDevice*
/// @param callback bool func(KCompressionDevice* self, long long param1)
///
void k_compressiondevice_on_seek(void* self, bool (*callback)(void*, long long));

/// @warning DEPRECATED: Use `k_compressiondevice_super_seek` instead
///
#define k_compressiondevice_qbase_seek k_compressiondevice_super_seek

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#seek)
///
/// Base class method implementation
///
/// @param self KCompressionDevice*
/// @param param1 long long
///
bool k_compressiondevice_super_seek(void* self, long long param1);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#atEnd)
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_at_end(void* self);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#atEnd)
///
/// Allows for overriding the related default method
///
/// @param self KCompressionDevice*
/// @param callback bool func()
///
void k_compressiondevice_on_at_end(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_compressiondevice_super_at_end` instead
///
#define k_compressiondevice_qbase_at_end k_compressiondevice_super_at_end

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#atEnd)
///
/// Base class method implementation
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_super_at_end(void* self);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#filterForCompressionType)
///
/// @param type enum KCompressionDevice__CompressionType
///
KFilterBase* k_compressiondevice_filter_for_compression_type(int32_t type);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#compressionTypeForMimeType)
///
/// @param mimetype const char*
///
/// @return enum KCompressionDevice__CompressionType
///
int32_t k_compressiondevice_compression_type_for_mime_type(const char* mimetype);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#error)
///
/// @param self KCompressionDevice*
///
/// @return enum QFileDevice__FileError
///
int32_t k_compressiondevice_error(void* self);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#readData)
///
/// @param self KCompressionDevice*
/// @param data char*
/// @param maxlen long long
///
long long k_compressiondevice_read_data(void* self, char* data, long long maxlen);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#readData)
///
/// Allows for overriding the related default method
///
/// @param self KCompressionDevice*
/// @param callback long long func(KCompressionDevice* self, char* data, long long maxlen)
///
void k_compressiondevice_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// @warning DEPRECATED: Use `k_compressiondevice_super_read_data` instead
///
#define k_compressiondevice_qbase_read_data k_compressiondevice_super_read_data

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#readData)
///
/// Base class method implementation
///
/// @param self KCompressionDevice*
/// @param data char*
/// @param maxlen long long
///
long long k_compressiondevice_super_read_data(void* self, char* data, long long maxlen);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#writeData)
///
/// @param self KCompressionDevice*
/// @param data const char*
/// @param lenVal long long
///
long long k_compressiondevice_write_data(void* self, const char* data, long long lenVal);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#writeData)
///
/// Allows for overriding the related default method
///
/// @param self KCompressionDevice*
/// @param callback long long func(KCompressionDevice* self, const char* data, long long lenVal)
///
void k_compressiondevice_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// @warning DEPRECATED: Use `k_compressiondevice_super_write_data` instead
///
#define k_compressiondevice_qbase_write_data k_compressiondevice_super_write_data

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#writeData)
///
/// Base class method implementation
///
/// @param self KCompressionDevice*
/// @param data const char*
/// @param lenVal long long
///
long long k_compressiondevice_super_write_data(void* self, const char* data, long long lenVal);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#filterBase)
///
/// @param self KCompressionDevice*
///
KFilterBase* k_compressiondevice_filter_base(void* self);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#filterBase)
///
/// Allows for overriding the related default method
///
/// @param self KCompressionDevice*
/// @param callback KFilterBase* func()
///
void k_compressiondevice_on_filter_base(void* self, KFilterBase* (*callback)());

/// @warning DEPRECATED: Use `k_compressiondevice_super_filter_base` instead
///
#define k_compressiondevice_qbase_filter_base k_compressiondevice_super_filter_base

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#filterBase)
///
/// Base class method implementation
///
/// @param self KCompressionDevice*
///
KFilterBase* k_compressiondevice_super_filter_base(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_compressiondevice_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_compressiondevice_tr3(const char* s, const char* c, int n);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self KCompressionDevice*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t k_compressiondevice_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self KCompressionDevice*
/// @param enabled bool
///
void k_compressiondevice_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_is_open(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self KCompressionDevice*
///
int32_t k_compressiondevice_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self KCompressionDevice*
///
int32_t k_compressiondevice_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self KCompressionDevice*
///
int32_t k_compressiondevice_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self KCompressionDevice*
/// @param channel int
///
void k_compressiondevice_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self KCompressionDevice*
///
int32_t k_compressiondevice_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self KCompressionDevice*
/// @param channel int
///
void k_compressiondevice_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self KCompressionDevice*
/// @param data char*
/// @param maxlen long long
///
long long k_compressiondevice_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCompressionDevice*
/// @param maxlen long long
///
char* k_compressiondevice_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCompressionDevice*
///
char* k_compressiondevice_read_all(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self KCompressionDevice*
/// @param data char*
/// @param maxlen long long
///
long long k_compressiondevice_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCompressionDevice*
///
char* k_compressiondevice_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self KCompressionDevice*
///
void k_compressiondevice_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self KCompressionDevice*
///
void k_compressiondevice_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self KCompressionDevice*
///
void k_compressiondevice_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self KCompressionDevice*
/// @param data const char*
/// @param lenVal long long
///
long long k_compressiondevice_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self KCompressionDevice*
/// @param data const char*
///
long long k_compressiondevice_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self KCompressionDevice*
/// @param data char*
///
long long k_compressiondevice_write3(void* self, char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self KCompressionDevice*
/// @param data char*
/// @param maxlen long long
///
long long k_compressiondevice_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCompressionDevice*
/// @param maxlen long long
///
char* k_compressiondevice_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self KCompressionDevice*
/// @param maxSize long long
///
long long k_compressiondevice_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self KCompressionDevice*
/// @param c char
///
void k_compressiondevice_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self KCompressionDevice*
/// @param c char
///
bool k_compressiondevice_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self KCompressionDevice*
/// @param c char*
///
bool k_compressiondevice_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCompressionDevice*
///
const char* k_compressiondevice_error_string(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self KCompressionDevice*
///
void k_compressiondevice_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self)
///
void k_compressiondevice_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self KCompressionDevice*
/// @param channel int
///
void k_compressiondevice_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self, int channel)
///
void k_compressiondevice_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self KCompressionDevice*
/// @param bytes long long
///
void k_compressiondevice_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self, long long bytes)
///
void k_compressiondevice_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self KCompressionDevice*
/// @param channel int
/// @param bytes long long
///
void k_compressiondevice_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self, int channel, long long bytes)
///
void k_compressiondevice_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self KCompressionDevice*
///
void k_compressiondevice_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self)
///
void k_compressiondevice_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self KCompressionDevice*
///
void k_compressiondevice_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self)
///
void k_compressiondevice_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCompressionDevice*
/// @param maxlen long long
///
char* k_compressiondevice_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCompressionDevice*
///
const char* k_compressiondevice_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCompressionDevice*
/// @param name const char*
///
void k_compressiondevice_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCompressionDevice*
/// @param b bool
///
bool k_compressiondevice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KCompressionDevice*
///
QThread* k_compressiondevice_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCompressionDevice*
/// @param thread QThread*
///
bool k_compressiondevice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCompressionDevice*
/// @param interval int
///
int32_t k_compressiondevice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCompressionDevice*
/// @param time int64_t of nanoseconds
///
int32_t k_compressiondevice_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCompressionDevice*
/// @param id int
///
void k_compressiondevice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCompressionDevice*
/// @param id enum Qt__TimerId
///
void k_compressiondevice_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KCompressionDevice*
///
/// @return libqt_list of QObject*
///
libqt_list k_compressiondevice_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KCompressionDevice*
/// @param parent QObject*
///
void k_compressiondevice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCompressionDevice*
/// @param filterObj QObject*
///
void k_compressiondevice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCompressionDevice*
/// @param obj QObject*
///
void k_compressiondevice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_compressiondevice_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_compressiondevice_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCompressionDevice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_compressiondevice_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_compressiondevice_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_compressiondevice_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCompressionDevice*
/// @param receiver QObject*
///
bool k_compressiondevice_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_compressiondevice_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KCompressionDevice*
///
void k_compressiondevice_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KCompressionDevice*
///
void k_compressiondevice_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCompressionDevice*
/// @param name const char*
/// @param value QVariant*
///
bool k_compressiondevice_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KCompressionDevice*
/// @param name const char*
///
QVariant* k_compressiondevice_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCompressionDevice*
///
const char** k_compressiondevice_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCompressionDevice*
///
QBindingStorage* k_compressiondevice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCompressionDevice*
///
const QBindingStorage* k_compressiondevice_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompressionDevice*
///
void k_compressiondevice_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self)
///
void k_compressiondevice_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KCompressionDevice*
///
QObject* k_compressiondevice_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KCompressionDevice*
/// @param classname const char*
///
bool k_compressiondevice_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCompressionDevice*
///
void k_compressiondevice_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCompressionDevice*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_compressiondevice_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCompressionDevice*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_compressiondevice_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_compressiondevice_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_compressiondevice_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCompressionDevice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_compressiondevice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCompressionDevice*
/// @param signal const char*
///
bool k_compressiondevice_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCompressionDevice*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_compressiondevice_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCompressionDevice*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_compressiondevice_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCompressionDevice*
/// @param receiver QObject*
/// @param member const char*
///
bool k_compressiondevice_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompressionDevice*
/// @param param1 QObject*
///
void k_compressiondevice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self, QObject* param1)
///
void k_compressiondevice_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_is_sequential(void* self);

/// @warning DEPRECATED: Use `k_compressiondevice_super_is_sequential` instead
///
#define k_compressiondevice_qbase_is_sequential k_compressiondevice_super_is_sequential

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_super_is_sequential(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback bool func()
///
void k_compressiondevice_on_is_sequential(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
///
long long k_compressiondevice_pos(void* self);

/// @warning DEPRECATED: Use `k_compressiondevice_super_pos` instead
///
#define k_compressiondevice_qbase_pos k_compressiondevice_super_pos

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
///
long long k_compressiondevice_super_pos(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback long long func()
///
void k_compressiondevice_on_pos(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
///
long long k_compressiondevice_size(void* self);

/// @warning DEPRECATED: Use `k_compressiondevice_super_size` instead
///
#define k_compressiondevice_qbase_size k_compressiondevice_super_size

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
///
long long k_compressiondevice_super_size(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback long long func()
///
void k_compressiondevice_on_size(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_reset(void* self);

/// @warning DEPRECATED: Use `k_compressiondevice_super_reset` instead
///
#define k_compressiondevice_qbase_reset k_compressiondevice_super_reset

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_super_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback bool func()
///
void k_compressiondevice_on_reset(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
///
long long k_compressiondevice_bytes_available(void* self);

/// @warning DEPRECATED: Use `k_compressiondevice_super_bytes_available` instead
///
#define k_compressiondevice_qbase_bytes_available k_compressiondevice_super_bytes_available

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
///
long long k_compressiondevice_super_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback long long func()
///
void k_compressiondevice_on_bytes_available(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
///
long long k_compressiondevice_bytes_to_write(void* self);

/// @warning DEPRECATED: Use `k_compressiondevice_super_bytes_to_write` instead
///
#define k_compressiondevice_qbase_bytes_to_write k_compressiondevice_super_bytes_to_write

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
///
long long k_compressiondevice_super_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback long long func()
///
void k_compressiondevice_on_bytes_to_write(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_can_read_line(void* self);

/// @warning DEPRECATED: Use `k_compressiondevice_super_can_read_line` instead
///
#define k_compressiondevice_qbase_can_read_line k_compressiondevice_super_can_read_line

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
///
bool k_compressiondevice_super_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback bool func()
///
void k_compressiondevice_on_can_read_line(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param msecs int
///
bool k_compressiondevice_wait_for_ready_read(void* self, int msecs);

/// @warning DEPRECATED: Use `k_compressiondevice_super_wait_for_ready_read` instead
///
#define k_compressiondevice_qbase_wait_for_ready_read k_compressiondevice_super_wait_for_ready_read

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param msecs int
///
bool k_compressiondevice_super_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback bool func(KCompressionDevice* self, int msecs)
///
void k_compressiondevice_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param msecs int
///
bool k_compressiondevice_wait_for_bytes_written(void* self, int msecs);

/// @warning DEPRECATED: Use `k_compressiondevice_super_wait_for_bytes_written` instead
///
#define k_compressiondevice_qbase_wait_for_bytes_written k_compressiondevice_super_wait_for_bytes_written

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param msecs int
///
bool k_compressiondevice_super_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback bool func(KCompressionDevice* self, int msecs)
///
void k_compressiondevice_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param data char*
/// @param maxlen long long
///
long long k_compressiondevice_read_line_data(void* self, char* data, long long maxlen);

/// @warning DEPRECATED: Use `k_compressiondevice_super_read_line_data` instead
///
#define k_compressiondevice_qbase_read_line_data k_compressiondevice_super_read_line_data

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param data char*
/// @param maxlen long long
///
long long k_compressiondevice_super_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback long long func(KCompressionDevice* self, char* data, long long maxlen)
///
void k_compressiondevice_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param maxSize long long
///
long long k_compressiondevice_skip_data(void* self, long long maxSize);

/// @warning DEPRECATED: Use `k_compressiondevice_super_skip_data` instead
///
#define k_compressiondevice_qbase_skip_data k_compressiondevice_super_skip_data

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param maxSize long long
///
long long k_compressiondevice_super_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback long long func(KCompressionDevice* self, long long maxSize)
///
void k_compressiondevice_on_skip_data(void* self, long long (*callback)(void*, long long));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param event QEvent*
///
bool k_compressiondevice_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_compressiondevice_super_event` instead
///
#define k_compressiondevice_qbase_event k_compressiondevice_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param event QEvent*
///
bool k_compressiondevice_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback bool func(KCompressionDevice* self, QEvent* event)
///
void k_compressiondevice_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_compressiondevice_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_compressiondevice_super_event_filter` instead
///
#define k_compressiondevice_qbase_event_filter k_compressiondevice_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_compressiondevice_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback bool func(KCompressionDevice* self, QObject* watched, QEvent* event)
///
void k_compressiondevice_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param event QTimerEvent*
///
void k_compressiondevice_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_compressiondevice_super_timer_event` instead
///
#define k_compressiondevice_qbase_timer_event k_compressiondevice_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param event QTimerEvent*
///
void k_compressiondevice_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self, QTimerEvent* event)
///
void k_compressiondevice_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param event QChildEvent*
///
void k_compressiondevice_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_compressiondevice_super_child_event` instead
///
#define k_compressiondevice_qbase_child_event k_compressiondevice_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param event QChildEvent*
///
void k_compressiondevice_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self, QChildEvent* event)
///
void k_compressiondevice_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param event QEvent*
///
void k_compressiondevice_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_compressiondevice_super_custom_event` instead
///
#define k_compressiondevice_qbase_custom_event k_compressiondevice_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param event QEvent*
///
void k_compressiondevice_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self, QEvent* event)
///
void k_compressiondevice_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param signal QMetaMethod*
///
void k_compressiondevice_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_compressiondevice_super_connect_notify` instead
///
#define k_compressiondevice_qbase_connect_notify k_compressiondevice_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param signal QMetaMethod*
///
void k_compressiondevice_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self, QMetaMethod* signal)
///
void k_compressiondevice_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param signal QMetaMethod*
///
void k_compressiondevice_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_compressiondevice_super_disconnect_notify` instead
///
#define k_compressiondevice_qbase_disconnect_notify k_compressiondevice_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param signal QMetaMethod*
///
void k_compressiondevice_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self, QMetaMethod* signal)
///
void k_compressiondevice_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void k_compressiondevice_set_open_mode(void* self, int32_t openMode);

/// @warning DEPRECATED: Use `k_compressiondevice_super_set_open_mode` instead
///
#define k_compressiondevice_qbase_set_open_mode k_compressiondevice_super_set_open_mode

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void k_compressiondevice_super_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void k_compressiondevice_on_set_open_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param errorString const char*
///
void k_compressiondevice_set_error_string(void* self, const char* errorString);

/// @warning DEPRECATED: Use `k_compressiondevice_super_set_error_string` instead
///
#define k_compressiondevice_qbase_set_error_string k_compressiondevice_super_set_error_string

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param errorString const char*
///
void k_compressiondevice_super_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self, const char* errorString)
///
void k_compressiondevice_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
///
QObject* k_compressiondevice_sender(void* self);

/// @warning DEPRECATED: Use `k_compressiondevice_super_sender` instead
///
#define k_compressiondevice_qbase_sender k_compressiondevice_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
///
QObject* k_compressiondevice_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback QObject* func()
///
void k_compressiondevice_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
///
int32_t k_compressiondevice_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_compressiondevice_super_sender_signal_index` instead
///
#define k_compressiondevice_qbase_sender_signal_index k_compressiondevice_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
///
int32_t k_compressiondevice_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback int32_t func()
///
void k_compressiondevice_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param signal const char*
///
int32_t k_compressiondevice_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_compressiondevice_super_receivers` instead
///
#define k_compressiondevice_qbase_receivers k_compressiondevice_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param signal const char*
///
int32_t k_compressiondevice_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback int32_t func(KCompressionDevice* self, const char* signal)
///
void k_compressiondevice_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompressionDevice*
/// @param signal QMetaMethod*
///
bool k_compressiondevice_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_compressiondevice_super_is_signal_connected` instead
///
#define k_compressiondevice_qbase_is_signal_connected k_compressiondevice_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param signal QMetaMethod*
///
bool k_compressiondevice_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompressionDevice*
/// @param callback bool func(KCompressionDevice* self, QMetaMethod* signal)
///
void k_compressiondevice_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCompressionDevice*
/// @param callback void func(KCompressionDevice* self, const char* objectName)
///
void k_compressiondevice_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#dtor.KCompressionDevice)
///
/// Delete this object from C++ memory.
///
/// @param self KCompressionDevice*
///
void k_compressiondevice_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcompressiondevice.html#public-types)

typedef enum {
    KCOMPRESSIONDEVICE_COMPRESSIONTYPE_GZIP = 0,
    KCOMPRESSIONDEVICE_COMPRESSIONTYPE_BZIP2 = 1,
    KCOMPRESSIONDEVICE_COMPRESSIONTYPE_XZ = 2,
    KCOMPRESSIONDEVICE_COMPRESSIONTYPE_NONE = 3,
    KCOMPRESSIONDEVICE_COMPRESSIONTYPE_ZSTD = 4
} KCompressionDevice__CompressionType;

#endif

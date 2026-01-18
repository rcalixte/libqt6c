#pragma once
#ifndef SRC_QT6C_LIBQFILE_H
#define SRC_QT6C_LIBQFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html)

/// q_file_new constructs a new QFile object.
///
QFile* q_file_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html)

/// q_file_new2 constructs a new QFile object.
///
/// @param name const char*
///
QFile* q_file_new2(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html)

/// q_file_new3 constructs a new QFile object.
///
/// @param parent QObject*
///
QFile* q_file_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html)

/// q_file_new4 constructs a new QFile object.
///
/// @param name const char*
/// @param parent QObject*
///
QFile* q_file_new4(const char* name, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QFile*
///
const QMetaObject* q_file_meta_object(void* self);

/// @param self QFile*
/// @param param1 const char*
///
void* q_file_metacast(void* self, const char* param1);

/// @param self QFile*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_file_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QFile*
/// @param callback int32_t func(QFile* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_file_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QFile*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_file_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_file_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFile*
///
const char* q_file_file_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#fileName)
///
/// Allows for overriding the related default method
///
/// @param self QFile*
/// @param callback const char* func()
///
void q_file_on_file_name(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#fileName)
///
/// Base class method implementation
///
/// @param self QFile*
///
const char* q_file_qbase_file_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setFileName)
///
/// @param self QFile*
/// @param name const char*
///
void q_file_set_file_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#encodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param fileName const char*
///
char* q_file_encode_name(const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#decodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param localFileName const char*
///
const char* q_file_decode_name(const char* localFileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#decodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param localFileName const char*
///
const char* q_file_decode_name2(const char* localFileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#exists)
///
/// @param self QFile*
///
bool q_file_exists(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#exists)
///
/// @param fileName const char*
///
bool q_file_exists2(const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFile*
///
const char* q_file_sym_link_target(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param fileName const char*
///
const char* q_file_sym_link_target2(const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#remove)
///
/// @param self QFile*
///
bool q_file_remove(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#remove)
///
/// @param fileName const char*
///
bool q_file_remove2(const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
///
/// @param self QFile*
///
bool q_file_move_to_trash(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
///
/// @param fileName const char*
///
bool q_file_move_to_trash2(const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#rename)
///
/// @param self QFile*
/// @param newName const char*
///
bool q_file_rename(void* self, const char* newName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#rename)
///
/// @param oldName const char*
/// @param newName const char*
///
bool q_file_rename2(const char* oldName, const char* newName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#link)
///
/// @param self QFile*
/// @param newName const char*
///
bool q_file_link(void* self, const char* newName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#link)
///
/// @param fileName const char*
/// @param newName const char*
///
bool q_file_link2(const char* fileName, const char* newName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#copy)
///
/// @param self QFile*
/// @param newName const char*
///
bool q_file_copy(void* self, const char* newName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#copy)
///
/// @param fileName const char*
/// @param newName const char*
///
bool q_file_copy2(const char* fileName, const char* newName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
///
/// @param self QFile*
/// @param flags flag of enum QIODeviceBase__OpenModeFlag
///
bool q_file_open(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
///
/// Allows for overriding the related default method
///
/// @param self QFile*
/// @param callback bool func(QFile* self, flag of enum QIODeviceBase__OpenModeFlag flags)
///
void q_file_on_open(void* self, bool (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
///
/// Base class method implementation
///
/// @param self QFile*
/// @param flags flag of enum QIODeviceBase__OpenModeFlag
///
bool q_file_qbase_open(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
///
/// @param self QFile*
/// @param flags flag of enum QIODeviceBase__OpenModeFlag
/// @param permissions flag of enum QFileDevice__Permission
///
bool q_file_open2(void* self, int32_t flags, int32_t permissions);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
///
/// @param self QFile*
/// @param fd int
/// @param ioFlags flag of enum QIODeviceBase__OpenModeFlag
///
bool q_file_open4(void* self, int fd, int32_t ioFlags);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#size)
///
/// @param self QFile*
///
long long q_file_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#size)
///
/// Allows for overriding the related default method
///
/// @param self QFile*
/// @param callback long long func()
///
void q_file_on_size(void* self, long long (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#size)
///
/// Base class method implementation
///
/// @param self QFile*
///
long long q_file_qbase_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// @param self QFile*
/// @param sz long long
///
bool q_file_resize(void* self, long long sz);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// Allows for overriding the related default method
///
/// @param self QFile*
/// @param callback bool func(QFile* self, long long sz)
///
void q_file_on_resize(void* self, bool (*callback)(void*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// Base class method implementation
///
/// @param self QFile*
/// @param sz long long
///
bool q_file_qbase_resize(void* self, long long sz);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// @param filename const char*
/// @param sz long long
///
bool q_file_resize2(const char* filename, long long sz);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// @param self QFile*
///
/// @return flag of enum QFileDevice__Permission
///
int32_t q_file_permissions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// Allows for overriding the related default method
///
/// @param self QFile*
/// @param callback int32_t func()
///
void q_file_on_permissions(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// Base class method implementation
///
/// @param self QFile*
///
/// @return flag of enum QFileDevice__Permission
///
int32_t q_file_qbase_permissions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// @param filename const char*
///
/// @return flag of enum QFileDevice__Permission
///
int32_t q_file_permissions2(const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// @param self QFile*
/// @param permissionSpec flag of enum QFileDevice__Permission
///
bool q_file_set_permissions(void* self, int32_t permissionSpec);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// Allows for overriding the related default method
///
/// @param self QFile*
/// @param callback bool func(QFile* self, flag of enum QFileDevice__Permission permissionSpec)
///
void q_file_on_set_permissions(void* self, bool (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// Base class method implementation
///
/// @param self QFile*
/// @param permissionSpec flag of enum QFileDevice__Permission
///
bool q_file_qbase_set_permissions(void* self, int32_t permissionSpec);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// @param filename const char*
/// @param permissionSpec flag of enum QFileDevice__Permission
///
bool q_file_set_permissions2(const char* filename, int32_t permissionSpec);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_file_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_file_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
///
/// @param self QFile*
/// @param fd int
/// @param ioFlags flag of enum QIODeviceBase__OpenModeFlag
/// @param handleFlags flag of enum QFileDevice__FileHandleFlag
///
bool q_file_open33(void* self, int fd, int32_t ioFlags, int32_t handleFlags);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#error)
///
/// @param self QFile*
///
/// @return enum QFileDevice__FileError
///
int32_t q_file_error(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
///
/// @param self QFile*
///
void q_file_unset_error(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#handle)
///
/// @param self QFile*
///
int32_t q_file_handle(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#flush)
///
/// @param self QFile*
///
bool q_file_flush(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// @param self QFile*
/// @param offset long long
/// @param size long long
///
unsigned char* q_file_map(void* self, long long offset, long long size);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
///
/// @param self QFile*
/// @param address unsigned char*
///
bool q_file_unmap(void* self, unsigned char* address);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
///
/// @param self QFile*
/// @param time enum QFileDevice__FileTime
///
QDateTime* q_file_file_time(void* self, int32_t time);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
///
/// @param self QFile*
/// @param newDate QDateTime*
/// @param fileTime enum QFileDevice__FileTime
///
bool q_file_set_file_time(void* self, void* newDate, int32_t fileTime);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// @param self QFile*
/// @param offset long long
/// @param size long long
/// @param flags flag of enum QFileDevice__MemoryMapFlag
///
unsigned char* q_file_map3(void* self, long long offset, long long size, int32_t flags);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QFile*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_file_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QFile*
/// @param enabled bool
///
void q_file_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QFile*
///
bool q_file_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QFile*
///
bool q_file_is_open(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QFile*
///
bool q_file_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QFile*
///
bool q_file_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QFile*
///
int32_t q_file_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QFile*
///
int32_t q_file_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QFile*
///
int32_t q_file_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QFile*
/// @param channel int
///
void q_file_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QFile*
///
int32_t q_file_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QFile*
/// @param channel int
///
void q_file_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QFile*
/// @param data char*
/// @param maxlen long long
///
long long q_file_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFile*
/// @param maxlen long long
///
char* q_file_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFile*
///
char* q_file_read_all(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QFile*
/// @param data char*
/// @param maxlen long long
///
long long q_file_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFile*
///
char* q_file_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QFile*
///
void q_file_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QFile*
///
void q_file_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QFile*
///
void q_file_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QFile*
///
bool q_file_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QFile*
/// @param data const char*
/// @param lenVal long long
///
long long q_file_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QFile*
/// @param data const char*
///
long long q_file_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QFile*
/// @param data const char*
///
long long q_file_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QFile*
/// @param data char*
/// @param maxlen long long
///
long long q_file_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFile*
/// @param maxlen long long
///
char* q_file_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QFile*
/// @param maxSize long long
///
long long q_file_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QFile*
/// @param c char
///
void q_file_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QFile*
/// @param c char
///
bool q_file_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QFile*
/// @param c char*
///
bool q_file_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFile*
///
const char* q_file_error_string(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QFile*
///
void q_file_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QFile*
/// @param callback void func(QFile* self)
///
void q_file_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QFile*
/// @param channel int
///
void q_file_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QFile*
/// @param callback void func(QFile* self, int channel)
///
void q_file_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QFile*
/// @param bytes long long
///
void q_file_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QFile*
/// @param callback void func(QFile* self, long long bytes)
///
void q_file_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QFile*
/// @param channel int
/// @param bytes long long
///
void q_file_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QFile*
/// @param callback void func(QFile* self, int channel, long long bytes)
///
void q_file_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QFile*
///
void q_file_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QFile*
/// @param callback void func(QFile* self)
///
void q_file_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QFile*
///
void q_file_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QFile*
/// @param callback void func(QFile* self)
///
void q_file_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFile*
/// @param maxlen long long
///
char* q_file_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFile*
///
const char* q_file_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QFile*
/// @param name char*
///
void q_file_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QFile*
///
bool q_file_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QFile*
///
bool q_file_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QFile*
///
bool q_file_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QFile*
///
bool q_file_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QFile*
/// @param b bool
///
bool q_file_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QFile*
///
QThread* q_file_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFile*
/// @param thread QThread*
///
bool q_file_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFile*
/// @param interval int
///
int32_t q_file_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFile*
/// @param id int
///
void q_file_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFile*
/// @param id enum Qt__TimerId
///
void q_file_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QFile*
///
/// @return libqt_list of QObject*
///
libqt_list q_file_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QFile*
/// @param parent QObject*
///
void q_file_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QFile*
/// @param filterObj QObject*
///
void q_file_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QFile*
/// @param obj QObject*
///
void q_file_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_file_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_file_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_file_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_file_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QFile*
///
void q_file_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QFile*
///
void q_file_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QFile*
/// @param name const char*
/// @param value QVariant*
///
bool q_file_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QFile*
/// @param name const char*
///
QVariant* q_file_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFile*
///
const char** q_file_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFile*
///
QBindingStorage* q_file_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFile*
///
const QBindingStorage* q_file_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFile*
///
void q_file_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFile*
/// @param callback void func(QFile* self)
///
void q_file_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QFile*
///
QObject* q_file_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QFile*
/// @param classname const char*
///
bool q_file_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QFile*
///
void q_file_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFile*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_file_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFile*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_file_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_file_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_file_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFile*
/// @param param1 QObject*
///
void q_file_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFile*
/// @param callback void func(QFile* self, QObject* param1)
///
void q_file_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
///
void q_file_close(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
///
void q_file_qbase_close(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback void func()
///
void q_file_on_close(void* self, void (*callback)());

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
///
bool q_file_is_sequential(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
///
bool q_file_qbase_is_sequential(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func()
///
void q_file_on_is_sequential(void* self, bool (*callback)());

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
///
long long q_file_pos(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
///
long long q_file_qbase_pos(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback long long func()
///
void q_file_on_pos(void* self, long long (*callback)());

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param offset long long
///
bool q_file_seek(void* self, long long offset);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param offset long long
///
bool q_file_qbase_seek(void* self, long long offset);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func(QFile* self, long long offset)
///
void q_file_on_seek(void* self, bool (*callback)(void*, long long));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
///
bool q_file_at_end(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
///
bool q_file_qbase_at_end(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func()
///
void q_file_on_at_end(void* self, bool (*callback)());

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param data char*
/// @param maxlen long long
///
long long q_file_read_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param data char*
/// @param maxlen long long
///
long long q_file_qbase_read_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback long long func(QFile* self, char* data, long long maxlen)
///
void q_file_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param data const char*
/// @param lenVal long long
///
long long q_file_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param data const char*
/// @param lenVal long long
///
long long q_file_qbase_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback long long func(QFile* self, const char* data, long long lenVal)
///
void q_file_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param data char*
/// @param maxlen long long
///
long long q_file_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param data char*
/// @param maxlen long long
///
long long q_file_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback long long func(QFile* self, char* data, long long maxlen)
///
void q_file_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
///
bool q_file_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
///
bool q_file_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func()
///
void q_file_on_reset(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
///
long long q_file_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
///
long long q_file_qbase_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback long long func()
///
void q_file_on_bytes_available(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
///
long long q_file_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
///
long long q_file_qbase_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback long long func()
///
void q_file_on_bytes_to_write(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
///
bool q_file_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
///
bool q_file_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func()
///
void q_file_on_can_read_line(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param msecs int
///
bool q_file_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param msecs int
///
bool q_file_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func(QFile* self, int msecs)
///
void q_file_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param msecs int
///
bool q_file_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param msecs int
///
bool q_file_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func(QFile* self, int msecs)
///
void q_file_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param maxSize long long
///
long long q_file_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param maxSize long long
///
long long q_file_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback long long func(QFile* self, long long maxSize)
///
void q_file_on_skip_data(void* self, long long (*callback)(void*, long long));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param event QEvent*
///
bool q_file_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param event QEvent*
///
bool q_file_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func(QFile* self, QEvent* event)
///
void q_file_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_file_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_file_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func(QFile* self, QObject* watched, QEvent* event)
///
void q_file_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param event QTimerEvent*
///
void q_file_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param event QTimerEvent*
///
void q_file_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback void func(QFile* self, QTimerEvent* event)
///
void q_file_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param event QChildEvent*
///
void q_file_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param event QChildEvent*
///
void q_file_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback void func(QFile* self, QChildEvent* event)
///
void q_file_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param event QEvent*
///
void q_file_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param event QEvent*
///
void q_file_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback void func(QFile* self, QEvent* event)
///
void q_file_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param signal QMetaMethod*
///
void q_file_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param signal QMetaMethod*
///
void q_file_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback void func(QFile* self, QMetaMethod* signal)
///
void q_file_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param signal QMetaMethod*
///
void q_file_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param signal QMetaMethod*
///
void q_file_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback void func(QFile* self, QMetaMethod* signal)
///
void q_file_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_file_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_file_qbase_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback void func(QFile* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_file_on_set_open_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param errorString const char*
///
void q_file_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param errorString const char*
///
void q_file_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback void func(QFile* self, const char* errorString)
///
void q_file_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
///
QObject* q_file_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
///
QObject* q_file_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback QObject* func()
///
void q_file_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
///
int32_t q_file_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
///
int32_t q_file_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback int32_t func()
///
void q_file_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param signal const char*
///
int32_t q_file_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param signal const char*
///
int32_t q_file_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback int32_t func(QFile* self, const char* signal)
///
void q_file_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param signal QMetaMethod*
///
bool q_file_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param signal QMetaMethod*
///
bool q_file_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func(QFile* self, QMetaMethod* signal)
///
void q_file_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QFile*
/// @param callback void func(QFile* self, const char* objectName)
///
void q_file_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#dtor.QFile)
///
/// Delete this object from C++ memory.
///
/// @param self QFile*
///
void q_file_delete(void* self);

#endif

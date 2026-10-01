#pragma once
#ifndef LIBQFILE_H
#define LIBQFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
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
/// @param self const QFile*
///
const QMetaObject* q_file_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QFile*
/// @param callback const QMetaObject* func(const QFile* self)
///
void q_file_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QFile*
///
const QMetaObject* q_file_super_meta_object(const void* self);

/// @param self QFile*
/// @param param1 const char*
///
void* q_file_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QFile*
/// @param callback void* func(QFile* self, const char* param1)
///
void q_file_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QFile*
/// @param param1 const char*
///
void* q_file_super_metacast(void* self, const char* param1);

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
int32_t q_file_super_metacall(void* self, int32_t param1, int param2, void* param3);

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
/// @param self const QFile*
///
const char* q_file_file_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#fileName)
///
/// Allows for overriding the related default method
///
/// @param self QFile*
/// @param callback const char* func(const QFile* self)
///
void q_file_on_file_name(void* self, const char* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#fileName)
///
/// Base class method implementation
///
/// @param self const QFile*
///
const char* q_file_super_file_name(const void* self);

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
/// @param localFileName char*
///
const char* q_file_decode_name(char* localFileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#decodeName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param localFileName const char*
///
const char* q_file_decode_name2(const char* localFileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#exists)
///
/// @param self const QFile*
///
bool q_file_exists(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#exists)
///
/// @param fileName const char*
///
bool q_file_exists2(const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFile*
///
const char* q_file_sym_link_target(const void* self);

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
bool q_file_super_open(void* self, int32_t flags);

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
/// @param self const QFile*
///
int64_t q_file_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#size)
///
/// Allows for overriding the related default method
///
/// @param self QFile*
/// @param callback int64_t func(const QFile* self)
///
void q_file_on_size(void* self, int64_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#size)
///
/// Base class method implementation
///
/// @param self const QFile*
///
int64_t q_file_super_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// @param self QFile*
/// @param sz int64_t
///
bool q_file_resize(void* self, int64_t sz);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// Allows for overriding the related default method
///
/// @param self QFile*
/// @param callback bool func(QFile* self, int64_t sz)
///
void q_file_on_resize(void* self, bool (*callback)(void*, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// Base class method implementation
///
/// @param self QFile*
/// @param sz int64_t
///
bool q_file_super_resize(void* self, int64_t sz);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// @param filename const char*
/// @param sz int64_t
///
bool q_file_resize2(const char* filename, int64_t sz);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// @param self const QFile*
///
/// @return flag of enum QFileDevice__Permission
///
int32_t q_file_permissions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// Allows for overriding the related default method
///
/// @param self QFile*
/// @param callback int32_t func(const QFile* self)
///
void q_file_on_permissions(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// Base class method implementation
///
/// @param self const QFile*
///
/// @return flag of enum QFileDevice__Permission
///
int32_t q_file_super_permissions(const void* self);

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
bool q_file_super_set_permissions(void* self, int32_t permissionSpec);

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
/// @param self const QFile*
///
/// @return enum QFileDevice__FileError
///
int32_t q_file_error(const void* self);

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
/// @param self const QFile*
///
int32_t q_file_handle(const void* self);

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
/// @param offset int64_t
/// @param size int64_t
///
unsigned char* q_file_map(void* self, int64_t offset, int64_t size);

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
/// @param self const QFile*
/// @param time enum QFileDevice__FileTime
///
QDateTime* q_file_file_time(const void* self, int32_t time);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
///
/// @param self QFile*
/// @param newDate QDateTime*
/// @param fileTime enum QFileDevice__FileTime
///
bool q_file_set_file_time(void* self, const void* newDate, int32_t fileTime);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// @param self QFile*
/// @param offset int64_t
/// @param size int64_t
/// @param flags flag of enum QFileDevice__MemoryMapFlag
///
unsigned char* q_file_map3(void* self, int64_t offset, int64_t size, int32_t flags);

/// Inherited from QIODevice
///
/// Upcasts to a QIODeviceBase object
///
/// @param self const QFile*
///
QIODeviceBase* q_file_as_q_i_o_device_base(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self const QFile*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_file_open_mode(const void* self);

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
/// @param self const QFile*
///
bool q_file_is_text_mode_enabled(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self const QFile*
///
bool q_file_is_open(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self const QFile*
///
bool q_file_is_readable(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self const QFile*
///
bool q_file_is_writable(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self const QFile*
///
int32_t q_file_read_channel_count(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self const QFile*
///
int32_t q_file_write_channel_count(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self const QFile*
///
int32_t q_file_current_read_channel(const void* self);

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
/// @param self const QFile*
///
int32_t q_file_current_write_channel(const void* self);

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
/// @param maxlen int64_t
///
int64_t q_file_read(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFile*
/// @param maxlen int64_t
///
char* q_file_read2(void* self, int64_t maxlen);

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
/// @param maxlen int64_t
///
int64_t q_file_read_line(void* self, char* data, int64_t maxlen);

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
/// @param self const QFile*
///
bool q_file_is_transaction_started(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QFile*
/// @param data const char*
/// @param lenVal int64_t
///
int64_t q_file_write(void* self, const char* data, int64_t lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QFile*
/// @param data const char*
///
int64_t q_file_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QFile*
/// @param data char*
///
int64_t q_file_write3(void* self, char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QFile*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_file_peek(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFile*
/// @param maxlen int64_t
///
char* q_file_peek2(void* self, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QFile*
/// @param maxSize int64_t
///
int64_t q_file_skip(void* self, int64_t maxSize);

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
/// @param self const QFile*
///
const char* q_file_error_string(const void* self);

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
/// @param bytes int64_t
///
void q_file_bytes_written(void* self, int64_t bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QFile*
/// @param callback void func(QFile* self, int64_t bytes)
///
void q_file_on_bytes_written(void* self, void (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QFile*
/// @param channel int
/// @param bytes int64_t
///
void q_file_channel_bytes_written(void* self, int channel, int64_t bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QFile*
/// @param callback void func(QFile* self, int channel, int64_t bytes)
///
void q_file_on_channel_bytes_written(void* self, void (*callback)(void*, int, int64_t));

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
/// @param maxlen int64_t
///
char* q_file_read_line1(void* self, int64_t maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFile*
///
const char* q_file_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QFile*
/// @param name const char*
///
void q_file_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QFile*
///
bool q_file_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QFile*
///
bool q_file_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QFile*
///
bool q_file_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QFile*
///
bool q_file_signals_blocked(const void* self);

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
/// @param self const QFile*
///
QThread* q_file_thread(const void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFile*
/// @param time int64_t of nanoseconds
///
int32_t q_file_start_timer2(void* self, int64_t time);

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
/// @param self const QFile*
///
/// @return libqt_list of QObject*
///
libqt_list q_file_children(const void* self);

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
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_file_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_file_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QFile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_file_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_file_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_file_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFile*
///
bool q_file_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFile*
/// @param receiver QObject*
///
bool q_file_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_file_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QFile*
///
void q_file_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QFile*
///
void q_file_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QFile*
/// @param name const char*
/// @param value QVariant*
///
bool q_file_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QFile*
/// @param name const char*
///
QVariant* q_file_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QFile*
///
const char** q_file_dynamic_property_names(const void* self);

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
/// @param self const QFile*
///
const QBindingStorage* q_file_binding_storage2(const void* self);

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
/// @param self const QFile*
///
QObject* q_file_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QFile*
/// @param classname const char*
///
bool q_file_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QFile*
///
void q_file_delete_later(void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFile*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_file_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_file_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_file_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QFile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_file_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFile*
/// @param signal const char*
///
bool q_file_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFile*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_file_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFile*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_file_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFile*
/// @param receiver QObject*
/// @param member const char*
///
bool q_file_disconnect23(const void* self, const void* receiver, const char* member);

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
void q_file_super_close(void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback void func(QFile* self)
///
void q_file_on_close(void* self, void (*callback)(void*));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFile*
///
bool q_file_is_sequential(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFile*
///
bool q_file_super_is_sequential(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func(QFile* self)
///
void q_file_on_is_sequential(void* self, bool (*callback)(const void*));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFile*
///
int64_t q_file_pos(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFile*
///
int64_t q_file_super_pos(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback int64_t func(QFile* self)
///
void q_file_on_pos(void* self, int64_t (*callback)(const void*));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param offset int64_t
///
bool q_file_seek(void* self, int64_t offset);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param offset int64_t
///
bool q_file_super_seek(void* self, int64_t offset);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func(QFile* self, int64_t offset)
///
void q_file_on_seek(void* self, bool (*callback)(void*, int64_t));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFile*
///
bool q_file_at_end(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFile*
///
bool q_file_super_at_end(const void* self);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func(QFile* self)
///
void q_file_on_at_end(void* self, bool (*callback)(const void*));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_file_read_data(void* self, char* data, int64_t maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_file_super_read_data(void* self, char* data, int64_t maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback int64_t func(QFile* self, char* data, int64_t maxlen)
///
void q_file_on_read_data(void* self, int64_t (*callback)(void*, char*, int64_t));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param data const char*
/// @param lenVal int64_t
///
int64_t q_file_write_data(void* self, const char* data, int64_t lenVal);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param data const char*
/// @param lenVal int64_t
///
int64_t q_file_super_write_data(void* self, const char* data, int64_t lenVal);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback int64_t func(QFile* self, const char* data, int64_t lenVal)
///
void q_file_on_write_data(void* self, int64_t (*callback)(void*, const char*, int64_t));

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_file_read_line_data(void* self, char* data, int64_t maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_file_super_read_line_data(void* self, char* data, int64_t maxlen);

/// Inherited from QFileDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback int64_t func(QFile* self, char* data, int64_t maxlen)
///
void q_file_on_read_line_data(void* self, int64_t (*callback)(void*, char*, int64_t));

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
bool q_file_super_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func(QFile* self)
///
void q_file_on_reset(void* self, bool (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFile*
///
int64_t q_file_bytes_available(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFile*
///
int64_t q_file_super_bytes_available(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback int64_t func(QFile* self)
///
void q_file_on_bytes_available(void* self, int64_t (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFile*
///
int64_t q_file_bytes_to_write(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFile*
///
int64_t q_file_super_bytes_to_write(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback int64_t func(QFile* self)
///
void q_file_on_bytes_to_write(void* self, int64_t (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFile*
///
bool q_file_can_read_line(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFile*
///
bool q_file_super_can_read_line(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func(QFile* self)
///
void q_file_on_can_read_line(void* self, bool (*callback)(const void*));

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
bool q_file_super_wait_for_ready_read(void* self, int msecs);

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
bool q_file_super_wait_for_bytes_written(void* self, int msecs);

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
/// @param maxSize int64_t
///
int64_t q_file_skip_data(void* self, int64_t maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param maxSize int64_t
///
int64_t q_file_super_skip_data(void* self, int64_t maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback int64_t func(QFile* self, int64_t maxSize)
///
void q_file_on_skip_data(void* self, int64_t (*callback)(void*, int64_t));

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
bool q_file_super_event(void* self, void* event);

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
bool q_file_super_event_filter(void* self, void* watched, void* event);

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
void q_file_super_timer_event(void* self, void* event);

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
void q_file_super_child_event(void* self, void* event);

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
void q_file_super_custom_event(void* self, void* event);

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
void q_file_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param signal QMetaMethod*
///
void q_file_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback void func(QFile* self, QMetaMethod* signal)
///
void q_file_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFile*
/// @param signal QMetaMethod*
///
void q_file_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFile*
/// @param signal QMetaMethod*
///
void q_file_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback void func(QFile* self, QMetaMethod* signal)
///
void q_file_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

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
void q_file_super_set_open_mode(void* self, int32_t openMode);

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
void q_file_super_set_error_string(void* self, const char* errorString);

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
/// @param self const QFile*
///
QObject* q_file_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFile*
///
QObject* q_file_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback QObject* func(QFile* self)
///
void q_file_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFile*
///
int32_t q_file_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFile*
///
int32_t q_file_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback int32_t func(QFile* self)
///
void q_file_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFile*
/// @param signal const char*
///
int32_t q_file_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFile*
/// @param signal const char*
///
int32_t q_file_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback int32_t func(QFile* self, const char* signal)
///
void q_file_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFile*
/// @param signal QMetaMethod*
///
bool q_file_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFile*
/// @param signal QMetaMethod*
///
bool q_file_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFile*
/// @param callback bool func(QFile* self, QMetaMethod* signal)
///
void q_file_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

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

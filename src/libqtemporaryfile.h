#pragma once
#ifndef SRCQT6C_LIBQTEMPORARYFILE_H
#define SRCQT6C_LIBQTEMPORARYFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtemporaryfile.html

/// q_temporaryfile_new constructs a new QTemporaryFile object.
///
QTemporaryFile* q_temporaryfile_new();

/// q_temporaryfile_new2 constructs a new QTemporaryFile object.
///
/// @param templateName const char*
QTemporaryFile* q_temporaryfile_new2(const char* templateName);

/// q_temporaryfile_new3 constructs a new QTemporaryFile object.
///
/// @param parent QObject*
QTemporaryFile* q_temporaryfile_new3(void* parent);

/// q_temporaryfile_new4 constructs a new QTemporaryFile object.
///
/// @param templateName const char*
/// @param parent QObject*
QTemporaryFile* q_temporaryfile_new4(const char* templateName, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTemporaryFile*
const QMetaObject* q_temporaryfile_meta_object(void* self);

/// @param self QTemporaryFile*
/// @param param1 const char*
void* q_temporaryfile_metacast(void* self, const char* param1);

/// @param self QTemporaryFile*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_temporaryfile_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTemporaryFile*
/// @param callback int32_t func(QTemporaryFile* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_temporaryfile_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTemporaryFile*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_temporaryfile_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_temporaryfile_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#autoRemove)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_auto_remove(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#setAutoRemove)
///
/// @param self QTemporaryFile*
/// @param b bool
void q_temporaryfile_set_auto_remove(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#open)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_open(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTemporaryFile*
const char* q_temporaryfile_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#fileName)
///
/// Allows for overriding the related default method
///
/// @param self QTemporaryFile*
/// @param callback const char* func()
void q_temporaryfile_on_file_name(void* self, const char* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#fileName)
///
/// Base class method implementation
///
/// @param self QTemporaryFile*
const char* q_temporaryfile_qbase_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#fileTemplate)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTemporaryFile*
const char* q_temporaryfile_file_template(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#setFileTemplate)
///
/// @param self QTemporaryFile*
/// @param name const char*
void q_temporaryfile_set_file_template(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#rename)
///
/// @param self QTemporaryFile*
/// @param newName const char*
bool q_temporaryfile_rename(void* self, const char* newName);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#createNativeFile)
///
/// @param fileName const char*
QTemporaryFile* q_temporaryfile_create_native_file(const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#createNativeFile)
///
/// @param file QFile*
QTemporaryFile* q_temporaryfile_create_native_file2(void* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#open)
///
/// @param self QTemporaryFile*
/// @param flags flag of enum QIODeviceBase__OpenModeFlag
bool q_temporaryfile_open2(void* self, int32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#open)
///
/// Allows for overriding the related default method
///
/// @param self QTemporaryFile*
/// @param callback bool func(QTemporaryFile* self, flag of enum QIODeviceBase__OpenModeFlag flags)
void q_temporaryfile_on_open2(void* self, bool (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#open)
///
/// Base class method implementation
///
/// @param self QTemporaryFile*
/// @param flags flag of enum QIODeviceBase__OpenModeFlag
bool q_temporaryfile_qbase_open2(void* self, int32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_temporaryfile_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_temporaryfile_tr3(const char* s, const char* c, int n);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setFileName)
///
/// @param self QTemporaryFile*
/// @param name const char*
void q_temporaryfile_set_file_name(void* self, const char* name);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#encodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param fileName const char*
char* q_temporaryfile_encode_name(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#decodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param localFileName const char*
const char* q_temporaryfile_decode_name(const char* localFileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#decodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param localFileName const char*
const char* q_temporaryfile_decode_name2(const char* localFileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#exists)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_exists(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#exists)
///
/// @param fileName const char*
bool q_temporaryfile_exists2(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTemporaryFile*
const char* q_temporaryfile_sym_link_target(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
///
/// Caller is responsible for freeing the returned memory
///
/// @param fileName const char*
const char* q_temporaryfile_sym_link_target2(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#remove)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_remove(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#remove)
///
/// @param fileName const char*
bool q_temporaryfile_remove2(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_move_to_trash(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
///
/// @param fileName const char*
bool q_temporaryfile_move_to_trash2(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#rename)
///
/// @param oldName const char*
/// @param newName const char*
bool q_temporaryfile_rename2(const char* oldName, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#link)
///
/// @param self QTemporaryFile*
/// @param newName const char*
bool q_temporaryfile_link(void* self, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#link)
///
/// @param fileName const char*
/// @param newName const char*
bool q_temporaryfile_link2(const char* fileName, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#copy)
///
/// @param self QTemporaryFile*
/// @param newName const char*
bool q_temporaryfile_copy(void* self, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#copy)
///
/// @param fileName const char*
/// @param newName const char*
bool q_temporaryfile_copy2(const char* fileName, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// @param self QTemporaryFile*
/// @param fd int
/// @param ioFlags flag of enum QIODeviceBase__OpenModeFlag
bool q_temporaryfile_open4(void* self, int fd, int32_t ioFlags);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// @param filename const char*
/// @param sz long long
bool q_temporaryfile_resize2(const char* filename, long long sz);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// @param filename const char*
///
/// @return flag of enum QFileDevice__Permission
int32_t q_temporaryfile_permissions2(const char* filename);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// @param filename const char*
/// @param permissionSpec flag of enum QFileDevice__Permission
bool q_temporaryfile_set_permissions2(const char* filename, int32_t permissionSpec);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// @param self QTemporaryFile*
/// @param fd int
/// @param ioFlags flag of enum QIODeviceBase__OpenModeFlag
/// @param handleFlags flag of enum QFileDevice__FileHandleFlag
bool q_temporaryfile_open33(void* self, int fd, int32_t ioFlags, int32_t handleFlags);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#error)
///
/// @param self QTemporaryFile*
///
/// @return enum QFileDevice__FileError
int32_t q_temporaryfile_error(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
///
/// @param self QTemporaryFile*
void q_temporaryfile_unset_error(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#handle)
///
/// @param self QTemporaryFile*
int32_t q_temporaryfile_handle(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#flush)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_flush(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// @param self QTemporaryFile*
/// @param offset long long
/// @param size long long
unsigned char* q_temporaryfile_map(void* self, long long offset, long long size);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
///
/// @param self QTemporaryFile*
/// @param address unsigned char*
bool q_temporaryfile_unmap(void* self, unsigned char* address);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
///
/// @param self QTemporaryFile*
/// @param time enum QFileDevice__FileTime
QDateTime* q_temporaryfile_file_time(void* self, int32_t time);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
///
/// @param self QTemporaryFile*
/// @param newDate QDateTime*
/// @param fileTime enum QFileDevice__FileTime
bool q_temporaryfile_set_file_time(void* self, void* newDate, int32_t fileTime);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// @param self QTemporaryFile*
/// @param offset long long
/// @param size long long
/// @param flags flag of enum QFileDevice__MemoryMapFlag
unsigned char* q_temporaryfile_map3(void* self, long long offset, long long size, int32_t flags);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QTemporaryFile*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
int32_t q_temporaryfile_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QTemporaryFile*
/// @param enabled bool
void q_temporaryfile_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QTemporaryFile*
int32_t q_temporaryfile_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QTemporaryFile*
int32_t q_temporaryfile_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QTemporaryFile*
int32_t q_temporaryfile_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QTemporaryFile*
/// @param channel int
void q_temporaryfile_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QTemporaryFile*
int32_t q_temporaryfile_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QTemporaryFile*
/// @param channel int
void q_temporaryfile_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QTemporaryFile*
/// @param data char*
/// @param maxlen long long
long long q_temporaryfile_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTemporaryFile*
/// @param maxlen long long
char* q_temporaryfile_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTemporaryFile*
char* q_temporaryfile_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QTemporaryFile*
/// @param data char*
/// @param maxlen long long
long long q_temporaryfile_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTemporaryFile*
char* q_temporaryfile_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QTemporaryFile*
void q_temporaryfile_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QTemporaryFile*
void q_temporaryfile_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QTemporaryFile*
void q_temporaryfile_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QTemporaryFile*
/// @param data const char*
/// @param lenVal long long
long long q_temporaryfile_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QTemporaryFile*
/// @param data const char*
long long q_temporaryfile_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QTemporaryFile*
/// @param data const char*
long long q_temporaryfile_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QTemporaryFile*
/// @param data char*
/// @param maxlen long long
long long q_temporaryfile_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTemporaryFile*
/// @param maxlen long long
char* q_temporaryfile_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QTemporaryFile*
/// @param maxSize long long
long long q_temporaryfile_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QTemporaryFile*
/// @param c char
void q_temporaryfile_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QTemporaryFile*
/// @param c char
bool q_temporaryfile_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QTemporaryFile*
/// @param c char*
bool q_temporaryfile_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTemporaryFile*
const char* q_temporaryfile_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QTemporaryFile*
void q_temporaryfile_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self)
void q_temporaryfile_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QTemporaryFile*
/// @param channel int
void q_temporaryfile_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self, int channel)
void q_temporaryfile_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QTemporaryFile*
/// @param bytes long long
void q_temporaryfile_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self, long long bytes)
void q_temporaryfile_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QTemporaryFile*
/// @param channel int
/// @param bytes long long
void q_temporaryfile_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self, int channel, long long bytes)
void q_temporaryfile_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QTemporaryFile*
void q_temporaryfile_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self)
void q_temporaryfile_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QTemporaryFile*
void q_temporaryfile_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self)
void q_temporaryfile_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTemporaryFile*
/// @param maxlen long long
char* q_temporaryfile_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTemporaryFile*
const char* q_temporaryfile_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTemporaryFile*
/// @param name char*
void q_temporaryfile_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTemporaryFile*
bool q_temporaryfile_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTemporaryFile*
/// @param b bool
bool q_temporaryfile_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTemporaryFile*
QThread* q_temporaryfile_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTemporaryFile*
/// @param thread QThread*
bool q_temporaryfile_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTemporaryFile*
/// @param interval int
int32_t q_temporaryfile_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTemporaryFile*
/// @param id int
void q_temporaryfile_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTemporaryFile*
/// @param id enum Qt__TimerId
void q_temporaryfile_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTemporaryFile*
libqt_list /* of QObject* */ q_temporaryfile_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTemporaryFile*
/// @param parent QObject*
void q_temporaryfile_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTemporaryFile*
/// @param filterObj QObject*
void q_temporaryfile_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTemporaryFile*
/// @param obj QObject*
void q_temporaryfile_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_temporaryfile_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTemporaryFile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_temporaryfile_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_temporaryfile_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_temporaryfile_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTemporaryFile*
void q_temporaryfile_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTemporaryFile*
void q_temporaryfile_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTemporaryFile*
/// @param name const char*
/// @param value QVariant*
bool q_temporaryfile_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTemporaryFile*
/// @param name const char*
QVariant* q_temporaryfile_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTemporaryFile*
const char** q_temporaryfile_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTemporaryFile*
QBindingStorage* q_temporaryfile_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTemporaryFile*
const QBindingStorage* q_temporaryfile_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTemporaryFile*
void q_temporaryfile_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self)
void q_temporaryfile_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTemporaryFile*
QObject* q_temporaryfile_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTemporaryFile*
/// @param classname const char*
bool q_temporaryfile_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTemporaryFile*
void q_temporaryfile_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTemporaryFile*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_temporaryfile_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTemporaryFile*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_temporaryfile_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_temporaryfile_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTemporaryFile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_temporaryfile_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTemporaryFile*
/// @param param1 QObject*
void q_temporaryfile_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self, QObject* param1)
void q_temporaryfile_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
long long q_temporaryfile_size(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
long long q_temporaryfile_qbase_size(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback long long func()
void q_temporaryfile_on_size(void* self, long long (*callback)());

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param sz long long
bool q_temporaryfile_resize(void* self, long long sz);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param sz long long
bool q_temporaryfile_qbase_resize(void* self, long long sz);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback bool func(QTemporaryFile* self, long long sz)
void q_temporaryfile_on_resize(void* self, bool (*callback)(void*, long long));

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
///
/// @return flag of enum QFileDevice__Permission
int32_t q_temporaryfile_permissions(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
///
/// @return flag of enum QFileDevice__Permission
int32_t q_temporaryfile_qbase_permissions(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback int32_t func()
void q_temporaryfile_on_permissions(void* self, int32_t (*callback)());

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param permissionSpec flag of enum QFileDevice__Permission
bool q_temporaryfile_set_permissions(void* self, int32_t permissionSpec);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param permissionSpec flag of enum QFileDevice__Permission
bool q_temporaryfile_qbase_set_permissions(void* self, int32_t permissionSpec);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback bool func(QTemporaryFile* self, flag of enum QFileDevice__Permission permissionSpec)
void q_temporaryfile_on_set_permissions(void* self, bool (*callback)(void*, int32_t));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
void q_temporaryfile_close(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
void q_temporaryfile_qbase_close(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback void func()
void q_temporaryfile_on_close(void* self, void (*callback)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
bool q_temporaryfile_is_sequential(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
bool q_temporaryfile_qbase_is_sequential(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback bool func()
void q_temporaryfile_on_is_sequential(void* self, bool (*callback)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
long long q_temporaryfile_pos(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
long long q_temporaryfile_qbase_pos(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback long long func()
void q_temporaryfile_on_pos(void* self, long long (*callback)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param offset long long
bool q_temporaryfile_seek(void* self, long long offset);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param offset long long
bool q_temporaryfile_qbase_seek(void* self, long long offset);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback bool func(QTemporaryFile* self, long long offset)
void q_temporaryfile_on_seek(void* self, bool (*callback)(void*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
bool q_temporaryfile_at_end(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
bool q_temporaryfile_qbase_at_end(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback bool func()
void q_temporaryfile_on_at_end(void* self, bool (*callback)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param data char*
/// @param maxlen long long
long long q_temporaryfile_read_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param data char*
/// @param maxlen long long
long long q_temporaryfile_qbase_read_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback long long func(QTemporaryFile* self, char* data, long long maxlen)
void q_temporaryfile_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param data const char*
/// @param lenVal long long
long long q_temporaryfile_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param data const char*
/// @param lenVal long long
long long q_temporaryfile_qbase_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback long long func(QTemporaryFile* self, const char* data, long long lenVal)
void q_temporaryfile_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param data char*
/// @param maxlen long long
long long q_temporaryfile_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param data char*
/// @param maxlen long long
long long q_temporaryfile_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback long long func(QTemporaryFile* self, char* data, long long maxlen)
void q_temporaryfile_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
bool q_temporaryfile_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
bool q_temporaryfile_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback bool func()
void q_temporaryfile_on_reset(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
long long q_temporaryfile_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
long long q_temporaryfile_qbase_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback long long func()
void q_temporaryfile_on_bytes_available(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
long long q_temporaryfile_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
long long q_temporaryfile_qbase_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback long long func()
void q_temporaryfile_on_bytes_to_write(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
bool q_temporaryfile_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
bool q_temporaryfile_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback bool func()
void q_temporaryfile_on_can_read_line(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param msecs int
bool q_temporaryfile_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param msecs int
bool q_temporaryfile_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback bool func(QTemporaryFile* self, int msecs)
void q_temporaryfile_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param msecs int
bool q_temporaryfile_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param msecs int
bool q_temporaryfile_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback bool func(QTemporaryFile* self, int msecs)
void q_temporaryfile_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param maxSize long long
long long q_temporaryfile_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param maxSize long long
long long q_temporaryfile_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback long long func(QTemporaryFile* self, long long maxSize)
void q_temporaryfile_on_skip_data(void* self, long long (*callback)(void*, long long));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param event QEvent*
bool q_temporaryfile_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param event QEvent*
bool q_temporaryfile_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback bool func(QTemporaryFile* self, QEvent* event)
void q_temporaryfile_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param watched QObject*
/// @param event QEvent*
bool q_temporaryfile_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param watched QObject*
/// @param event QEvent*
bool q_temporaryfile_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback bool func(QTemporaryFile* self, QObject* watched, QEvent* event)
void q_temporaryfile_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param event QTimerEvent*
void q_temporaryfile_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param event QTimerEvent*
void q_temporaryfile_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self, QTimerEvent* event)
void q_temporaryfile_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param event QChildEvent*
void q_temporaryfile_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param event QChildEvent*
void q_temporaryfile_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self, QChildEvent* event)
void q_temporaryfile_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param event QEvent*
void q_temporaryfile_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param event QEvent*
void q_temporaryfile_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self, QEvent* event)
void q_temporaryfile_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param signal QMetaMethod*
void q_temporaryfile_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param signal QMetaMethod*
void q_temporaryfile_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self, QMetaMethod* signal)
void q_temporaryfile_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param signal QMetaMethod*
void q_temporaryfile_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param signal QMetaMethod*
void q_temporaryfile_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self, QMetaMethod* signal)
void q_temporaryfile_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_temporaryfile_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_temporaryfile_qbase_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
void q_temporaryfile_on_set_open_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param errorString const char*
void q_temporaryfile_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param errorString const char*
void q_temporaryfile_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self, const char* errorString)
void q_temporaryfile_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
QObject* q_temporaryfile_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
QObject* q_temporaryfile_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback QObject* func()
void q_temporaryfile_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
int32_t q_temporaryfile_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
int32_t q_temporaryfile_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback int32_t func()
void q_temporaryfile_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param signal const char*
int32_t q_temporaryfile_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param signal const char*
int32_t q_temporaryfile_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback int32_t func(QTemporaryFile* self, const char* signal)
void q_temporaryfile_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTemporaryFile*
/// @param signal QMetaMethod*
bool q_temporaryfile_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param signal QMetaMethod*
bool q_temporaryfile_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTemporaryFile*
/// @param callback bool func(QTemporaryFile* self, QMetaMethod* signal)
void q_temporaryfile_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTemporaryFile*
/// @param callback void func(QTemporaryFile* self, const char* objectName)
void q_temporaryfile_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#dtor.QTemporaryFile)
///
/// Delete this object from C++ memory.
///
/// @param self QTemporaryFile*
void q_temporaryfile_delete(void* self);

#endif

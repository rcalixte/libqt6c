#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSQT6C_LIBKAUTOSAVEFILE_H
#define SRC_EXTRAS_KCOREADDONSQT6C_LIBKAUTOSAVEFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kautosavefile.html

/// k_autosavefile_new constructs a new KAutoSaveFile object.
///
/// @param filename QUrl*
KAutoSaveFile* k_autosavefile_new(void* filename);

/// k_autosavefile_new2 constructs a new KAutoSaveFile object.
///
KAutoSaveFile* k_autosavefile_new2();

/// k_autosavefile_new3 constructs a new KAutoSaveFile object.
///
/// @param filename QUrl*
/// @param parent QObject*
KAutoSaveFile* k_autosavefile_new3(void* filename, void* parent);

/// k_autosavefile_new4 constructs a new KAutoSaveFile object.
///
/// @param parent QObject*
KAutoSaveFile* k_autosavefile_new4(void* parent);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
///
/// @param self KAutoSaveFile*
const QMetaObject* k_autosavefile_meta_object(void* self);

/// @param self KAutoSaveFile*
/// @param param1 const char*
void* k_autosavefile_metacast(void* self, const char* param1);

/// @param self KAutoSaveFile*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_autosavefile_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KAutoSaveFile*
/// @param callback int32_t func(KAutoSaveFile* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_autosavefile_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KAutoSaveFile*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_autosavefile_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_autosavefile_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#managedFile)
///
/// @param self KAutoSaveFile*
QUrl* k_autosavefile_managed_file(void* self);

/// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#setManagedFile)
///
/// @param self KAutoSaveFile*
/// @param filename QUrl*
void k_autosavefile_set_managed_file(void* self, void* filename);

/// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#releaseLock)
///
/// @param self KAutoSaveFile*
void k_autosavefile_release_lock(void* self);

/// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#releaseLock)
///
/// Allows for overriding the related default method
///
/// @param self KAutoSaveFile*
/// @param callback void func()
void k_autosavefile_on_release_lock(void* self, void (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#releaseLock)
///
/// Base class method implementation
///
/// @param self KAutoSaveFile*
void k_autosavefile_qbase_release_lock(void* self);

/// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#open)
///
/// @param self KAutoSaveFile*
/// @param openmode flag of enum QIODeviceBase__OpenModeFlag
bool k_autosavefile_open(void* self, int32_t openmode);

/// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#open)
///
/// Allows for overriding the related default method
///
/// @param self KAutoSaveFile*
/// @param callback bool func(KAutoSaveFile* self, flag of enum QIODeviceBase__OpenModeFlag openmode)
void k_autosavefile_on_open(void* self, bool (*callback)(void*, int32_t));

/// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#open)
///
/// Base class method implementation
///
/// @param self KAutoSaveFile*
/// @param openmode flag of enum QIODeviceBase__OpenModeFlag
bool k_autosavefile_qbase_open(void* self, int32_t openmode);

/// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#staleFiles)
///
/// @param url QUrl*
libqt_list /* of KAutoSaveFile* */ k_autosavefile_stale_files(void* url);

/// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#allStaleFiles)
///
libqt_list /* of KAutoSaveFile* */ k_autosavefile_all_stale_files();

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_autosavefile_tr2(const char* s, const char* c);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_autosavefile_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#staleFiles)
///
/// @param url QUrl*
/// @param applicationName const char*
libqt_list /* of KAutoSaveFile* */ k_autosavefile_stale_files2(void* url, const char* applicationName);

/// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#allStaleFiles)
///
/// @param applicationName const char*
libqt_list /* of KAutoSaveFile* */ k_autosavefile_all_stale_files1(const char* applicationName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setFileName)
///
/// @param self KAutoSaveFile*
/// @param name const char*
void k_autosavefile_set_file_name(void* self, const char* name);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#encodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param fileName const char*
char* k_autosavefile_encode_name(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#decodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param localFileName const char*
const char* k_autosavefile_decode_name(const char* localFileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#decodeName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param localFileName const char*
const char* k_autosavefile_decode_name2(const char* localFileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#exists)
///
/// @param self KAutoSaveFile*
bool k_autosavefile_exists(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#exists)
///
/// @param fileName const char*
bool k_autosavefile_exists2(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAutoSaveFile*
const char* k_autosavefile_sym_link_target(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
///
/// Caller is responsible for freeing the returned memory
///
/// @param fileName const char*
const char* k_autosavefile_sym_link_target2(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#remove)
///
/// @param self KAutoSaveFile*
bool k_autosavefile_remove(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#remove)
///
/// @param fileName const char*
bool k_autosavefile_remove2(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
///
/// @param self KAutoSaveFile*
bool k_autosavefile_move_to_trash(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
///
/// @param fileName const char*
bool k_autosavefile_move_to_trash2(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#rename)
///
/// @param self KAutoSaveFile*
/// @param newName const char*
bool k_autosavefile_rename(void* self, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#rename)
///
/// @param oldName const char*
/// @param newName const char*
bool k_autosavefile_rename2(const char* oldName, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#link)
///
/// @param self KAutoSaveFile*
/// @param newName const char*
bool k_autosavefile_link(void* self, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#link)
///
/// @param fileName const char*
/// @param newName const char*
bool k_autosavefile_link2(const char* fileName, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#copy)
///
/// @param self KAutoSaveFile*
/// @param newName const char*
bool k_autosavefile_copy(void* self, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#copy)
///
/// @param fileName const char*
/// @param newName const char*
bool k_autosavefile_copy2(const char* fileName, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// @param self KAutoSaveFile*
/// @param flags flag of enum QIODeviceBase__OpenModeFlag
/// @param permissions flag of enum QFileDevice__Permission
bool k_autosavefile_open2(void* self, int32_t flags, int32_t permissions);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// @param self KAutoSaveFile*
/// @param fd int
/// @param ioFlags flag of enum QIODeviceBase__OpenModeFlag
bool k_autosavefile_open4(void* self, int fd, int32_t ioFlags);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// @param filename const char*
/// @param sz long long
bool k_autosavefile_resize2(const char* filename, long long sz);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// @param filename const char*
///
/// @return flag of enum QFileDevice__Permission
int32_t k_autosavefile_permissions2(const char* filename);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// @param filename const char*
/// @param permissionSpec flag of enum QFileDevice__Permission
bool k_autosavefile_set_permissions2(const char* filename, int32_t permissionSpec);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// @param self KAutoSaveFile*
/// @param fd int
/// @param ioFlags flag of enum QIODeviceBase__OpenModeFlag
/// @param handleFlags flag of enum QFileDevice__FileHandleFlag
bool k_autosavefile_open33(void* self, int fd, int32_t ioFlags, int32_t handleFlags);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#error)
///
/// @param self KAutoSaveFile*
///
/// @return enum QFileDevice__FileError
int32_t k_autosavefile_error(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
///
/// @param self KAutoSaveFile*
void k_autosavefile_unset_error(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#handle)
///
/// @param self KAutoSaveFile*
int32_t k_autosavefile_handle(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#flush)
///
/// @param self KAutoSaveFile*
bool k_autosavefile_flush(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// @param self KAutoSaveFile*
/// @param offset long long
/// @param size long long
unsigned char* k_autosavefile_map(void* self, long long offset, long long size);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
///
/// @param self KAutoSaveFile*
/// @param address unsigned char*
bool k_autosavefile_unmap(void* self, unsigned char* address);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
///
/// @param self KAutoSaveFile*
/// @param time enum QFileDevice__FileTime
QDateTime* k_autosavefile_file_time(void* self, int32_t time);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
///
/// @param self KAutoSaveFile*
/// @param newDate QDateTime*
/// @param fileTime enum QFileDevice__FileTime
bool k_autosavefile_set_file_time(void* self, void* newDate, int32_t fileTime);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// @param self KAutoSaveFile*
/// @param offset long long
/// @param size long long
/// @param flags flag of enum QFileDevice__MemoryMapFlag
unsigned char* k_autosavefile_map3(void* self, long long offset, long long size, int32_t flags);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self KAutoSaveFile*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
int32_t k_autosavefile_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self KAutoSaveFile*
/// @param enabled bool
void k_autosavefile_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self KAutoSaveFile*
bool k_autosavefile_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self KAutoSaveFile*
bool k_autosavefile_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self KAutoSaveFile*
bool k_autosavefile_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self KAutoSaveFile*
bool k_autosavefile_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self KAutoSaveFile*
int32_t k_autosavefile_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self KAutoSaveFile*
int32_t k_autosavefile_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self KAutoSaveFile*
int32_t k_autosavefile_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self KAutoSaveFile*
/// @param channel int
void k_autosavefile_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self KAutoSaveFile*
int32_t k_autosavefile_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self KAutoSaveFile*
/// @param channel int
void k_autosavefile_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self KAutoSaveFile*
/// @param data char*
/// @param maxlen long long
long long k_autosavefile_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAutoSaveFile*
/// @param maxlen long long
char* k_autosavefile_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAutoSaveFile*
char* k_autosavefile_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self KAutoSaveFile*
/// @param data char*
/// @param maxlen long long
long long k_autosavefile_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAutoSaveFile*
char* k_autosavefile_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self KAutoSaveFile*
void k_autosavefile_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self KAutoSaveFile*
void k_autosavefile_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self KAutoSaveFile*
void k_autosavefile_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self KAutoSaveFile*
bool k_autosavefile_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self KAutoSaveFile*
/// @param data const char*
/// @param lenVal long long
long long k_autosavefile_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self KAutoSaveFile*
/// @param data const char*
long long k_autosavefile_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self KAutoSaveFile*
/// @param data const char*
long long k_autosavefile_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self KAutoSaveFile*
/// @param data char*
/// @param maxlen long long
long long k_autosavefile_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAutoSaveFile*
/// @param maxlen long long
char* k_autosavefile_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self KAutoSaveFile*
/// @param maxSize long long
long long k_autosavefile_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self KAutoSaveFile*
/// @param c char
void k_autosavefile_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self KAutoSaveFile*
/// @param c char
bool k_autosavefile_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self KAutoSaveFile*
/// @param c char*
bool k_autosavefile_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAutoSaveFile*
const char* k_autosavefile_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self KAutoSaveFile*
void k_autosavefile_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self)
void k_autosavefile_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self KAutoSaveFile*
/// @param channel int
void k_autosavefile_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self, int channel)
void k_autosavefile_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self KAutoSaveFile*
/// @param bytes long long
void k_autosavefile_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self, long long bytes)
void k_autosavefile_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self KAutoSaveFile*
/// @param channel int
/// @param bytes long long
void k_autosavefile_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self, int channel, long long bytes)
void k_autosavefile_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self KAutoSaveFile*
void k_autosavefile_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self)
void k_autosavefile_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self KAutoSaveFile*
void k_autosavefile_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self)
void k_autosavefile_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAutoSaveFile*
/// @param maxlen long long
char* k_autosavefile_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAutoSaveFile*
const char* k_autosavefile_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KAutoSaveFile*
/// @param name char*
void k_autosavefile_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KAutoSaveFile*
bool k_autosavefile_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KAutoSaveFile*
bool k_autosavefile_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KAutoSaveFile*
bool k_autosavefile_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KAutoSaveFile*
bool k_autosavefile_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KAutoSaveFile*
/// @param b bool
bool k_autosavefile_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KAutoSaveFile*
QThread* k_autosavefile_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KAutoSaveFile*
/// @param thread QThread*
bool k_autosavefile_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAutoSaveFile*
/// @param interval int
int32_t k_autosavefile_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KAutoSaveFile*
/// @param id int
void k_autosavefile_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KAutoSaveFile*
/// @param id enum Qt__TimerId
void k_autosavefile_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KAutoSaveFile*
libqt_list /* of QObject* */ k_autosavefile_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KAutoSaveFile*
/// @param parent QObject*
void k_autosavefile_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KAutoSaveFile*
/// @param filterObj QObject*
void k_autosavefile_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KAutoSaveFile*
/// @param obj QObject*
void k_autosavefile_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_autosavefile_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KAutoSaveFile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_autosavefile_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_autosavefile_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_autosavefile_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KAutoSaveFile*
void k_autosavefile_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KAutoSaveFile*
void k_autosavefile_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KAutoSaveFile*
/// @param name const char*
/// @param value QVariant*
bool k_autosavefile_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KAutoSaveFile*
/// @param name const char*
QVariant* k_autosavefile_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAutoSaveFile*
const char** k_autosavefile_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KAutoSaveFile*
QBindingStorage* k_autosavefile_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KAutoSaveFile*
const QBindingStorage* k_autosavefile_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAutoSaveFile*
void k_autosavefile_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self)
void k_autosavefile_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KAutoSaveFile*
QObject* k_autosavefile_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KAutoSaveFile*
/// @param classname const char*
bool k_autosavefile_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KAutoSaveFile*
void k_autosavefile_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KAutoSaveFile*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_autosavefile_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAutoSaveFile*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_autosavefile_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_autosavefile_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KAutoSaveFile*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_autosavefile_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAutoSaveFile*
/// @param param1 QObject*
void k_autosavefile_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self, QObject* param1)
void k_autosavefile_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
const char* k_autosavefile_file_name(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
const char* k_autosavefile_qbase_file_name(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#fileName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback const char* func()
void k_autosavefile_on_file_name(void* self, const char* (*callback)());

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
long long k_autosavefile_size(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
long long k_autosavefile_qbase_size(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback long long func()
void k_autosavefile_on_size(void* self, long long (*callback)());

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param sz long long
bool k_autosavefile_resize(void* self, long long sz);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param sz long long
bool k_autosavefile_qbase_resize(void* self, long long sz);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback bool func(KAutoSaveFile* self, long long sz)
void k_autosavefile_on_resize(void* self, bool (*callback)(void*, long long));

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
///
/// @return flag of enum QFileDevice__Permission
int32_t k_autosavefile_permissions(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
///
/// @return flag of enum QFileDevice__Permission
int32_t k_autosavefile_qbase_permissions(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback int32_t func()
void k_autosavefile_on_permissions(void* self, int32_t (*callback)());

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param permissionSpec flag of enum QFileDevice__Permission
bool k_autosavefile_set_permissions(void* self, int32_t permissionSpec);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param permissionSpec flag of enum QFileDevice__Permission
bool k_autosavefile_qbase_set_permissions(void* self, int32_t permissionSpec);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback bool func(KAutoSaveFile* self, flag of enum QFileDevice__Permission permissionSpec)
void k_autosavefile_on_set_permissions(void* self, bool (*callback)(void*, int32_t));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
void k_autosavefile_close(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
void k_autosavefile_qbase_close(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback void func()
void k_autosavefile_on_close(void* self, void (*callback)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
bool k_autosavefile_is_sequential(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
bool k_autosavefile_qbase_is_sequential(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback bool func()
void k_autosavefile_on_is_sequential(void* self, bool (*callback)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
long long k_autosavefile_pos(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
long long k_autosavefile_qbase_pos(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback long long func()
void k_autosavefile_on_pos(void* self, long long (*callback)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param offset long long
bool k_autosavefile_seek(void* self, long long offset);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param offset long long
bool k_autosavefile_qbase_seek(void* self, long long offset);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback bool func(KAutoSaveFile* self, long long offset)
void k_autosavefile_on_seek(void* self, bool (*callback)(void*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
bool k_autosavefile_at_end(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
bool k_autosavefile_qbase_at_end(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback bool func()
void k_autosavefile_on_at_end(void* self, bool (*callback)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param data char*
/// @param maxlen long long
long long k_autosavefile_read_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param data char*
/// @param maxlen long long
long long k_autosavefile_qbase_read_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback long long func(KAutoSaveFile* self, char* data, long long maxlen)
void k_autosavefile_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param data const char*
/// @param lenVal long long
long long k_autosavefile_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param data const char*
/// @param lenVal long long
long long k_autosavefile_qbase_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback long long func(KAutoSaveFile* self, const char* data, long long lenVal)
void k_autosavefile_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param data char*
/// @param maxlen long long
long long k_autosavefile_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param data char*
/// @param maxlen long long
long long k_autosavefile_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback long long func(KAutoSaveFile* self, char* data, long long maxlen)
void k_autosavefile_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
bool k_autosavefile_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
bool k_autosavefile_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback bool func()
void k_autosavefile_on_reset(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
long long k_autosavefile_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
long long k_autosavefile_qbase_bytes_available(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback long long func()
void k_autosavefile_on_bytes_available(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
long long k_autosavefile_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
long long k_autosavefile_qbase_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback long long func()
void k_autosavefile_on_bytes_to_write(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
bool k_autosavefile_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
bool k_autosavefile_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback bool func()
void k_autosavefile_on_can_read_line(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param msecs int
bool k_autosavefile_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param msecs int
bool k_autosavefile_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback bool func(KAutoSaveFile* self, int msecs)
void k_autosavefile_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param msecs int
bool k_autosavefile_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param msecs int
bool k_autosavefile_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback bool func(KAutoSaveFile* self, int msecs)
void k_autosavefile_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param maxSize long long
long long k_autosavefile_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param maxSize long long
long long k_autosavefile_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback long long func(KAutoSaveFile* self, long long maxSize)
void k_autosavefile_on_skip_data(void* self, long long (*callback)(void*, long long));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param event QEvent*
bool k_autosavefile_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param event QEvent*
bool k_autosavefile_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback bool func(KAutoSaveFile* self, QEvent* event)
void k_autosavefile_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param watched QObject*
/// @param event QEvent*
bool k_autosavefile_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param watched QObject*
/// @param event QEvent*
bool k_autosavefile_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback bool func(KAutoSaveFile* self, QObject* watched, QEvent* event)
void k_autosavefile_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param event QTimerEvent*
void k_autosavefile_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param event QTimerEvent*
void k_autosavefile_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self, QTimerEvent* event)
void k_autosavefile_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param event QChildEvent*
void k_autosavefile_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param event QChildEvent*
void k_autosavefile_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self, QChildEvent* event)
void k_autosavefile_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param event QEvent*
void k_autosavefile_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param event QEvent*
void k_autosavefile_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self, QEvent* event)
void k_autosavefile_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param signal QMetaMethod*
void k_autosavefile_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param signal QMetaMethod*
void k_autosavefile_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self, QMetaMethod* signal)
void k_autosavefile_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param signal QMetaMethod*
void k_autosavefile_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param signal QMetaMethod*
void k_autosavefile_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self, QMetaMethod* signal)
void k_autosavefile_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void k_autosavefile_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void k_autosavefile_qbase_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
void k_autosavefile_on_set_open_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param errorString const char*
void k_autosavefile_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param errorString const char*
void k_autosavefile_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self, const char* errorString)
void k_autosavefile_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
QObject* k_autosavefile_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
QObject* k_autosavefile_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback QObject* func()
void k_autosavefile_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
int32_t k_autosavefile_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
int32_t k_autosavefile_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback int32_t func()
void k_autosavefile_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param signal const char*
int32_t k_autosavefile_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param signal const char*
int32_t k_autosavefile_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback int32_t func(KAutoSaveFile* self, const char* signal)
void k_autosavefile_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param signal QMetaMethod*
bool k_autosavefile_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param signal QMetaMethod*
bool k_autosavefile_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAutoSaveFile*
/// @param callback bool func(KAutoSaveFile* self, QMetaMethod* signal)
void k_autosavefile_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KAutoSaveFile*
/// @param callback void func(KAutoSaveFile* self, const char* objectName)
void k_autosavefile_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#dtor.KAutoSaveFile)
///
/// Delete this object from C++ memory.
///
/// @param self KAutoSaveFile*
void k_autosavefile_delete(void* self);

#endif

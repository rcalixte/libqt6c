#pragma once
#ifndef SRCQT6C_LIBQTEMPORARYFILE_H
#define SRCQT6C_LIBQTEMPORARYFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqdatetime.h"
#include "libqfile.h"
#include "libqfiledevice.h"
#include "libqiodevice.h"
#include "libqiodevicebase.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qtemporaryfile.html

/// q_temporaryfile_new constructs a new QTemporaryFile object.
///
///
QTemporaryFile* q_temporaryfile_new();

/// q_temporaryfile_new2 constructs a new QTemporaryFile object.
///
/// ``` const char* templateName ```
QTemporaryFile* q_temporaryfile_new2(const char* templateName);

/// q_temporaryfile_new3 constructs a new QTemporaryFile object.
///
/// ``` QObject* parent ```
QTemporaryFile* q_temporaryfile_new3(void* parent);

/// q_temporaryfile_new4 constructs a new QTemporaryFile object.
///
/// ``` const char* templateName, QObject* parent ```
QTemporaryFile* q_temporaryfile_new4(const char* templateName, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTemporaryFile* self ```
QMetaObject* q_temporaryfile_meta_object(void* self);

/// ``` QTemporaryFile* self, const char* param1 ```
void* q_temporaryfile_metacast(void* self, const char* param1);

/// ``` QTemporaryFile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_temporaryfile_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTemporaryFile* self, int32_t (*slot)(QTemporaryFile*, enum QMetaObject__Call, int, void*) ```
void q_temporaryfile_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTemporaryFile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_temporaryfile_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_temporaryfile_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#autoRemove)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_auto_remove(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#setAutoRemove)
///
/// ``` QTemporaryFile* self, bool b ```
void q_temporaryfile_set_auto_remove(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#open)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_open(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#fileName)
///
/// ``` QTemporaryFile* self ```
const char* q_temporaryfile_file_name(void* self);

/// Allows for overriding the related default method
///
/// ``` QTemporaryFile* self, const char* (*slot)() ```
void q_temporaryfile_on_file_name(void* self, const char* (*slot)());

/// Base class method implementation
///
/// ``` QTemporaryFile* self ```
const char* q_temporaryfile_qbase_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#fileTemplate)
///
/// ``` QTemporaryFile* self ```
const char* q_temporaryfile_file_template(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#setFileTemplate)
///
/// ``` QTemporaryFile* self, const char* name ```
void q_temporaryfile_set_file_template(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#rename)
///
/// ``` QTemporaryFile* self, const char* newName ```
bool q_temporaryfile_rename(void* self, const char* newName);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#createNativeFile)
///
/// ``` const char* fileName ```
QTemporaryFile* q_temporaryfile_create_native_file(const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#createNativeFile)
///
/// ``` QFile* file ```
QTemporaryFile* q_temporaryfile_create_native_file_with_file(void* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporaryfile.html#open)
///
/// ``` QTemporaryFile* self, int flags ```
bool q_temporaryfile_open_with_flags(void* self, int64_t flags);

/// Allows for overriding the related default method
///
/// ``` QTemporaryFile* self, bool (*slot)(QTemporaryFile*, int) ```
void q_temporaryfile_on_open_with_flags(void* self, bool (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QTemporaryFile* self, int flags ```
bool q_temporaryfile_qbase_open_with_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_temporaryfile_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_temporaryfile_tr3(const char* s, const char* c, int n);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setFileName)
///
/// ``` QTemporaryFile* self, const char* name ```
void q_temporaryfile_set_file_name(void* self, const char* name);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#encodeName)
///
/// ``` const char* fileName ```
char* q_temporaryfile_encode_name(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#decodeName)
///
/// ``` const char* localFileName ```
const char* q_temporaryfile_decode_name(const char* localFileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#decodeName)
///
/// ``` const char* localFileName ```
const char* q_temporaryfile_decode_name_with_local_file_name(const char* localFileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#exists)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_exists(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#exists)
///
/// ``` const char* fileName ```
bool q_temporaryfile_exists_with_file_name(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
///
/// ``` QTemporaryFile* self ```
const char* q_temporaryfile_sym_link_target(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
///
/// ``` const char* fileName ```
const char* q_temporaryfile_sym_link_target_with_file_name(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#remove)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_remove(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#remove)
///
/// ``` const char* fileName ```
bool q_temporaryfile_remove_with_file_name(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_move_to_trash(void* self);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
///
/// ``` const char* fileName ```
bool q_temporaryfile_move_to_trash_with_file_name(const char* fileName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#rename)
///
/// ``` const char* oldName, const char* newName ```
bool q_temporaryfile_rename2(const char* oldName, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#link)
///
/// ``` QTemporaryFile* self, const char* newName ```
bool q_temporaryfile_link(void* self, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#link)
///
/// ``` const char* fileName, const char* newName ```
bool q_temporaryfile_link2(const char* fileName, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#copy)
///
/// ``` QTemporaryFile* self, const char* newName ```
bool q_temporaryfile_copy(void* self, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#copy)
///
/// ``` const char* fileName, const char* newName ```
bool q_temporaryfile_copy2(const char* fileName, const char* newName);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// ``` QTemporaryFile* self, int flags, int permissions ```
bool q_temporaryfile_open2(void* self, int64_t flags, int64_t permissions);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// ``` QTemporaryFile* self, int fd, int ioFlags ```
bool q_temporaryfile_open4(void* self, int fd, int64_t ioFlags);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// ``` const char* filename, long long sz ```
bool q_temporaryfile_resize2(const char* filename, long long sz);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// ``` const char* filename ```
int64_t q_temporaryfile_permissions_with_filename(const char* filename);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// ``` const char* filename, int permissionSpec ```
bool q_temporaryfile_set_permissions2(const char* filename, int64_t permissionSpec);

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// ``` QTemporaryFile* self, int fd, int ioFlags, int handleFlags ```
bool q_temporaryfile_open33(void* self, int fd, int64_t ioFlags, int64_t handleFlags);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#error)
///
/// ``` QTemporaryFile* self ```
int64_t q_temporaryfile_error(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
///
/// ``` QTemporaryFile* self ```
void q_temporaryfile_unset_error(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#handle)
///
/// ``` QTemporaryFile* self ```
int32_t q_temporaryfile_handle(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#flush)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_flush(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// ``` QTemporaryFile* self, long long offset, long long size ```
unsigned char* q_temporaryfile_map(void* self, long long offset, long long size);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
///
/// ``` QTemporaryFile* self, unsigned char* address ```
bool q_temporaryfile_unmap(void* self, unsigned char* address);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
///
/// ``` QTemporaryFile* self, enum QFileDevice__FileTime time ```
QDateTime* q_temporaryfile_file_time(void* self, int64_t time);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
///
/// ``` QTemporaryFile* self, QDateTime* newDate, enum QFileDevice__FileTime fileTime ```
bool q_temporaryfile_set_file_time(void* self, void* newDate, int64_t fileTime);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// ``` QTemporaryFile* self, long long offset, long long size, int flags ```
unsigned char* q_temporaryfile_map3(void* self, long long offset, long long size, int64_t flags);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QTemporaryFile* self ```
int64_t q_temporaryfile_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QTemporaryFile* self, bool enabled ```
void q_temporaryfile_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QTemporaryFile* self ```
int32_t q_temporaryfile_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QTemporaryFile* self ```
int32_t q_temporaryfile_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QTemporaryFile* self ```
int32_t q_temporaryfile_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QTemporaryFile* self, int channel ```
void q_temporaryfile_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QTemporaryFile* self ```
int32_t q_temporaryfile_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QTemporaryFile* self, int channel ```
void q_temporaryfile_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QTemporaryFile* self, char* data, long long maxlen ```
long long q_temporaryfile_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QTemporaryFile* self, long long maxlen ```
char* q_temporaryfile_read_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QTemporaryFile* self ```
char* q_temporaryfile_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QTemporaryFile* self, char* data, long long maxlen ```
long long q_temporaryfile_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QTemporaryFile* self ```
char* q_temporaryfile_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QTemporaryFile* self ```
void q_temporaryfile_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QTemporaryFile* self ```
void q_temporaryfile_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QTemporaryFile* self ```
void q_temporaryfile_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QTemporaryFile* self, const char* data, long long lenVal ```
long long q_temporaryfile_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QTemporaryFile* self, const char* data ```
long long q_temporaryfile_write_with_data(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QTemporaryFile* self, const char* data ```
long long q_temporaryfile_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QTemporaryFile* self, char* data, long long maxlen ```
long long q_temporaryfile_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QTemporaryFile* self, long long maxlen ```
char* q_temporaryfile_peek_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QTemporaryFile* self, long long maxSize ```
long long q_temporaryfile_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QTemporaryFile* self, char c ```
void q_temporaryfile_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QTemporaryFile* self, char c ```
bool q_temporaryfile_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QTemporaryFile* self, char* c ```
bool q_temporaryfile_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QTemporaryFile* self ```
const char* q_temporaryfile_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QTemporaryFile* self ```
void q_temporaryfile_ready_read(void* self);

/// Inherited from QIODevice
///
/// ``` QTemporaryFile* self, void (*slot)(QIODevice*) ```
void q_temporaryfile_on_ready_read(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QTemporaryFile* self, int channel ```
void q_temporaryfile_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// ``` QTemporaryFile* self, void (*slot)(QIODevice*, int) ```
void q_temporaryfile_on_channel_ready_read(void* self, void (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QTemporaryFile* self, long long bytes ```
void q_temporaryfile_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// ``` QTemporaryFile* self, void (*slot)(QIODevice*, long long) ```
void q_temporaryfile_on_bytes_written(void* self, void (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QTemporaryFile* self, int channel, long long bytes ```
void q_temporaryfile_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// ``` QTemporaryFile* self, void (*slot)(QIODevice*, int, long long) ```
void q_temporaryfile_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QTemporaryFile* self ```
void q_temporaryfile_about_to_close(void* self);

/// Inherited from QIODevice
///
/// ``` QTemporaryFile* self, void (*slot)(QIODevice*) ```
void q_temporaryfile_on_about_to_close(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QTemporaryFile* self ```
void q_temporaryfile_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// ``` QTemporaryFile* self, void (*slot)(QIODevice*) ```
void q_temporaryfile_on_read_channel_finished(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QTemporaryFile* self, long long maxlen ```
char* q_temporaryfile_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTemporaryFile* self ```
const char* q_temporaryfile_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTemporaryFile* self, char* name ```
void q_temporaryfile_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTemporaryFile* self, bool b ```
bool q_temporaryfile_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTemporaryFile* self ```
QThread* q_temporaryfile_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTemporaryFile* self, QThread* thread ```
void q_temporaryfile_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTemporaryFile* self, int interval ```
int32_t q_temporaryfile_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTemporaryFile* self, int id ```
void q_temporaryfile_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTemporaryFile* self ```
libqt_list /* of QObject* */ q_temporaryfile_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTemporaryFile* self, QObject* parent ```
void q_temporaryfile_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTemporaryFile* self, QObject* filterObj ```
void q_temporaryfile_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTemporaryFile* self, QObject* obj ```
void q_temporaryfile_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_temporaryfile_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTemporaryFile* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_temporaryfile_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_temporaryfile_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_temporaryfile_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTemporaryFile* self ```
void q_temporaryfile_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTemporaryFile* self ```
void q_temporaryfile_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTemporaryFile* self, const char* name, QVariant* value ```
bool q_temporaryfile_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTemporaryFile* self, const char* name ```
QVariant* q_temporaryfile_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTemporaryFile* self ```
const char** q_temporaryfile_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTemporaryFile* self ```
QBindingStorage* q_temporaryfile_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTemporaryFile* self ```
QBindingStorage* q_temporaryfile_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTemporaryFile* self ```
void q_temporaryfile_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QTemporaryFile* self, void (*slot)(QObject*) ```
void q_temporaryfile_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTemporaryFile* self ```
QObject* q_temporaryfile_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTemporaryFile* self, const char* classname ```
bool q_temporaryfile_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTemporaryFile* self ```
void q_temporaryfile_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTemporaryFile* self, int interval, enum Qt__TimerType timerType ```
int32_t q_temporaryfile_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_temporaryfile_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTemporaryFile* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_temporaryfile_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTemporaryFile* self, QObject* param1 ```
void q_temporaryfile_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QTemporaryFile* self, void (*slot)(QObject*, QObject*) ```
void q_temporaryfile_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self ```
long long q_temporaryfile_size(void* self);

/// Inherited from QFile
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self ```
long long q_temporaryfile_qbase_size(void* self);

/// Inherited from QFile
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, long long (*slot)() ```
void q_temporaryfile_on_size(void* self, long long (*slot)());

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, long long sz ```
bool q_temporaryfile_resize(void* self, long long sz);

/// Inherited from QFile
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, long long sz ```
bool q_temporaryfile_qbase_resize(void* self, long long sz);

/// Inherited from QFile
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, bool (*slot)(QTemporaryFile*, long long) ```
void q_temporaryfile_on_resize(void* self, bool (*slot)(void*, long long));

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self ```
int64_t q_temporaryfile_permissions(void* self);

/// Inherited from QFile
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self ```
int64_t q_temporaryfile_qbase_permissions(void* self);

/// Inherited from QFile
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, int64_t (*slot)() ```
void q_temporaryfile_on_permissions(void* self, int64_t (*slot)());

/// Inherited from QFile
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, int permissionSpec ```
bool q_temporaryfile_set_permissions(void* self, int64_t permissionSpec);

/// Inherited from QFile
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, int permissionSpec ```
bool q_temporaryfile_qbase_set_permissions(void* self, int64_t permissionSpec);

/// Inherited from QFile
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, bool (*slot)(QTemporaryFile*, int) ```
void q_temporaryfile_on_set_permissions(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self ```
void q_temporaryfile_close(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self ```
void q_temporaryfile_qbase_close(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, void (*slot)() ```
void q_temporaryfile_on_close(void* self, void (*slot)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_is_sequential(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_qbase_is_sequential(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, bool (*slot)() ```
void q_temporaryfile_on_is_sequential(void* self, bool (*slot)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self ```
long long q_temporaryfile_pos(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self ```
long long q_temporaryfile_qbase_pos(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, long long (*slot)() ```
void q_temporaryfile_on_pos(void* self, long long (*slot)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, long long offset ```
bool q_temporaryfile_seek(void* self, long long offset);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, long long offset ```
bool q_temporaryfile_qbase_seek(void* self, long long offset);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, bool (*slot)(QTemporaryFile*, long long) ```
void q_temporaryfile_on_seek(void* self, bool (*slot)(void*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_at_end(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_qbase_at_end(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, bool (*slot)() ```
void q_temporaryfile_on_at_end(void* self, bool (*slot)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, char* data, long long maxlen ```
long long q_temporaryfile_read_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, char* data, long long maxlen ```
long long q_temporaryfile_qbase_read_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, long long (*slot)(QTemporaryFile*, char*, long long) ```
void q_temporaryfile_on_read_data(void* self, long long (*slot)(void*, char*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, const char* data, long long lenVal ```
long long q_temporaryfile_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, const char* data, long long lenVal ```
long long q_temporaryfile_qbase_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, long long (*slot)(QTemporaryFile*, const char*, long long) ```
void q_temporaryfile_on_write_data(void* self, long long (*slot)(void*, const char*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, char* data, long long maxlen ```
long long q_temporaryfile_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, char* data, long long maxlen ```
long long q_temporaryfile_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, long long (*slot)(QTemporaryFile*, char*, long long) ```
void q_temporaryfile_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_reset(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, bool (*slot)() ```
void q_temporaryfile_on_reset(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self ```
long long q_temporaryfile_bytes_available(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self ```
long long q_temporaryfile_qbase_bytes_available(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, long long (*slot)() ```
void q_temporaryfile_on_bytes_available(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self ```
long long q_temporaryfile_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self ```
long long q_temporaryfile_qbase_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, long long (*slot)() ```
void q_temporaryfile_on_bytes_to_write(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_can_read_line(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self ```
bool q_temporaryfile_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, bool (*slot)() ```
void q_temporaryfile_on_can_read_line(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, int msecs ```
bool q_temporaryfile_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, int msecs ```
bool q_temporaryfile_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, bool (*slot)(QTemporaryFile*, int) ```
void q_temporaryfile_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, int msecs ```
bool q_temporaryfile_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, int msecs ```
bool q_temporaryfile_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, bool (*slot)(QTemporaryFile*, int) ```
void q_temporaryfile_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, long long maxSize ```
long long q_temporaryfile_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, long long maxSize ```
long long q_temporaryfile_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, long long (*slot)(QTemporaryFile*, long long) ```
void q_temporaryfile_on_skip_data(void* self, long long (*slot)(void*, long long));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, QEvent* event ```
bool q_temporaryfile_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, QEvent* event ```
bool q_temporaryfile_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, bool (*slot)(QTemporaryFile*, QEvent*) ```
void q_temporaryfile_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, QObject* watched, QEvent* event ```
bool q_temporaryfile_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, QObject* watched, QEvent* event ```
bool q_temporaryfile_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, bool (*slot)(QTemporaryFile*, QObject*, QEvent*) ```
void q_temporaryfile_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, QTimerEvent* event ```
void q_temporaryfile_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, QTimerEvent* event ```
void q_temporaryfile_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, void (*slot)(QTemporaryFile*, QTimerEvent*) ```
void q_temporaryfile_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, QChildEvent* event ```
void q_temporaryfile_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, QChildEvent* event ```
void q_temporaryfile_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, void (*slot)(QTemporaryFile*, QChildEvent*) ```
void q_temporaryfile_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, QEvent* event ```
void q_temporaryfile_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, QEvent* event ```
void q_temporaryfile_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, void (*slot)(QTemporaryFile*, QEvent*) ```
void q_temporaryfile_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, QMetaMethod* signal ```
void q_temporaryfile_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, QMetaMethod* signal ```
void q_temporaryfile_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, void (*slot)(QTemporaryFile*, QMetaMethod*) ```
void q_temporaryfile_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, QMetaMethod* signal ```
void q_temporaryfile_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, QMetaMethod* signal ```
void q_temporaryfile_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, void (*slot)(QTemporaryFile*, QMetaMethod*) ```
void q_temporaryfile_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, int openMode ```
void q_temporaryfile_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, int openMode ```
void q_temporaryfile_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, void (*slot)(QTemporaryFile*, int) ```
void q_temporaryfile_on_set_open_mode(void* self, void (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, const char* errorString ```
void q_temporaryfile_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, const char* errorString ```
void q_temporaryfile_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, void (*slot)(QTemporaryFile*, const char*) ```
void q_temporaryfile_on_set_error_string(void* self, void (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self ```
QObject* q_temporaryfile_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self ```
QObject* q_temporaryfile_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, QObject* (*slot)() ```
void q_temporaryfile_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self ```
int32_t q_temporaryfile_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self ```
int32_t q_temporaryfile_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, int32_t (*slot)() ```
void q_temporaryfile_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, const char* signal ```
int32_t q_temporaryfile_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, const char* signal ```
int32_t q_temporaryfile_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, int32_t (*slot)(QTemporaryFile*, const char*) ```
void q_temporaryfile_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTemporaryFile* self, QMetaMethod* signal ```
bool q_temporaryfile_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTemporaryFile* self, QMetaMethod* signal ```
bool q_temporaryfile_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTemporaryFile* self, bool (*slot)(QTemporaryFile*, QMetaMethod*) ```
void q_temporaryfile_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QTemporaryFile* self ```
void q_temporaryfile_delete(void* self);

#endif

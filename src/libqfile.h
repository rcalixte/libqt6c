#pragma once
#ifndef SRCQT6C_LIBQFILE_H
#define SRCQT6C_LIBQFILE_H

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
#include "libqfiledevice.h"
#include "libqiodevice.h"
#include "libqiodevicebase.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qfile.html

/// q_file_new constructs a new QFile object.
///
///
QFile* q_file_new();

/// q_file_new2 constructs a new QFile object.
///
/// ``` const char* name ```
QFile* q_file_new2(const char* name);

/// q_file_new3 constructs a new QFile object.
///
/// ``` QObject* parent ```
QFile* q_file_new3(void* parent);

/// q_file_new4 constructs a new QFile object.
///
/// ``` const char* name, QObject* parent ```
QFile* q_file_new4(const char* name, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFile* self ```
QMetaObject* q_file_meta_object(void* self);

/// ``` QFile* self, const char* param1 ```
void* q_file_metacast(void* self, const char* param1);

/// ``` QFile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_file_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QFile* self, int32_t (*slot)(QFile*, enum QMetaObject__Call, int, void*) ```
void q_file_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QFile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_file_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_file_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#fileName)
///
/// ``` QFile* self ```
const char* q_file_file_name(void* self);

/// Allows for overriding the related default method
///
/// ``` QFile* self, const char* (*slot)() ```
void q_file_on_file_name(void* self, const char* (*slot)());

/// Base class method implementation
///
/// ``` QFile* self ```
const char* q_file_qbase_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setFileName)
///
/// ``` QFile* self, const char* name ```
void q_file_set_file_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#encodeName)
///
/// ``` const char* fileName ```
char* q_file_encode_name(const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#decodeName)
///
/// ``` const char* localFileName ```
const char* q_file_decode_name(const char* localFileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#decodeName)
///
/// ``` const char* localFileName ```
const char* q_file_decode_name_with_local_file_name(const char* localFileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#exists)
///
/// ``` QFile* self ```
bool q_file_exists(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#exists)
///
/// ``` const char* fileName ```
bool q_file_exists_with_file_name(const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
///
/// ``` QFile* self ```
const char* q_file_sym_link_target(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
///
/// ``` const char* fileName ```
const char* q_file_sym_link_target_with_file_name(const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#remove)
///
/// ``` QFile* self ```
bool q_file_remove(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#remove)
///
/// ``` const char* fileName ```
bool q_file_remove_with_file_name(const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
///
/// ``` QFile* self ```
bool q_file_move_to_trash(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
///
/// ``` const char* fileName ```
bool q_file_move_to_trash_with_file_name(const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#rename)
///
/// ``` QFile* self, const char* newName ```
bool q_file_rename(void* self, const char* newName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#rename)
///
/// ``` const char* oldName, const char* newName ```
bool q_file_rename2(const char* oldName, const char* newName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#link)
///
/// ``` QFile* self, const char* newName ```
bool q_file_link(void* self, const char* newName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#link)
///
/// ``` const char* fileName, const char* newName ```
bool q_file_link2(const char* fileName, const char* newName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#copy)
///
/// ``` QFile* self, const char* newName ```
bool q_file_copy(void* self, const char* newName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#copy)
///
/// ``` const char* fileName, const char* newName ```
bool q_file_copy2(const char* fileName, const char* newName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// ``` QFile* self, int flags ```
bool q_file_open(void* self, int64_t flags);

/// Allows for overriding the related default method
///
/// ``` QFile* self, bool (*slot)(QFile*, int) ```
void q_file_on_open(void* self, bool (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QFile* self, int flags ```
bool q_file_qbase_open(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// ``` QFile* self, int flags, int permissions ```
bool q_file_open2(void* self, int64_t flags, int64_t permissions);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// ``` QFile* self, int fd, int ioFlags ```
bool q_file_open4(void* self, int fd, int64_t ioFlags);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
///
/// ``` QFile* self ```
long long q_file_size(void* self);

/// Allows for overriding the related default method
///
/// ``` QFile* self, long long (*slot)() ```
void q_file_on_size(void* self, long long (*slot)());

/// Base class method implementation
///
/// ``` QFile* self ```
long long q_file_qbase_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// ``` QFile* self, long long sz ```
bool q_file_resize(void* self, long long sz);

/// Allows for overriding the related default method
///
/// ``` QFile* self, bool (*slot)(QFile*, long long) ```
void q_file_on_resize(void* self, bool (*slot)(void*, long long));

/// Base class method implementation
///
/// ``` QFile* self, long long sz ```
bool q_file_qbase_resize(void* self, long long sz);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
///
/// ``` const char* filename, long long sz ```
bool q_file_resize2(const char* filename, long long sz);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// ``` QFile* self ```
int64_t q_file_permissions(void* self);

/// Allows for overriding the related default method
///
/// ``` QFile* self, int64_t (*slot)() ```
void q_file_on_permissions(void* self, int64_t (*slot)());

/// Base class method implementation
///
/// ``` QFile* self ```
int64_t q_file_qbase_permissions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
///
/// ``` const char* filename ```
int64_t q_file_permissions_with_filename(const char* filename);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// ``` QFile* self, int permissionSpec ```
bool q_file_set_permissions(void* self, int64_t permissionSpec);

/// Allows for overriding the related default method
///
/// ``` QFile* self, bool (*slot)(QFile*, int) ```
void q_file_on_set_permissions(void* self, bool (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QFile* self, int permissionSpec ```
bool q_file_qbase_set_permissions(void* self, int64_t permissionSpec);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
///
/// ``` const char* filename, int permissionSpec ```
bool q_file_set_permissions2(const char* filename, int64_t permissionSpec);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_file_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_file_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
///
/// ``` QFile* self, int fd, int ioFlags, int handleFlags ```
bool q_file_open33(void* self, int fd, int64_t ioFlags, int64_t handleFlags);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#error)
///
/// ``` QFile* self ```
int64_t q_file_error(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
///
/// ``` QFile* self ```
void q_file_unset_error(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#handle)
///
/// ``` QFile* self ```
int32_t q_file_handle(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#flush)
///
/// ``` QFile* self ```
bool q_file_flush(void* self);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// ``` QFile* self, long long offset, long long size ```
unsigned char* q_file_map(void* self, long long offset, long long size);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
///
/// ``` QFile* self, unsigned char* address ```
bool q_file_unmap(void* self, unsigned char* address);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
///
/// ``` QFile* self, enum QFileDevice__FileTime time ```
QDateTime* q_file_file_time(void* self, int64_t time);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
///
/// ``` QFile* self, QDateTime* newDate, enum QFileDevice__FileTime fileTime ```
bool q_file_set_file_time(void* self, void* newDate, int64_t fileTime);

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// ``` QFile* self, long long offset, long long size, int flags ```
unsigned char* q_file_map3(void* self, long long offset, long long size, int64_t flags);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QFile* self ```
int64_t q_file_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QFile* self, bool enabled ```
void q_file_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QFile* self ```
bool q_file_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QFile* self ```
bool q_file_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QFile* self ```
bool q_file_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QFile* self ```
bool q_file_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QFile* self ```
int32_t q_file_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QFile* self ```
int32_t q_file_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QFile* self ```
int32_t q_file_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QFile* self, int channel ```
void q_file_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QFile* self ```
int32_t q_file_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QFile* self, int channel ```
void q_file_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QFile* self, char* data, long long maxlen ```
long long q_file_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QFile* self, long long maxlen ```
char* q_file_read_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QFile* self ```
char* q_file_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QFile* self, char* data, long long maxlen ```
long long q_file_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QFile* self ```
char* q_file_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QFile* self ```
void q_file_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QFile* self ```
void q_file_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QFile* self ```
void q_file_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QFile* self ```
bool q_file_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QFile* self, const char* data, long long lenVal ```
long long q_file_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QFile* self, const char* data ```
long long q_file_write_with_data(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QFile* self, const char* data ```
long long q_file_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QFile* self, char* data, long long maxlen ```
long long q_file_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QFile* self, long long maxlen ```
char* q_file_peek_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QFile* self, long long maxSize ```
long long q_file_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QFile* self, char c ```
void q_file_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QFile* self, char c ```
bool q_file_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QFile* self, char* c ```
bool q_file_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QFile* self ```
const char* q_file_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QFile* self ```
void q_file_ready_read(void* self);

/// Inherited from QIODevice
///
/// ``` QFile* self, void (*slot)(QIODevice*) ```
void q_file_on_ready_read(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QFile* self, int channel ```
void q_file_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// ``` QFile* self, void (*slot)(QIODevice*, int) ```
void q_file_on_channel_ready_read(void* self, void (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QFile* self, long long bytes ```
void q_file_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// ``` QFile* self, void (*slot)(QIODevice*, long long) ```
void q_file_on_bytes_written(void* self, void (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QFile* self, int channel, long long bytes ```
void q_file_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// ``` QFile* self, void (*slot)(QIODevice*, int, long long) ```
void q_file_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QFile* self ```
void q_file_about_to_close(void* self);

/// Inherited from QIODevice
///
/// ``` QFile* self, void (*slot)(QIODevice*) ```
void q_file_on_about_to_close(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QFile* self ```
void q_file_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// ``` QFile* self, void (*slot)(QIODevice*) ```
void q_file_on_read_channel_finished(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QFile* self, long long maxlen ```
char* q_file_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFile* self ```
const char* q_file_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFile* self, char* name ```
void q_file_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFile* self ```
bool q_file_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFile* self ```
bool q_file_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFile* self ```
bool q_file_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFile* self ```
bool q_file_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFile* self, bool b ```
bool q_file_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFile* self ```
QThread* q_file_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFile* self, QThread* thread ```
void q_file_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFile* self, int interval ```
int32_t q_file_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFile* self, int id ```
void q_file_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFile* self ```
libqt_list /* of QObject* */ q_file_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QFile* self, QObject* parent ```
void q_file_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFile* self, QObject* filterObj ```
void q_file_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFile* self, QObject* obj ```
void q_file_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_file_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFile* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_file_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_file_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_file_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFile* self ```
void q_file_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFile* self ```
void q_file_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFile* self, const char* name, QVariant* value ```
bool q_file_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFile* self, const char* name ```
QVariant* q_file_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFile* self ```
const char** q_file_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFile* self ```
QBindingStorage* q_file_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFile* self ```
QBindingStorage* q_file_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFile* self ```
void q_file_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QFile* self, void (*slot)(QObject*) ```
void q_file_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QFile* self ```
QObject* q_file_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFile* self, const char* classname ```
bool q_file_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFile* self ```
void q_file_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFile* self, int interval, enum Qt__TimerType timerType ```
int32_t q_file_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_file_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFile* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_file_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFile* self, QObject* param1 ```
void q_file_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QFile* self, void (*slot)(QObject*, QObject*) ```
void q_file_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
void q_file_close(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
void q_file_qbase_close(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)() ```
void q_file_on_close(void* self, void (*slot)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
bool q_file_is_sequential(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
bool q_file_qbase_is_sequential(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)() ```
void q_file_on_is_sequential(void* self, bool (*slot)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
long long q_file_pos(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
long long q_file_qbase_pos(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, long long (*slot)() ```
void q_file_on_pos(void* self, long long (*slot)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, long long offset ```
bool q_file_seek(void* self, long long offset);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, long long offset ```
bool q_file_qbase_seek(void* self, long long offset);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)(QFile*, long long) ```
void q_file_on_seek(void* self, bool (*slot)(void*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
bool q_file_at_end(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
bool q_file_qbase_at_end(void* self);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)() ```
void q_file_on_at_end(void* self, bool (*slot)());

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, char* data, long long maxlen ```
long long q_file_read_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, char* data, long long maxlen ```
long long q_file_qbase_read_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, long long (*slot)(QFile*, char*, long long) ```
void q_file_on_read_data(void* self, long long (*slot)(void*, char*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, const char* data, long long lenVal ```
long long q_file_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, const char* data, long long lenVal ```
long long q_file_qbase_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, long long (*slot)(QFile*, const char*, long long) ```
void q_file_on_write_data(void* self, long long (*slot)(void*, const char*, long long));

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, char* data, long long maxlen ```
long long q_file_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, char* data, long long maxlen ```
long long q_file_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, long long (*slot)(QFile*, char*, long long) ```
void q_file_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
bool q_file_reset(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
bool q_file_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)() ```
void q_file_on_reset(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
long long q_file_bytes_available(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
long long q_file_qbase_bytes_available(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, long long (*slot)() ```
void q_file_on_bytes_available(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
long long q_file_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
long long q_file_qbase_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, long long (*slot)() ```
void q_file_on_bytes_to_write(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
bool q_file_can_read_line(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
bool q_file_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)() ```
void q_file_on_can_read_line(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, int msecs ```
bool q_file_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, int msecs ```
bool q_file_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)(QFile*, int) ```
void q_file_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, int msecs ```
bool q_file_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, int msecs ```
bool q_file_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)(QFile*, int) ```
void q_file_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, long long maxSize ```
long long q_file_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, long long maxSize ```
long long q_file_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, long long (*slot)(QFile*, long long) ```
void q_file_on_skip_data(void* self, long long (*slot)(void*, long long));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QEvent* event ```
bool q_file_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QEvent* event ```
bool q_file_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)(QFile*, QEvent*) ```
void q_file_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QObject* watched, QEvent* event ```
bool q_file_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QObject* watched, QEvent* event ```
bool q_file_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)(QFile*, QObject*, QEvent*) ```
void q_file_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QTimerEvent* event ```
void q_file_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QTimerEvent* event ```
void q_file_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)(QFile*, QTimerEvent*) ```
void q_file_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QChildEvent* event ```
void q_file_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QChildEvent* event ```
void q_file_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)(QFile*, QChildEvent*) ```
void q_file_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QEvent* event ```
void q_file_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QEvent* event ```
void q_file_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)(QFile*, QEvent*) ```
void q_file_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QMetaMethod* signal ```
void q_file_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QMetaMethod* signal ```
void q_file_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)(QFile*, QMetaMethod*) ```
void q_file_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QMetaMethod* signal ```
void q_file_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QMetaMethod* signal ```
void q_file_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)(QFile*, QMetaMethod*) ```
void q_file_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, int openMode ```
void q_file_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, int openMode ```
void q_file_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)(QFile*, int) ```
void q_file_on_set_open_mode(void* self, void (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, const char* errorString ```
void q_file_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, const char* errorString ```
void q_file_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, void (*slot)(QFile*, const char*) ```
void q_file_on_set_error_string(void* self, void (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
QObject* q_file_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
QObject* q_file_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, QObject* (*slot)() ```
void q_file_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self ```
int32_t q_file_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self ```
int32_t q_file_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, int32_t (*slot)() ```
void q_file_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, const char* signal ```
int32_t q_file_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, const char* signal ```
int32_t q_file_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, int32_t (*slot)(QFile*, const char*) ```
void q_file_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFile* self, QMetaMethod* signal ```
bool q_file_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFile* self, QMetaMethod* signal ```
bool q_file_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFile* self, bool (*slot)(QFile*, QMetaMethod*) ```
void q_file_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QFile* self ```
void q_file_delete(void* self);

#endif

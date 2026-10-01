#pragma once
#ifndef LIBQSTORAGEINFO_H
#define LIBQSTORAGEINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html)

/// q_storageinfo_new constructs a new QStorageInfo object.
///
QStorageInfo* q_storageinfo_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html)

/// q_storageinfo_new2 constructs a new QStorageInfo object.
///
/// @param path const char*
///
QStorageInfo* q_storageinfo_new2(const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html)

/// q_storageinfo_new3 constructs a new QStorageInfo object.
///
/// @param dir QDir*
///
QStorageInfo* q_storageinfo_new3(const void* dir);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html)

/// q_storageinfo_new4 constructs a new QStorageInfo object.
///
/// @param other QStorageInfo*
///
QStorageInfo* q_storageinfo_new4(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#operator-eq)
///
/// @param self QStorageInfo*
/// @param other QStorageInfo*
///
void q_storageinfo_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#swap)
///
/// @param self QStorageInfo*
/// @param other QStorageInfo*
///
void q_storageinfo_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#setPath)
///
/// @param self QStorageInfo*
/// @param path const char*
///
void q_storageinfo_set_path(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#rootPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QStorageInfo*
///
const char* q_storageinfo_root_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#device)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QStorageInfo*
///
char* q_storageinfo_device(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#subvolume)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QStorageInfo*
///
char* q_storageinfo_subvolume(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#fileSystemType)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QStorageInfo*
///
char* q_storageinfo_file_system_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QStorageInfo*
///
const char* q_storageinfo_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QStorageInfo*
///
const char* q_storageinfo_display_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#bytesTotal)
///
/// @param self const QStorageInfo*
///
int64_t q_storageinfo_bytes_total(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#bytesFree)
///
/// @param self const QStorageInfo*
///
int64_t q_storageinfo_bytes_free(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#bytesAvailable)
///
/// @param self const QStorageInfo*
///
int64_t q_storageinfo_bytes_available(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#blockSize)
///
/// @param self const QStorageInfo*
///
int32_t q_storageinfo_block_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#isRoot)
///
/// @param self const QStorageInfo*
///
bool q_storageinfo_is_root(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#isReadOnly)
///
/// @param self const QStorageInfo*
///
bool q_storageinfo_is_read_only(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#isReady)
///
/// @param self const QStorageInfo*
///
bool q_storageinfo_is_ready(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#isValid)
///
/// @param self const QStorageInfo*
///
bool q_storageinfo_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#refresh)
///
/// @param self QStorageInfo*
///
void q_storageinfo_refresh(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#mountedVolumes)
///
/// @return libqt_list of QStorageInfo*
///
libqt_list q_storageinfo_mounted_volumes();

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#root)
///
QStorageInfo* q_storageinfo_root();

/// [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#dtor.QStorageInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QStorageInfo*
///
void q_storageinfo_delete(void* self);

#endif

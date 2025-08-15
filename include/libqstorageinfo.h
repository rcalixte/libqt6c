#pragma once
#ifndef SRCQT6C_LIBQSTORAGEINFO_H
#define SRCQT6C_LIBQSTORAGEINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstorageinfo.html

/// q_storageinfo_new constructs a new QStorageInfo object.
///
QStorageInfo* q_storageinfo_new();

/// q_storageinfo_new2 constructs a new QStorageInfo object.
///
/// @param path const char*
QStorageInfo* q_storageinfo_new2(const char* path);

/// q_storageinfo_new3 constructs a new QStorageInfo object.
///
/// @param dir QDir*
QStorageInfo* q_storageinfo_new3(void* dir);

/// q_storageinfo_new4 constructs a new QStorageInfo object.
///
/// @param other QStorageInfo*
QStorageInfo* q_storageinfo_new4(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#operator-eq)
///
/// @param self QStorageInfo*
/// @param other QStorageInfo*
void q_storageinfo_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#swap)
///
/// @param self QStorageInfo*
/// @param other QStorageInfo*
void q_storageinfo_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#setPath)
///
/// @param self QStorageInfo*
/// @param path const char*
void q_storageinfo_set_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#rootPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStorageInfo*
const char* q_storageinfo_root_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#device)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStorageInfo*
char* q_storageinfo_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#subvolume)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStorageInfo*
char* q_storageinfo_subvolume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#fileSystemType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStorageInfo*
char* q_storageinfo_file_system_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStorageInfo*
const char* q_storageinfo_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#displayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStorageInfo*
const char* q_storageinfo_display_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#bytesTotal)
///
/// @param self QStorageInfo*
long long q_storageinfo_bytes_total(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#bytesFree)
///
/// @param self QStorageInfo*
long long q_storageinfo_bytes_free(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#bytesAvailable)
///
/// @param self QStorageInfo*
long long q_storageinfo_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#blockSize)
///
/// @param self QStorageInfo*
int32_t q_storageinfo_block_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isRoot)
///
/// @param self QStorageInfo*
bool q_storageinfo_is_root(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isReadOnly)
///
/// @param self QStorageInfo*
bool q_storageinfo_is_read_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isReady)
///
/// @param self QStorageInfo*
bool q_storageinfo_is_ready(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isValid)
///
/// @param self QStorageInfo*
bool q_storageinfo_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#refresh)
///
/// @param self QStorageInfo*
void q_storageinfo_refresh(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#mountedVolumes)
///
libqt_list /* of QStorageInfo* */ q_storageinfo_mounted_volumes();

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#root)
///
QStorageInfo* q_storageinfo_root();

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#dtor.QStorageInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QStorageInfo*
void q_storageinfo_delete(void* self);

#endif

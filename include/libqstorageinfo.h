#pragma once
#ifndef SRCQT6C_LIBQSTORAGEINFO_H
#define SRCQT6C_LIBQSTORAGEINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqdir.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qstorageinfo.html

/// q_storageinfo_new constructs a new QStorageInfo object.
///
///
QStorageInfo* q_storageinfo_new();

/// q_storageinfo_new2 constructs a new QStorageInfo object.
///
/// ``` const char* path ```
QStorageInfo* q_storageinfo_new2(const char* path);

/// q_storageinfo_new3 constructs a new QStorageInfo object.
///
/// ``` QDir* dir ```
QStorageInfo* q_storageinfo_new3(void* dir);

/// q_storageinfo_new4 constructs a new QStorageInfo object.
///
/// ``` QStorageInfo* other ```
QStorageInfo* q_storageinfo_new4(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#operator=)
///
/// ``` QStorageInfo* self, QStorageInfo* other ```
void q_storageinfo_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#swap)
///
/// ``` QStorageInfo* self, QStorageInfo* other ```
void q_storageinfo_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#setPath)
///
/// ``` QStorageInfo* self, const char* path ```
void q_storageinfo_set_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#rootPath)
///
/// ``` QStorageInfo* self ```
const char* q_storageinfo_root_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#device)
///
/// ``` QStorageInfo* self ```
char* q_storageinfo_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#subvolume)
///
/// ``` QStorageInfo* self ```
char* q_storageinfo_subvolume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#fileSystemType)
///
/// ``` QStorageInfo* self ```
char* q_storageinfo_file_system_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#name)
///
/// ``` QStorageInfo* self ```
const char* q_storageinfo_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#displayName)
///
/// ``` QStorageInfo* self ```
const char* q_storageinfo_display_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#bytesTotal)
///
/// ``` QStorageInfo* self ```
long long q_storageinfo_bytes_total(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#bytesFree)
///
/// ``` QStorageInfo* self ```
long long q_storageinfo_bytes_free(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#bytesAvailable)
///
/// ``` QStorageInfo* self ```
long long q_storageinfo_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#blockSize)
///
/// ``` QStorageInfo* self ```
int32_t q_storageinfo_block_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isRoot)
///
/// ``` QStorageInfo* self ```
bool q_storageinfo_is_root(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isReadOnly)
///
/// ``` QStorageInfo* self ```
bool q_storageinfo_is_read_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isReady)
///
/// ``` QStorageInfo* self ```
bool q_storageinfo_is_ready(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isValid)
///
/// ``` QStorageInfo* self ```
bool q_storageinfo_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#refresh)
///
/// ``` QStorageInfo* self ```
void q_storageinfo_refresh(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#mountedVolumes)
///
///
libqt_list /* of QStorageInfo* */ q_storageinfo_mounted_volumes();

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#root)
///
///
QStorageInfo* q_storageinfo_root();

/// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#dtor.QStorageInfo)
///
/// Delete this object from C++ memory.
///
/// ``` QStorageInfo* self ```
void q_storageinfo_delete(void* self);

#endif

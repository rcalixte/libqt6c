#pragma once
#ifndef SRCQT6C_LIBQFILEINFO_H
#define SRCQT6C_LIBQFILEINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqdatetime.h"
#include "libqdir.h"
#include "libqfiledevice.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qfileinfo.html

/// q_fileinfo_new constructs a new QFileInfo object.
///
///
QFileInfo* q_fileinfo_new();

/// q_fileinfo_new2 constructs a new QFileInfo object.
///
/// ``` const char* file ```
QFileInfo* q_fileinfo_new2(const char* file);

/// q_fileinfo_new3 constructs a new QFileInfo object.
///
/// ``` QFileDevice* file ```
QFileInfo* q_fileinfo_new3(void* file);

/// q_fileinfo_new4 constructs a new QFileInfo object.
///
/// ``` QDir* dir, const char* file ```
QFileInfo* q_fileinfo_new4(void* dir, const char* file);

/// q_fileinfo_new5 constructs a new QFileInfo object.
///
/// ``` QFileInfo* fileinfo ```
QFileInfo* q_fileinfo_new5(void* fileinfo);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#operator=)
///
/// ``` QFileInfo* self, QFileInfo* fileinfo ```
void q_fileinfo_operator_assign(void* self, void* fileinfo);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#swap)
///
/// ``` QFileInfo* self, QFileInfo* other ```
void q_fileinfo_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#operator==)
///
/// ``` QFileInfo* self, QFileInfo* fileinfo ```
bool q_fileinfo_operator_equal(void* self, void* fileinfo);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#operator!=)
///
/// ``` QFileInfo* self, QFileInfo* fileinfo ```
bool q_fileinfo_operator_not_equal(void* self, void* fileinfo);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
///
/// ``` QFileInfo* self, const char* file ```
void q_fileinfo_set_file(void* self, const char* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
///
/// ``` QFileInfo* self, QFileDevice* file ```
void q_fileinfo_set_file_with_file(void* self, void* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
///
/// ``` QFileInfo* self, QDir* dir, const char* file ```
void q_fileinfo_set_file2(void* self, void* dir, const char* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#exists)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_exists(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#exists)
///
/// ``` const char* file ```
bool q_fileinfo_exists_with_file(const char* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#refresh)
///
/// ``` QFileInfo* self ```
void q_fileinfo_refresh(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#filePath)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#absoluteFilePath)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_absolute_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#canonicalFilePath)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_canonical_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#fileName)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#baseName)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_base_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#completeBaseName)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_complete_base_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#suffix)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_suffix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#bundleName)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_bundle_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#completeSuffix)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_complete_suffix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#path)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#absolutePath)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_absolute_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#canonicalPath)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_canonical_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#dir)
///
/// ``` QFileInfo* self ```
QDir* q_fileinfo_dir(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#absoluteDir)
///
/// ``` QFileInfo* self ```
QDir* q_fileinfo_absolute_dir(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isReadable)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_readable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isWritable)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_writable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isExecutable)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_executable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isHidden)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_hidden(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isNativePath)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_native_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isRelative)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_relative(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isAbsolute)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_absolute(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#makeAbsolute)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_make_absolute(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isFile)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_file(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isDir)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_dir(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isSymLink)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_sym_link(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isSymbolicLink)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_symbolic_link(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isShortcut)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_shortcut(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isAlias)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_alias(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isJunction)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_junction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isRoot)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_root(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isBundle)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_is_bundle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#symLinkTarget)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_sym_link_target(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#junctionTarget)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_junction_target(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#owner)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_owner(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#ownerId)
///
/// ``` QFileInfo* self ```
uint32_t q_fileinfo_owner_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#group)
///
/// ``` QFileInfo* self ```
const char* q_fileinfo_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#groupId)
///
/// ``` QFileInfo* self ```
uint32_t q_fileinfo_group_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#permission)
///
/// ``` QFileInfo* self, int permissions ```
bool q_fileinfo_permission(void* self, int64_t permissions);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#permissions)
///
/// ``` QFileInfo* self ```
int64_t q_fileinfo_permissions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#size)
///
/// ``` QFileInfo* self ```
long long q_fileinfo_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#birthTime)
///
/// ``` QFileInfo* self ```
QDateTime* q_fileinfo_birth_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#metadataChangeTime)
///
/// ``` QFileInfo* self ```
QDateTime* q_fileinfo_metadata_change_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#lastModified)
///
/// ``` QFileInfo* self ```
QDateTime* q_fileinfo_last_modified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#lastRead)
///
/// ``` QFileInfo* self ```
QDateTime* q_fileinfo_last_read(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#fileTime)
///
/// ``` QFileInfo* self, enum QFileDevice__FileTime time ```
QDateTime* q_fileinfo_file_time(void* self, int64_t time);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#caching)
///
/// ``` QFileInfo* self ```
bool q_fileinfo_caching(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setCaching)
///
/// ``` QFileInfo* self, bool on ```
void q_fileinfo_set_caching(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#stat)
///
/// ``` QFileInfo* self ```
void q_fileinfo_stat(void* self);

/// Delete this object from C++ memory.
///
/// ``` QFileInfo* self ```
void q_fileinfo_delete(void* self);

#endif

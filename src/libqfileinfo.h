#pragma once
#ifndef SRCQT6C_LIBQFILEINFO_H
#define SRCQT6C_LIBQFILEINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfileinfo.html

/// q_fileinfo_new constructs a new QFileInfo object.
///
QFileInfo* q_fileinfo_new();

/// q_fileinfo_new2 constructs a new QFileInfo object.
///
/// @param file const char*
QFileInfo* q_fileinfo_new2(const char* file);

/// q_fileinfo_new3 constructs a new QFileInfo object.
///
/// @param file QFileDevice*
QFileInfo* q_fileinfo_new3(void* file);

/// q_fileinfo_new4 constructs a new QFileInfo object.
///
/// @param dir QDir*
/// @param file const char*
QFileInfo* q_fileinfo_new4(void* dir, const char* file);

/// q_fileinfo_new5 constructs a new QFileInfo object.
///
/// @param fileinfo QFileInfo*
QFileInfo* q_fileinfo_new5(void* fileinfo);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#operator-eq)
///
/// @param self QFileInfo*
/// @param fileinfo QFileInfo*
void q_fileinfo_operator_assign(void* self, void* fileinfo);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#swap)
///
/// @param self QFileInfo*
/// @param other QFileInfo*
void q_fileinfo_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
///
/// @param self QFileInfo*
/// @param file const char*
void q_fileinfo_set_file(void* self, const char* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
///
/// @param self QFileInfo*
/// @param file QFileDevice*
void q_fileinfo_set_file2(void* self, void* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
///
/// @param self QFileInfo*
/// @param dir QDir*
/// @param file const char*
void q_fileinfo_set_file3(void* self, void* dir, const char* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#exists)
///
/// @param self QFileInfo*
bool q_fileinfo_exists(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#exists)
///
/// @param file const char*
bool q_fileinfo_exists2(const char* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#refresh)
///
/// @param self QFileInfo*
void q_fileinfo_refresh(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#filePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#absoluteFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_absolute_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#canonicalFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_canonical_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#baseName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_base_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#completeBaseName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_complete_base_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#suffix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_suffix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#bundleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_bundle_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#completeSuffix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_complete_suffix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#path)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#absolutePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_absolute_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#canonicalPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_canonical_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#dir)
///
/// @param self QFileInfo*
QDir* q_fileinfo_dir(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#absoluteDir)
///
/// @param self QFileInfo*
QDir* q_fileinfo_absolute_dir(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isReadable)
///
/// @param self QFileInfo*
bool q_fileinfo_is_readable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isWritable)
///
/// @param self QFileInfo*
bool q_fileinfo_is_writable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isExecutable)
///
/// @param self QFileInfo*
bool q_fileinfo_is_executable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isHidden)
///
/// @param self QFileInfo*
bool q_fileinfo_is_hidden(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isNativePath)
///
/// @param self QFileInfo*
bool q_fileinfo_is_native_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isRelative)
///
/// @param self QFileInfo*
bool q_fileinfo_is_relative(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isAbsolute)
///
/// @param self QFileInfo*
bool q_fileinfo_is_absolute(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#makeAbsolute)
///
/// @param self QFileInfo*
bool q_fileinfo_make_absolute(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isFile)
///
/// @param self QFileInfo*
bool q_fileinfo_is_file(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isDir)
///
/// @param self QFileInfo*
bool q_fileinfo_is_dir(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isSymLink)
///
/// @param self QFileInfo*
bool q_fileinfo_is_sym_link(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isSymbolicLink)
///
/// @param self QFileInfo*
bool q_fileinfo_is_symbolic_link(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isShortcut)
///
/// @param self QFileInfo*
bool q_fileinfo_is_shortcut(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isAlias)
///
/// @param self QFileInfo*
bool q_fileinfo_is_alias(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isJunction)
///
/// @param self QFileInfo*
bool q_fileinfo_is_junction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isRoot)
///
/// @param self QFileInfo*
bool q_fileinfo_is_root(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#isBundle)
///
/// @param self QFileInfo*
bool q_fileinfo_is_bundle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#symLinkTarget)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_sym_link_target(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#readSymLink)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_read_sym_link(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#junctionTarget)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_junction_target(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#owner)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_owner(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#ownerId)
///
/// @param self QFileInfo*
uint32_t q_fileinfo_owner_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#group)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFileInfo*
const char* q_fileinfo_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#groupId)
///
/// @param self QFileInfo*
uint32_t q_fileinfo_group_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#permission)
///
/// @param self QFileInfo*
/// @param permissions flag of enum QFileDevice__Permission
bool q_fileinfo_permission(void* self, int64_t permissions);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#permissions)
///
/// @param self QFileInfo*
///
/// @return flag of enum QFileDevice__Permission
int64_t q_fileinfo_permissions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#size)
///
/// @param self QFileInfo*
long long q_fileinfo_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#birthTime)
///
/// @param self QFileInfo*
QDateTime* q_fileinfo_birth_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#metadataChangeTime)
///
/// @param self QFileInfo*
QDateTime* q_fileinfo_metadata_change_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#lastModified)
///
/// @param self QFileInfo*
QDateTime* q_fileinfo_last_modified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#lastRead)
///
/// @param self QFileInfo*
QDateTime* q_fileinfo_last_read(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#fileTime)
///
/// @param self QFileInfo*
/// @param time enum QFileDevice__FileTime
QDateTime* q_fileinfo_file_time(void* self, int32_t time);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#birthTime)
///
/// @param self QFileInfo*
/// @param tz QTimeZone*
QDateTime* q_fileinfo_birth_time2(void* self, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#metadataChangeTime)
///
/// @param self QFileInfo*
/// @param tz QTimeZone*
QDateTime* q_fileinfo_metadata_change_time2(void* self, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#lastModified)
///
/// @param self QFileInfo*
/// @param tz QTimeZone*
QDateTime* q_fileinfo_last_modified2(void* self, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#lastRead)
///
/// @param self QFileInfo*
/// @param tz QTimeZone*
QDateTime* q_fileinfo_last_read2(void* self, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#fileTime)
///
/// @param self QFileInfo*
/// @param time enum QFileDevice__FileTime
/// @param tz QTimeZone*
QDateTime* q_fileinfo_file_time2(void* self, int32_t time, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#caching)
///
/// @param self QFileInfo*
bool q_fileinfo_caching(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#setCaching)
///
/// @param self QFileInfo*
/// @param on bool
void q_fileinfo_set_caching(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#stat)
///
/// @param self QFileInfo*
void q_fileinfo_stat(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileinfo.html#dtor.QFileInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QFileInfo*
void q_fileinfo_delete(void* self);

#endif

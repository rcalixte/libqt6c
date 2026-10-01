#pragma once
#ifndef LIBQFILEINFO_H
#define LIBQFILEINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html)

/// q_fileinfo_new constructs a new QFileInfo object.
///
QFileInfo* q_fileinfo_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html)

/// q_fileinfo_new2 constructs a new QFileInfo object.
///
/// @param file const char*
///
QFileInfo* q_fileinfo_new2(const char* file);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html)

/// q_fileinfo_new3 constructs a new QFileInfo object.
///
/// @param file QFileDevice*
///
QFileInfo* q_fileinfo_new3(const void* file);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html)

/// q_fileinfo_new4 constructs a new QFileInfo object.
///
/// @param dir QDir*
/// @param file const char*
///
QFileInfo* q_fileinfo_new4(const void* dir, const char* file);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html)

/// q_fileinfo_new5 constructs a new QFileInfo object.
///
/// @param fileinfo QFileInfo*
///
QFileInfo* q_fileinfo_new5(const void* fileinfo);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#operator-eq)
///
/// @param self QFileInfo*
/// @param fileinfo QFileInfo*
///
void q_fileinfo_operator_assign(void* self, const void* fileinfo);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#swap)
///
/// @param self QFileInfo*
/// @param other QFileInfo*
///
void q_fileinfo_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
///
/// @param self QFileInfo*
/// @param file const char*
///
void q_fileinfo_set_file(void* self, const char* file);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
///
/// @param self QFileInfo*
/// @param file QFileDevice*
///
void q_fileinfo_set_file2(void* self, const void* file);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setFile)
///
/// @param self QFileInfo*
/// @param dir QDir*
/// @param file const char*
///
void q_fileinfo_set_file3(void* self, const void* dir, const char* file);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#exists)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_exists(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#exists)
///
/// @param file const char*
///
bool q_fileinfo_exists2(const char* file);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#refresh)
///
/// @param self QFileInfo*
///
void q_fileinfo_refresh(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_file_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#absoluteFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_absolute_file_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#canonicalFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_canonical_file_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_file_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#baseName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_base_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#completeBaseName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_complete_base_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#suffix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_suffix(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#bundleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_bundle_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#completeSuffix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_complete_suffix(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#path)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#absolutePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_absolute_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#canonicalPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_canonical_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#dir)
///
/// @param self const QFileInfo*
///
QDir* q_fileinfo_dir(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#absoluteDir)
///
/// @param self const QFileInfo*
///
QDir* q_fileinfo_absolute_dir(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isReadable)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_readable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isWritable)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_writable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isExecutable)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_executable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isHidden)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_hidden(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isNativePath)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_native_path(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isRelative)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_relative(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isAbsolute)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_absolute(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#makeAbsolute)
///
/// @param self QFileInfo*
///
bool q_fileinfo_make_absolute(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isFile)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_file(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isDir)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_dir(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isSymLink)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_sym_link(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isSymbolicLink)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_symbolic_link(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isShortcut)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_shortcut(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isAlias)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_alias(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isJunction)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_junction(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isRoot)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_root(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#isBundle)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_is_bundle(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#symLinkTarget)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_sym_link_target(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#readSymLink)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_read_sym_link(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#junctionTarget)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_junction_target(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#owner)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_owner(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#ownerId)
///
/// @param self const QFileInfo*
///
uint32_t q_fileinfo_owner_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#group)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFileInfo*
///
const char* q_fileinfo_group(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#groupId)
///
/// @param self const QFileInfo*
///
uint32_t q_fileinfo_group_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#permission)
///
/// @param self const QFileInfo*
/// @param permissions flag of enum QFileDevice__Permission
///
bool q_fileinfo_permission(const void* self, int32_t permissions);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#permissions)
///
/// @param self const QFileInfo*
///
/// @return flag of enum QFileDevice__Permission
///
int32_t q_fileinfo_permissions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#size)
///
/// @param self const QFileInfo*
///
int64_t q_fileinfo_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#birthTime)
///
/// @param self const QFileInfo*
///
QDateTime* q_fileinfo_birth_time(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#metadataChangeTime)
///
/// @param self const QFileInfo*
///
QDateTime* q_fileinfo_metadata_change_time(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastModified)
///
/// @param self const QFileInfo*
///
QDateTime* q_fileinfo_last_modified(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastRead)
///
/// @param self const QFileInfo*
///
QDateTime* q_fileinfo_last_read(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#fileTime)
///
/// @param self const QFileInfo*
/// @param time enum QFileDevice__FileTime
///
QDateTime* q_fileinfo_file_time(const void* self, int32_t time);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#birthTime)
///
/// @param self const QFileInfo*
/// @param tz QTimeZone*
///
QDateTime* q_fileinfo_birth_time2(const void* self, const void* tz);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#metadataChangeTime)
///
/// @param self const QFileInfo*
/// @param tz QTimeZone*
///
QDateTime* q_fileinfo_metadata_change_time2(const void* self, const void* tz);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastModified)
///
/// @param self const QFileInfo*
/// @param tz QTimeZone*
///
QDateTime* q_fileinfo_last_modified2(const void* self, const void* tz);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#lastRead)
///
/// @param self const QFileInfo*
/// @param tz QTimeZone*
///
QDateTime* q_fileinfo_last_read2(const void* self, const void* tz);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#fileTime)
///
/// @param self const QFileInfo*
/// @param time enum QFileDevice__FileTime
/// @param tz QTimeZone*
///
QDateTime* q_fileinfo_file_time2(const void* self, int32_t time, const void* tz);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#caching)
///
/// @param self const QFileInfo*
///
bool q_fileinfo_caching(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#setCaching)
///
/// @param self QFileInfo*
/// @param on bool
///
void q_fileinfo_set_caching(void* self, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#stat)
///
/// @param self QFileInfo*
///
void q_fileinfo_stat(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileinfo.html#dtor.QFileInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QFileInfo*
///
void q_fileinfo_delete(void* self);

#endif

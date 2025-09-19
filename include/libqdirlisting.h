#pragma once
#ifndef SRCQT6C_LIBQDIRLISTING_H
#define SRCQT6C_LIBQDIRLISTING_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qdirlisting.html

/// q_dirlisting_new constructs a new QDirListing object.
///
/// @param path const char*
QDirListing* q_dirlisting_new(const char* path);

/// q_dirlisting_new2 constructs a new QDirListing object.
///
/// @param path const char*
/// @param nameFilters const char**
QDirListing* q_dirlisting_new2(const char* path, const char* nameFilters[]);

/// q_dirlisting_new3 constructs a new QDirListing object.
///
/// @param path const char*
/// @param flags flag of enum QDirListing__IteratorFlag
QDirListing* q_dirlisting_new3(const char* path, int32_t flags);

/// q_dirlisting_new4 constructs a new QDirListing object.
///
/// @param path const char*
/// @param nameFilters const char**
/// @param flags flag of enum QDirListing__IteratorFlag
QDirListing* q_dirlisting_new4(const char* path, const char* nameFilters[], int32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#swap)
///
/// @param self QDirListing*
/// @param other QDirListing*
void q_dirlisting_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#iteratorPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirListing*
const char* q_dirlisting_iterator_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#iteratorFlags)
///
/// @param self QDirListing*
///
/// @return flag of enum QDirListing__IteratorFlag
int32_t q_dirlisting_iterator_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#nameFilters)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirListing*
const char** q_dirlisting_name_filters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#begin)
///
/// @param self QDirListing*
QDirListing__const_iterator* q_dirlisting_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#cbegin)
///
/// @param self QDirListing*
QDirListing__const_iterator* q_dirlisting_cbegin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#end)
///
/// @param self QDirListing*
QDirListing__sentinel* q_dirlisting_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#cend)
///
/// @param self QDirListing*
QDirListing__sentinel* q_dirlisting_cend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#constBegin)
///
/// @param self QDirListing*
QDirListing__const_iterator* q_dirlisting_const_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#constEnd)
///
/// @param self QDirListing*
QDirListing__sentinel* q_dirlisting_const_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#dtor.QDirListing)
///
/// Delete this object from C++ memory.
///
/// @param self QDirListing*
void q_dirlisting_delete(void* self);

/// https://doc.qt.io/qt-6/qdirlisting-direntry.html

/// q_dirlisting__direntry_new constructs a new QDirListing::DirEntry object.
///
/// @param other QDirListing__DirEntry*
QDirListing__DirEntry* q_dirlisting__direntry_new(void* other);

/// q_dirlisting__direntry_new2 constructs a new QDirListing::DirEntry object and invalidates the source QDirListing::DirEntry object.
///
/// @param other QDirListing__DirEntry*
QDirListing__DirEntry* q_dirlisting__direntry_new2(void* other);

/// q_dirlisting__direntry_new3 constructs a new QDirListing::DirEntry object.
///
/// @param param1 QDirListing__DirEntry*
QDirListing__DirEntry* q_dirlisting__direntry_new3(void* param1);

/// q_dirlisting__direntry_new4 constructs a new QDirListing::DirEntry object.
///
QDirListing__DirEntry* q_dirlisting__direntry_new4();

/// q_dirlisting__direntry_copy_assign shallow copies `other` into `self`.
///
/// @param self QDirListing__DirEntry*
/// @param other QDirListing__DirEntry*
void q_dirlisting__direntry_copy_assign(void* self, void* other);

/// q_dirlisting__direntry_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QDirListing__DirEntry*
/// @param other QDirListing__DirEntry*
void q_dirlisting__direntry_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirListing__DirEntry*
const char* q_dirlisting__direntry_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#baseName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirListing__DirEntry*
const char* q_dirlisting__direntry_base_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#completeBaseName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirListing__DirEntry*
const char* q_dirlisting__direntry_complete_base_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#suffix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirListing__DirEntry*
const char* q_dirlisting__direntry_suffix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#bundleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirListing__DirEntry*
const char* q_dirlisting__direntry_bundle_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#completeSuffix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirListing__DirEntry*
const char* q_dirlisting__direntry_complete_suffix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#filePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirListing__DirEntry*
const char* q_dirlisting__direntry_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isDir)
///
/// @param self QDirListing__DirEntry*
bool q_dirlisting__direntry_is_dir(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isFile)
///
/// @param self QDirListing__DirEntry*
bool q_dirlisting__direntry_is_file(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isSymLink)
///
/// @param self QDirListing__DirEntry*
bool q_dirlisting__direntry_is_sym_link(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#exists)
///
/// @param self QDirListing__DirEntry*
bool q_dirlisting__direntry_exists(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isHidden)
///
/// @param self QDirListing__DirEntry*
bool q_dirlisting__direntry_is_hidden(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isReadable)
///
/// @param self QDirListing__DirEntry*
bool q_dirlisting__direntry_is_readable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isWritable)
///
/// @param self QDirListing__DirEntry*
bool q_dirlisting__direntry_is_writable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#isExecutable)
///
/// @param self QDirListing__DirEntry*
bool q_dirlisting__direntry_is_executable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#fileInfo)
///
/// @param self QDirListing__DirEntry*
QFileInfo* q_dirlisting__direntry_file_info(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#canonicalFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirListing__DirEntry*
const char* q_dirlisting__direntry_canonical_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#absoluteFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirListing__DirEntry*
const char* q_dirlisting__direntry_absolute_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#absolutePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirListing__DirEntry*
const char* q_dirlisting__direntry_absolute_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#size)
///
/// @param self QDirListing__DirEntry*
long long q_dirlisting__direntry_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#birthTime)
///
/// @param self QDirListing__DirEntry*
/// @param tz QTimeZone*
QDateTime* q_dirlisting__direntry_birth_time(void* self, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#metadataChangeTime)
///
/// @param self QDirListing__DirEntry*
/// @param tz QTimeZone*
QDateTime* q_dirlisting__direntry_metadata_change_time(void* self, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#lastModified)
///
/// @param self QDirListing__DirEntry*
/// @param tz QTimeZone*
QDateTime* q_dirlisting__direntry_last_modified(void* self, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#lastRead)
///
/// @param self QDirListing__DirEntry*
/// @param tz QTimeZone*
QDateTime* q_dirlisting__direntry_last_read(void* self, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#fileTime)
///
/// @param self QDirListing__DirEntry*
/// @param type enum QFileDevice__FileTime
/// @param tz QTimeZone*
QDateTime* q_dirlisting__direntry_file_time(void* self, int32_t type, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-direntry.html#operator-eq)
///
/// @param self QDirListing__DirEntry*
/// @param param1 QDirListing__DirEntry*
void q_dirlisting__direntry_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QDirListing__DirEntry*
void q_dirlisting__direntry_delete(void* self);

/// https://doc.qt.io/qt-6/qdirlisting-sentinel.html

/// q_dirlisting__sentinel_new constructs a new QDirListing::sentinel object.
///
/// @param other QDirListing__sentinel*
QDirListing__sentinel* q_dirlisting__sentinel_new(void* other);

/// q_dirlisting__sentinel_new2 constructs a new QDirListing::sentinel object and invalidates the source QDirListing::sentinel object.
///
/// @param other QDirListing__sentinel*
QDirListing__sentinel* q_dirlisting__sentinel_new2(void* other);

/// q_dirlisting__sentinel_new3 constructs a new QDirListing::sentinel object.
///
QDirListing__sentinel* q_dirlisting__sentinel_new3();

/// q_dirlisting__sentinel_new4 constructs a new QDirListing::sentinel object.
///
/// @param param1 QDirListing__sentinel*
QDirListing__sentinel* q_dirlisting__sentinel_new4(void* param1);

/// q_dirlisting__sentinel_copy_assign shallow copies `other` into `self`.
///
/// @param self QDirListing__sentinel*
/// @param other QDirListing__sentinel*
void q_dirlisting__sentinel_copy_assign(void* self, void* other);

/// q_dirlisting__sentinel_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QDirListing__sentinel*
/// @param other QDirListing__sentinel*
void q_dirlisting__sentinel_move_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// @param self QDirListing__sentinel*
void q_dirlisting__sentinel_delete(void* self);

/// https://doc.qt.io/qt-6/qdirlisting-const_iterator.html

/// q_dirlisting__const_iterator_new2 constructs a new QDirListing::const_iterator object and invalidates the source QDirListing::const_iterator object.
///
/// @param other QDirListing__const_iterator*
QDirListing__const_iterator* q_dirlisting__const_iterator_new2(void* other);

/// q_dirlisting__const_iterator_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QDirListing__const_iterator*
/// @param other QDirListing__const_iterator*
void q_dirlisting__const_iterator_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-const_iterator.html#operator-2a)
///
/// @param self QDirListing__const_iterator*
const QDirListing__DirEntry* q_dirlisting__const_iterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-const_iterator.html#operator-2b-2b)
///
/// @param self QDirListing__const_iterator*
QDirListing__const_iterator* q_dirlisting__const_iterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting-const_iterator.html#operator-2b-2b)
///
/// @param self QDirListing__const_iterator*
/// @param param1 int
void q_dirlisting__const_iterator_operator_plus_plus2(void* self, int param1);

/// Delete this object from C++ memory.
///
/// @param self QDirListing__const_iterator*
void q_dirlisting__const_iterator_delete(void* self);

/// https://doc.qt.io/qt-6/qdirlisting.html#types

typedef enum {
    QDIRLISTING_ITERATORFLAG_DEFAULT = 0,
    QDIRLISTING_ITERATORFLAG_EXCLUDEFILES = 4,
    QDIRLISTING_ITERATORFLAG_EXCLUDEDIRS = 8,
    QDIRLISTING_ITERATORFLAG_EXCLUDESPECIAL = 16,
    QDIRLISTING_ITERATORFLAG_RESOLVESYMLINKS = 32,
    QDIRLISTING_ITERATORFLAG_FILESONLY = 24,
    QDIRLISTING_ITERATORFLAG_DIRSONLY = 20,
    QDIRLISTING_ITERATORFLAG_INCLUDEHIDDEN = 64,
    QDIRLISTING_ITERATORFLAG_INCLUDEDOTANDDOTDOT = 128,
    QDIRLISTING_ITERATORFLAG_CASESENSITIVE = 256,
    QDIRLISTING_ITERATORFLAG_RECURSIVE = 1024,
    QDIRLISTING_ITERATORFLAG_FOLLOWDIRSYMLINKS = 2048
} QDirListing__IteratorFlag;

#endif

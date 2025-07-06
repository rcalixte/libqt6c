#pragma once
#ifndef SRCQT6C_LIBQDIRLISTING_H
#define SRCQT6C_LIBQDIRLISTING_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qdirlisting.html

/// q_dirlisting_new constructs a new QDirListing object.
///
/// ``` const char* path ```
QDirListing* q_dirlisting_new(const char* path);

/// q_dirlisting_new2 constructs a new QDirListing object.
///
/// ``` const char* path, const char* nameFilters[] ```
QDirListing* q_dirlisting_new2(const char* path, const char* nameFilters[]);

/// q_dirlisting_new3 constructs a new QDirListing object.
///
/// ``` const char* path, int flags ```
QDirListing* q_dirlisting_new3(const char* path, int64_t flags);

/// q_dirlisting_new4 constructs a new QDirListing object.
///
/// ``` const char* path, const char* nameFilters[], int flags ```
QDirListing* q_dirlisting_new4(const char* path, const char* nameFilters[], int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#swap)
///
/// ``` QDirListing* self, QDirListing* other ```
void q_dirlisting_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#iteratorPath)
///
/// ``` QDirListing* self ```
const char* q_dirlisting_iterator_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#iteratorFlags)
///
/// ``` QDirListing* self ```
int64_t q_dirlisting_iterator_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#nameFilters)
///
/// ``` QDirListing* self ```
const char** q_dirlisting_name_filters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#end)
///
/// ``` QDirListing* self ```
QDirListing__sentinel* q_dirlisting_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#cend)
///
/// ``` QDirListing* self ```
QDirListing__sentinel* q_dirlisting_cend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#constEnd)
///
/// ``` QDirListing* self ```
QDirListing__sentinel* q_dirlisting_const_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting.html#dtor.QDirListing)
///
/// Delete this object from C++ memory.
///
/// ``` QDirListing* self ```
void q_dirlisting_delete(void* self);

/// https://doc.qt.io/qt-6/qdirlisting-direntry.html

/// q_dirlisting__direntry_new constructs a new QDirListing::DirEntry object.
///
/// ``` QDirListing__DirEntry* other ```
QDirListing__DirEntry* q_dirlisting__direntry_new(void* other);

/// q_dirlisting__direntry_new2 constructs a new QDirListing::DirEntry object and invalidates the source QDirListing::DirEntry object.
///
/// ``` QDirListing__DirEntry* other ```
QDirListing__DirEntry* q_dirlisting__direntry_new2(void* other);

/// q_dirlisting__direntry_new3 constructs a new QDirListing::DirEntry object.
///
/// ``` QDirListing__DirEntry* param1 ```
QDirListing__DirEntry* q_dirlisting__direntry_new3(void* param1);

/// q_dirlisting__direntry_new4 constructs a new QDirListing::DirEntry object.
///
///
QDirListing__DirEntry* q_dirlisting__direntry_new4();

/// q_dirlisting__direntry_copy_assign shallow copies `other` into `self`.
///
/// ``` QDirListing__DirEntry* self, QDirListing__DirEntry* other ```
void q_dirlisting__direntry_copy_assign(void* self, void* other);

/// q_dirlisting__direntry_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QDirListing__DirEntry* self, QDirListing__DirEntry* other ```
void q_dirlisting__direntry_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#fileName)
///
/// ``` QDirListing__DirEntry* self ```
const char* q_dirlisting__direntry_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#baseName)
///
/// ``` QDirListing__DirEntry* self ```
const char* q_dirlisting__direntry_base_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#completeBaseName)
///
/// ``` QDirListing__DirEntry* self ```
const char* q_dirlisting__direntry_complete_base_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#suffix)
///
/// ``` QDirListing__DirEntry* self ```
const char* q_dirlisting__direntry_suffix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#bundleName)
///
/// ``` QDirListing__DirEntry* self ```
const char* q_dirlisting__direntry_bundle_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#completeSuffix)
///
/// ``` QDirListing__DirEntry* self ```
const char* q_dirlisting__direntry_complete_suffix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#filePath)
///
/// ``` QDirListing__DirEntry* self ```
const char* q_dirlisting__direntry_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#isDir)
///
/// ``` QDirListing__DirEntry* self ```
bool q_dirlisting__direntry_is_dir(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#isFile)
///
/// ``` QDirListing__DirEntry* self ```
bool q_dirlisting__direntry_is_file(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#isSymLink)
///
/// ``` QDirListing__DirEntry* self ```
bool q_dirlisting__direntry_is_sym_link(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#exists)
///
/// ``` QDirListing__DirEntry* self ```
bool q_dirlisting__direntry_exists(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#isHidden)
///
/// ``` QDirListing__DirEntry* self ```
bool q_dirlisting__direntry_is_hidden(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#isReadable)
///
/// ``` QDirListing__DirEntry* self ```
bool q_dirlisting__direntry_is_readable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#isWritable)
///
/// ``` QDirListing__DirEntry* self ```
bool q_dirlisting__direntry_is_writable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#isExecutable)
///
/// ``` QDirListing__DirEntry* self ```
bool q_dirlisting__direntry_is_executable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#fileInfo)
///
/// ``` QDirListing__DirEntry* self ```
QFileInfo* q_dirlisting__direntry_file_info(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#canonicalFilePath)
///
/// ``` QDirListing__DirEntry* self ```
const char* q_dirlisting__direntry_canonical_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#absoluteFilePath)
///
/// ``` QDirListing__DirEntry* self ```
const char* q_dirlisting__direntry_absolute_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#absolutePath)
///
/// ``` QDirListing__DirEntry* self ```
const char* q_dirlisting__direntry_absolute_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#size)
///
/// ``` QDirListing__DirEntry* self ```
long long q_dirlisting__direntry_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#birthTime)
///
/// ``` QDirListing__DirEntry* self, QTimeZone* tz ```
QDateTime* q_dirlisting__direntry_birth_time(void* self, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#metadataChangeTime)
///
/// ``` QDirListing__DirEntry* self, QTimeZone* tz ```
QDateTime* q_dirlisting__direntry_metadata_change_time(void* self, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#lastModified)
///
/// ``` QDirListing__DirEntry* self, QTimeZone* tz ```
QDateTime* q_dirlisting__direntry_last_modified(void* self, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#lastRead)
///
/// ``` QDirListing__DirEntry* self, QTimeZone* tz ```
QDateTime* q_dirlisting__direntry_last_read(void* self, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#fileTime)
///
/// ``` QDirListing__DirEntry* self, enum QFileDevice__FileTime typeVal, QTimeZone* tz ```
QDateTime* q_dirlisting__direntry_file_time(void* self, int64_t typeVal, void* tz);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting__direntry.html#operator=)
///
/// ``` QDirListing__DirEntry* self, QDirListing__DirEntry* param1 ```
void q_dirlisting__direntry_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting::direntry.html#dtor.QDirListing::DirEntry)
///
/// Delete this object from C++ memory.
///
/// ``` QDirListing__DirEntry* self ```
void q_dirlisting__direntry_delete(void* self);

/// https://doc.qt.io/qt-6/qdirlisting-sentinel.html

/// q_dirlisting__sentinel_new constructs a new QDirListing::sentinel object.
///
/// ``` QDirListing__sentinel* other ```
QDirListing__sentinel* q_dirlisting__sentinel_new(void* other);

/// q_dirlisting__sentinel_new2 constructs a new QDirListing::sentinel object and invalidates the source QDirListing::sentinel object.
///
/// ``` QDirListing__sentinel* other ```
QDirListing__sentinel* q_dirlisting__sentinel_new2(void* other);

/// q_dirlisting__sentinel_new3 constructs a new QDirListing::sentinel object.
///
///
QDirListing__sentinel* q_dirlisting__sentinel_new3();

/// q_dirlisting__sentinel_new4 constructs a new QDirListing::sentinel object.
///
/// ``` QDirListing__sentinel* param1 ```
QDirListing__sentinel* q_dirlisting__sentinel_new4(void* param1);

/// q_dirlisting__sentinel_copy_assign shallow copies `other` into `self`.
///
/// ``` QDirListing__sentinel* self, QDirListing__sentinel* other ```
void q_dirlisting__sentinel_copy_assign(void* self, void* other);

/// q_dirlisting__sentinel_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QDirListing__sentinel* self, QDirListing__sentinel* other ```
void q_dirlisting__sentinel_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdirlisting::sentinel.html#dtor.QDirListing::sentinel)
///
/// Delete this object from C++ memory.
///
/// ``` QDirListing__sentinel* self ```
void q_dirlisting__sentinel_delete(void* self);

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

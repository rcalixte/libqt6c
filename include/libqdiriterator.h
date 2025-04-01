#pragma once
#ifndef SRCQT6C_LIBQDIRITERATOR_H
#define SRCQT6C_LIBQDIRITERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqdir.h"
#include "libqfileinfo.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qdiriterator.html

/// q_diriterator_new constructs a new QDirIterator object.
///
/// ``` QDir* dir ```
QDirIterator* q_diriterator_new(void* dir);

/// q_diriterator_new2 constructs a new QDirIterator object.
///
/// ``` const char* path ```
QDirIterator* q_diriterator_new2(const char* path);

/// q_diriterator_new3 constructs a new QDirIterator object.
///
/// ``` const char* path, int filter ```
QDirIterator* q_diriterator_new3(const char* path, int64_t filter);

/// q_diriterator_new4 constructs a new QDirIterator object.
///
/// ``` const char* path, const char* nameFilters[] ```
QDirIterator* q_diriterator_new4(const char* path, const char* nameFilters[]);

/// q_diriterator_new5 constructs a new QDirIterator object.
///
/// ``` QDir* dir, int flags ```
QDirIterator* q_diriterator_new5(void* dir, int64_t flags);

/// q_diriterator_new6 constructs a new QDirIterator object.
///
/// ``` const char* path, int flags ```
QDirIterator* q_diriterator_new6(const char* path, int64_t flags);

/// q_diriterator_new7 constructs a new QDirIterator object.
///
/// ``` const char* path, int filter, int flags ```
QDirIterator* q_diriterator_new7(const char* path, int64_t filter, int64_t flags);

/// q_diriterator_new8 constructs a new QDirIterator object.
///
/// ``` const char* path, const char* nameFilters[], int filters ```
QDirIterator* q_diriterator_new8(const char* path, const char* nameFilters[], int64_t filters);

/// q_diriterator_new9 constructs a new QDirIterator object.
///
/// ``` const char* path, const char* nameFilters[], int filters, int flags ```
QDirIterator* q_diriterator_new9(const char* path, const char* nameFilters[], int64_t filters, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#next)
///
/// ``` QDirIterator* self ```
const char* q_diriterator_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#nextFileInfo)
///
/// ``` QDirIterator* self ```
QFileInfo* q_diriterator_next_file_info(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#hasNext)
///
/// ``` QDirIterator* self ```
bool q_diriterator_has_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#fileName)
///
/// ``` QDirIterator* self ```
const char* q_diriterator_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#filePath)
///
/// ``` QDirIterator* self ```
const char* q_diriterator_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#fileInfo)
///
/// ``` QDirIterator* self ```
QFileInfo* q_diriterator_file_info(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#path)
///
/// ``` QDirIterator* self ```
const char* q_diriterator_path(void* self);

/// Delete this object from C++ memory.
///
/// ``` QDirIterator* self ```
void q_diriterator_delete(void* self);

/// https://doc.qt.io/qt-6/qdiriterator.html#types

typedef enum {
    QDIRITERATOR_ITERATORFLAG_NOITERATORFLAGS = 0,
    QDIRITERATOR_ITERATORFLAG_FOLLOWSYMLINKS = 1,
    QDIRITERATOR_ITERATORFLAG_SUBDIRECTORIES = 2
} QDirIterator__IteratorFlag;

#endif

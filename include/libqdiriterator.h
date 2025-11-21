#pragma once
#ifndef SRC_QT6C_LIBQDIRITERATOR_H
#define SRC_QT6C_LIBQDIRITERATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qdiriterator.html

/// q_diriterator_new constructs a new QDirIterator object.
///
/// @param dir QDir*
QDirIterator* q_diriterator_new(void* dir);

/// q_diriterator_new2 constructs a new QDirIterator object.
///
/// @param path const char*
QDirIterator* q_diriterator_new2(const char* path);

/// q_diriterator_new3 constructs a new QDirIterator object.
///
/// @param path const char*
/// @param filter flag of enum QDir__Filter
QDirIterator* q_diriterator_new3(const char* path, int32_t filter);

/// q_diriterator_new4 constructs a new QDirIterator object.
///
/// @param path const char*
/// @param nameFilters const char**
QDirIterator* q_diriterator_new4(const char* path, const char* nameFilters[static 1]);

/// q_diriterator_new5 constructs a new QDirIterator object.
///
/// @param dir QDir*
/// @param flags flag of enum QDirIterator__IteratorFlag
QDirIterator* q_diriterator_new5(void* dir, int32_t flags);

/// q_diriterator_new6 constructs a new QDirIterator object.
///
/// @param path const char*
/// @param flags flag of enum QDirIterator__IteratorFlag
QDirIterator* q_diriterator_new6(const char* path, int32_t flags);

/// q_diriterator_new7 constructs a new QDirIterator object.
///
/// @param path const char*
/// @param filter flag of enum QDir__Filter
/// @param flags flag of enum QDirIterator__IteratorFlag
QDirIterator* q_diriterator_new7(const char* path, int32_t filter, int32_t flags);

/// q_diriterator_new8 constructs a new QDirIterator object.
///
/// @param path const char*
/// @param nameFilters const char**
/// @param filters flag of enum QDir__Filter
QDirIterator* q_diriterator_new8(const char* path, const char* nameFilters[static 1], int32_t filters);

/// q_diriterator_new9 constructs a new QDirIterator object.
///
/// @param path const char*
/// @param nameFilters const char**
/// @param filters flag of enum QDir__Filter
/// @param flags flag of enum QDirIterator__IteratorFlag
QDirIterator* q_diriterator_new9(const char* path, const char* nameFilters[static 1], int32_t filters, int32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#next)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirIterator*
const char* q_diriterator_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#nextFileInfo)
///
/// @param self QDirIterator*
QFileInfo* q_diriterator_next_file_info(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#hasNext)
///
/// @param self QDirIterator*
bool q_diriterator_has_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirIterator*
const char* q_diriterator_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#filePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirIterator*
const char* q_diriterator_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#fileInfo)
///
/// @param self QDirIterator*
QFileInfo* q_diriterator_file_info(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#path)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDirIterator*
const char* q_diriterator_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#dtor.QDirIterator)
///
/// Delete this object from C++ memory.
///
/// @param self QDirIterator*
void q_diriterator_delete(void* self);

/// https://doc.qt.io/qt-6/qdiriterator.html#types

typedef enum {
    QDIRITERATOR_ITERATORFLAG_NOITERATORFLAGS = 0,
    QDIRITERATOR_ITERATORFLAG_FOLLOWSYMLINKS = 1,
    QDIRITERATOR_ITERATORFLAG_SUBDIRECTORIES = 2
} QDirIterator__IteratorFlag;

#endif

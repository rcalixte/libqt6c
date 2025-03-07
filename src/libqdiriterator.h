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

QDirIterator* q_diriterator_new(void* dir);
QDirIterator* q_diriterator_new2(const char* path);
QDirIterator* q_diriterator_new3(const char* path, int64_t filter);
QDirIterator* q_diriterator_new4(const char* path, const char* nameFilters[]);
QDirIterator* q_diriterator_new5(void* dir, int64_t flags);
QDirIterator* q_diriterator_new6(const char* path, int64_t flags);
QDirIterator* q_diriterator_new7(const char* path, int64_t filter, int64_t flags);
QDirIterator* q_diriterator_new8(const char* path, const char* nameFilters[], int64_t filters);
QDirIterator* q_diriterator_new9(const char* path, const char* nameFilters[], int64_t filters, int64_t flags);
const char* q_diriterator_next(void* self);
QFileInfo* q_diriterator_next_file_info(void* self);
bool q_diriterator_has_next(void* self);
const char* q_diriterator_file_name(void* self);
const char* q_diriterator_file_path(void* self);
QFileInfo* q_diriterator_file_info(void* self);
const char* q_diriterator_path(void* self);
void q_diriterator_delete(void* self);

/// https://doc.qt.io/qt-6/qdiriterator.html#types

typedef enum {
    QDIRITERATOR_ITERATORFLAG_NOITERATORFLAGS = 0,
    QDIRITERATOR_ITERATORFLAG_FOLLOWSYMLINKS = 1,
    QDIRITERATOR_ITERATORFLAG_SUBDIRECTORIES = 2
} QDirIterator__IteratorFlag;

#endif

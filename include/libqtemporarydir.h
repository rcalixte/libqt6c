#pragma once
#ifndef SRCQT6C_LIBQTEMPORARYDIR_H
#define SRCQT6C_LIBQTEMPORARYDIR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>

/// https://doc.qt.io/qt-6/qtemporarydir.html

/// q_temporarydir_new constructs a new QTemporaryDir object.
///
///
QTemporaryDir* q_temporarydir_new();

/// q_temporarydir_new2 constructs a new QTemporaryDir object.
///
/// ``` const char* templateName ```
QTemporaryDir* q_temporarydir_new2(const char* templateName);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#swap)
///
/// ``` QTemporaryDir* self, QTemporaryDir* other ```
void q_temporarydir_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#isValid)
///
/// ``` QTemporaryDir* self ```
bool q_temporarydir_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#errorString)
///
/// ``` QTemporaryDir* self ```
const char* q_temporarydir_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#autoRemove)
///
/// ``` QTemporaryDir* self ```
bool q_temporarydir_auto_remove(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#setAutoRemove)
///
/// ``` QTemporaryDir* self, bool b ```
void q_temporarydir_set_auto_remove(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#remove)
///
/// ``` QTemporaryDir* self ```
bool q_temporarydir_remove(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#path)
///
/// ``` QTemporaryDir* self ```
const char* q_temporarydir_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#filePath)
///
/// ``` QTemporaryDir* self, const char* fileName ```
const char* q_temporarydir_file_path(void* self, const char* fileName);

/// Delete this object from C++ memory.
///
/// ``` QTemporaryDir* self ```
void q_temporarydir_delete(void* self);

#endif

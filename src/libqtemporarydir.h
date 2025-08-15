#pragma once
#ifndef SRCQT6C_LIBQTEMPORARYDIR_H
#define SRCQT6C_LIBQTEMPORARYDIR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtemporarydir.html

/// q_temporarydir_new constructs a new QTemporaryDir object.
///
QTemporaryDir* q_temporarydir_new();

/// q_temporarydir_new2 constructs a new QTemporaryDir object.
///
/// @param templateName const char*
QTemporaryDir* q_temporarydir_new2(const char* templateName);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#swap)
///
/// @param self QTemporaryDir*
/// @param other QTemporaryDir*
void q_temporarydir_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#isValid)
///
/// @param self QTemporaryDir*
bool q_temporarydir_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTemporaryDir*
const char* q_temporarydir_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#autoRemove)
///
/// @param self QTemporaryDir*
bool q_temporarydir_auto_remove(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#setAutoRemove)
///
/// @param self QTemporaryDir*
/// @param b bool
void q_temporarydir_set_auto_remove(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#remove)
///
/// @param self QTemporaryDir*
bool q_temporarydir_remove(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#path)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTemporaryDir*
const char* q_temporarydir_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#filePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTemporaryDir*
/// @param fileName const char*
const char* q_temporarydir_file_path(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#dtor.QTemporaryDir)
///
/// Delete this object from C++ memory.
///
/// @param self QTemporaryDir*
void q_temporarydir_delete(void* self);

#endif

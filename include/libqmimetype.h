#pragma once
#ifndef SRCQT6C_LIBQMIMETYPE_H
#define SRCQT6C_LIBQMIMETYPE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>

/// https://doc.qt.io/qt-6/qmimetype.html

/// q_mimetype_new constructs a new QMimeType object.
///
///
QMimeType* q_mimetype_new();

/// q_mimetype_new2 constructs a new QMimeType object.
///
/// ``` QMimeType* other ```
QMimeType* q_mimetype_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#operator=)
///
/// ``` QMimeType* self, QMimeType* other ```
void q_mimetype_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#swap)
///
/// ``` QMimeType* self, QMimeType* other ```
void q_mimetype_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#operator==)
///
/// ``` QMimeType* self, QMimeType* other ```
bool q_mimetype_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#operator!=)
///
/// ``` QMimeType* self, QMimeType* other ```
bool q_mimetype_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#isValid)
///
/// ``` QMimeType* self ```
bool q_mimetype_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#isDefault)
///
/// ``` QMimeType* self ```
bool q_mimetype_is_default(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#name)
///
/// ``` QMimeType* self ```
const char* q_mimetype_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#comment)
///
/// ``` QMimeType* self ```
const char* q_mimetype_comment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#genericIconName)
///
/// ``` QMimeType* self ```
const char* q_mimetype_generic_icon_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#iconName)
///
/// ``` QMimeType* self ```
const char* q_mimetype_icon_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#globPatterns)
///
/// ``` QMimeType* self ```
const char** q_mimetype_glob_patterns(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#parentMimeTypes)
///
/// ``` QMimeType* self ```
const char** q_mimetype_parent_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#allAncestors)
///
/// ``` QMimeType* self ```
const char** q_mimetype_all_ancestors(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#aliases)
///
/// ``` QMimeType* self ```
const char** q_mimetype_aliases(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#suffixes)
///
/// ``` QMimeType* self ```
const char** q_mimetype_suffixes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#preferredSuffix)
///
/// ``` QMimeType* self ```
const char* q_mimetype_preferred_suffix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#inherits)
///
/// ``` QMimeType* self, const char* mimeTypeName ```
bool q_mimetype_inherits(void* self, const char* mimeTypeName);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#filterString)
///
/// ``` QMimeType* self ```
const char* q_mimetype_filter_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmimetype.html#dtor.QMimeType)
///
/// Delete this object from C++ memory.
///
/// ``` QMimeType* self ```
void q_mimetype_delete(void* self);

#endif

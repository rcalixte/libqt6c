#pragma once
#ifndef SRC_QT6C_LIBQMIMETYPE_H
#define SRC_QT6C_LIBQMIMETYPE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html)

/// q_mimetype_new constructs a new QMimeType object.
///
QMimeType* q_mimetype_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html)

/// q_mimetype_new2 constructs a new QMimeType object.
///
/// @param other QMimeType*
///
QMimeType* q_mimetype_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#operator-eq)
///
/// @param self QMimeType*
/// @param other QMimeType*
///
void q_mimetype_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#swap)
///
/// @param self QMimeType*
/// @param other QMimeType*
///
void q_mimetype_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#isValid)
///
/// @param self QMimeType*
///
bool q_mimetype_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#isDefault)
///
/// @param self QMimeType*
///
bool q_mimetype_is_default(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#name)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QMimeType*
///
const char* q_mimetype_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#comment)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QMimeType*
///
const char* q_mimetype_comment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#genericIconName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QMimeType*
///
const char* q_mimetype_generic_icon_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#iconName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QMimeType*
///
const char* q_mimetype_icon_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#globPatterns)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QMimeType*
///
const char** q_mimetype_glob_patterns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#parentMimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QMimeType*
///
const char** q_mimetype_parent_mime_types(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#allAncestors)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QMimeType*
///
const char** q_mimetype_all_ancestors(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#aliases)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QMimeType*
///
const char** q_mimetype_aliases(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#suffixes)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QMimeType*
///
const char** q_mimetype_suffixes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#preferredSuffix)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QMimeType*
///
const char* q_mimetype_preferred_suffix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#inherits)
///
/// @param self QMimeType*
/// @param mimeTypeName const char*
///
bool q_mimetype_inherits(void* self, const char* mimeTypeName);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#filterString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QMimeType*
///
const char* q_mimetype_filter_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#dtor.QMimeType)
///
/// Delete this object from C++ memory.
///
/// @param self QMimeType*
///
void q_mimetype_delete(void* self);

#endif

#pragma once
#ifndef LIBQMIMETYPE_H
#define LIBQMIMETYPE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#qHash)
///
/// @param key QMimeType*
/// @param seed size_t
///
size_t q_qmimetype_q_hash(const void* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html)

/// q_mimetype_new constructs a new QMimeType object.
///
QMimeType* q_mimetype_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html)

/// q_mimetype_new2 constructs a new QMimeType object.
///
/// @param other QMimeType*
///
QMimeType* q_mimetype_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#operator-eq)
///
/// @param self QMimeType*
/// @param other QMimeType*
///
void q_mimetype_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#swap)
///
/// @param self QMimeType*
/// @param other QMimeType*
///
void q_mimetype_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#isValid)
///
/// @param self const QMimeType*
///
bool q_mimetype_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#isDefault)
///
/// @param self const QMimeType*
///
bool q_mimetype_is_default(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMimeType*
///
const char* q_mimetype_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#comment)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMimeType*
///
const char* q_mimetype_comment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#genericIconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMimeType*
///
const char* q_mimetype_generic_icon_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#iconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMimeType*
///
const char* q_mimetype_icon_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#globPatterns)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QMimeType*
///
const char** q_mimetype_glob_patterns(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#parentMimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QMimeType*
///
const char** q_mimetype_parent_mime_types(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#allAncestors)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QMimeType*
///
const char** q_mimetype_all_ancestors(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#aliases)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QMimeType*
///
const char** q_mimetype_aliases(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#suffixes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QMimeType*
///
const char** q_mimetype_suffixes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#preferredSuffix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMimeType*
///
const char* q_mimetype_preferred_suffix(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#inherits)
///
/// @param self const QMimeType*
/// @param mimeTypeName const char*
///
bool q_mimetype_inherits(const void* self, const char* mimeTypeName);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#filterString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMimeType*
///
const char* q_mimetype_filter_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimetype.html#dtor.QMimeType)
///
/// Delete this object from C++ memory.
///
/// @param self QMimeType*
///
void q_mimetype_delete(void* self);

#endif

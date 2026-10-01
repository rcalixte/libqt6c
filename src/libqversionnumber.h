#pragma once
#ifndef LIBQVERSIONNUMBER_H
#define LIBQVERSIONNUMBER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#qHash)
///
/// @param key QVersionNumber*
/// @param seed size_t
///
size_t q_qversionnumber_q_hash(const void* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html)

/// q_versionnumber_new constructs a new QVersionNumber object.
///
QVersionNumber* q_versionnumber_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html)

/// q_versionnumber_new2 constructs a new QVersionNumber object.
///
/// @param args libqt_list of int
///
QVersionNumber* q_versionnumber_new2(libqt_list args);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html)

/// q_versionnumber_new3 constructs a new QVersionNumber object.
///
/// @param maj int
///
QVersionNumber* q_versionnumber_new3(int maj);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html)

/// q_versionnumber_new4 constructs a new QVersionNumber object.
///
/// @param maj int
/// @param min int
///
QVersionNumber* q_versionnumber_new4(int maj, int min);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html)

/// q_versionnumber_new5 constructs a new QVersionNumber object.
///
/// @param maj int
/// @param min int
/// @param mic int
///
QVersionNumber* q_versionnumber_new5(int maj, int min, int mic);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html)

/// q_versionnumber_new6 constructs a new QVersionNumber object.
///
/// @param param1 QVersionNumber*
///
QVersionNumber* q_versionnumber_new6(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#isNull)
///
/// @param self const QVersionNumber*
///
bool q_versionnumber_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#isNormalized)
///
/// @param self const QVersionNumber*
///
bool q_versionnumber_is_normalized(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#majorVersion)
///
/// @param self const QVersionNumber*
///
int32_t q_versionnumber_major_version(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#minorVersion)
///
/// @param self const QVersionNumber*
///
int32_t q_versionnumber_minor_version(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#microVersion)
///
/// @param self const QVersionNumber*
///
int32_t q_versionnumber_micro_version(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#normalized)
///
/// @param self const QVersionNumber*
///
QVersionNumber* q_versionnumber_normalized(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#segments)
///
/// @param self const QVersionNumber*
///
/// @return libqt_list of int
///
libqt_list q_versionnumber_segments(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#segmentAt)
///
/// @param self const QVersionNumber*
/// @param index intptr_t
///
int32_t q_versionnumber_segment_at(const void* self, intptr_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#segmentCount)
///
/// @param self const QVersionNumber*
///
intptr_t q_versionnumber_segment_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#isPrefixOf)
///
/// @param self const QVersionNumber*
/// @param other QVersionNumber*
///
bool q_versionnumber_is_prefix_of(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#compare)
///
/// @param v1 QVersionNumber*
/// @param v2 QVersionNumber*
///
int32_t q_versionnumber_compare(const void* v1, const void* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#commonPrefix)
///
/// @param v1 QVersionNumber*
/// @param v2 QVersionNumber*
///
QVersionNumber* q_versionnumber_common_prefix(const void* v1, const void* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QVersionNumber*
///
const char* q_versionnumber_to_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
///
/// @param string const char*
///
QVersionNumber* q_versionnumber_from_string(const char* string);

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#operator-eq)
///
/// @param self QVersionNumber*
/// @param param1 QVersionNumber*
///
void q_versionnumber_operator_assign(void* self, const void* param1);

#if defined(__linux__) || defined(__FreeBSD__)
/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
///
/// @param string const char*
/// @param suffixIndex intptr_t*
///
QVersionNumber* q_versionnumber_from_string2(const char* string, intptr_t* suffixIndex);
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qversionnumber.html#dtor.QVersionNumber)
///
/// Delete this object from C++ memory.
///
/// @param self QVersionNumber*
///
void q_versionnumber_delete(void* self);

#endif

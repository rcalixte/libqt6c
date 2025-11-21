#pragma once
#ifndef SRC_QT6C_LIBQVERSIONNUMBER_H
#define SRC_QT6C_LIBQVERSIONNUMBER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qversionnumber.html

/// q_versionnumber_new constructs a new QVersionNumber object.
///
QVersionNumber* q_versionnumber_new();

/// q_versionnumber_new2 constructs a new QVersionNumber object.
///
/// @param args libqt_list /* of int */
QVersionNumber* q_versionnumber_new2(libqt_list args);

/// q_versionnumber_new3 constructs a new QVersionNumber object.
///
/// @param maj int
QVersionNumber* q_versionnumber_new3(int maj);

/// q_versionnumber_new4 constructs a new QVersionNumber object.
///
/// @param maj int
/// @param min int
QVersionNumber* q_versionnumber_new4(int maj, int min);

/// q_versionnumber_new5 constructs a new QVersionNumber object.
///
/// @param maj int
/// @param min int
/// @param mic int
QVersionNumber* q_versionnumber_new5(int maj, int min, int mic);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isNull)
///
/// @param self QVersionNumber*
bool q_versionnumber_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isNormalized)
///
/// @param self QVersionNumber*
bool q_versionnumber_is_normalized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#majorVersion)
///
/// @param self QVersionNumber*
int32_t q_versionnumber_major_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#minorVersion)
///
/// @param self QVersionNumber*
int32_t q_versionnumber_minor_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#microVersion)
///
/// @param self QVersionNumber*
int32_t q_versionnumber_micro_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#normalized)
///
/// @param self QVersionNumber*
QVersionNumber* q_versionnumber_normalized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segments)
///
/// @param self QVersionNumber*
libqt_list /* of int */ q_versionnumber_segments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segmentAt)
///
/// @param self QVersionNumber*
/// @param index int64_t
int32_t q_versionnumber_segment_at(void* self, int64_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segmentCount)
///
/// @param self QVersionNumber*
int64_t q_versionnumber_segment_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isPrefixOf)
///
/// @param self QVersionNumber*
/// @param other QVersionNumber*
bool q_versionnumber_is_prefix_of(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#compare)
///
/// @param v1 QVersionNumber*
/// @param v2 QVersionNumber*
int32_t q_versionnumber_compare(void* v1, void* v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#commonPrefix)
///
/// @param v1 QVersionNumber*
/// @param v2 QVersionNumber*
QVersionNumber* q_versionnumber_common_prefix(void* v1, void* v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QVersionNumber*
const char* q_versionnumber_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
///
/// @param stringVal char*
QVersionNumber* q_versionnumber_from_string(char* stringVal);

#if defined(__linux__) || defined(__FreeBSD__)
/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
///
/// @param stringVal char*
/// @param suffixIndex int64_t*
QVersionNumber* q_versionnumber_from_string2(char* stringVal, int64_t* suffixIndex);
#endif

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#dtor.QVersionNumber)
///
/// Delete this object from C++ memory.
///
/// @param self QVersionNumber*
void q_versionnumber_delete(void* self);

#endif

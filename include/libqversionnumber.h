#pragma once
#ifndef SRCQT6C_LIBQVERSIONNUMBER_H
#define SRCQT6C_LIBQVERSIONNUMBER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qversionnumber.html

/// q_versionnumber_new constructs a new QVersionNumber object.
///
///
QVersionNumber* q_versionnumber_new();

/// q_versionnumber_new2 constructs a new QVersionNumber object.
///
/// ``` int* seg[] ```
QVersionNumber* q_versionnumber_new2(int* seg[]);

/// q_versionnumber_new3 constructs a new QVersionNumber object.
///
/// ``` int maj ```
QVersionNumber* q_versionnumber_new3(int maj);

/// q_versionnumber_new4 constructs a new QVersionNumber object.
///
/// ``` int maj, int min ```
QVersionNumber* q_versionnumber_new4(int maj, int min);

/// q_versionnumber_new5 constructs a new QVersionNumber object.
///
/// ``` int maj, int min, int mic ```
QVersionNumber* q_versionnumber_new5(int maj, int min, int mic);

/// q_versionnumber_new6 constructs a new QVersionNumber object.
///
/// ``` QVersionNumber* param1 ```
QVersionNumber* q_versionnumber_new6(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isNull)
///
/// ``` QVersionNumber* self ```
bool q_versionnumber_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isNormalized)
///
/// ``` QVersionNumber* self ```
bool q_versionnumber_is_normalized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#majorVersion)
///
/// ``` QVersionNumber* self ```
int32_t q_versionnumber_major_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#minorVersion)
///
/// ``` QVersionNumber* self ```
int32_t q_versionnumber_minor_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#microVersion)
///
/// ``` QVersionNumber* self ```
int32_t q_versionnumber_micro_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#normalized)
///
/// ``` QVersionNumber* self ```
QVersionNumber* q_versionnumber_normalized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segments)
///
/// ``` QVersionNumber* self ```
libqt_list /* of int */ q_versionnumber_segments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segmentAt)
///
/// ``` QVersionNumber* self, int64_t index ```
int32_t q_versionnumber_segment_at(void* self, int64_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#segmentCount)
///
/// ``` QVersionNumber* self ```
int64_t q_versionnumber_segment_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#isPrefixOf)
///
/// ``` QVersionNumber* self, QVersionNumber* other ```
bool q_versionnumber_is_prefix_of(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#compare)
///
/// ``` QVersionNumber* v1, QVersionNumber* v2 ```
int32_t q_versionnumber_compare(void* v1, void* v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#commonPrefix)
///
/// ``` QVersionNumber* v1, QVersionNumber* v2 ```
QVersionNumber* q_versionnumber_common_prefix(void* v1, void* v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#toString)
///
/// ``` QVersionNumber* self ```
const char* q_versionnumber_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
///
/// ``` const char* stringVal ```
QVersionNumber* q_versionnumber_from_string(const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
///
/// ``` const char* stringVal, int64_t* suffixIndex ```
QVersionNumber* q_versionnumber_from_string2(const char* stringVal, int64_t* suffixIndex);

/// Delete this object from C++ memory.
///
/// ``` QVersionNumber* self ```
void q_versionnumber_delete(void* self);

/// https://doc.qt.io/qt-6/qtyperevision.html

/// q_typerevision_new constructs a new QTypeRevision object.
///
/// ``` QTypeRevision* other ```
QTypeRevision* q_typerevision_new(void* other);

/// q_typerevision_new2 constructs a new QTypeRevision object and invalidates the source QTypeRevision object.
///
/// ``` QTypeRevision* other ```
QTypeRevision* q_typerevision_new2(void* other);

/// q_typerevision_new3 constructs a new QTypeRevision object.
///
///
QTypeRevision* q_typerevision_new3();

/// q_typerevision_new4 constructs a new QTypeRevision object.
///
/// ``` QTypeRevision* param1 ```
QTypeRevision* q_typerevision_new4(void* param1);

/// q_typerevision_copy_assign shallow copies `other` into `self`.
///
/// ``` QTypeRevision* self, QTypeRevision* other ```
void q_typerevision_copy_assign(void* self, void* other);

/// q_typerevision_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTypeRevision* self, QTypeRevision* other ```
void q_typerevision_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#zero)
///
///
QTypeRevision* q_typerevision_zero();

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#hasMajorVersion)
///
/// ``` QTypeRevision* self ```
bool q_typerevision_has_major_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#majorVersion)
///
/// ``` QTypeRevision* self ```
unsigned char q_typerevision_major_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#hasMinorVersion)
///
/// ``` QTypeRevision* self ```
bool q_typerevision_has_minor_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#minorVersion)
///
/// ``` QTypeRevision* self ```
unsigned char q_typerevision_minor_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#isValid)
///
/// ``` QTypeRevision* self ```
bool q_typerevision_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// ``` QTypeRevision* self ```
void q_typerevision_delete(void* self);

#endif

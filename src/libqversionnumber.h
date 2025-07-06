#pragma once
#ifndef SRCQT6C_LIBQVERSIONNUMBER_H
#define SRCQT6C_LIBQVERSIONNUMBER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qversionnumber.html

/// q_versionnumber_new constructs a new QVersionNumber object.
///
///
QVersionNumber* q_versionnumber_new();

/// q_versionnumber_new2 constructs a new QVersionNumber object.
///
/// ``` libqt_list /* of int */ args ```
QVersionNumber* q_versionnumber_new2(libqt_list args);

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
/// ``` char* stringVal ```
QVersionNumber* q_versionnumber_from_string(char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#fromString)
///
/// ``` char* stringVal, int64_t* suffixIndex ```
QVersionNumber* q_versionnumber_from_string2(char* stringVal, int64_t* suffixIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qversionnumber.html#dtor.QVersionNumber)
///
/// Delete this object from C++ memory.
///
/// ``` QVersionNumber* self ```
void q_versionnumber_delete(void* self);

#endif

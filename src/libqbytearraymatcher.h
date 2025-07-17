#pragma once
#ifndef SRCQT6C_LIBQBYTEARRAYMATCHER_H
#define SRCQT6C_LIBQBYTEARRAYMATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbytearraymatcher.html

/// q_bytearraymatcher_new constructs a new QByteArrayMatcher object.
///
///
QByteArrayMatcher* q_bytearraymatcher_new();

/// q_bytearraymatcher_new2 constructs a new QByteArrayMatcher object.
///
/// ``` const char* pattern ```
QByteArrayMatcher* q_bytearraymatcher_new2(const char* pattern);

/// q_bytearraymatcher_new3 constructs a new QByteArrayMatcher object.
///
/// ``` const char* pattern ```
QByteArrayMatcher* q_bytearraymatcher_new3(const char* pattern);

/// q_bytearraymatcher_new4 constructs a new QByteArrayMatcher object.
///
/// ``` const char* pattern ```
QByteArrayMatcher* q_bytearraymatcher_new4(const char* pattern);

/// q_bytearraymatcher_new5 constructs a new QByteArrayMatcher object.
///
/// ``` QByteArrayMatcher* other ```
QByteArrayMatcher* q_bytearraymatcher_new5(void* other);

/// q_bytearraymatcher_new6 constructs a new QByteArrayMatcher object.
///
/// ``` const char* pattern, int64_t length ```
QByteArrayMatcher* q_bytearraymatcher_new6(const char* pattern, int64_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#operator-eq)
///
/// ``` QByteArrayMatcher* self, QByteArrayMatcher* other ```
void q_bytearraymatcher_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#setPattern)
///
/// ``` QByteArrayMatcher* self, const char* pattern ```
void q_bytearraymatcher_set_pattern(void* self, const char* pattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// ``` QByteArrayMatcher* self, const char* str, int64_t lenVal ```
int64_t q_bytearraymatcher_index_in(void* self, const char* str, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// ``` QByteArrayMatcher* self, const char* data ```
int64_t q_bytearraymatcher_index_in2(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#pattern)
///
/// ``` QByteArrayMatcher* self ```
char* q_bytearraymatcher_pattern(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// ``` QByteArrayMatcher* self, const char* str, int64_t lenVal, int64_t from ```
int64_t q_bytearraymatcher_index_in3(void* self, const char* str, int64_t lenVal, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// ``` QByteArrayMatcher* self, const char* data, int64_t from ```
int64_t q_bytearraymatcher_index_in22(void* self, const char* data, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#dtor.QByteArrayMatcher)
///
/// Delete this object from C++ memory.
///
/// ``` QByteArrayMatcher* self ```
void q_bytearraymatcher_delete(void* self);

/// https://doc.qt.io/qt-6/qstaticbytearraymatcherbase.html

/// q_staticbytearraymatcherbase_new constructs a new QStaticByteArrayMatcherBase object.
///
/// ``` QStaticByteArrayMatcherBase* other ```
QStaticByteArrayMatcherBase* q_staticbytearraymatcherbase_new(void* other);

/// q_staticbytearraymatcherbase_copy_assign shallow copies `other` into `self`.
///
/// ``` QStaticByteArrayMatcherBase* self, QStaticByteArrayMatcherBase* other ```
void q_staticbytearraymatcherbase_copy_assign(void* self, void* other);

#endif

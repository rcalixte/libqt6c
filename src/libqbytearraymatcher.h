#pragma once
#ifndef SRC_QT6C_LIBQBYTEARRAYMATCHER_H
#define SRC_QT6C_LIBQBYTEARRAYMATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbytearraymatcher.html

/// q_bytearraymatcher_new constructs a new QByteArrayMatcher object.
///
QByteArrayMatcher* q_bytearraymatcher_new();

/// q_bytearraymatcher_new2 constructs a new QByteArrayMatcher object.
///
/// @param pattern const char*
QByteArrayMatcher* q_bytearraymatcher_new2(const char* pattern);

/// q_bytearraymatcher_new3 constructs a new QByteArrayMatcher object.
///
/// @param pattern const char*
QByteArrayMatcher* q_bytearraymatcher_new3(const char* pattern);

/// q_bytearraymatcher_new4 constructs a new QByteArrayMatcher object.
///
/// @param pattern const char*
QByteArrayMatcher* q_bytearraymatcher_new4(const char* pattern);

/// q_bytearraymatcher_new5 constructs a new QByteArrayMatcher object.
///
/// @param other QByteArrayMatcher*
QByteArrayMatcher* q_bytearraymatcher_new5(void* other);

/// q_bytearraymatcher_new6 constructs a new QByteArrayMatcher object.
///
/// @param pattern const char*
/// @param length int64_t
QByteArrayMatcher* q_bytearraymatcher_new6(const char* pattern, int64_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#operator-eq)
///
/// @param self QByteArrayMatcher*
/// @param other QByteArrayMatcher*
void q_bytearraymatcher_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#setPattern)
///
/// @param self QByteArrayMatcher*
/// @param pattern const char*
void q_bytearraymatcher_set_pattern(void* self, const char* pattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// @param self QByteArrayMatcher*
/// @param str const char*
/// @param lenVal int64_t
int64_t q_bytearraymatcher_index_in(void* self, const char* str, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// @param self QByteArrayMatcher*
/// @param data const char*
int64_t q_bytearraymatcher_index_in2(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#pattern)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayMatcher*
char* q_bytearraymatcher_pattern(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// @param self QByteArrayMatcher*
/// @param str const char*
/// @param lenVal int64_t
/// @param from int64_t
int64_t q_bytearraymatcher_index_in3(void* self, const char* str, int64_t lenVal, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// @param self QByteArrayMatcher*
/// @param data const char*
/// @param from int64_t
int64_t q_bytearraymatcher_index_in22(void* self, const char* data, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#dtor.QByteArrayMatcher)
///
/// Delete this object from C++ memory.
///
/// @param self QByteArrayMatcher*
void q_bytearraymatcher_delete(void* self);

/// https://doc.qt.io/qt-6/qstaticbytearraymatcherbase.html

/// q_staticbytearraymatcherbase_new constructs a new QStaticByteArrayMatcherBase object.
///
/// @param other QStaticByteArrayMatcherBase*
QStaticByteArrayMatcherBase* q_staticbytearraymatcherbase_new(void* other);

/// q_staticbytearraymatcherbase_copy_assign shallow copies `other` into `self`.
///
/// @param self QStaticByteArrayMatcherBase*
/// @param other QStaticByteArrayMatcherBase*
void q_staticbytearraymatcherbase_copy_assign(void* self, void* other);

#endif

#pragma once
#ifndef SRC_QT6C_LIBQBYTEARRAYMATCHER_H
#define SRC_QT6C_LIBQBYTEARRAYMATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html)

/// q_bytearraymatcher_new constructs a new QByteArrayMatcher object.
///
QByteArrayMatcher* q_bytearraymatcher_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html)

/// q_bytearraymatcher_new2 constructs a new QByteArrayMatcher object.
///
/// @param pattern char*
///
QByteArrayMatcher* q_bytearraymatcher_new2(char* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html)

/// q_bytearraymatcher_new3 constructs a new QByteArrayMatcher object.
///
/// @param pattern char*
///
QByteArrayMatcher* q_bytearraymatcher_new3(char* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html)

/// q_bytearraymatcher_new4 constructs a new QByteArrayMatcher object.
///
/// @param pattern const char*
///
QByteArrayMatcher* q_bytearraymatcher_new4(const char* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html)

/// q_bytearraymatcher_new5 constructs a new QByteArrayMatcher object.
///
/// @param other QByteArrayMatcher*
///
QByteArrayMatcher* q_bytearraymatcher_new5(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html)

/// q_bytearraymatcher_new6 constructs a new QByteArrayMatcher object.
///
/// @param pattern const char*
/// @param length intptr_t
///
QByteArrayMatcher* q_bytearraymatcher_new6(const char* pattern, intptr_t length);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#operator-eq)
///
/// @param self QByteArrayMatcher*
/// @param other QByteArrayMatcher*
///
void q_bytearraymatcher_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#setPattern)
///
/// @param self QByteArrayMatcher*
/// @param pattern char*
///
void q_bytearraymatcher_set_pattern(void* self, char* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// @param self QByteArrayMatcher*
/// @param str const char*
/// @param lenVal intptr_t
///
intptr_t q_bytearraymatcher_index_in(void* self, const char* str, intptr_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// @param self QByteArrayMatcher*
/// @param data char*
///
intptr_t q_bytearraymatcher_index_in2(void* self, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#pattern)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QByteArrayMatcher*
///
char* q_bytearraymatcher_pattern(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// @param self QByteArrayMatcher*
/// @param str const char*
/// @param lenVal intptr_t
/// @param from intptr_t
///
intptr_t q_bytearraymatcher_index_in3(void* self, const char* str, intptr_t lenVal, intptr_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// @param self QByteArrayMatcher*
/// @param data char*
/// @param from intptr_t
///
intptr_t q_bytearraymatcher_index_in22(void* self, char* data, intptr_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearraymatcher.html#dtor.QByteArrayMatcher)
///
/// Delete this object from C++ memory.
///
/// @param self QByteArrayMatcher*
///
void q_bytearraymatcher_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstaticbytearraymatcherbase.html)

/// q_staticbytearraymatcherbase_new constructs a new QStaticByteArrayMatcherBase object.
///
/// @param other QStaticByteArrayMatcherBase*
///
QStaticByteArrayMatcherBase* q_staticbytearraymatcherbase_new(void* other);

/// q_staticbytearraymatcherbase_copy_assign shallow copies `other` into `self`.
///
/// @param self QStaticByteArrayMatcherBase*
/// @param other QStaticByteArrayMatcherBase*
///
void q_staticbytearraymatcherbase_copy_assign(void* self, void* other);

#endif

#pragma once
#ifndef SRCQT6C_LIBQJSONARRAY_H
#define SRCQT6C_LIBQJSONARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qjsonarray.html

/// q_jsonarray_new constructs a new QJsonArray object.
///
///
QJsonArray* q_jsonarray_new();

/// q_jsonarray_new2 constructs a new QJsonArray object.
///
/// ``` QJsonArray* other ```
QJsonArray* q_jsonarray_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator=)
///
/// ``` QJsonArray* self, QJsonArray* other ```
void q_jsonarray_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#fromStringList)
///
/// ``` const char* list[] ```
QJsonArray* q_jsonarray_from_string_list(const char* list[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#size)
///
/// ``` QJsonArray* self ```
int64_t q_jsonarray_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#count)
///
/// ``` QJsonArray* self ```
int64_t q_jsonarray_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#isEmpty)
///
/// ``` QJsonArray* self ```
bool q_jsonarray_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#at)
///
/// ``` QJsonArray* self, int64_t i ```
QJsonValue* q_jsonarray_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#first)
///
/// ``` QJsonArray* self ```
QJsonValue* q_jsonarray_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#last)
///
/// ``` QJsonArray* self ```
QJsonValue* q_jsonarray_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#prepend)
///
/// ``` QJsonArray* self, QJsonValue* value ```
void q_jsonarray_prepend(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#append)
///
/// ``` QJsonArray* self, QJsonValue* value ```
void q_jsonarray_append(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeAt)
///
/// ``` QJsonArray* self, int64_t i ```
void q_jsonarray_remove_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#takeAt)
///
/// ``` QJsonArray* self, int64_t i ```
QJsonValue* q_jsonarray_take_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeFirst)
///
/// ``` QJsonArray* self ```
void q_jsonarray_remove_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeLast)
///
/// ``` QJsonArray* self ```
void q_jsonarray_remove_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#insert)
///
/// ``` QJsonArray* self, int64_t i, QJsonValue* value ```
void q_jsonarray_insert(void* self, int64_t i, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#replace)
///
/// ``` QJsonArray* self, int64_t i, QJsonValue* value ```
void q_jsonarray_replace(void* self, int64_t i, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#contains)
///
/// ``` QJsonArray* self, QJsonValue* element ```
bool q_jsonarray_contains(void* self, void* element);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator[])
///
/// ``` QJsonArray* self, int64_t i ```
QJsonValueRef* q_jsonarray_operator_subscript(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator[])
///
/// ``` QJsonArray* self, int64_t i ```
QJsonValue* q_jsonarray_operator_subscript2(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#swap)
///
/// ``` QJsonArray* self, QJsonArray* other ```
void q_jsonarray_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator+)
///
/// ``` QJsonArray* self, QJsonValue* v ```
QJsonArray* q_jsonarray_operator_plus(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator+=)
///
/// ``` QJsonArray* self, QJsonValue* v ```
QJsonArray* q_jsonarray_operator_plus_assign(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator<<)
///
/// ``` QJsonArray* self, QJsonValue* v ```
QJsonArray* q_jsonarray_operator_shift_left(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#push_back)
///
/// ``` QJsonArray* self, QJsonValue* t ```
void q_jsonarray_push_back(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#push_front)
///
/// ``` QJsonArray* self, QJsonValue* t ```
void q_jsonarray_push_front(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#pop_front)
///
/// ``` QJsonArray* self ```
void q_jsonarray_pop_front(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#pop_back)
///
/// ``` QJsonArray* self ```
void q_jsonarray_pop_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#empty)
///
/// ``` QJsonArray* self ```
bool q_jsonarray_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#dtor.QJsonArray)
///
/// Delete this object from C++ memory.
///
/// ``` QJsonArray* self ```
void q_jsonarray_delete(void* self);

#endif

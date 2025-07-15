#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORARRAY_H
#define SRC_CBORQT6C_LIBQCBORARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcborarray.html

/// q_cborarray_new constructs a new QCborArray object.
///
///
QCborArray* q_cborarray_new();

/// q_cborarray_new2 constructs a new QCborArray object.
///
/// ``` QCborArray* other ```
QCborArray* q_cborarray_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator=)
///
/// ``` QCborArray* self, QCborArray* other ```
void q_cborarray_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#swap)
///
/// ``` QCborArray* self, QCborArray* other ```
void q_cborarray_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#toCborValue)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_to_cbor_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#size)
///
/// ``` QCborArray* self ```
int64_t q_cborarray_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#isEmpty)
///
/// ``` QCborArray* self ```
bool q_cborarray_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#clear)
///
/// ``` QCborArray* self ```
void q_cborarray_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#at)
///
/// ``` QCborArray* self, int64_t i ```
QCborValue* q_cborarray_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#first)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#last)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator[])
///
/// ``` QCborArray* self, int64_t i ```
const QCborValue* q_cborarray_operator_subscript(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#first)
///
/// ``` QCborArray* self ```
QCborValueRef* q_cborarray_first2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#last)
///
/// ``` QCborArray* self ```
QCborValueRef* q_cborarray_last2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator[])
///
/// ``` QCborArray* self, int64_t i ```
QCborValueRef* q_cborarray_operator_subscript2(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#insert)
///
/// ``` QCborArray* self, int64_t i, QCborValue* value ```
void q_cborarray_insert(void* self, int64_t i, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#prepend)
///
/// ``` QCborArray* self, QCborValue* value ```
void q_cborarray_prepend(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#append)
///
/// ``` QCborArray* self, QCborValue* value ```
void q_cborarray_append(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeAt)
///
/// ``` QCborArray* self, int64_t i ```
void q_cborarray_remove_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeAt)
///
/// ``` QCborArray* self, int64_t i ```
QCborValue* q_cborarray_take_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeFirst)
///
/// ``` QCborArray* self ```
void q_cborarray_remove_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeLast)
///
/// ``` QCborArray* self ```
void q_cborarray_remove_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeFirst)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_take_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeLast)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_take_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#contains)
///
/// ``` QCborArray* self, QCborValue* value ```
bool q_cborarray_contains(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#compare)
///
/// ``` QCborArray* self, QCborArray* other ```
int32_t q_cborarray_compare(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#push_back)
///
/// ``` QCborArray* self, QCborValue* t ```
void q_cborarray_push_back(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#push_front)
///
/// ``` QCborArray* self, QCborValue* t ```
void q_cborarray_push_front(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#pop_front)
///
/// ``` QCborArray* self ```
void q_cborarray_pop_front(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#pop_back)
///
/// ``` QCborArray* self ```
void q_cborarray_pop_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#empty)
///
/// ``` QCborArray* self ```
bool q_cborarray_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator+)
///
/// ``` QCborArray* self, QCborValue* v ```
QCborArray* q_cborarray_operator_plus(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator+=)
///
/// ``` QCborArray* self, QCborValue* v ```
QCborArray* q_cborarray_operator_plus_assign(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator<<)
///
/// ``` QCborArray* self, QCborValue* v ```
QCborArray* q_cborarray_operator_shift_left(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#fromStringList)
///
/// ``` const char* list[] ```
QCborArray* q_cborarray_from_string_list(const char* list[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#fromJsonArray)
///
/// ``` QJsonArray* array ```
QCborArray* q_cborarray_from_json_array(void* array);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#toJsonArray)
///
/// ``` QCborArray* self ```
QJsonArray* q_cborarray_to_json_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#dtor.QCborArray)
///
/// Delete this object from C++ memory.
///
/// ``` QCborArray* self ```
void q_cborarray_delete(void* self);

#endif

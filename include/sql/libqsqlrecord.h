#pragma once
#ifndef SQL_LIBQSQLRECORD_H
#define SQL_LIBQSQLRECORD_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html)

/// q_sqlrecord_new constructs a new QSqlRecord object.
///
QSqlRecord* q_sqlrecord_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html)

/// q_sqlrecord_new2 constructs a new QSqlRecord object.
///
/// @param other QSqlRecord*
///
QSqlRecord* q_sqlrecord_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-eq)
///
/// @param self QSqlRecord*
/// @param other QSqlRecord*
///
void q_sqlrecord_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#swap)
///
/// @param self QSqlRecord*
/// @param other QSqlRecord*
///
void q_sqlrecord_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-eq-eq)
///
/// @param self const QSqlRecord*
/// @param other QSqlRecord*
///
bool q_sqlrecord_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-not-eq)
///
/// @param self const QSqlRecord*
/// @param other QSqlRecord*
///
bool q_sqlrecord_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
///
/// @param self const QSqlRecord*
/// @param i int
///
QVariant* q_sqlrecord_value(const void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
///
/// @param self const QSqlRecord*
/// @param name const char*
///
QVariant* q_sqlrecord_value2(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
///
/// @param self QSqlRecord*
/// @param i int
/// @param val QVariant*
///
void q_sqlrecord_set_value(void* self, int i, const void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
///
/// @param self QSqlRecord*
/// @param name const char*
/// @param val QVariant*
///
void q_sqlrecord_set_value2(void* self, const char* name, const void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
///
/// @param self QSqlRecord*
/// @param i int
///
void q_sqlrecord_set_null(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
///
/// @param self QSqlRecord*
/// @param name const char*
///
void q_sqlrecord_set_null2(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
///
/// @param self const QSqlRecord*
/// @param i int
///
bool q_sqlrecord_is_null(const void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
///
/// @param self const QSqlRecord*
/// @param name const char*
///
bool q_sqlrecord_is_null2(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#indexOf)
///
/// @param self const QSqlRecord*
/// @param name const char*
///
int32_t q_sqlrecord_index_of(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#fieldName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSqlRecord*
/// @param i int
///
const char* q_sqlrecord_field_name(const void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#field)
///
/// @param self const QSqlRecord*
/// @param i int
///
QSqlField* q_sqlrecord_field(const void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#field)
///
/// @param self const QSqlRecord*
/// @param name const char*
///
QSqlField* q_sqlrecord_field2(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
///
/// @param self const QSqlRecord*
/// @param i int
///
bool q_sqlrecord_is_generated(const void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
///
/// @param self const QSqlRecord*
/// @param name const char*
///
bool q_sqlrecord_is_generated2(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
///
/// @param self QSqlRecord*
/// @param name const char*
/// @param generated bool
///
void q_sqlrecord_set_generated(void* self, const char* name, bool generated);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
///
/// @param self QSqlRecord*
/// @param i int
/// @param generated bool
///
void q_sqlrecord_set_generated2(void* self, int i, bool generated);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#append)
///
/// @param self QSqlRecord*
/// @param field QSqlField*
///
void q_sqlrecord_append(void* self, const void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#replace)
///
/// @param self QSqlRecord*
/// @param pos int
/// @param field QSqlField*
///
void q_sqlrecord_replace(void* self, int pos, const void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#insert)
///
/// @param self QSqlRecord*
/// @param pos int
/// @param field QSqlField*
///
void q_sqlrecord_insert(void* self, int pos, const void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#remove)
///
/// @param self QSqlRecord*
/// @param pos int
///
void q_sqlrecord_remove(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isEmpty)
///
/// @param self const QSqlRecord*
///
bool q_sqlrecord_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#contains)
///
/// @param self const QSqlRecord*
/// @param name const char*
///
bool q_sqlrecord_contains(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#clear)
///
/// @param self QSqlRecord*
///
void q_sqlrecord_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#clearValues)
///
/// @param self QSqlRecord*
///
void q_sqlrecord_clear_values(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#count)
///
/// @param self const QSqlRecord*
///
int32_t q_sqlrecord_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#keyValues)
///
/// @param self const QSqlRecord*
/// @param keyFields QSqlRecord*
///
QSqlRecord* q_sqlrecord_key_values(const void* self, const void* keyFields);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#dtor.QSqlRecord)
///
/// Delete this object from C++ memory.
///
/// @param self QSqlRecord*
///
void q_sqlrecord_delete(void* self);

#endif

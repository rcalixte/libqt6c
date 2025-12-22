#pragma once
#ifndef SRC_SQL_QT6C_LIBQSQLINDEX_H
#define SRC_SQL_QT6C_LIBQSQLINDEX_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html)

/// q_sqlindex_new constructs a new QSqlIndex object.
///
QSqlIndex* q_sqlindex_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html)

/// q_sqlindex_new2 constructs a new QSqlIndex object.
///
/// @param other QSqlIndex*
///
QSqlIndex* q_sqlindex_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html)

/// q_sqlindex_new3 constructs a new QSqlIndex object.
///
/// @param cursorName const char*
///
QSqlIndex* q_sqlindex_new3(const char* cursorName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html)

/// q_sqlindex_new4 constructs a new QSqlIndex object.
///
/// @param cursorName const char*
/// @param name const char*
///
QSqlIndex* q_sqlindex_new4(const char* cursorName, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#operator-eq)
///
/// @param self QSqlIndex*
/// @param other QSqlIndex*
///
void q_sqlindex_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#swap)
///
/// @param self QSqlIndex*
/// @param other QSqlIndex*
///
void q_sqlindex_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#setCursorName)
///
/// @param self QSqlIndex*
/// @param cursorName const char*
///
void q_sqlindex_set_cursor_name(void* self, const char* cursorName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#cursorName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSqlIndex*
///
const char* q_sqlindex_cursor_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#setName)
///
/// @param self QSqlIndex*
/// @param name const char*
///
void q_sqlindex_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSqlIndex*
///
const char* q_sqlindex_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#append)
///
/// @param self QSqlIndex*
/// @param field QSqlField*
///
void q_sqlindex_append(void* self, void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#append)
///
/// @param self QSqlIndex*
/// @param field QSqlField*
/// @param desc bool
///
void q_sqlindex_append2(void* self, void* field, bool desc);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#isDescending)
///
/// @param self QSqlIndex*
/// @param i int
///
bool q_sqlindex_is_descending(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#setDescending)
///
/// @param self QSqlIndex*
/// @param i int
/// @param desc bool
///
void q_sqlindex_set_descending(void* self, int i, bool desc);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-eq-eq)
///
/// @param self QSqlIndex*
/// @param other QSqlRecord*
///
bool q_sqlindex_operator_equal(void* self, void* other);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-not-eq)
///
/// @param self QSqlIndex*
/// @param other QSqlRecord*
///
bool q_sqlindex_operator_not_equal(void* self, void* other);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
///
/// @param self QSqlIndex*
/// @param i int
///
QVariant* q_sqlindex_value(void* self, int i);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
///
/// @param self QSqlIndex*
/// @param name char*
///
QVariant* q_sqlindex_value2(void* self, char* name);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
///
/// @param self QSqlIndex*
/// @param i int
/// @param val QVariant*
///
void q_sqlindex_set_value(void* self, int i, void* val);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
///
/// @param self QSqlIndex*
/// @param name char*
/// @param val QVariant*
///
void q_sqlindex_set_value2(void* self, char* name, void* val);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
///
/// @param self QSqlIndex*
/// @param i int
///
void q_sqlindex_set_null(void* self, int i);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
///
/// @param self QSqlIndex*
/// @param name char*
///
void q_sqlindex_set_null2(void* self, char* name);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
///
/// @param self QSqlIndex*
/// @param i int
///
bool q_sqlindex_is_null(void* self, int i);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
///
/// @param self QSqlIndex*
/// @param name char*
///
bool q_sqlindex_is_null2(void* self, char* name);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#indexOf)
///
/// @param self QSqlIndex*
/// @param name char*
///
int32_t q_sqlindex_index_of(void* self, char* name);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#fieldName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSqlIndex*
/// @param i int
///
const char* q_sqlindex_field_name(void* self, int i);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#field)
///
/// @param self QSqlIndex*
/// @param i int
///
QSqlField* q_sqlindex_field(void* self, int i);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#field)
///
/// @param self QSqlIndex*
/// @param name char*
///
QSqlField* q_sqlindex_field2(void* self, char* name);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
///
/// @param self QSqlIndex*
/// @param i int
///
bool q_sqlindex_is_generated(void* self, int i);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
///
/// @param self QSqlIndex*
/// @param name char*
///
bool q_sqlindex_is_generated2(void* self, char* name);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
///
/// @param self QSqlIndex*
/// @param name char*
/// @param generated bool
///
void q_sqlindex_set_generated(void* self, char* name, bool generated);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
///
/// @param self QSqlIndex*
/// @param i int
/// @param generated bool
///
void q_sqlindex_set_generated2(void* self, int i, bool generated);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#replace)
///
/// @param self QSqlIndex*
/// @param pos int
/// @param field QSqlField*
///
void q_sqlindex_replace(void* self, int pos, void* field);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#insert)
///
/// @param self QSqlIndex*
/// @param pos int
/// @param field QSqlField*
///
void q_sqlindex_insert(void* self, int pos, void* field);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#remove)
///
/// @param self QSqlIndex*
/// @param pos int
///
void q_sqlindex_remove(void* self, int pos);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isEmpty)
///
/// @param self QSqlIndex*
///
bool q_sqlindex_is_empty(void* self);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#contains)
///
/// @param self QSqlIndex*
/// @param name char*
///
bool q_sqlindex_contains(void* self, char* name);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#clear)
///
/// @param self QSqlIndex*
///
void q_sqlindex_clear(void* self);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#clearValues)
///
/// @param self QSqlIndex*
///
void q_sqlindex_clear_values(void* self);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#count)
///
/// @param self QSqlIndex*
///
int32_t q_sqlindex_count(void* self);

/// Inherited from QSqlRecord
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#keyValues)
///
/// @param self QSqlIndex*
/// @param keyFields QSqlRecord*
///
QSqlRecord* q_sqlindex_key_values(void* self, void* keyFields);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#dtor.QSqlIndex)
///
/// Delete this object from C++ memory.
///
/// @param self QSqlIndex*
///
void q_sqlindex_delete(void* self);

#endif

#pragma once
#ifndef SRC_SQL_QT6C_LIBQSQLRECORD_H
#define SRC_SQL_QT6C_LIBQSQLRECORD_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QSqlRecord* q_sqlrecord_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-eq)
///
/// @param self QSqlRecord*
/// @param other QSqlRecord*
///
void q_sqlrecord_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#swap)
///
/// @param self QSqlRecord*
/// @param other QSqlRecord*
///
void q_sqlrecord_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-eq-eq)
///
/// @param self QSqlRecord*
/// @param other QSqlRecord*
///
bool q_sqlrecord_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-not-eq)
///
/// @param self QSqlRecord*
/// @param other QSqlRecord*
///
bool q_sqlrecord_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
///
/// @param self QSqlRecord*
/// @param i int
///
QVariant* q_sqlrecord_value(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
///
/// @param self QSqlRecord*
/// @param name char*
///
QVariant* q_sqlrecord_value2(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
///
/// @param self QSqlRecord*
/// @param i int
/// @param val QVariant*
///
void q_sqlrecord_set_value(void* self, int i, void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
///
/// @param self QSqlRecord*
/// @param name char*
/// @param val QVariant*
///
void q_sqlrecord_set_value2(void* self, char* name, void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
///
/// @param self QSqlRecord*
/// @param i int
///
void q_sqlrecord_set_null(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
///
/// @param self QSqlRecord*
/// @param name char*
///
void q_sqlrecord_set_null2(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
///
/// @param self QSqlRecord*
/// @param i int
///
bool q_sqlrecord_is_null(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
///
/// @param self QSqlRecord*
/// @param name char*
///
bool q_sqlrecord_is_null2(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#indexOf)
///
/// @param self QSqlRecord*
/// @param name char*
///
int32_t q_sqlrecord_index_of(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#fieldName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QSqlRecord*
/// @param i int
///
const char* q_sqlrecord_field_name(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#field)
///
/// @param self QSqlRecord*
/// @param i int
///
QSqlField* q_sqlrecord_field(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#field)
///
/// @param self QSqlRecord*
/// @param name char*
///
QSqlField* q_sqlrecord_field2(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
///
/// @param self QSqlRecord*
/// @param i int
///
bool q_sqlrecord_is_generated(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
///
/// @param self QSqlRecord*
/// @param name char*
///
bool q_sqlrecord_is_generated2(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
///
/// @param self QSqlRecord*
/// @param name char*
/// @param generated bool
///
void q_sqlrecord_set_generated(void* self, char* name, bool generated);

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
void q_sqlrecord_append(void* self, void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#replace)
///
/// @param self QSqlRecord*
/// @param pos int
/// @param field QSqlField*
///
void q_sqlrecord_replace(void* self, int pos, void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#insert)
///
/// @param self QSqlRecord*
/// @param pos int
/// @param field QSqlField*
///
void q_sqlrecord_insert(void* self, int pos, void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#remove)
///
/// @param self QSqlRecord*
/// @param pos int
///
void q_sqlrecord_remove(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isEmpty)
///
/// @param self QSqlRecord*
///
bool q_sqlrecord_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#contains)
///
/// @param self QSqlRecord*
/// @param name char*
///
bool q_sqlrecord_contains(void* self, char* name);

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
/// @param self QSqlRecord*
///
int32_t q_sqlrecord_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#keyValues)
///
/// @param self QSqlRecord*
/// @param keyFields QSqlRecord*
///
QSqlRecord* q_sqlrecord_key_values(void* self, void* keyFields);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#dtor.QSqlRecord)
///
/// Delete this object from C++ memory.
///
/// @param self QSqlRecord*
///
void q_sqlrecord_delete(void* self);

#endif

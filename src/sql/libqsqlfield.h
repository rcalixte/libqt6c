#pragma once
#ifndef SRC_SQL_QT6C_LIBQSQLFIELD_H
#define SRC_SQL_QT6C_LIBQSQLFIELD_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsqlfield.html

/// q_sqlfield_new constructs a new QSqlField object.
///
QSqlField* q_sqlfield_new();

/// q_sqlfield_new2 constructs a new QSqlField object.
///
/// @param other QSqlField*
QSqlField* q_sqlfield_new2(void* other);

/// q_sqlfield_new3 constructs a new QSqlField object.
///
/// @param fieldName const char*
/// @param type enum QVariant__Type
QSqlField* q_sqlfield_new3(const char* fieldName, int64_t type);

/// q_sqlfield_new4 constructs a new QSqlField object.
///
/// @param fieldName const char*
QSqlField* q_sqlfield_new4(const char* fieldName);

/// q_sqlfield_new5 constructs a new QSqlField object.
///
/// @param fieldName const char*
/// @param type QMetaType*
QSqlField* q_sqlfield_new5(const char* fieldName, void* type);

/// q_sqlfield_new6 constructs a new QSqlField object.
///
/// @param fieldName const char*
/// @param type QMetaType*
/// @param tableName const char*
QSqlField* q_sqlfield_new6(const char* fieldName, void* type, const char* tableName);

/// q_sqlfield_new7 constructs a new QSqlField object.
///
/// @param fieldName const char*
/// @param type enum QVariant__Type
/// @param tableName const char*
QSqlField* q_sqlfield_new7(const char* fieldName, int64_t type, const char* tableName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#operator-eq)
///
/// @param self QSqlField*
/// @param other QSqlField*
void q_sqlfield_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#swap)
///
/// @param self QSqlField*
/// @param other QSqlField*
void q_sqlfield_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#operator-eq-eq)
///
/// @param self QSqlField*
/// @param other QSqlField*
bool q_sqlfield_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#operator-not-eq)
///
/// @param self QSqlField*
/// @param other QSqlField*
bool q_sqlfield_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#setValue)
///
/// @param self QSqlField*
/// @param value QVariant*
void q_sqlfield_set_value(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#value)
///
/// @param self QSqlField*
QVariant* q_sqlfield_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#setName)
///
/// @param self QSqlField*
/// @param name const char*
void q_sqlfield_set_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlField*
const char* q_sqlfield_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#setTableName)
///
/// @param self QSqlField*
/// @param tableName const char*
void q_sqlfield_set_table_name(void* self, const char* tableName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#tableName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlField*
const char* q_sqlfield_table_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#isNull)
///
/// @param self QSqlField*
bool q_sqlfield_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#setReadOnly)
///
/// @param self QSqlField*
/// @param readOnly bool
void q_sqlfield_set_read_only(void* self, bool readOnly);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#isReadOnly)
///
/// @param self QSqlField*
bool q_sqlfield_is_read_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#clear)
///
/// @param self QSqlField*
void q_sqlfield_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#isAutoValue)
///
/// @param self QSqlField*
bool q_sqlfield_is_auto_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#metaType)
///
/// @param self QSqlField*
QMetaType* q_sqlfield_meta_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#setMetaType)
///
/// @param self QSqlField*
/// @param type QMetaType*
void q_sqlfield_set_meta_type(void* self, void* type);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#type)
///
/// @param self QSqlField*
///
/// @return enum QVariant__Type
int64_t q_sqlfield_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#setType)
///
/// @param self QSqlField*
/// @param type enum QVariant__Type
void q_sqlfield_set_type(void* self, int64_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#setRequiredStatus)
///
/// @param self QSqlField*
/// @param status enum QSqlField__RequiredStatus
void q_sqlfield_set_required_status(void* self, int32_t status);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#setRequired)
///
/// @param self QSqlField*
/// @param required bool
void q_sqlfield_set_required(void* self, bool required);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#setLength)
///
/// @param self QSqlField*
/// @param fieldLength int
void q_sqlfield_set_length(void* self, int fieldLength);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#setPrecision)
///
/// @param self QSqlField*
/// @param precision int
void q_sqlfield_set_precision(void* self, int precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#setDefaultValue)
///
/// @param self QSqlField*
/// @param value QVariant*
void q_sqlfield_set_default_value(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#setSqlType)
///
/// @param self QSqlField*
/// @param type int
void q_sqlfield_set_sql_type(void* self, int type);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#setGenerated)
///
/// @param self QSqlField*
/// @param gen bool
void q_sqlfield_set_generated(void* self, bool gen);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#setAutoValue)
///
/// @param self QSqlField*
/// @param autoVal bool
void q_sqlfield_set_auto_value(void* self, bool autoVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#requiredStatus)
///
/// @param self QSqlField*
///
/// @return enum QSqlField__RequiredStatus
int32_t q_sqlfield_required_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#length)
///
/// @param self QSqlField*
int32_t q_sqlfield_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#precision)
///
/// @param self QSqlField*
int32_t q_sqlfield_precision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#defaultValue)
///
/// @param self QSqlField*
QVariant* q_sqlfield_default_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#typeID)
///
/// @param self QSqlField*
int32_t q_sqlfield_type_i_d(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#isGenerated)
///
/// @param self QSqlField*
bool q_sqlfield_is_generated(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#isValid)
///
/// @param self QSqlField*
bool q_sqlfield_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlfield.html#dtor.QSqlField)
///
/// Delete this object from C++ memory.
///
/// @param self QSqlField*
void q_sqlfield_delete(void* self);

/// https://doc.qt.io/qt-6/qsqlfield.html#types

typedef enum {
    QSQLFIELD_REQUIREDSTATUS_UNKNOWN = -1,
    QSQLFIELD_REQUIREDSTATUS_OPTIONAL = 0,
    QSQLFIELD_REQUIREDSTATUS_REQUIRED = 1
} QSqlField__RequiredStatus;

#endif

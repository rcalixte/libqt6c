#include "../libqmetatype.hpp"
#include "../libqvariant.hpp"
#include "libqsqlfield.hpp"
#include "libqsqlfield.h"

QSqlField* q_sqlfield_new() {
    return QSqlField_new();
}

QSqlField* q_sqlfield_new2(void* other) {
    return QSqlField_new2((QSqlField*)other);
}

QSqlField* q_sqlfield_new3(const char* fieldName, int32_t type) {
    return QSqlField_new3(qstring(fieldName), type);
}

QSqlField* q_sqlfield_new4(const char* fieldName) {
    return QSqlField_new4(qstring(fieldName));
}

QSqlField* q_sqlfield_new5(const char* fieldName, void* type) {
    return QSqlField_new5(qstring(fieldName), (QMetaType*)type);
}

QSqlField* q_sqlfield_new6(const char* fieldName, void* type, const char* tableName) {
    return QSqlField_new6(qstring(fieldName), (QMetaType*)type, qstring(tableName));
}

QSqlField* q_sqlfield_new7(const char* fieldName, int32_t type, const char* tableName) {
    return QSqlField_new7(qstring(fieldName), type, qstring(tableName));
}

void q_sqlfield_operator_assign(void* self, void* other) {
    QSqlField_OperatorAssign((QSqlField*)self, (QSqlField*)other);
}

void q_sqlfield_swap(void* self, void* other) {
    QSqlField_Swap((QSqlField*)self, (QSqlField*)other);
}

bool q_sqlfield_operator_equal(void* self, void* other) {
    return QSqlField_OperatorEqual((QSqlField*)self, (QSqlField*)other);
}

bool q_sqlfield_operator_not_equal(void* self, void* other) {
    return QSqlField_OperatorNotEqual((QSqlField*)self, (QSqlField*)other);
}

void q_sqlfield_set_value(void* self, void* value) {
    QSqlField_SetValue((QSqlField*)self, (QVariant*)value);
}

QVariant* q_sqlfield_value(void* self) {
    return QSqlField_Value((QSqlField*)self);
}

void q_sqlfield_set_name(void* self, const char* name) {
    QSqlField_SetName((QSqlField*)self, qstring(name));
}

const char* q_sqlfield_name(void* self) {
    libqt_string _str = QSqlField_Name((QSqlField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqlfield_set_table_name(void* self, const char* tableName) {
    QSqlField_SetTableName((QSqlField*)self, qstring(tableName));
}

const char* q_sqlfield_table_name(void* self) {
    libqt_string _str = QSqlField_TableName((QSqlField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sqlfield_is_null(void* self) {
    return QSqlField_IsNull((QSqlField*)self);
}

void q_sqlfield_set_read_only(void* self, bool readOnly) {
    QSqlField_SetReadOnly((QSqlField*)self, readOnly);
}

bool q_sqlfield_is_read_only(void* self) {
    return QSqlField_IsReadOnly((QSqlField*)self);
}

void q_sqlfield_clear(void* self) {
    QSqlField_Clear((QSqlField*)self);
}

bool q_sqlfield_is_auto_value(void* self) {
    return QSqlField_IsAutoValue((QSqlField*)self);
}

QMetaType* q_sqlfield_meta_type(void* self) {
    return QSqlField_MetaType((QSqlField*)self);
}

void q_sqlfield_set_meta_type(void* self, void* type) {
    QSqlField_SetMetaType((QSqlField*)self, (QMetaType*)type);
}

int32_t q_sqlfield_type(void* self) {
    return QSqlField_Type((QSqlField*)self);
}

void q_sqlfield_set_type(void* self, int32_t type) {
    QSqlField_SetType((QSqlField*)self, type);
}

void q_sqlfield_set_required_status(void* self, int32_t status) {
    QSqlField_SetRequiredStatus((QSqlField*)self, status);
}

void q_sqlfield_set_required(void* self, bool required) {
    QSqlField_SetRequired((QSqlField*)self, required);
}

void q_sqlfield_set_length(void* self, int fieldLength) {
    QSqlField_SetLength((QSqlField*)self, fieldLength);
}

void q_sqlfield_set_precision(void* self, int precision) {
    QSqlField_SetPrecision((QSqlField*)self, precision);
}

void q_sqlfield_set_default_value(void* self, void* value) {
    QSqlField_SetDefaultValue((QSqlField*)self, (QVariant*)value);
}

void q_sqlfield_set_sql_type(void* self, int type) {
    QSqlField_SetSqlType((QSqlField*)self, type);
}

void q_sqlfield_set_generated(void* self, bool gen) {
    QSqlField_SetGenerated((QSqlField*)self, gen);
}

void q_sqlfield_set_auto_value(void* self, bool autoVal) {
    QSqlField_SetAutoValue((QSqlField*)self, autoVal);
}

int32_t q_sqlfield_required_status(void* self) {
    return QSqlField_RequiredStatus((QSqlField*)self);
}

int32_t q_sqlfield_length(void* self) {
    return QSqlField_Length((QSqlField*)self);
}

int32_t q_sqlfield_precision(void* self) {
    return QSqlField_Precision((QSqlField*)self);
}

QVariant* q_sqlfield_default_value(void* self) {
    return QSqlField_DefaultValue((QSqlField*)self);
}

int32_t q_sqlfield_type_i_d(void* self) {
    return QSqlField_TypeID((QSqlField*)self);
}

bool q_sqlfield_is_generated(void* self) {
    return QSqlField_IsGenerated((QSqlField*)self);
}

bool q_sqlfield_is_valid(void* self) {
    return QSqlField_IsValid((QSqlField*)self);
}

void q_sqlfield_delete(void* self) {
    QSqlField_Delete((QSqlField*)(self));
}

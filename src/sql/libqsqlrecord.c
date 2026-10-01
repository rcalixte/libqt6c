#include "libqsqlfield.hpp"
#include "../libqvariant.hpp"
#include "libqsqlrecord.hpp"
#include "libqsqlrecord.h"

QSqlRecord* q_sqlrecord_new() {
    return QSqlRecord_New();
}

QSqlRecord* q_sqlrecord_new2(const void* other) {
    return QSqlRecord_New2((QSqlRecord*)other);
}

void q_sqlrecord_operator_assign(void* self, const void* other) {
    QSqlRecord_OperatorAssign((QSqlRecord*)self, (QSqlRecord*)other);
}

void q_sqlrecord_swap(void* self, void* other) {
    QSqlRecord_Swap((QSqlRecord*)self, (QSqlRecord*)other);
}

bool q_sqlrecord_operator_equal(const void* self, const void* other) {
    return QSqlRecord_OperatorEqual((QSqlRecord*)self, (QSqlRecord*)other);
}

bool q_sqlrecord_operator_not_equal(const void* self, const void* other) {
    return QSqlRecord_OperatorNotEqual((QSqlRecord*)self, (QSqlRecord*)other);
}

QVariant* q_sqlrecord_value(const void* self, int i) {
    return QSqlRecord_Value((QSqlRecord*)self, i);
}

QVariant* q_sqlrecord_value2(const void* self, const char* name) {
    return QSqlRecord_Value2((QSqlRecord*)self, name);
}

void q_sqlrecord_set_value(void* self, int i, const void* val) {
    QSqlRecord_SetValue((QSqlRecord*)self, i, (QVariant*)val);
}

void q_sqlrecord_set_value2(void* self, const char* name, const void* val) {
    QSqlRecord_SetValue2((QSqlRecord*)self, name, (QVariant*)val);
}

void q_sqlrecord_set_null(void* self, int i) {
    QSqlRecord_SetNull((QSqlRecord*)self, i);
}

void q_sqlrecord_set_null2(void* self, const char* name) {
    QSqlRecord_SetNull2((QSqlRecord*)self, name);
}

bool q_sqlrecord_is_null(const void* self, int i) {
    return QSqlRecord_IsNull((QSqlRecord*)self, i);
}

bool q_sqlrecord_is_null2(const void* self, const char* name) {
    return QSqlRecord_IsNull2((QSqlRecord*)self, name);
}

int32_t q_sqlrecord_index_of(const void* self, const char* name) {
    return QSqlRecord_IndexOf((QSqlRecord*)self, name);
}

const char* q_sqlrecord_field_name(const void* self, int i) {
    libqt_string _str = QSqlRecord_FieldName((QSqlRecord*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSqlField* q_sqlrecord_field(const void* self, int i) {
    return QSqlRecord_Field((QSqlRecord*)self, i);
}

QSqlField* q_sqlrecord_field2(const void* self, const char* name) {
    return QSqlRecord_Field2((QSqlRecord*)self, name);
}

bool q_sqlrecord_is_generated(const void* self, int i) {
    return QSqlRecord_IsGenerated((QSqlRecord*)self, i);
}

bool q_sqlrecord_is_generated2(const void* self, const char* name) {
    return QSqlRecord_IsGenerated2((QSqlRecord*)self, name);
}

void q_sqlrecord_set_generated(void* self, const char* name, bool generated) {
    QSqlRecord_SetGenerated((QSqlRecord*)self, name, generated);
}

void q_sqlrecord_set_generated2(void* self, int i, bool generated) {
    QSqlRecord_SetGenerated2((QSqlRecord*)self, i, generated);
}

void q_sqlrecord_append(void* self, const void* field) {
    QSqlRecord_Append((QSqlRecord*)self, (QSqlField*)field);
}

void q_sqlrecord_replace(void* self, int pos, const void* field) {
    QSqlRecord_Replace((QSqlRecord*)self, pos, (QSqlField*)field);
}

void q_sqlrecord_insert(void* self, int pos, const void* field) {
    QSqlRecord_Insert((QSqlRecord*)self, pos, (QSqlField*)field);
}

void q_sqlrecord_remove(void* self, int pos) {
    QSqlRecord_Remove((QSqlRecord*)self, pos);
}

bool q_sqlrecord_is_empty(const void* self) {
    return QSqlRecord_IsEmpty((QSqlRecord*)self);
}

bool q_sqlrecord_contains(const void* self, const char* name) {
    return QSqlRecord_Contains((QSqlRecord*)self, name);
}

void q_sqlrecord_clear(void* self) {
    QSqlRecord_Clear((QSqlRecord*)self);
}

void q_sqlrecord_clear_values(void* self) {
    QSqlRecord_ClearValues((QSqlRecord*)self);
}

int32_t q_sqlrecord_count(const void* self) {
    return QSqlRecord_Count((QSqlRecord*)self);
}

QSqlRecord* q_sqlrecord_key_values(const void* self, const void* keyFields) {
    return QSqlRecord_KeyValues((QSqlRecord*)self, (QSqlRecord*)keyFields);
}

void q_sqlrecord_delete(void* self) {
    QSqlRecord_Delete((QSqlRecord*)(self));
}

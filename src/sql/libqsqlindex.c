#include "libqsqlfield.hpp"
#include "libqsqlrecord.hpp"
#include "libqsqlindex.hpp"
#include "libqsqlindex.h"

QSqlIndex* q_sqlindex_new() {
    return QSqlIndex_new();
}

QSqlIndex* q_sqlindex_new2(void* other) {
    return QSqlIndex_new2((QSqlIndex*)other);
}

QSqlIndex* q_sqlindex_new3(const char* cursorName) {
    return QSqlIndex_new3(qstring(cursorName));
}

QSqlIndex* q_sqlindex_new4(const char* cursorName, const char* name) {
    return QSqlIndex_new4(qstring(cursorName), qstring(name));
}

void q_sqlindex_operator_assign(void* self, void* other) {
    QSqlIndex_OperatorAssign((QSqlIndex*)self, (QSqlIndex*)other);
}

void q_sqlindex_swap(void* self, void* other) {
    QSqlIndex_Swap((QSqlIndex*)self, (QSqlIndex*)other);
}

void q_sqlindex_set_cursor_name(void* self, const char* cursorName) {
    QSqlIndex_SetCursorName((QSqlIndex*)self, qstring(cursorName));
}

const char* q_sqlindex_cursor_name(void* self) {
    libqt_string _str = QSqlIndex_CursorName((QSqlIndex*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqlindex_set_name(void* self, const char* name) {
    QSqlIndex_SetName((QSqlIndex*)self, qstring(name));
}

const char* q_sqlindex_name(void* self) {
    libqt_string _str = QSqlIndex_Name((QSqlIndex*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqlindex_append(void* self, void* field) {
    QSqlIndex_Append((QSqlIndex*)self, (QSqlField*)field);
}

void q_sqlindex_append2(void* self, void* field, bool desc) {
    QSqlIndex_Append2((QSqlIndex*)self, (QSqlField*)field, desc);
}

bool q_sqlindex_is_descending(void* self, int i) {
    return QSqlIndex_IsDescending((QSqlIndex*)self, i);
}

void q_sqlindex_set_descending(void* self, int i, bool desc) {
    QSqlIndex_SetDescending((QSqlIndex*)self, i, desc);
}

bool q_sqlindex_operator_equal(void* self, void* other) {
    return QSqlRecord_OperatorEqual((QSqlRecord*)self, (QSqlRecord*)other);
}

bool q_sqlindex_operator_not_equal(void* self, void* other) {
    return QSqlRecord_OperatorNotEqual((QSqlRecord*)self, (QSqlRecord*)other);
}

QVariant* q_sqlindex_value(void* self, int i) {
    return QSqlRecord_Value((QSqlRecord*)self, i);
}

QVariant* q_sqlindex_value2(void* self, char* name) {
    return QSqlRecord_Value2((QSqlRecord*)self, name);
}

void q_sqlindex_set_value(void* self, int i, void* val) {
    QSqlRecord_SetValue((QSqlRecord*)self, i, (QVariant*)val);
}

void q_sqlindex_set_value2(void* self, char* name, void* val) {
    QSqlRecord_SetValue2((QSqlRecord*)self, name, (QVariant*)val);
}

void q_sqlindex_set_null(void* self, int i) {
    QSqlRecord_SetNull((QSqlRecord*)self, i);
}

void q_sqlindex_set_null2(void* self, char* name) {
    QSqlRecord_SetNull2((QSqlRecord*)self, name);
}

bool q_sqlindex_is_null(void* self, int i) {
    return QSqlRecord_IsNull((QSqlRecord*)self, i);
}

bool q_sqlindex_is_null2(void* self, char* name) {
    return QSqlRecord_IsNull2((QSqlRecord*)self, name);
}

int32_t q_sqlindex_index_of(void* self, char* name) {
    return QSqlRecord_IndexOf((QSqlRecord*)self, name);
}

const char* q_sqlindex_field_name(void* self, int i) {
    libqt_string _str = QSqlRecord_FieldName((QSqlRecord*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSqlField* q_sqlindex_field(void* self, int i) {
    return QSqlRecord_Field((QSqlRecord*)self, i);
}

QSqlField* q_sqlindex_field2(void* self, char* name) {
    return QSqlRecord_Field2((QSqlRecord*)self, name);
}

bool q_sqlindex_is_generated(void* self, int i) {
    return QSqlRecord_IsGenerated((QSqlRecord*)self, i);
}

bool q_sqlindex_is_generated2(void* self, char* name) {
    return QSqlRecord_IsGenerated2((QSqlRecord*)self, name);
}

void q_sqlindex_set_generated(void* self, char* name, bool generated) {
    QSqlRecord_SetGenerated((QSqlRecord*)self, name, generated);
}

void q_sqlindex_set_generated2(void* self, int i, bool generated) {
    QSqlRecord_SetGenerated2((QSqlRecord*)self, i, generated);
}

void q_sqlindex_replace(void* self, int pos, void* field) {
    QSqlRecord_Replace((QSqlRecord*)self, pos, (QSqlField*)field);
}

void q_sqlindex_insert(void* self, int pos, void* field) {
    QSqlRecord_Insert((QSqlRecord*)self, pos, (QSqlField*)field);
}

void q_sqlindex_remove(void* self, int pos) {
    QSqlRecord_Remove((QSqlRecord*)self, pos);
}

bool q_sqlindex_is_empty(void* self) {
    return QSqlRecord_IsEmpty((QSqlRecord*)self);
}

bool q_sqlindex_contains(void* self, char* name) {
    return QSqlRecord_Contains((QSqlRecord*)self, name);
}

void q_sqlindex_clear(void* self) {
    QSqlRecord_Clear((QSqlRecord*)self);
}

void q_sqlindex_clear_values(void* self) {
    QSqlRecord_ClearValues((QSqlRecord*)self);
}

int32_t q_sqlindex_count(void* self) {
    return QSqlRecord_Count((QSqlRecord*)self);
}

QSqlRecord* q_sqlindex_key_values(void* self, void* keyFields) {
    return QSqlRecord_KeyValues((QSqlRecord*)self, (QSqlRecord*)keyFields);
}

void q_sqlindex_delete(void* self) {
    QSqlIndex_Delete((QSqlIndex*)(self));
}

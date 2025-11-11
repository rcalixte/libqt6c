#include "../libqanystringview.hpp"
#include "../libqbytearrayview.hpp"
#include "libqhttpheaders.hpp"
#include "libqhttpheaders.h"

QHttpHeaders* q_httpheaders_new() {
    return QHttpHeaders_new();
}

QHttpHeaders* q_httpheaders_new2(void* other) {
    return QHttpHeaders_new2((QHttpHeaders*)other);
}

void q_httpheaders_operator_assign(void* self, void* other) {
    QHttpHeaders_OperatorAssign((QHttpHeaders*)self, (QHttpHeaders*)other);
}

void q_httpheaders_swap(void* self, void* other) {
    QHttpHeaders_Swap((QHttpHeaders*)self, (QHttpHeaders*)other);
}

bool q_httpheaders_append(void* self, char* name, char* value) {
    return QHttpHeaders_Append((QHttpHeaders*)self, name, value);
}

bool q_httpheaders_append2(void* self, int32_t name, char* value) {
    return QHttpHeaders_Append2((QHttpHeaders*)self, name, value);
}

bool q_httpheaders_insert(void* self, int64_t i, char* name, char* value) {
    return QHttpHeaders_Insert((QHttpHeaders*)self, i, name, value);
}

bool q_httpheaders_insert2(void* self, int64_t i, int32_t name, char* value) {
    return QHttpHeaders_Insert2((QHttpHeaders*)self, i, name, value);
}

bool q_httpheaders_replace(void* self, int64_t i, char* name, char* newValue) {
    return QHttpHeaders_Replace((QHttpHeaders*)self, i, name, newValue);
}

bool q_httpheaders_replace2(void* self, int64_t i, int32_t name, char* newValue) {
    return QHttpHeaders_Replace2((QHttpHeaders*)self, i, name, newValue);
}

bool q_httpheaders_replace_or_append(void* self, char* name, char* newValue) {
    return QHttpHeaders_ReplaceOrAppend((QHttpHeaders*)self, name, newValue);
}

bool q_httpheaders_replace_or_append2(void* self, int32_t name, char* newValue) {
    return QHttpHeaders_ReplaceOrAppend2((QHttpHeaders*)self, name, newValue);
}

bool q_httpheaders_contains(void* self, char* name) {
    return QHttpHeaders_Contains((QHttpHeaders*)self, name);
}

bool q_httpheaders_contains2(void* self, int32_t name) {
    return QHttpHeaders_Contains2((QHttpHeaders*)self, name);
}

void q_httpheaders_clear(void* self) {
    QHttpHeaders_Clear((QHttpHeaders*)self);
}

void q_httpheaders_remove_all(void* self, char* name) {
    QHttpHeaders_RemoveAll((QHttpHeaders*)self, name);
}

void q_httpheaders_remove_all2(void* self, int32_t name) {
    QHttpHeaders_RemoveAll2((QHttpHeaders*)self, name);
}

void q_httpheaders_remove_at(void* self, int64_t i) {
    QHttpHeaders_RemoveAt((QHttpHeaders*)self, i);
}

const char* q_httpheaders_value(void* self, char* name) {
    libqt_string _str = QHttpHeaders_Value((QHttpHeaders*)self, name);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_httpheaders_value2(void* self, int32_t name) {
    libqt_string _str = QHttpHeaders_Value2((QHttpHeaders*)self, name);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_httpheaders_values(void* self, char* name) {
    libqt_list _arr = QHttpHeaders_Values((QHttpHeaders*)self, name);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_httpheaders_values");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_httpheaders_values2(void* self, int32_t name) {
    libqt_list _arr = QHttpHeaders_Values2((QHttpHeaders*)self, name);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_httpheaders_values2");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* q_httpheaders_value_at(void* self, int64_t i) {
    libqt_string _str = QHttpHeaders_ValueAt((QHttpHeaders*)self, i);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_httpheaders_combined_value(void* self, char* name) {
    libqt_string _str = QHttpHeaders_CombinedValue((QHttpHeaders*)self, name);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_httpheaders_combined_value2(void* self, int32_t name) {
    libqt_string _str = QHttpHeaders_CombinedValue2((QHttpHeaders*)self, name);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_httpheaders_size(void* self) {
    return QHttpHeaders_Size((QHttpHeaders*)self);
}

void q_httpheaders_reserve(void* self, int64_t size) {
    QHttpHeaders_Reserve((QHttpHeaders*)self, size);
}

bool q_httpheaders_is_empty(void* self) {
    return QHttpHeaders_IsEmpty((QHttpHeaders*)self);
}

const char* q_httpheaders_well_known_header_name(int32_t name) {
    libqt_string _str = QHttpHeaders_WellKnownHeaderName(name);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of libqt_pair  tuple of char* and char*  */ q_httpheaders_to_list_of_pairs(void* self) {
    libqt_list _arr = QHttpHeaders_ToListOfPairs((QHttpHeaders*)self);
    return _arr;
}

const char* q_httpheaders_value22(void* self, char* name, const char* defaultValue) {
    libqt_string _str = QHttpHeaders_Value22((QHttpHeaders*)self, name, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_httpheaders_value23(void* self, int32_t name, const char* defaultValue) {
    libqt_string _str = QHttpHeaders_Value23((QHttpHeaders*)self, name, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_httpheaders_delete(void* self) {
    QHttpHeaders_Delete((QHttpHeaders*)(self));
}

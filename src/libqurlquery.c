#include "libqchar.hpp"
#include "libqurl.hpp"
#include "libqurlquery.hpp"
#include "libqurlquery.h"

QUrlQuery* q_urlquery_new() {
    return QUrlQuery_new();
}

QUrlQuery* q_urlquery_new2(void* url) {
    return QUrlQuery_new2((QUrl*)url);
}

QUrlQuery* q_urlquery_new3(const char* queryString) {
    return QUrlQuery_new3(qstring(queryString));
}

QUrlQuery* q_urlquery_new4(void* other) {
    return QUrlQuery_new4((QUrlQuery*)other);
}

void q_urlquery_operator_assign(void* self, void* other) {
    QUrlQuery_OperatorAssign((QUrlQuery*)self, (QUrlQuery*)other);
}

void q_urlquery_swap(void* self, void* other) {
    QUrlQuery_Swap((QUrlQuery*)self, (QUrlQuery*)other);
}

bool q_urlquery_is_empty(void* self) {
    return QUrlQuery_IsEmpty((QUrlQuery*)self);
}

bool q_urlquery_is_detached(void* self) {
    return QUrlQuery_IsDetached((QUrlQuery*)self);
}

void q_urlquery_clear(void* self) {
    QUrlQuery_Clear((QUrlQuery*)self);
}

const char* q_urlquery_query(void* self) {
    libqt_string _str = QUrlQuery_Query((QUrlQuery*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_urlquery_set_query(void* self, const char* queryString) {
    QUrlQuery_SetQuery((QUrlQuery*)self, qstring(queryString));
}

const char* q_urlquery_to_string(void* self) {
    libqt_string _str = QUrlQuery_ToString((QUrlQuery*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_urlquery_set_query_delimiters(void* self, void* valueDelimiter, void* pairDelimiter) {
    QUrlQuery_SetQueryDelimiters((QUrlQuery*)self, (QChar*)valueDelimiter, (QChar*)pairDelimiter);
}

QChar* q_urlquery_query_value_delimiter(void* self) {
    return QUrlQuery_QueryValueDelimiter((QUrlQuery*)self);
}

QChar* q_urlquery_query_pair_delimiter(void* self) {
    return QUrlQuery_QueryPairDelimiter((QUrlQuery*)self);
}

void q_urlquery_set_query_items(void* self, libqt_list /* of libqt_pair  tuple of const char* and const char*  */ query) {
    QUrlQuery_SetQueryItems((QUrlQuery*)self, query);
}

libqt_list /* of libqt_pair  tuple of const char* and const char*  */ q_urlquery_query_items(void* self) {
    libqt_list _arr = QUrlQuery_QueryItems((QUrlQuery*)self);
    return _arr;
}

bool q_urlquery_has_query_item(void* self, const char* key) {
    return QUrlQuery_HasQueryItem((QUrlQuery*)self, qstring(key));
}

void q_urlquery_add_query_item(void* self, const char* key, const char* value) {
    QUrlQuery_AddQueryItem((QUrlQuery*)self, qstring(key), qstring(value));
}

void q_urlquery_remove_query_item(void* self, const char* key) {
    QUrlQuery_RemoveQueryItem((QUrlQuery*)self, qstring(key));
}

const char* q_urlquery_query_item_value(void* self, const char* key) {
    libqt_string _str = QUrlQuery_QueryItemValue((QUrlQuery*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_urlquery_all_query_item_values(void* self, const char* key) {
    libqt_list _arr = QUrlQuery_AllQueryItemValues((QUrlQuery*)self, qstring(key));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_urlquery_all_query_item_values");
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

void q_urlquery_remove_all_query_items(void* self, const char* key) {
    QUrlQuery_RemoveAllQueryItems((QUrlQuery*)self, qstring(key));
}

const char* q_urlquery_query1(void* self, int64_t encoding) {
    libqt_string _str = QUrlQuery_Query1((QUrlQuery*)self, encoding);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_urlquery_to_string1(void* self, int64_t encoding) {
    libqt_string _str = QUrlQuery_ToString1((QUrlQuery*)self, encoding);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of libqt_pair  tuple of const char* and const char*  */ q_urlquery_query_items1(void* self, int64_t encoding) {
    libqt_list _arr = QUrlQuery_QueryItems1((QUrlQuery*)self, encoding);
    return _arr;
}

const char* q_urlquery_query_item_value2(void* self, const char* key, int64_t encoding) {
    libqt_string _str = QUrlQuery_QueryItemValue2((QUrlQuery*)self, qstring(key), encoding);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_urlquery_all_query_item_values2(void* self, const char* key, int64_t encoding) {
    libqt_list _arr = QUrlQuery_AllQueryItemValues2((QUrlQuery*)self, qstring(key), encoding);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_urlquery_all_query_item_values2");
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

void q_urlquery_delete(void* self) {
    QUrlQuery_Delete((QUrlQuery*)(self));
}

#include "libqchar.hpp"
#include <string.h>
#include "libqurl.hpp"
#include "libqurlquery.hpp"
#include "libqurlquery.h"

/// https://doc.qt.io/qt-6/qurlquery.html

/// q_urlquery_new constructs a new QUrlQuery object.
///
///
QUrlQuery* q_urlquery_new() {
    return QUrlQuery_new();
}

/// q_urlquery_new2 constructs a new QUrlQuery object.
///
/// ``` QUrl* url ```
QUrlQuery* q_urlquery_new2(void* url) {
    return QUrlQuery_new2((QUrl*)url);
}

/// q_urlquery_new3 constructs a new QUrlQuery object.
///
/// ``` const char* queryString ```
QUrlQuery* q_urlquery_new3(const char* queryString) {
    return QUrlQuery_new3(qstring(queryString));
}

/// q_urlquery_new4 constructs a new QUrlQuery object.
///
/// ``` QUrlQuery* other ```
QUrlQuery* q_urlquery_new4(void* other) {
    return QUrlQuery_new4((QUrlQuery*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#operator=)
///
/// ``` QUrlQuery* self, QUrlQuery* other ```
void q_urlquery_operator_assign(void* self, void* other) {
    QUrlQuery_OperatorAssign((QUrlQuery*)self, (QUrlQuery*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#operator==)
///
/// ``` QUrlQuery* self, QUrlQuery* other ```
bool q_urlquery_operator_equal(void* self, void* other) {
    return QUrlQuery_OperatorEqual((QUrlQuery*)self, (QUrlQuery*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#operator!=)
///
/// ``` QUrlQuery* self, QUrlQuery* other ```
bool q_urlquery_operator_not_equal(void* self, void* other) {
    return QUrlQuery_OperatorNotEqual((QUrlQuery*)self, (QUrlQuery*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#swap)
///
/// ``` QUrlQuery* self, QUrlQuery* other ```
void q_urlquery_swap(void* self, void* other) {
    QUrlQuery_Swap((QUrlQuery*)self, (QUrlQuery*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#isEmpty)
///
/// ``` QUrlQuery* self ```
bool q_urlquery_is_empty(void* self) {
    return QUrlQuery_IsEmpty((QUrlQuery*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#isDetached)
///
/// ``` QUrlQuery* self ```
bool q_urlquery_is_detached(void* self) {
    return QUrlQuery_IsDetached((QUrlQuery*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#clear)
///
/// ``` QUrlQuery* self ```
void q_urlquery_clear(void* self) {
    QUrlQuery_Clear((QUrlQuery*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#query)
///
/// ``` QUrlQuery* self ```
const char* q_urlquery_query(void* self) {
    libqt_string _str = QUrlQuery_Query((QUrlQuery*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#setQuery)
///
/// ``` QUrlQuery* self, const char* queryString ```
void q_urlquery_set_query(void* self, const char* queryString) {
    QUrlQuery_SetQuery((QUrlQuery*)self, qstring(queryString));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#toString)
///
/// ``` QUrlQuery* self ```
const char* q_urlquery_to_string(void* self) {
    libqt_string _str = QUrlQuery_ToString((QUrlQuery*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#setQueryDelimiters)
///
/// ``` QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter ```
void q_urlquery_set_query_delimiters(void* self, void* valueDelimiter, void* pairDelimiter) {
    QUrlQuery_SetQueryDelimiters((QUrlQuery*)self, (QChar*)valueDelimiter, (QChar*)pairDelimiter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryValueDelimiter)
///
/// ``` QUrlQuery* self ```
QChar* q_urlquery_query_value_delimiter(void* self) {
    return QUrlQuery_QueryValueDelimiter((QUrlQuery*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryPairDelimiter)
///
/// ``` QUrlQuery* self ```
QChar* q_urlquery_query_pair_delimiter(void* self) {
    return QUrlQuery_QueryPairDelimiter((QUrlQuery*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#setQueryItems)
///
/// ``` QUrlQuery* self, libqt_list /* of libqt_pair  tuple of const char* and const char*  */ query ```
void q_urlquery_set_query_items(void* self, libqt_list /* of libqt_pair  tuple of const char* and const char*  */ query) {
    QUrlQuery_SetQueryItems((QUrlQuery*)self, query);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryItems)
///
/// ``` QUrlQuery* self ```
libqt_list /* of libqt_pair  tuple of const char* and const char*  */ q_urlquery_query_items(void* self) {
    libqt_list _arr = QUrlQuery_QueryItems((QUrlQuery*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#hasQueryItem)
///
/// ``` QUrlQuery* self, const char* key ```
bool q_urlquery_has_query_item(void* self, const char* key) {
    return QUrlQuery_HasQueryItem((QUrlQuery*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#addQueryItem)
///
/// ``` QUrlQuery* self, const char* key, const char* value ```
void q_urlquery_add_query_item(void* self, const char* key, const char* value) {
    QUrlQuery_AddQueryItem((QUrlQuery*)self, qstring(key), qstring(value));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#removeQueryItem)
///
/// ``` QUrlQuery* self, const char* key ```
void q_urlquery_remove_query_item(void* self, const char* key) {
    QUrlQuery_RemoveQueryItem((QUrlQuery*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryItemValue)
///
/// ``` QUrlQuery* self, const char* key ```
const char* q_urlquery_query_item_value(void* self, const char* key) {
    libqt_string _str = QUrlQuery_QueryItemValue((QUrlQuery*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#allQueryItemValues)
///
/// ``` QUrlQuery* self, const char* key ```
const char** q_urlquery_all_query_item_values(void* self, const char* key) {
    libqt_list _arr = QUrlQuery_AllQueryItemValues((QUrlQuery*)self, qstring(key));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#removeAllQueryItems)
///
/// ``` QUrlQuery* self, const char* key ```
void q_urlquery_remove_all_query_items(void* self, const char* key) {
    QUrlQuery_RemoveAllQueryItems((QUrlQuery*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#query)
///
/// ``` QUrlQuery* self, uint32_t encoding ```
const char* q_urlquery_query1(void* self, int64_t encoding) {
    libqt_string _str = QUrlQuery_Query1((QUrlQuery*)self, encoding);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#toString)
///
/// ``` QUrlQuery* self, uint32_t encoding ```
const char* q_urlquery_to_string1(void* self, int64_t encoding) {
    libqt_string _str = QUrlQuery_ToString1((QUrlQuery*)self, encoding);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryItems)
///
/// ``` QUrlQuery* self, uint32_t encoding ```
libqt_list /* of libqt_pair  tuple of const char* and const char*  */ q_urlquery_query_items1(void* self, int64_t encoding) {
    libqt_list _arr = QUrlQuery_QueryItems1((QUrlQuery*)self, encoding);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryItemValue)
///
/// ``` QUrlQuery* self, const char* key, uint32_t encoding ```
const char* q_urlquery_query_item_value2(void* self, const char* key, int64_t encoding) {
    libqt_string _str = QUrlQuery_QueryItemValue2((QUrlQuery*)self, qstring(key), encoding);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#allQueryItemValues)
///
/// ``` QUrlQuery* self, const char* key, uint32_t encoding ```
const char** q_urlquery_all_query_item_values2(void* self, const char* key, int64_t encoding) {
    libqt_list _arr = QUrlQuery_AllQueryItemValues2((QUrlQuery*)self, qstring(key), encoding);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QUrlQuery* self ```
void q_urlquery_delete(void* self) {
    QUrlQuery_Delete((QUrlQuery*)(self));
}
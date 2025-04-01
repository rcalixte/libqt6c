#pragma once
#ifndef SRCQT6C_LIBQURLQUERY_H
#define SRCQT6C_LIBQURLQUERY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqchar.h"
#include <string.h>
#include "libqurl.h"

/// https://doc.qt.io/qt-6/qurlquery.html

/// q_urlquery_new constructs a new QUrlQuery object.
///
///
QUrlQuery* q_urlquery_new();

/// q_urlquery_new2 constructs a new QUrlQuery object.
///
/// ``` QUrl* url ```
QUrlQuery* q_urlquery_new2(void* url);

/// q_urlquery_new3 constructs a new QUrlQuery object.
///
/// ``` const char* queryString ```
QUrlQuery* q_urlquery_new3(const char* queryString);

/// q_urlquery_new4 constructs a new QUrlQuery object.
///
/// ``` QUrlQuery* other ```
QUrlQuery* q_urlquery_new4(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#operator=)
///
/// ``` QUrlQuery* self, QUrlQuery* other ```
void q_urlquery_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#operator==)
///
/// ``` QUrlQuery* self, QUrlQuery* other ```
bool q_urlquery_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#operator!=)
///
/// ``` QUrlQuery* self, QUrlQuery* other ```
bool q_urlquery_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#swap)
///
/// ``` QUrlQuery* self, QUrlQuery* other ```
void q_urlquery_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#isEmpty)
///
/// ``` QUrlQuery* self ```
bool q_urlquery_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#isDetached)
///
/// ``` QUrlQuery* self ```
bool q_urlquery_is_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#clear)
///
/// ``` QUrlQuery* self ```
void q_urlquery_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#query)
///
/// ``` QUrlQuery* self ```
const char* q_urlquery_query(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#setQuery)
///
/// ``` QUrlQuery* self, const char* queryString ```
void q_urlquery_set_query(void* self, const char* queryString);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#toString)
///
/// ``` QUrlQuery* self ```
const char* q_urlquery_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#setQueryDelimiters)
///
/// ``` QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter ```
void q_urlquery_set_query_delimiters(void* self, void* valueDelimiter, void* pairDelimiter);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryValueDelimiter)
///
/// ``` QUrlQuery* self ```
QChar* q_urlquery_query_value_delimiter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryPairDelimiter)
///
/// ``` QUrlQuery* self ```
QChar* q_urlquery_query_pair_delimiter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#setQueryItems)
///
/// ``` QUrlQuery* self, libqt_list /* of libqt_pair  tuple of const char* and const char*  */ query ```
void q_urlquery_set_query_items(void* self, libqt_list /* of libqt_pair  tuple of const char* and const char*  */ query);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryItems)
///
/// ``` QUrlQuery* self ```
libqt_list /* of libqt_pair  tuple of const char* and const char*  */ q_urlquery_query_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#hasQueryItem)
///
/// ``` QUrlQuery* self, const char* key ```
bool q_urlquery_has_query_item(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#addQueryItem)
///
/// ``` QUrlQuery* self, const char* key, const char* value ```
void q_urlquery_add_query_item(void* self, const char* key, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#removeQueryItem)
///
/// ``` QUrlQuery* self, const char* key ```
void q_urlquery_remove_query_item(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryItemValue)
///
/// ``` QUrlQuery* self, const char* key ```
const char* q_urlquery_query_item_value(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#allQueryItemValues)
///
/// ``` QUrlQuery* self, const char* key ```
const char** q_urlquery_all_query_item_values(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#removeAllQueryItems)
///
/// ``` QUrlQuery* self, const char* key ```
void q_urlquery_remove_all_query_items(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#query)
///
/// ``` QUrlQuery* self, uint32_t encoding ```
const char* q_urlquery_query1(void* self, int64_t encoding);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#toString)
///
/// ``` QUrlQuery* self, uint32_t encoding ```
const char* q_urlquery_to_string1(void* self, int64_t encoding);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryItems)
///
/// ``` QUrlQuery* self, uint32_t encoding ```
libqt_list /* of libqt_pair  tuple of const char* and const char*  */ q_urlquery_query_items1(void* self, int64_t encoding);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#queryItemValue)
///
/// ``` QUrlQuery* self, const char* key, uint32_t encoding ```
const char* q_urlquery_query_item_value2(void* self, const char* key, int64_t encoding);

/// [Qt documentation](https://doc.qt.io/qt-6/qurlquery.html#allQueryItemValues)
///
/// ``` QUrlQuery* self, const char* key, uint32_t encoding ```
const char** q_urlquery_all_query_item_values2(void* self, const char* key, int64_t encoding);

/// Delete this object from C++ memory.
///
/// ``` QUrlQuery* self ```
void q_urlquery_delete(void* self);

#endif

#pragma once
#ifndef SRC_QT6C_LIBQURLQUERY_H
#define SRC_QT6C_LIBQURLQUERY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html)

/// q_urlquery_new constructs a new QUrlQuery object.
///
QUrlQuery* q_urlquery_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html)

/// q_urlquery_new2 constructs a new QUrlQuery object.
///
/// @param url QUrl*
///
QUrlQuery* q_urlquery_new2(void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html)

/// q_urlquery_new3 constructs a new QUrlQuery object.
///
/// @param queryString const char*
///
QUrlQuery* q_urlquery_new3(const char* queryString);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html)

/// q_urlquery_new4 constructs a new QUrlQuery object.
///
/// @param other QUrlQuery*
///
QUrlQuery* q_urlquery_new4(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#operator-eq)
///
/// @param self QUrlQuery*
/// @param other QUrlQuery*
///
void q_urlquery_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#swap)
///
/// @param self QUrlQuery*
/// @param other QUrlQuery*
///
void q_urlquery_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#isEmpty)
///
/// @param self QUrlQuery*
///
bool q_urlquery_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#isDetached)
///
/// @param self QUrlQuery*
///
bool q_urlquery_is_detached(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#clear)
///
/// @param self QUrlQuery*
///
void q_urlquery_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#query)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUrlQuery*
///
const char* q_urlquery_query(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#setQuery)
///
/// @param self QUrlQuery*
/// @param queryString const char*
///
void q_urlquery_set_query(void* self, const char* queryString);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUrlQuery*
///
const char* q_urlquery_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#setQueryDelimiters)
///
/// @param self QUrlQuery*
/// @param valueDelimiter QChar*
/// @param pairDelimiter QChar*
///
void q_urlquery_set_query_delimiters(void* self, void* valueDelimiter, void* pairDelimiter);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryValueDelimiter)
///
/// @param self QUrlQuery*
///
QChar* q_urlquery_query_value_delimiter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryPairDelimiter)
///
/// @param self QUrlQuery*
///
QChar* q_urlquery_query_pair_delimiter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryItems)
///
/// @param self QUrlQuery*
///
libqt_list /* of libqt_pair tuple of const char* and const char* */ q_urlquery_query_items(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#hasQueryItem)
///
/// @param self QUrlQuery*
/// @param key const char*
///
bool q_urlquery_has_query_item(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#addQueryItem)
///
/// @param self QUrlQuery*
/// @param key const char*
/// @param value const char*
///
void q_urlquery_add_query_item(void* self, const char* key, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#removeQueryItem)
///
/// @param self QUrlQuery*
/// @param key const char*
///
void q_urlquery_remove_query_item(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryItemValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUrlQuery*
/// @param key const char*
///
const char* q_urlquery_query_item_value(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#allQueryItemValues)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUrlQuery*
/// @param key const char*
///
const char** q_urlquery_all_query_item_values(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#removeAllQueryItems)
///
/// @param self QUrlQuery*
/// @param key const char*
///
void q_urlquery_remove_all_query_items(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#query)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUrlQuery*
/// @param encoding flag of enum QUrl__ComponentFormattingOption
///
const char* q_urlquery_query1(void* self, uint32_t encoding);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUrlQuery*
/// @param encoding flag of enum QUrl__ComponentFormattingOption
///
const char* q_urlquery_to_string1(void* self, uint32_t encoding);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryItems)
///
/// @param self QUrlQuery*
/// @param encoding flag of enum QUrl__ComponentFormattingOption
///
libqt_list /* of libqt_pair tuple of const char* and const char* */ q_urlquery_query_items1(void* self, uint32_t encoding);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#queryItemValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUrlQuery*
/// @param key const char*
/// @param encoding flag of enum QUrl__ComponentFormattingOption
///
const char* q_urlquery_query_item_value2(void* self, const char* key, uint32_t encoding);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#allQueryItemValues)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUrlQuery*
/// @param key const char*
/// @param encoding flag of enum QUrl__ComponentFormattingOption
///
const char** q_urlquery_all_query_item_values2(void* self, const char* key, uint32_t encoding);

/// [Upstream resources](https://doc.qt.io/qt-6/qurlquery.html#dtor.QUrlQuery)
///
/// Delete this object from C++ memory.
///
/// @param self QUrlQuery*
///
void q_urlquery_delete(void* self);

#endif

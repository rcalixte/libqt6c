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

QUrlQuery* q_urlquery_new();
QUrlQuery* q_urlquery_new2(void* url);
QUrlQuery* q_urlquery_new3(const char* queryString);
QUrlQuery* q_urlquery_new4(void* other);
void q_urlquery_operator_assign(void* self, void* other);
bool q_urlquery_operator_equal(void* self, void* other);
bool q_urlquery_operator_not_equal(void* self, void* other);
void q_urlquery_swap(void* self, void* other);
bool q_urlquery_is_empty(void* self);
bool q_urlquery_is_detached(void* self);
void q_urlquery_clear(void* self);
const char* q_urlquery_query(void* self);
void q_urlquery_set_query(void* self, const char* queryString);
const char* q_urlquery_to_string(void* self);
void q_urlquery_set_query_delimiters(void* self, void* valueDelimiter, void* pairDelimiter);
QChar* q_urlquery_query_value_delimiter(void* self);
QChar* q_urlquery_query_pair_delimiter(void* self);
void q_urlquery_set_query_items(void* self, libqt_list /* of libqt_pair  tuple of const char* and const char*  */ query);
libqt_list /* of libqt_pair  tuple of const char* and const char*  */ q_urlquery_query_items(void* self);
bool q_urlquery_has_query_item(void* self, const char* key);
void q_urlquery_add_query_item(void* self, const char* key, const char* value);
void q_urlquery_remove_query_item(void* self, const char* key);
const char* q_urlquery_query_item_value(void* self, const char* key);
const char** q_urlquery_all_query_item_values(void* self, const char* key);
void q_urlquery_remove_all_query_items(void* self, const char* key);
const char* q_urlquery_query1(void* self, int64_t encoding);
const char* q_urlquery_to_string1(void* self, int64_t encoding);
libqt_list /* of libqt_pair  tuple of const char* and const char*  */ q_urlquery_query_items1(void* self, int64_t encoding);
const char* q_urlquery_query_item_value2(void* self, const char* key, int64_t encoding);
const char** q_urlquery_all_query_item_values2(void* self, const char* key, int64_t encoding);
void q_urlquery_delete(void* self);

#endif

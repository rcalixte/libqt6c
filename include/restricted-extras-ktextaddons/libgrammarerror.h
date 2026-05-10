#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBGRAMMARERROR_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBGRAMMARERROR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)

/// k_textgrammarcheck__grammarerror_new constructs a new TextGrammarCheck::GrammarError object.
///
TextGrammarCheck__GrammarError* k_textgrammarcheck__grammarerror_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)

/// k_textgrammarcheck__grammarerror_new2 constructs a new TextGrammarCheck::GrammarError object.
///
/// @param param1 TextGrammarCheck__GrammarError*
///
TextGrammarCheck__GrammarError* k_textgrammarcheck__grammarerror_new2(void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
///
QColor* k_textgrammarcheck__grammarerror_color(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
/// @param color QColor*
///
void k_textgrammarcheck__grammarerror_set_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarError*
///
const char* k_textgrammarcheck__grammarerror_error(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
/// @param error const char*
///
void k_textgrammarcheck__grammarerror_set_error(void* self, const char* error);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
///
int32_t k_textgrammarcheck__grammarerror_block_id(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
/// @param blockId int
///
void k_textgrammarcheck__grammarerror_set_block_id(void* self, int blockId);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
///
int32_t k_textgrammarcheck__grammarerror_start(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
/// @param start int
///
void k_textgrammarcheck__grammarerror_set_start(void* self, int start);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
///
int32_t k_textgrammarcheck__grammarerror_length(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
/// @param length int
///
void k_textgrammarcheck__grammarerror_set_length(void* self, int length);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextGrammarCheck__GrammarError*
///
const char** k_textgrammarcheck__grammarerror_suggestions(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
/// @param suggestions const char**
///
void k_textgrammarcheck__grammarerror_set_suggestions(void* self, const char* suggestions[static 1]);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
///
bool k_textgrammarcheck__grammarerror_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
/// @param obj QJsonObject*
/// @param blockindex int
///
void k_textgrammarcheck__grammarerror_parse(void* self, void* obj, int blockindex);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammarError*
/// @param callback void func(TextGrammarCheck__GrammarError* self, QJsonObject* obj, int blockindex)
///
void k_textgrammarcheck__grammarerror_on_parse(void* self, void (*callback)(void*, void*, int));

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarerror_super_parse` instead
///
#define k_textgrammarcheck__grammarerror_qbase_parse k_textgrammarcheck__grammarerror_super_parse

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammarError*
/// @param obj QJsonObject*
/// @param blockindex int
///
void k_textgrammarcheck__grammarerror_super_parse(void* self, void* obj, int blockindex);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
/// @param other TextGrammarCheck__GrammarError*
///
bool k_textgrammarcheck__grammarerror_operator_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarError*
///
const char* k_textgrammarcheck__grammarerror_option(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
/// @param option const char*
///
void k_textgrammarcheck__grammarerror_set_option(void* self, const char* option);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarError*
///
const char* k_textgrammarcheck__grammarerror_rule(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
/// @param rule const char*
///
void k_textgrammarcheck__grammarerror_set_rule(void* self, const char* rule);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarError*
///
const char* k_textgrammarcheck__grammarerror_url(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
/// @param url const char*
///
void k_textgrammarcheck__grammarerror_set_url(void* self, const char* url);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// @param self TextGrammarCheck__GrammarError*
/// @param param1 TextGrammarCheck__GrammarError*
///
void k_textgrammarcheck__grammarerror_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammarError*
/// @param callback void func(TextGrammarCheck__GrammarError* self, TextGrammarCheck__GrammarError* param1)
///
void k_textgrammarcheck__grammarerror_on_operator_assign(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarerror_super_operator_assign` instead
///
#define k_textgrammarcheck__grammarerror_qbase_operator_assign k_textgrammarcheck__grammarerror_super_operator_assign

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammarError*
/// @param param1 TextGrammarCheck__GrammarError*
///
void k_textgrammarcheck__grammarerror_super_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarError.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextGrammarCheck__GrammarError*
///
void k_textgrammarcheck__grammarerror_delete(void* self);

#endif

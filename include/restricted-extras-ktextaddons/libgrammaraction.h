#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBGRAMMARACTION_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBGRAMMARACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)

/// k_textgrammarcheck__grammaraction_new constructs a new TextGrammarCheck::GrammarAction object.
///
TextGrammarCheck__GrammarAction* k_textgrammarcheck__grammaraction_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)

/// k_textgrammarcheck__grammaraction_new2 constructs a new TextGrammarCheck::GrammarAction object.
///
/// @param param1 TextGrammarCheck__GrammarAction*
///
TextGrammarCheck__GrammarAction* k_textgrammarcheck__grammaraction_new2(void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarAction*
///
const char* k_textgrammarcheck__grammaraction_replacement(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
///
/// @param self TextGrammarCheck__GrammarAction*
/// @param replacement const char*
///
void k_textgrammarcheck__grammaraction_set_replacement(void* self, const char* replacement);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
///
/// @param self TextGrammarCheck__GrammarAction*
///
int32_t k_textgrammarcheck__grammaraction_start(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
///
/// @param self TextGrammarCheck__GrammarAction*
/// @param start int
///
void k_textgrammarcheck__grammaraction_set_start(void* self, int start);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
///
/// @param self TextGrammarCheck__GrammarAction*
///
int32_t k_textgrammarcheck__grammaraction_length(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
///
/// @param self TextGrammarCheck__GrammarAction*
/// @param length int
///
void k_textgrammarcheck__grammaraction_set_length(void* self, int length);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextGrammarCheck__GrammarAction*
///
const char** k_textgrammarcheck__grammaraction_suggestions(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
///
/// @param self TextGrammarCheck__GrammarAction*
/// @param suggestions const char**
///
void k_textgrammarcheck__grammaraction_set_suggestions(void* self, const char* suggestions[static 1]);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
///
/// @param self TextGrammarCheck__GrammarAction*
///
int32_t k_textgrammarcheck__grammaraction_block_id(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
///
/// @param self TextGrammarCheck__GrammarAction*
/// @param blockId int
///
void k_textgrammarcheck__grammaraction_set_block_id(void* self, int blockId);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextGrammarCheck__GrammarAction*
///
const char** k_textgrammarcheck__grammaraction_info_urls(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
///
/// @param self TextGrammarCheck__GrammarAction*
/// @param urls const char**
///
void k_textgrammarcheck__grammaraction_set_info_urls(void* self, const char* urls[static 1]);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarAction.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextGrammarCheck__GrammarAction*
///
void k_textgrammarcheck__grammaraction_delete(void* self);

#endif

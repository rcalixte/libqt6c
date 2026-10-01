#pragma once
#ifndef EXTRAS_KSYNTAXHIGHLIGHTING_LIBDEFINITION_H
#define EXTRAS_KSYNTAXHIGHLIGHTING_LIBDEFINITION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html)

/// k_syntaxhighlighting__definition_new constructs a new KSyntaxHighlighting::Definition object.
///
KSyntaxHighlighting__Definition* k_syntaxhighlighting__definition_new();

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html)

/// k_syntaxhighlighting__definition_new2 constructs a new KSyntaxHighlighting::Definition object.
///
/// @param other KSyntaxHighlighting__Definition*
///
KSyntaxHighlighting__Definition* k_syntaxhighlighting__definition_new2(const void* other);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-eq)
///
/// @param self KSyntaxHighlighting__Definition*
/// @param rhs KSyntaxHighlighting__Definition*
///
void k_syntaxhighlighting__definition_operator_assign(void* self, const void* rhs);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-eq-eq)
///
/// @param self const KSyntaxHighlighting__Definition*
/// @param other KSyntaxHighlighting__Definition*
///
bool k_syntaxhighlighting__definition_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-not-eq)
///
/// @param self const KSyntaxHighlighting__Definition*
/// @param other KSyntaxHighlighting__Definition*
///
bool k_syntaxhighlighting__definition_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isValid)
///
/// @param self const KSyntaxHighlighting__Definition*
///
bool k_syntaxhighlighting__definition_is_valid(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_file_path(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_name(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#alternativeNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char** k_syntaxhighlighting__definition_alternative_names(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#translatedName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_translated_name(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#section)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_section(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#translatedSection)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_translated_section(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char** k_syntaxhighlighting__definition_mime_types(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#extensions)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char** k_syntaxhighlighting__definition_extensions(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#version)
///
/// @param self const KSyntaxHighlighting__Definition*
///
int32_t k_syntaxhighlighting__definition_version(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#priority)
///
/// @param self const KSyntaxHighlighting__Definition*
///
int32_t k_syntaxhighlighting__definition_priority(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isHidden)
///
/// @param self const KSyntaxHighlighting__Definition*
///
bool k_syntaxhighlighting__definition_is_hidden(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#style)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_style(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#indenter)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_indenter(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#author)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_author(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#license)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_license(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isWordDelimiter)
///
/// @param self const KSyntaxHighlighting__Definition*
/// @param c QChar*
///
bool k_syntaxhighlighting__definition_is_word_delimiter(const void* self, void* c);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isWordWrapDelimiter)
///
/// @param self const KSyntaxHighlighting__Definition*
/// @param c QChar*
///
bool k_syntaxhighlighting__definition_is_word_wrap_delimiter(const void* self, void* c);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#foldingEnabled)
///
/// @param self const KSyntaxHighlighting__Definition*
///
bool k_syntaxhighlighting__definition_folding_enabled(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#indentationBasedFoldingEnabled)
///
/// @param self const KSyntaxHighlighting__Definition*
///
bool k_syntaxhighlighting__definition_indentation_based_folding_enabled(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#foldingIgnoreList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char** k_syntaxhighlighting__definition_folding_ignore_list(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#keywordLists)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char** k_syntaxhighlighting__definition_keyword_lists(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#keywordList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KSyntaxHighlighting__Definition*
/// @param name const char*
///
const char** k_syntaxhighlighting__definition_keyword_list(const void* self, const char* name);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#setKeywordList)
///
/// @param self KSyntaxHighlighting__Definition*
/// @param name const char*
/// @param content const char**
///
bool k_syntaxhighlighting__definition_set_keyword_list(void* self, const char* name, const char* content[static 1]);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#formats)
///
/// @param self const KSyntaxHighlighting__Definition*
///
/// @return libqt_list of KSyntaxHighlighting__Format*
///
libqt_list k_syntaxhighlighting__definition_formats(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#includedDefinitions)
///
/// @param self const KSyntaxHighlighting__Definition*
///
/// @return libqt_list of KSyntaxHighlighting__Definition*
///
libqt_list k_syntaxhighlighting__definition_included_definitions(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#singleLineCommentMarker)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_single_line_comment_marker(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#singleLineCommentPosition)
///
/// @param self const KSyntaxHighlighting__Definition*
///
/// @return enum KSyntaxHighlighting__CommentPosition
///
int32_t k_syntaxhighlighting__definition_single_line_comment_position(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#multiLineCommentMarker)
///
/// @param self const KSyntaxHighlighting__Definition*
///
/// @return libqt_pair tuple of const char* and const char*
///
libqt_pair k_syntaxhighlighting__definition_multi_line_comment_marker(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#characterEncodings)
///
/// @param self const KSyntaxHighlighting__Definition*
///
/// @return libqt_list of libqt_pair tuple of QChar* and const char*
///
libqt_list k_syntaxhighlighting__definition_character_encodings(const void* self);

/// Delete this object from C++ memory.
///
/// @param self KSyntaxHighlighting__Definition*
///
void k_syntaxhighlighting__definition_delete(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#public-types)

typedef enum {
    KSYNTAXHIGHLIGHTING_COMMENTPOSITION_STARTOFLINE = 0,
    KSYNTAXHIGHLIGHTING_COMMENTPOSITION_AFTERWHITESPACE = 1
} KSyntaxHighlighting__CommentPosition;

#endif

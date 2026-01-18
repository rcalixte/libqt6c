#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTING_QT6C_LIBDEFINITION_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTING_QT6C_LIBDEFINITION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
KSyntaxHighlighting__Definition* k_syntaxhighlighting__definition_new2(void* other);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-eq)
///
/// @param self KSyntaxHighlighting__Definition*
/// @param rhs KSyntaxHighlighting__Definition*
///
void k_syntaxhighlighting__definition_operator_assign(void* self, void* rhs);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-eq-eq)
///
/// @param self KSyntaxHighlighting__Definition*
/// @param other KSyntaxHighlighting__Definition*
///
bool k_syntaxhighlighting__definition_operator_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-not-eq)
///
/// @param self KSyntaxHighlighting__Definition*
/// @param other KSyntaxHighlighting__Definition*
///
bool k_syntaxhighlighting__definition_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isValid)
///
/// @param self KSyntaxHighlighting__Definition*
///
bool k_syntaxhighlighting__definition_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_file_path(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_name(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#alternativeNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char** k_syntaxhighlighting__definition_alternative_names(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#translatedName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_translated_name(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#section)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_section(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#translatedSection)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_translated_section(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char** k_syntaxhighlighting__definition_mime_types(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#extensions)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char** k_syntaxhighlighting__definition_extensions(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#version)
///
/// @param self KSyntaxHighlighting__Definition*
///
int32_t k_syntaxhighlighting__definition_version(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#priority)
///
/// @param self KSyntaxHighlighting__Definition*
///
int32_t k_syntaxhighlighting__definition_priority(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isHidden)
///
/// @param self KSyntaxHighlighting__Definition*
///
bool k_syntaxhighlighting__definition_is_hidden(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#style)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_style(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#indenter)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_indenter(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#author)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_author(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#license)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_license(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isWordDelimiter)
///
/// @param self KSyntaxHighlighting__Definition*
/// @param c QChar*
///
bool k_syntaxhighlighting__definition_is_word_delimiter(void* self, void* c);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#isWordWrapDelimiter)
///
/// @param self KSyntaxHighlighting__Definition*
/// @param c QChar*
///
bool k_syntaxhighlighting__definition_is_word_wrap_delimiter(void* self, void* c);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#foldingEnabled)
///
/// @param self KSyntaxHighlighting__Definition*
///
bool k_syntaxhighlighting__definition_folding_enabled(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#indentationBasedFoldingEnabled)
///
/// @param self KSyntaxHighlighting__Definition*
///
bool k_syntaxhighlighting__definition_indentation_based_folding_enabled(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#foldingIgnoreList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char** k_syntaxhighlighting__definition_folding_ignore_list(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#keywordLists)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char** k_syntaxhighlighting__definition_keyword_lists(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#keywordList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSyntaxHighlighting__Definition*
/// @param name const char*
///
const char** k_syntaxhighlighting__definition_keyword_list(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#setKeywordList)
///
/// @param self KSyntaxHighlighting__Definition*
/// @param name const char*
/// @param content const char**
///
bool k_syntaxhighlighting__definition_set_keyword_list(void* self, const char* name, const char* content[static 1]);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#formats)
///
/// @param self KSyntaxHighlighting__Definition*
///
/// @return libqt_list of KSyntaxHighlighting__Format*
///
libqt_list k_syntaxhighlighting__definition_formats(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#includedDefinitions)
///
/// @param self KSyntaxHighlighting__Definition*
///
/// @return libqt_list of KSyntaxHighlighting__Definition*
///
libqt_list k_syntaxhighlighting__definition_included_definitions(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#singleLineCommentMarker)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSyntaxHighlighting__Definition*
///
const char* k_syntaxhighlighting__definition_single_line_comment_marker(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#singleLineCommentPosition)
///
/// @param self KSyntaxHighlighting__Definition*
///
/// @return enum KSyntaxHighlighting__CommentPosition
///
int32_t k_syntaxhighlighting__definition_single_line_comment_position(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#multiLineCommentMarker)
///
/// @param self KSyntaxHighlighting__Definition*
///
/// @return libqt_pair tuple of const char* and const char*
///
libqt_pair k_syntaxhighlighting__definition_multi_line_comment_marker(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-definition.html#characterEncodings)
///
/// @param self KSyntaxHighlighting__Definition*
///
/// @return libqt_list of libqt_pair tuple of QChar* and const char*
///
libqt_list k_syntaxhighlighting__definition_character_encodings(void* self);

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

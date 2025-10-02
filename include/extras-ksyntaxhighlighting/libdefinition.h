#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGQT6C_LIBDEFINITION_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGQT6C_LIBDEFINITION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ksyntaxhighlighting-definition.html

/// k_syntaxhighlighting__definition_new constructs a new KSyntaxHighlighting::Definition object.
///
KSyntaxHighlighting__Definition* k_syntaxhighlighting__definition_new();

/// k_syntaxhighlighting__definition_new2 constructs a new KSyntaxHighlighting::Definition object.
///
/// @param other KSyntaxHighlighting__Definition*
KSyntaxHighlighting__Definition* k_syntaxhighlighting__definition_new2(void* other);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-eq)
///
/// @param self KSyntaxHighlighting__Definition*
/// @param rhs KSyntaxHighlighting__Definition*
void k_syntaxhighlighting__definition_operator_assign(void* self, void* rhs);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-eq-eq)
///
/// @param self KSyntaxHighlighting__Definition*
/// @param other KSyntaxHighlighting__Definition*
bool k_syntaxhighlighting__definition_operator_equal(void* self, void* other);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#operator-not-eq)
///
/// @param self KSyntaxHighlighting__Definition*
/// @param other KSyntaxHighlighting__Definition*
bool k_syntaxhighlighting__definition_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#isValid)
///
/// @param self KSyntaxHighlighting__Definition*
bool k_syntaxhighlighting__definition_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#filePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char* k_syntaxhighlighting__definition_file_path(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char* k_syntaxhighlighting__definition_name(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#alternativeNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char** k_syntaxhighlighting__definition_alternative_names(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#translatedName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char* k_syntaxhighlighting__definition_translated_name(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#section)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char* k_syntaxhighlighting__definition_section(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#translatedSection)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char* k_syntaxhighlighting__definition_translated_section(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char** k_syntaxhighlighting__definition_mime_types(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#extensions)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char** k_syntaxhighlighting__definition_extensions(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#version)
///
/// @param self KSyntaxHighlighting__Definition*
int32_t k_syntaxhighlighting__definition_version(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#priority)
///
/// @param self KSyntaxHighlighting__Definition*
int32_t k_syntaxhighlighting__definition_priority(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#isHidden)
///
/// @param self KSyntaxHighlighting__Definition*
bool k_syntaxhighlighting__definition_is_hidden(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#style)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char* k_syntaxhighlighting__definition_style(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#indenter)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char* k_syntaxhighlighting__definition_indenter(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#author)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char* k_syntaxhighlighting__definition_author(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#license)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char* k_syntaxhighlighting__definition_license(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#isWordDelimiter)
///
/// @param self KSyntaxHighlighting__Definition*
/// @param c QChar*
bool k_syntaxhighlighting__definition_is_word_delimiter(void* self, void* c);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#isWordWrapDelimiter)
///
/// @param self KSyntaxHighlighting__Definition*
/// @param c QChar*
bool k_syntaxhighlighting__definition_is_word_wrap_delimiter(void* self, void* c);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#foldingEnabled)
///
/// @param self KSyntaxHighlighting__Definition*
bool k_syntaxhighlighting__definition_folding_enabled(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#indentationBasedFoldingEnabled)
///
/// @param self KSyntaxHighlighting__Definition*
bool k_syntaxhighlighting__definition_indentation_based_folding_enabled(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#foldingIgnoreList)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char** k_syntaxhighlighting__definition_folding_ignore_list(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#keywordLists)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char** k_syntaxhighlighting__definition_keyword_lists(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#keywordList)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
/// @param name const char*
const char** k_syntaxhighlighting__definition_keyword_list(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#setKeywordList)
///
/// @param self KSyntaxHighlighting__Definition*
/// @param name const char*
/// @param content const char**
bool k_syntaxhighlighting__definition_set_keyword_list(void* self, const char* name, const char* content[]);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#formats)
///
/// @param self KSyntaxHighlighting__Definition*
libqt_list /* of KSyntaxHighlighting__Format* */ k_syntaxhighlighting__definition_formats(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#includedDefinitions)
///
/// @param self KSyntaxHighlighting__Definition*
libqt_list /* of KSyntaxHighlighting__Definition* */ k_syntaxhighlighting__definition_included_definitions(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#singleLineCommentMarker)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Definition*
const char* k_syntaxhighlighting__definition_single_line_comment_marker(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#singleLineCommentPosition)
///
/// @param self KSyntaxHighlighting__Definition*
///
/// @return enum KSyntaxHighlighting__CommentPosition
int32_t k_syntaxhighlighting__definition_single_line_comment_position(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#multiLineCommentMarker)
///
/// @param self KSyntaxHighlighting__Definition*
libqt_pair /* tuple of const char* and const char* */ k_syntaxhighlighting__definition_multi_line_comment_marker(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definition.html#characterEncodings)
///
/// @param self KSyntaxHighlighting__Definition*
libqt_list /* of libqt_pair  tuple of QChar* and const char*  */ k_syntaxhighlighting__definition_character_encodings(void* self);

/// Delete this object from C++ memory.
///
/// @param self KSyntaxHighlighting__Definition*
void k_syntaxhighlighting__definition_delete(void* self);

/// https://api.kde.org/ksyntaxhighlighting-definition.html#types

typedef enum {
    KSYNTAXHIGHLIGHTING_COMMENTPOSITION_STARTOFLINE = 0,
    KSYNTAXHIGHLIGHTING_COMMENTPOSITION_AFTERWHITESPACE = 1
} KSyntaxHighlighting__CommentPosition;

#endif

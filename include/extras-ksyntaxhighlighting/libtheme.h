#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGQT6C_LIBTHEME_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGQT6C_LIBTHEME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ksyntaxhighlighting-theme.html

/// k_syntaxhighlighting__theme_new constructs a new KSyntaxHighlighting::Theme object.
///
KSyntaxHighlighting__Theme* k_syntaxhighlighting__theme_new();

/// k_syntaxhighlighting__theme_new2 constructs a new KSyntaxHighlighting::Theme object.
///
/// @param copyVal KSyntaxHighlighting__Theme*
KSyntaxHighlighting__Theme* k_syntaxhighlighting__theme_new2(void* copyVal);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#operator-eq)
///
/// @param self KSyntaxHighlighting__Theme*
/// @param other KSyntaxHighlighting__Theme*
void k_syntaxhighlighting__theme_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#isValid)
///
/// @param self KSyntaxHighlighting__Theme*
bool k_syntaxhighlighting__theme_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Theme*
const char* k_syntaxhighlighting__theme_name(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#translatedName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Theme*
const char* k_syntaxhighlighting__theme_translated_name(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#isReadOnly)
///
/// @param self KSyntaxHighlighting__Theme*
bool k_syntaxhighlighting__theme_is_read_only(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#filePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Theme*
const char* k_syntaxhighlighting__theme_file_path(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#textColor)
///
/// @param self KSyntaxHighlighting__Theme*
/// @param style enum KSyntaxHighlighting__Theme__TextStyle
uint32_t k_syntaxhighlighting__theme_text_color(void* self, int32_t style);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#selectedTextColor)
///
/// @param self KSyntaxHighlighting__Theme*
/// @param style enum KSyntaxHighlighting__Theme__TextStyle
uint32_t k_syntaxhighlighting__theme_selected_text_color(void* self, int32_t style);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#backgroundColor)
///
/// @param self KSyntaxHighlighting__Theme*
/// @param style enum KSyntaxHighlighting__Theme__TextStyle
uint32_t k_syntaxhighlighting__theme_background_color(void* self, int32_t style);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#selectedBackgroundColor)
///
/// @param self KSyntaxHighlighting__Theme*
/// @param style enum KSyntaxHighlighting__Theme__TextStyle
uint32_t k_syntaxhighlighting__theme_selected_background_color(void* self, int32_t style);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#isBold)
///
/// @param self KSyntaxHighlighting__Theme*
/// @param style enum KSyntaxHighlighting__Theme__TextStyle
bool k_syntaxhighlighting__theme_is_bold(void* self, int32_t style);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#isItalic)
///
/// @param self KSyntaxHighlighting__Theme*
/// @param style enum KSyntaxHighlighting__Theme__TextStyle
bool k_syntaxhighlighting__theme_is_italic(void* self, int32_t style);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#isUnderline)
///
/// @param self KSyntaxHighlighting__Theme*
/// @param style enum KSyntaxHighlighting__Theme__TextStyle
bool k_syntaxhighlighting__theme_is_underline(void* self, int32_t style);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#isStrikeThrough)
///
/// @param self KSyntaxHighlighting__Theme*
/// @param style enum KSyntaxHighlighting__Theme__TextStyle
bool k_syntaxhighlighting__theme_is_strike_through(void* self, int32_t style);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-theme.html#editorColor)
///
/// @param self KSyntaxHighlighting__Theme*
/// @param role enum KSyntaxHighlighting__Theme__EditorColorRole
uint32_t k_syntaxhighlighting__theme_editor_color(void* self, int32_t role);

/// Delete this object from C++ memory.
///
/// @param self KSyntaxHighlighting__Theme*
void k_syntaxhighlighting__theme_delete(void* self);

/// https://api.kde.org/ksyntaxhighlighting-theme.html#types

typedef enum {
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_NORMAL = 0,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_KEYWORD = 1,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_FUNCTION = 2,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_VARIABLE = 3,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_CONTROLFLOW = 4,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_OPERATOR = 5,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_BUILTIN = 6,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_EXTENSION = 7,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_PREPROCESSOR = 8,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_ATTRIBUTE = 9,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_CHAR = 10,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_SPECIALCHAR = 11,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_STRING = 12,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_VERBATIMSTRING = 13,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_SPECIALSTRING = 14,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_IMPORT = 15,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_DATATYPE = 16,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_DECVAL = 17,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_BASEN = 18,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_FLOAT = 19,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_CONSTANT = 20,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_COMMENT = 21,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_DOCUMENTATION = 22,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_ANNOTATION = 23,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_COMMENTVAR = 24,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_REGIONMARKER = 25,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_INFORMATION = 26,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_WARNING = 27,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_ALERT = 28,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_ERROR = 29,
    KSYNTAXHIGHLIGHTING_THEME_TEXTSTYLE_OTHERS = 30
} KSyntaxHighlighting__Theme__TextStyle;

typedef enum {
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_BACKGROUNDCOLOR = 0,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_TEXTSELECTION = 1,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_CURRENTLINE = 2,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_SEARCHHIGHLIGHT = 3,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_REPLACEHIGHLIGHT = 4,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_BRACKETMATCHING = 5,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_TABMARKER = 6,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_SPELLCHECKING = 7,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_INDENTATIONLINE = 8,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_ICONBORDER = 9,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_CODEFOLDING = 10,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_LINENUMBERS = 11,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_CURRENTLINENUMBER = 12,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_WORDWRAPMARKER = 13,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_MODIFIEDLINES = 14,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_SAVEDLINES = 15,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_SEPARATOR = 16,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_MARKBOOKMARK = 17,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_MARKBREAKPOINTACTIVE = 18,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_MARKBREAKPOINTREACHED = 19,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_MARKBREAKPOINTDISABLED = 20,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_MARKEXECUTION = 21,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_MARKWARNING = 22,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_MARKERROR = 23,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_TEMPLATEBACKGROUND = 24,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_TEMPLATEPLACEHOLDER = 25,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_TEMPLATEFOCUSEDPLACEHOLDER = 26,
    KSYNTAXHIGHLIGHTING_THEME_EDITORCOLORROLE_TEMPLATEREADONLYPLACEHOLDER = 27
} KSyntaxHighlighting__Theme__EditorColorRole;

#endif

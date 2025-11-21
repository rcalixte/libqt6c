#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTING_QT6C_LIBFORMAT_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTING_QT6C_LIBFORMAT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ksyntaxhighlighting-format.html

/// k_syntaxhighlighting__format_new constructs a new KSyntaxHighlighting::Format object.
///
KSyntaxHighlighting__Format* k_syntaxhighlighting__format_new();

/// k_syntaxhighlighting__format_new2 constructs a new KSyntaxHighlighting::Format object.
///
/// @param other KSyntaxHighlighting__Format*
KSyntaxHighlighting__Format* k_syntaxhighlighting__format_new2(void* other);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#operator-eq)
///
/// @param self KSyntaxHighlighting__Format*
/// @param other KSyntaxHighlighting__Format*
void k_syntaxhighlighting__format_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#isValid)
///
/// @param self KSyntaxHighlighting__Format*
bool k_syntaxhighlighting__format_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__Format*
const char* k_syntaxhighlighting__format_name(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#id)
///
/// @param self KSyntaxHighlighting__Format*
int32_t k_syntaxhighlighting__format_id(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#textStyle)
///
/// @param self KSyntaxHighlighting__Format*
///
/// @return enum KSyntaxHighlighting__Theme__TextStyle
int32_t k_syntaxhighlighting__format_text_style(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#isDefaultTextStyle)
///
/// @param self KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
bool k_syntaxhighlighting__format_is_default_text_style(void* self, void* theme);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasTextColor)
///
/// @param self KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
bool k_syntaxhighlighting__format_has_text_color(void* self, void* theme);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#textColor)
///
/// @param self KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
QColor* k_syntaxhighlighting__format_text_color(void* self, void* theme);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#selectedTextColor)
///
/// @param self KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
QColor* k_syntaxhighlighting__format_selected_text_color(void* self, void* theme);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasBackgroundColor)
///
/// @param self KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
bool k_syntaxhighlighting__format_has_background_color(void* self, void* theme);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#backgroundColor)
///
/// @param self KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
QColor* k_syntaxhighlighting__format_background_color(void* self, void* theme);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#selectedBackgroundColor)
///
/// @param self KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
QColor* k_syntaxhighlighting__format_selected_background_color(void* self, void* theme);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#isBold)
///
/// @param self KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
bool k_syntaxhighlighting__format_is_bold(void* self, void* theme);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#isItalic)
///
/// @param self KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
bool k_syntaxhighlighting__format_is_italic(void* self, void* theme);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#isUnderline)
///
/// @param self KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
bool k_syntaxhighlighting__format_is_underline(void* self, void* theme);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#isStrikeThrough)
///
/// @param self KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
bool k_syntaxhighlighting__format_is_strike_through(void* self, void* theme);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#spellCheck)
///
/// @param self KSyntaxHighlighting__Format*
bool k_syntaxhighlighting__format_spell_check(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasBoldOverride)
///
/// @param self KSyntaxHighlighting__Format*
bool k_syntaxhighlighting__format_has_bold_override(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasItalicOverride)
///
/// @param self KSyntaxHighlighting__Format*
bool k_syntaxhighlighting__format_has_italic_override(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasUnderlineOverride)
///
/// @param self KSyntaxHighlighting__Format*
bool k_syntaxhighlighting__format_has_underline_override(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasStrikeThroughOverride)
///
/// @param self KSyntaxHighlighting__Format*
bool k_syntaxhighlighting__format_has_strike_through_override(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasTextColorOverride)
///
/// @param self KSyntaxHighlighting__Format*
bool k_syntaxhighlighting__format_has_text_color_override(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasBackgroundColorOverride)
///
/// @param self KSyntaxHighlighting__Format*
bool k_syntaxhighlighting__format_has_background_color_override(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasSelectedTextColorOverride)
///
/// @param self KSyntaxHighlighting__Format*
bool k_syntaxhighlighting__format_has_selected_text_color_override(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-format.html#hasSelectedBackgroundColorOverride)
///
/// @param self KSyntaxHighlighting__Format*
bool k_syntaxhighlighting__format_has_selected_background_color_override(void* self);

/// Delete this object from C++ memory.
///
/// @param self KSyntaxHighlighting__Format*
void k_syntaxhighlighting__format_delete(void* self);

#endif

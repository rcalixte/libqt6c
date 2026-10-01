#pragma once
#ifndef EXTRAS_KSYNTAXHIGHLIGHTING_LIBFORMAT_H
#define EXTRAS_KSYNTAXHIGHLIGHTING_LIBFORMAT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html)

/// k_syntaxhighlighting__format_new constructs a new KSyntaxHighlighting::Format object.
///
KSyntaxHighlighting__Format* k_syntaxhighlighting__format_new();

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html)

/// k_syntaxhighlighting__format_new2 constructs a new KSyntaxHighlighting::Format object.
///
/// @param other KSyntaxHighlighting__Format*
///
KSyntaxHighlighting__Format* k_syntaxhighlighting__format_new2(const void* other);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#operator-eq)
///
/// @param self KSyntaxHighlighting__Format*
/// @param other KSyntaxHighlighting__Format*
///
void k_syntaxhighlighting__format_operator_assign(void* self, const void* other);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isValid)
///
/// @param self const KSyntaxHighlighting__Format*
///
bool k_syntaxhighlighting__format_is_valid(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSyntaxHighlighting__Format*
///
const char* k_syntaxhighlighting__format_name(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#id)
///
/// @param self const KSyntaxHighlighting__Format*
///
int32_t k_syntaxhighlighting__format_id(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#textStyle)
///
/// @param self const KSyntaxHighlighting__Format*
///
/// @return enum KSyntaxHighlighting__Theme__TextStyle
///
int32_t k_syntaxhighlighting__format_text_style(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isDefaultTextStyle)
///
/// @param self const KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
///
bool k_syntaxhighlighting__format_is_default_text_style(const void* self, const void* theme);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasTextColor)
///
/// @param self const KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
///
bool k_syntaxhighlighting__format_has_text_color(const void* self, const void* theme);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#textColor)
///
/// @param self const KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
///
QColor* k_syntaxhighlighting__format_text_color(const void* self, const void* theme);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#selectedTextColor)
///
/// @param self const KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
///
QColor* k_syntaxhighlighting__format_selected_text_color(const void* self, const void* theme);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasBackgroundColor)
///
/// @param self const KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
///
bool k_syntaxhighlighting__format_has_background_color(const void* self, const void* theme);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#backgroundColor)
///
/// @param self const KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
///
QColor* k_syntaxhighlighting__format_background_color(const void* self, const void* theme);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#selectedBackgroundColor)
///
/// @param self const KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
///
QColor* k_syntaxhighlighting__format_selected_background_color(const void* self, const void* theme);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isBold)
///
/// @param self const KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
///
bool k_syntaxhighlighting__format_is_bold(const void* self, const void* theme);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isItalic)
///
/// @param self const KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
///
bool k_syntaxhighlighting__format_is_italic(const void* self, const void* theme);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isUnderline)
///
/// @param self const KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
///
bool k_syntaxhighlighting__format_is_underline(const void* self, const void* theme);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#isStrikeThrough)
///
/// @param self const KSyntaxHighlighting__Format*
/// @param theme KSyntaxHighlighting__Theme*
///
bool k_syntaxhighlighting__format_is_strike_through(const void* self, const void* theme);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#spellCheck)
///
/// @param self const KSyntaxHighlighting__Format*
///
bool k_syntaxhighlighting__format_spell_check(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasBoldOverride)
///
/// @param self const KSyntaxHighlighting__Format*
///
bool k_syntaxhighlighting__format_has_bold_override(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasItalicOverride)
///
/// @param self const KSyntaxHighlighting__Format*
///
bool k_syntaxhighlighting__format_has_italic_override(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasUnderlineOverride)
///
/// @param self const KSyntaxHighlighting__Format*
///
bool k_syntaxhighlighting__format_has_underline_override(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasStrikeThroughOverride)
///
/// @param self const KSyntaxHighlighting__Format*
///
bool k_syntaxhighlighting__format_has_strike_through_override(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasTextColorOverride)
///
/// @param self const KSyntaxHighlighting__Format*
///
bool k_syntaxhighlighting__format_has_text_color_override(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasBackgroundColorOverride)
///
/// @param self const KSyntaxHighlighting__Format*
///
bool k_syntaxhighlighting__format_has_background_color_override(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasSelectedTextColorOverride)
///
/// @param self const KSyntaxHighlighting__Format*
///
bool k_syntaxhighlighting__format_has_selected_text_color_override(const void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-format.html#hasSelectedBackgroundColorOverride)
///
/// @param self const KSyntaxHighlighting__Format*
///
bool k_syntaxhighlighting__format_has_selected_background_color_override(const void* self);

/// Delete this object from C++ memory.
///
/// @param self KSyntaxHighlighting__Format*
///
void k_syntaxhighlighting__format_delete(void* self);

#endif

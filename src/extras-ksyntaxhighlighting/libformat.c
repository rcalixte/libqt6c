#include "libtheme.hpp"
#include "../libqcolor.hpp"
#include "libformat.hpp"
#include "libformat.h"

KSyntaxHighlighting__Format* k_syntaxhighlighting__format_new() {
    return KSyntaxHighlighting__Format_New();
}

KSyntaxHighlighting__Format* k_syntaxhighlighting__format_new2(const void* other) {
    return KSyntaxHighlighting__Format_New2((KSyntaxHighlighting__Format*)other);
}

void k_syntaxhighlighting__format_operator_assign(void* self, const void* other) {
    KSyntaxHighlighting__Format_OperatorAssign((KSyntaxHighlighting__Format*)self, (KSyntaxHighlighting__Format*)other);
}

bool k_syntaxhighlighting__format_is_valid(const void* self) {
    return KSyntaxHighlighting__Format_IsValid((KSyntaxHighlighting__Format*)self);
}

const char* k_syntaxhighlighting__format_name(const void* self) {
    libqt_string _str = KSyntaxHighlighting__Format_Name((KSyntaxHighlighting__Format*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_syntaxhighlighting__format_id(const void* self) {
    return KSyntaxHighlighting__Format_Id((KSyntaxHighlighting__Format*)self);
}

int32_t k_syntaxhighlighting__format_text_style(const void* self) {
    return KSyntaxHighlighting__Format_TextStyle((KSyntaxHighlighting__Format*)self);
}

bool k_syntaxhighlighting__format_is_default_text_style(const void* self, const void* theme) {
    return KSyntaxHighlighting__Format_IsDefaultTextStyle((KSyntaxHighlighting__Format*)self, (KSyntaxHighlighting__Theme*)theme);
}

bool k_syntaxhighlighting__format_has_text_color(const void* self, const void* theme) {
    return KSyntaxHighlighting__Format_HasTextColor((KSyntaxHighlighting__Format*)self, (KSyntaxHighlighting__Theme*)theme);
}

QColor* k_syntaxhighlighting__format_text_color(const void* self, const void* theme) {
    return KSyntaxHighlighting__Format_TextColor((KSyntaxHighlighting__Format*)self, (KSyntaxHighlighting__Theme*)theme);
}

QColor* k_syntaxhighlighting__format_selected_text_color(const void* self, const void* theme) {
    return KSyntaxHighlighting__Format_SelectedTextColor((KSyntaxHighlighting__Format*)self, (KSyntaxHighlighting__Theme*)theme);
}

bool k_syntaxhighlighting__format_has_background_color(const void* self, const void* theme) {
    return KSyntaxHighlighting__Format_HasBackgroundColor((KSyntaxHighlighting__Format*)self, (KSyntaxHighlighting__Theme*)theme);
}

QColor* k_syntaxhighlighting__format_background_color(const void* self, const void* theme) {
    return KSyntaxHighlighting__Format_BackgroundColor((KSyntaxHighlighting__Format*)self, (KSyntaxHighlighting__Theme*)theme);
}

QColor* k_syntaxhighlighting__format_selected_background_color(const void* self, const void* theme) {
    return KSyntaxHighlighting__Format_SelectedBackgroundColor((KSyntaxHighlighting__Format*)self, (KSyntaxHighlighting__Theme*)theme);
}

bool k_syntaxhighlighting__format_is_bold(const void* self, const void* theme) {
    return KSyntaxHighlighting__Format_IsBold((KSyntaxHighlighting__Format*)self, (KSyntaxHighlighting__Theme*)theme);
}

bool k_syntaxhighlighting__format_is_italic(const void* self, const void* theme) {
    return KSyntaxHighlighting__Format_IsItalic((KSyntaxHighlighting__Format*)self, (KSyntaxHighlighting__Theme*)theme);
}

bool k_syntaxhighlighting__format_is_underline(const void* self, const void* theme) {
    return KSyntaxHighlighting__Format_IsUnderline((KSyntaxHighlighting__Format*)self, (KSyntaxHighlighting__Theme*)theme);
}

bool k_syntaxhighlighting__format_is_strike_through(const void* self, const void* theme) {
    return KSyntaxHighlighting__Format_IsStrikeThrough((KSyntaxHighlighting__Format*)self, (KSyntaxHighlighting__Theme*)theme);
}

bool k_syntaxhighlighting__format_spell_check(const void* self) {
    return KSyntaxHighlighting__Format_SpellCheck((KSyntaxHighlighting__Format*)self);
}

bool k_syntaxhighlighting__format_has_bold_override(const void* self) {
    return KSyntaxHighlighting__Format_HasBoldOverride((KSyntaxHighlighting__Format*)self);
}

bool k_syntaxhighlighting__format_has_italic_override(const void* self) {
    return KSyntaxHighlighting__Format_HasItalicOverride((KSyntaxHighlighting__Format*)self);
}

bool k_syntaxhighlighting__format_has_underline_override(const void* self) {
    return KSyntaxHighlighting__Format_HasUnderlineOverride((KSyntaxHighlighting__Format*)self);
}

bool k_syntaxhighlighting__format_has_strike_through_override(const void* self) {
    return KSyntaxHighlighting__Format_HasStrikeThroughOverride((KSyntaxHighlighting__Format*)self);
}

bool k_syntaxhighlighting__format_has_text_color_override(const void* self) {
    return KSyntaxHighlighting__Format_HasTextColorOverride((KSyntaxHighlighting__Format*)self);
}

bool k_syntaxhighlighting__format_has_background_color_override(const void* self) {
    return KSyntaxHighlighting__Format_HasBackgroundColorOverride((KSyntaxHighlighting__Format*)self);
}

bool k_syntaxhighlighting__format_has_selected_text_color_override(const void* self) {
    return KSyntaxHighlighting__Format_HasSelectedTextColorOverride((KSyntaxHighlighting__Format*)self);
}

bool k_syntaxhighlighting__format_has_selected_background_color_override(const void* self) {
    return KSyntaxHighlighting__Format_HasSelectedBackgroundColorOverride((KSyntaxHighlighting__Format*)self);
}

void k_syntaxhighlighting__format_delete(void* self) {
    KSyntaxHighlighting__Format_Delete((KSyntaxHighlighting__Format*)(self));
}

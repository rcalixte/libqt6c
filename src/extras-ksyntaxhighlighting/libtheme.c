#include "libtheme.hpp"
#include "libtheme.h"

KSyntaxHighlighting__Theme* k_syntaxhighlighting__theme_new() {
    return KSyntaxHighlighting__Theme_new();
}

KSyntaxHighlighting__Theme* k_syntaxhighlighting__theme_new2(void* copyVal) {
    return KSyntaxHighlighting__Theme_new2((KSyntaxHighlighting__Theme*)copyVal);
}

void k_syntaxhighlighting__theme_operator_assign(void* self, void* other) {
    KSyntaxHighlighting__Theme_OperatorAssign((KSyntaxHighlighting__Theme*)self, (KSyntaxHighlighting__Theme*)other);
}

bool k_syntaxhighlighting__theme_is_valid(void* self) {
    return KSyntaxHighlighting__Theme_IsValid((KSyntaxHighlighting__Theme*)self);
}

const char* k_syntaxhighlighting__theme_name(void* self) {
    libqt_string _str = KSyntaxHighlighting__Theme_Name((KSyntaxHighlighting__Theme*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_syntaxhighlighting__theme_translated_name(void* self) {
    libqt_string _str = KSyntaxHighlighting__Theme_TranslatedName((KSyntaxHighlighting__Theme*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_syntaxhighlighting__theme_is_read_only(void* self) {
    return KSyntaxHighlighting__Theme_IsReadOnly((KSyntaxHighlighting__Theme*)self);
}

const char* k_syntaxhighlighting__theme_file_path(void* self) {
    libqt_string _str = KSyntaxHighlighting__Theme_FilePath((KSyntaxHighlighting__Theme*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t k_syntaxhighlighting__theme_text_color(void* self, int32_t style) {
    return KSyntaxHighlighting__Theme_TextColor((KSyntaxHighlighting__Theme*)self, style);
}

uint32_t k_syntaxhighlighting__theme_selected_text_color(void* self, int32_t style) {
    return KSyntaxHighlighting__Theme_SelectedTextColor((KSyntaxHighlighting__Theme*)self, style);
}

uint32_t k_syntaxhighlighting__theme_background_color(void* self, int32_t style) {
    return KSyntaxHighlighting__Theme_BackgroundColor((KSyntaxHighlighting__Theme*)self, style);
}

uint32_t k_syntaxhighlighting__theme_selected_background_color(void* self, int32_t style) {
    return KSyntaxHighlighting__Theme_SelectedBackgroundColor((KSyntaxHighlighting__Theme*)self, style);
}

bool k_syntaxhighlighting__theme_is_bold(void* self, int32_t style) {
    return KSyntaxHighlighting__Theme_IsBold((KSyntaxHighlighting__Theme*)self, style);
}

bool k_syntaxhighlighting__theme_is_italic(void* self, int32_t style) {
    return KSyntaxHighlighting__Theme_IsItalic((KSyntaxHighlighting__Theme*)self, style);
}

bool k_syntaxhighlighting__theme_is_underline(void* self, int32_t style) {
    return KSyntaxHighlighting__Theme_IsUnderline((KSyntaxHighlighting__Theme*)self, style);
}

bool k_syntaxhighlighting__theme_is_strike_through(void* self, int32_t style) {
    return KSyntaxHighlighting__Theme_IsStrikeThrough((KSyntaxHighlighting__Theme*)self, style);
}

uint32_t k_syntaxhighlighting__theme_editor_color(void* self, int32_t role) {
    return KSyntaxHighlighting__Theme_EditorColor((KSyntaxHighlighting__Theme*)self, role);
}

void k_syntaxhighlighting__theme_delete(void* self) {
    KSyntaxHighlighting__Theme_Delete((KSyntaxHighlighting__Theme*)(self));
}

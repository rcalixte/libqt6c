#include "../extras-kconfig/libkconfigskeleton.hpp"
#include "../extras-kconfig/libkcoreconfigskeleton.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libtextautocorrectionsetting_base.hpp"
#include "libtextautocorrectionsettings.hpp"
#include "libtextautocorrectionsettings.h"

const QMetaObject* k_textautocorrectioncore__textautocorrectionsettings_meta_object(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettings_MetaObject((TextAutoCorrectionCore__TextAutoCorrectionSettings*)self);
}

void* k_textautocorrectioncore__textautocorrectionsettings_metacast(void* self, const char* param1) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettings_Metacast((TextAutoCorrectionCore__TextAutoCorrectionSettings*)self, param1);
}

int32_t k_textautocorrectioncore__textautocorrectionsettings_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettings_Metacall((TextAutoCorrectionCore__TextAutoCorrectionSettings*)self, param1, param2, param3);
}

const char* k_textautocorrectioncore__textautocorrectionsettings_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

TextAutoCorrectionCore__TextAutoCorrectionSettings* k_textautocorrectioncore__textautocorrectionsettings_self() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettings_Self();
}

void k_textautocorrectioncore__textautocorrectionsettings_request_sync(void* self) {
    TextAutoCorrectionCore__TextAutoCorrectionSettings_RequestSync((TextAutoCorrectionCore__TextAutoCorrectionSettings*)self);
}

const char* k_textautocorrectioncore__textautocorrectionsettings_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textautocorrectioncore__textautocorrectionsettings_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectioncore__textautocorrectionsettings_set_enabled(bool v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetEnabled(v);
}

bool k_textautocorrectioncore__textautocorrectionsettings_enabled() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_Enabled();
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_enabled_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsEnabledImmutable();
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_enabled_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_EnabledItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_uppercase_first_char_of_sentence(bool v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetUppercaseFirstCharOfSentence(v);
}

bool k_textautocorrectioncore__textautocorrectionsettings_uppercase_first_char_of_sentence() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_UppercaseFirstCharOfSentence();
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_uppercase_first_char_of_sentence_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsUppercaseFirstCharOfSentenceImmutable();
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_uppercase_first_char_of_sentence_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_UppercaseFirstCharOfSentenceItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_fix_two_uppercase_chars(bool v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetFixTwoUppercaseChars(v);
}

bool k_textautocorrectioncore__textautocorrectionsettings_fix_two_uppercase_chars() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_FixTwoUppercaseChars();
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_fix_two_uppercase_chars_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsFixTwoUppercaseCharsImmutable();
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_fix_two_uppercase_chars_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_FixTwoUppercaseCharsItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_single_spaces(bool v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetSingleSpaces(v);
}

bool k_textautocorrectioncore__textautocorrectionsettings_single_spaces() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SingleSpaces();
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_single_spaces_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsSingleSpacesImmutable();
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_single_spaces_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SingleSpacesItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_auto_fractions(bool v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetAutoFractions(v);
}

bool k_textautocorrectioncore__textautocorrectionsettings_auto_fractions() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AutoFractions();
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_auto_fractions_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsAutoFractionsImmutable();
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_auto_fractions_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AutoFractionsItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_capitalize_week_days(bool v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetCapitalizeWeekDays(v);
}

bool k_textautocorrectioncore__textautocorrectionsettings_capitalize_week_days() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_CapitalizeWeekDays();
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_capitalize_week_days_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsCapitalizeWeekDaysImmutable();
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_capitalize_week_days_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_CapitalizeWeekDaysItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_advanced_autocorrect(bool v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetAdvancedAutocorrect(v);
}

bool k_textautocorrectioncore__textautocorrectionsettings_advanced_autocorrect() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AdvancedAutocorrect();
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_advanced_autocorrect_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsAdvancedAutocorrectImmutable();
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_advanced_autocorrect_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AdvancedAutocorrectItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_replace_double_quotes(bool v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetReplaceDoubleQuotes(v);
}

bool k_textautocorrectioncore__textautocorrectionsettings_replace_double_quotes() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_ReplaceDoubleQuotes();
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_replace_double_quotes_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsReplaceDoubleQuotesImmutable();
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_replace_double_quotes_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_ReplaceDoubleQuotesItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_replace_single_quotes(bool v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetReplaceSingleQuotes(v);
}

bool k_textautocorrectioncore__textautocorrectionsettings_replace_single_quotes() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_ReplaceSingleQuotes();
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_replace_single_quotes_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsReplaceSingleQuotesImmutable();
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_replace_single_quotes_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_ReplaceSingleQuotesItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_auto_format_url(bool v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetAutoFormatUrl(v);
}

bool k_textautocorrectioncore__textautocorrectionsettings_auto_format_url() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AutoFormatUrl();
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_auto_format_url_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsAutoFormatUrlImmutable();
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_auto_format_url_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AutoFormatUrlItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_auto_bold_underline(bool v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetAutoBoldUnderline(v);
}

bool k_textautocorrectioncore__textautocorrectionsettings_auto_bold_underline() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AutoBoldUnderline();
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_auto_bold_underline_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsAutoBoldUnderlineImmutable();
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_auto_bold_underline_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AutoBoldUnderlineItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_super_script(bool v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetSuperScript(v);
}

bool k_textautocorrectioncore__textautocorrectionsettings_super_script() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SuperScript();
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_super_script_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsSuperScriptImmutable();
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_super_script_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SuperScriptItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_add_non_breaking_space_in_french(bool v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetAddNonBreakingSpaceInFrench(v);
}

bool k_textautocorrectioncore__textautocorrectionsettings_add_non_breaking_space_in_french() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AddNonBreakingSpaceInFrench();
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_add_non_breaking_space_in_french_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsAddNonBreakingSpaceInFrenchImmutable();
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_add_non_breaking_space_in_french_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_AddNonBreakingSpaceInFrenchItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_replace_double_quotes_by_french_quotes(bool v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetReplaceDoubleQuotesByFrenchQuotes(v);
}

bool k_textautocorrectioncore__textautocorrectionsettings_replace_double_quotes_by_french_quotes() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_ReplaceDoubleQuotesByFrenchQuotes();
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_replace_double_quotes_by_french_quotes_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsReplaceDoubleQuotesByFrenchQuotesImmutable();
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_replace_double_quotes_by_french_quotes_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_ReplaceDoubleQuotesByFrenchQuotesItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_typographic_single_quotes(const char* v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetTypographicSingleQuotes(qstring(v));
}

const char* k_textautocorrectioncore__textautocorrectionsettings_typographic_single_quotes() {
    libqt_string _str = TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_TypographicSingleQuotes();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_typographic_single_quotes_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsTypographicSingleQuotesImmutable();
}

KCoreConfigSkeleton__ItemString* k_textautocorrectioncore__textautocorrectionsettings_typographic_single_quotes_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_TypographicSingleQuotesItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_typographic_double_quotes(const char* v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetTypographicDoubleQuotes(qstring(v));
}

const char* k_textautocorrectioncore__textautocorrectionsettings_typographic_double_quotes() {
    libqt_string _str = TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_TypographicDoubleQuotes();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_typographic_double_quotes_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsTypographicDoubleQuotesImmutable();
}

KCoreConfigSkeleton__ItemString* k_textautocorrectioncore__textautocorrectionsettings_typographic_double_quotes_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_TypographicDoubleQuotesItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_custom_writable_path(const char* v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetCustomWritablePath(qstring(v));
}

const char* k_textautocorrectioncore__textautocorrectionsettings_custom_writable_path() {
    libqt_string _str = TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_CustomWritablePath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_custom_writable_path_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsCustomWritablePathImmutable();
}

KCoreConfigSkeleton__ItemString* k_textautocorrectioncore__textautocorrectionsettings_custom_writable_path_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_CustomWritablePathItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_custom_system_path(const char* v) {
    TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_SetCustomSystemPath(qstring(v));
}

const char* k_textautocorrectioncore__textautocorrectionsettings_custom_system_path() {
    libqt_string _str = TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_CustomSystemPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_custom_system_path_immutable() {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_IsCustomSystemPathImmutable();
}

KCoreConfigSkeleton__ItemString* k_textautocorrectioncore__textautocorrectionsettings_custom_system_path_item(void* self) {
    return TextAutoCorrectionCore__TextAutoCorrectionSettingsBase_CustomSystemPathItem((TextAutoCorrectionCore__TextAutoCorrectionSettingsBase*)self);
}

KConfigSkeleton__ItemColor* k_textautocorrectioncore__textautocorrectionsettings_add_item_color(void* self, const char* name, void* reference) {
    return KConfigSkeleton_AddItemColor((KConfigSkeleton*)self, qstring(name), (QColor*)reference);
}

KConfigSkeleton__ItemFont* k_textautocorrectioncore__textautocorrectionsettings_add_item_font(void* self, const char* name, void* reference) {
    return KConfigSkeleton_AddItemFont((KConfigSkeleton*)self, qstring(name), (QFont*)reference);
}

KConfigSkeleton__ItemColor* k_textautocorrectioncore__textautocorrectionsettings_add_item_color3(void* self, const char* name, void* reference, void* defaultValue) {
    return KConfigSkeleton_AddItemColor3((KConfigSkeleton*)self, qstring(name), (QColor*)reference, (QColor*)defaultValue);
}

KConfigSkeleton__ItemColor* k_textautocorrectioncore__textautocorrectionsettings_add_item_color4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KConfigSkeleton_AddItemColor4((KConfigSkeleton*)self, qstring(name), (QColor*)reference, (QColor*)defaultValue, qstring(key));
}

KConfigSkeleton__ItemFont* k_textautocorrectioncore__textautocorrectionsettings_add_item_font3(void* self, const char* name, void* reference, void* defaultValue) {
    return KConfigSkeleton_AddItemFont3((KConfigSkeleton*)self, qstring(name), (QFont*)reference, (QFont*)defaultValue);
}

KConfigSkeleton__ItemFont* k_textautocorrectioncore__textautocorrectionsettings_add_item_font4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KConfigSkeleton_AddItemFont4((KConfigSkeleton*)self, qstring(name), (QFont*)reference, (QFont*)defaultValue, qstring(key));
}

void k_textautocorrectioncore__textautocorrectionsettings_set_defaults(void* self) {
    KCoreConfigSkeleton_SetDefaults((KCoreConfigSkeleton*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_load(void* self) {
    KCoreConfigSkeleton_Load((KCoreConfigSkeleton*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_read(void* self) {
    KCoreConfigSkeleton_Read((KCoreConfigSkeleton*)self);
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_defaults(void* self) {
    return KCoreConfigSkeleton_IsDefaults((KCoreConfigSkeleton*)self);
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_save_needed(void* self) {
    return KCoreConfigSkeleton_IsSaveNeeded((KCoreConfigSkeleton*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_set_current_group(void* self, const char* group) {
    KCoreConfigSkeleton_SetCurrentGroup((KCoreConfigSkeleton*)self, qstring(group));
}

const char* k_textautocorrectioncore__textautocorrectionsettings_current_group(void* self) {
    libqt_string _str = KCoreConfigSkeleton_CurrentGroup((KCoreConfigSkeleton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectioncore__textautocorrectionsettings_add_item(void* self, void* item) {
    KCoreConfigSkeleton_AddItem((KCoreConfigSkeleton*)self, (KConfigSkeletonItem*)item);
}

KCoreConfigSkeleton__ItemString* k_textautocorrectioncore__textautocorrectionsettings_add_item_string(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemString((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KCoreConfigSkeleton__ItemPassword* k_textautocorrectioncore__textautocorrectionsettings_add_item_password(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemPassword((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KCoreConfigSkeleton__ItemPath* k_textautocorrectioncore__textautocorrectionsettings_add_item_path(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemPath((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KCoreConfigSkeleton__ItemProperty* k_textautocorrectioncore__textautocorrectionsettings_add_item_property(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemProperty((KCoreConfigSkeleton*)self, qstring(name), (QVariant*)reference);
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_add_item_bool(void* self, const char* name, bool* reference) {
    return KCoreConfigSkeleton_AddItemBool((KCoreConfigSkeleton*)self, qstring(name), (bool*)reference);
}

KCoreConfigSkeleton__ItemInt* k_textautocorrectioncore__textautocorrectionsettings_add_item_int(void* self, const char* name, int* reference) {
    return KCoreConfigSkeleton_AddItemInt((KCoreConfigSkeleton*)self, qstring(name), reference);
}

KCoreConfigSkeleton__ItemUInt* k_textautocorrectioncore__textautocorrectionsettings_add_item_u_int(void* self, const char* name, uint32_t* reference) {
    return KCoreConfigSkeleton_AddItemUInt((KCoreConfigSkeleton*)self, qstring(name), reference);
}

KCoreConfigSkeleton__ItemLongLong* k_textautocorrectioncore__textautocorrectionsettings_add_item_long_long(void* self, const char* name, long long* reference) {
    return KCoreConfigSkeleton_AddItemLongLong((KCoreConfigSkeleton*)self, qstring(name), reference);
}

KCoreConfigSkeleton__ItemULongLong* k_textautocorrectioncore__textautocorrectionsettings_add_item_u_long_long(void* self, const char* name, uintptr_t* reference) {
    return KCoreConfigSkeleton_AddItemULongLong((KCoreConfigSkeleton*)self, qstring(name), (unsigned long long*)reference);
}

KCoreConfigSkeleton__ItemDouble* k_textautocorrectioncore__textautocorrectionsettings_add_item_double(void* self, const char* name, double* reference) {
    return KCoreConfigSkeleton_AddItemDouble((KCoreConfigSkeleton*)self, qstring(name), reference);
}

KCoreConfigSkeleton__ItemRect* k_textautocorrectioncore__textautocorrectionsettings_add_item_rect(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemRect((KCoreConfigSkeleton*)self, qstring(name), (QRect*)reference);
}

KCoreConfigSkeleton__ItemRectF* k_textautocorrectioncore__textautocorrectionsettings_add_item_rect_f(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemRectF((KCoreConfigSkeleton*)self, qstring(name), (QRectF*)reference);
}

KCoreConfigSkeleton__ItemPoint* k_textautocorrectioncore__textautocorrectionsettings_add_item_point(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemPoint((KCoreConfigSkeleton*)self, qstring(name), (QPoint*)reference);
}

KCoreConfigSkeleton__ItemPointF* k_textautocorrectioncore__textautocorrectionsettings_add_item_point_f(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemPointF((KCoreConfigSkeleton*)self, qstring(name), (QPointF*)reference);
}

KCoreConfigSkeleton__ItemSize* k_textautocorrectioncore__textautocorrectionsettings_add_item_size(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemSize((KCoreConfigSkeleton*)self, qstring(name), (QSize*)reference);
}

KCoreConfigSkeleton__ItemSizeF* k_textautocorrectioncore__textautocorrectionsettings_add_item_size_f(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemSizeF((KCoreConfigSkeleton*)self, qstring(name), (QSizeF*)reference);
}

KCoreConfigSkeleton__ItemDateTime* k_textautocorrectioncore__textautocorrectionsettings_add_item_date_time(void* self, const char* name, void* reference) {
    return KCoreConfigSkeleton_AddItemDateTime((KCoreConfigSkeleton*)self, qstring(name), (QDateTime*)reference);
}

KCoreConfigSkeleton__ItemStringList* k_textautocorrectioncore__textautocorrectionsettings_add_item_string_list(void* self, const char* name, const char* reference[static 1]) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textautocorrectioncore__textautocorrectionsettings_add_item_string_list\n");
        abort();
    }
    for (size_t i = 0; i < reference_len; ++i) {
        reference_qstr[i] = qstring(reference[i]);
    }
    libqt_list reference_list = qlist(reference_qstr, reference_len);
    KCoreConfigSkeleton__ItemStringList* _out = KCoreConfigSkeleton_AddItemStringList((KCoreConfigSkeleton*)self, qstring(name), reference_list);
    free(reference_qstr);
    return _out;
}

KCoreConfigSkeleton__ItemIntList* k_textautocorrectioncore__textautocorrectionsettings_add_item_int_list(void* self, const char* name, libqt_list /* of int */ reference) {
    return KCoreConfigSkeleton_AddItemIntList((KCoreConfigSkeleton*)self, qstring(name), reference);
}

KConfig* k_textautocorrectioncore__textautocorrectionsettings_config(void* self) {
    return KCoreConfigSkeleton_Config((KCoreConfigSkeleton*)self);
}

const KConfig* k_textautocorrectioncore__textautocorrectionsettings_config2(void* self) {
    return KCoreConfigSkeleton_Config2((KCoreConfigSkeleton*)self);
}

libqt_list /* of KConfigSkeletonItem* */ k_textautocorrectioncore__textautocorrectionsettings_items(void* self) {
    libqt_list _arr = KCoreConfigSkeleton_Items((KCoreConfigSkeleton*)self);
    return _arr;
}

void k_textautocorrectioncore__textautocorrectionsettings_remove_item(void* self, const char* name) {
    KCoreConfigSkeleton_RemoveItem((KCoreConfigSkeleton*)self, qstring(name));
}

void k_textautocorrectioncore__textautocorrectionsettings_clear_items(void* self) {
    KCoreConfigSkeleton_ClearItems((KCoreConfigSkeleton*)self);
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_immutable(void* self, const char* name) {
    return KCoreConfigSkeleton_IsImmutable((KCoreConfigSkeleton*)self, qstring(name));
}

KConfigSkeletonItem* k_textautocorrectioncore__textautocorrectionsettings_find_item(void* self, const char* name) {
    return KCoreConfigSkeleton_FindItem((KCoreConfigSkeleton*)self, qstring(name));
}

bool k_textautocorrectioncore__textautocorrectionsettings_use_defaults(void* self, bool b) {
    return KCoreConfigSkeleton_UseDefaults((KCoreConfigSkeleton*)self, b);
}

bool k_textautocorrectioncore__textautocorrectionsettings_save(void* self) {
    return KCoreConfigSkeleton_Save((KCoreConfigSkeleton*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_config_changed(void* self) {
    KCoreConfigSkeleton_ConfigChanged((KCoreConfigSkeleton*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_on_config_changed(void* self, void (*callback)(void*)) {
    KCoreConfigSkeleton_Connect_ConfigChanged((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

void k_textautocorrectioncore__textautocorrectionsettings_add_item2(void* self, void* item, const char* name) {
    KCoreConfigSkeleton_AddItem2((KCoreConfigSkeleton*)self, (KConfigSkeletonItem*)item, qstring(name));
}

KCoreConfigSkeleton__ItemString* k_textautocorrectioncore__textautocorrectionsettings_add_item_string3(void* self, const char* name, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton_AddItemString3((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue));
}

KCoreConfigSkeleton__ItemString* k_textautocorrectioncore__textautocorrectionsettings_add_item_string4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemString4((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue), qstring(key));
}

KCoreConfigSkeleton__ItemPassword* k_textautocorrectioncore__textautocorrectionsettings_add_item_password3(void* self, const char* name, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton_AddItemPassword3((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue));
}

KCoreConfigSkeleton__ItemPassword* k_textautocorrectioncore__textautocorrectionsettings_add_item_password4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPassword4((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue), qstring(key));
}

KCoreConfigSkeleton__ItemPath* k_textautocorrectioncore__textautocorrectionsettings_add_item_path3(void* self, const char* name, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton_AddItemPath3((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue));
}

KCoreConfigSkeleton__ItemPath* k_textautocorrectioncore__textautocorrectionsettings_add_item_path4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPath4((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue), qstring(key));
}

KCoreConfigSkeleton__ItemProperty* k_textautocorrectioncore__textautocorrectionsettings_add_item_property3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemProperty3((KCoreConfigSkeleton*)self, qstring(name), (QVariant*)reference, (QVariant*)defaultValue);
}

KCoreConfigSkeleton__ItemProperty* k_textautocorrectioncore__textautocorrectionsettings_add_item_property4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemProperty4((KCoreConfigSkeleton*)self, qstring(name), (QVariant*)reference, (QVariant*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_add_item_bool3(void* self, const char* name, bool* reference, bool defaultValue) {
    return KCoreConfigSkeleton_AddItemBool3((KCoreConfigSkeleton*)self, qstring(name), (bool*)reference, defaultValue);
}

KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_add_item_bool4(void* self, const char* name, bool* reference, bool defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemBool4((KCoreConfigSkeleton*)self, qstring(name), (bool*)reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemInt* k_textautocorrectioncore__textautocorrectionsettings_add_item_int3(void* self, const char* name, int* reference, int32_t defaultValue) {
    return KCoreConfigSkeleton_AddItemInt3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemInt* k_textautocorrectioncore__textautocorrectionsettings_add_item_int4(void* self, const char* name, int* reference, int32_t defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemInt4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemUInt* k_textautocorrectioncore__textautocorrectionsettings_add_item_u_int3(void* self, const char* name, uint32_t* reference, uint32_t defaultValue) {
    return KCoreConfigSkeleton_AddItemUInt3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemUInt* k_textautocorrectioncore__textautocorrectionsettings_add_item_u_int4(void* self, const char* name, uint32_t* reference, uint32_t defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemUInt4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemLongLong* k_textautocorrectioncore__textautocorrectionsettings_add_item_long_long3(void* self, const char* name, long long* reference, int64_t defaultValue) {
    return KCoreConfigSkeleton_AddItemLongLong3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemLongLong* k_textautocorrectioncore__textautocorrectionsettings_add_item_long_long4(void* self, const char* name, long long* reference, int64_t defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemLongLong4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemULongLong* k_textautocorrectioncore__textautocorrectionsettings_add_item_u_long_long3(void* self, const char* name, uintptr_t* reference, uint64_t defaultValue) {
    return KCoreConfigSkeleton_AddItemULongLong3((KCoreConfigSkeleton*)self, qstring(name), (unsigned long long*)reference, defaultValue);
}

KCoreConfigSkeleton__ItemULongLong* k_textautocorrectioncore__textautocorrectionsettings_add_item_u_long_long4(void* self, const char* name, uintptr_t* reference, uint64_t defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemULongLong4((KCoreConfigSkeleton*)self, qstring(name), (unsigned long long*)reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemDouble* k_textautocorrectioncore__textautocorrectionsettings_add_item_double3(void* self, const char* name, double* reference, double defaultValue) {
    return KCoreConfigSkeleton_AddItemDouble3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemDouble* k_textautocorrectioncore__textautocorrectionsettings_add_item_double4(void* self, const char* name, double* reference, double defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemDouble4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemRect* k_textautocorrectioncore__textautocorrectionsettings_add_item_rect3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemRect3((KCoreConfigSkeleton*)self, qstring(name), (QRect*)reference, (QRect*)defaultValue);
}

KCoreConfigSkeleton__ItemRect* k_textautocorrectioncore__textautocorrectionsettings_add_item_rect4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemRect4((KCoreConfigSkeleton*)self, qstring(name), (QRect*)reference, (QRect*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemRectF* k_textautocorrectioncore__textautocorrectionsettings_add_item_rect_f3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemRectF3((KCoreConfigSkeleton*)self, qstring(name), (QRectF*)reference, (QRectF*)defaultValue);
}

KCoreConfigSkeleton__ItemRectF* k_textautocorrectioncore__textautocorrectionsettings_add_item_rect_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemRectF4((KCoreConfigSkeleton*)self, qstring(name), (QRectF*)reference, (QRectF*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemPoint* k_textautocorrectioncore__textautocorrectionsettings_add_item_point3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemPoint3((KCoreConfigSkeleton*)self, qstring(name), (QPoint*)reference, (QPoint*)defaultValue);
}

KCoreConfigSkeleton__ItemPoint* k_textautocorrectioncore__textautocorrectionsettings_add_item_point4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPoint4((KCoreConfigSkeleton*)self, qstring(name), (QPoint*)reference, (QPoint*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemPointF* k_textautocorrectioncore__textautocorrectionsettings_add_item_point_f3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemPointF3((KCoreConfigSkeleton*)self, qstring(name), (QPointF*)reference, (QPointF*)defaultValue);
}

KCoreConfigSkeleton__ItemPointF* k_textautocorrectioncore__textautocorrectionsettings_add_item_point_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPointF4((KCoreConfigSkeleton*)self, qstring(name), (QPointF*)reference, (QPointF*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemSize* k_textautocorrectioncore__textautocorrectionsettings_add_item_size3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemSize3((KCoreConfigSkeleton*)self, qstring(name), (QSize*)reference, (QSize*)defaultValue);
}

KCoreConfigSkeleton__ItemSize* k_textautocorrectioncore__textautocorrectionsettings_add_item_size4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemSize4((KCoreConfigSkeleton*)self, qstring(name), (QSize*)reference, (QSize*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemSizeF* k_textautocorrectioncore__textautocorrectionsettings_add_item_size_f3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemSizeF3((KCoreConfigSkeleton*)self, qstring(name), (QSizeF*)reference, (QSizeF*)defaultValue);
}

KCoreConfigSkeleton__ItemSizeF* k_textautocorrectioncore__textautocorrectionsettings_add_item_size_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemSizeF4((KCoreConfigSkeleton*)self, qstring(name), (QSizeF*)reference, (QSizeF*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemDateTime* k_textautocorrectioncore__textautocorrectionsettings_add_item_date_time3(void* self, const char* name, void* reference, void* defaultValue) {
    return KCoreConfigSkeleton_AddItemDateTime3((KCoreConfigSkeleton*)self, qstring(name), (QDateTime*)reference, (QDateTime*)defaultValue);
}

KCoreConfigSkeleton__ItemDateTime* k_textautocorrectioncore__textautocorrectionsettings_add_item_date_time4(void* self, const char* name, void* reference, void* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemDateTime4((KCoreConfigSkeleton*)self, qstring(name), (QDateTime*)reference, (QDateTime*)defaultValue, qstring(key));
}

KCoreConfigSkeleton__ItemStringList* k_textautocorrectioncore__textautocorrectionsettings_add_item_string_list3(void* self, const char* name, const char* reference[static 1], const char* defaultValue[static 1]) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textautocorrectioncore__textautocorrectionsettings_add_item_string_list3\n");
        abort();
    }
    for (size_t i = 0; i < reference_len; ++i) {
        reference_qstr[i] = qstring(reference[i]);
    }
    libqt_list reference_list = qlist(reference_qstr, reference_len);
    size_t defaultValue_len = libqt_strv_length(defaultValue);
    libqt_string* defaultValue_qstr = (libqt_string*)malloc(defaultValue_len * sizeof(libqt_string));
    if (defaultValue_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textautocorrectioncore__textautocorrectionsettings_add_item_string_list3\n");
        abort();
    }
    for (size_t i = 0; i < defaultValue_len; ++i) {
        defaultValue_qstr[i] = qstring(defaultValue[i]);
    }
    libqt_list defaultValue_list = qlist(defaultValue_qstr, defaultValue_len);
    KCoreConfigSkeleton__ItemStringList* _out = KCoreConfigSkeleton_AddItemStringList3((KCoreConfigSkeleton*)self, qstring(name), reference_list, defaultValue_list);
    free(reference_qstr);
    free(defaultValue_qstr);
    return _out;
}

KCoreConfigSkeleton__ItemStringList* k_textautocorrectioncore__textautocorrectionsettings_add_item_string_list4(void* self, const char* name, const char* reference[static 1], const char* defaultValue[static 1], const char* key) {
    size_t reference_len = libqt_strv_length(reference);
    libqt_string* reference_qstr = (libqt_string*)malloc(reference_len * sizeof(libqt_string));
    if (reference_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textautocorrectioncore__textautocorrectionsettings_add_item_string_list4\n");
        abort();
    }
    for (size_t i = 0; i < reference_len; ++i) {
        reference_qstr[i] = qstring(reference[i]);
    }
    libqt_list reference_list = qlist(reference_qstr, reference_len);
    size_t defaultValue_len = libqt_strv_length(defaultValue);
    libqt_string* defaultValue_qstr = (libqt_string*)malloc(defaultValue_len * sizeof(libqt_string));
    if (defaultValue_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textautocorrectioncore__textautocorrectionsettings_add_item_string_list4\n");
        abort();
    }
    for (size_t i = 0; i < defaultValue_len; ++i) {
        defaultValue_qstr[i] = qstring(defaultValue[i]);
    }
    libqt_list defaultValue_list = qlist(defaultValue_qstr, defaultValue_len);
    KCoreConfigSkeleton__ItemStringList* _out = KCoreConfigSkeleton_AddItemStringList4((KCoreConfigSkeleton*)self, qstring(name), reference_list, defaultValue_list, qstring(key));
    free(reference_qstr);
    free(defaultValue_qstr);
    return _out;
}

KCoreConfigSkeleton__ItemIntList* k_textautocorrectioncore__textautocorrectionsettings_add_item_int_list3(void* self, const char* name, libqt_list /* of int */ reference, libqt_list /* of int */ defaultValue) {
    return KCoreConfigSkeleton_AddItemIntList3((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue);
}

KCoreConfigSkeleton__ItemIntList* k_textautocorrectioncore__textautocorrectionsettings_add_item_int_list4(void* self, const char* name, libqt_list /* of int */ reference, libqt_list /* of int */ defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemIntList4((KCoreConfigSkeleton*)self, qstring(name), reference, defaultValue, qstring(key));
}

bool k_textautocorrectioncore__textautocorrectionsettings_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_textautocorrectioncore__textautocorrectionsettings_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_textautocorrectioncore__textautocorrectionsettings_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textautocorrectioncore__textautocorrectionsettings_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textautocorrectioncore__textautocorrectionsettings_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textautocorrectioncore__textautocorrectionsettings_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textautocorrectioncore__textautocorrectionsettings_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textautocorrectioncore__textautocorrectionsettings_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textautocorrectioncore__textautocorrectionsettings_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textautocorrectioncore__textautocorrectionsettings_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textautocorrectioncore__textautocorrectionsettings_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textautocorrectioncore__textautocorrectionsettings_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textautocorrectioncore__textautocorrectionsettings_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textautocorrectioncore__textautocorrectionsettings_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textautocorrectioncore__textautocorrectionsettings_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_textautocorrectioncore__textautocorrectionsettings_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textautocorrectioncore__textautocorrectionsettings_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textautocorrectioncore__textautocorrectionsettings_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textautocorrectioncore__textautocorrectionsettings_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textautocorrectioncore__textautocorrectionsettings_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textautocorrectioncore__textautocorrectionsettings_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textautocorrectioncore__textautocorrectionsettings_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textautocorrectioncore__textautocorrectionsettings_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textautocorrectioncore__textautocorrectionsettings_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textautocorrectioncore__textautocorrectionsettings_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textautocorrectioncore__textautocorrectionsettings_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textautocorrectioncore__textautocorrectionsettings_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textautocorrectioncore__textautocorrectionsettings_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textautocorrectioncore__textautocorrectionsettings_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textautocorrectioncore__textautocorrectionsettings_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_textautocorrectioncore__textautocorrectionsettings_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textautocorrectioncore__textautocorrectionsettings_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textautocorrectioncore__textautocorrectionsettings_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textautocorrectioncore__textautocorrectionsettings_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textautocorrectioncore__textautocorrectionsettings_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textautocorrectioncore__textautocorrectionsettings_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textautocorrectioncore__textautocorrectionsettings_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textautocorrectioncore__textautocorrectionsettings_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textautocorrectioncore__textautocorrectionsettings_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textautocorrectioncore__textautocorrectionsettings_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textautocorrectioncore__textautocorrectionsettings_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textautocorrectioncore__textautocorrectionsettings_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textautocorrectioncore__textautocorrectionsettings_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textautocorrectioncore__textautocorrectionsettings_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textautocorrectioncore__textautocorrectionsettings_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textautocorrectioncore__textautocorrectionsettings_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textautocorrectioncore__textautocorrectionsettings_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_textautocorrectioncore__textautocorrectionsettings_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

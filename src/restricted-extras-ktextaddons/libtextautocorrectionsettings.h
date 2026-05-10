#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBTEXTAUTOCORRECTIONSETTINGS_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBTEXTAUTOCORRECTIONSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettings.html)

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
const QMetaObject* k_textautocorrectioncore__textautocorrectionsettings_meta_object(void* self);

/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param param1 const char*
///
void* k_textautocorrectioncore__textautocorrectionsettings_metacast(void* self, const char* param1);

/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textautocorrectioncore__textautocorrectionsettings_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettings.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textautocorrectioncore__textautocorrectionsettings_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettings.html)
///
TextAutoCorrectionCore__TextAutoCorrectionSettings* k_textautocorrectioncore__textautocorrectionsettings_self();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
void k_textautocorrectioncore__textautocorrectionsettings_request_sync(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettings.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textautocorrectioncore__textautocorrectionsettings_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettings.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textautocorrectioncore__textautocorrectionsettings_tr3(const char* s, const char* c, int n);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v bool
///
void k_textautocorrectioncore__textautocorrectionsettings_set_enabled(bool v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_enabled();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_enabled_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_enabled_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v bool
///
void k_textautocorrectioncore__textautocorrectionsettings_set_uppercase_first_char_of_sentence(bool v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_uppercase_first_char_of_sentence();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_uppercase_first_char_of_sentence_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_uppercase_first_char_of_sentence_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v bool
///
void k_textautocorrectioncore__textautocorrectionsettings_set_fix_two_uppercase_chars(bool v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_fix_two_uppercase_chars();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_fix_two_uppercase_chars_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_fix_two_uppercase_chars_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v bool
///
void k_textautocorrectioncore__textautocorrectionsettings_set_single_spaces(bool v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_single_spaces();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_single_spaces_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_single_spaces_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v bool
///
void k_textautocorrectioncore__textautocorrectionsettings_set_auto_fractions(bool v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_auto_fractions();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_auto_fractions_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_auto_fractions_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v bool
///
void k_textautocorrectioncore__textautocorrectionsettings_set_capitalize_week_days(bool v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_capitalize_week_days();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_capitalize_week_days_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_capitalize_week_days_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v bool
///
void k_textautocorrectioncore__textautocorrectionsettings_set_advanced_autocorrect(bool v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_advanced_autocorrect();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_advanced_autocorrect_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_advanced_autocorrect_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v bool
///
void k_textautocorrectioncore__textautocorrectionsettings_set_replace_double_quotes(bool v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_replace_double_quotes();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_replace_double_quotes_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_replace_double_quotes_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v bool
///
void k_textautocorrectioncore__textautocorrectionsettings_set_replace_single_quotes(bool v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_replace_single_quotes();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_replace_single_quotes_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_replace_single_quotes_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v bool
///
void k_textautocorrectioncore__textautocorrectionsettings_set_auto_format_url(bool v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_auto_format_url();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_auto_format_url_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_auto_format_url_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v bool
///
void k_textautocorrectioncore__textautocorrectionsettings_set_auto_bold_underline(bool v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_auto_bold_underline();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_auto_bold_underline_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_auto_bold_underline_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v bool
///
void k_textautocorrectioncore__textautocorrectionsettings_set_super_script(bool v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_super_script();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_super_script_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_super_script_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v bool
///
void k_textautocorrectioncore__textautocorrectionsettings_set_add_non_breaking_space_in_french(bool v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_add_non_breaking_space_in_french();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_add_non_breaking_space_in_french_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_add_non_breaking_space_in_french_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v bool
///
void k_textautocorrectioncore__textautocorrectionsettings_set_replace_double_quotes_by_french_quotes(bool v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_replace_double_quotes_by_french_quotes();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_replace_double_quotes_by_french_quotes_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_replace_double_quotes_by_french_quotes_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v const char*
///
void k_textautocorrectioncore__textautocorrectionsettings_set_typographic_single_quotes(const char* v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_textautocorrectioncore__textautocorrectionsettings_typographic_single_quotes();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_typographic_single_quotes_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemString* k_textautocorrectioncore__textautocorrectionsettings_typographic_single_quotes_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v const char*
///
void k_textautocorrectioncore__textautocorrectionsettings_set_typographic_double_quotes(const char* v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_textautocorrectioncore__textautocorrectionsettings_typographic_double_quotes();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_typographic_double_quotes_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemString* k_textautocorrectioncore__textautocorrectionsettings_typographic_double_quotes_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v const char*
///
void k_textautocorrectioncore__textautocorrectionsettings_set_custom_writable_path(const char* v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_textautocorrectioncore__textautocorrectionsettings_custom_writable_path();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_custom_writable_path_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemString* k_textautocorrectioncore__textautocorrectionsettings_custom_writable_path_item(void* self);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param v const char*
///
void k_textautocorrectioncore__textautocorrectionsettings_set_custom_system_path(const char* v);

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_textautocorrectioncore__textautocorrectionsettings_custom_system_path();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_custom_system_path_immutable();

/// Inherited from TextAutoCorrectionCore::TextAutoCorrectionSettingsBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1TextAutoCorrectionSettingsBase.html)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KCoreConfigSkeleton__ItemString* k_textautocorrectioncore__textautocorrectionsettings_custom_system_path_item(void* self);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QColor*
///
KConfigSkeleton__ItemColor* k_textautocorrectioncore__textautocorrectionsettings_add_item_color(void* self, const char* name, void* reference);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QFont*
///
KConfigSkeleton__ItemFont* k_textautocorrectioncore__textautocorrectionsettings_add_item_font(void* self, const char* name, void* reference);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QColor*
/// @param defaultValue QColor*
///
KConfigSkeleton__ItemColor* k_textautocorrectioncore__textautocorrectionsettings_add_item_color3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QColor*
/// @param defaultValue QColor*
/// @param key const char*
///
KConfigSkeleton__ItemColor* k_textautocorrectioncore__textautocorrectionsettings_add_item_color4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QFont*
/// @param defaultValue QFont*
///
KConfigSkeleton__ItemFont* k_textautocorrectioncore__textautocorrectionsettings_add_item_font3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QFont*
/// @param defaultValue QFont*
/// @param key const char*
///
KConfigSkeleton__ItemFont* k_textautocorrectioncore__textautocorrectionsettings_add_item_font4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
void k_textautocorrectioncore__textautocorrectionsettings_set_defaults(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#load)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
void k_textautocorrectioncore__textautocorrectionsettings_load(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#read)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
void k_textautocorrectioncore__textautocorrectionsettings_read(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isDefaults)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_defaults(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isSaveNeeded)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_save_needed(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setCurrentGroup)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param group const char*
///
void k_textautocorrectioncore__textautocorrectionsettings_set_current_group(void* self, const char* group);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#currentGroup)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
const char* k_textautocorrectioncore__textautocorrectionsettings_current_group(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param item KConfigSkeletonItem*
///
void k_textautocorrectioncore__textautocorrectionsettings_add_item(void* self, void* item);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference const char*
///
KCoreConfigSkeleton__ItemString* k_textautocorrectioncore__textautocorrectionsettings_add_item_string(void* self, const char* name, const char* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference const char*
///
KCoreConfigSkeleton__ItemPassword* k_textautocorrectioncore__textautocorrectionsettings_add_item_password(void* self, const char* name, const char* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference const char*
///
KCoreConfigSkeleton__ItemPath* k_textautocorrectioncore__textautocorrectionsettings_add_item_path(void* self, const char* name, const char* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QVariant*
///
KCoreConfigSkeleton__ItemProperty* k_textautocorrectioncore__textautocorrectionsettings_add_item_property(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference bool*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_add_item_bool(void* self, const char* name, bool* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference int*
///
KCoreConfigSkeleton__ItemInt* k_textautocorrectioncore__textautocorrectionsettings_add_item_int(void* self, const char* name, int* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference uint32_t*
///
KCoreConfigSkeleton__ItemUInt* k_textautocorrectioncore__textautocorrectionsettings_add_item_u_int(void* self, const char* name, uint32_t* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference long long*
///
KCoreConfigSkeleton__ItemLongLong* k_textautocorrectioncore__textautocorrectionsettings_add_item_long_long(void* self, const char* name, long long* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference uintptr_t*
///
KCoreConfigSkeleton__ItemULongLong* k_textautocorrectioncore__textautocorrectionsettings_add_item_u_long_long(void* self, const char* name, uintptr_t* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference double*
///
KCoreConfigSkeleton__ItemDouble* k_textautocorrectioncore__textautocorrectionsettings_add_item_double(void* self, const char* name, double* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QRect*
///
KCoreConfigSkeleton__ItemRect* k_textautocorrectioncore__textautocorrectionsettings_add_item_rect(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QRectF*
///
KCoreConfigSkeleton__ItemRectF* k_textautocorrectioncore__textautocorrectionsettings_add_item_rect_f(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QPoint*
///
KCoreConfigSkeleton__ItemPoint* k_textautocorrectioncore__textautocorrectionsettings_add_item_point(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QPointF*
///
KCoreConfigSkeleton__ItemPointF* k_textautocorrectioncore__textautocorrectionsettings_add_item_point_f(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QSize*
///
KCoreConfigSkeleton__ItemSize* k_textautocorrectioncore__textautocorrectionsettings_add_item_size(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QSizeF*
///
KCoreConfigSkeleton__ItemSizeF* k_textautocorrectioncore__textautocorrectionsettings_add_item_size_f(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QDateTime*
///
KCoreConfigSkeleton__ItemDateTime* k_textautocorrectioncore__textautocorrectionsettings_add_item_date_time(void* self, const char* name, void* reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference const char**
///
KCoreConfigSkeleton__ItemStringList* k_textautocorrectioncore__textautocorrectionsettings_add_item_string_list(void* self, const char* name, const char* reference[static 1]);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference libqt_list of int
///
KCoreConfigSkeleton__ItemIntList* k_textautocorrectioncore__textautocorrectionsettings_add_item_int_list(void* self, const char* name, libqt_list reference);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
KConfig* k_textautocorrectioncore__textautocorrectionsettings_config(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
const KConfig* k_textautocorrectioncore__textautocorrectionsettings_config2(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#items)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
/// @return libqt_list of KConfigSkeletonItem*
///
libqt_list k_textautocorrectioncore__textautocorrectionsettings_items(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#removeItem)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
///
void k_textautocorrectioncore__textautocorrectionsettings_remove_item(void* self, const char* name);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#clearItems)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
void k_textautocorrectioncore__textautocorrectionsettings_clear_items(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isImmutable)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_immutable(void* self, const char* name);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#findItem)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
///
KConfigSkeletonItem* k_textautocorrectioncore__textautocorrectionsettings_find_item(void* self, const char* name);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param b bool
///
bool k_textautocorrectioncore__textautocorrectionsettings_use_defaults(void* self, bool b);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#save)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
bool k_textautocorrectioncore__textautocorrectionsettings_save(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
void k_textautocorrectioncore__textautocorrectionsettings_config_changed(void* self);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param callback void func(TextAutoCorrectionCore__TextAutoCorrectionSettings* self)
///
void k_textautocorrectioncore__textautocorrectionsettings_on_config_changed(void* self, void (*callback)(void*));

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param item KConfigSkeletonItem*
/// @param name const char*
///
void k_textautocorrectioncore__textautocorrectionsettings_add_item2(void* self, void* item, const char* name);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
///
KCoreConfigSkeleton__ItemString* k_textautocorrectioncore__textautocorrectionsettings_add_item_string3(void* self, const char* name, const char* reference, const char* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param key const char*
///
KCoreConfigSkeleton__ItemString* k_textautocorrectioncore__textautocorrectionsettings_add_item_string4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
///
KCoreConfigSkeleton__ItemPassword* k_textautocorrectioncore__textautocorrectionsettings_add_item_password3(void* self, const char* name, const char* reference, const char* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param key const char*
///
KCoreConfigSkeleton__ItemPassword* k_textautocorrectioncore__textautocorrectionsettings_add_item_password4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
///
KCoreConfigSkeleton__ItemPath* k_textautocorrectioncore__textautocorrectionsettings_add_item_path3(void* self, const char* name, const char* reference, const char* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference const char*
/// @param defaultValue const char*
/// @param key const char*
///
KCoreConfigSkeleton__ItemPath* k_textautocorrectioncore__textautocorrectionsettings_add_item_path4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QVariant*
/// @param defaultValue QVariant*
///
KCoreConfigSkeleton__ItemProperty* k_textautocorrectioncore__textautocorrectionsettings_add_item_property3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QVariant*
/// @param defaultValue QVariant*
/// @param key const char*
///
KCoreConfigSkeleton__ItemProperty* k_textautocorrectioncore__textautocorrectionsettings_add_item_property4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference bool*
/// @param defaultValue bool
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_add_item_bool3(void* self, const char* name, bool* reference, bool defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference bool*
/// @param defaultValue bool
/// @param key const char*
///
KCoreConfigSkeleton__ItemBool* k_textautocorrectioncore__textautocorrectionsettings_add_item_bool4(void* self, const char* name, bool* reference, bool defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference int*
/// @param defaultValue int32_t
///
KCoreConfigSkeleton__ItemInt* k_textautocorrectioncore__textautocorrectionsettings_add_item_int3(void* self, const char* name, int* reference, int32_t defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference int*
/// @param defaultValue int32_t
/// @param key const char*
///
KCoreConfigSkeleton__ItemInt* k_textautocorrectioncore__textautocorrectionsettings_add_item_int4(void* self, const char* name, int* reference, int32_t defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference uint32_t*
/// @param defaultValue uint32_t
///
KCoreConfigSkeleton__ItemUInt* k_textautocorrectioncore__textautocorrectionsettings_add_item_u_int3(void* self, const char* name, uint32_t* reference, uint32_t defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference uint32_t*
/// @param defaultValue uint32_t
/// @param key const char*
///
KCoreConfigSkeleton__ItemUInt* k_textautocorrectioncore__textautocorrectionsettings_add_item_u_int4(void* self, const char* name, uint32_t* reference, uint32_t defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference long long*
/// @param defaultValue int64_t
///
KCoreConfigSkeleton__ItemLongLong* k_textautocorrectioncore__textautocorrectionsettings_add_item_long_long3(void* self, const char* name, long long* reference, int64_t defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference long long*
/// @param defaultValue int64_t
/// @param key const char*
///
KCoreConfigSkeleton__ItemLongLong* k_textautocorrectioncore__textautocorrectionsettings_add_item_long_long4(void* self, const char* name, long long* reference, int64_t defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference uintptr_t*
/// @param defaultValue uint64_t
///
KCoreConfigSkeleton__ItemULongLong* k_textautocorrectioncore__textautocorrectionsettings_add_item_u_long_long3(void* self, const char* name, uintptr_t* reference, uint64_t defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference uintptr_t*
/// @param defaultValue uint64_t
/// @param key const char*
///
KCoreConfigSkeleton__ItemULongLong* k_textautocorrectioncore__textautocorrectionsettings_add_item_u_long_long4(void* self, const char* name, uintptr_t* reference, uint64_t defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference double*
/// @param defaultValue double
///
KCoreConfigSkeleton__ItemDouble* k_textautocorrectioncore__textautocorrectionsettings_add_item_double3(void* self, const char* name, double* reference, double defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference double*
/// @param defaultValue double
/// @param key const char*
///
KCoreConfigSkeleton__ItemDouble* k_textautocorrectioncore__textautocorrectionsettings_add_item_double4(void* self, const char* name, double* reference, double defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QRect*
/// @param defaultValue QRect*
///
KCoreConfigSkeleton__ItemRect* k_textautocorrectioncore__textautocorrectionsettings_add_item_rect3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QRect*
/// @param defaultValue QRect*
/// @param key const char*
///
KCoreConfigSkeleton__ItemRect* k_textautocorrectioncore__textautocorrectionsettings_add_item_rect4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QRectF*
/// @param defaultValue QRectF*
///
KCoreConfigSkeleton__ItemRectF* k_textautocorrectioncore__textautocorrectionsettings_add_item_rect_f3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QRectF*
/// @param defaultValue QRectF*
/// @param key const char*
///
KCoreConfigSkeleton__ItemRectF* k_textautocorrectioncore__textautocorrectionsettings_add_item_rect_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QPoint*
/// @param defaultValue QPoint*
///
KCoreConfigSkeleton__ItemPoint* k_textautocorrectioncore__textautocorrectionsettings_add_item_point3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QPoint*
/// @param defaultValue QPoint*
/// @param key const char*
///
KCoreConfigSkeleton__ItemPoint* k_textautocorrectioncore__textautocorrectionsettings_add_item_point4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QPointF*
/// @param defaultValue QPointF*
///
KCoreConfigSkeleton__ItemPointF* k_textautocorrectioncore__textautocorrectionsettings_add_item_point_f3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QPointF*
/// @param defaultValue QPointF*
/// @param key const char*
///
KCoreConfigSkeleton__ItemPointF* k_textautocorrectioncore__textautocorrectionsettings_add_item_point_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QSize*
/// @param defaultValue QSize*
///
KCoreConfigSkeleton__ItemSize* k_textautocorrectioncore__textautocorrectionsettings_add_item_size3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QSize*
/// @param defaultValue QSize*
/// @param key const char*
///
KCoreConfigSkeleton__ItemSize* k_textautocorrectioncore__textautocorrectionsettings_add_item_size4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QSizeF*
/// @param defaultValue QSizeF*
///
KCoreConfigSkeleton__ItemSizeF* k_textautocorrectioncore__textautocorrectionsettings_add_item_size_f3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QSizeF*
/// @param defaultValue QSizeF*
/// @param key const char*
///
KCoreConfigSkeleton__ItemSizeF* k_textautocorrectioncore__textautocorrectionsettings_add_item_size_f4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QDateTime*
/// @param defaultValue QDateTime*
///
KCoreConfigSkeleton__ItemDateTime* k_textautocorrectioncore__textautocorrectionsettings_add_item_date_time3(void* self, const char* name, void* reference, void* defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference QDateTime*
/// @param defaultValue QDateTime*
/// @param key const char*
///
KCoreConfigSkeleton__ItemDateTime* k_textautocorrectioncore__textautocorrectionsettings_add_item_date_time4(void* self, const char* name, void* reference, void* defaultValue, const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference const char**
/// @param defaultValue const char**
///
KCoreConfigSkeleton__ItemStringList* k_textautocorrectioncore__textautocorrectionsettings_add_item_string_list3(void* self, const char* name, const char* reference[static 1], const char* defaultValue[static 1]);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference const char**
/// @param defaultValue const char**
/// @param key const char*
///
KCoreConfigSkeleton__ItemStringList* k_textautocorrectioncore__textautocorrectionsettings_add_item_string_list4(void* self, const char* name, const char* reference[static 1], const char* defaultValue[static 1], const char* key);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference libqt_list of int
/// @param defaultValue libqt_list of int
///
KCoreConfigSkeleton__ItemIntList* k_textautocorrectioncore__textautocorrectionsettings_add_item_int_list3(void* self, const char* name, libqt_list reference, libqt_list defaultValue);

/// Inherited from KCoreConfigSkeleton
///
/// [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param reference libqt_list of int
/// @param defaultValue libqt_list of int
/// @param key const char*
///
KCoreConfigSkeleton__ItemIntList* k_textautocorrectioncore__textautocorrectionsettings_add_item_int_list4(void* self, const char* name, libqt_list reference, libqt_list defaultValue, const char* key);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param event QEvent*
///
bool k_textautocorrectioncore__textautocorrectionsettings_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textautocorrectioncore__textautocorrectionsettings_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
const char* k_textautocorrectioncore__textautocorrectionsettings_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
///
void k_textautocorrectioncore__textautocorrectionsettings_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
bool k_textautocorrectioncore__textautocorrectionsettings_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
bool k_textautocorrectioncore__textautocorrectionsettings_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param b bool
///
bool k_textautocorrectioncore__textautocorrectionsettings_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
QThread* k_textautocorrectioncore__textautocorrectionsettings_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param thread QThread*
///
bool k_textautocorrectioncore__textautocorrectionsettings_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param interval int
///
int32_t k_textautocorrectioncore__textautocorrectionsettings_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param time int64_t of nanoseconds
///
int32_t k_textautocorrectioncore__textautocorrectionsettings_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param id int
///
void k_textautocorrectioncore__textautocorrectionsettings_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param id enum Qt__TimerId
///
void k_textautocorrectioncore__textautocorrectionsettings_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
/// @return libqt_list of QObject*
///
libqt_list k_textautocorrectioncore__textautocorrectionsettings_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param parent QObject*
///
void k_textautocorrectioncore__textautocorrectionsettings_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param filterObj QObject*
///
void k_textautocorrectioncore__textautocorrectionsettings_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param obj QObject*
///
void k_textautocorrectioncore__textautocorrectionsettings_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textautocorrectioncore__textautocorrectionsettings_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textautocorrectioncore__textautocorrectionsettings_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textautocorrectioncore__textautocorrectionsettings_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textautocorrectioncore__textautocorrectionsettings_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textautocorrectioncore__textautocorrectionsettings_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
bool k_textautocorrectioncore__textautocorrectionsettings_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param receiver QObject*
///
bool k_textautocorrectioncore__textautocorrectionsettings_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textautocorrectioncore__textautocorrectionsettings_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
void k_textautocorrectioncore__textautocorrectionsettings_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
void k_textautocorrectioncore__textautocorrectionsettings_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
/// @param value QVariant*
///
bool k_textautocorrectioncore__textautocorrectionsettings_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param name const char*
///
QVariant* k_textautocorrectioncore__textautocorrectionsettings_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
const char** k_textautocorrectioncore__textautocorrectionsettings_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
QBindingStorage* k_textautocorrectioncore__textautocorrectionsettings_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
const QBindingStorage* k_textautocorrectioncore__textautocorrectionsettings_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
void k_textautocorrectioncore__textautocorrectionsettings_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param callback void func(TextAutoCorrectionCore__TextAutoCorrectionSettings* self)
///
void k_textautocorrectioncore__textautocorrectionsettings_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
QObject* k_textautocorrectioncore__textautocorrectionsettings_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param classname const char*
///
bool k_textautocorrectioncore__textautocorrectionsettings_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
///
void k_textautocorrectioncore__textautocorrectionsettings_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textautocorrectioncore__textautocorrectionsettings_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textautocorrectioncore__textautocorrectionsettings_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_textautocorrectioncore__textautocorrectionsettings_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textautocorrectioncore__textautocorrectionsettings_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textautocorrectioncore__textautocorrectionsettings_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param signal const char*
///
bool k_textautocorrectioncore__textautocorrectionsettings_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textautocorrectioncore__textautocorrectionsettings_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textautocorrectioncore__textautocorrectionsettings_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textautocorrectioncore__textautocorrectionsettings_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param param1 QObject*
///
void k_textautocorrectioncore__textautocorrectionsettings_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param callback void func(TextAutoCorrectionCore__TextAutoCorrectionSettings* self, QObject* param1)
///
void k_textautocorrectioncore__textautocorrectionsettings_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextAutoCorrectionCore__TextAutoCorrectionSettings*
/// @param callback void func(TextAutoCorrectionCore__TextAutoCorrectionSettings* self, const char* objectName)
///
void k_textautocorrectioncore__textautocorrectionsettings_on_object_name_changed(void* self, void (*callback)(void*, const char*));
#endif

#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBAUTOCORRECTIONSETTINGS_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBAUTOCORRECTIONSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)

/// k_textautocorrectioncore__autocorrectionsettings_new constructs a new TextAutoCorrectionCore::AutoCorrectionSettings object.
///
TextAutoCorrectionCore__AutoCorrectionSettings* k_textautocorrectioncore__autocorrectionsettings_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_enabled_auto_correction(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_uppercase_first_char_of_sentence(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_fix_two_uppercase_chars(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_single_spaces(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_auto_fractions(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_capitalize_week_days(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_replace_double_quotes(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_replace_single_quotes(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_advanced_autocorrect(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_auto_format_url(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_auto_bold_underline(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_super_script(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_add_non_breaking_space(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_replace_double_quotes_by_french_quotes(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionsettings_typographic_single_quotes(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionsettings_typographic_double_quotes(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param singleQuote TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
///
void k_textautocorrectioncore__autocorrectionsettings_set_typographic_single_quotes(void* self, void* singleQuote);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param doubleQuote TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
///
void k_textautocorrectioncore__autocorrectionsettings_set_typographic_double_quotes(void* self, void* doubleQuote);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param b bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_auto_format_url(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param b bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_auto_bold_underline(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param b bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_super_script(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param b bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_add_non_breaking_space(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param b bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_capitalize_week_days(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param b bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_replace_double_quotes(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param b bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_replace_single_quotes(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param b bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_advanced_autocorrect(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param b bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_enabled_auto_correction(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param b bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_replace_double_quotes_by_french_quotes(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
void k_textautocorrectioncore__autocorrectionsettings_read_config(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
void k_textautocorrectioncore__autocorrectionsettings_write_config(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param newAutoFractions bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_auto_fractions(void* self, bool newAutoFractions);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param newSingleSpaces bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_single_spaces(void* self, bool newSingleSpaces);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param newFixTwoUppercaseChars bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_fix_two_uppercase_chars(void* self, bool newFixTwoUppercaseChars);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param newUppercaseFirstCharOfSentence bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_uppercase_first_char_of_sentence(void* self, bool newUppercaseFirstCharOfSentence);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param exceptions libqt_list /* set of const char* */ exceptions
///
void k_textautocorrectioncore__autocorrectionsettings_set_upper_case_exceptions(void* self, libqt_list exceptions);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param exceptions libqt_list /* set of const char* */ exceptions
///
void k_textautocorrectioncore__autocorrectionsettings_set_two_upper_letter_exceptions(void* self, libqt_list exceptions);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
/// @return libqt_list set of const char*
///
libqt_list k_textautocorrectioncore__autocorrectionsettings_upper_case_exceptions(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
/// @return libqt_list set of const char*
///
libqt_list k_textautocorrectioncore__autocorrectionsettings_two_upper_letter_exceptions(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param lang const char*
///
void k_textautocorrectioncore__autocorrectionsettings_set_language(void* self, const char* lang);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
const char* k_textautocorrectioncore__autocorrectionsettings_language(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
bool k_textautocorrectioncore__autocorrectionsettings_is_french_language(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param entries libqt_map of const char* to const char*
///
void k_textautocorrectioncore__autocorrectionsettings_set_autocorrect_entries(void* self, libqt_map entries);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_textautocorrectioncore__autocorrectionsettings_autocorrect_entries(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param currentWord const char*
/// @param replaceWord const char*
///
bool k_textautocorrectioncore__autocorrectionsettings_add_auto_correct(void* self, const char* currentWord, const char* replaceWord);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
QChar* k_textautocorrectioncore__autocorrectionsettings_non_breaking_space(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param newNonBreakingSpace QChar*
///
void k_textautocorrectioncore__autocorrectionsettings_set_non_breaking_space(void* self, void* newNonBreakingSpace);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_textautocorrectioncore__autocorrectionsettings_super_script_entries(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param newSuperScriptEntries libqt_map of const char* to const char*
///
void k_textautocorrectioncore__autocorrectionsettings_set_super_script_entries(void* self, libqt_map newSuperScriptEntries);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
void k_textautocorrectioncore__autocorrectionsettings_write_auto_correction_file(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
int32_t k_textautocorrectioncore__autocorrectionsettings_max_find_string_length(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
int32_t k_textautocorrectioncore__autocorrectionsettings_min_find_string_length(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param localFileName const char*
/// @param fname const char*
///
void k_textautocorrectioncore__autocorrectionsettings_load_local_file_name(void* self, const char* localFileName, const char* fname);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param fname const char*
///
void k_textautocorrectioncore__autocorrectionsettings_load_global_file_name(void* self, const char* fname);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionsettings_double_french_quotes(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param newDoubleFrenchQuotes TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
///
void k_textautocorrectioncore__autocorrectionsettings_set_double_french_quotes(void* self, void* newDoubleFrenchQuotes);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
const char* k_textautocorrectioncore__autocorrectionsettings_custom_writable_path(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param path const char*
///
void k_textautocorrectioncore__autocorrectionsettings_set_custom_writable_path(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
const char* k_textautocorrectioncore__autocorrectionsettings_custom_system_path(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param path const char*
///
void k_textautocorrectioncore__autocorrectionsettings_set_custom_system_path(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param lang const char*
/// @param forceGlobal bool
///
void k_textautocorrectioncore__autocorrectionsettings_set_language2(void* self, const char* lang, bool forceGlobal);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
/// @param filename const char*
///
void k_textautocorrectioncore__autocorrectionsettings_write_auto_correction_file1(void* self, const char* filename);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionSettings.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextAutoCorrectionCore__AutoCorrectionSettings*
///
void k_textautocorrectioncore__autocorrectionsettings_delete(void* self);

#endif

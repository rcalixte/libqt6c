#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBAUTOCORRECTIONUTILS_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBAUTOCORRECTIONUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// k_textautocorrectioncore__autocorrectionutils__typographicquotes_new constructs a new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes object.
///
/// @param other TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionutils__typographicquotes_new(void* other);

/// k_textautocorrectioncore__autocorrectionutils__typographicquotes_new2 constructs a new TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes object and invalidates the source TextAutoCorrectionCore::AutoCorrectionUtils::TypographicQuotes object.
///
/// @param other TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionutils__typographicquotes_new2(void* other);

/// k_textautocorrectioncore__autocorrectionutils__typographicquotes_copy_assign shallow copies `other` into `self`.
///
/// @param self TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
/// @param other TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
///
void k_textautocorrectioncore__autocorrectionutils__typographicquotes_copy_assign(void* self, void* other);

/// k_textautocorrectioncore__autocorrectionutils__typographicquotes_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
/// @param other TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
///
void k_textautocorrectioncore__autocorrectionutils__typographicquotes_move_assign(void* self, void* other);

///
/// @param self TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
///
QChar* k_textautocorrectioncore__autocorrectionutils__typographicquotes_begin(void* self);

///
/// @param self TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
/// @param begin QChar*
///
void k_textautocorrectioncore__autocorrectionutils__typographicquotes_set_begin(void* self, void* begin);

///
/// @param self TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
///
QChar* k_textautocorrectioncore__autocorrectionutils__typographicquotes_end(void* self);

///
/// @param self TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
/// @param end QChar*
///
void k_textautocorrectioncore__autocorrectionutils__typographicquotes_set_end(void* self, void* end);

///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
///
const char* k_textautocorrectioncore__autocorrectionutils__typographicquotes_to_string(void* self);

///
/// @param self TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
///
bool k_textautocorrectioncore__autocorrectionutils__typographicquotes_is_empty(void* self);

///
/// @param str const char*
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionutils__typographicquotes_from_string(const char* str);

/// Delete this object from C++ memory.
///
/// @param self TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*
///
void k_textautocorrectioncore__autocorrectionutils__typographicquotes_delete(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionutils_typographic_default_single_quotes();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionutils_typographic_default_double_quotes();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionutils_typographic_default_french_quotes();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_textautocorrectioncore__autocorrectionutils_libreoffice_file(const char* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_textautocorrectioncore__autocorrectionutils_libre_office_auto_correction_path();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_textautocorrectioncore__autocorrectionutils_search_auto_correct_libre_office_files();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char**
///
const char** k_textautocorrectioncore__autocorrectionutils_auto_correct_libre_office_language_to_string(const char* param1[static 1]);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_textautocorrectioncore__autocorrectionutils_libre_office_writable_local_auto_correction_path();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
/// @param param2 const char*
/// @param param3 const char*
///
const char* k_textautocorrectioncore__autocorrectionutils_contains_auto_correction_file(const char* param1, const char* param2, const char* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_textautocorrectioncore__autocorrectionutils_libre_office_system_path();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_textautocorrectioncore__autocorrectionutils_libre_office_local_path();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrectionUtils.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char*
///
const char** k_textautocorrectioncore__autocorrectionutils_words_from_sentence(const char* param1);
#endif

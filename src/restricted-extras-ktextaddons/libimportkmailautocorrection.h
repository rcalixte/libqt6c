#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBIMPORTKMAILAUTOCORRECTION_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBIMPORTKMAILAUTOCORRECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportKMailAutocorrection.html)

/// k_textautocorrectioncore__importkmailautocorrection_new constructs a new TextAutoCorrectionCore::ImportKMailAutocorrection object.
///
TextAutoCorrectionCore__ImportKMailAutocorrection* k_textautocorrectioncore__importkmailautocorrection_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportKMailAutocorrection.html)

/// k_textautocorrectioncore__importkmailautocorrection_new2 constructs a new TextAutoCorrectionCore::ImportKMailAutocorrection object.
///
/// @param param1 TextAutoCorrectionCore__ImportKMailAutocorrection*
///
TextAutoCorrectionCore__ImportKMailAutocorrection* k_textautocorrectioncore__importkmailautocorrection_new2(void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportKMailAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportKMailAutocorrection*
/// @param fileName const char*
/// @param errorMessage const char*
/// @param loadAttribute enum TextAutoCorrectionCore__ImportAbstractAutocorrection__LoadAttribute
///
bool k_textautocorrectioncore__importkmailautocorrection_import(void* self, const char* fileName, const char* errorMessage, int32_t loadAttribute);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportKMailAutocorrection.html)
///
/// Allows for overriding the related default method
///
/// @param self TextAutoCorrectionCore__ImportKMailAutocorrection*
/// @param callback bool func(TextAutoCorrectionCore__ImportKMailAutocorrection* self, const char* fileName, const char* errorMessage, enum TextAutoCorrectionCore__ImportAbstractAutocorrection__LoadAttribute loadAttribute)
///
void k_textautocorrectioncore__importkmailautocorrection_on_import(void* self, bool (*callback)(void*, const char*, const char*, int32_t));

/// @warning DEPRECATED: Use `k_textautocorrectioncore__importkmailautocorrection_super_import` instead
///
#define k_textautocorrectioncore__importkmailautocorrection_qbase_import k_textautocorrectioncore__importkmailautocorrection_super_import

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportKMailAutocorrection.html)
///
/// Base class method implementation
///
/// @param self TextAutoCorrectionCore__ImportKMailAutocorrection*
/// @param fileName const char*
/// @param errorMessage const char*
/// @param loadAttribute enum TextAutoCorrectionCore__ImportAbstractAutocorrection__LoadAttribute
///
bool k_textautocorrectioncore__importkmailautocorrection_super_import(void* self, const char* fileName, const char* errorMessage, int32_t loadAttribute);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportKMailAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportKMailAutocorrection*
/// @param param1 TextAutoCorrectionCore__ImportKMailAutocorrection*
///
void k_textautocorrectioncore__importkmailautocorrection_operator_assign(void* self, void* param1);

/// Inherited from TextAutoCorrectionCore::ImportAbstractAutocorrection
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportKMailAutocorrection*
///
/// @return libqt_list set of const char*
///
libqt_list k_textautocorrectioncore__importkmailautocorrection_upper_case_exceptions(void* self);

/// Inherited from TextAutoCorrectionCore::ImportAbstractAutocorrection
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportKMailAutocorrection*
///
/// @return libqt_list set of const char*
///
libqt_list k_textautocorrectioncore__importkmailautocorrection_two_upper_letter_exceptions(void* self);

/// Inherited from TextAutoCorrectionCore::ImportAbstractAutocorrection
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
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
/// @param self TextAutoCorrectionCore__ImportKMailAutocorrection*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_textautocorrectioncore__importkmailautocorrection_autocorrect_entries(void* self);

/// Inherited from TextAutoCorrectionCore::ImportAbstractAutocorrection
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
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
/// @param self TextAutoCorrectionCore__ImportKMailAutocorrection*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_textautocorrectioncore__importkmailautocorrection_super_script_entries(void* self);

/// Inherited from TextAutoCorrectionCore::ImportAbstractAutocorrection
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportKMailAutocorrection*
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__importkmailautocorrection_typographic_single_quotes(void* self);

/// Inherited from TextAutoCorrectionCore::ImportAbstractAutocorrection
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportKMailAutocorrection*
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__importkmailautocorrection_typographic_double_quotes(void* self);

/// Inherited from TextAutoCorrectionCore::ImportAbstractAutocorrection
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportKMailAutocorrection*
///
int32_t k_textautocorrectioncore__importkmailautocorrection_max_find_string_lenght(void* self);

/// Inherited from TextAutoCorrectionCore::ImportAbstractAutocorrection
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportKMailAutocorrection*
///
int32_t k_textautocorrectioncore__importkmailautocorrection_min_find_string_lenght(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportKMailAutocorrection.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextAutoCorrectionCore__ImportKMailAutocorrection*
///
void k_textautocorrectioncore__importkmailautocorrection_delete(void* self);

#endif

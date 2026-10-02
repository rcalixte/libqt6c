#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBIMPORTABSTRACTAUTOCORRECTION_H
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBIMPORTABSTRACTAUTOCORRECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)

/// k_textautocorrectioncore__importabstractautocorrection_new constructs a new TextAutoCorrectionCore::ImportAbstractAutocorrection object.
///
TextAutoCorrectionCore__ImportAbstractAutocorrection* k_textautocorrectioncore__importabstractautocorrection_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)

/// k_textautocorrectioncore__importabstractautocorrection_new2 constructs a new TextAutoCorrectionCore::ImportAbstractAutocorrection object.
///
/// @param param1 TextAutoCorrectionCore__ImportAbstractAutocorrection*
///
TextAutoCorrectionCore__ImportAbstractAutocorrection* k_textautocorrectioncore__importabstractautocorrection_new2(const void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @warning This method must be implemented with `k_textautocorrectioncore__importabstractautocorrection_on_import` before it can be called.
///
/// @param self TextAutoCorrectionCore__ImportAbstractAutocorrection*
/// @param fileName const char*
/// @param errorMessage const char*
/// @param loadAttribute enum TextAutoCorrectionCore__ImportAbstractAutocorrection__LoadAttribute
///
bool k_textautocorrectioncore__importabstractautocorrection_import(void* self, const char* fileName, const char* errorMessage, int32_t loadAttribute);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// Allows for overriding the related default method
///
/// @param self TextAutoCorrectionCore__ImportAbstractAutocorrection*
/// @param callback bool func(TextAutoCorrectionCore__ImportAbstractAutocorrection* self, const char* fileName, const char* errorMessage, enum TextAutoCorrectionCore__ImportAbstractAutocorrection__LoadAttribute loadAttribute)
///
void k_textautocorrectioncore__importabstractautocorrection_on_import(void* self, bool (*callback)(void*, const char*, const char*, int32_t));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self const TextAutoCorrectionCore__ImportAbstractAutocorrection*
///
/// @return libqt_list set of const char*
///
libqt_list k_textautocorrectioncore__importabstractautocorrection_upper_case_exceptions(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self const TextAutoCorrectionCore__ImportAbstractAutocorrection*
///
/// @return libqt_list set of const char*
///
libqt_list k_textautocorrectioncore__importabstractautocorrection_two_upper_letter_exceptions(const void* self);

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
/// @param self const TextAutoCorrectionCore__ImportAbstractAutocorrection*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_textautocorrectioncore__importabstractautocorrection_autocorrect_entries(const void* self);

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
/// @param self const TextAutoCorrectionCore__ImportAbstractAutocorrection*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_textautocorrectioncore__importabstractautocorrection_super_script_entries(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self const TextAutoCorrectionCore__ImportAbstractAutocorrection*
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__importabstractautocorrection_typographic_single_quotes(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self const TextAutoCorrectionCore__ImportAbstractAutocorrection*
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__importabstractautocorrection_typographic_double_quotes(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self const TextAutoCorrectionCore__ImportAbstractAutocorrection*
///
int32_t k_textautocorrectioncore__importabstractautocorrection_max_find_string_lenght(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self const TextAutoCorrectionCore__ImportAbstractAutocorrection*
///
int32_t k_textautocorrectioncore__importabstractautocorrection_min_find_string_lenght(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextAutoCorrectionCore__ImportAbstractAutocorrection*
///
void k_textautocorrectioncore__importabstractautocorrection_delete(void* self);

typedef enum {
    TEXTAUTOCORRECTIONCORE_IMPORTABSTRACTAUTOCORRECTION_LOADATTRIBUTE_ALL = 0,
    TEXTAUTOCORRECTIONCORE_IMPORTABSTRACTAUTOCORRECTION_LOADATTRIBUTE_SUPERSCRIPT = 1
} TextAutoCorrectionCore__ImportAbstractAutocorrection__LoadAttribute;

#endif

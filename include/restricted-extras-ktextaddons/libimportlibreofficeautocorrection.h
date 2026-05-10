#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBIMPORTLIBREOFFICEAUTOCORRECTION_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBIMPORTLIBREOFFICEAUTOCORRECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportLibreOfficeAutocorrection.html)

/// k_textautocorrectioncore__importlibreofficeautocorrection_new constructs a new TextAutoCorrectionCore::ImportLibreOfficeAutocorrection object.
///
TextAutoCorrectionCore__ImportLibreOfficeAutocorrection* k_textautocorrectioncore__importlibreofficeautocorrection_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportLibreOfficeAutocorrection.html)

/// k_textautocorrectioncore__importlibreofficeautocorrection_new2 constructs a new TextAutoCorrectionCore::ImportLibreOfficeAutocorrection object.
///
/// @param param1 TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*
///
TextAutoCorrectionCore__ImportLibreOfficeAutocorrection* k_textautocorrectioncore__importlibreofficeautocorrection_new2(void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportLibreOfficeAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*
/// @param fileName const char*
/// @param errorMessage const char*
/// @param loadAttribute enum TextAutoCorrectionCore__ImportAbstractAutocorrection__LoadAttribute
///
bool k_textautocorrectioncore__importlibreofficeautocorrection_import(void* self, const char* fileName, const char* errorMessage, int32_t loadAttribute);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportLibreOfficeAutocorrection.html)
///
/// Allows for overriding the related default method
///
/// @param self TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*
/// @param callback bool func(TextAutoCorrectionCore__ImportLibreOfficeAutocorrection* self, const char* fileName, const char* errorMessage, enum TextAutoCorrectionCore__ImportAbstractAutocorrection__LoadAttribute loadAttribute)
///
void k_textautocorrectioncore__importlibreofficeautocorrection_on_import(void* self, bool (*callback)(void*, const char*, const char*, int32_t));

/// @warning DEPRECATED: Use `k_textautocorrectioncore__importlibreofficeautocorrection_super_import` instead
///
#define k_textautocorrectioncore__importlibreofficeautocorrection_qbase_import k_textautocorrectioncore__importlibreofficeautocorrection_super_import

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportLibreOfficeAutocorrection.html)
///
/// Base class method implementation
///
/// @param self TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*
/// @param fileName const char*
/// @param errorMessage const char*
/// @param loadAttribute enum TextAutoCorrectionCore__ImportAbstractAutocorrection__LoadAttribute
///
bool k_textautocorrectioncore__importlibreofficeautocorrection_super_import(void* self, const char* fileName, const char* errorMessage, int32_t loadAttribute);

/// Inherited from TextAutoCorrectionCore::ImportAbstractAutocorrection
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*
///
/// @return libqt_list set of const char*
///
libqt_list k_textautocorrectioncore__importlibreofficeautocorrection_upper_case_exceptions(void* self);

/// Inherited from TextAutoCorrectionCore::ImportAbstractAutocorrection
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*
///
/// @return libqt_list set of const char*
///
libqt_list k_textautocorrectioncore__importlibreofficeautocorrection_two_upper_letter_exceptions(void* self);

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
/// @param self TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_textautocorrectioncore__importlibreofficeautocorrection_autocorrect_entries(void* self);

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
/// @param self TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_textautocorrectioncore__importlibreofficeautocorrection_super_script_entries(void* self);

/// Inherited from TextAutoCorrectionCore::ImportAbstractAutocorrection
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__importlibreofficeautocorrection_typographic_single_quotes(void* self);

/// Inherited from TextAutoCorrectionCore::ImportAbstractAutocorrection
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*
///
TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__importlibreofficeautocorrection_typographic_double_quotes(void* self);

/// Inherited from TextAutoCorrectionCore::ImportAbstractAutocorrection
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*
///
int32_t k_textautocorrectioncore__importlibreofficeautocorrection_max_find_string_lenght(void* self);

/// Inherited from TextAutoCorrectionCore::ImportAbstractAutocorrection
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportAbstractAutocorrection.html)
///
/// @param self TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*
///
int32_t k_textautocorrectioncore__importlibreofficeautocorrection_min_find_string_lenght(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1ImportLibreOfficeAutocorrection.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextAutoCorrectionCore__ImportLibreOfficeAutocorrection*
///
void k_textautocorrectioncore__importlibreofficeautocorrection_delete(void* self);

#endif

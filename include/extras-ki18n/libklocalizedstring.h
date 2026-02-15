#pragma once
#ifndef SRC_EXTRAS_KI18N_QT6C_LIBKLOCALIZEDSTRING_H
#define SRC_EXTRAS_KI18N_QT6C_LIBKLOCALIZEDSTRING_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/klocalizedstring.html)

/// k_localizedstring_new constructs a new KLocalizedString object.
///
KLocalizedString* k_localizedstring_new();

/// [Upstream resources](https://api.kde.org/klocalizedstring.html)

/// k_localizedstring_new2 constructs a new KLocalizedString object.
///
/// @param rhs KLocalizedString*
///
KLocalizedString* k_localizedstring_new2(void* rhs);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#operator-eq)
///
/// @param self KLocalizedString*
/// @param rhs KLocalizedString*
///
void k_localizedstring_operator_assign(void* self, void* rhs);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#isEmpty)
///
/// @param self KLocalizedString*
///
bool k_localizedstring_is_empty(void* self);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedString*
///
const char* k_localizedstring_to_string(void* self);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedString*
/// @param languages const char**
///
const char* k_localizedstring_to_string2(void* self, const char* languages[static 1]);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedString*
/// @param domain const char*
///
const char* k_localizedstring_to_string3(void* self, const char* domain);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KLocalizedString*
/// @param format enum Kuit__VisualFormat
///
const char* k_localizedstring_to_string4(void* self, int32_t format);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#withLanguages)
///
/// @param self KLocalizedString*
/// @param languages const char**
///
KLocalizedString* k_localizedstring_with_languages(void* self, const char* languages[static 1]);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#withDomain)
///
/// @param self KLocalizedString*
/// @param domain const char*
///
KLocalizedString* k_localizedstring_with_domain(void* self, const char* domain);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#withFormat)
///
/// @param self KLocalizedString*
/// @param format enum Kuit__VisualFormat
///
KLocalizedString* k_localizedstring_with_format(void* self, int32_t format);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a int
///
KLocalizedString* k_localizedstring_subs(void* self, int a);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a uint32_t
///
KLocalizedString* k_localizedstring_subs2(void* self, uint32_t a);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a int64_t
///
KLocalizedString* k_localizedstring_subs3(void* self, int64_t a);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a uint64_t
///
KLocalizedString* k_localizedstring_subs4(void* self, uint64_t a);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a long long
///
KLocalizedString* k_localizedstring_subs5(void* self, long long a);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a uint64_t
///
KLocalizedString* k_localizedstring_subs6(void* self, uint64_t a);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a double
///
KLocalizedString* k_localizedstring_subs7(void* self, double a);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a QChar*
///
KLocalizedString* k_localizedstring_subs8(void* self, void* a);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a const char*
///
KLocalizedString* k_localizedstring_subs9(void* self, const char* a);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a KLocalizedString*
///
KLocalizedString* k_localizedstring_subs10(void* self, void* a);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#inContext)
///
/// @param self KLocalizedString*
/// @param key const char*
/// @param value const char*
///
KLocalizedString* k_localizedstring_in_context(void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#relaxSubs)
///
/// @param self KLocalizedString*
///
KLocalizedString* k_localizedstring_relax_subs(void* self);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#ignoreMarkup)
///
/// @param self KLocalizedString*
///
KLocalizedString* k_localizedstring_ignore_markup(void* self);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#untranslatedText)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KLocalizedString*
///
char* k_localizedstring_untranslated_text(void* self);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#setApplicationDomain)
///
/// @param domain char*
///
void k_localizedstring_set_application_domain(char* domain);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#applicationDomain)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
char* k_localizedstring_application_domain();

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#languages)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_localizedstring_languages();

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#setLanguages)
///
/// @param languages const char**
///
void k_localizedstring_set_languages(const char* languages[static 1]);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#clearLanguages)
///
void k_localizedstring_clear_languages();

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#isApplicationTranslatedInto)
///
/// @param language const char*
///
bool k_localizedstring_is_application_translated_into(const char* language);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#availableApplicationTranslations)
///
/// @return libqt_list set of const char*
///
libqt_list k_localizedstring_available_application_translations();

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#availableDomainTranslations)
///
/// @param domain char*
///
/// @return libqt_list set of const char*
///
libqt_list k_localizedstring_available_domain_translations(char* domain);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#addDomainLocaleDir)
///
/// @param domain char*
/// @param path const char*
///
void k_localizedstring_add_domain_locale_dir(char* domain, const char* path);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#localizedFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param filePath const char*
///
const char* k_localizedstring_localized_file_path(const char* filePath);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#removeAcceleratorMarker)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param label const char*
///
const char* k_localizedstring_remove_accelerator_marker(const char* label);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a int
/// @param fieldWidth int
///
KLocalizedString* k_localizedstring_subs22(void* self, int a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a int
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_localizedstring_subs32(void* self, int a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a int
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_localizedstring_subs42(void* self, int a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a uint32_t
/// @param fieldWidth int
///
KLocalizedString* k_localizedstring_subs23(void* self, uint32_t a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a uint32_t
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_localizedstring_subs33(void* self, uint32_t a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a uint32_t
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_localizedstring_subs43(void* self, uint32_t a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a int64_t
/// @param fieldWidth int
///
KLocalizedString* k_localizedstring_subs24(void* self, int64_t a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a int64_t
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_localizedstring_subs34(void* self, int64_t a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a int64_t
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_localizedstring_subs44(void* self, int64_t a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a uint64_t
/// @param fieldWidth int
///
KLocalizedString* k_localizedstring_subs25(void* self, uint64_t a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a uint64_t
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_localizedstring_subs35(void* self, uint64_t a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a uint64_t
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_localizedstring_subs45(void* self, uint64_t a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a long long
/// @param fieldWidth int
///
KLocalizedString* k_localizedstring_subs26(void* self, long long a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a long long
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_localizedstring_subs36(void* self, long long a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a long long
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_localizedstring_subs46(void* self, long long a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a uint64_t
/// @param fieldWidth int
///
KLocalizedString* k_localizedstring_subs27(void* self, uint64_t a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a uint64_t
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_localizedstring_subs37(void* self, uint64_t a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a uint64_t
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_localizedstring_subs47(void* self, uint64_t a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a double
/// @param fieldWidth int
///
KLocalizedString* k_localizedstring_subs28(void* self, double a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a double
/// @param fieldWidth int
/// @param format char
///
KLocalizedString* k_localizedstring_subs38(void* self, double a, int fieldWidth, char format);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a double
/// @param fieldWidth int
/// @param format char
/// @param precision int
///
KLocalizedString* k_localizedstring_subs48(void* self, double a, int fieldWidth, char format, int precision);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a double
/// @param fieldWidth int
/// @param format char
/// @param precision int
/// @param fillChar QChar*
///
KLocalizedString* k_localizedstring_subs52(void* self, double a, int fieldWidth, char format, int precision, void* fillChar);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a QChar*
/// @param fieldWidth int
///
KLocalizedString* k_localizedstring_subs29(void* self, void* a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a QChar*
/// @param fieldWidth int
/// @param fillChar QChar*
///
KLocalizedString* k_localizedstring_subs39(void* self, void* a, int fieldWidth, void* fillChar);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a const char*
/// @param fieldWidth int
///
KLocalizedString* k_localizedstring_subs210(void* self, const char* a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a const char*
/// @param fieldWidth int
/// @param fillChar QChar*
///
KLocalizedString* k_localizedstring_subs310(void* self, const char* a, int fieldWidth, void* fillChar);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a KLocalizedString*
/// @param fieldWidth int
///
KLocalizedString* k_localizedstring_subs211(void* self, void* a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#subs)
///
/// @param self KLocalizedString*
/// @param a KLocalizedString*
/// @param fieldWidth int
/// @param fillChar QChar*
///
KLocalizedString* k_localizedstring_subs311(void* self, void* a, int fieldWidth, void* fillChar);

/// [Upstream resources](https://api.kde.org/klocalizedstring.html#dtor.KLocalizedString)
///
/// Delete this object from C++ memory.
///
/// @param self KLocalizedString*
///
void k_localizedstring_delete(void* self);

#endif

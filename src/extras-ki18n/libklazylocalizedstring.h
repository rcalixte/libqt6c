#pragma once
#ifndef EXTRAS_KI18N_LIBKLAZYLOCALIZEDSTRING_H
#define EXTRAS_KI18N_LIBKLAZYLOCALIZEDSTRING_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html)

/// k_lazylocalizedstring_new constructs a new KLazyLocalizedString object.
///
KLazyLocalizedString* k_lazylocalizedstring_new();

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html)

/// k_lazylocalizedstring_new2 constructs a new KLazyLocalizedString object.
///
/// @param other KLazyLocalizedString*
///
KLazyLocalizedString* k_lazylocalizedstring_new2(const void* other);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html)

/// k_lazylocalizedstring_new3 constructs a new KLazyLocalizedString object and invalidates the source KLazyLocalizedString object.
///
/// @param other KLazyLocalizedString*
///
KLazyLocalizedString* k_lazylocalizedstring_new3(void* other);

/// k_lazylocalizedstring_copy_assign shallow copies `other` into `self`.
///
/// @param self KLazyLocalizedString*
/// @param other KLazyLocalizedString*
///
void k_lazylocalizedstring_copy_assign(void* self, void* other);

/// k_lazylocalizedstring_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KLazyLocalizedString*
/// @param other KLazyLocalizedString*
///
void k_lazylocalizedstring_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#operator-KLocalizedString)
///
/// @param self const KLazyLocalizedString*
///
KLocalizedString* k_lazylocalizedstring_to_k_localized_string(const void* self);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#isEmpty)
///
/// @param self const KLazyLocalizedString*
///
bool k_lazylocalizedstring_is_empty(const void* self);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#untranslatedText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KLazyLocalizedString*
///
const char* k_lazylocalizedstring_untranslated_text(const void* self);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KLazyLocalizedString*
///
const char* k_lazylocalizedstring_to_string(const void* self);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KLazyLocalizedString*
/// @param languages const char**
///
const char* k_lazylocalizedstring_to_string2(const void* self, const char* languages[static 1]);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KLazyLocalizedString*
/// @param domain const char*
///
const char* k_lazylocalizedstring_to_string3(const void* self, const char* domain);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KLazyLocalizedString*
/// @param format enum Kuit__VisualFormat
///
const char* k_lazylocalizedstring_to_string4(const void* self, int32_t format);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#withLanguages)
///
/// @param self const KLazyLocalizedString*
/// @param languages const char**
///
KLocalizedString* k_lazylocalizedstring_with_languages(const void* self, const char* languages[static 1]);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#withDomain)
///
/// @param self const KLazyLocalizedString*
/// @param domain const char*
///
KLocalizedString* k_lazylocalizedstring_with_domain(const void* self, const char* domain);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#withFormat)
///
/// @param self const KLazyLocalizedString*
/// @param format enum Kuit__VisualFormat
///
KLocalizedString* k_lazylocalizedstring_with_format(const void* self, int32_t format);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a int
///
KLocalizedString* k_lazylocalizedstring_subs(const void* self, int a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a uint32_t
///
KLocalizedString* k_lazylocalizedstring_subs2(const void* self, uint32_t a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a long
///
KLocalizedString* k_lazylocalizedstring_subs3(const void* self, long a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a uintptr_t
///
KLocalizedString* k_lazylocalizedstring_subs4(const void* self, uintptr_t a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a long long
///
KLocalizedString* k_lazylocalizedstring_subs5(const void* self, long long a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a uintptr_t
///
KLocalizedString* k_lazylocalizedstring_subs6(const void* self, uintptr_t a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a double
///
KLocalizedString* k_lazylocalizedstring_subs7(const void* self, double a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a QChar*
///
KLocalizedString* k_lazylocalizedstring_subs8(const void* self, void* a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a const char*
///
KLocalizedString* k_lazylocalizedstring_subs9(const void* self, const char* a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a KLocalizedString*
///
KLocalizedString* k_lazylocalizedstring_subs10(const void* self, const void* a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#inContext)
///
/// @param self const KLazyLocalizedString*
/// @param key const char*
/// @param value const char*
///
KLocalizedString* k_lazylocalizedstring_in_context(const void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#relaxSubs)
///
/// @param self const KLazyLocalizedString*
///
KLocalizedString* k_lazylocalizedstring_relax_subs(const void* self);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#ignoreMarkup)
///
/// @param self const KLazyLocalizedString*
///
KLocalizedString* k_lazylocalizedstring_ignore_markup(const void* self);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a int
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs22(const void* self, int a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a int
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_lazylocalizedstring_subs32(const void* self, int a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a int
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs42(const void* self, int a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a uint32_t
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs23(const void* self, uint32_t a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a uint32_t
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_lazylocalizedstring_subs33(const void* self, uint32_t a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a uint32_t
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs43(const void* self, uint32_t a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a long
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs24(const void* self, long a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a long
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_lazylocalizedstring_subs34(const void* self, long a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a long
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs44(const void* self, long a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a uintptr_t
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs25(const void* self, uintptr_t a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a uintptr_t
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_lazylocalizedstring_subs35(const void* self, uintptr_t a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a uintptr_t
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs45(const void* self, uintptr_t a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a long long
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs26(const void* self, long long a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a long long
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_lazylocalizedstring_subs36(const void* self, long long a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a long long
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs46(const void* self, long long a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a uintptr_t
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs27(const void* self, uintptr_t a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a uintptr_t
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_lazylocalizedstring_subs37(const void* self, uintptr_t a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a uintptr_t
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs47(const void* self, uintptr_t a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a double
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs28(const void* self, double a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a double
/// @param fieldWidth int
/// @param format char
///
KLocalizedString* k_lazylocalizedstring_subs38(const void* self, double a, int fieldWidth, char format);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a double
/// @param fieldWidth int
/// @param format char
/// @param precision int
///
KLocalizedString* k_lazylocalizedstring_subs48(const void* self, double a, int fieldWidth, char format, int precision);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a double
/// @param fieldWidth int
/// @param format char
/// @param precision int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs52(const void* self, double a, int fieldWidth, char format, int precision, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a QChar*
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs29(const void* self, void* a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a QChar*
/// @param fieldWidth int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs39(const void* self, void* a, int fieldWidth, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a const char*
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs210(const void* self, const char* a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a const char*
/// @param fieldWidth int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs310(const void* self, const char* a, int fieldWidth, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a KLocalizedString*
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs211(const void* self, const void* a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self const KLazyLocalizedString*
/// @param a KLocalizedString*
/// @param fieldWidth int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs311(const void* self, const void* a, int fieldWidth, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#dtor.KLazyLocalizedString)
///
/// Delete this object from C++ memory.
///
/// @param self KLazyLocalizedString*
///
void k_lazylocalizedstring_delete(void* self);

#endif

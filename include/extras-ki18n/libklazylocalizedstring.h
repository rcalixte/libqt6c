#pragma once
#ifndef SRC_EXTRAS_KI18N_QT6C_LIBKLAZYLOCALIZEDSTRING_H
#define SRC_EXTRAS_KI18N_QT6C_LIBKLAZYLOCALIZEDSTRING_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html)

/// k_lazylocalizedstring_new constructs a new KLazyLocalizedString object.
///
/// @param other KLazyLocalizedString*
///
KLazyLocalizedString* k_lazylocalizedstring_new(void* other);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html)

/// k_lazylocalizedstring_new2 constructs a new KLazyLocalizedString object and invalidates the source KLazyLocalizedString object.
///
/// @param other KLazyLocalizedString*
///
KLazyLocalizedString* k_lazylocalizedstring_new2(void* other);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html)

/// k_lazylocalizedstring_new3 constructs a new KLazyLocalizedString object.
///
KLazyLocalizedString* k_lazylocalizedstring_new3();

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

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#operator)
///
/// @param self KLazyLocalizedString*
///
KLocalizedString* k_lazylocalizedstring_to_k_localized_string(void* self);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#isEmpty)
///
/// @param self KLazyLocalizedString*
///
bool k_lazylocalizedstring_is_empty(void* self);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#untranslatedText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLazyLocalizedString*
///
const char* k_lazylocalizedstring_untranslated_text(void* self);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLazyLocalizedString*
///
const char* k_lazylocalizedstring_to_string(void* self);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLazyLocalizedString*
/// @param languages const char**
///
const char* k_lazylocalizedstring_to_string2(void* self, const char* languages[static 1]);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLazyLocalizedString*
/// @param domain const char*
///
const char* k_lazylocalizedstring_to_string3(void* self, const char* domain);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLazyLocalizedString*
/// @param format enum Kuit__VisualFormat
///
const char* k_lazylocalizedstring_to_string4(void* self, int32_t format);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#withLanguages)
///
/// @param self KLazyLocalizedString*
/// @param languages const char**
///
KLocalizedString* k_lazylocalizedstring_with_languages(void* self, const char* languages[static 1]);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#withDomain)
///
/// @param self KLazyLocalizedString*
/// @param domain const char*
///
KLocalizedString* k_lazylocalizedstring_with_domain(void* self, const char* domain);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#withFormat)
///
/// @param self KLazyLocalizedString*
/// @param format enum Kuit__VisualFormat
///
KLocalizedString* k_lazylocalizedstring_with_format(void* self, int32_t format);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a int
///
KLocalizedString* k_lazylocalizedstring_subs(void* self, int a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a uint32_t
///
KLocalizedString* k_lazylocalizedstring_subs2(void* self, uint32_t a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a int64_t
///
KLocalizedString* k_lazylocalizedstring_subs3(void* self, int64_t a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a uint64_t
///
KLocalizedString* k_lazylocalizedstring_subs4(void* self, uint64_t a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a long long
///
KLocalizedString* k_lazylocalizedstring_subs5(void* self, long long a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a uint64_t
///
KLocalizedString* k_lazylocalizedstring_subs6(void* self, uint64_t a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a double
///
KLocalizedString* k_lazylocalizedstring_subs7(void* self, double a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a QChar*
///
KLocalizedString* k_lazylocalizedstring_subs8(void* self, void* a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a const char*
///
KLocalizedString* k_lazylocalizedstring_subs9(void* self, const char* a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a KLocalizedString*
///
KLocalizedString* k_lazylocalizedstring_subs10(void* self, void* a);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#inContext)
///
/// @param self KLazyLocalizedString*
/// @param key const char*
/// @param value const char*
///
KLocalizedString* k_lazylocalizedstring_in_context(void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#relaxSubs)
///
/// @param self KLazyLocalizedString*
///
KLocalizedString* k_lazylocalizedstring_relax_subs(void* self);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#ignoreMarkup)
///
/// @param self KLazyLocalizedString*
///
KLocalizedString* k_lazylocalizedstring_ignore_markup(void* self);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a int
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs22(void* self, int a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a int
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_lazylocalizedstring_subs32(void* self, int a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a int
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs42(void* self, int a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a uint32_t
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs23(void* self, uint32_t a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a uint32_t
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_lazylocalizedstring_subs33(void* self, uint32_t a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a uint32_t
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs43(void* self, uint32_t a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a int64_t
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs24(void* self, int64_t a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a int64_t
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_lazylocalizedstring_subs34(void* self, int64_t a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a int64_t
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs44(void* self, int64_t a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a uint64_t
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs25(void* self, uint64_t a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a uint64_t
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_lazylocalizedstring_subs35(void* self, uint64_t a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a uint64_t
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs45(void* self, uint64_t a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a long long
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs26(void* self, long long a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a long long
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_lazylocalizedstring_subs36(void* self, long long a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a long long
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs46(void* self, long long a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a uint64_t
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs27(void* self, uint64_t a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a uint64_t
/// @param fieldWidth int
/// @param base int
///
KLocalizedString* k_lazylocalizedstring_subs37(void* self, uint64_t a, int fieldWidth, int base);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a uint64_t
/// @param fieldWidth int
/// @param base int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs47(void* self, uint64_t a, int fieldWidth, int base, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a double
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs28(void* self, double a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a double
/// @param fieldWidth int
/// @param format char
///
KLocalizedString* k_lazylocalizedstring_subs38(void* self, double a, int fieldWidth, char format);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a double
/// @param fieldWidth int
/// @param format char
/// @param precision int
///
KLocalizedString* k_lazylocalizedstring_subs48(void* self, double a, int fieldWidth, char format, int precision);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a double
/// @param fieldWidth int
/// @param format char
/// @param precision int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs52(void* self, double a, int fieldWidth, char format, int precision, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a QChar*
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs29(void* self, void* a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a QChar*
/// @param fieldWidth int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs39(void* self, void* a, int fieldWidth, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a const char*
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs210(void* self, const char* a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a const char*
/// @param fieldWidth int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs310(void* self, const char* a, int fieldWidth, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a KLocalizedString*
/// @param fieldWidth int
///
KLocalizedString* k_lazylocalizedstring_subs211(void* self, void* a, int fieldWidth);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#subs)
///
/// @param self KLazyLocalizedString*
/// @param a KLocalizedString*
/// @param fieldWidth int
/// @param fillChar QChar*
///
KLocalizedString* k_lazylocalizedstring_subs311(void* self, void* a, int fieldWidth, void* fillChar);

/// [Upstream resources](https://api.kde.org/klazylocalizedstring.html#dtor.KLazyLocalizedString)
///
/// Delete this object from C++ memory.
///
/// @param self KLazyLocalizedString*
///
void k_lazylocalizedstring_delete(void* self);

#endif

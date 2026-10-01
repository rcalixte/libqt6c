#include "libklocalizedstring.hpp"
#include "../libqchar.hpp"
#include "libklazylocalizedstring.hpp"
#include "libklazylocalizedstring.h"

KLazyLocalizedString* k_lazylocalizedstring_new() {
    return KLazyLocalizedString_New();
}

KLazyLocalizedString* k_lazylocalizedstring_new2(const void* other) {
    return KLazyLocalizedString_New2((KLazyLocalizedString*)other);
}

KLazyLocalizedString* k_lazylocalizedstring_new3(void* other) {
    return KLazyLocalizedString_New3((KLazyLocalizedString*)other);
}

void k_lazylocalizedstring_copy_assign(void* self, void* other) {
    KLazyLocalizedString_CopyAssign((KLazyLocalizedString*)self, (KLazyLocalizedString*)other);
}

void k_lazylocalizedstring_move_assign(void* self, void* other) {
    KLazyLocalizedString_MoveAssign((KLazyLocalizedString*)self, (KLazyLocalizedString*)other);
}

KLocalizedString* k_lazylocalizedstring_to_k_localized_string(const void* self) {
    return KLazyLocalizedString_ToKLocalizedString((KLazyLocalizedString*)self);
}

bool k_lazylocalizedstring_is_empty(const void* self) {
    return KLazyLocalizedString_IsEmpty((KLazyLocalizedString*)self);
}

const char* k_lazylocalizedstring_untranslated_text(const void* self) {
    return KLazyLocalizedString_UntranslatedText((KLazyLocalizedString*)self);
}

const char* k_lazylocalizedstring_to_string(const void* self) {
    libqt_string _str = KLazyLocalizedString_ToString((KLazyLocalizedString*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_lazylocalizedstring_to_string2(const void* self, const char* languages[static 1]) {
    size_t languages_len = libqt_strv_length(languages);
    libqt_string* languages_qstr = (libqt_string*)malloc(languages_len * sizeof(libqt_string));
    if (languages_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_lazylocalizedstring_to_string2\n");
        abort();
    }
    for (size_t i = 0; i < languages_len; ++i)
        languages_qstr[i] = qstring(languages[i]);
    libqt_list languages_list = qlist(languages_qstr, languages_len);
    libqt_string _str = KLazyLocalizedString_ToString2((KLazyLocalizedString*)self, languages_list);
    free(languages_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_lazylocalizedstring_to_string3(const void* self, const char* domain) {
    libqt_string _str = KLazyLocalizedString_ToString3((KLazyLocalizedString*)self, domain);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_lazylocalizedstring_to_string4(const void* self, int32_t format) {
    libqt_string _str = KLazyLocalizedString_ToString4((KLazyLocalizedString*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KLocalizedString* k_lazylocalizedstring_with_languages(const void* self, const char* languages[static 1]) {
    size_t languages_len = libqt_strv_length(languages);
    libqt_string* languages_qstr = (libqt_string*)malloc(languages_len * sizeof(libqt_string));
    if (languages_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_lazylocalizedstring_with_languages\n");
        abort();
    }
    for (size_t i = 0; i < languages_len; ++i)
        languages_qstr[i] = qstring(languages[i]);
    libqt_list languages_list = qlist(languages_qstr, languages_len);
    KLocalizedString* _out = KLazyLocalizedString_WithLanguages((KLazyLocalizedString*)self, languages_list);
    free(languages_qstr);
    return _out;
}

KLocalizedString* k_lazylocalizedstring_with_domain(const void* self, const char* domain) {
    return KLazyLocalizedString_WithDomain((KLazyLocalizedString*)self, domain);
}

KLocalizedString* k_lazylocalizedstring_with_format(const void* self, int32_t format) {
    return KLazyLocalizedString_WithFormat((KLazyLocalizedString*)self, format);
}

KLocalizedString* k_lazylocalizedstring_subs(const void* self, int a) {
    return KLazyLocalizedString_Subs((KLazyLocalizedString*)self, a);
}

KLocalizedString* k_lazylocalizedstring_subs2(const void* self, uint32_t a) {
    return KLazyLocalizedString_Subs2((KLazyLocalizedString*)self, a);
}

KLocalizedString* k_lazylocalizedstring_subs3(const void* self, long a) {
    return KLazyLocalizedString_Subs3((KLazyLocalizedString*)self, a);
}

KLocalizedString* k_lazylocalizedstring_subs4(const void* self, uintptr_t a) {
    return KLazyLocalizedString_Subs4((KLazyLocalizedString*)self, a);
}

KLocalizedString* k_lazylocalizedstring_subs5(const void* self, long long a) {
    return KLazyLocalizedString_Subs5((KLazyLocalizedString*)self, a);
}

KLocalizedString* k_lazylocalizedstring_subs6(const void* self, uintptr_t a) {
    return KLazyLocalizedString_Subs6((KLazyLocalizedString*)self, a);
}

KLocalizedString* k_lazylocalizedstring_subs7(const void* self, double a) {
    return KLazyLocalizedString_Subs7((KLazyLocalizedString*)self, a);
}

KLocalizedString* k_lazylocalizedstring_subs8(const void* self, void* a) {
    return KLazyLocalizedString_Subs8((KLazyLocalizedString*)self, (QChar*)a);
}

KLocalizedString* k_lazylocalizedstring_subs9(const void* self, const char* a) {
    return KLazyLocalizedString_Subs9((KLazyLocalizedString*)self, qstring(a));
}

KLocalizedString* k_lazylocalizedstring_subs10(const void* self, const void* a) {
    return KLazyLocalizedString_Subs10((KLazyLocalizedString*)self, (KLocalizedString*)a);
}

KLocalizedString* k_lazylocalizedstring_in_context(const void* self, const char* key, const char* value) {
    return KLazyLocalizedString_InContext((KLazyLocalizedString*)self, qstring(key), qstring(value));
}

KLocalizedString* k_lazylocalizedstring_relax_subs(const void* self) {
    return KLazyLocalizedString_RelaxSubs((KLazyLocalizedString*)self);
}

KLocalizedString* k_lazylocalizedstring_ignore_markup(const void* self) {
    return KLazyLocalizedString_IgnoreMarkup((KLazyLocalizedString*)self);
}

KLocalizedString* k_lazylocalizedstring_subs22(const void* self, int a, int fieldWidth) {
    return KLazyLocalizedString_Subs22((KLazyLocalizedString*)self, a, fieldWidth);
}

KLocalizedString* k_lazylocalizedstring_subs32(const void* self, int a, int fieldWidth, int base) {
    return KLazyLocalizedString_Subs32((KLazyLocalizedString*)self, a, fieldWidth, base);
}

KLocalizedString* k_lazylocalizedstring_subs42(const void* self, int a, int fieldWidth, int base, void* fillChar) {
    return KLazyLocalizedString_Subs42((KLazyLocalizedString*)self, a, fieldWidth, base, (QChar*)fillChar);
}

KLocalizedString* k_lazylocalizedstring_subs23(const void* self, uint32_t a, int fieldWidth) {
    return KLazyLocalizedString_Subs23((KLazyLocalizedString*)self, a, fieldWidth);
}

KLocalizedString* k_lazylocalizedstring_subs33(const void* self, uint32_t a, int fieldWidth, int base) {
    return KLazyLocalizedString_Subs33((KLazyLocalizedString*)self, a, fieldWidth, base);
}

KLocalizedString* k_lazylocalizedstring_subs43(const void* self, uint32_t a, int fieldWidth, int base, void* fillChar) {
    return KLazyLocalizedString_Subs43((KLazyLocalizedString*)self, a, fieldWidth, base, (QChar*)fillChar);
}

KLocalizedString* k_lazylocalizedstring_subs24(const void* self, long a, int fieldWidth) {
    return KLazyLocalizedString_Subs24((KLazyLocalizedString*)self, a, fieldWidth);
}

KLocalizedString* k_lazylocalizedstring_subs34(const void* self, long a, int fieldWidth, int base) {
    return KLazyLocalizedString_Subs34((KLazyLocalizedString*)self, a, fieldWidth, base);
}

KLocalizedString* k_lazylocalizedstring_subs44(const void* self, long a, int fieldWidth, int base, void* fillChar) {
    return KLazyLocalizedString_Subs44((KLazyLocalizedString*)self, a, fieldWidth, base, (QChar*)fillChar);
}

KLocalizedString* k_lazylocalizedstring_subs25(const void* self, uintptr_t a, int fieldWidth) {
    return KLazyLocalizedString_Subs25((KLazyLocalizedString*)self, a, fieldWidth);
}

KLocalizedString* k_lazylocalizedstring_subs35(const void* self, uintptr_t a, int fieldWidth, int base) {
    return KLazyLocalizedString_Subs35((KLazyLocalizedString*)self, a, fieldWidth, base);
}

KLocalizedString* k_lazylocalizedstring_subs45(const void* self, uintptr_t a, int fieldWidth, int base, void* fillChar) {
    return KLazyLocalizedString_Subs45((KLazyLocalizedString*)self, a, fieldWidth, base, (QChar*)fillChar);
}

KLocalizedString* k_lazylocalizedstring_subs26(const void* self, long long a, int fieldWidth) {
    return KLazyLocalizedString_Subs26((KLazyLocalizedString*)self, a, fieldWidth);
}

KLocalizedString* k_lazylocalizedstring_subs36(const void* self, long long a, int fieldWidth, int base) {
    return KLazyLocalizedString_Subs36((KLazyLocalizedString*)self, a, fieldWidth, base);
}

KLocalizedString* k_lazylocalizedstring_subs46(const void* self, long long a, int fieldWidth, int base, void* fillChar) {
    return KLazyLocalizedString_Subs46((KLazyLocalizedString*)self, a, fieldWidth, base, (QChar*)fillChar);
}

KLocalizedString* k_lazylocalizedstring_subs27(const void* self, uintptr_t a, int fieldWidth) {
    return KLazyLocalizedString_Subs27((KLazyLocalizedString*)self, a, fieldWidth);
}

KLocalizedString* k_lazylocalizedstring_subs37(const void* self, uintptr_t a, int fieldWidth, int base) {
    return KLazyLocalizedString_Subs37((KLazyLocalizedString*)self, a, fieldWidth, base);
}

KLocalizedString* k_lazylocalizedstring_subs47(const void* self, uintptr_t a, int fieldWidth, int base, void* fillChar) {
    return KLazyLocalizedString_Subs47((KLazyLocalizedString*)self, a, fieldWidth, base, (QChar*)fillChar);
}

KLocalizedString* k_lazylocalizedstring_subs28(const void* self, double a, int fieldWidth) {
    return KLazyLocalizedString_Subs28((KLazyLocalizedString*)self, a, fieldWidth);
}

KLocalizedString* k_lazylocalizedstring_subs38(const void* self, double a, int fieldWidth, char format) {
    return KLazyLocalizedString_Subs38((KLazyLocalizedString*)self, a, fieldWidth, format);
}

KLocalizedString* k_lazylocalizedstring_subs48(const void* self, double a, int fieldWidth, char format, int precision) {
    return KLazyLocalizedString_Subs48((KLazyLocalizedString*)self, a, fieldWidth, format, precision);
}

KLocalizedString* k_lazylocalizedstring_subs52(const void* self, double a, int fieldWidth, char format, int precision, void* fillChar) {
    return KLazyLocalizedString_Subs52((KLazyLocalizedString*)self, a, fieldWidth, format, precision, (QChar*)fillChar);
}

KLocalizedString* k_lazylocalizedstring_subs29(const void* self, void* a, int fieldWidth) {
    return KLazyLocalizedString_Subs29((KLazyLocalizedString*)self, (QChar*)a, fieldWidth);
}

KLocalizedString* k_lazylocalizedstring_subs39(const void* self, void* a, int fieldWidth, void* fillChar) {
    return KLazyLocalizedString_Subs39((KLazyLocalizedString*)self, (QChar*)a, fieldWidth, (QChar*)fillChar);
}

KLocalizedString* k_lazylocalizedstring_subs210(const void* self, const char* a, int fieldWidth) {
    return KLazyLocalizedString_Subs210((KLazyLocalizedString*)self, qstring(a), fieldWidth);
}

KLocalizedString* k_lazylocalizedstring_subs310(const void* self, const char* a, int fieldWidth, void* fillChar) {
    return KLazyLocalizedString_Subs310((KLazyLocalizedString*)self, qstring(a), fieldWidth, (QChar*)fillChar);
}

KLocalizedString* k_lazylocalizedstring_subs211(const void* self, const void* a, int fieldWidth) {
    return KLazyLocalizedString_Subs211((KLazyLocalizedString*)self, (KLocalizedString*)a, fieldWidth);
}

KLocalizedString* k_lazylocalizedstring_subs311(const void* self, const void* a, int fieldWidth, void* fillChar) {
    return KLazyLocalizedString_Subs311((KLazyLocalizedString*)self, (KLocalizedString*)a, fieldWidth, (QChar*)fillChar);
}

void k_lazylocalizedstring_delete(void* self) {
    KLazyLocalizedString_Delete((KLazyLocalizedString*)(self));
}

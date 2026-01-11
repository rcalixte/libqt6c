#include "../libqchar.hpp"
#include "libklocalizedstring.hpp"
#include "libklocalizedstring.h"

KLocalizedString* k_localizedstring_new() {
    return KLocalizedString_new();
}

KLocalizedString* k_localizedstring_new2(void* rhs) {
    return KLocalizedString_new2((KLocalizedString*)rhs);
}

void k_localizedstring_operator_assign(void* self, void* rhs) {
    KLocalizedString_OperatorAssign((KLocalizedString*)self, (KLocalizedString*)rhs);
}

bool k_localizedstring_is_empty(void* self) {
    return KLocalizedString_IsEmpty((KLocalizedString*)self);
}

const char* k_localizedstring_to_string(void* self) {
    libqt_string _str = KLocalizedString_ToString((KLocalizedString*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedstring_to_string2(void* self, const char* languages[static 1]) {
    size_t languages_len = libqt_strv_length(languages);
    libqt_string* languages_qstr = (libqt_string*)malloc(languages_len * sizeof(libqt_string));
    if (languages_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_localizedstring_to_string2");
        abort();
    }
    for (size_t i = 0; i < languages_len; ++i) {
        languages_qstr[i] = qstring(languages[i]);
    }
    libqt_list languages_list = qlist(languages_qstr, languages_len);
    libqt_string _str = KLocalizedString_ToString2((KLocalizedString*)self, languages_list);
    free(languages_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedstring_to_string3(void* self, const char* domain) {
    libqt_string _str = KLocalizedString_ToString3((KLocalizedString*)self, domain);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedstring_to_string4(void* self, int32_t format) {
    libqt_string _str = KLocalizedString_ToString4((KLocalizedString*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KLocalizedString* k_localizedstring_with_languages(void* self, const char* languages[static 1]) {
    size_t languages_len = libqt_strv_length(languages);
    libqt_string* languages_qstr = (libqt_string*)malloc(languages_len * sizeof(libqt_string));
    if (languages_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_localizedstring_with_languages");
        abort();
    }
    for (size_t i = 0; i < languages_len; ++i) {
        languages_qstr[i] = qstring(languages[i]);
    }
    libqt_list languages_list = qlist(languages_qstr, languages_len);
    KLocalizedString* _out = KLocalizedString_WithLanguages((KLocalizedString*)self, languages_list);
    free(languages_qstr);
    return _out;
}

KLocalizedString* k_localizedstring_with_domain(void* self, const char* domain) {
    return KLocalizedString_WithDomain((KLocalizedString*)self, domain);
}

KLocalizedString* k_localizedstring_with_format(void* self, int32_t format) {
    return KLocalizedString_WithFormat((KLocalizedString*)self, format);
}

KLocalizedString* k_localizedstring_subs(void* self, int a) {
    return KLocalizedString_Subs((KLocalizedString*)self, a);
}

KLocalizedString* k_localizedstring_subs2(void* self, uint32_t a) {
    return KLocalizedString_Subs2((KLocalizedString*)self, a);
}

KLocalizedString* k_localizedstring_subs3(void* self, int64_t a) {
    return KLocalizedString_Subs3((KLocalizedString*)self, a);
}

KLocalizedString* k_localizedstring_subs4(void* self, uint64_t a) {
    return KLocalizedString_Subs4((KLocalizedString*)self, a);
}

KLocalizedString* k_localizedstring_subs5(void* self, long long a) {
    return KLocalizedString_Subs5((KLocalizedString*)self, a);
}

KLocalizedString* k_localizedstring_subs6(void* self, uint64_t a) {
    return KLocalizedString_Subs6((KLocalizedString*)self, a);
}

KLocalizedString* k_localizedstring_subs7(void* self, double a) {
    return KLocalizedString_Subs7((KLocalizedString*)self, a);
}

KLocalizedString* k_localizedstring_subs8(void* self, void* a) {
    return KLocalizedString_Subs8((KLocalizedString*)self, (QChar*)a);
}

KLocalizedString* k_localizedstring_subs9(void* self, const char* a) {
    return KLocalizedString_Subs9((KLocalizedString*)self, qstring(a));
}

KLocalizedString* k_localizedstring_subs10(void* self, void* a) {
    return KLocalizedString_Subs10((KLocalizedString*)self, (KLocalizedString*)a);
}

KLocalizedString* k_localizedstring_in_context(void* self, const char* key, const char* value) {
    return KLocalizedString_InContext((KLocalizedString*)self, qstring(key), qstring(value));
}

KLocalizedString* k_localizedstring_relax_subs(void* self) {
    return KLocalizedString_RelaxSubs((KLocalizedString*)self);
}

KLocalizedString* k_localizedstring_ignore_markup(void* self) {
    return KLocalizedString_IgnoreMarkup((KLocalizedString*)self);
}

char* k_localizedstring_untranslated_text(void* self) {
    libqt_string _str = KLocalizedString_UntranslatedText((KLocalizedString*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_localizedstring_set_application_domain(const char* domain) {
    KLocalizedString_SetApplicationDomain(qstring(domain));
}

char* k_localizedstring_application_domain() {
    libqt_string _str = KLocalizedString_ApplicationDomain();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_localizedstring_languages() {
    libqt_list _arr = KLocalizedString_Languages();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_localizedstring_languages");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void k_localizedstring_set_languages(const char* languages[static 1]) {
    size_t languages_len = libqt_strv_length(languages);
    libqt_string* languages_qstr = (libqt_string*)malloc(languages_len * sizeof(libqt_string));
    if (languages_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_localizedstring_set_languages");
        abort();
    }
    for (size_t i = 0; i < languages_len; ++i) {
        languages_qstr[i] = qstring(languages[i]);
    }
    libqt_list languages_list = qlist(languages_qstr, languages_len);
    KLocalizedString_SetLanguages(languages_list);
    free(languages_qstr);
}

void k_localizedstring_clear_languages() {
    KLocalizedString_ClearLanguages();
}

bool k_localizedstring_is_application_translated_into(const char* language) {
    return KLocalizedString_IsApplicationTranslatedInto(qstring(language));
}

libqt_list /* set of const char* */ k_localizedstring_available_application_translations() {
    return KLocalizedString_AvailableApplicationTranslations();
}

libqt_list /* set of const char* */ k_localizedstring_available_domain_translations(const char* domain) {
    return KLocalizedString_AvailableDomainTranslations(qstring(domain));
}

void k_localizedstring_add_domain_locale_dir(const char* domain, const char* path) {
    KLocalizedString_AddDomainLocaleDir(qstring(domain), qstring(path));
}

const char* k_localizedstring_localized_file_path(const char* filePath) {
    libqt_string _str = KLocalizedString_LocalizedFilePath(qstring(filePath));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedstring_remove_accelerator_marker(const char* label) {
    libqt_string _str = KLocalizedString_RemoveAcceleratorMarker(qstring(label));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KLocalizedString* k_localizedstring_subs22(void* self, int a, int fieldWidth) {
    return KLocalizedString_Subs22((KLocalizedString*)self, a, fieldWidth);
}

KLocalizedString* k_localizedstring_subs32(void* self, int a, int fieldWidth, int base) {
    return KLocalizedString_Subs32((KLocalizedString*)self, a, fieldWidth, base);
}

KLocalizedString* k_localizedstring_subs42(void* self, int a, int fieldWidth, int base, void* fillChar) {
    return KLocalizedString_Subs42((KLocalizedString*)self, a, fieldWidth, base, (QChar*)fillChar);
}

KLocalizedString* k_localizedstring_subs23(void* self, uint32_t a, int fieldWidth) {
    return KLocalizedString_Subs23((KLocalizedString*)self, a, fieldWidth);
}

KLocalizedString* k_localizedstring_subs33(void* self, uint32_t a, int fieldWidth, int base) {
    return KLocalizedString_Subs33((KLocalizedString*)self, a, fieldWidth, base);
}

KLocalizedString* k_localizedstring_subs43(void* self, uint32_t a, int fieldWidth, int base, void* fillChar) {
    return KLocalizedString_Subs43((KLocalizedString*)self, a, fieldWidth, base, (QChar*)fillChar);
}

KLocalizedString* k_localizedstring_subs24(void* self, int64_t a, int fieldWidth) {
    return KLocalizedString_Subs24((KLocalizedString*)self, a, fieldWidth);
}

KLocalizedString* k_localizedstring_subs34(void* self, int64_t a, int fieldWidth, int base) {
    return KLocalizedString_Subs34((KLocalizedString*)self, a, fieldWidth, base);
}

KLocalizedString* k_localizedstring_subs44(void* self, int64_t a, int fieldWidth, int base, void* fillChar) {
    return KLocalizedString_Subs44((KLocalizedString*)self, a, fieldWidth, base, (QChar*)fillChar);
}

KLocalizedString* k_localizedstring_subs25(void* self, uint64_t a, int fieldWidth) {
    return KLocalizedString_Subs25((KLocalizedString*)self, a, fieldWidth);
}

KLocalizedString* k_localizedstring_subs35(void* self, uint64_t a, int fieldWidth, int base) {
    return KLocalizedString_Subs35((KLocalizedString*)self, a, fieldWidth, base);
}

KLocalizedString* k_localizedstring_subs45(void* self, uint64_t a, int fieldWidth, int base, void* fillChar) {
    return KLocalizedString_Subs45((KLocalizedString*)self, a, fieldWidth, base, (QChar*)fillChar);
}

KLocalizedString* k_localizedstring_subs26(void* self, long long a, int fieldWidth) {
    return KLocalizedString_Subs26((KLocalizedString*)self, a, fieldWidth);
}

KLocalizedString* k_localizedstring_subs36(void* self, long long a, int fieldWidth, int base) {
    return KLocalizedString_Subs36((KLocalizedString*)self, a, fieldWidth, base);
}

KLocalizedString* k_localizedstring_subs46(void* self, long long a, int fieldWidth, int base, void* fillChar) {
    return KLocalizedString_Subs46((KLocalizedString*)self, a, fieldWidth, base, (QChar*)fillChar);
}

KLocalizedString* k_localizedstring_subs27(void* self, uint64_t a, int fieldWidth) {
    return KLocalizedString_Subs27((KLocalizedString*)self, a, fieldWidth);
}

KLocalizedString* k_localizedstring_subs37(void* self, uint64_t a, int fieldWidth, int base) {
    return KLocalizedString_Subs37((KLocalizedString*)self, a, fieldWidth, base);
}

KLocalizedString* k_localizedstring_subs47(void* self, uint64_t a, int fieldWidth, int base, void* fillChar) {
    return KLocalizedString_Subs47((KLocalizedString*)self, a, fieldWidth, base, (QChar*)fillChar);
}

KLocalizedString* k_localizedstring_subs28(void* self, double a, int fieldWidth) {
    return KLocalizedString_Subs28((KLocalizedString*)self, a, fieldWidth);
}

KLocalizedString* k_localizedstring_subs38(void* self, double a, int fieldWidth, char format) {
    return KLocalizedString_Subs38((KLocalizedString*)self, a, fieldWidth, format);
}

KLocalizedString* k_localizedstring_subs48(void* self, double a, int fieldWidth, char format, int precision) {
    return KLocalizedString_Subs48((KLocalizedString*)self, a, fieldWidth, format, precision);
}

KLocalizedString* k_localizedstring_subs52(void* self, double a, int fieldWidth, char format, int precision, void* fillChar) {
    return KLocalizedString_Subs52((KLocalizedString*)self, a, fieldWidth, format, precision, (QChar*)fillChar);
}

KLocalizedString* k_localizedstring_subs29(void* self, void* a, int fieldWidth) {
    return KLocalizedString_Subs29((KLocalizedString*)self, (QChar*)a, fieldWidth);
}

KLocalizedString* k_localizedstring_subs39(void* self, void* a, int fieldWidth, void* fillChar) {
    return KLocalizedString_Subs39((KLocalizedString*)self, (QChar*)a, fieldWidth, (QChar*)fillChar);
}

KLocalizedString* k_localizedstring_subs210(void* self, const char* a, int fieldWidth) {
    return KLocalizedString_Subs210((KLocalizedString*)self, qstring(a), fieldWidth);
}

KLocalizedString* k_localizedstring_subs310(void* self, const char* a, int fieldWidth, void* fillChar) {
    return KLocalizedString_Subs310((KLocalizedString*)self, qstring(a), fieldWidth, (QChar*)fillChar);
}

KLocalizedString* k_localizedstring_subs211(void* self, void* a, int fieldWidth) {
    return KLocalizedString_Subs211((KLocalizedString*)self, (KLocalizedString*)a, fieldWidth);
}

KLocalizedString* k_localizedstring_subs311(void* self, void* a, int fieldWidth, void* fillChar) {
    return KLocalizedString_Subs311((KLocalizedString*)self, (KLocalizedString*)a, fieldWidth, (QChar*)fillChar);
}

void k_localizedstring_delete(void* self) {
    KLocalizedString_Delete((KLocalizedString*)(self));
}

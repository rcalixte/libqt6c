#include "libklanguagename.hpp"
#include "libklanguagename.h"

const char* k_languagename_name_for_code(const char* code) {
    libqt_string _str = KLanguageName_NameForCode(qstring(code));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_languagename_name_for_code_in_locale(const char* code, const char* outputLocale) {
    libqt_string _str = KLanguageName_NameForCodeInLocale(qstring(code), qstring(outputLocale));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_languagename_all_language_codes() {
    libqt_list _arr = KLanguageName_AllLanguageCodes();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_languagename_all_language_codes\n");
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

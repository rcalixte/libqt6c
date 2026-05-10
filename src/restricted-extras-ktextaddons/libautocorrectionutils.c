#include "../libqchar.hpp"
#include "libautocorrectionutils.hpp"
#include "libautocorrectionutils.h"

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionutils__typographicquotes_new(void* other) {
    return TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_new((TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)other);
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionutils__typographicquotes_new2(void* other) {
    return TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_new2((TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)other);
}

void k_textautocorrectioncore__autocorrectionutils__typographicquotes_copy_assign(void* self, void* other) {
    TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_CopyAssign((TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)self, (TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)other);
}

void k_textautocorrectioncore__autocorrectionutils__typographicquotes_move_assign(void* self, void* other) {
    TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_MoveAssign((TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)self, (TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)other);
}

QChar* k_textautocorrectioncore__autocorrectionutils__typographicquotes_begin(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_Begin((TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)self);
}

void k_textautocorrectioncore__autocorrectionutils__typographicquotes_set_begin(void* self, void* begin) {
    TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_SetBegin((TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)self, (QChar*)begin);
}

QChar* k_textautocorrectioncore__autocorrectionutils__typographicquotes_end(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_End((TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)self);
}

void k_textautocorrectioncore__autocorrectionutils__typographicquotes_set_end(void* self, void* end) {
    TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_SetEnd((TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)self, (QChar*)end);
}

const char* k_textautocorrectioncore__autocorrectionutils__typographicquotes_to_string(void* self) {
    libqt_string _str = TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_ToString((TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textautocorrectioncore__autocorrectionutils__typographicquotes_is_empty(void* self) {
    return TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_IsEmpty((TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)self);
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionutils__typographicquotes_from_string(const char* str) {
    return TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_FromString(qstring(str));
}

void k_textautocorrectioncore__autocorrectionutils__typographicquotes_delete(void* self) {
    TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes_Delete((TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes*)(self));
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionutils_typographic_default_single_quotes() {
    return TextAutoCorrectionCore__AutoCorrectionUtils_TypographicDefaultSingleQuotes();
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionutils_typographic_default_double_quotes() {
    return TextAutoCorrectionCore__AutoCorrectionUtils_TypographicDefaultDoubleQuotes();
}

TextAutoCorrectionCore__AutoCorrectionUtils__TypographicQuotes* k_textautocorrectioncore__autocorrectionutils_typographic_default_french_quotes() {
    return TextAutoCorrectionCore__AutoCorrectionUtils_TypographicDefaultFrenchQuotes();
}

const char* k_textautocorrectioncore__autocorrectionutils_libreoffice_file(const char* param1) {
    libqt_string _str = TextAutoCorrectionCore__AutoCorrectionUtils_LibreofficeFile(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_textautocorrectioncore__autocorrectionutils_libre_office_auto_correction_path() {
    libqt_list _arr = TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeAutoCorrectionPath();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textautocorrectioncore__autocorrectionutils_libre_office_auto_correction_path\n");
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

const char** k_textautocorrectioncore__autocorrectionutils_search_auto_correct_libre_office_files() {
    libqt_list _arr = TextAutoCorrectionCore__AutoCorrectionUtils_SearchAutoCorrectLibreOfficeFiles();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textautocorrectioncore__autocorrectionutils_search_auto_correct_libre_office_files\n");
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

const char** k_textautocorrectioncore__autocorrectionutils_auto_correct_libre_office_language_to_string(const char* param1[static 1]) {
    size_t param1_len = libqt_strv_length(param1);
    libqt_string* param1_qstr = (libqt_string*)malloc(param1_len * sizeof(libqt_string));
    if (param1_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textautocorrectioncore__autocorrectionutils_auto_correct_libre_office_language_to_string\n");
        abort();
    }
    for (size_t i = 0; i < param1_len; ++i) {
        param1_qstr[i] = qstring(param1[i]);
    }
    libqt_list param1_list = qlist(param1_qstr, param1_len);
    libqt_list _arr = TextAutoCorrectionCore__AutoCorrectionUtils_AutoCorrectLibreOfficeLanguageToString(param1_list);
    free(param1_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textautocorrectioncore__autocorrectionutils_auto_correct_libre_office_language_to_string\n");
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

const char* k_textautocorrectioncore__autocorrectionutils_libre_office_writable_local_auto_correction_path() {
    libqt_string _str = TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeWritableLocalAutoCorrectionPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textautocorrectioncore__autocorrectionutils_contains_auto_correction_file(const char* param1, const char* param2, const char* param3) {
    libqt_string _str = TextAutoCorrectionCore__AutoCorrectionUtils_ContainsAutoCorrectionFile(qstring(param1), qstring(param2), qstring(param3));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textautocorrectioncore__autocorrectionutils_libre_office_system_path() {
    libqt_string _str = TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeSystemPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textautocorrectioncore__autocorrectionutils_libre_office_local_path() {
    libqt_string _str = TextAutoCorrectionCore__AutoCorrectionUtils_LibreOfficeLocalPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_textautocorrectioncore__autocorrectionutils_words_from_sentence(const char* param1) {
    libqt_list _arr = TextAutoCorrectionCore__AutoCorrectionUtils_WordsFromSentence(qstring(param1));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textautocorrectioncore__autocorrectionutils_words_from_sentence\n");
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

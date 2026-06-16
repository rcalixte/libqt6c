#include "../libqchar.hpp"
#include "../libqregularexpression.hpp"
#include "libkstringhandler.hpp"
#include "libkstringhandler.h"

const char* k_stringhandler_capwords(const char* text) {
    libqt_string _str = KStringHandler_Capwords(qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_stringhandler_capwords2(const char* list[static 1]) {
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = (libqt_string*)malloc(list_len * sizeof(libqt_string));
    if (list_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_stringhandler_capwords2\n");
        abort();
    }
    for (size_t i = 0; i < list_len; ++i) {
        list_qstr[i] = qstring(list[i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    libqt_list _arr = KStringHandler_Capwords2(list_list);
    free(list_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_stringhandler_capwords2\n");
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

const char* k_stringhandler_lsqueeze(const char* str, int maxlen) {
    libqt_string _str = KStringHandler_Lsqueeze(qstring(str), maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_stringhandler_csqueeze(const char* str, int maxlen) {
    libqt_string _str = KStringHandler_Csqueeze(qstring(str), maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_stringhandler_rsqueeze(const char* str, int maxlen) {
    libqt_string _str = KStringHandler_Rsqueeze(qstring(str), maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_stringhandler_perl_split(const char* sep, const char* str, int max) {
    libqt_list _arr = KStringHandler_PerlSplit(qstring(sep), qstring(str), max);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_stringhandler_perl_split\n");
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

const char** k_stringhandler_perl_split2(const char* sep, const char* s, int max) {
    libqt_list _arr = KStringHandler_PerlSplit2(qstring(sep), qstring(s), max);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_stringhandler_perl_split2\n");
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

const char** k_stringhandler_perl_split3(void* sep, const char* s, int max) {
    libqt_list _arr = KStringHandler_PerlSplit3((QChar*)sep, qstring(s), max);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_stringhandler_perl_split3\n");
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

const char** k_stringhandler_perl_split4(void* sep, const char* s, int max) {
    libqt_list _arr = KStringHandler_PerlSplit4((QRegularExpression*)sep, qstring(s), max);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_stringhandler_perl_split4\n");
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

const char* k_stringhandler_tag_urls(const char* text) {
    libqt_string _str = KStringHandler_TagUrls(qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_stringhandler_obscure(const char* str) {
    libqt_string _str = KStringHandler_Obscure(qstring(str));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_stringhandler_pre_process_wrap(const char* text) {
    libqt_string _str = KStringHandler_PreProcessWrap(qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_stringhandler_logical_length(const char* text) {
    return KStringHandler_LogicalLength(qstring(text));
}

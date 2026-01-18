#include "../libqchar.hpp"
#include "../libqregularexpression.hpp"
#include "libkstringhandler.hpp"
#include "libkstringhandler.h"

const char* k_stringhandler_capwords(const char* param1) {
    libqt_string _str = KStringHandler_Capwords(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_stringhandler_capwords2(const char* param1[static 1]) {
    size_t param1_len = libqt_strv_length(param1);
    libqt_string* param1_qstr = (libqt_string*)malloc(param1_len * sizeof(libqt_string));
    if (param1_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_stringhandler_capwords2\n");
        abort();
    }
    for (size_t i = 0; i < param1_len; ++i) {
        param1_qstr[i] = qstring(param1[i]);
    }
    libqt_list param1_list = qlist(param1_qstr, param1_len);
    libqt_list _arr = KStringHandler_Capwords2(param1_list);
    free(param1_qstr);
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

const char* k_stringhandler_lsqueeze(const char* param1, int param2) {
    libqt_string _str = KStringHandler_Lsqueeze(qstring(param1), param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_stringhandler_csqueeze(const char* param1, int param2) {
    libqt_string _str = KStringHandler_Csqueeze(qstring(param1), param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_stringhandler_rsqueeze(const char* param1, int param2) {
    libqt_string _str = KStringHandler_Rsqueeze(qstring(param1), param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_stringhandler_perl_split2(const char* param1, const char* param2, int param3) {
    libqt_list _arr = KStringHandler_PerlSplit2(qstring(param1), qstring(param2), param3);
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

const char** k_stringhandler_perl_split3(void* param1, const char* param2, int param3) {
    libqt_list _arr = KStringHandler_PerlSplit3((QChar*)param1, qstring(param2), param3);
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

const char** k_stringhandler_perl_split4(void* param1, const char* param2, int param3) {
    libqt_list _arr = KStringHandler_PerlSplit4((QRegularExpression*)param1, qstring(param2), param3);
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

const char* k_stringhandler_tag_urls(const char* param1) {
    libqt_string _str = KStringHandler_TagUrls(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_stringhandler_obscure(const char* param1) {
    libqt_string _str = KStringHandler_Obscure(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_stringhandler_pre_process_wrap(const char* param1) {
    libqt_string _str = KStringHandler_PreProcessWrap(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_stringhandler_logical_length(const char* param1) {
    return KStringHandler_LogicalLength(qstring(param1));
}

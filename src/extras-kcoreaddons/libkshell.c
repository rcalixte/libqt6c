#include "libkshell.hpp"
#include "libkshell.h"

const char** k_shell_split_args(const char* param1, int64_t param2, int32_t* param3) {
    libqt_list _arr = KShell_SplitArgs(qstring(param1), param2, param3);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_shell_split_args");
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

const char* k_shell_join_args(const char* param1[]) {
    size_t param1_len = libqt_strv_length(param1);
    libqt_string* param1_qstr = (libqt_string*)malloc(param1_len * sizeof(libqt_string));
    if (param1_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_shell_join_args");
        abort();
    }
    for (size_t i = 0; i < param1_len; ++i) {
        param1_qstr[i] = qstring(param1[i]);
    }
    libqt_list param1_list = qlist(param1_qstr, param1_len);
    libqt_string _str = KShell_JoinArgs(param1_list);
    free(param1_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shell_quote_arg(const char* param1) {
    libqt_string _str = KShell_QuoteArg(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shell_tilde_expand(const char* param1) {
    libqt_string _str = KShell_TildeExpand(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shell_tilde_collapse(const char* param1) {
    libqt_string _str = KShell_TildeCollapse(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

#include "libkshell.hpp"
#include "libkshell.h"

const char** k_shell_split_args(const char* cmd, int32_t flags, int32_t* err) {
    libqt_list _arr = KShell_SplitArgs(qstring(cmd), flags, err);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shell_split_args\n");
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

const char* k_shell_join_args(const char* args[static 1]) {
    size_t args_len = libqt_strv_length(args);
    libqt_string* args_qstr = (libqt_string*)malloc(args_len * sizeof(libqt_string));
    if (args_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shell_join_args\n");
        abort();
    }
    for (size_t i = 0; i < args_len; ++i) {
        args_qstr[i] = qstring(args[i]);
    }
    libqt_list args_list = qlist(args_qstr, args_len);
    libqt_string _str = KShell_JoinArgs(args_list);
    free(args_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shell_quote_arg(const char* arg) {
    libqt_string _str = KShell_QuoteArg(qstring(arg));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shell_tilde_expand(const char* path) {
    libqt_string _str = KShell_TildeExpand(qstring(path));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shell_tilde_collapse(const char* path) {
    libqt_string _str = KShell_TildeCollapse(qstring(path));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

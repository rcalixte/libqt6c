#include "../libqurl.hpp"
#include "libkfileutils.hpp"
#include "libkfileutils.h"

const char* k_fileutils_suggest_name(void* param1, const char* param2) {
    libqt_string _str = KFileUtils_SuggestName((QUrl*)param1, qstring(param2));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileutils_make_suggested_name(const char* param1) {
    libqt_string _str = KFileUtils_MakeSuggestedName(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_fileutils_find_all_unique_files(const char* param1[], const char* param2[]) {
    size_t param1_len = libqt_strv_length(param1);
    libqt_string* param1_qstr = (libqt_string*)malloc(param1_len * sizeof(libqt_string));
    if (param1_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_fileutils_find_all_unique_files");
        abort();
    }
    for (size_t i = 0; i < param1_len; ++i) {
        param1_qstr[i] = qstring(param1[i]);
    }
    libqt_list param1_list = qlist(param1_qstr, param1_len);
    size_t param2_len = libqt_strv_length(param2);
    libqt_string* param2_qstr = (libqt_string*)malloc(param2_len * sizeof(libqt_string));
    if (param2_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_fileutils_find_all_unique_files");
        abort();
    }
    for (size_t i = 0; i < param2_len; ++i) {
        param2_qstr[i] = qstring(param2[i]);
    }
    libqt_list param2_list = qlist(param2_qstr, param2_len);
    libqt_list _arr = KFileUtils_FindAllUniqueFiles(param1_list, param2_list);
    free(param1_qstr);
    free(param2_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_fileutils_find_all_unique_files");
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

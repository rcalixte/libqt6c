#include "libkrecentdirs.hpp"
#include "libkrecentdirs.h"

const char** k_recentdirs_list(const char* param1) {
    libqt_list _arr = KRecentDirs_List(qstring(param1));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_recentdirs_list");
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

const char* k_recentdirs_dir(const char* param1) {
    libqt_string _str = KRecentDirs_Dir(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_recentdirs_add(const char* param1, const char* param2) {
    KRecentDirs_Add(qstring(param1), qstring(param2));
}

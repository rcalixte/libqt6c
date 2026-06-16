#include "../libqurl.hpp"
#include "libkfileutils.hpp"
#include "libkfileutils.h"

const char* k_fileutils_suggest_name(void* baseURL, const char* oldName) {
    libqt_string _str = KFileUtils_SuggestName((QUrl*)baseURL, qstring(oldName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileutils_make_suggested_name(const char* oldName) {
    libqt_string _str = KFileUtils_MakeSuggestedName(qstring(oldName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_fileutils_find_all_unique_files(const char* dirs[static 1], const char* nameFilters[static 1]) {
    size_t dirs_len = libqt_strv_length(dirs);
    libqt_string* dirs_qstr = (libqt_string*)malloc(dirs_len * sizeof(libqt_string));
    if (dirs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fileutils_find_all_unique_files\n");
        abort();
    }
    for (size_t i = 0; i < dirs_len; ++i) {
        dirs_qstr[i] = qstring(dirs[i]);
    }
    libqt_list dirs_list = qlist(dirs_qstr, dirs_len);
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = (libqt_string*)malloc(nameFilters_len * sizeof(libqt_string));
    if (nameFilters_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fileutils_find_all_unique_files\n");
        abort();
    }
    for (size_t i = 0; i < nameFilters_len; ++i) {
        nameFilters_qstr[i] = qstring(nameFilters[i]);
    }
    libqt_list nameFilters_list = qlist(nameFilters_qstr, nameFilters_len);
    libqt_list _arr = KFileUtils_FindAllUniqueFiles(dirs_list, nameFilters_list);
    free(dirs_qstr);
    free(nameFilters_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fileutils_find_all_unique_files\n");
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

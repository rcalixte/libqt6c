#include "libqstandardpaths.hpp"
#include "libqstandardpaths.h"

const char* q_standardpaths_writable_location(int64_t typeVal) {
    libqt_string _str = QStandardPaths_WritableLocation(typeVal);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_standardpaths_standard_locations(int64_t typeVal) {
    libqt_list _arr = QStandardPaths_StandardLocations(typeVal);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_standardpaths_standard_locations");
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

const char* q_standardpaths_locate(int64_t typeVal, const char* fileName) {
    libqt_string _str = QStandardPaths_Locate(typeVal, qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_standardpaths_locate_all(int64_t typeVal, const char* fileName) {
    libqt_list _arr = QStandardPaths_LocateAll(typeVal, qstring(fileName));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_standardpaths_locate_all");
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

const char* q_standardpaths_display_name(int64_t typeVal) {
    libqt_string _str = QStandardPaths_DisplayName(typeVal);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_standardpaths_find_executable(const char* executableName) {
    libqt_string _str = QStandardPaths_FindExecutable(qstring(executableName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_standardpaths_set_test_mode_enabled(bool testMode) {
    QStandardPaths_SetTestModeEnabled(testMode);
}

bool q_standardpaths_is_test_mode_enabled() {
    return QStandardPaths_IsTestModeEnabled();
}

const char* q_standardpaths_locate3(int64_t typeVal, const char* fileName, int64_t options) {
    libqt_string _str = QStandardPaths_Locate3(typeVal, qstring(fileName), options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_standardpaths_locate_all3(int64_t typeVal, const char* fileName, int64_t options) {
    libqt_list _arr = QStandardPaths_LocateAll3(typeVal, qstring(fileName), options);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_standardpaths_locate_all3");
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

const char* q_standardpaths_find_executable2(const char* executableName, const char* paths[]) {
    size_t paths_len = libqt_strv_length(paths);
    libqt_string* paths_qstr = (libqt_string*)malloc(paths_len * sizeof(libqt_string));
    if (paths_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_standardpaths_find_executable2");
        abort();
    }
    for (size_t i = 0; i < paths_len; ++i) {
        paths_qstr[i] = qstring(paths[i]);
    }
    libqt_list paths_list = qlist(paths_qstr, paths_len);
    libqt_string _str = QStandardPaths_FindExecutable2(qstring(executableName), paths_list);
    free(paths_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

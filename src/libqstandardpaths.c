#include <string.h>
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
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
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
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
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
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

const char* q_standardpaths_find_executable2(const char* executableName, const char* paths[]) {
    size_t paths_len = libqt_strv_length(paths);
    libqt_string* paths_qstr = malloc(paths_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < paths_len; ++_i) {
        paths_qstr[_i] = qstring(paths[_i]);
    }
    libqt_list paths_list = qstrlist(paths_qstr, paths_len);
    libqt_string _str = QStandardPaths_FindExecutable2(qstring(executableName), paths_list);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

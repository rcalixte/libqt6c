#include "libqchar.hpp"
#include "libqfileinfo.hpp"
#include "libqnamespace.hpp"
#include "libqdir.hpp"
#include "libqdir.h"

QDir* q_dir_new(void* param1) {
    return QDir_new((QDir*)param1);
}

QDir* q_dir_new2() {
    return QDir_new2();
}

QDir* q_dir_new3(const char* path, const char* nameFilter) {
    return QDir_new3(qstring(path), qstring(nameFilter));
}

QDir* q_dir_new4(const char* path) {
    return QDir_new4(qstring(path));
}

QDir* q_dir_new5(const char* path, const char* nameFilter, int32_t sort) {
    return QDir_new5(qstring(path), qstring(nameFilter), sort);
}

QDir* q_dir_new6(const char* path, const char* nameFilter, int32_t sort, int32_t filter) {
    return QDir_new6(qstring(path), qstring(nameFilter), sort, filter);
}

void q_dir_operator_assign(void* self, void* param1) {
    QDir_OperatorAssign((QDir*)self, (QDir*)param1);
}

void q_dir_swap(void* self, void* other) {
    QDir_Swap((QDir*)self, (QDir*)other);
}

void q_dir_set_path(void* self, const char* path) {
    QDir_SetPath((QDir*)self, qstring(path));
}

const char* q_dir_path(void* self) {
    libqt_string _str = QDir_Path((QDir*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dir_absolute_path(void* self) {
    libqt_string _str = QDir_AbsolutePath((QDir*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dir_canonical_path(void* self) {
    libqt_string _str = QDir_CanonicalPath((QDir*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dir_set_search_paths(const char* prefix, const char* searchPaths[static 1]) {
    size_t searchPaths_len = libqt_strv_length(searchPaths);
    libqt_string* searchPaths_qstr = (libqt_string*)malloc(searchPaths_len * sizeof(libqt_string));
    if (searchPaths_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_set_search_paths");
        abort();
    }
    for (size_t i = 0; i < searchPaths_len; ++i) {
        searchPaths_qstr[i] = qstring(searchPaths[i]);
    }
    libqt_list searchPaths_list = qlist(searchPaths_qstr, searchPaths_len);
    QDir_SetSearchPaths(qstring(prefix), searchPaths_list);
    free(searchPaths_qstr);
}

void q_dir_add_search_path(const char* prefix, const char* path) {
    QDir_AddSearchPath(qstring(prefix), qstring(path));
}

const char** q_dir_search_paths(const char* prefix) {
    libqt_list _arr = QDir_SearchPaths(qstring(prefix));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_search_paths");
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

const char* q_dir_dir_name(void* self) {
    libqt_string _str = QDir_DirName((QDir*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dir_file_path(void* self, const char* fileName) {
    libqt_string _str = QDir_FilePath((QDir*)self, qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dir_absolute_file_path(void* self, const char* fileName) {
    libqt_string _str = QDir_AbsoluteFilePath((QDir*)self, qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dir_relative_file_path(void* self, const char* fileName) {
    libqt_string _str = QDir_RelativeFilePath((QDir*)self, qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dir_to_native_separators(const char* pathName) {
    libqt_string _str = QDir_ToNativeSeparators(qstring(pathName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dir_from_native_separators(const char* pathName) {
    libqt_string _str = QDir_FromNativeSeparators(qstring(pathName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dir_cd(void* self, const char* dirName) {
    return QDir_Cd((QDir*)self, qstring(dirName));
}

bool q_dir_cd_up(void* self) {
    return QDir_CdUp((QDir*)self);
}

const char** q_dir_name_filters(void* self) {
    libqt_list _arr = QDir_NameFilters((QDir*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_name_filters");
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

void q_dir_set_name_filters(void* self, const char* nameFilters[static 1]) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = (libqt_string*)malloc(nameFilters_len * sizeof(libqt_string));
    if (nameFilters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_set_name_filters");
        abort();
    }
    for (size_t i = 0; i < nameFilters_len; ++i) {
        nameFilters_qstr[i] = qstring(nameFilters[i]);
    }
    libqt_list nameFilters_list = qlist(nameFilters_qstr, nameFilters_len);
    QDir_SetNameFilters((QDir*)self, nameFilters_list);
    free(nameFilters_qstr);
}

int32_t q_dir_filter(void* self) {
    return QDir_Filter((QDir*)self);
}

void q_dir_set_filter(void* self, int32_t filter) {
    QDir_SetFilter((QDir*)self, filter);
}

int32_t q_dir_sorting(void* self) {
    return QDir_Sorting((QDir*)self);
}

void q_dir_set_sorting(void* self, int32_t sort) {
    QDir_SetSorting((QDir*)self, sort);
}

int64_t q_dir_count(void* self) {
    return QDir_Count((QDir*)self);
}

bool q_dir_is_empty(void* self) {
    return QDir_IsEmpty((QDir*)self);
}

const char* q_dir_operator_subscript(void* self, long long param1) {
    libqt_string _str = QDir_OperatorSubscript((QDir*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_dir_name_filters_from_string(const char* nameFilter) {
    libqt_list _arr = QDir_NameFiltersFromString(qstring(nameFilter));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_name_filters_from_string");
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

const char** q_dir_entry_list(void* self) {
    libqt_list _arr = QDir_EntryList((QDir*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_entry_list");
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

const char** q_dir_entry_list2(void* self, const char* nameFilters[static 1]) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = (libqt_string*)malloc(nameFilters_len * sizeof(libqt_string));
    if (nameFilters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_entry_list2");
        abort();
    }
    for (size_t i = 0; i < nameFilters_len; ++i) {
        nameFilters_qstr[i] = qstring(nameFilters[i]);
    }
    libqt_list nameFilters_list = qlist(nameFilters_qstr, nameFilters_len);
    libqt_list _arr = QDir_EntryList2((QDir*)self, nameFilters_list);
    free(nameFilters_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_entry_list2");
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

libqt_list /* of QFileInfo* */ q_dir_entry_info_list(void* self) {
    libqt_list _arr = QDir_EntryInfoList((QDir*)self);
    return _arr;
}

libqt_list /* of QFileInfo* */ q_dir_entry_info_list2(void* self, const char* nameFilters[static 1]) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = (libqt_string*)malloc(nameFilters_len * sizeof(libqt_string));
    if (nameFilters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_entry_info_list2");
        abort();
    }
    for (size_t i = 0; i < nameFilters_len; ++i) {
        nameFilters_qstr[i] = qstring(nameFilters[i]);
    }
    libqt_list nameFilters_list = qlist(nameFilters_qstr, nameFilters_len);
    libqt_list _arr = QDir_EntryInfoList2((QDir*)self, nameFilters_list);
    free(nameFilters_qstr);
    return _arr;
}

bool q_dir_rmdir(void* self, const char* dirName) {
    return QDir_Rmdir((QDir*)self, qstring(dirName));
}

bool q_dir_rmpath(void* self, const char* dirPath) {
    return QDir_Rmpath((QDir*)self, qstring(dirPath));
}

bool q_dir_remove_recursively(void* self) {
    return QDir_RemoveRecursively((QDir*)self);
}

bool q_dir_is_readable(void* self) {
    return QDir_IsReadable((QDir*)self);
}

bool q_dir_exists(void* self) {
    return QDir_Exists((QDir*)self);
}

bool q_dir_is_root(void* self) {
    return QDir_IsRoot((QDir*)self);
}

bool q_dir_is_relative_path(const char* path) {
    return QDir_IsRelativePath(qstring(path));
}

bool q_dir_is_absolute_path(const char* path) {
    return QDir_IsAbsolutePath(qstring(path));
}

bool q_dir_is_relative(void* self) {
    return QDir_IsRelative((QDir*)self);
}

bool q_dir_is_absolute(void* self) {
    return QDir_IsAbsolute((QDir*)self);
}

bool q_dir_make_absolute(void* self) {
    return QDir_MakeAbsolute((QDir*)self);
}

bool q_dir_remove(void* self, const char* fileName) {
    return QDir_Remove((QDir*)self, qstring(fileName));
}

bool q_dir_rename(void* self, const char* oldName, const char* newName) {
    return QDir_Rename((QDir*)self, qstring(oldName), qstring(newName));
}

bool q_dir_exists2(void* self, const char* name) {
    return QDir_Exists2((QDir*)self, qstring(name));
}

libqt_list /* of QFileInfo* */ q_dir_drives() {
    libqt_list _arr = QDir_Drives();
    return _arr;
}

QChar* q_dir_list_separator() {
    return QDir_ListSeparator();
}

QChar* q_dir_separator() {
    return QDir_Separator();
}

bool q_dir_set_current(const char* path) {
    return QDir_SetCurrent(qstring(path));
}

QDir* q_dir_current() {
    return QDir_Current();
}

const char* q_dir_current_path() {
    libqt_string _str = QDir_CurrentPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDir* q_dir_home() {
    return QDir_Home();
}

const char* q_dir_home_path() {
    libqt_string _str = QDir_HomePath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDir* q_dir_root() {
    return QDir_Root();
}

const char* q_dir_root_path() {
    libqt_string _str = QDir_RootPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDir* q_dir_temp() {
    return QDir_Temp();
}

const char* q_dir_temp_path() {
    libqt_string _str = QDir_TempPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dir_match(const char* filters[static 1], const char* fileName) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = (libqt_string*)malloc(filters_len * sizeof(libqt_string));
    if (filters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_match");
        abort();
    }
    for (size_t i = 0; i < filters_len; ++i) {
        filters_qstr[i] = qstring(filters[i]);
    }
    libqt_list filters_list = qlist(filters_qstr, filters_len);
    bool _out = QDir_Match(filters_list, qstring(fileName));
    free(filters_qstr);
    return _out;
}

bool q_dir_match2(const char* filter, const char* fileName) {
    return QDir_Match2(qstring(filter), qstring(fileName));
}

const char* q_dir_clean_path(const char* path) {
    libqt_string _str = QDir_CleanPath(qstring(path));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dir_refresh(void* self) {
    QDir_Refresh((QDir*)self);
}

int64_t q_dir_count1(void* self, void* param1) {
    return QDir_Count1((QDir*)self, (Disambiguated_t*)param1);
}

bool q_dir_is_empty1(void* self, int32_t filters) {
    return QDir_IsEmpty1((QDir*)self, filters);
}

const char** q_dir_entry_list1(void* self, int32_t filters) {
    libqt_list _arr = QDir_EntryList1((QDir*)self, filters);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_entry_list1");
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

const char** q_dir_entry_list22(void* self, int32_t filters, int32_t sort) {
    libqt_list _arr = QDir_EntryList22((QDir*)self, filters, sort);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_entry_list22");
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

const char** q_dir_entry_list23(void* self, const char* nameFilters[static 1], int32_t filters) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = (libqt_string*)malloc(nameFilters_len * sizeof(libqt_string));
    if (nameFilters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_entry_list23");
        abort();
    }
    for (size_t i = 0; i < nameFilters_len; ++i) {
        nameFilters_qstr[i] = qstring(nameFilters[i]);
    }
    libqt_list nameFilters_list = qlist(nameFilters_qstr, nameFilters_len);
    libqt_list _arr = QDir_EntryList23((QDir*)self, nameFilters_list, filters);
    free(nameFilters_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_entry_list23");
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

const char** q_dir_entry_list3(void* self, const char* nameFilters[static 1], int32_t filters, int32_t sort) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = (libqt_string*)malloc(nameFilters_len * sizeof(libqt_string));
    if (nameFilters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_entry_list3");
        abort();
    }
    for (size_t i = 0; i < nameFilters_len; ++i) {
        nameFilters_qstr[i] = qstring(nameFilters[i]);
    }
    libqt_list nameFilters_list = qlist(nameFilters_qstr, nameFilters_len);
    libqt_list _arr = QDir_EntryList3((QDir*)self, nameFilters_list, filters, sort);
    free(nameFilters_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_entry_list3");
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

libqt_list /* of QFileInfo* */ q_dir_entry_info_list1(void* self, int32_t filters) {
    libqt_list _arr = QDir_EntryInfoList1((QDir*)self, filters);
    return _arr;
}

libqt_list /* of QFileInfo* */ q_dir_entry_info_list22(void* self, int32_t filters, int32_t sort) {
    libqt_list _arr = QDir_EntryInfoList22((QDir*)self, filters, sort);
    return _arr;
}

libqt_list /* of QFileInfo* */ q_dir_entry_info_list23(void* self, const char* nameFilters[static 1], int32_t filters) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = (libqt_string*)malloc(nameFilters_len * sizeof(libqt_string));
    if (nameFilters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_entry_info_list23");
        abort();
    }
    for (size_t i = 0; i < nameFilters_len; ++i) {
        nameFilters_qstr[i] = qstring(nameFilters[i]);
    }
    libqt_list nameFilters_list = qlist(nameFilters_qstr, nameFilters_len);
    libqt_list _arr = QDir_EntryInfoList23((QDir*)self, nameFilters_list, filters);
    free(nameFilters_qstr);
    return _arr;
}

libqt_list /* of QFileInfo* */ q_dir_entry_info_list3(void* self, const char* nameFilters[static 1], int32_t filters, int32_t sort) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = (libqt_string*)malloc(nameFilters_len * sizeof(libqt_string));
    if (nameFilters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dir_entry_info_list3");
        abort();
    }
    for (size_t i = 0; i < nameFilters_len; ++i) {
        nameFilters_qstr[i] = qstring(nameFilters[i]);
    }
    libqt_list nameFilters_list = qlist(nameFilters_qstr, nameFilters_len);
    libqt_list _arr = QDir_EntryInfoList3((QDir*)self, nameFilters_list, filters, sort);
    free(nameFilters_qstr);
    return _arr;
}

void q_dir_delete(void* self) {
    QDir_Delete((QDir*)(self));
}

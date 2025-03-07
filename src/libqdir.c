#include "libqchar.hpp"
#include "libqfileinfo.hpp"
#include <string.h>
#include "libqdir.hpp"
#include "libqdir.h"

/// https://doc.qt.io/qt-6/qdir.html

/// q_dir_new constructs a new QDir object.
///
/// ``` QDir* param1 ```
QDir* q_dir_new(void* param1) {
    return QDir_new((QDir*)param1);
}

/// q_dir_new2 constructs a new QDir object.
///
///
QDir* q_dir_new2() {
    return QDir_new2();
}

/// q_dir_new3 constructs a new QDir object.
///
/// ``` const char* path, const char* nameFilter ```
QDir* q_dir_new3(const char* path, const char* nameFilter) {
    return QDir_new3(qstring(path), qstring(nameFilter));
}

/// q_dir_new4 constructs a new QDir object.
///
/// ``` const char* path ```
QDir* q_dir_new4(const char* path) {
    return QDir_new4(qstring(path));
}

/// q_dir_new5 constructs a new QDir object.
///
/// ``` const char* path, const char* nameFilter, int sort ```
QDir* q_dir_new5(const char* path, const char* nameFilter, int64_t sort) {
    return QDir_new5(qstring(path), qstring(nameFilter), sort);
}

/// q_dir_new6 constructs a new QDir object.
///
/// ``` const char* path, const char* nameFilter, int sort, int filter ```
QDir* q_dir_new6(const char* path, const char* nameFilter, int64_t sort, int64_t filter) {
    return QDir_new6(qstring(path), qstring(nameFilter), sort, filter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#operator=)
///
/// ``` QDir* self, QDir* param1 ```
void q_dir_operator_assign(void* self, void* param1) {
    QDir_OperatorAssign((QDir*)self, (QDir*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#swap)
///
/// ``` QDir* self, QDir* other ```
void q_dir_swap(void* self, void* other) {
    QDir_Swap((QDir*)self, (QDir*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#setPath)
///
/// ``` QDir* self, const char* path ```
void q_dir_set_path(void* self, const char* path) {
    QDir_SetPath((QDir*)self, qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#path)
///
/// ``` QDir* self ```
const char* q_dir_path(void* self) {
    libqt_string _str = QDir_Path((QDir*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#absolutePath)
///
/// ``` QDir* self ```
const char* q_dir_absolute_path(void* self) {
    libqt_string _str = QDir_AbsolutePath((QDir*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#canonicalPath)
///
/// ``` QDir* self ```
const char* q_dir_canonical_path(void* self) {
    libqt_string _str = QDir_CanonicalPath((QDir*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#setSearchPaths)
///
/// ``` const char* prefix, const char* searchPaths[] ```
void q_dir_set_search_paths(const char* prefix, const char* searchPaths[]) {
    size_t searchPaths_len = libqt_strv_length(searchPaths);
    libqt_string* searchPaths_qstr = malloc(searchPaths_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < searchPaths_len; ++_i) {
        searchPaths_qstr[_i] = qstring(searchPaths[_i]);
    }
    libqt_list searchPaths_list = qstrlist(searchPaths_qstr, searchPaths_len);
    QDir_SetSearchPaths(qstring(prefix), searchPaths_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#addSearchPath)
///
/// ``` const char* prefix, const char* path ```
void q_dir_add_search_path(const char* prefix, const char* path) {
    QDir_AddSearchPath(qstring(prefix), qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#searchPaths)
///
/// ``` const char* prefix ```
const char** q_dir_search_paths(const char* prefix) {
    libqt_list _arr = QDir_SearchPaths(qstring(prefix));
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

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#dirName)
///
/// ``` QDir* self ```
const char* q_dir_dir_name(void* self) {
    libqt_string _str = QDir_DirName((QDir*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#filePath)
///
/// ``` QDir* self, const char* fileName ```
const char* q_dir_file_path(void* self, const char* fileName) {
    libqt_string _str = QDir_FilePath((QDir*)self, qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#absoluteFilePath)
///
/// ``` QDir* self, const char* fileName ```
const char* q_dir_absolute_file_path(void* self, const char* fileName) {
    libqt_string _str = QDir_AbsoluteFilePath((QDir*)self, qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#relativeFilePath)
///
/// ``` QDir* self, const char* fileName ```
const char* q_dir_relative_file_path(void* self, const char* fileName) {
    libqt_string _str = QDir_RelativeFilePath((QDir*)self, qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#toNativeSeparators)
///
/// ``` const char* pathName ```
const char* q_dir_to_native_separators(const char* pathName) {
    libqt_string _str = QDir_ToNativeSeparators(qstring(pathName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#fromNativeSeparators)
///
/// ``` const char* pathName ```
const char* q_dir_from_native_separators(const char* pathName) {
    libqt_string _str = QDir_FromNativeSeparators(qstring(pathName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#cd)
///
/// ``` QDir* self, const char* dirName ```
bool q_dir_cd(void* self, const char* dirName) {
    return QDir_Cd((QDir*)self, qstring(dirName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#cdUp)
///
/// ``` QDir* self ```
bool q_dir_cd_up(void* self) {
    return QDir_CdUp((QDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#nameFilters)
///
/// ``` QDir* self ```
const char** q_dir_name_filters(void* self) {
    libqt_list _arr = QDir_NameFilters((QDir*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#setNameFilters)
///
/// ``` QDir* self, const char* nameFilters[] ```
void q_dir_set_name_filters(void* self, const char* nameFilters[]) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = malloc(nameFilters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < nameFilters_len; ++_i) {
        nameFilters_qstr[_i] = qstring(nameFilters[_i]);
    }
    libqt_list nameFilters_list = qstrlist(nameFilters_qstr, nameFilters_len);
    QDir_SetNameFilters((QDir*)self, nameFilters_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#filter)
///
/// ``` QDir* self ```
int64_t q_dir_filter(void* self) {
    return QDir_Filter((QDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#setFilter)
///
/// ``` QDir* self, int filter ```
void q_dir_set_filter(void* self, int64_t filter) {
    QDir_SetFilter((QDir*)self, filter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#sorting)
///
/// ``` QDir* self ```
int64_t q_dir_sorting(void* self) {
    return QDir_Sorting((QDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#setSorting)
///
/// ``` QDir* self, int sort ```
void q_dir_set_sorting(void* self, int64_t sort) {
    QDir_SetSorting((QDir*)self, sort);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#count)
///
/// ``` QDir* self ```
uint32_t q_dir_count(void* self) {
    return QDir_Count((QDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isEmpty)
///
/// ``` QDir* self ```
bool q_dir_is_empty(void* self) {
    return QDir_IsEmpty((QDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#operator[])
///
/// ``` QDir* self, int param1 ```
const char* q_dir_operator_subscript(void* self, int param1) {
    libqt_string _str = QDir_OperatorSubscript((QDir*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#nameFiltersFromString)
///
/// ``` const char* nameFilter ```
const char** q_dir_name_filters_from_string(const char* nameFilter) {
    libqt_list _arr = QDir_NameFiltersFromString(qstring(nameFilter));
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

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// ``` QDir* self ```
const char** q_dir_entry_list(void* self) {
    libqt_list _arr = QDir_EntryList((QDir*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// ``` QDir* self, const char* nameFilters[] ```
const char** q_dir_entry_list_with_name_filters(void* self, const char* nameFilters[]) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = malloc(nameFilters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < nameFilters_len; ++_i) {
        nameFilters_qstr[_i] = qstring(nameFilters[_i]);
    }
    libqt_list nameFilters_list = qstrlist(nameFilters_qstr, nameFilters_len);
    libqt_list _arr = QDir_EntryListWithNameFilters((QDir*)self, nameFilters_list);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// ``` QDir* self ```
libqt_list /* of QFileInfo* */ q_dir_entry_info_list(void* self) {
    libqt_list _arr = QDir_EntryInfoList((QDir*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// ``` QDir* self, const char* nameFilters[] ```
libqt_list /* of QFileInfo* */ q_dir_entry_info_list_with_name_filters(void* self, const char* nameFilters[]) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = malloc(nameFilters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < nameFilters_len; ++_i) {
        nameFilters_qstr[_i] = qstring(nameFilters[_i]);
    }
    libqt_list nameFilters_list = qstrlist(nameFilters_qstr, nameFilters_len);
    libqt_list _arr = QDir_EntryInfoListWithNameFilters((QDir*)self, nameFilters_list);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#mkdir)
///
/// ``` QDir* self, const char* dirName ```
bool q_dir_mkdir(void* self, const char* dirName) {
    return QDir_Mkdir((QDir*)self, qstring(dirName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#mkdir)
///
/// ``` QDir* self, const char* dirName, int permissions ```
bool q_dir_mkdir2(void* self, const char* dirName, int64_t permissions) {
    return QDir_Mkdir2((QDir*)self, qstring(dirName), permissions);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#rmdir)
///
/// ``` QDir* self, const char* dirName ```
bool q_dir_rmdir(void* self, const char* dirName) {
    return QDir_Rmdir((QDir*)self, qstring(dirName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#mkpath)
///
/// ``` QDir* self, const char* dirPath ```
bool q_dir_mkpath(void* self, const char* dirPath) {
    return QDir_Mkpath((QDir*)self, qstring(dirPath));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#rmpath)
///
/// ``` QDir* self, const char* dirPath ```
bool q_dir_rmpath(void* self, const char* dirPath) {
    return QDir_Rmpath((QDir*)self, qstring(dirPath));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#removeRecursively)
///
/// ``` QDir* self ```
bool q_dir_remove_recursively(void* self) {
    return QDir_RemoveRecursively((QDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isReadable)
///
/// ``` QDir* self ```
bool q_dir_is_readable(void* self) {
    return QDir_IsReadable((QDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#exists)
///
/// ``` QDir* self ```
bool q_dir_exists(void* self) {
    return QDir_Exists((QDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isRoot)
///
/// ``` QDir* self ```
bool q_dir_is_root(void* self) {
    return QDir_IsRoot((QDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isRelativePath)
///
/// ``` const char* path ```
bool q_dir_is_relative_path(const char* path) {
    return QDir_IsRelativePath(qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isAbsolutePath)
///
/// ``` const char* path ```
bool q_dir_is_absolute_path(const char* path) {
    return QDir_IsAbsolutePath(qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isRelative)
///
/// ``` QDir* self ```
bool q_dir_is_relative(void* self) {
    return QDir_IsRelative((QDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isAbsolute)
///
/// ``` QDir* self ```
bool q_dir_is_absolute(void* self) {
    return QDir_IsAbsolute((QDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#makeAbsolute)
///
/// ``` QDir* self ```
bool q_dir_make_absolute(void* self) {
    return QDir_MakeAbsolute((QDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#operator==)
///
/// ``` QDir* self, QDir* dir ```
bool q_dir_operator_equal(void* self, void* dir) {
    return QDir_OperatorEqual((QDir*)self, (QDir*)dir);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#operator!=)
///
/// ``` QDir* self, QDir* dir ```
bool q_dir_operator_not_equal(void* self, void* dir) {
    return QDir_OperatorNotEqual((QDir*)self, (QDir*)dir);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#remove)
///
/// ``` QDir* self, const char* fileName ```
bool q_dir_remove(void* self, const char* fileName) {
    return QDir_Remove((QDir*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#rename)
///
/// ``` QDir* self, const char* oldName, const char* newName ```
bool q_dir_rename(void* self, const char* oldName, const char* newName) {
    return QDir_Rename((QDir*)self, qstring(oldName), qstring(newName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#exists)
///
/// ``` QDir* self, const char* name ```
bool q_dir_exists_with_name(void* self, const char* name) {
    return QDir_ExistsWithName((QDir*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#drives)
///
///
libqt_list /* of QFileInfo* */ q_dir_drives() {
    libqt_list _arr = QDir_Drives();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#listSeparator)
///
///
QChar* q_dir_list_separator() {
    return QDir_ListSeparator();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#separator)
///
///
QChar* q_dir_separator() {
    return QDir_Separator();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#setCurrent)
///
/// ``` const char* path ```
bool q_dir_set_current(const char* path) {
    return QDir_SetCurrent(qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#current)
///
///
QDir* q_dir_current() {
    return QDir_Current();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#currentPath)
///
///
const char* q_dir_current_path() {
    libqt_string _str = QDir_CurrentPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#home)
///
///
QDir* q_dir_home() {
    return QDir_Home();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#homePath)
///
///
const char* q_dir_home_path() {
    libqt_string _str = QDir_HomePath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#root)
///
///
QDir* q_dir_root() {
    return QDir_Root();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#rootPath)
///
///
const char* q_dir_root_path() {
    libqt_string _str = QDir_RootPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#temp)
///
///
QDir* q_dir_temp() {
    return QDir_Temp();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#tempPath)
///
///
const char* q_dir_temp_path() {
    libqt_string _str = QDir_TempPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#match)
///
/// ``` const char* filters[], const char* fileName ```
bool q_dir_match(const char* filters[], const char* fileName) {
    size_t filters_len = libqt_strv_length(filters);
    libqt_string* filters_qstr = malloc(filters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < filters_len; ++_i) {
        filters_qstr[_i] = qstring(filters[_i]);
    }
    libqt_list filters_list = qstrlist(filters_qstr, filters_len);
    return QDir_Match(filters_list, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#match)
///
/// ``` const char* filter, const char* fileName ```
bool q_dir_match2(const char* filter, const char* fileName) {
    return QDir_Match2(qstring(filter), qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#cleanPath)
///
/// ``` const char* path ```
const char* q_dir_clean_path(const char* path) {
    libqt_string _str = QDir_CleanPath(qstring(path));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#refresh)
///
/// ``` QDir* self ```
void q_dir_refresh(void* self) {
    QDir_Refresh((QDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isEmpty)
///
/// ``` QDir* self, int filters ```
bool q_dir_is_empty1(void* self, int64_t filters) {
    return QDir_IsEmpty1((QDir*)self, filters);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// ``` QDir* self, int filters ```
const char** q_dir_entry_list1(void* self, int64_t filters) {
    libqt_list _arr = QDir_EntryList1((QDir*)self, filters);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// ``` QDir* self, int filters, int sort ```
const char** q_dir_entry_list2(void* self, int64_t filters, int64_t sort) {
    libqt_list _arr = QDir_EntryList2((QDir*)self, filters, sort);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// ``` QDir* self, const char* nameFilters[], int filters ```
const char** q_dir_entry_list22(void* self, const char* nameFilters[], int64_t filters) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = malloc(nameFilters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < nameFilters_len; ++_i) {
        nameFilters_qstr[_i] = qstring(nameFilters[_i]);
    }
    libqt_list nameFilters_list = qstrlist(nameFilters_qstr, nameFilters_len);
    libqt_list _arr = QDir_EntryList22((QDir*)self, nameFilters_list, filters);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// ``` QDir* self, const char* nameFilters[], int filters, int sort ```
const char** q_dir_entry_list3(void* self, const char* nameFilters[], int64_t filters, int64_t sort) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = malloc(nameFilters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < nameFilters_len; ++_i) {
        nameFilters_qstr[_i] = qstring(nameFilters[_i]);
    }
    libqt_list nameFilters_list = qstrlist(nameFilters_qstr, nameFilters_len);
    libqt_list _arr = QDir_EntryList3((QDir*)self, nameFilters_list, filters, sort);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// ``` QDir* self, int filters ```
libqt_list /* of QFileInfo* */ q_dir_entry_info_list1(void* self, int64_t filters) {
    libqt_list _arr = QDir_EntryInfoList1((QDir*)self, filters);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// ``` QDir* self, int filters, int sort ```
libqt_list /* of QFileInfo* */ q_dir_entry_info_list2(void* self, int64_t filters, int64_t sort) {
    libqt_list _arr = QDir_EntryInfoList2((QDir*)self, filters, sort);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// ``` QDir* self, const char* nameFilters[], int filters ```
libqt_list /* of QFileInfo* */ q_dir_entry_info_list22(void* self, const char* nameFilters[], int64_t filters) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = malloc(nameFilters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < nameFilters_len; ++_i) {
        nameFilters_qstr[_i] = qstring(nameFilters[_i]);
    }
    libqt_list nameFilters_list = qstrlist(nameFilters_qstr, nameFilters_len);
    libqt_list _arr = QDir_EntryInfoList22((QDir*)self, nameFilters_list, filters);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// ``` QDir* self, const char* nameFilters[], int filters, int sort ```
libqt_list /* of QFileInfo* */ q_dir_entry_info_list3(void* self, const char* nameFilters[], int64_t filters, int64_t sort) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = malloc(nameFilters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < nameFilters_len; ++_i) {
        nameFilters_qstr[_i] = qstring(nameFilters[_i]);
    }
    libqt_list nameFilters_list = qstrlist(nameFilters_qstr, nameFilters_len);
    libqt_list _arr = QDir_EntryInfoList3((QDir*)self, nameFilters_list, filters, sort);
    return _arr;
}

/// Delete this object from C++ memory.
///
/// ``` QDir* self ```
void q_dir_delete(void* self) {
    QDir_Delete((QDir*)(self));
}
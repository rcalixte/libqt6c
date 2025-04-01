#pragma once
#ifndef SRCQT6C_LIBQDIR_H
#define SRCQT6C_LIBQDIR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqchar.h"
#include "libqfileinfo.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qdir.html

/// q_dir_new constructs a new QDir object.
///
/// ``` QDir* param1 ```
QDir* q_dir_new(void* param1);

/// q_dir_new2 constructs a new QDir object.
///
///
QDir* q_dir_new2();

/// q_dir_new3 constructs a new QDir object.
///
/// ``` const char* path, const char* nameFilter ```
QDir* q_dir_new3(const char* path, const char* nameFilter);

/// q_dir_new4 constructs a new QDir object.
///
/// ``` const char* path ```
QDir* q_dir_new4(const char* path);

/// q_dir_new5 constructs a new QDir object.
///
/// ``` const char* path, const char* nameFilter, int sort ```
QDir* q_dir_new5(const char* path, const char* nameFilter, int64_t sort);

/// q_dir_new6 constructs a new QDir object.
///
/// ``` const char* path, const char* nameFilter, int sort, int filter ```
QDir* q_dir_new6(const char* path, const char* nameFilter, int64_t sort, int64_t filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#operator=)
///
/// ``` QDir* self, QDir* param1 ```
void q_dir_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#swap)
///
/// ``` QDir* self, QDir* other ```
void q_dir_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#setPath)
///
/// ``` QDir* self, const char* path ```
void q_dir_set_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#path)
///
/// ``` QDir* self ```
const char* q_dir_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#absolutePath)
///
/// ``` QDir* self ```
const char* q_dir_absolute_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#canonicalPath)
///
/// ``` QDir* self ```
const char* q_dir_canonical_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#setSearchPaths)
///
/// ``` const char* prefix, const char* searchPaths[] ```
void q_dir_set_search_paths(const char* prefix, const char* searchPaths[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#addSearchPath)
///
/// ``` const char* prefix, const char* path ```
void q_dir_add_search_path(const char* prefix, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#searchPaths)
///
/// ``` const char* prefix ```
const char** q_dir_search_paths(const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#dirName)
///
/// ``` QDir* self ```
const char* q_dir_dir_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#filePath)
///
/// ``` QDir* self, const char* fileName ```
const char* q_dir_file_path(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#absoluteFilePath)
///
/// ``` QDir* self, const char* fileName ```
const char* q_dir_absolute_file_path(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#relativeFilePath)
///
/// ``` QDir* self, const char* fileName ```
const char* q_dir_relative_file_path(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#toNativeSeparators)
///
/// ``` const char* pathName ```
const char* q_dir_to_native_separators(const char* pathName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#fromNativeSeparators)
///
/// ``` const char* pathName ```
const char* q_dir_from_native_separators(const char* pathName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#cd)
///
/// ``` QDir* self, const char* dirName ```
bool q_dir_cd(void* self, const char* dirName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#cdUp)
///
/// ``` QDir* self ```
bool q_dir_cd_up(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#nameFilters)
///
/// ``` QDir* self ```
const char** q_dir_name_filters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#setNameFilters)
///
/// ``` QDir* self, const char* nameFilters[] ```
void q_dir_set_name_filters(void* self, const char* nameFilters[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#filter)
///
/// ``` QDir* self ```
int64_t q_dir_filter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#setFilter)
///
/// ``` QDir* self, int filter ```
void q_dir_set_filter(void* self, int64_t filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#sorting)
///
/// ``` QDir* self ```
int64_t q_dir_sorting(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#setSorting)
///
/// ``` QDir* self, int sort ```
void q_dir_set_sorting(void* self, int64_t sort);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#count)
///
/// ``` QDir* self ```
uint32_t q_dir_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isEmpty)
///
/// ``` QDir* self ```
bool q_dir_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#operator[])
///
/// ``` QDir* self, int param1 ```
const char* q_dir_operator_subscript(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#nameFiltersFromString)
///
/// ``` const char* nameFilter ```
const char** q_dir_name_filters_from_string(const char* nameFilter);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// ``` QDir* self ```
const char** q_dir_entry_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// ``` QDir* self, const char* nameFilters[] ```
const char** q_dir_entry_list_with_name_filters(void* self, const char* nameFilters[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// ``` QDir* self ```
libqt_list /* of QFileInfo* */ q_dir_entry_info_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// ``` QDir* self, const char* nameFilters[] ```
libqt_list /* of QFileInfo* */ q_dir_entry_info_list_with_name_filters(void* self, const char* nameFilters[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#mkdir)
///
/// ``` QDir* self, const char* dirName ```
bool q_dir_mkdir(void* self, const char* dirName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#mkdir)
///
/// ``` QDir* self, const char* dirName, int permissions ```
bool q_dir_mkdir2(void* self, const char* dirName, int64_t permissions);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#rmdir)
///
/// ``` QDir* self, const char* dirName ```
bool q_dir_rmdir(void* self, const char* dirName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#mkpath)
///
/// ``` QDir* self, const char* dirPath ```
bool q_dir_mkpath(void* self, const char* dirPath);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#rmpath)
///
/// ``` QDir* self, const char* dirPath ```
bool q_dir_rmpath(void* self, const char* dirPath);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#removeRecursively)
///
/// ``` QDir* self ```
bool q_dir_remove_recursively(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isReadable)
///
/// ``` QDir* self ```
bool q_dir_is_readable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#exists)
///
/// ``` QDir* self ```
bool q_dir_exists(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isRoot)
///
/// ``` QDir* self ```
bool q_dir_is_root(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isRelativePath)
///
/// ``` const char* path ```
bool q_dir_is_relative_path(const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isAbsolutePath)
///
/// ``` const char* path ```
bool q_dir_is_absolute_path(const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isRelative)
///
/// ``` QDir* self ```
bool q_dir_is_relative(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isAbsolute)
///
/// ``` QDir* self ```
bool q_dir_is_absolute(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#makeAbsolute)
///
/// ``` QDir* self ```
bool q_dir_make_absolute(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#operator==)
///
/// ``` QDir* self, QDir* dir ```
bool q_dir_operator_equal(void* self, void* dir);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#operator!=)
///
/// ``` QDir* self, QDir* dir ```
bool q_dir_operator_not_equal(void* self, void* dir);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#remove)
///
/// ``` QDir* self, const char* fileName ```
bool q_dir_remove(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#rename)
///
/// ``` QDir* self, const char* oldName, const char* newName ```
bool q_dir_rename(void* self, const char* oldName, const char* newName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#exists)
///
/// ``` QDir* self, const char* name ```
bool q_dir_exists_with_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#drives)
///
///
libqt_list /* of QFileInfo* */ q_dir_drives();

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#listSeparator)
///
///
QChar* q_dir_list_separator();

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#separator)
///
///
QChar* q_dir_separator();

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#setCurrent)
///
/// ``` const char* path ```
bool q_dir_set_current(const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#current)
///
///
QDir* q_dir_current();

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#currentPath)
///
///
const char* q_dir_current_path();

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#home)
///
///
QDir* q_dir_home();

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#homePath)
///
///
const char* q_dir_home_path();

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#root)
///
///
QDir* q_dir_root();

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#rootPath)
///
///
const char* q_dir_root_path();

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#temp)
///
///
QDir* q_dir_temp();

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#tempPath)
///
///
const char* q_dir_temp_path();

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#match)
///
/// ``` const char* filters[], const char* fileName ```
bool q_dir_match(const char* filters[], const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#match)
///
/// ``` const char* filter, const char* fileName ```
bool q_dir_match2(const char* filter, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#cleanPath)
///
/// ``` const char* path ```
const char* q_dir_clean_path(const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#refresh)
///
/// ``` QDir* self ```
void q_dir_refresh(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#isEmpty)
///
/// ``` QDir* self, int filters ```
bool q_dir_is_empty1(void* self, int64_t filters);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// ``` QDir* self, int filters ```
const char** q_dir_entry_list1(void* self, int64_t filters);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// ``` QDir* self, int filters, int sort ```
const char** q_dir_entry_list2(void* self, int64_t filters, int64_t sort);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// ``` QDir* self, const char* nameFilters[], int filters ```
const char** q_dir_entry_list22(void* self, const char* nameFilters[], int64_t filters);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// ``` QDir* self, const char* nameFilters[], int filters, int sort ```
const char** q_dir_entry_list3(void* self, const char* nameFilters[], int64_t filters, int64_t sort);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// ``` QDir* self, int filters ```
libqt_list /* of QFileInfo* */ q_dir_entry_info_list1(void* self, int64_t filters);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// ``` QDir* self, int filters, int sort ```
libqt_list /* of QFileInfo* */ q_dir_entry_info_list2(void* self, int64_t filters, int64_t sort);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// ``` QDir* self, const char* nameFilters[], int filters ```
libqt_list /* of QFileInfo* */ q_dir_entry_info_list22(void* self, const char* nameFilters[], int64_t filters);

/// [Qt documentation](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// ``` QDir* self, const char* nameFilters[], int filters, int sort ```
libqt_list /* of QFileInfo* */ q_dir_entry_info_list3(void* self, const char* nameFilters[], int64_t filters, int64_t sort);

/// Delete this object from C++ memory.
///
/// ``` QDir* self ```
void q_dir_delete(void* self);

/// https://doc.qt.io/qt-6/qdir.html#types

typedef enum {
    QDIR_FILTER_DIRS = 1,
    QDIR_FILTER_FILES = 2,
    QDIR_FILTER_DRIVES = 4,
    QDIR_FILTER_NOSYMLINKS = 8,
    QDIR_FILTER_ALLENTRIES = 7,
    QDIR_FILTER_TYPEMASK = 15,
    QDIR_FILTER_READABLE = 16,
    QDIR_FILTER_WRITABLE = 32,
    QDIR_FILTER_EXECUTABLE = 64,
    QDIR_FILTER_PERMISSIONMASK = 112,
    QDIR_FILTER_MODIFIED = 128,
    QDIR_FILTER_HIDDEN = 256,
    QDIR_FILTER_SYSTEM = 512,
    QDIR_FILTER_ACCESSMASK = 1008,
    QDIR_FILTER_ALLDIRS = 1024,
    QDIR_FILTER_CASESENSITIVE = 2048,
    QDIR_FILTER_NODOT = 8192,
    QDIR_FILTER_NODOTDOT = 16384,
    QDIR_FILTER_NODOTANDDOTDOT = 24576,
    QDIR_FILTER_NOFILTER = -1
} QDir__Filter;

typedef enum {
    QDIR_SORTFLAG_NAME = 0,
    QDIR_SORTFLAG_TIME = 1,
    QDIR_SORTFLAG_SIZE = 2,
    QDIR_SORTFLAG_UNSORTED = 3,
    QDIR_SORTFLAG_SORTBYMASK = 3,
    QDIR_SORTFLAG_DIRSFIRST = 4,
    QDIR_SORTFLAG_REVERSED = 8,
    QDIR_SORTFLAG_IGNORECASE = 16,
    QDIR_SORTFLAG_DIRSLAST = 32,
    QDIR_SORTFLAG_LOCALEAWARE = 64,
    QDIR_SORTFLAG_TYPE = 128,
    QDIR_SORTFLAG_NOSORT = -1
} QDir__SortFlag;

#endif

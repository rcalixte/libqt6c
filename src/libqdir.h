#pragma once
#ifndef SRC_QT6C_LIBQDIR_H
#define SRC_QT6C_LIBQDIR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html)

/// q_dir_new constructs a new QDir object.
///
/// @param param1 QDir*
///
QDir* q_dir_new(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html)

/// q_dir_new2 constructs a new QDir object.
///
QDir* q_dir_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html)

/// q_dir_new3 constructs a new QDir object.
///
/// @param path const char*
/// @param nameFilter const char*
///
QDir* q_dir_new3(const char* path, const char* nameFilter);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html)

/// q_dir_new4 constructs a new QDir object.
///
/// @param path const char*
///
QDir* q_dir_new4(const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html)

/// q_dir_new5 constructs a new QDir object.
///
/// @param path const char*
/// @param nameFilter const char*
/// @param sort flag of enum QDir__SortFlag
///
QDir* q_dir_new5(const char* path, const char* nameFilter, int32_t sort);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html)

/// q_dir_new6 constructs a new QDir object.
///
/// @param path const char*
/// @param nameFilter const char*
/// @param sort flag of enum QDir__SortFlag
/// @param filter flag of enum QDir__Filter
///
QDir* q_dir_new6(const char* path, const char* nameFilter, int32_t sort, int32_t filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#operator-eq)
///
/// @param self QDir*
/// @param param1 QDir*
///
void q_dir_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#swap)
///
/// @param self QDir*
/// @param other QDir*
///
void q_dir_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setPath)
///
/// @param self QDir*
/// @param path const char*
///
void q_dir_set_path(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#path)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDir*
///
const char* q_dir_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#absolutePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDir*
///
const char* q_dir_absolute_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#canonicalPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDir*
///
const char* q_dir_canonical_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setSearchPaths)
///
/// @param prefix const char*
/// @param searchPaths const char**
///
void q_dir_set_search_paths(const char* prefix, const char* searchPaths[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#addSearchPath)
///
/// @param prefix const char*
/// @param path const char*
///
void q_dir_add_search_path(const char* prefix, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#searchPaths)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param prefix const char*
///
const char** q_dir_search_paths(const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#dirName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDir*
///
const char* q_dir_dir_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#filePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDir*
/// @param fileName const char*
///
const char* q_dir_file_path(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#absoluteFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDir*
/// @param fileName const char*
///
const char* q_dir_absolute_file_path(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#relativeFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDir*
/// @param fileName const char*
///
const char* q_dir_relative_file_path(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#toNativeSeparators)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param pathName const char*
///
const char* q_dir_to_native_separators(const char* pathName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#fromNativeSeparators)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param pathName const char*
///
const char* q_dir_from_native_separators(const char* pathName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#cd)
///
/// @param self QDir*
/// @param dirName const char*
///
bool q_dir_cd(void* self, const char* dirName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#cdUp)
///
/// @param self QDir*
///
bool q_dir_cd_up(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#nameFilters)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDir*
///
const char** q_dir_name_filters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setNameFilters)
///
/// @param self QDir*
/// @param nameFilters const char**
///
void q_dir_set_name_filters(void* self, const char* nameFilters[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#filter)
///
/// @param self QDir*
///
/// @return flag of enum QDir__Filter
///
int32_t q_dir_filter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setFilter)
///
/// @param self QDir*
/// @param filter flag of enum QDir__Filter
///
void q_dir_set_filter(void* self, int32_t filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#sorting)
///
/// @param self QDir*
///
/// @return flag of enum QDir__SortFlag
///
int32_t q_dir_sorting(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setSorting)
///
/// @param self QDir*
/// @param sort flag of enum QDir__SortFlag
///
void q_dir_set_sorting(void* self, int32_t sort);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#count)
///
/// @param self QDir*
///
int64_t q_dir_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isEmpty)
///
/// @param self QDir*
///
bool q_dir_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#operator-5b-5d)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDir*
/// @param param1 long long
///
const char* q_dir_operator_subscript(void* self, long long param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#nameFiltersFromString)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param nameFilter const char*
///
const char** q_dir_name_filters_from_string(const char* nameFilter);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDir*
///
const char** q_dir_entry_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDir*
/// @param nameFilters const char**
///
const char** q_dir_entry_list2(void* self, const char* nameFilters[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// @param self QDir*
///
libqt_list /* of QFileInfo* */ q_dir_entry_info_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// @param self QDir*
/// @param nameFilters const char**
///
libqt_list /* of QFileInfo* */ q_dir_entry_info_list2(void* self, const char* nameFilters[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#mkdir)
///
/// @param self QDir*
/// @param dirName const char*
///
bool q_dir_mkdir(void* self, const char* dirName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#mkdir)
///
/// @param self QDir*
/// @param dirName const char*
/// @param permissions flag of enum QFileDevice__Permission
///
bool q_dir_mkdir2(void* self, const char* dirName, int32_t permissions);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#rmdir)
///
/// @param self QDir*
/// @param dirName const char*
///
bool q_dir_rmdir(void* self, const char* dirName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#mkpath)
///
/// @param self QDir*
/// @param dirPath const char*
///
bool q_dir_mkpath(void* self, const char* dirPath);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#rmpath)
///
/// @param self QDir*
/// @param dirPath const char*
///
bool q_dir_rmpath(void* self, const char* dirPath);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#removeRecursively)
///
/// @param self QDir*
///
bool q_dir_remove_recursively(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isReadable)
///
/// @param self QDir*
///
bool q_dir_is_readable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#exists)
///
/// @param self QDir*
///
bool q_dir_exists(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isRoot)
///
/// @param self QDir*
///
bool q_dir_is_root(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isRelativePath)
///
/// @param path const char*
///
bool q_dir_is_relative_path(const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isAbsolutePath)
///
/// @param path const char*
///
bool q_dir_is_absolute_path(const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isRelative)
///
/// @param self QDir*
///
bool q_dir_is_relative(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isAbsolute)
///
/// @param self QDir*
///
bool q_dir_is_absolute(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#makeAbsolute)
///
/// @param self QDir*
///
bool q_dir_make_absolute(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#remove)
///
/// @param self QDir*
/// @param fileName const char*
///
bool q_dir_remove(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#rename)
///
/// @param self QDir*
/// @param oldName const char*
/// @param newName const char*
///
bool q_dir_rename(void* self, const char* oldName, const char* newName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#exists)
///
/// @param self QDir*
/// @param name const char*
///
bool q_dir_exists2(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#drives)
///
libqt_list /* of QFileInfo* */ q_dir_drives();

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#listSeparator)
///
QChar* q_dir_list_separator();

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#separator)
///
QChar* q_dir_separator();

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#setCurrent)
///
/// @param path const char*
///
bool q_dir_set_current(const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#current)
///
QDir* q_dir_current();

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#currentPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_dir_current_path();

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#home)
///
QDir* q_dir_home();

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#homePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_dir_home_path();

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#root)
///
QDir* q_dir_root();

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#rootPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_dir_root_path();

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#temp)
///
QDir* q_dir_temp();

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#tempPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_dir_temp_path();

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#match)
///
/// @param filters const char**
/// @param fileName const char*
///
bool q_dir_match(const char* filters[static 1], const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#match)
///
/// @param filter const char*
/// @param fileName const char*
///
bool q_dir_match2(const char* filter, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#cleanPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param path const char*
///
const char* q_dir_clean_path(const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#refresh)
///
/// @param self QDir*
///
void q_dir_refresh(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#count)
///
/// @param self QDir*
/// @param param1 Disambiguated_t*
///
int64_t q_dir_count1(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#isEmpty)
///
/// @param self QDir*
/// @param filters flag of enum QDir__Filter
///
bool q_dir_is_empty1(void* self, int32_t filters);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDir*
/// @param filters flag of enum QDir__Filter
///
const char** q_dir_entry_list1(void* self, int32_t filters);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDir*
/// @param filters flag of enum QDir__Filter
/// @param sort flag of enum QDir__SortFlag
///
const char** q_dir_entry_list22(void* self, int32_t filters, int32_t sort);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDir*
/// @param nameFilters const char**
/// @param filters flag of enum QDir__Filter
///
const char** q_dir_entry_list23(void* self, const char* nameFilters[static 1], int32_t filters);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDir*
/// @param nameFilters const char**
/// @param filters flag of enum QDir__Filter
/// @param sort flag of enum QDir__SortFlag
///
const char** q_dir_entry_list3(void* self, const char* nameFilters[static 1], int32_t filters, int32_t sort);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// @param self QDir*
/// @param filters flag of enum QDir__Filter
///
libqt_list /* of QFileInfo* */ q_dir_entry_info_list1(void* self, int32_t filters);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// @param self QDir*
/// @param filters flag of enum QDir__Filter
/// @param sort flag of enum QDir__SortFlag
///
libqt_list /* of QFileInfo* */ q_dir_entry_info_list22(void* self, int32_t filters, int32_t sort);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// @param self QDir*
/// @param nameFilters const char**
/// @param filters flag of enum QDir__Filter
///
libqt_list /* of QFileInfo* */ q_dir_entry_info_list23(void* self, const char* nameFilters[static 1], int32_t filters);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#entryInfoList)
///
/// @param self QDir*
/// @param nameFilters const char**
/// @param filters flag of enum QDir__Filter
/// @param sort flag of enum QDir__SortFlag
///
libqt_list /* of QFileInfo* */ q_dir_entry_info_list3(void* self, const char* nameFilters[static 1], int32_t filters, int32_t sort);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#dtor.QDir)
///
/// Delete this object from C++ memory.
///
/// @param self QDir*
///
void q_dir_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qdir.html#public-types)

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

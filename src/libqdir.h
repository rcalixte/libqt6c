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

QDir* q_dir_new(void* param1);
QDir* q_dir_new2();
QDir* q_dir_new3(const char* path, const char* nameFilter);
QDir* q_dir_new4(const char* path);
QDir* q_dir_new5(const char* path, const char* nameFilter, int64_t sort);
QDir* q_dir_new6(const char* path, const char* nameFilter, int64_t sort, int64_t filter);
void q_dir_operator_assign(void* self, void* param1);
void q_dir_swap(void* self, void* other);
void q_dir_set_path(void* self, const char* path);
const char* q_dir_path(void* self);
const char* q_dir_absolute_path(void* self);
const char* q_dir_canonical_path(void* self);
void q_dir_set_search_paths(const char* prefix, const char* searchPaths[]);
void q_dir_add_search_path(const char* prefix, const char* path);
const char** q_dir_search_paths(const char* prefix);
const char* q_dir_dir_name(void* self);
const char* q_dir_file_path(void* self, const char* fileName);
const char* q_dir_absolute_file_path(void* self, const char* fileName);
const char* q_dir_relative_file_path(void* self, const char* fileName);
const char* q_dir_to_native_separators(const char* pathName);
const char* q_dir_from_native_separators(const char* pathName);
bool q_dir_cd(void* self, const char* dirName);
bool q_dir_cd_up(void* self);
const char** q_dir_name_filters(void* self);
void q_dir_set_name_filters(void* self, const char* nameFilters[]);
int64_t q_dir_filter(void* self);
void q_dir_set_filter(void* self, int64_t filter);
int64_t q_dir_sorting(void* self);
void q_dir_set_sorting(void* self, int64_t sort);
uint32_t q_dir_count(void* self);
bool q_dir_is_empty(void* self);
const char* q_dir_operator_subscript(void* self, int param1);
const char** q_dir_name_filters_from_string(const char* nameFilter);
const char** q_dir_entry_list(void* self);
const char** q_dir_entry_list_with_name_filters(void* self, const char* nameFilters[]);
libqt_list /* of QFileInfo* */ q_dir_entry_info_list(void* self);
libqt_list /* of QFileInfo* */ q_dir_entry_info_list_with_name_filters(void* self, const char* nameFilters[]);
bool q_dir_mkdir(void* self, const char* dirName);
bool q_dir_mkdir2(void* self, const char* dirName, int64_t permissions);
bool q_dir_rmdir(void* self, const char* dirName);
bool q_dir_mkpath(void* self, const char* dirPath);
bool q_dir_rmpath(void* self, const char* dirPath);
bool q_dir_remove_recursively(void* self);
bool q_dir_is_readable(void* self);
bool q_dir_exists(void* self);
bool q_dir_is_root(void* self);
bool q_dir_is_relative_path(const char* path);
bool q_dir_is_absolute_path(const char* path);
bool q_dir_is_relative(void* self);
bool q_dir_is_absolute(void* self);
bool q_dir_make_absolute(void* self);
bool q_dir_operator_equal(void* self, void* dir);
bool q_dir_operator_not_equal(void* self, void* dir);
bool q_dir_remove(void* self, const char* fileName);
bool q_dir_rename(void* self, const char* oldName, const char* newName);
bool q_dir_exists_with_name(void* self, const char* name);
libqt_list /* of QFileInfo* */ q_dir_drives();
QChar* q_dir_list_separator();
QChar* q_dir_separator();
bool q_dir_set_current(const char* path);
QDir* q_dir_current();
const char* q_dir_current_path();
QDir* q_dir_home();
const char* q_dir_home_path();
QDir* q_dir_root();
const char* q_dir_root_path();
QDir* q_dir_temp();
const char* q_dir_temp_path();
bool q_dir_match(const char* filters[], const char* fileName);
bool q_dir_match2(const char* filter, const char* fileName);
const char* q_dir_clean_path(const char* path);
void q_dir_refresh(void* self);
bool q_dir_is_empty1(void* self, int64_t filters);
const char** q_dir_entry_list1(void* self, int64_t filters);
const char** q_dir_entry_list2(void* self, int64_t filters, int64_t sort);
const char** q_dir_entry_list22(void* self, const char* nameFilters[], int64_t filters);
const char** q_dir_entry_list3(void* self, const char* nameFilters[], int64_t filters, int64_t sort);
libqt_list /* of QFileInfo* */ q_dir_entry_info_list1(void* self, int64_t filters);
libqt_list /* of QFileInfo* */ q_dir_entry_info_list2(void* self, int64_t filters, int64_t sort);
libqt_list /* of QFileInfo* */ q_dir_entry_info_list22(void* self, const char* nameFilters[], int64_t filters);
libqt_list /* of QFileInfo* */ q_dir_entry_info_list3(void* self, const char* nameFilters[], int64_t filters, int64_t sort);
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

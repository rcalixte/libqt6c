#include "libqdatetime.hpp"
#include "libqfileinfo.hpp"
#include <string.h>
#include "libqtimezone.hpp"
#include "libqdirlisting.hpp"
#include "libqdirlisting.h"

QDirListing* q_dirlisting_new(const char* path) {
    return QDirListing_new(qstring(path));
}

QDirListing* q_dirlisting_new2(const char* path, const char* nameFilters[]) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = malloc(nameFilters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < nameFilters_len; ++_i) {
        nameFilters_qstr[_i] = qstring(nameFilters[_i]);
    }
    libqt_list nameFilters_list = qlist(nameFilters_qstr, nameFilters_len);

    return QDirListing_new2(qstring(path), nameFilters_list);
}

QDirListing* q_dirlisting_new3(const char* path, int64_t flags) {
    return QDirListing_new3(qstring(path), flags);
}

QDirListing* q_dirlisting_new4(const char* path, const char* nameFilters[], int64_t flags) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = malloc(nameFilters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < nameFilters_len; ++_i) {
        nameFilters_qstr[_i] = qstring(nameFilters[_i]);
    }
    libqt_list nameFilters_list = qlist(nameFilters_qstr, nameFilters_len);

    return QDirListing_new4(qstring(path), nameFilters_list, flags);
}

void q_dirlisting_swap(void* self, void* other) {
    QDirListing_Swap((QDirListing*)self, (QDirListing*)other);
}

const char* q_dirlisting_iterator_path(void* self) {
    libqt_string _str = QDirListing_IteratorPath((QDirListing*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_dirlisting_iterator_flags(void* self) {
    return QDirListing_IteratorFlags((QDirListing*)self);
}

const char** q_dirlisting_name_filters(void* self) {
    libqt_list _arr = QDirListing_NameFilters((QDirListing*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QDirListing__sentinel* q_dirlisting_end(void* self) {
    return QDirListing_End((QDirListing*)self);
}

QDirListing__sentinel* q_dirlisting_cend(void* self) {
    return QDirListing_Cend((QDirListing*)self);
}

QDirListing__sentinel* q_dirlisting_const_end(void* self) {
    return QDirListing_ConstEnd((QDirListing*)self);
}

void q_dirlisting_delete(void* self) {
    QDirListing_Delete((QDirListing*)(self));
}

QDirListing__DirEntry* q_dirlisting__direntry_new(void* other) {
    return QDirListing__DirEntry_new((QDirListing__DirEntry*)other);
}

QDirListing__DirEntry* q_dirlisting__direntry_new2(void* other) {
    return QDirListing__DirEntry_new2((QDirListing__DirEntry*)other);
}

QDirListing__DirEntry* q_dirlisting__direntry_new3(void* param1) {
    return QDirListing__DirEntry_new3((QDirListing__DirEntry*)param1);
}

QDirListing__DirEntry* q_dirlisting__direntry_new4() {
    return QDirListing__DirEntry_new4();
}

void q_dirlisting__direntry_copy_assign(void* self, void* other) {
    QDirListing__DirEntry_CopyAssign((QDirListing__DirEntry*)self, (QDirListing__DirEntry*)other);
}

void q_dirlisting__direntry_move_assign(void* self, void* other) {
    QDirListing__DirEntry_MoveAssign((QDirListing__DirEntry*)self, (QDirListing__DirEntry*)other);
}

const char* q_dirlisting__direntry_file_name(void* self) {
    libqt_string _str = QDirListing__DirEntry_FileName((QDirListing__DirEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dirlisting__direntry_base_name(void* self) {
    libqt_string _str = QDirListing__DirEntry_BaseName((QDirListing__DirEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dirlisting__direntry_complete_base_name(void* self) {
    libqt_string _str = QDirListing__DirEntry_CompleteBaseName((QDirListing__DirEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dirlisting__direntry_suffix(void* self) {
    libqt_string _str = QDirListing__DirEntry_Suffix((QDirListing__DirEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dirlisting__direntry_bundle_name(void* self) {
    libqt_string _str = QDirListing__DirEntry_BundleName((QDirListing__DirEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dirlisting__direntry_complete_suffix(void* self) {
    libqt_string _str = QDirListing__DirEntry_CompleteSuffix((QDirListing__DirEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dirlisting__direntry_file_path(void* self) {
    libqt_string _str = QDirListing__DirEntry_FilePath((QDirListing__DirEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dirlisting__direntry_is_dir(void* self) {
    return QDirListing__DirEntry_IsDir((QDirListing__DirEntry*)self);
}

bool q_dirlisting__direntry_is_file(void* self) {
    return QDirListing__DirEntry_IsFile((QDirListing__DirEntry*)self);
}

bool q_dirlisting__direntry_is_sym_link(void* self) {
    return QDirListing__DirEntry_IsSymLink((QDirListing__DirEntry*)self);
}

bool q_dirlisting__direntry_exists(void* self) {
    return QDirListing__DirEntry_Exists((QDirListing__DirEntry*)self);
}

bool q_dirlisting__direntry_is_hidden(void* self) {
    return QDirListing__DirEntry_IsHidden((QDirListing__DirEntry*)self);
}

bool q_dirlisting__direntry_is_readable(void* self) {
    return QDirListing__DirEntry_IsReadable((QDirListing__DirEntry*)self);
}

bool q_dirlisting__direntry_is_writable(void* self) {
    return QDirListing__DirEntry_IsWritable((QDirListing__DirEntry*)self);
}

bool q_dirlisting__direntry_is_executable(void* self) {
    return QDirListing__DirEntry_IsExecutable((QDirListing__DirEntry*)self);
}

QFileInfo* q_dirlisting__direntry_file_info(void* self) {
    return QDirListing__DirEntry_FileInfo((QDirListing__DirEntry*)self);
}

const char* q_dirlisting__direntry_canonical_file_path(void* self) {
    libqt_string _str = QDirListing__DirEntry_CanonicalFilePath((QDirListing__DirEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dirlisting__direntry_absolute_file_path(void* self) {
    libqt_string _str = QDirListing__DirEntry_AbsoluteFilePath((QDirListing__DirEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dirlisting__direntry_absolute_path(void* self) {
    libqt_string _str = QDirListing__DirEntry_AbsolutePath((QDirListing__DirEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_dirlisting__direntry_size(void* self) {
    return QDirListing__DirEntry_Size((QDirListing__DirEntry*)self);
}

QDateTime* q_dirlisting__direntry_birth_time(void* self, void* tz) {
    return QDirListing__DirEntry_BirthTime((QDirListing__DirEntry*)self, (QTimeZone*)tz);
}

QDateTime* q_dirlisting__direntry_metadata_change_time(void* self, void* tz) {
    return QDirListing__DirEntry_MetadataChangeTime((QDirListing__DirEntry*)self, (QTimeZone*)tz);
}

QDateTime* q_dirlisting__direntry_last_modified(void* self, void* tz) {
    return QDirListing__DirEntry_LastModified((QDirListing__DirEntry*)self, (QTimeZone*)tz);
}

QDateTime* q_dirlisting__direntry_last_read(void* self, void* tz) {
    return QDirListing__DirEntry_LastRead((QDirListing__DirEntry*)self, (QTimeZone*)tz);
}

QDateTime* q_dirlisting__direntry_file_time(void* self, int64_t typeVal, void* tz) {
    return QDirListing__DirEntry_FileTime((QDirListing__DirEntry*)self, typeVal, (QTimeZone*)tz);
}

void q_dirlisting__direntry_operator_assign(void* self, void* param1) {
    QDirListing__DirEntry_OperatorAssign((QDirListing__DirEntry*)self, (QDirListing__DirEntry*)param1);
}

void q_dirlisting__direntry_delete(void* self) {
    QDirListing__DirEntry_Delete((QDirListing__DirEntry*)(self));
}

QDirListing__sentinel* q_dirlisting__sentinel_new(void* other) {
    return QDirListing__sentinel_new((QDirListing__sentinel*)other);
}

QDirListing__sentinel* q_dirlisting__sentinel_new2(void* other) {
    return QDirListing__sentinel_new2((QDirListing__sentinel*)other);
}

QDirListing__sentinel* q_dirlisting__sentinel_new3() {
    return QDirListing__sentinel_new3();
}

QDirListing__sentinel* q_dirlisting__sentinel_new4(void* param1) {
    return QDirListing__sentinel_new4((QDirListing__sentinel*)param1);
}

void q_dirlisting__sentinel_copy_assign(void* self, void* other) {
    QDirListing__sentinel_CopyAssign((QDirListing__sentinel*)self, (QDirListing__sentinel*)other);
}

void q_dirlisting__sentinel_move_assign(void* self, void* other) {
    QDirListing__sentinel_MoveAssign((QDirListing__sentinel*)self, (QDirListing__sentinel*)other);
}

void q_dirlisting__sentinel_delete(void* self) {
    QDirListing__sentinel_Delete((QDirListing__sentinel*)(self));
}

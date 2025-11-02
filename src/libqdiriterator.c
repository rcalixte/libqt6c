#include "libqdir.hpp"
#include "libqfileinfo.hpp"
#include "libqdiriterator.hpp"
#include "libqdiriterator.h"

QDirIterator* q_diriterator_new(void* dir) {
    return QDirIterator_new((QDir*)dir);
}

QDirIterator* q_diriterator_new2(const char* path) {
    return QDirIterator_new2(qstring(path));
}

QDirIterator* q_diriterator_new3(const char* path, int32_t filter) {
    return QDirIterator_new3(qstring(path), filter);
}

QDirIterator* q_diriterator_new4(const char* path, const char* nameFilters[static 1]) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = (libqt_string*)malloc(nameFilters_len * sizeof(libqt_string));
    if (nameFilters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_diriterator_new4");
        abort();
    }
    for (size_t i = 0; i < nameFilters_len; ++i) {
        nameFilters_qstr[i] = qstring(nameFilters[i]);
    }
    libqt_list nameFilters_list = qlist(nameFilters_qstr, nameFilters_len);

    QDirIterator* _out = QDirIterator_new4(qstring(path), nameFilters_list);
    free(nameFilters_qstr);
    return _out;
}

QDirIterator* q_diriterator_new5(void* dir, int32_t flags) {
    return QDirIterator_new5((QDir*)dir, flags);
}

QDirIterator* q_diriterator_new6(const char* path, int32_t flags) {
    return QDirIterator_new6(qstring(path), flags);
}

QDirIterator* q_diriterator_new7(const char* path, int32_t filter, int32_t flags) {
    return QDirIterator_new7(qstring(path), filter, flags);
}

QDirIterator* q_diriterator_new8(const char* path, const char* nameFilters[static 1], int32_t filters) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = (libqt_string*)malloc(nameFilters_len * sizeof(libqt_string));
    if (nameFilters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_diriterator_new8");
        abort();
    }
    for (size_t i = 0; i < nameFilters_len; ++i) {
        nameFilters_qstr[i] = qstring(nameFilters[i]);
    }
    libqt_list nameFilters_list = qlist(nameFilters_qstr, nameFilters_len);

    QDirIterator* _out = QDirIterator_new8(qstring(path), nameFilters_list, filters);
    free(nameFilters_qstr);
    return _out;
}

QDirIterator* q_diriterator_new9(const char* path, const char* nameFilters[static 1], int32_t filters, int32_t flags) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = (libqt_string*)malloc(nameFilters_len * sizeof(libqt_string));
    if (nameFilters_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_diriterator_new9");
        abort();
    }
    for (size_t i = 0; i < nameFilters_len; ++i) {
        nameFilters_qstr[i] = qstring(nameFilters[i]);
    }
    libqt_list nameFilters_list = qlist(nameFilters_qstr, nameFilters_len);

    QDirIterator* _out = QDirIterator_new9(qstring(path), nameFilters_list, filters, flags);
    free(nameFilters_qstr);
    return _out;
}

const char* q_diriterator_next(void* self) {
    libqt_string _str = QDirIterator_Next((QDirIterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QFileInfo* q_diriterator_next_file_info(void* self) {
    return QDirIterator_NextFileInfo((QDirIterator*)self);
}

bool q_diriterator_has_next(void* self) {
    return QDirIterator_HasNext((QDirIterator*)self);
}

const char* q_diriterator_file_name(void* self) {
    libqt_string _str = QDirIterator_FileName((QDirIterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_diriterator_file_path(void* self) {
    libqt_string _str = QDirIterator_FilePath((QDirIterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QFileInfo* q_diriterator_file_info(void* self) {
    return QDirIterator_FileInfo((QDirIterator*)self);
}

const char* q_diriterator_path(void* self) {
    libqt_string _str = QDirIterator_Path((QDirIterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_diriterator_delete(void* self) {
    QDirIterator_Delete((QDirIterator*)(self));
}

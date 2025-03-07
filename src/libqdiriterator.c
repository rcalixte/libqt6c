#include "libqdir.hpp"
#include "libqfileinfo.hpp"
#include <string.h>
#include "libqdiriterator.hpp"
#include "libqdiriterator.h"

/// https://doc.qt.io/qt-6/qdiriterator.html

/// q_diriterator_new constructs a new QDirIterator object.
///
/// ``` QDir* dir ```
QDirIterator* q_diriterator_new(void* dir) {
    return QDirIterator_new((QDir*)dir);
}

/// q_diriterator_new2 constructs a new QDirIterator object.
///
/// ``` const char* path ```
QDirIterator* q_diriterator_new2(const char* path) {
    return QDirIterator_new2(qstring(path));
}

/// q_diriterator_new3 constructs a new QDirIterator object.
///
/// ``` const char* path, int filter ```
QDirIterator* q_diriterator_new3(const char* path, int64_t filter) {
    return QDirIterator_new3(qstring(path), filter);
}

/// q_diriterator_new4 constructs a new QDirIterator object.
///
/// ``` const char* path, const char* nameFilters[] ```
QDirIterator* q_diriterator_new4(const char* path, const char* nameFilters[]) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = malloc(nameFilters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < nameFilters_len; ++_i) {
        nameFilters_qstr[_i] = qstring(nameFilters[_i]);
    }
    libqt_list nameFilters_list = qstrlist(nameFilters_qstr, nameFilters_len);

    return QDirIterator_new4(qstring(path), nameFilters_list);
}

/// q_diriterator_new5 constructs a new QDirIterator object.
///
/// ``` QDir* dir, int flags ```
QDirIterator* q_diriterator_new5(void* dir, int64_t flags) {
    return QDirIterator_new5((QDir*)dir, flags);
}

/// q_diriterator_new6 constructs a new QDirIterator object.
///
/// ``` const char* path, int flags ```
QDirIterator* q_diriterator_new6(const char* path, int64_t flags) {
    return QDirIterator_new6(qstring(path), flags);
}

/// q_diriterator_new7 constructs a new QDirIterator object.
///
/// ``` const char* path, int filter, int flags ```
QDirIterator* q_diriterator_new7(const char* path, int64_t filter, int64_t flags) {
    return QDirIterator_new7(qstring(path), filter, flags);
}

/// q_diriterator_new8 constructs a new QDirIterator object.
///
/// ``` const char* path, const char* nameFilters[], int filters ```
QDirIterator* q_diriterator_new8(const char* path, const char* nameFilters[], int64_t filters) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = malloc(nameFilters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < nameFilters_len; ++_i) {
        nameFilters_qstr[_i] = qstring(nameFilters[_i]);
    }
    libqt_list nameFilters_list = qstrlist(nameFilters_qstr, nameFilters_len);

    return QDirIterator_new8(qstring(path), nameFilters_list, filters);
}

/// q_diriterator_new9 constructs a new QDirIterator object.
///
/// ``` const char* path, const char* nameFilters[], int filters, int flags ```
QDirIterator* q_diriterator_new9(const char* path, const char* nameFilters[], int64_t filters, int64_t flags) {
    size_t nameFilters_len = libqt_strv_length(nameFilters);
    libqt_string* nameFilters_qstr = malloc(nameFilters_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < nameFilters_len; ++_i) {
        nameFilters_qstr[_i] = qstring(nameFilters[_i]);
    }
    libqt_list nameFilters_list = qstrlist(nameFilters_qstr, nameFilters_len);

    return QDirIterator_new9(qstring(path), nameFilters_list, filters, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#next)
///
/// ``` QDirIterator* self ```
const char* q_diriterator_next(void* self) {
    libqt_string _str = QDirIterator_Next((QDirIterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#nextFileInfo)
///
/// ``` QDirIterator* self ```
QFileInfo* q_diriterator_next_file_info(void* self) {
    return QDirIterator_NextFileInfo((QDirIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#hasNext)
///
/// ``` QDirIterator* self ```
bool q_diriterator_has_next(void* self) {
    return QDirIterator_HasNext((QDirIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#fileName)
///
/// ``` QDirIterator* self ```
const char* q_diriterator_file_name(void* self) {
    libqt_string _str = QDirIterator_FileName((QDirIterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#filePath)
///
/// ``` QDirIterator* self ```
const char* q_diriterator_file_path(void* self) {
    libqt_string _str = QDirIterator_FilePath((QDirIterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#fileInfo)
///
/// ``` QDirIterator* self ```
QFileInfo* q_diriterator_file_info(void* self) {
    return QDirIterator_FileInfo((QDirIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdiriterator.html#path)
///
/// ``` QDirIterator* self ```
const char* q_diriterator_path(void* self) {
    libqt_string _str = QDirIterator_Path((QDirIterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QDirIterator* self ```
void q_diriterator_delete(void* self) {
    QDirIterator_Delete((QDirIterator*)(self));
}
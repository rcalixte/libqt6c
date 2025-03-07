#include <string.h>
#include "libqtemporarydir.hpp"
#include "libqtemporarydir.h"

/// https://doc.qt.io/qt-6/qtemporarydir.html

/// q_temporarydir_new constructs a new QTemporaryDir object.
///
///
QTemporaryDir* q_temporarydir_new() {
    return QTemporaryDir_new();
}

/// q_temporarydir_new2 constructs a new QTemporaryDir object.
///
/// ``` const char* templateName ```
QTemporaryDir* q_temporarydir_new2(const char* templateName) {
    return QTemporaryDir_new2(qstring(templateName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#swap)
///
/// ``` QTemporaryDir* self, QTemporaryDir* other ```
void q_temporarydir_swap(void* self, void* other) {
    QTemporaryDir_Swap((QTemporaryDir*)self, (QTemporaryDir*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#isValid)
///
/// ``` QTemporaryDir* self ```
bool q_temporarydir_is_valid(void* self) {
    return QTemporaryDir_IsValid((QTemporaryDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#errorString)
///
/// ``` QTemporaryDir* self ```
const char* q_temporarydir_error_string(void* self) {
    libqt_string _str = QTemporaryDir_ErrorString((QTemporaryDir*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#autoRemove)
///
/// ``` QTemporaryDir* self ```
bool q_temporarydir_auto_remove(void* self) {
    return QTemporaryDir_AutoRemove((QTemporaryDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#setAutoRemove)
///
/// ``` QTemporaryDir* self, bool b ```
void q_temporarydir_set_auto_remove(void* self, bool b) {
    QTemporaryDir_SetAutoRemove((QTemporaryDir*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#remove)
///
/// ``` QTemporaryDir* self ```
bool q_temporarydir_remove(void* self) {
    return QTemporaryDir_Remove((QTemporaryDir*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#path)
///
/// ``` QTemporaryDir* self ```
const char* q_temporarydir_path(void* self) {
    libqt_string _str = QTemporaryDir_Path((QTemporaryDir*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtemporarydir.html#filePath)
///
/// ``` QTemporaryDir* self, const char* fileName ```
const char* q_temporarydir_file_path(void* self, const char* fileName) {
    libqt_string _str = QTemporaryDir_FilePath((QTemporaryDir*)self, qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QTemporaryDir* self ```
void q_temporarydir_delete(void* self) {
    QTemporaryDir_Delete((QTemporaryDir*)(self));
}
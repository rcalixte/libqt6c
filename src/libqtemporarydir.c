#include <string.h>
#include "libqtemporarydir.hpp"
#include "libqtemporarydir.h"

QTemporaryDir* q_temporarydir_new() {
    return QTemporaryDir_new();
}

QTemporaryDir* q_temporarydir_new2(const char* templateName) {
    return QTemporaryDir_new2(qstring(templateName));
}

void q_temporarydir_swap(void* self, void* other) {
    QTemporaryDir_Swap((QTemporaryDir*)self, (QTemporaryDir*)other);
}

bool q_temporarydir_is_valid(void* self) {
    return QTemporaryDir_IsValid((QTemporaryDir*)self);
}

const char* q_temporarydir_error_string(void* self) {
    libqt_string _str = QTemporaryDir_ErrorString((QTemporaryDir*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_temporarydir_auto_remove(void* self) {
    return QTemporaryDir_AutoRemove((QTemporaryDir*)self);
}

void q_temporarydir_set_auto_remove(void* self, bool b) {
    QTemporaryDir_SetAutoRemove((QTemporaryDir*)self, b);
}

bool q_temporarydir_remove(void* self) {
    return QTemporaryDir_Remove((QTemporaryDir*)self);
}

const char* q_temporarydir_path(void* self) {
    libqt_string _str = QTemporaryDir_Path((QTemporaryDir*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_temporarydir_file_path(void* self, const char* fileName) {
    libqt_string _str = QTemporaryDir_FilePath((QTemporaryDir*)self, qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_temporarydir_delete(void* self) {
    QTemporaryDir_Delete((QTemporaryDir*)(self));
}

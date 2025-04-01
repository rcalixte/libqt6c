#include <string.h>
#include "libqsystemsemaphore.hpp"
#include "libqsystemsemaphore.h"

QSystemSemaphore* q_systemsemaphore_new(const char* key) {
    return QSystemSemaphore_new(qstring(key));
}

QSystemSemaphore* q_systemsemaphore_new2(const char* key, int initialValue) {
    return QSystemSemaphore_new2(qstring(key), initialValue);
}

QSystemSemaphore* q_systemsemaphore_new3(const char* key, int initialValue, int64_t mode) {
    return QSystemSemaphore_new3(qstring(key), initialValue, mode);
}

const char* q_systemsemaphore_tr(const char* sourceText) {
    libqt_string _str = QSystemSemaphore_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_systemsemaphore_set_key(void* self, const char* key) {
    QSystemSemaphore_SetKey((QSystemSemaphore*)self, qstring(key));
}

const char* q_systemsemaphore_key(void* self) {
    libqt_string _str = QSystemSemaphore_Key((QSystemSemaphore*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_systemsemaphore_acquire(void* self) {
    return QSystemSemaphore_Acquire((QSystemSemaphore*)self);
}

bool q_systemsemaphore_release(void* self) {
    return QSystemSemaphore_Release((QSystemSemaphore*)self);
}

int64_t q_systemsemaphore_error(void* self) {
    return QSystemSemaphore_Error((QSystemSemaphore*)self);
}

const char* q_systemsemaphore_error_string(void* self) {
    libqt_string _str = QSystemSemaphore_ErrorString((QSystemSemaphore*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_systemsemaphore_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QSystemSemaphore_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_systemsemaphore_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QSystemSemaphore_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_systemsemaphore_set_key2(void* self, const char* key, int initialValue) {
    QSystemSemaphore_SetKey2((QSystemSemaphore*)self, qstring(key), initialValue);
}

void q_systemsemaphore_set_key3(void* self, const char* key, int initialValue, int64_t mode) {
    QSystemSemaphore_SetKey3((QSystemSemaphore*)self, qstring(key), initialValue, mode);
}

bool q_systemsemaphore_release1(void* self, int n) {
    return QSystemSemaphore_Release1((QSystemSemaphore*)self, n);
}

void q_systemsemaphore_delete(void* self) {
    QSystemSemaphore_Delete((QSystemSemaphore*)(self));
}

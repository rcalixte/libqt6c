#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libqqmlerror.hpp"
#include "libqqmlerror.h"

QQmlError* q_qmlerror_new() {
    return QQmlError_New();
}

QQmlError* q_qmlerror_new2(void* param1) {
    return QQmlError_New2((QQmlError*)param1);
}

void q_qmlerror_operator_assign(void* self, void* param1) {
    QQmlError_OperatorAssign((QQmlError*)self, (QQmlError*)param1);
}

void q_qmlerror_swap(void* self, void* other) {
    QQmlError_Swap((QQmlError*)self, (QQmlError*)other);
}

bool q_qmlerror_is_valid(void* self) {
    return QQmlError_IsValid((QQmlError*)self);
}

QUrl* q_qmlerror_url(void* self) {
    return QQmlError_Url((QQmlError*)self);
}

void q_qmlerror_set_url(void* self, void* url) {
    QQmlError_SetUrl((QQmlError*)self, (QUrl*)url);
}

const char* q_qmlerror_description(void* self) {
    libqt_string _str = QQmlError_Description((QQmlError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlerror_set_description(void* self, const char* description) {
    QQmlError_SetDescription((QQmlError*)self, qstring(description));
}

int32_t q_qmlerror_line(void* self) {
    return QQmlError_Line((QQmlError*)self);
}

void q_qmlerror_set_line(void* self, int line) {
    QQmlError_SetLine((QQmlError*)self, line);
}

int32_t q_qmlerror_column(void* self) {
    return QQmlError_Column((QQmlError*)self);
}

void q_qmlerror_set_column(void* self, int column) {
    QQmlError_SetColumn((QQmlError*)self, column);
}

QObject* q_qmlerror_object(void* self) {
    return QQmlError_Object((QQmlError*)self);
}

void q_qmlerror_set_object(void* self, void* object) {
    QQmlError_SetObject((QQmlError*)self, (QObject*)object);
}

const char* q_qmlerror_to_string(void* self) {
    libqt_string _str = QQmlError_ToString((QQmlError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlerror_delete(void* self) {
    QQmlError_Delete((QQmlError*)(self));
}

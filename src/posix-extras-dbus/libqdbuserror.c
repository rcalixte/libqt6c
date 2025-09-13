#include "libqdbusmessage.hpp"
#include "libqdbuserror.hpp"
#include "libqdbuserror.h"

QDBusError* q_dbuserror_new() {
    return QDBusError_new();
}

QDBusError* q_dbuserror_new2(void* msg) {
    return QDBusError_new2((QDBusMessage*)msg);
}

QDBusError* q_dbuserror_new3(int32_t error, const char* message) {
    return QDBusError_new3(error, qstring(message));
}

QDBusError* q_dbuserror_new4(void* other) {
    return QDBusError_new4((QDBusError*)other);
}

void q_dbuserror_operator_assign(void* self, void* other) {
    QDBusError_OperatorAssign((QDBusError*)self, (QDBusError*)other);
}

void q_dbuserror_operator_assign2(void* self, void* msg) {
    QDBusError_OperatorAssign2((QDBusError*)self, (QDBusMessage*)msg);
}

void q_dbuserror_swap(void* self, void* other) {
    QDBusError_Swap((QDBusError*)self, (QDBusError*)other);
}

int32_t q_dbuserror_type(void* self) {
    return QDBusError_Type((QDBusError*)self);
}

const char* q_dbuserror_name(void* self) {
    libqt_string _str = QDBusError_Name((QDBusError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbuserror_message(void* self) {
    libqt_string _str = QDBusError_Message((QDBusError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dbuserror_is_valid(void* self) {
    return QDBusError_IsValid((QDBusError*)self);
}

const char* q_dbuserror_error_string(int32_t error) {
    libqt_string _str = QDBusError_ErrorString(error);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dbuserror_delete(void* self) {
    QDBusError_Delete((QDBusError*)(self));
}

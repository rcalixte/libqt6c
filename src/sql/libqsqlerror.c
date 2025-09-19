#include "libqsqlerror.hpp"
#include "libqsqlerror.h"

QSqlError* q_sqlerror_new() {
    return QSqlError_new();
}

QSqlError* q_sqlerror_new2(void* other) {
    return QSqlError_new2((QSqlError*)other);
}

QSqlError* q_sqlerror_new3(const char* driverText) {
    return QSqlError_new3(qstring(driverText));
}

QSqlError* q_sqlerror_new4(const char* driverText, const char* databaseText) {
    return QSqlError_new4(qstring(driverText), qstring(databaseText));
}

QSqlError* q_sqlerror_new5(const char* driverText, const char* databaseText, int32_t type) {
    return QSqlError_new5(qstring(driverText), qstring(databaseText), type);
}

QSqlError* q_sqlerror_new6(const char* driverText, const char* databaseText, int32_t type, const char* errorCode) {
    return QSqlError_new6(qstring(driverText), qstring(databaseText), type, qstring(errorCode));
}

void q_sqlerror_operator_assign(void* self, void* other) {
    QSqlError_OperatorAssign((QSqlError*)self, (QSqlError*)other);
}

bool q_sqlerror_operator_equal(void* self, void* other) {
    return QSqlError_OperatorEqual((QSqlError*)self, (QSqlError*)other);
}

bool q_sqlerror_operator_not_equal(void* self, void* other) {
    return QSqlError_OperatorNotEqual((QSqlError*)self, (QSqlError*)other);
}

void q_sqlerror_swap(void* self, void* other) {
    QSqlError_Swap((QSqlError*)self, (QSqlError*)other);
}

const char* q_sqlerror_driver_text(void* self) {
    libqt_string _str = QSqlError_DriverText((QSqlError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqlerror_database_text(void* self) {
    libqt_string _str = QSqlError_DatabaseText((QSqlError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_sqlerror_type(void* self) {
    return QSqlError_Type((QSqlError*)self);
}

const char* q_sqlerror_native_error_code(void* self) {
    libqt_string _str = QSqlError_NativeErrorCode((QSqlError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqlerror_text(void* self) {
    libqt_string _str = QSqlError_Text((QSqlError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sqlerror_is_valid(void* self) {
    return QSqlError_IsValid((QSqlError*)self);
}

void q_sqlerror_delete(void* self) {
    QSqlError_Delete((QSqlError*)(self));
}

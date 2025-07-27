#include "libqsslcertificate.hpp"
#include "libqsslerror.hpp"
#include "libqsslerror.h"

QSslError* q_sslerror_new() {
    return QSslError_new();
}

QSslError* q_sslerror_new2(int64_t errorVal) {
    return QSslError_new2(errorVal);
}

QSslError* q_sslerror_new3(int64_t errorVal, void* certificate) {
    return QSslError_new3(errorVal, (QSslCertificate*)certificate);
}

QSslError* q_sslerror_new4(void* other) {
    return QSslError_new4((QSslError*)other);
}

void q_sslerror_swap(void* self, void* other) {
    QSslError_Swap((QSslError*)self, (QSslError*)other);
}

void q_sslerror_operator_assign(void* self, void* other) {
    QSslError_OperatorAssign((QSslError*)self, (QSslError*)other);
}

bool q_sslerror_operator_equal(void* self, void* other) {
    return QSslError_OperatorEqual((QSslError*)self, (QSslError*)other);
}

bool q_sslerror_operator_not_equal(void* self, void* other) {
    return QSslError_OperatorNotEqual((QSslError*)self, (QSslError*)other);
}

int64_t q_sslerror_error(void* self) {
    return QSslError_Error((QSslError*)self);
}

const char* q_sslerror_error_string(void* self) {
    libqt_string _str = QSslError_ErrorString((QSslError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSslCertificate* q_sslerror_certificate(void* self) {
    return QSslError_Certificate((QSslError*)self);
}

void q_sslerror_delete(void* self) {
    QSslError_Delete((QSslError*)(self));
}

#include "libqsslellipticcurve.hpp"
#include "libqsslellipticcurve.h"

QSslEllipticCurve* q_sslellipticcurve_new(void* other) {
    return QSslEllipticCurve_new((QSslEllipticCurve*)other);
}

QSslEllipticCurve* q_sslellipticcurve_new2(void* other) {
    return QSslEllipticCurve_new2((QSslEllipticCurve*)other);
}

QSslEllipticCurve* q_sslellipticcurve_new3() {
    return QSslEllipticCurve_new3();
}

QSslEllipticCurve* q_sslellipticcurve_new4(void* param1) {
    return QSslEllipticCurve_new4((QSslEllipticCurve*)param1);
}

void q_sslellipticcurve_copy_assign(void* self, void* other) {
    QSslEllipticCurve_CopyAssign((QSslEllipticCurve*)self, (QSslEllipticCurve*)other);
}

void q_sslellipticcurve_move_assign(void* self, void* other) {
    QSslEllipticCurve_MoveAssign((QSslEllipticCurve*)self, (QSslEllipticCurve*)other);
}

QSslEllipticCurve* q_sslellipticcurve_from_short_name(const char* name) {
    return QSslEllipticCurve_FromShortName(qstring(name));
}

QSslEllipticCurve* q_sslellipticcurve_from_long_name(const char* name) {
    return QSslEllipticCurve_FromLongName(qstring(name));
}

const char* q_sslellipticcurve_short_name(void* self) {
    libqt_string _str = QSslEllipticCurve_ShortName((QSslEllipticCurve*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sslellipticcurve_long_name(void* self) {
    libqt_string _str = QSslEllipticCurve_LongName((QSslEllipticCurve*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sslellipticcurve_is_valid(void* self) {
    return QSslEllipticCurve_IsValid((QSslEllipticCurve*)self);
}

bool q_sslellipticcurve_is_tls_named_curve(void* self) {
    return QSslEllipticCurve_IsTlsNamedCurve((QSslEllipticCurve*)self);
}

void q_sslellipticcurve_delete(void* self) {
    QSslEllipticCurve_Delete((QSslEllipticCurve*)(self));
}

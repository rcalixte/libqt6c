#include "libqsslellipticcurve.hpp"
#include "libqsslellipticcurve.h"

size_t q_qsslellipticcurve_h_q_hash(void* curve, size_t seed) {
    return qsslellipticcurve_h_QHash((QSslEllipticCurve*)curve, seed);
}

size_t q_qsslellipticcurve_h_q_hash2(void* curve, size_t seed) {
    return qsslellipticcurve_h_QHash2((QSslEllipticCurve*)curve, seed);
}

QSslEllipticCurve* q_sslellipticcurve_new(const void* other) {
    return QSslEllipticCurve_New((QSslEllipticCurve*)other);
}

QSslEllipticCurve* q_sslellipticcurve_new2(void* other) {
    return QSslEllipticCurve_New2((QSslEllipticCurve*)other);
}

QSslEllipticCurve* q_sslellipticcurve_new3() {
    return QSslEllipticCurve_New3();
}

QSslEllipticCurve* q_sslellipticcurve_new4(const void* param1) {
    return QSslEllipticCurve_New4((QSslEllipticCurve*)param1);
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

const char* q_sslellipticcurve_short_name(const void* self) {
    libqt_string _str = QSslEllipticCurve_ShortName((QSslEllipticCurve*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sslellipticcurve_long_name(const void* self) {
    libqt_string _str = QSslEllipticCurve_LongName((QSslEllipticCurve*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sslellipticcurve_is_valid(const void* self) {
    return QSslEllipticCurve_IsValid((QSslEllipticCurve*)self);
}

bool q_sslellipticcurve_is_tls_named_curve(const void* self) {
    return QSslEllipticCurve_IsTlsNamedCurve((QSslEllipticCurve*)self);
}

void q_sslellipticcurve_delete(void* self) {
    QSslEllipticCurve_Delete((QSslEllipticCurve*)(self));
}

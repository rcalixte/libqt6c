#include "../libqiodevice.hpp"
#include "libqssldiffiehellmanparameters.hpp"
#include "libqssldiffiehellmanparameters.h"

QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_new() {
    return QSslDiffieHellmanParameters_new();
}

QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_new2(void* other) {
    return QSslDiffieHellmanParameters_new2((QSslDiffieHellmanParameters*)other);
}

QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_default_parameters() {
    return QSslDiffieHellmanParameters_DefaultParameters();
}

void q_ssldiffiehellmanparameters_operator_assign(void* self, void* other) {
    QSslDiffieHellmanParameters_OperatorAssign((QSslDiffieHellmanParameters*)self, (QSslDiffieHellmanParameters*)other);
}

void q_ssldiffiehellmanparameters_swap(void* self, void* other) {
    QSslDiffieHellmanParameters_Swap((QSslDiffieHellmanParameters*)self, (QSslDiffieHellmanParameters*)other);
}

QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded(const char* encoded) {
    return QSslDiffieHellmanParameters_FromEncoded(qstring(encoded));
}

QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded2(void* device) {
    return QSslDiffieHellmanParameters_FromEncoded2((QIODevice*)device);
}

bool q_ssldiffiehellmanparameters_is_empty(void* self) {
    return QSslDiffieHellmanParameters_IsEmpty((QSslDiffieHellmanParameters*)self);
}

bool q_ssldiffiehellmanparameters_is_valid(void* self) {
    return QSslDiffieHellmanParameters_IsValid((QSslDiffieHellmanParameters*)self);
}

int32_t q_ssldiffiehellmanparameters_error(void* self) {
    return QSslDiffieHellmanParameters_Error((QSslDiffieHellmanParameters*)self);
}

const char* q_ssldiffiehellmanparameters_error_string(void* self) {
    libqt_string _str = QSslDiffieHellmanParameters_ErrorString((QSslDiffieHellmanParameters*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded22(const char* encoded, int32_t format) {
    return QSslDiffieHellmanParameters_FromEncoded22(qstring(encoded), format);
}

QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded23(void* device, int32_t format) {
    return QSslDiffieHellmanParameters_FromEncoded23((QIODevice*)device, format);
}

void q_ssldiffiehellmanparameters_delete(void* self) {
    QSslDiffieHellmanParameters_Delete((QSslDiffieHellmanParameters*)(self));
}

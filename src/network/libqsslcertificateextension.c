#include "../libqvariant.hpp"
#include "libqsslcertificateextension.hpp"
#include "libqsslcertificateextension.h"

QSslCertificateExtension* q_sslcertificateextension_new() {
    return QSslCertificateExtension_New();
}

QSslCertificateExtension* q_sslcertificateextension_new2(const void* other) {
    return QSslCertificateExtension_New2((QSslCertificateExtension*)other);
}

void q_sslcertificateextension_operator_assign(void* self, const void* other) {
    QSslCertificateExtension_OperatorAssign((QSslCertificateExtension*)self, (QSslCertificateExtension*)other);
}

void q_sslcertificateextension_swap(void* self, void* other) {
    QSslCertificateExtension_Swap((QSslCertificateExtension*)self, (QSslCertificateExtension*)other);
}

const char* q_sslcertificateextension_oid(const void* self) {
    libqt_string _str = QSslCertificateExtension_Oid((QSslCertificateExtension*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sslcertificateextension_name(const void* self) {
    libqt_string _str = QSslCertificateExtension_Name((QSslCertificateExtension*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* q_sslcertificateextension_value(const void* self) {
    return QSslCertificateExtension_Value((QSslCertificateExtension*)self);
}

bool q_sslcertificateextension_is_critical(const void* self) {
    return QSslCertificateExtension_IsCritical((QSslCertificateExtension*)self);
}

bool q_sslcertificateextension_is_supported(const void* self) {
    return QSslCertificateExtension_IsSupported((QSslCertificateExtension*)self);
}

void q_sslcertificateextension_delete(void* self) {
    QSslCertificateExtension_Delete((QSslCertificateExtension*)(self));
}

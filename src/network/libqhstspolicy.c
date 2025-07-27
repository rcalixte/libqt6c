#include "../libqdatetime.hpp"
#include "libqhstspolicy.hpp"
#include "libqhstspolicy.h"

QHstsPolicy* q_hstspolicy_new() {
    return QHstsPolicy_new();
}

QHstsPolicy* q_hstspolicy_new2(void* expiry, int64_t flags, const char* host) {
    return QHstsPolicy_new2((QDateTime*)expiry, flags, qstring(host));
}

QHstsPolicy* q_hstspolicy_new3(void* rhs) {
    return QHstsPolicy_new3((QHstsPolicy*)rhs);
}

QHstsPolicy* q_hstspolicy_new4(void* expiry, int64_t flags, const char* host, int64_t mode) {
    return QHstsPolicy_new4((QDateTime*)expiry, flags, qstring(host), mode);
}

void q_hstspolicy_operator_assign(void* self, void* rhs) {
    QHstsPolicy_OperatorAssign((QHstsPolicy*)self, (QHstsPolicy*)rhs);
}

void q_hstspolicy_swap(void* self, void* other) {
    QHstsPolicy_Swap((QHstsPolicy*)self, (QHstsPolicy*)other);
}

void q_hstspolicy_set_host(void* self, const char* host) {
    QHstsPolicy_SetHost((QHstsPolicy*)self, qstring(host));
}

const char* q_hstspolicy_host(void* self) {
    libqt_string _str = QHstsPolicy_Host((QHstsPolicy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hstspolicy_set_expiry(void* self, void* expiry) {
    QHstsPolicy_SetExpiry((QHstsPolicy*)self, (QDateTime*)expiry);
}

QDateTime* q_hstspolicy_expiry(void* self) {
    return QHstsPolicy_Expiry((QHstsPolicy*)self);
}

void q_hstspolicy_set_includes_sub_domains(void* self, bool include) {
    QHstsPolicy_SetIncludesSubDomains((QHstsPolicy*)self, include);
}

bool q_hstspolicy_includes_sub_domains(void* self) {
    return QHstsPolicy_IncludesSubDomains((QHstsPolicy*)self);
}

bool q_hstspolicy_is_expired(void* self) {
    return QHstsPolicy_IsExpired((QHstsPolicy*)self);
}

void q_hstspolicy_set_host2(void* self, const char* host, int64_t mode) {
    QHstsPolicy_SetHost2((QHstsPolicy*)self, qstring(host), mode);
}

const char* q_hstspolicy_host1(void* self, int64_t options) {
    libqt_string _str = QHstsPolicy_Host1((QHstsPolicy*)self, options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hstspolicy_delete(void* self) {
    QHstsPolicy_Delete((QHstsPolicy*)(self));
}

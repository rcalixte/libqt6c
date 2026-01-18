#include "libqhostaddress.hpp"
#include "libqhostinfo.hpp"
#include "libqhostinfo.h"

QHostInfo* q_hostinfo_new() {
    return QHostInfo_new();
}

QHostInfo* q_hostinfo_new2(void* d) {
    return QHostInfo_new2((QHostInfo*)d);
}

QHostInfo* q_hostinfo_new3(int lookupId) {
    return QHostInfo_new3(lookupId);
}

void q_hostinfo_operator_assign(void* self, void* d) {
    QHostInfo_OperatorAssign((QHostInfo*)self, (QHostInfo*)d);
}

void q_hostinfo_swap(void* self, void* other) {
    QHostInfo_Swap((QHostInfo*)self, (QHostInfo*)other);
}

const char* q_hostinfo_host_name(void* self) {
    libqt_string _str = QHostInfo_HostName((QHostInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hostinfo_set_host_name(void* self, const char* name) {
    QHostInfo_SetHostName((QHostInfo*)self, qstring(name));
}

libqt_list /* of QHostAddress* */ q_hostinfo_addresses(void* self) {
    libqt_list _arr = QHostInfo_Addresses((QHostInfo*)self);
    return _arr;
}

void q_hostinfo_set_addresses(void* self, libqt_list /* of QHostAddress* */ addresses) {
    QHostInfo_SetAddresses((QHostInfo*)self, addresses);
}

int32_t q_hostinfo_error(void* self) {
    return QHostInfo_Error((QHostInfo*)self);
}

void q_hostinfo_set_error(void* self, int32_t error) {
    QHostInfo_SetError((QHostInfo*)self, error);
}

const char* q_hostinfo_error_string(void* self) {
    libqt_string _str = QHostInfo_ErrorString((QHostInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hostinfo_set_error_string(void* self, const char* errorString) {
    QHostInfo_SetErrorString((QHostInfo*)self, qstring(errorString));
}

void q_hostinfo_set_lookup_id(void* self, int id) {
    QHostInfo_SetLookupId((QHostInfo*)self, id);
}

int32_t q_hostinfo_lookup_id(void* self) {
    return QHostInfo_LookupId((QHostInfo*)self);
}

void q_hostinfo_abort_host_lookup(int lookupId) {
    QHostInfo_AbortHostLookup(lookupId);
}

QHostInfo* q_hostinfo_from_name(const char* name) {
    return QHostInfo_FromName(qstring(name));
}

const char* q_hostinfo_local_host_name() {
    libqt_string _str = QHostInfo_LocalHostName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_hostinfo_local_domain_name() {
    libqt_string _str = QHostInfo_LocalDomainName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hostinfo_delete(void* self) {
    QHostInfo_Delete((QHostInfo*)(self));
}
